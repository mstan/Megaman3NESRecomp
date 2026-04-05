# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md and DEBUG.md before doing anything. Ghidra MCP is connected (ghidra_mm3).

## Status

The copyright screen displays correctly but the game **never transitions to the title screen**. The emulated (Nestopia) build reaches the title screen by ~frame 3000; the native build stays on the copyright screen indefinitely.

## Session 3 findings (2026-04-04)

### CORRECTED: $04 write analysis

Previous session hypothesized func_FF90 deferral. **This was wrong.** $F6/$F7 are always 0 — deferral never happens.

The follow trace shows `$04` is written by `func_939E_b12` (bank12) via the scanline IRQ handler `func_C143`. But this is a **red herring** — the IRQ handler uses $04 as temporary register storage (STY $04 at entry, LDY $04 at exit). The handler is supposed to be transparent.

### Confirmed: Bank 11 = Sound Engine (NOT game state)
- `$8000` b11 → `$806C` b11: Sound engine main (4 APU channels)
- `$8003` b11 → `$80FE` → `$8106`: Sound data loader
- func_FF90 dispatches to bank11 for sound processing — working correctly
- Sound engine state ($C0-$CF) is close between native/emulated (minor timing diffs)

### The ACTUAL bug: main game code doesn't write $04
In the **emulated** build, non-IRQ game code sets `$04=0xFF` at frame 25. In the **native** build, this code path **never executes**. The follow trace only shows writes from the IRQ handler.

### Key data (ring buffer timeseries)
```
Frame 18 native: $00=FF $01=24 $02=EF $03=A4 $04=FF $05=10  ← IRQ handler wrote $04=Y=FF
Frame 19 native: $00=FF $01=00 $02=28 $03=A5 $04=00 $05=11  ← next IRQ wrote $04=Y=00
Frame 25 emulated: $00=FF $01=24 $02=EF $03=A4 $04=FF $05=10
Frame 26 emulated: $00=FF $01=00 $02=28 $03=A5 $04=FF $05=11  ← $04 stays FF
```
Note: emulated frame 26 has same $00-$03 as native frame 19, but $04=FF not 00.

### func_C143 recomp stack leak
The "double func_C143" in the follow trace stack is NOT re-entrancy — func_C143 ends with a tail call (`call_by_address + return`) and never pops its recomp stack entry. Stale entries accumulate.

### func_939E_b12 ($939E, bank12)
The scanline IRQ handler called via JMP ($009C). Does:
1. STY $04, STX $05 (save interrupted code's registers)
2. Save $F5, switch to bank 3 via func_FF6B
3. Read tables at $A56D+X, $A580+X → set up $02/$03 pointer
4. Read PPU update data via ($02),Y → write to $0780+ buffer
5. Restore $F5 via func_FF6B
6. LDY $04 (restore Y), RTS

### func_FD11 ($FD11, fixed bank) — Division routine
Divides ($00:$01) by ($02:$03), puts quotient in $04, remainder-related value in $05. Called by func_FC63 (object position calculation). **This is likely the intended writer of $04** in the game logic path.

### What to investigate next
1. **Why doesn't func_FD11 write $04=FF in native?** Set follow on $04 with longer observation. Check if func_FD11 runs at all — set follow on $06 (func_FD11's scratch reg).
2. **What calls func_FD11?** func_FC63 calls it. What calls func_FC63? Trace the call chain. If it's part of the coroutine's copyright-screen logic, verify the coroutine reaches that code path.
3. **Compare coroutine execution between native/emulated.** The coroutine at $C8D0 may be taking a different branch due to some earlier state divergence. Use `sched_state` to compare scheduler behavior.
4. **func_C752 (fixed bank) calls func_FF90 from main code, not NMI.** The sound engine is also called during normal coroutine execution, not just from game_run_nmi. This is expected MM3 behavior.

## What was fixed this session

