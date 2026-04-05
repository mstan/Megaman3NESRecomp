# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.

## Priority: Remove extras.c Fiber Scheduler — Fix the Recompiler Instead

### Root Cause Found

The extras.c Windows Fiber coroutine scheduler is the **root cause of all gameplay divergences**. Systematic oracle comparison (session 9) proved this:

- **0/20 aligned frames matched** between native and emulated
- Scheduler state ($80-$8F) diverges from **frame 0** — never converges
- Native channel 0 state = 0x04 (READY), emulated = 0x01 (active) — fundamentally different state machine
- Native enters gameplay 241 frames earlier than emulator (frame 1453 vs 1694)
- All downstream divergences (nametable, CHR, OAM, RAM, palette) cascade from scheduler mismatch

### Why the Scheduler Exists (and Why It Shouldn't)

MM3's coroutine scheduler at $FF00-$FF90 uses 6502 stack manipulation:
- PHA/PLA to save/restore return addresses
- RTS as computed goto (push address to stack, then RTS to jump)
- Stack-relative reads to find the caller

The recompiler can't handle these patterns, so extras.c has a ~200-line Windows Fiber reimplementation. **This violates the core rule: fix the tool, not the output.** The fix belongs in `code_generator.c` — teaching it to handle stack manipulation and RTS-as-goto patterns.

### Approach

1. **Understand the 6502 scheduler** — use Ghidra on the fixed bank ($FF00-$FF90) to document exactly what each function does with the stack
2. **Check PATTERNS.md** in nesrecomp — these patterns (PLA/PHA touching return address, RTS as computed goto) are documented there
3. **Implement codegen support** — add the pattern to code_generator.c so the recompiler generates correct C for the scheduler functions
4. **Remove the Fiber scheduler from extras.c** — once the recompiler handles it, the manual implementation is dead weight
5. **Re-run oracle comparison** to verify convergence

### What NOT to Do

- Don't patch the Fiber scheduler to match Nestopia — that's fixing the wrong thing
- Don't add more per-function overrides in game.toml — fix the pattern generically
- Don't chase individual RAM divergences — they all flow from the scheduler

### Session 9 Summary (2026-04-05)

**Committed changes:**
- Full Nestopia oracle bridge (CPU, PPU, VRAM, OAM sync from Nestopia internals)
- Fixed game_fill_frame_record corrupting ring buffer frame_number field
- MMC3 mapper state in get_frame/mapper_state TCP commands
- tools/full_compare.py — systematic dual-instance comparison tool
- Nestopia-core: accessor methods for PPU, CPU, mapper state extraction

**Key findings:**
- Divergence catalog: 374 unique entries across 20 aligned frames
- Nametable (57920 occurrences), CHR_RAM (36600), CPU_RAM (4397), OAM (751), Palette (206), Mapper (140), CPU (73), PPU (35)
- ALL divergences trace back to scheduler state mismatch from frame 0
- The extras.c Fiber scheduler is a workaround that should be replaced by proper codegen

**Tooling now available:**
- `tools/full_compare.py` — full state comparison (CPU, RAM, PPU, VRAM, CHR, palette, OAM, mapper)
- Emulated mode (`--emulated`) now syncs ALL Nestopia state to runner globals
- Ring buffer frame records now include MMC3 mapper state
- JSON divergence catalog at `C:/temp/divergence_catalog.json`

### Build Commands

```bash
# Build recompiler (only if nesrecomp source changed)
cmake --build nesrecomp/build/recompiler --config Release

# Regenerate game code
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game (use VS cmake, not devkitPro cmake)
CMAKE="/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"
"$CMAKE" --build build --config Release
```

### TCP Ports
- Native: **4372**
- Emulated: **4373**

### Comparison Command
```bash
python3 tools/full_compare.py --sample-count 20 --sample-interval 30 --output C:/temp/divergence_catalog.json
```
