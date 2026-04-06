# Mega Man 3 Recomp — Session 16 Handoff

## FIRST: Read These Files

1. **CLAUDE.md** — The project rules. Non-negotiable. Key points:
   - This is a **static NES recompiler**, not an emulator. We achieve byte-level equivalence with an emulator oracle.
   - **NO GUESSING.** Every claim must be backed by measured data.
   - **NO STDOUT DEBUGGING.** All debugging uses the TCP ring buffer. Printf/logging is forbidden.
   - **ALWAYS USE ORACLE COMPARISON.** Native vs emulated must be compared.
   - **FIX ROOT CAUSE ONLY.** No symptom patches. No speculative fixes.
   - **FIX THE TOOL, NOT THE OUTPUT.** Never modify generated code. Fix code_generator.c or runner.
   - **TCP debugging is mandatory.** If tooling is missing, build it first, then continue.
   - **Ghidra before guessing.** Call `mcp__ghidra_mm3__get_program_info` before investigating any unknown 6502 address.
   - Debugging protocol: Sync state → Dump both sides → Diff → First divergence → Trace write → Classify → Fix.
   - Build commands, key files, input scripts, save states are all documented there.

2. **Memory files** (in `~/.claude/projects/.../memory/`):
   - `reference_tcp_debug.md` — **TCP command reference.** Ports 4372 (native) / 4373 (emulated). JSON-over-newline protocol. Commands: `ping`, `read_ram`, `read_ppu`, `mapper_state`, `mm3_state`, `sched_state`, `a000_trace`, `screenshot`, `call_stack`, `watch`, `follow`, `pause/continue/step`, `run_to_frame`, `frame_timeseries`, `history`, etc. Input bitmask: 0x80=A, 0x40=B, 0x20=SELECT, 0x10=START, 0x08=UP, 0x04=DOWN, 0x02=LEFT, 0x01=RIGHT. Debug.ini must exist next to exe for native TCP to start.
   - `feedback_debugging_approach.md` — **Debugging priority.** Rule 0: TCP server first. Rule 1: extend TCP if needed (add commands to `game_handle_debug_cmd()` in extras.c). Rule 2: Ghidra to understand 6502 code, then verify with TCP. Never skip to Ghidra or code-level logging first.
   - `feedback_tcp_not_printf.md` — **TCP over printf.** Build TCP commands instead of adding printf. Printf is a last resort, must be temporary.
   - `feedback_fix_codegen.md` — When native diverges from emulated, fix the recompiler/runner. Don't propose workarounds or claim things are impossible.
   - `feedback_fix_nesrecomp.md` — nesrecomp is beta. Fix regressions in it, don't work around them.
   - `feedback_tcp_port.md` — One game instance at a time. Unique ports per game.

3. **ISSUES.md** — Full issue history. Issues 1-3, 6-7, 9, 11 are fixed. Issue 4/5 (audio) are deferred. **Issue 10 is the active bug.**

## Branch State

**fix/coroutine-resume-codegen** — Issue 10 (garbled stage select portraits) is the active investigation.

## Issue 10: Garbled Stage Select Portraits

### The Symptom

The boss portrait FACES in rows 2 and 3 of the stage select are swapped. The name TEXT labels are correct.

**Native (broken):**
```
Row 1: Spark ✓   Snake ✓   Needle ✓   (correct faces and names)
Row 2: Gemini ✗  Magnet ✗  Shadow ✗   (WRONG faces — these belong in row 3)
       HARD MAN  [cursor]  TOP MAN    (correct names)
Row 3: Hard ✗    Mega ✗    Top ✗      (WRONG faces — these belong in row 2)
       GEMINI    MAGNET    SHADOW     (correct names)
```

**Emulated (correct):** Hard/Mega/Top faces in row 2, Gemini/Magnet/Shadow faces in row 3.

### What Session 15 Proved

1. **Mirroring is NOT the issue.** Sessions 12-14 diagnosed a mirroring mismatch. This was wrong — the `mapper_state` TCP command had a bug reading `ctrl0 bit 0` (CHR A12 inversion) as mirroring. Both builds have **vertical mirroring**. The mapper_state command is now fixed to read actual PPU nametable bank mapping via `nestopia_bridge_get_mirroring()`.

2. **All steady-state PPU data is IDENTICAL between builds:**
   - Nametable pages 0 and 1: **0 differences** (tile indices match perfectly)
   - CHR pattern data: **0 differences** across all 8KB
   - BG palette: **identical**
   - Scroll/PPUCTRL shadows: **identical** ($FC-$FF = 00001888)
   - MMC3 bank registers: **identical** (R0=$7C R1=$7E R2=$38 R3=$39 R4=$36 R5=$34 R6=$18 R7=$13)