### Fix 1: Double S+=2 in func_FF21 (extras.c line ~220)
The generated `func_FF14` already does `g_cpu.S += 2` for its RTS. extras.c had a redundant `g_cpu.S += 2` after calling func_FF14 inside func_FF21, causing a 2-byte SP offset that corrupted X/Y register restore on coroutine resume. **Removed.**

### Fix 2: NMI trampoline / func_FF90 (extras.c game_run_nmi)
MM3's NMI handler hijacks the RTI return address to jump to a trampoline at $C121 that calls `JSR $FF90` (bank-switch dispatch). In the recompiled code RTI is just a C return, so $C121 never executes. **Added `func_FF90()` call in `game_run_nmi()`.** This populated $C1-$CB and $DB/$DC correctly. RAM diff dropped from 18 to ~10 bytes. But the game still doesn't advance.

## Current bug: $04 never transitions to $FF

### Measured data (TCP ring buffer, both builds running simultaneously)
- **Emulated (Nestopia):** `$04` changes 0x00→0xFF at frame 26. Title screen appears by ~frame 3000.
- **Native:** `$04` stays 0x00 for 5000+ frames. Stuck on copyright screen.
- `$31` (game_mode) stays 0 in BOTH builds through all tested frames — it is NOT the mode indicator for the copyright→title transition.
- The coroutine IS dispatched every frame (scheduler state=4, timer=0 in ring buffer).
- No dispatch misses logged in native build.

### Remaining RAM diff at frame 50 (10 bytes)
```
$0004: native=0x00  emu=0xFF   ← KEY: never set in native
$007C: native=0x00  emu=0xB3   ← NMI return addr lo (runner pushes 0x00)
$007D: native=0x00  emu=0xFE   ← NMI return addr hi (runner pushes 0x00)
$0080: native=0x04  emu=0x01   ← scheduler state timing diff
$0081: native=0x00  emu=0x01   ← scheduler timer timing diff
$0090: native=0xFF  emu=0x00   ← NMI flag timing diff
$0092: native=0x33  emu=0x2B   ← frame counter timing diff
$00C1: native=0x01  emu=0x14   ← NMI update param (populated but DIFFERENT)
$00C2: native=0x2E  emu=0x89   ← NMI update param (populated but DIFFERENT)
$00C8: native=0x41  emu=0xB9   ← NMI update param (different)
```

### What writes $04?
Grep found writes at: $803B, $80B7, $A04D, $8226, $8296, $F1FD, $FD21, $FD49.
Bank 11's NMI handler (func_806C_b11) does NOT write $04. A different bank's handler must.

### Key unanswered question
**Is func_FF90 actually PROCESSING the dispatch queue, or always DEFERRING?**

func_FF90 checks `$F6` (re-entrancy counter set by func_FF6B). If $F6 != 0, it defers ($F7++). The coroutine may be INSIDE func_FF6B when every NMI fires (the bank handler at $8000 likely yields, keeping the coroutine inside func_FF6B with $F6=1). This would mean func_FF90 always defers and the bank dispatch queue is only processed by func_FF6B's own deferred path.

The $C1/$C2 values being DIFFERENT (not zero but wrong) between native and emulated suggests the dispatch IS running but producing wrong results.

## Next steps (follow DEBUG.md protocol)

### 1. Add TCP observability for $F6/$F7
Add `$F6` and `$F7` to the ring buffer capture in `game_fill_frame_record()` (extras.c). Query across frames to determine:
- Is $F6 always non-zero when the ring buffer captures?
- Does $F7 cycle (set by NMI func_FF90, cleared by func_FF6B)?

