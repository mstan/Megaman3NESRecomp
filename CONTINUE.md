# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.

## Session 7 Results (2026-04-05)

### Issue 9 (Stage Flicker): FIXED

The stage background tile flicker is resolved. $FD = 0x00 on both native and emulated builds. Background tiles render stably.

**Root cause:** MMC3 8KB/16KB bank mismatch. The recompiler uses 16KB banks, but MMC3 switches 8KB banks. When R6 was odd (e.g., R6=9), `g_current_bank = r6/2 = 4` dispatched to functions generated from the wrong 8KB half — data tables instead of code. These "functions" contained illegal opcodes that corrupted RAM ($FD scroll state).

**Fixes applied:**
1. `ppu_renderer.c`: IRQ I-flag check + set (`!g_cpu.I` guard, `g_cpu.I = 1`)
2. `mapper.c`: 8KB alignment tracking vars (`g_mmc3_r6_odd`, `g_mmc3_r7_even`)
3. `code_generator.c`: Dispatch filter — skip bank variants with >50% illegal opcodes
4. `game.toml`: 15 missing IRQ handler addresses from vector tables at $C4C8/$C4DA
5. `game.toml`: Bank 4 $8000-$A000 data region (8KB bank 8 is data tables)

## Known Remaining Issues

### Issue 4: No audio (sound engine)
The sound engine uses `jump_local_ptr` at $8023 (PLA reads JSR return address as data pointer). Needs recompiler-level pattern support. Low priority — gameplay unaffected.

### Issue 6: Robot master intro cinematic (coroutine)
Fibers are implemented but the intro cutscene has visual glitches. Needs PPU state comparison during cutscene sequence.

### Issue 8: Robot master cutscene background glitch
Related to Issue 6. Visual artifacts during the boss intro.

### Architectural: MMC3 8KB bank dispatch
The illegal opcode filter (fix 3) is a MITIGATION, not a proper fix. The recompiler needs 8KB-granularity dispatch for MMC3 to correctly handle odd R6/even R7 bank configurations. When R6 is odd, addresses $8000-$9FFF contain code from the second 8KB of the 16KB bank, but dispatch selects functions from the first 8KB.

**Impact:** Some game functions dispatched during odd-R6 contexts may dispatch-miss instead of executing. This could manifest as missing gameplay behaviors (enemies not processing, etc.) depending on which 8KB banks the game uses.

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
