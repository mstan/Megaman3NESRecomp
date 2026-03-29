# Mega Man 3 — Known Issues

## Issue 1: Artifact on Capcom copyright screen
**Severity:** Fixed
**When:** Capcom copyright splash screen (frames ~120-240)
**Symptom:** Spurious artifact visible in the bottom-left corner of the screen.
**Root cause:** The NMI hardware push in `main_runner.c` only pushed 2 bytes (PCH + P) instead of the real 6502's 3 bytes (PCH, PCL, P). This caused the NMI handler's stack-relative writes at `$C112`/`$C117` to overshoot by one byte. When `S=$FF`, the write at `$0107+X` resolved to `$0200` (OAM sprite buffer), corrupting sprite 0's Y position with `$C1` (193) every frame.
**Fix:** Push 3 bytes in `nes_vblank_callback()` and pop 3 in RTI code generation.

## Issue 2: Selection caret stuck below menu items
**Severity:** Fixed
**When:** Title screen, after logo animation completes
**Symptom:** The arrow/caret sprite appeared below both "GAME START" and "PASS WORD" instead of next to one of them. D-pad input didn't visibly move it.
**Root cause:** Same as Issue 1. The NMI overwrote `$0200` (caret sprite Y) with `$C1` every frame. D-pad correctly wrote the right Y value, but the next NMI immediately overwrote it.
**Fix:** Same as Issue 1.

## Issue 3: Player stuck at top of screen after stage load
**Severity:** Fixed
**When:** Select a boss from the stage select screen
**Symptom:** Stage graphics loaded correctly (background, terrain, enemies) but Mega Man spawned at Y=0 (top of screen) and was unresponsive to input.
**Root cause:** Two missing function entry points in `game.cfg`:
- `extra_func -1 D5BA` — a fixed-bank sprite processing routine called during the gameplay loop
- `extra_func 4 8716` — bank 4 enemy/sprite AI code

Without these, `call_by_address` logged dispatch misses and returned without executing, causing the player physics and sprite processing to never run. Mega Man was active (`$0300=$80`) but his position was never updated.
**Fix:** Added the two `extra_func` entries to `game.cfg` and regenerated.
**Note:** The NMI trampoline at `$C121` (which calls `$FF90` for the sound engine tick) is still dead code in the recomp. This means no audio, but gameplay is unaffected. Fixing the sound engine requires handling the `jump_local_ptr` pattern at `$8023` (PLA-return-address-as-data) in the recompiler.

## Issue 4: No audio (sound engine not ticking)
**Severity:** Minor (gameplay unaffected)
**When:** Always
**Symptom:** No music or sound effects play.
**Root cause:** The NMI trampoline at `$C121` is dead code in the recomp. On real hardware, `func_C000` (NMI handler) modifies the RTI return address on the 6502 stack to redirect to `$C121`, which calls `$FF90` (sound engine tick). In the recomp, RTI returns via C `return`, never reaching `$C121`.

Calling `func_FF90()` directly causes dispatch misses because the sound engine uses `jump_local_ptr` at `$8023` — a 6502 pattern where PLA grabs the JSR return address to read inline data tables. In the recomp, PLA gets garbage because JSR uses C function calls, not the 6502 stack.
**Diagnosis steps:**
1. Add `inline_dispatch` entries to `game.cfg` for the sound engine's `jump_local_ptr` call sites in bank 11
2. Or implement the `jump_local_ptr` pattern in the recompiler's code generator (PATTERNS.md)
3. Then call `func_FF90()` in `game_run_nmi()` after `verify_mode_run_nmi()`

## Issue 5: Remaining dispatch misses in sound engine (bank 13)
**Severity:** Minor (cosmetic — no audio, no gameplay impact)
**When:** During gameplay, every frame
**Symptom:** Dispatch miss log entries for bank 13 addresses `$0000`, `$00EF`-`$00FD`. These are RAM addresses, not PRG ROM.
**Root cause:** Same as Issue 4. The sound engine's `jump_local_ptr` resolves to garbage RAM addresses because the PLA-return-address pattern doesn't work in the recomp.