3. **The bug is CHR bank switching TIMING during portrait loading.** Since nametable tile indices are correct (the names match their positions) but the portrait face bitmaps are wrong, the CHR tile data must have been different at the moment the portrait tiles were written to CHR RAM. The game loads portrait CHR data by switching MMC3 CHR banks and copying tile patterns. If the bank switches happen in the wrong order, the wrong portrait patterns end up in the wrong tile slots.

### What to Do Next

**Trace the CHR bank switch sequence during stage select portrait loading:**

1. Add a CHR bank write trace (like the existing `a000_trace`) that records MMC3 $8000/$8001 writes with frame number and caller function. This will capture the exact sequence of CHR bank switches during portrait setup.

2. Run both native and emulated to the stage select. Compare the CHR bank switch traces to find where the native build diverges.

3. Key function: **func_939E_b12** — called multiple times with different X register values ($10, $11, $03, $04) during stage select setup in func_9009_b12. This likely handles CHR bank switching for portrait tile loading. Investigate in Ghidra.

4. Once the divergent bank switch is identified, determine why — likely a codegen issue (wrong execution order), a dispatch miss (function not found), or a timing issue (NMI interrupting CHR loading and changing banks).

### Key Addresses

| Address | Bank | What |
|---------|------|------|
| `$939E` | 8KB 24 (16KB 12) | func_939E_b12 — likely CHR bank setup for portraits |
| `$9009` | 8KB 24 (16KB 12) | Title/stage select init — calls 939E multiple times |
| `$9258` | 8KB 24 (16KB 12) | Stage select input loop entry |
| `$8000/$8001` | mapper regs | MMC3 bank select/data — controls CHR mapping |
| `$C8D0` | fixed | Main coroutine entry |
| `$C8FF` | fixed | Game mode init (reached AFTER stage select returns) |

## Build Commands

```bash
# Build with MSBuild (cmake generator not available in bash shell)
"/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/MSBuild/Current/Bin/MSBuild.exe" \
  "F:/Projects/nesrecomp-release/megaman3/build/MegaMan3Recomp.sln" \
  -p:Configuration=Release -p:Platform=x64 -v:minimal

# Build recompiler (after code_generator.c changes)
cmake --build nesrecomp/build/recompiler --config Release

# Regenerate game code
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"
```

## Running the Game

```bash
cd build/Release

# Native (port 4372):
./MegaMan3Recomp.exe "path/to/Mega-Man 3 # NES.NES" --script path/to/script.txt > C:/temp/stdout.txt 2>&1

# Emulated oracle (port 4373):
./MegaMan3Recomp.exe "path/to/Mega-Man 3 # NES.NES" --emulated --script path/to/script.txt > C:/temp/stdout.txt 2>&1
```

Kill before relaunch: `taskkill //F //IM MegaMan3Recomp.exe`

## TCP Query Tool

```bash
# Generic TCP query:
python3 tools/tcp_query.py <port> <command>

# Examples:
python3 tools/tcp_query.py 4372 mm3_state
python3 tools/tcp_query.py 4372 a000_trace
python3 tools/tcp_query.py 4373 mapper_state
```

## TCP Commands (Session 15 additions)

| Command | Description |
|---------|-------------|
| `a000_trace` | $A000 write history — 64-entry ring buffer with frame, value, caller function |
| `mapper_state` | MMC3 state — **now reports correct mirroring** from Nestopia PPU in emulated mode |
| `mirror_debug` | $A000 write count, last value, current mirroring |

See `reference_tcp_debug.md` in memory for the full command list.

## Scripts Available

| Script | Path | Purpose |
|--------|------|---------|
| `scripts/mirror_hold.txt` | Game script | Boot → title → Start → stage select, hold 5 min for TCP |
| `tools/tcp_query.py` | Python | Generic TCP query (port, command) |
| `tools/nt_diff.py` | Python | Full nametable comparison between native and emulated |
| `tools/chr_diff.py` | Python | Full CHR pattern comparison between builds |
| `tools/full_state_diff.py` | Python | PPU register/palette/scroll comparison |
| `tools/check_nt2.py` | Python | Deep nametable analysis (single build) |
| `tools/check_nt_emu.py` | Python | Deep nametable analysis (emulated) |
| `tools/dbg.py` | Python | Original TCP debug client |

## Fixes Applied This Session

1. **extras.c** — `mapper_state` mirror field now calls `nestopia_bridge_get_mirroring()` instead of reading wrong ctrl0 bit
2. **nestopia_bridge.cpp/h** — Added `nestopia_bridge_get_mirroring()` reading PPU nametable bank mapping
3. **mapper.c/h** — Added $A000 write trace ring buffer (64 entries: frame, value, caller)
4. **extras.c** — Added `a000_trace` TCP command

## Ghidra State

4 programs open: bank11.bin, bank12.bin [has stage select code], bank14.bin, bank15.bin. func_939E_b12 is at $939E in bank12.bin.
