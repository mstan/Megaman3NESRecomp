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
**Root cause:** Two missing function entry points in `game.toml`:
- `extra_func -1 D5BA` — a fixed-bank sprite processing routine called during the gameplay loop
- `extra_func 4 8716` — bank 4 enemy/sprite AI code

Without these, `call_by_address` logged dispatch misses and returned without executing, causing the player physics and sprite processing to never run. Mega Man was active (`$0300=$80`) but his position was never updated.
**Fix:** Added the two `extra_func` entries to `game.toml` and regenerated.
**Note:** The NMI trampoline at `$C121` (which calls `$FF90` for the sound engine tick) is still dead code in the recomp. This means no audio, but gameplay is unaffected. Fixing the sound engine requires handling the `jump_local_ptr` pattern at `$8023` (PLA-return-address-as-data) in the recompiler.

## Issue 4: No audio (sound engine not ticking)
**Severity:** Minor (gameplay unaffected)
**When:** Always
**Symptom:** No music or sound effects play.
**Root cause:** The NMI trampoline at `$C121` is dead code in the recomp. On real hardware, `func_C000` (NMI handler) modifies the RTI return address on the 6502 stack to redirect to `$C121`, which calls `$FF90` (sound engine tick). In the recomp, RTI returns via C `return`, never reaching `$C121`.

Calling `func_FF90()` directly causes dispatch misses because the sound engine uses `jump_local_ptr` at `$8023` — a 6502 pattern where PLA grabs the JSR return address to read inline data tables. In the recomp, PLA gets garbage because JSR uses C function calls, not the 6502 stack.
**Diagnosis steps:**
1. Add `inline_dispatch` entries to `game.toml` for the sound engine's `jump_local_ptr` call sites in bank 11
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

## Issue 6: Robot master intro cinematic skipped (coroutine scheduler broken)
**Severity:** Fixed (Session 9)
**When:** Entering a stage from stage select
**Symptom:** Stage loads directly — boss name card, portrait, and teleport-down
animation are all missing.

**Root cause:** The coroutine scheduler at `$FEAA` uses TXS/TSX + PLA/RTS to
save and resume cooperative coroutines via the 6502 hardware stack. In the recomp,
JSR/RTS use C function calls, so the 6502 stack-based resume mechanism doesn't work.

**Fix (Session 9):** Generic coroutine pattern detection added to `code_generator.c`:
- `LDX #$FF; TXS` → `coroutine_scheduler_setjmp()` (scheduler loop entry)
- `TSX; STX zp,Y; JMP abs` → `coroutine_yield()` (yield pattern)
- `JMP (ind)` in scheduler → `coroutine_start()` (START dispatch)
- `PLA/TAY/PLA/TAX/RTS` after TXS → `coroutine_resume()` (RESUME dispatch)
Runtime: `coroutine.c/h` in nesrecomp/runner — Windows Fibers-based, generic (not game-specific).
The old 200-line Fiber hack was deleted from extras.c.

---

## Issue 7: Native build extremely slow boot (BLOCKING)

**Severity:** Fixed
**When:** From cold boot through title screen and beyond
**Symptom:** The native (recompiled) build took ~25 seconds for 4000 frames with TURBO ON (~161 fps). After fix, reaches gameplay in ~1.9 seconds (~1500+ fps).

**Root cause:** `SDL_RENDERER_PRESENTVSYNC` on the main renderer made `SDL_RenderPresent` block for vsync (~6ms per call at 165Hz) on every frame, even in turbo mode. The manual `SDL_Delay(16)` skip in turbo was useless because vsync already blocked.

**Fix:** In turbo mode, skip `SDL_UpdateTexture`/`SDL_RenderPresent` and only present every 16th frame. Applied to both native (`main_runner.c`) and emulated (`extras.c`) paths.

**Note:** The per-instruction `maybe_trigger_vblank()` and `debug_server_check_s()` overhead was a red herring — both are cheap (1-2 branch early-outs). The bottleneck was purely the SDL present path.

