# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.

## Current State

The codegen-driven coroutine scheduler and MMC3 8KB dispatch remapping are working. The intro/title screen runs noticeably faster than the old Fiber hack. The game crashes when entering a stage due to 4 missing functions in bank 4's upper 8KB.

## Immediate Next Step: Add extra_func for 4 bank 4 addresses, then oracle compare

Add these temporarily to game.toml while Option B (multi-pass discovery) is built:
```toml
[[extra_func]]
bank = 4
addr = 0xA716

[[extra_func]]
bank = 4
addr = 0xA00C

[[extra_func]]
bank = 4
addr = 0xA00F

[[extra_func]]
bank = 4
addr = 0xA012
```

Then regenerate, rebuild, run oracle comparison (tools/full_compare.py) to measure how much closer the native build is to the emulator with the new scheduler.

## After That: Option B — Multi-pass function discovery

The real fix for missing functions. Currently function_finder seeds $8000 (and now $A000) per bank and BFS-discovers from there. Functions only reachable via cross-bank dispatch from the fixed bank are missed.

**Multi-pass approach:**
1. Pass 1: Walk the fixed bank only. Every bank-switch + JSR/JMP reveals a (bank, addr) pair.
2. Pass 2: Seed discovered (bank, addr) pairs and BFS from those.
3. Result: only generates functions for code that's actually called.

This replaces blind per-bank seeding with targeted discovery. No per-game extra_func needed.

## Session 9 Accomplishments

1. **Full Nestopia oracle bridge** — emulated mode syncs ALL state (CPU, PPU, VRAM, CHR, palette, OAM)
2. **Ring buffer fix** — game_fill_frame_record was corrupting frame_number
3. **Systematic divergence comparison** — proved scheduler was root cause (0/20 frames matched)
4. **Removed 200-line Fiber hack from extras.c** — replaced with codegen-driven coroutines
5. **Coroutine pattern detection in code_generator.c** — yield, resume, scheduler entry, START
6. **Fiber-based coroutine runtime** in nesrecomp/runner (generic, not game-specific)
7. **MMC3 8KB bank awareness** — function_finder seeds $A000, dispatch remaps addresses
8. **MMC3 dispatch remapping** — g_mmc3_r6_odd/r7_even adjusts addresses at dispatch time

## Known Dispatch Misses (bank 4)

| Address | Bank | Status |
|---------|------|--------|
| $A716 | 4 | Missing — needs extra_func or multi-pass discovery |
| $A00C | 4 | Missing |
| $A00F | 4 | Missing |
| $A012 | 4 | Missing |

Also bank 14: $BB34, $C8D0, $C8DB — less critical (not on the crash path).

## Build Commands

```bash
CMAKE="/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"

# Build recompiler
"$CMAKE" --build nesrecomp/build/recompiler --config Release

# Regenerate
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Reconfigure (after new source files)
"$CMAKE" -S . -B build -G "Visual Studio 17 2022" -A x64

# Build game
"$CMAKE" --build build --config Release
```

## TCP Ports
- Native: **4372**
- Emulated: **4373**