### 2. Load bank12.bin in Ghidra
The coroutine at $C8D0 is in bank 12. **Load `banks/bank12.bin` in Ghidra** at base address $C000 (it's 16KB, covers $C000-$FFFF but the coroutine addresses $C8xx are in the lower 8KB at offset $8xx). Actually: bank 12 as a 16KB bank covers $8000-$BFFF when loaded for the switchable region, or it may need base $8000 if it's the lower bank. Check what base address makes the code at $C8D0 match the generated output.

Also load bank 11 (`banks/bank11.bin`) — this contains the NMI bank dispatch handler (func_806C_b11 at $806C) and the $8000 entry. Understanding what func_806C_b11 does and what $C1/$C2 values it expects will clarify the different values.

### 3. Trace func_F898 via Ghidra ($F898 in bank15.bin)
func_F898 is called by the coroutine with A=0 at $C8E6. It reads the dispatch queue ($DC,X) and queues a bank number. This may be what triggers the handler that writes $04=$FF. **Ghidra $F898 in bank15.bin** to understand what bank it queues and verify the native build queues the same value.

### 4. Investigate $7C/$7D = 0/0 impact
The runner pushes 0x00/0x00 as PC placeholders for NMI. The NMI handler stores these to $7C/$7D. **Search generated code for reads of $7C and $7D** to check if game code uses these values. If so, the wrong values could affect behavior. Fix by pushing realistic PC values (e.g., a scheduler loop address like $FEB3).

### 5. Compare $C1/$C2/$C8 values
These NMI update parameters differ between native and emulated. They're set by the bank dispatch handler. If the handler runs with different input state (wrong bank, wrong A/X/Y values), it produces different results. Use Ghidra to understand what writes $C1/$C2 and what values are expected.

## Architecture

### Coroutine lifecycle
```
RESET $FE00 → init → set coroutine $C8D0 at channel 0 → scheduler fiber
Frame N:   scheduler dispatches → coroutine resumes → does work → yields
Frame N+1: NMI bumps state 1→4 → scheduler dispatches → coroutine resumes
```
The coroutine spends many frames inside func_FF6B's bank dispatch processing, because the $8000 handler yields (func_FF21) multiple times while doing per-frame game work.

### NMI handler ($C000, bank15.bin)
1. Save regs, PPU status read, check $EE/$9A skip
2. PPU updates (OAM DMA, nametable writes using $C1-$CB params)
3. Scroll/PPU mask/scanline IRQ setup
4. **Scheduler timer loop** ($C0E7-$C103): decrement timers, bump state 1→4
5. **RTI return address hijack** ($C105-$C117): save PC to $7C/$7D, replace with $C121
6. Restore regs, RTI → jumps to $C121 trampoline (on real NES)

### $C121 trampoline (bank15.bin)
Runs AFTER RTI on real NES. Saves regs, restores original return address, calls **JSR $FF90**, restores regs, RTS. In recompiled code: func_FF90() called from game_run_nmi() instead.

### func_FF90 / func_FF6B
- func_FF90: check $F6 → if 0, map banks $16/$17, process dispatch queue, call $8000 handler, clear $F7
- func_FF6B: INC $F6, bank switch, DEC $F6, check $F7 → if set, goto func_FF90

## Key files
| File | Purpose |
|------|---------|
| `extras.c` | Scheduler, TCP commands, func_FF90 call, func_FF21 yield |
| `game.toml` | Recompiler config (3087 lines) |
| `nesrecomp/runner/src/main_runner.c:475-498` | NMI register save/restore + PC placeholder push |
| `nesrecomp/runner/src/mapper.c:109` | `g_current_bank = r6 / 2` |

## Build
```bash
VS_CMAKE="/c/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"
# Regenerate: ./nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES" --game game.cfg
# Build:      "$VS_CMAKE" --build build --config Release
# Kill:       powershell.exe -Command "Stop-Process -Name MegaMan3Recomp -Force -ErrorAction SilentlyContinue"
```

## TCP: Native 4372, Emulated 4373
Commands: `mm3_state`, `sched_state`, `screenshot`, `read_frame_ram`, `ping`

## Ghidra programs
Open: bank14.bin, bank15.bin. **Need to load: bank11.bin, bank12.bin.**
