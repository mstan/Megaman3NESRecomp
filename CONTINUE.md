# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.

## Two Active Issues

### Issue 1: Robot Master Select Screen — Garbled Portraits

The stage select screen shows corrupted/mismatched robot master portraits. Names appear correct but the CHR tiles in the portrait frames are wrong — portraits don't match their labels, some are distorted. This is likely an MMC3 CHR banking issue (registers R0-R5 control CHR bank mapping, the wrong 2KB/1KB CHR banks are being loaded for the portrait tiles).

**Screenshot:** `C:\Users\Matthew\Documents\ShareX\Screenshots\2026-04\MegaMan3Recomp_JiOk9wpcik.png`

**Investigation approach:**
1. Launch native + emulated, navigate to stage select (game_mode changes, sub_mode for stage select)
2. Compare CHR RAM ($0000-$1FFF) between native and emulated at the stage select screen
3. Compare MMC3 CHR registers (R0-R5) — mapper_state command shows these
4. If CHR differs, trace which code writes to $8000/$8001 (MMC3 bank select) to find the wrong bank switch
5. This used to work better — may be a regression from the scheduler changes

### Issue 2: Stage Entry Crash — Bank 4 Dispatch Misses

Selecting any stage causes the game window to close. The log shows repeated dispatch misses:
```
$A716 bank=4, $A00C bank=4, $A00F bank=4, $A012 bank=4
```

These are in the upper 8KB of 16KB bank 4 ($A000-$BFFF range). The MMC3 dispatch remapping correctly translates $8716→$A716, but the functions don't exist in the function list because function_finder's BFS from $A000 doesn't reach them.

**Fix path (in priority order):**
1. **Temporary:** Add extra_func entries to game.toml for the 4 addresses (gets past crash)
2. **Permanent:** Implement multi-pass function discovery in function_finder.c (Option B)

**Temporary extra_func (add to game.toml):**
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

**Multi-pass discovery (Option B) — the real fix:**
1. Pass 1: Walk fixed bank. Every bank-switch + JSR/JMP reveals a (bank, addr) target.
2. Pass 2: Seed only discovered (bank, addr) pairs and BFS from those.
3. Result: no blind seeding, no garbage functions from data banks, no missing cross-bank targets.

## What Changed in Session 9

### Coroutine Scheduler (root cause fix)
- **Deleted** 200-line Windows Fiber hack from extras.c
- **Added** generic coroutine pattern detection to code_generator.c:
  - `LDX #$FF; TXS` → `coroutine_scheduler_setjmp()` (scheduler loop entry)
  - `TSX; STX zp,Y; JMP abs` → `coroutine_yield()` (yield pattern)
  - `JMP (ind)` in scheduler → `coroutine_start()` (START dispatch)
  - `PLA/TAY/PLA/TAX/RTS` after TXS → `coroutine_resume()` (RESUME dispatch)
- **Added** `coroutine.c/h` to nesrecomp/runner — Fiber-based runtime (generic, not game-specific)
- Intro screen runs noticeably faster than old Fiber hack

### MMC3 8KB Bank Awareness
- function_finder.c: Seeds both $8000 AND $A000 per bank for mapper 4
- code_generator.c: Dispatch table remaps addresses via `g_mmc3_r6_odd`/`g_mmc3_r7_even`
- Removed replace_func entries for $FEAA and $FF21 from game.toml

### Nestopia Oracle Bridge
- Full state sync: CPU, PPU, VRAM, CHR, palette, OAM from Nestopia internals
- Fixed game_fill_frame_record corrupting ring buffer frame_number
- MMC3 mapper state in get_frame/mapper_state TCP commands
- tools/full_compare.py for systematic divergence comparison

## Build Commands

```bash
CMAKE="/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"

# Build recompiler (after code_generator.c or function_finder.c changes)
"$CMAKE" --build nesrecomp/build/recompiler --config Release

# Regenerate game code
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Reconfigure cmake (after adding new source files)
"$CMAKE" -S . -B build -G "Visual Studio 17 2022" -A x64

# Build game
"$CMAKE" --build build --config Release
```

## TCP Ports
- Native: **4372**
- Emulated: **4373**

## Key Files

| File | What | Edit? |
|------|------|-------|
| `nesrecomp/recompiler/src/function_finder.c` | Function discovery + BFS | Yes — multi-pass needed |
| `nesrecomp/recompiler/src/code_generator.c` | 6502→C + coroutine patterns + dispatch | Yes |
| `nesrecomp/runner/src/coroutine.c` | Fiber-based coroutine runtime | Yes if needed |
| `nesrecomp/runner/src/mapper.c` | MMC3 bank switching + g_current_bank | Check for CHR issue |
| `extras.c` | Game hooks + TCP commands (scheduler removed) | Minimal |
| `game.toml` | Recompiler config | Add extra_func temporarily |
| `tools/full_compare.py` | Oracle comparison | Run after fixes |
