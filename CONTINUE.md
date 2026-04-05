# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.

## Priority: MMC3 8KB Bank Dispatch (42,645 dispatch misses per run)

### The Problem

The recompiler uses 16KB bank granularity but MMC3 switches 8KB banks independently via R6/R7. When an odd 8KB bank is mapped (e.g., R6=9), `g_current_bank = r6/2 = 4` selects functions generated from the WRONG 8KB half of the 16KB bank.

**Measured:** Running `scripts/navigate_to_stage.txt` produces **42,645 dispatch misses** — all from 8 unique addresses:

| Address | Bank | Frequency | Cause |
|---------|------|-----------|-------|
| $8000 | 4 | ~6,000/run | Odd R6 → wrong 8KB half |
| $8003 | 4 | ~6,000/run | Same |
| $8006 | 4 | ~6,000/run | Same |
| $8009 | 4 | ~6,000/run | Same |
| $800C | 4 | ~6,000/run | Same |
| $800F | 4 | ~6,000/run | Same |
| $8012 | 4 | ~6,000/run | Same |
| $A000 | 12 | ~600/run | Likely even R7 → wrong 8KB half |

These misses mean **game code is NOT executing** — enemy AI, sprite processing, and other gameplay functions dispatched during odd-R6 frames are silently skipped. The game appears to work but behaviors are missing.

### What Needs to Happen

The dispatch table must handle MMC3's 8KB bank switching. When R6 is odd and the dispatch address is in $8000-$9FFF, the correct function is from the SECOND 8KB of the 16KB bank (the recompiler generated this data at $A000-$BFFF addresses).

**Approach options:**

1. **Address remapping in dispatch**: When R6 is odd and addr is $8000-$9FFF, remap addr += $2000 before the switch. Requires function entries at the remapped addresses ($A000+) to exist. Currently many don't because the $A000 range is marked as data_region in some banks.

2. **Dual bank tracking**: Track `g_current_bank_8000` (from R6) and `g_current_bank_a000` (from R7) separately. Modify dispatch to use the appropriate one based on address range. Requires code generator changes.

3. **8KB bank granularity**: Change the recompiler to use 8KB bank indices (0-31) instead of 16KB (0-15). Most thorough but most invasive — affects function naming, dispatch table, bank tracking, all games.

**Infrastructure already in place:**
- `g_mmc3_r6_odd` and `g_mmc3_r7_even` flags are tracked in `mapper.c`
- `is_mostly_illegal()` filter in `code_generator.c` prevents data-as-code dispatch
- `skip_illegal_bodies` game.toml flag (default: true) for opt-out

### Key Files for This Fix

| File | What to change |
|------|---------------|
| `recompiler/src/code_generator.c` | Dispatch table emission — add 8KB-aware remapping |
| `runner/src/mapper.c` | Already tracks `g_mmc3_r6_odd`/`g_mmc3_r7_even` |
| `runner/include/nes_runtime.h` | Already declares the tracking vars |
| `game.toml` | May need to remove/adjust data_regions for bank 4's $A000 range |

### How to Verify

```bash
# Run with stage navigation script, capture dispatch misses
build/Release/MegaMan3Recomp.exe "Mega-Man 3 # NES.NES" --script scripts/navigate_to_stage.txt > C:/temp/output.txt 2>&1

# Count misses (target: 0)
grep -c "MISS" C:/temp/output.txt
```

## Session 7 Results (2026-04-05)

### Issue 9 (Stage Flicker): FIXED
Root cause: data-as-code execution from MMC3 8KB/16KB bank mismatch corrupted $FD.
See ISSUES.md for full details.

### Codegen Size Reduction: 78MB → 30MB
`is_mostly_illegal()` filter stubs functions with >75% illegal opcodes.
Configurable: `skip_illegal_bodies = false` in game.toml to disable.
Validated backwards-compatible with SMB, Zelda, Faxanadu.

## Other Known Issues

- **Issue 4**: No audio (sound engine uses `jump_local_ptr` — needs recompiler support)
- **Issue 6**: Robot master intro cinematic glitches (coroutine/fiber visual issues)
- **Issue 8**: Robot master cutscene background glitch (related to Issue 6)

## Build Commands

```bash
# Regenerate (auto-detects game.toml in cwd)
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game
"/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build build --config Release

# Build recompiler (only if you change code_generator.c or other recompiler source)
"/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build nesrecomp/build/recompiler --config Release
```

## TCP Ports
- Native: **4372**
- Emulated: **4373**
