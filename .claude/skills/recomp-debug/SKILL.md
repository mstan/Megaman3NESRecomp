---
name: recomp-debug
description: Structured debugging for static recompiler issues across any platform (NES, SNES, PSX, Genesis, Xbox HLE). Invoke when the recompiled game freezes, crashes, skips content, or diverges from the emulator oracle.
---

# Recompiler Cascade Debugger

Debug this issue: $ARGUMENTS

---

## CORE PRINCIPLE: BUGS CASCADE

In static recompilation, a single symptom is usually caused by **multiple bugs stacking**. Each bug in the chain masks the next. Fixing Bug 1 exposes Bug 2, which looks like a regression. It is not.

**The anti-pattern that wastes days:**
1. Fix a bug (e.g. wrong dispatch target)
2. Game fails in a NEW way
3. Conclude "the fix was wrong" and revert
4. Spend hours theorizing about the original symptom

**The pattern that works:**
1. Fix a bug
2. Game fails in a new way
3. Ask: "Did it fail DIFFERENTLY?" — if yes, the fix was correct
4. Diagnose the NEW failure — it's the next bug in the chain
5. Repeat until the chain resolves

**Never revert a correct fix because it exposes a new failure.** The correct question after every fix is not "did the game work?" but "did the game fail at a DIFFERENT point or in a DIFFERENT way?"

---

## PHASE 1: ESTABLISH OBSERVABILITY

Before diagnosing anything, ensure you can SEE what's happening. The #1 time sink in recompiler debugging is **silent failures** — code that takes a wrong path with no diagnostic output.

### Audit your diagnostic surfaces:

- **Stack bail / unwind logging**: Does the generated code log when a subroutine returns with unexpected stack state? If the log is empty during a known failure, the codegen isn't emitting diagnostics. Fix observability FIRST.
- **Coroutine / fiber lifecycle logging**: If the platform uses cooperative multitasking (NES MM3, some SNES games), can you see every fiber start/yield/resume/death?
- **Dispatch miss logging**: When `call_by_address` can't find a target, does it log the address and current bank state?
- **TCP / debug server state queries**: Can you query game state, memory, register state from both native and oracle at any frame?

### If a diagnostic surface is missing or silent: BUILD IT FIRST.

You cannot debug what you cannot observe. Spending 10 minutes adding a log call saves hours of guessing.

---

## PHASE 2: CHARACTERIZE THE FAILURE

### For a freeze / stuck game:
1. **What is the execution context?** Is the game in a main loop, a coroutine, an interrupt handler? Is it spinning in a scheduler with no runnable tasks, or stuck inside a function?
2. **When did it last make progress?** Check lifecycle logs for the last successful state transition.
3. **Did a bail / stack unwind fire?** Check bail logs. The caller PC tells you the exact instruction. The stack delta tells you how many bytes are off (2 = one missed RTS/RTI).
4. **Is the dispatch routing to the right code?** Check what bank is active vs what bank the dispatch selected.

### For wrong behavior (game runs but does wrong thing):
1. Compare game state between native and oracle at the same logical point
2. Find the FIRST field that diverges (game mode, stage number, sprite state, bank registers)
3. Use the disassembly to trace which code writes that field

---

## PHASE 3: IDENTIFY THE BUG CLASS

Every recompiler bug falls into one of these classes. Identify which one before attempting a fix.

### Class 1: Wrong Dispatch Target
The game calls an address, but the dispatch routes to the wrong bank's version of that function. The wrong version contains garbage or different code.

**Signature:** Bail fires at a JSR. The called function is in the wrong bank. Stack is off by exactly 2 (the function returned without proper RTS).

**Root cause pattern:** The dispatch uses a bank variable that doesn't match the hardware's current bank mapping. Common with mappers that have multiple independently switchable bank windows (MMC3, MMC5, SPC7110).

**Fix location:** The dispatch table generator in the recompiler. The fix must be generic — select the correct bank variable based on which address window the target falls in.

### Class 2: Missing Function (Undiscovered Target)
A function exists in the ROM but the function finder didn't discover it. The dispatch has no entry for that address+bank combination, or falls back to garbage.

**Signature:** Dispatch miss logged, OR dispatch routes to the only variant it knows (wrong bank). Often caused by cross-bank calls where the caller is in one bank window and the target is in another.

**Root cause pattern:** The function finder traces JSR targets within each bank, but cross-window calls (e.g. $A000 code calling $8000 code) are invisible because the two windows are in different banks.

**Fix location:** Add the function as a game config entry (extra_func). Longer term, improve the function finder to detect cross-window call targets.

### Class 3: Unrecognized Control Flow Pattern
The original CPU uses a code pattern that the recompiler doesn't recognize, causing incorrect control flow in the generated code.

