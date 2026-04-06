# Mega Man 3 Recomp — Session 11 Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.
Read ISSUES.md for full issue history.
Read the memory files: `reference_tcp_debug.md`, `feedback_debugging_approach.md`, `feedback_tcp_not_printf.md`.

## Branch State

- **master**: Session 10 work committed (Nestopia bridge fix, extra_func, ISSUES.md)
- **fix/coroutine-resume-codegen**: WIP branch with restore of replace_func scheduler (NOT yet working — coroutine gets stuck)

## Priority 1: Fix Coroutine Scheduler (the real fix)

### The Problem

The codegen-driven coroutine system (session 9) has a **push_all_jsr corruption bug** that causes garbled stage select portraits. Root cause chain:

1. Stage select portraits are garbled because nametable mirroring is wrong (vertical instead of horizontal)
2. The game code at `$C91F` that writes `STA $A000` (horizontal mirroring) is inside `func_C8D0` (main game coroutine) — it never executes because the coroutine is stuck
3. The coroutine is stuck because the codegen's RESUME path has a bug

### The Bug (fully diagnosed)

In the 6502 scheduler's RESUME sequence at `$FEE2-$FEF1`:

```
$FEE2: LDA $82,X    → restore saved SP
$FEE4: TAX
$FEE5: TXS          → SP now points to coroutine's saved stack
$FEE6: LDA $91      → check channel
$FEEA: JSR $C545     → *** THIS IS THE BUG ***
$FEED: PLA / TAY     → pop saved Y
$FEEF: PLA / TAX     → pop saved X
$FEF1: RTS           → coroutine_resume()
```

The bug: `JSR $C545` at `$FEEA` runs AFTER `TXS` restored the coroutine's stack pointer. With `push_all_jsr = true`, this JSR pushes a 2-byte return address to the 6502 stack — **overwriting the saved Y and X** that `func_FF21` pushed before yielding. The subsequent PLA/PLA at `$FEED/$FEEF` read **corrupted values** (the JSR return address bytes instead of Y/X).

On the real 6502, this works fine because JSR/RTS are balanced — the return address is pushed and then popped by RTS, leaving Y/X intact for the PLAs. But in the recomp with `push_all_jsr`, the return address IS written to `g_ram` at the stack location, physically overwriting the Y/X bytes. Even though `func_C545` returns and S is restored, the bytes in RAM are already corrupted.

### The Proper Universal Fix

**Do NOT inject `coroutine_*` calls into the 6502 scheduler flow.** The 6502 scheduler code was designed for a single CPU where JSR/RTS are atomic. Splitting it across Fibers (scheduler fiber vs coroutine fiber) while keeping `push_all_jsr` breaks the stack invariants.

**Instead:** When the codegen detects the scheduler pattern (`LDX #$FF; TXS` + channel loop + `JMP (ind)` START + `PLA/TAY/PLA/TAX/RTS` RESUME), emit a **single C function** that implements the entire scheduler loop:

```c
void coroutine_run_scheduler(void) {
    while (1) {
        g_cpu.S = 0xFF;
        // Scan channels...
        // For START: coroutine_start(channel, addr);
        // For RESUME: coroutine_resume(channel);
        // Call func_C545() or equivalent WITHOUT push_all_jsr
        // Wait for NMI via maybe_trigger_vblank()
    }
}
```

This is what the old extras.c `sched_fiber_proc` did. The codegen should:
1. Detect the scheduler entry pattern
2. Analyze the channel table layout (address of state bytes, timer, saved SP)
3. Identify the per-channel hook call (func_C545 in MM3, might differ per game)
4. Emit a generic C scheduler loop with Fiber dispatch

The yield function (`func_FF21` pattern: `TSX; STX zp,Y; JMP scheduler`) should:
1. Save state to channel table (as it does now)
2. Call `coroutine_yield()` to switch to scheduler fiber
3. After resume: restore X/Y from 6502 stack, adjust SP, return

### What Was Tried

1. **Restore replace_func for $FEAA/$FF21** (on `fix/coroutine-resume-codegen` branch): The old extras.c scheduler code was restored, but the game gets stuck — coroutine enters RUNNING state and never yields back. This is because other session 9/10 changes (MMC3 8KB remapping, data regions, dispatch table structure) altered the code flow. The old scheduler worked with the pre-session-9 generated code but not with the current regenerated code.

2. **Move PLA/PLA from scheduler to yield function**: Didn't help because the damage from `func_C545`'s JSR push already happened before the RESUME's coroutine_resume() call.

3. **Undo PLA/PLA by restoring SP in RESUME handler**: Didn't fix portraits because the core issue is the coroutine not progressing (mirroring write at $C91F requires the player to select a stage — it's post-stage-select code, not during-stage-select).

### Key Files

| File | What to change |
|------|---------------|
| `nesrecomp/recompiler/src/code_generator.c` | Emit full C scheduler loop instead of patching coroutine_* into 6502 flow |
| `nesrecomp/runner/src/coroutine.c` | May need `coroutine_run_scheduler()` entry point |
| `nesrecomp/runner/include/coroutine.h` | Update API if needed |
| `extras.c` | Remove replace_func scheduler once codegen works |
| `game.toml` | Remove replace_func entries once codegen works |

### Key Addresses (MM3 scheduler)

| Address | What | Pattern |
|---------|------|---------|
| `$FEAA` | Scheduler loop entry | `LDX #$FF; TXS` |
| `$FEDF` | START dispatch | `JMP ($93)` |
| `$FEEA` | Channel 0 hook | `JSR $C545` (input read) |
| `$FEF1` | RESUME dispatch | `PLA/TAY/PLA/TAX/RTS` |
| `$FF21` | Yield function | Pushes X/Y, saves SP, jumps to scheduler |
| `$FF14` | Channel offset helper | `LDA $91; ASL; ASL; TAX; RTS` |
| `$80-$8F` | Channel table | 4 bytes/channel × 4 channels |
| `$90` | Dispatch flag | Set to 0 at loop start |
| `$91` | Current channel | Channel index (0-3) |
| `$93/$94` | START address | Low/high byte of coroutine entry |

## Priority 2: Stage Entry (RESOLVED)

4 extra_func entries added for bank 4 ($A716, $A00C, $A00F, $A012). No more dispatch misses at stage select. Permanent fix (multi-pass function discovery) still needed.

## Session 10 Accomplishments

1. **Nestopia bridge mapper state** (Issue 11 FIXED): Real MMC3 registers now exposed via TCP on emulated port 4373
2. **Stage entry crash** (Issue 12 FIXED): 4 extra_func entries for bank 4
3. **ISSUES.md cleaned up**: All issues updated, stale entries fixed
4. **Portrait root cause fully diagnosed**: Mirroring wrong → coroutine stuck → codegen push_all_jsr corruption bug identified

## Build Commands

```bash
CMAKE="/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"

# Build recompiler (after code_generator.c changes)
"$CMAKE" --build nesrecomp/build/recompiler --config Release

# Regenerate game code
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game project
"$CMAKE" --build build --config Release
```

## TCP Ports
- Native: **4372**
- Emulated: **4373**
