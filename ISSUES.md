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

## Issue 6: Robot master intro cinematic skipped (coroutine scheduler broken)
**Severity:** Critical
**When:** Entering a stage from stage select
**Symptom:** Stage loads directly — boss name card, portrait, and teleport-down
animation are all missing. The stage geometry appears immediately.

**Root cause:** The coroutine scheduler at `$FEAA` uses TXS/TSX + PLA/RTS to
save and resume cooperative coroutines via the 6502 hardware stack. In the recomp,
JSR becomes a C function call (no return address pushed to the 6502 stack), and
RTS becomes `return;` (no stack pop/dispatch). This means:

1. The scheduler's resume-RTS finds no valid return address on the 6502 stack
2. Even with `push_all_jsr` (which fixes the stack data), the resume via
   `call_by_address` starts a fresh C call — the nested call chain above the
   resume point is lost
3. Each resume/yield cycle pops 6 bytes (PLA+PLA+RTS) without replenishing them,
   so the saved stack pointer drifts upward into uninitialized memory

**What works so far:**
- `push_all_jsr` in game.cfg: all JSRs push return addresses to the 6502 stack ✓
- `replace_func -1 FEAA` in extras.c: scheduler reads channel table, does
  PLA/PLA, dispatches resume address via call_by_address ✓
- 6502 stack contains valid return addresses ✓

**What's broken:** After `call_by_address(resume_addr)`, the coroutine runs in a
fresh C call frame. When it hits RTS, it returns to the scheduler (or nowhere),
not to the function that originally called it. The full nested call chain that was
on the 6502 stack is not represented in the C call stack.

**Example:** A coroutine does `JSR game_logic` → `JSR sub_func` → `JSR FF21`
(yield). The 6502 stack holds return addresses for all three JSRs. On resume, the
real CPU continues inside `sub_func`, which returns to `game_logic`, which
eventually yields again. In the recomp, `call_by_address(sub_func_resume)` enters
`sub_func` from the resume point, but its RTS has nowhere to return to — the
`game_logic` frame doesn't exist on the C call stack.

### Solution approaches (in priority order)

**Approach 1: setjmp/longjmp**
Save the C execution context when a coroutine yields (`setjmp`), restore it on
resume (`longjmp`). This preserves the full C call stack.
- `func_FF21` (yield): `setjmp(coroutine_ctx[ch])`, then return up the C stack
- Scheduler resume: `longjmp(coroutine_ctx[ch], 1)` instead of `call_by_address`
- Pros: standard C, portable, minimal code change
- Cons: all functions between yield and scheduler must be on the C stack at
  setjmp time; if the scheduler is called from a different stack depth the
  jmp_buf is invalid

**Approach 2: OS fibers (Windows Fibers / POSIX ucontext)**
Each coroutine channel gets its own OS-level execution context with a separate C
stack. The scheduler switches between fibers.
- `func_FF21` (yield): `SwitchToFiber(scheduler_fiber)`
- Scheduler resume: `SwitchToFiber(channel_fiber[ch])`
- Pros: true coroutine semantics, each channel has its own C stack, no jmp_buf
  lifetime issues
- Cons: platform-specific, needs per-fiber stack allocation

**Approach 3: State-machine restructuring**
Analyze each coroutine function and rewrite it as a state machine where each
resume point is a proper function entry. The scheduler sets a state variable and
calls the entry point.
- Pros: no OS dependencies, works with plain C calls
- Cons: extremely invasive, per-game analysis, not game-agnostic, fragile

### Observed dispatch misses during scheduler resume
These are mid-function return addresses that need `extra_label` entries if
approach 1 or 2 doesn't fully resolve them:
- `$C0BB` (inside NMI handler, after `JSR $FF41`)
- `$FF2B` (inside `func_FF21`, after `JSR $FF14`)
- `$FFC2` (inside `func_FF6B`, after `JSR $8000`)
- `$F690` (fixed bank)
- `$B001` (switchable bank 12)

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

**Status:** Not yet investigated — blocked by Issue 7 (can't efficiently navigate native build to this point)

### Planned investigation
1. Navigate both native + emulated to cutscene via TCP (or fix Issue 7 first)
2. Diff PPU state: CHR banks, nametable, OAM/sprites, palette
3. Check if cutscene coroutine channel is running correctly (scheduler state)
4. Trace any CHR bank or sprite write divergences

### Relationship to Issue 6
Issue 6 (scheduler broken) was previously marked as critical but the cutscene "eventually proceeds" — this may indicate the scheduler IS working (via Fibers) but some rendering state is wrong during the cutscene sequence.

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

## Tools created this session (Session 5)

| Script | Purpose |
|--------|---------|
| `scripts/diff_ppu_state.py` | Full PPU diff: CHR, nametable, palette, PPU regs, mapper, key RAM between ports 4372/4373 |
| `scripts/check_state.py` | Query game state on both ports, pause both, screenshot |
| `scripts/tcp_navigate.py` | Navigate game step-by-step via TCP with state logging at each transition |
| `scripts/bug_repro_stage.txt` | Input script to navigate to stage (timing-based, needs improvement with WAIT_RAM8) |

---

## General Notes
- Title screen, stage select, and gameplay are working
- Turbo mode runs at ~1500+ fps (Issue 7 fixed)
- Game no longer freezes from recursive func_FF90 (Session 6 fix)
- Stage background flicker persists (Issue 9 — awaiting disasm import)
- Dispatch misses: $C297 (fixed bank, added), $BB34 (bank 14, added), plus likely more
- TCP debug server on port 4372 (native) / 4373 (emulated)
- Emulated oracle PPU reads return zeros (known Nestopia internal state gap)
- Test scripts in `scripts/` directory for automated regression testing