**Signature:** Code after a certain point is unreachable. The function returns too early. A loop that should be infinite exits.

**Common patterns:**
- **Indirect JSR via push+jump**: `PUSH hi; PUSH lo; JMP (ptr)` — the callee's RTS returns to the pushed address. Codegen must emit a continuation goto, not a return.
- **Stack-switching for coroutines**: TSX/TXS to save/restore stack pointers between cooperative tasks. The codegen must understand that S changes deliberately.
- **RTI/RTS trampolines**: Pushing an address and using RTI/RTS to jump to it. The codegen must not treat this as a normal return.
- **Self-modifying code**: Writes to code regions that change behavior. Must be handled by the runtime, not the static codegen.

**Fix location:** The code generator's pattern detection. The fix must be generic — detect the byte pattern in the ROM, not hardcode specific addresses.

### Class 4: Flag / Arithmetic Bug
A CPU flag (carry, negative, overflow, zero) is computed incorrectly, causing a branch to go the wrong way.

**Signature:** A conditional branch takes the wrong path. The divergence is at a specific CMP/SBC/ADC followed by a branch. Native and oracle take different paths from the same instruction.

**Fix location:** The flag computation macros in the code generator. These must exactly match the target CPU's behavior for all edge cases (e.g. SBC with borrow producing results in the -256 to -129 range).

### Class 5: Timing / Interrupt Bug
An interrupt (NMI, IRQ, timer) fires at the wrong time or doesn't fire at all, causing state that depends on interrupt-driven updates to be wrong.

**Signature:** State that's updated by interrupts (animation counters, scanline splits, DMA transfers) is wrong or frozen. The game logic is correct but the world around it isn't updating.

**Fix location:** The runtime's interrupt simulation (PPU timing, scanline counters, VBlank detection).

---

## PHASE 4: FIX AND RE-CHARACTERIZE

After applying a fix:

1. **Full rebuild**: recompiler -> regenerate -> game build. All three, every time. Never test with stale generated code.
2. **Delete old logs**: Stale logs from previous runs will mislead you.
3. **Run to the same point** using the same test path.
4. **Classify the result:**
   - Same failure, same frame -> wrong diagnosis, re-examine
   - New failure, LATER frame -> fix was correct, you exposed the next bug in the chain. Go to Phase 2 with new data.
   - New failure, EARLIER frame -> the fix broke something upstream. Examine carefully (but don't reflexively revert — the earlier failure may have been latent).
   - No failure -> chain resolved. Test further.

---

## PHASE 5: COMMIT THE CHAIN

Each fix gets its own commit, even if the game still doesn't fully work. Intermediate fixes that move the failure point forward are valuable — they document the chain and prevent re-discovery in future sessions.

Commit message format: what was fixed, what symptom it resolves, and what the NEW failure point is (if any). Example: "fix: MMC3 bank dispatch for $A000 range — intro screen now plays, fiber dies at frame 1559 during sprite processing (separate issue)"

---

## UNIVERSAL TRAPS

### Trap: "The scheduler / interrupt handler / kernel is broken"
Platform-level infrastructure (schedulers, NMI handlers, DMA engines) is almost always correct once it's been working at all. If a game feature stops working, the bug is in game code dispatch or missing functions, not in the platform layer. Check bail logs and dispatch routing first.

### Trap: Silent failures
If your diagnostic logs are empty during a known failure, the failure is silent. Fix observability before fixing the bug. Adding a single log call to the right place saves hours.

### Trap: Theorizing without data
If you're writing paragraphs about what "might" be happening without pointing to a specific address, specific frame, specific register value — you don't understand the bug yet. Get more data.

### Trap: "It works on the oracle so the codegen must be right"
The oracle (emulator) executes real CPU instructions. The recompiled code executes generated C. They can diverge on: dispatch routing, function discovery, unrecognized patterns, flag edge cases, and timing. "The instructions match" does not mean "the execution matches."

### Trap: Reverting a correct fix
If a fix makes the game fail at a DIFFERENT point, the fix is correct. The new failure is a different bug that was previously masked. Follow the chain.

---

## THE DISASSEMBLY IS YOUR ORACLE

If a community disassembly or decomp exists for your target game, it is the **ground truth** for what the original code does. Use it to:

1. **Verify codegen correctness** — compare generated output instruction-by-instruction
2. **Find missing functions** — look up mystery addresses to see what code should be there
3. **Understand call chains** — trace JSR/CALL targets across banks to find dependencies
4. **Identify data vs code** — prevent data-as-code false positives in the function finder
5. **Map RAM usage** — understand what game state lives where, for targeted TCP queries
