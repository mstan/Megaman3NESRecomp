# Mega Man 3 Recomp — Session 19 Handoff

## FIRST: Read These Files

1. **CLAUDE.md** — Project rules. Non-negotiable. TCP debug + oracle comparison + Ghidra mandatory.
2. **PRINCIPLES.md** at `F:\Projects\PRINCIPLES.md` — Global debugging rules. Find the first divergence. Diff state.
3. **Memory files** in `~/.claude/projects/F--Projects-nesrecomp-release-megaman3/memory/` — TCP reference, debugging approach, feedback rules.
4. **ISSUES.md** — Full issue history. Issues 1-3, 6-7, 9-11 fixed. Issue 4 (audio) deferred. **Issues 8, 14, 15 are the active priorities.**

## Branch State

**fix/coroutine-resume-codegen** — pushed to master after Session 17. All prior work merged.
Two outstanding commits possible: any new fixes from Session 19.

## Where Session 17 Left Off

Session 17 fixed Issues 9 and 10 (alternating frame flicker + garbled portraits) by fixing the **MMC3 8KB cross-boundary dispatch** in the recompiler:
- `code_generator.c`: Cross-8KB JMP/JSR within 16KB banks now use `call_by_address()` dispatch
- `function_finder.c`: Cross-8KB targets get mirrored function entries (±$2000) — 139 additional functions discovered

Mega Man now spawns in the stage correctly and stands without flicker. **But gameplay is still broken** — see priorities below.

## Current State (verified by user)

- Title screen: working
- Stage select: working, portraits correct
- Stage entry: lands in gameplay (but cutscene skipped)
- Mega Man: spawns and stands correctly, no rendering flicker
- **Robot master intro cutscene: SKIPPED entirely** (Issue 8)
- **Gameplay actions trigger dispatch misses** (e.g., sliding) (Issue 14)
- **Enemies: garbled tiles + no collision physics** (Issue 15)
- No audio (Issue 4 — deferred)

## Priorities for Session 19

### Priority 1: Issue 14 — Gameplay dispatch misses

**This likely unblocks Issues 8 and 15 simultaneously.** Many gameplay paths are missing function entries because the function finder's static BFS doesn't reach them.

**Approach:**
1. Launch native build, navigate to gameplay
2. Capture full stdout dispatch miss log
3. Send button input via TCP (`tools/send_input.py`) to trigger:
   - Walk left/right
   - Jump
   - Slide (DOWN+A)
   - Shoot (B)
   - Walk into where enemies should be
4. For each unique miss, identify the source:
   - Is it cross-8KB on MMC3? → Bug in Session 17 fix (extend it)
   - Is it cross-bank from fixed bank? → Function finder bank-switch detection gap
   - Is it called from a table-based dispatch? → Add inline_dispatch entry
5. Stopgap: Add observed misses as `extra_func` entries in game.toml
6. Proper fix: Multi-pass discovery in `function_finder.c` (see Issue 12 notes)

**Key TCP commands:**
- `set_input` — override controller (hex bitmask: 0x80=A, 0x40=B, 0x20=SELECT, 0x10=START, 0x08=UP, 0x04=DOWN, 0x02=LEFT, 0x01=RIGHT)
- `clear_input` — release
- `mm3_state` — game mode, sub mode, stage, weapon, lives

### Priority 2: Issue 15 — Enemy CHR + collision

After dispatch misses are resolved, check if enemies still have garbled tiles:
1. Compare native vs emulated OAM and CHR RAM at the same gameplay state
2. If still wrong: trace CHR bank writes during enemy spawn
3. Compare enemy slot RAM ($0300-$05FF) between builds

### Priority 3: Issue 8 — Cutscene skipped

Once Issue 14 is fixed, retry stage entry and check whether the intro cutscene plays. If still skipped:
1. Compare `sched_state` immediately after pressing A on stage select
2. Check `sched_trace` for cutscene-related coroutine starts
3. Diff $31 (game_mode) and $46 (sub_mode) transitions vs emulated oracle

### Priority 4: Issue 13 — $D3FD bank 13 dispatch miss

Minor cleanup: add `extra_func 13 0xD3FD` to game.toml or investigate why BFS missed it.

### Priority 5 (long-term): Issue 4 — Audio

Sound engine needs `jump_local_ptr` pattern support in `code_generator.c`. This is a larger recompiler change.

## Build Commands

```bash
# Build recompiler (after code_generator.c or function_finder.c changes)
"/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/MSBuild/Current/Bin/MSBuild.exe" \
  "F:/Projects/nesrecomp-release/megaman3/nesrecomp/build/recompiler/NESRecomp.sln" \
  -p:Configuration=Release -p:Platform=x64 -v:minimal

# Regenerate game code
cd F:/Projects/nesrecomp-release/megaman3
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game
"/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/MSBuild/Current/Bin/MSBuild.exe" \
  "F:/Projects/nesrecomp-release/megaman3/build/MegaMan3Recomp.sln" \
  -p:Configuration=Release -p:Platform=x64 -v:minimal
```

## Running the Game

```bash
cd build/Release

# Native (port 4372):
./MegaMan3Recomp.exe "F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES" \
  --script F:/Projects/nesrecomp-release/megaman3/scripts/gameplay_hold.txt \
  > C:/temp/stdout.txt 2>&1

# Emulated oracle (port 4373):
./MegaMan3Recomp.exe "F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES" --emulated \
  --script F:/Projects/nesrecomp-release/megaman3/scripts/gameplay_hold.txt \
  > C:/temp/emu_stdout.txt 2>&1
```

Kill before relaunch: `taskkill //F //IM MegaMan3Recomp.exe`

## Scripts and Tools (Session 17 additions)

| Script/Tool | Purpose |
|-------------|---------|
| `scripts/gameplay_hold.txt` | Boot → title → stage select → UP → A → gameplay, hold for TCP |
| `tools/tcp_query.py` | Generic TCP query (port, command) |
| `tools/frame_diff.py` | Ring buffer frame diff (2 consecutive frames) |
| `tools/trace_7a.py` | Trace $7A/PPUCTRL/scroll over 20 frames |
| `tools/follow_fd.py` | Write follower on $FD |
| `tools/send_input.py` | Send button input via TCP (port, hex_btn) |

## Critical Reminders

- **NEVER edit generated files** (`generated/*_full.c`, `generated/*_dispatch.c`)
- **Fix the tool, not the output** — recompiler bugs go in `nesrecomp/recompiler/`
- **Use Ghidra** for any unknown 6502 address (`mcp__ghidra_mm3__get_code`)
- **Use TCP, not printf** — extend `extras.c` if needed, never log to stdout
- **Compare native vs emulated** for every claim — the oracle is at port 4373
- **Find the first divergence** — single-frame inspection is not enough, use ring buffer timeseries

## Ghidra State

4 programs open: bank11.bin, bank12.bin, bank14.bin, bank15.bin.
Other banks (0-10, 13) need to be loaded if dispatch misses point there.