---

## Reference: MM3 Weapon System RAM Map

| Address | Description | Values |
|---------|-------------|--------|
| `$A0`   | Current weapon index | `$00`=Mega Buster, `$01`=Needle Cannon, `$02`=Magnet Missile, `$03`=Gemini Laser, `$04`=Hard Knuckle, `$05`=Top Spin, `$06`=Search Snake, `$07`=Spark Shock, `$08`=Shadow Blade |
| `$A2`   | Needle Cannon energy | `$00`-`$1C` (0-28) |
| `$A3`   | Magnet Missile energy | `$00`-`$1C` |
| `$A4`   | Gemini Laser energy | `$00`-`$1C` |
| `$A5`   | Hard Knuckle energy | `$00`-`$1C` |
| `$A6`   | Top Spin energy | `$00`-`$1C` |
| `$A7`   | Search Snake energy | `$00`-`$1C` |
| `$A8`   | Spark Shock energy | `$00`-`$1C` |
| `$A9`   | Shadow Blade energy | `$00`-`$1C` |
| `$AE`   | Lives remaining | `$00`-`$09` |

### Script Commands for Weapon Injection

```text
WRITE_RAM8 A2 1C
WRITE_RAM8 A3 1C
WRITE_RAM8 A4 1C
WRITE_RAM8 A5 1C
WRITE_RAM8 A6 1C
WRITE_RAM8 A7 1C
WRITE_RAM8 A8 1C
WRITE_RAM8 A9 1C
WRITE_RAM8 AE 09
```

## Reference: MM3 Game State RAM Map

| Address | Description |
|---------|-------------|
| `$14`   | Controller 1 newly pressed buttons |
| `$16`   | Controller 1 held buttons |
| `$22`   | Stage number (0-based; 0-7 = robot masters) |
| `$29`   | Stage init counter / transition flag |
| `$30`   | Player animation state |
| `$31`   | Game mode (`$00`=title/menus, `$01`=gameplay) |
| `$46`   | Sub-mode |
| `$A0`   | Current weapon |
| `$AE`   | Lives |
| `$F4`   | PRG bank R6 (MMC3) |
| `$F5`   | PRG bank R7 (MMC3) |
| `$F6`   | Bank-switch-in-progress flag |
| `$0300` | Player sprite active flag (bit 7 = active) |
| `$0360` | Player X position (high byte) |
| `$0380` | Player Y position (high byte) |
| `$03C0` | Player X sub-pixel |
| `$0460` | Player Y velocity |

## Reference: NMI Trampoline Architecture

The NMI handler at `$C000` sets up a return-to-`$C121` trampoline via the 6502 stack.
On real hardware, RTI at `$C120` returns to `$C121`, which calls `$FF90` (sound engine tick).
In the recomp, `func_C000()` returns via C `return`, never reaching `$C121`.

The sound engine at `$FF90`:
1. Maps PRG banks R6=`$16`, R7=`$17` (sound engine code/data)
2. Processes sound command queue at `$DC`-`$E3`
3. Calls `JSR $8000` (main sound tick)
4. Restores game PRG banks via `$FF6B`

The sound engine uses `jump_local_ptr` at `$8023` which reads inline data from after the JSR call site. This pattern is incompatible with the recomp's C function call semantics and needs recompiler-level support.

## General Notes
- Title screen, stage select, and gameplay are fully working
- All 8 special weapons fire correctly via RAM injection
- Enemies spawn and interact with the player
- Zero critical dispatch misses during gameplay (only sound engine bank 13 misses remain)
- TCP debug server on port 4372 (native) / 4373 (emulated)
- Test scripts in `scripts/` directory for automated regression testing
