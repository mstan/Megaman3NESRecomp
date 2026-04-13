# MM3 NES Recomp — Debugging Summary

## Status: Black screen after stage select (UNRESOLVED)

The game navigates through title screen and stage select correctly, but goes to a black screen after selecting a robot master. Music continues playing.

## Session 2026-04-12: Disassembly vs Codegen Comparison

Compared [refreshing-lemonade/megaman3-disassembly](https://github.com/refreshing-lemonade/megaman3-disassembly) against our recompiler's generated C code. Focus: enemy spawning, enemy rendering/collision, robot master intro screen.

### Divergences Found

| # | Severity | Area | Description | Status |
|---|----------|------|-------------|--------|
| 1 | CRITICAL | Sprite processing | PHA/PHA/JMP(ind) at $805D — `check_weapon_hit`/`check_player_hit` never called | Fix in codegen (causes regression) |
| 2 | CRITICAL | Intro screen | Entire intro cutscene skipped — coroutine scheduler (Issue 8) | Needs scheduler work |
| 3 | HIGH | Intro screen | MMC3 $A000-$BFFF dispatch uses R6 bank instead of R7 | Fix reverted (exposes Issue 8) |
| 4 | HIGH | Intro screen | Same R6/R7 mismatch at $9388 | Same as #3 |
| 5 | LOW-MED | Systemic | FLAG_NZC_SUB N flag wrong for SBC results -255 to -129 | Fix in codegen |
| 6 | LOW | Sprite dispatch | Entry 0 ($85C7) decodes data as code | Not fixed |
| 7 | LOW | Sound engine | Sound triggers correct but consumer dead (Issue 4) | Not fixed |

### What Matched Perfectly
- Enemy spawning ($9C00-$9D25) — complete instruction-level match
- Enemy data tables ($A000-$A700)
- Intro screen opcodes — every instruction faithful
- OAM/sprite rendering — DMA, animation counters, coordinate assembly
- Dispatch coverage — all 97 sprite targets + all intro entries present

### Changes Made (code_generator.c)
1. **PHA/PHA/JMP(ind) detection**: emits `goto label_XXXX` continuation instead of `return`
2. **FLAG_NZC_SUB N flag**: `(_r&0xFF)>>7` instead of `(_r>>7)&1`
3. **MMC3 bank dispatch**: TODO comment documenting the fix (reverted)

### Outcome: REGRESSION
The codegen fixes cause the game to freeze at stage transition. The PHA/PHA/JMP(ind) fix is correct in isolation but destabilizes the stage entry flow. Root blocker is Issue 8 — the intro code at $A593 calls `func_FF21()` (scheduler_resume) and expects a coroutine context.

### Key Insight
Instruction-level codegen is largely correct. Bugs are at a higher level:
- Control flow patterns the recompiler doesn't recognize (indirect JSR via PHA/PHA/JMP)
- MMC3 8KB bank dispatch using wrong register
- Coroutine scheduler not routing to intro sequence

---

## Previous Sessions

### What's been fixed

#### 1. S-register save/restore in coroutine_yield (nesrecomp d4505ab)
- `coroutine_yield()` wasn't saving/restoring `g_cpu.S` across `SwitchToFiber`
- The scheduler resume path ($FEE2-$FEF1) modifies S by +4, causing bail cascades
- Fix: save/restore `g_cpu.S` around fiber switch in `coroutine.c`
- Result: fiber death pushed from frame 1019 to frame 2578

#### 2. Bail bypass for call_by_address (nesrecomp d4505ab)
- `call_by_address()` dispatch could reach yield functions, triggering bail
- Fix: skip bail check after `call_by_address()` JSR, same as yield funcs
- Result: game_mode advances from 0 to 1 after stage selection

#### 3. NMI housekeeping removal (game repo 0c5c660)
- Removed hand-written C NMI handler from extras.c (was duplicating 6502 logic badly)
- game_run_nmi() now calls func_C000() directly — no bail events fire

## Current divergence (native vs oracle at ~frame 5000+)

### Measured data from TCP comparison:

| Address | What | Native | Oracle |
|---------|------|--------|--------|
| $22 | stage number | 0 | 5 |
| $31 | game_mode | 1 | 1 |
| $80 | ch0 state | 2 (running) | 1 (yielding) |
| $82 | ch0 SP | $75 | $B3 |
| mmc3_regs | CHR/PRG banks | [72,74,0,1,10,11,24,1] | [64,65,66,67,116,11,18,28] |
| mmc3_irq_enabled | IRQ | 0 (disabled) | 1 (enabled) |
| mmc3_irq_latch | scanline IRQ | 0 | 176 |

### Key observations:
1. **Stage number never set** — native $22 = 0, meaning the stage selection logic never ran or its result was lost
2. **Coroutine alive but stuck** — 2578 yields/resumes, ch0 state=2 (running), stack repeats `00 1C 72 C9` (tight loop around $C972/$C91C)
3. **No bail events** — the fiber isn't dying from bail anymore, it's stuck in a loop
4. **MMC3 IRQ completely wrong** — native has IRQ disabled, latch=0; oracle has IRQ enabled, latch=176
5. **CHR banks wrong** — native [72,74,...] vs oracle [64,65,...] means wrong tile graphics are mapped
6. **Zero bail events** — confirms the S-restore fix is working, but something else is wrong

### Divergence happens EARLY
Both builds were already diverged when first checked at the stage select screen. The divergence occurs during the title-to-stage-select transition, not during stage selection itself.

## What needs to happen next

### Priority 1: Fix Issue 8 (coroutine scheduler for intro)
The intro code at $A593 calls `func_FF21()` (scheduler_resume) and expects a coroutine fiber context. Until the scheduler routes the intro through a coroutine, stage transitions will remain broken. This blocks all other gameplay fixes.

### Priority 2: Re-enable MMC3 $A000 bank dispatch
Once Issue 8 is resolved, change `switch (g_current_bank)` back to use `g_mmc3_bank_a000` for $A000-$BFFF addresses in the dispatch table.

### Priority 3: Validate collision physics
The PHA/PHA/JMP(ind) fix should make `check_weapon_hit` / `check_player_hit` reachable during gameplay once stage transitions work.

## Build & debug commands

```batch
# Build recompiler
"/c/msys64/mingw64/bin/cmake.exe" --build nesrecomp/build/recompiler --config Release

# Regenerate
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game
"/c/msys64/mingw64/bin/cmake.exe" --build build --config Release

# Run native with script
build/Release/MegaMan3Recomp.exe "Mega-Man 3 # NES.NES" --script C:/temp/mm3_to_stage_select.txt > C:/temp/mm3_nat_out.txt 2>&1

# Run oracle with script
build/Release/MegaMan3Recomp.exe "Mega-Man 3 # NES.NES" --emulated --script C:/temp/mm3_to_stage_select.txt > C:/temp/mm3_emu_out.txt 2>&1

# TCP query
python3 scripts/q.py 4372 '{"cmd":"mm3_state"}'
python3 scripts/q.py 4373 '{"cmd":"mm3_state"}'
```

## Useful scripts
- `scripts/trace_divergence2.py` — One-shot TCP comparison of native vs oracle
- `scripts/quick_compare.py` — Quick zero-page + mapper diff
- `scripts/q.py` — Single TCP query utility
- `scripts/compare_emu_native.py` — Persistent-connection side-by-side monitor

## TCP ports
- Native: 4372
- Oracle (Nestopia): 4373
