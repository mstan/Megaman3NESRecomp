# Robot Master Intro Fix — Session 2026-04-12

## Result

The robot master intro cutscene (Issue 8) now plays. The game progresses:

**Title Screen → Stage Select → Boss Name Card + Portrait → Gameplay Start**

Previously the game skipped directly from stage select to gameplay (or froze at the transition).

## The Three Bugs (Cascade)

The intro was broken by three bugs stacking. Each one masked the next. Fixing them required following the cascade — not reverting when a fix exposed a new failure.

### Bug 1: MMC3 Bank Dispatch ($A000-$BFFF)

**File:** `nesrecomp/recompiler/src/code_generator.c` (dispatch table generator)

The dispatch table used `g_current_bank` (derived from MMC3 register R6, which controls $8000-$9FFF) for ALL switchable-range addresses. For addresses in $A000-$BFFF, it should use `g_mmc3_bank_a000` (derived from R7).

When the stage select did `JMP $A593` after switching R7 to bank 3, the dispatch routed to bank 12's $A593 (garbage) instead of bank 1's $A593 (real intro code).

**Fix:** Compute `_bank` from the correct register before address remapping:
```c
int _bank = (addr >= 0xA000 && addr < 0xC000) ? g_mmc3_bank_a000 : g_current_bank;
```

### Bug 2: Missing Bank-Switching Trampoline ($938B)

**File:** `game.toml` (extra_func entry)

The intro code at $A048 (bank 1, $A000 range) calls $938B (bank 12, $8000 range). This is a cross-8KB-window call that the function finder couldn't discover — it only traces JSR targets within the same bank. Bank 12's $938B is a trampoline (PHA, switch R7 to bank 1, PLA, JSR $A000, switch R7 back). Without it, the dispatch fell back to bank 1's $938B which contained garbage.

**Fix:** Added `[[extra_func]]` entry:
```toml
[[extra_func]]
addr = 0x938B
bank = 12
```

**How we found it:** After fixing Bug 1, the game reached the real intro code but the fiber died at frame 994. Adding `bail_trace()` to the codegen's bail emission revealed the exact JSR that failed: `$A048` calling `func_938B_b1` (garbage). Cross-referencing with the disassembly showed bank 12's $938B was the real target.

### Bug 3: PHA/PHA/JMP(ind) Continuation Unreachable

**File:** `nesrecomp/recompiler/src/code_generator.c` (JMP indirect handler)

`process_sprites` at $805D uses `LDA #$80 / PHA / LDA #$76 / PHA / JMP ($0000)` — an indirect JSR. The callee's RTS returns to $8077. The codegen emitted `call_by_address(_jt); return;`, making $8077 (collision detection) unreachable.

**Fix:** Detect the LDA#/PHA/LDA#/PHA pattern before JMP(ind) and emit `goto label_XXXX` to the continuation instead of `return`.

## Bonus Fix: FLAG_NZC_SUB N Flag

**File:** `nesrecomp/recompiler/src/code_generator.c` (macro definition)

The SBC N flag computation used `(_r>>7)&1` on an `int16_t`, which gives wrong results for values -255 to -129. Fixed to `(_r&0xFF)>>7`.

## Bonus Fix: bail_trace() in Codegen

**File:** `nesrecomp/recompiler/src/code_generator.c` (bail emission)

The universal bail check emitted `return;` without calling `bail_trace()`. Bail events were completely silent — no log entries, no diagnostics. This was the single biggest time sink of the session. Adding one fprintf call to the codegen made every subsequent bug trivially locatable.

## How We Got Here

### What didn't work (first 3 hours)
- Comparing disassembly to codegen instruction-by-instruction (confirmed correctness but didn't find the bug)
- Fixing Bug 1 alone, seeing a freeze, and reverting (the freeze was Bug 2, not a regression)
- Theorizing about the coroutine scheduler (it was correct the whole time)
- Testing with scripts that didn't navigate the menus correctly

### What worked (final 2 hours)
1. Reading the coroutine WAL log → discovered only ch0 ever ran, fiber died at f=994
2. Adding bail_trace to the codegen → found the exact JSR that failed ($C8F4 → $9009)
3. Tracing the bail chain: $C8F4 → $9009 → $920F → JMP $A593 → wrong bank (Bug 1)
4. Fixing Bug 1 → new bail at $A048 → $938B → missing function (Bug 2)
5. Adding extra_func → new bail at $CB2E → gameplay sprite processing (Bug 3 / separate issue)
6. Each fix moved the failure point forward: f=994 → f=1559 → gameplay

### The key insight
**A correct fix that exposes a new failure is still correct.** The game failing differently (later, at a different address) is progress. Reverting and going back to the original failure is regression.

## Remaining Issue

The fiber dies at ~frame 1559 during `process_sprites` with a bail at `$CB2E` involving `func_A1CA_b4`. This is a separate cascade in the gameplay sprite processing path — likely another missing cross-8KB function. The intro cutscene itself works.

## Commits

- nesrecomp: `06877f3` — MMC3 dispatch, PHA/PHA/JMP(ind), bail_trace, SBC N flag
- game repo: `70736f5` — regen + game.toml extra_func for $938B
- game repo: `05ba504` — /recomp-debug skill