### Files to examine
- `nesrecomp/runner/src/runtime.c` — `maybe_trigger_vblank()`, `debug_server_check_s()`
- `nesrecomp/runner/src/debug_server.c` — per-instruction hooks, watchpoints, TCP polling
- `extras.c:71` — `sched_fiber_proc()` tight loop
- Generated code — every instruction emits `maybe_trigger_vblank(N);`

---

## Issue 8: Robot master cutscene background glitch

**Severity:** Major (visual)
**When:** Entering a robot master stage from stage select
**Symptom:** The intro cutscene background glitches where the master sprite should appear. The master sprite never shows. Cutscene eventually proceeds to stage load.

**Status:** Not yet investigated. Issue 6 (scheduler) is now fixed, Issue 7 (slow boot) is fixed, so this is unblocked.

### Planned investigation
1. Navigate both native + emulated to cutscene via TCP
2. Diff PPU state: CHR banks, nametable, OAM/sprites, palette
3. Check if cutscene coroutine channel is running correctly (scheduler state)
4. Trace any CHR bank or sprite write divergences
5. May be related to Issue 10 (portrait CHR issue) — both involve CHR bank mapping

---

## Issue 9: Stage background tile flicker

**Severity:** Fixed
**When:** After stage loads and gameplay begins
**Symptom:** Correct stage tiles alternate with garbage tile data every few frames.

**Status:** Fixed (Session 7, 2026-04-05).

### Root cause (Session 6, 2026-04-04)

**PPUCTRL nametable bits cycle through all 4 values** (0→1→2→3) every 8 frames. This causes the PPU renderer to select different nametable pages each frame = flicker.

**Traced to RAM $FD:** The NMI handler reads $FD, masks to 2 bits, ORs with PPUCTRL shadow ($FF), writes to $2000. In the emulated build $FD = 0x00 (stable). In native build $FD cycles through garbage values, incrementing by 1 on every write (~600+ writes per 3 seconds).

**Root cause: dispatch miss at $C297.** The scanline IRQ handler dispatches to scroll setup code at $C297 via JMP ($9C). This address was NOT in the dispatch table. The dispatch miss means the scroll setup never executes → scroll state ($FD, $7A) accumulates garbage from other code running in the IRQ context.

**Contributing factor: nested VBlank re-entrancy.** The scanline IRQ handler runs inside ppu_render_frame. Its game code accumulates cycles → triggers nested VBlank → nested ppu_render_frame → nested IRQ handler. This was partially fixed by adding an early return in nes_vblank_callback at depth > 1.

**Contributing factor: func_FF90 recursive stack growth.** game_run_nmi called func_FF90 (sound engine) every NMI. The game code also calls func_FF90 directly. Nested VBlanks during func_FF90 execution caused recursive calls → unbounded C stack growth → freeze. Fixed by removing explicit func_FF90 call from game_run_nmi (sound engine doesn't work anyway — Issue 4).

### Fixes applied (Session 6)
1. Added `0xC297` to fixed function list in game.toml
2. Added `0xBB34` to bank14 function list in game.toml
3. Removed func_FF90 call from game_run_nmi (fixes freeze)
4. Added nested VBlank guard: nes_vblank_callback returns early at depth > 1 before ppu_render_frame

### Final root cause (Session 7, 2026-04-05)

**MMC3 8KB bank mismatch in dispatch table.** The recompiler uses 16KB banks, but MMC3 switches 8KB banks independently via R6/R7. When an odd 8KB bank (e.g., R6=9) is mapped to $8000-$9FFF, the dispatch table's `g_current_bank = r6/2 = 4` maps to functions generated from the WRONG 8KB half of the 16KB bank. Specifically, 16KB bank 4's first 8KB (8KB bank 8) is entirely data tables, not code. When dispatched, these "functions" contained only illegal opcodes that were treated as no-ops, with the few valid bytes between them executing random memory writes — including INC $FD.

### Fixes applied (Session 7)
1. **Runner: IRQ I-flag check** — `ppu_renderer.c`: added `&& !g_cpu.I` check and `g_cpu.I = 1` set before calling func_IRQ() in the scanline IRQ handler. Matches real 6502 IRQ masking.
2. **Runner: MMC3 8KB alignment tracking** — `mapper.c`: added `g_mmc3_r6_odd` and `g_mmc3_r7_even` flags set in mmc3_apply_prg(). (Not yet used for dispatch remapping — needed for future proper 8KB bank support.)
3. **Codegen: illegal opcode dispatch filter** — `code_generator.c`: emit_dispatch() now validates the first 8 instructions of each bank variant. If >50% are illegal opcodes, the variant is excluded from the dispatch table. This prevents data-as-code functions from being called, causing them to fall through to dispatch_miss instead.
4. **game.toml: 15 missing IRQ handler addresses** — Added all addresses from the scanline IRQ dispatch vector tables at $C4C8/$C4DA ($C198, $C1C1, $C200, $C235, $C26F, $C2D2, $C302, $C32B, $C375, $C3A3, $C3CC, $C408, $C44A, $C469, $C49C).
5. **game.toml: bank 4 data region** — Marked $8000-$A000 in bank 4 as data (8KB bank 8 is entirely data tables).

### Underlying architectural issue
The recompiler's 16KB bank granularity doesn't match MMC3's 8KB bank switching. When R6 is odd, $8000-$9FFF contains code from the SECOND 8KB of the 16KB bank, but the dispatch table selects functions generated from the FIRST 8KB. The illegal opcode filter (fix 3) is a mitigation — the proper fix requires 8KB-granularity dispatch support in the recompiler.

### Key addresses
| Address | Purpose |
|---------|---------|
| $C143   | IRQ handler entry (JMP ($9C) trampoline) |
| $9C/$9D | IRQ dispatch vector (set by NMI handler from table at $C4C8/$C4DA) |
| $C297   | Scroll setup function (reads $2002, sets $2000/$2005 for game area) |
| $C4BA   | No-op IRQ return stub (STA $E000, PLA×3, PLP, RTI) |
| $FD     | Scroll nametable source (low 2 bits → PPUCTRL bits 0-1) |
| $7A     | Copy of $FD used by NMI handler |
| $FF     | PPUCTRL shadow (base value, nametable bits OR'd from $7A) |

---

---

## Issue 10: Garbled stage select portraits

**Severity:** Major (visual)
**When:** Stage select screen
**Symptom:** Robot master names are correct but portrait CHR tiles are wrong/swapped. Portraits don't match their labels.
**Screenshot:** `C:\Users\Matthew\Documents\ShareX\Screenshots\2026-04\MegaMan3Recomp_JiOk9wpcik.png`

**Status:** Open — CHR bank timing issue (Session 15 narrowed root cause)

### Session 15: Mirroring diagnosis was WRONG

The "mirroring mismatch" diagnosis from Sessions 12-14 was based on a **bug in the mapper_state TCP command**. The command read `ctrl0 bit 0` (CHR A12 inversion mode from $8000) as mirroring, but actual mirroring is controlled by $A000 and stored in the PPU nametable mapping, not ctrl0.

**Measured (Session 15, corrected):**
- Native mapper_state.mirror = 2 (vertical) ✓
- Emulated mapper_state.mirror = 2 (vertical) ✓ (was incorrectly reported as 3)
- Nametable data IDENTICAL between native and emulated (245 differing bytes between NT0/NT1 in both, NT0==NT2, NT1==NT3)
- CHR bank registers IDENTICAL between native and emulated
- Stage select portraits display correctly in native build

**Fix applied:** `extras.c` mapper_state command now calls `nestopia_bridge_get_mirroring()` which reads the actual PPU nametable bank mapping instead of the MMC3 ctrl0 bit.

### Session 12 progress (historical)

**replace_func removed:** The `replace_func` entries for `$FEAA`/`$FF21` in `game.toml` were the cause of the "game gets stuck" behavior. Removing them lets the codegen handle the scheduler correctly. Title screen and stage select now load. This likely fixed the portrait issue as well.

---

## Issue 11: Nestopia bridge — mapper_state returns zeros

**Severity:** Fixed (Session 10)
**When:** Querying `mapper_state` on emulated port (4373)
**Symptom:** All MMC3 registers returned zero.

**Root cause:** `debug_server.c` built-in `handle_mapper_state()` ran before `game_handle_debug_cmd()`, reading native mapper statics (zeros in emulated mode).

**Fix:**
1. Added `nestopia_bridge_get_mapper_state()` to `nestopia_bridge.cpp/h` — casts `Machine::image` → `Cartridge*` → `GetBoard()` → `Mmc3*`, reads `regs`, `banks`, IRQ state
2. Added public getters to `NstBoardMmc3.hpp::BaseIrq` (`GetCount/Latch/Reload/Enabled`)
3. Added public `GetBoard()` to `NstCartridge.hpp`
4. Made `Mmc3::regs`, `banks`, `irq` public in `NstBoardMmc3.hpp`
5. Changed `debug_server.c` dispatch order: game hook runs FIRST (allows overriding built-ins)
6. Added `mapper_state` intercept in `extras.c` for `RUN_MODE_EMULATED`

**Verified:** MMC3 R0-R7 now match exactly between native and emulated at stage select

---

## Issue 12: Bank 4 dispatch misses (stage entry crash)

**Severity:** Fixed (temporary, Session 10)
**When:** Selecting any stage from stage select
**Symptom:** Game window closes. Log shows: `$A716 bank=4, $A00C bank=4, $A00F bank=4, $A012 bank=4`

**Root cause:** Functions in upper 8KB of bank 4 ($A000-$BFFF) not discovered by function_finder's BFS from $A000.

**Temporary fix:** Added 4 `extra_func` entries to `game.toml` for bank 4: `$A716`, `$A00C`, `$A00F`, `$A012`.

**Permanent fix needed:** Multi-pass function discovery in `function_finder.c`:
1. Pass 1: Walk fixed bank, collect every (bank, addr) pair reached via bank-switch + JSR
2. Pass 2: Seed only discovered (bank, addr) pairs and BFS from those
3. Eliminates blind seeding, catches all cross-bank targets

### Additional undiscovered functions (build warnings)
Dispatch table references these undefined functions:
- Bank 9: `func_B838_b9`, `func_B84E_b9`, `func_BCB4_b9`, `func_BD8C_b9`
- Bank 14: `func_8AAC_b14`, `func_8AC0_b14`
- Bank 6: `func_A123_b6`, `func_A20A_b6`, `func_A253_b6`, `func_A0E2_b6`, `func_A0ED_b6`, `func_A1ED_b6`, `func_A8FF_b6`, `func_A23A_b6`, `func_A1A8_b6`
- Fixed: `func_EC39`, `func_D6B8`, `func_EC34`

These will crash when their code paths are hit. Multi-pass discovery should find them all.

---

## Tools

| Script | Purpose |
|--------|---------|
| `tools/dbg.py` | TCP debug client (port 4372) |
| `tools/full_compare.py` | Oracle comparison (native vs emulated) |
| `tools/check_ports.py` | Quick TCP connectivity check |
| `tools/nes_compare.py` | Dual-instance comparison |
| `tools/time_travel.py` | Frame-by-frame RAM comparison |
| `tools/follow_trace.py` | RAM write follower setup/dump |

---

## General Notes
- Title screen and stage select working (portraits garbled — Issue 10, CHR timing)
- Stage entry no longer crashes (Issue 12 fixed temporarily)
- Coroutine scheduler working via codegen-driven Fibers (Issue 6 fixed, Session 9)
- Turbo mode runs at ~1500+ fps (Issue 7 fixed)
- No audio (Issue 4 — sound engine `jump_local_ptr` pattern unsupported)
- Stage background flicker fixed (Issue 9, Session 7)
- MMC3 8KB dispatch remapping working (Session 9)
- TCP debug server on port 4372 (native) / 4373 (emulated)
- Emulated oracle mapper_state fixed (Issue 11, mirroring fixed in Session 15)
