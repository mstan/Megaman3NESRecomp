# MM3 NES Recomp — Debugging Summary

## Status: Black screen after stage select (UNRESOLVED)

The game navigates through title screen and stage select correctly, but goes to a black screen after selecting a robot master. Music continues playing.

## What's been fixed

### 1. S-register save/restore in coroutine_yield (nesrecomp d4505ab)
- `coroutine_yield()` wasn't saving/restoring `g_cpu.S` across `SwitchToFiber`
- The scheduler resume path ($FEE2-$FEF1) modifies S by +4, causing bail cascades
- Fix: save/restore `g_cpu.S` around fiber switch in `coroutine.c`
- Result: fiber death pushed from frame 1019 → frame 2578

### 2. Bail bypass for call_by_address (nesrecomp d4505ab)
- `call_by_address()` dispatch could reach yield functions, triggering bail
- Fix: skip bail check after `call_by_address()` JSR, same as yield funcs
- Result: game_mode advances from 0 → 1 after stage selection

### 3. NMI housekeeping removal (game repo 0c5c660)
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
4. **MMC3 IRQ completely wrong** — native has IRQ disabled, latch=0; oracle has IRQ enabled, latch=176. This means scanline counter effects (status bar split) never fire
5. **CHR banks wrong** — native [72,74,...] vs oracle [64,65,...] means wrong tile graphics are mapped
6. **Zero bail events** — confirms the S-restore fix is working, but something else is wrong

### Divergence happens EARLY
Both builds were already diverged when first checked at the stage select screen. The divergence occurs during the title→stage-select transition, not during stage selection itself.

## What needs to happen next

### Priority 1: Find the FIRST divergence frame
The comparison scripts ran too late — both were already diverged. Need to:
1. Launch fresh, pause both at frame ~600 (before first START press)
2. Step through frame-by-frame with `follow` on $22, $31, $80
3. Find the exact frame where state first differs
4. The divergence is likely in how the title-screen-to-stage-select transition initializes the scheduler and game state

### Priority 2: Investigate the tight loop
The native fiber is stuck in a loop at SP=$75 with stack pattern `00 1C 72 C9`. Use Ghidra to understand:
- What code is at $C972 and $C91C
- What condition would keep it looping
- Whether this is a wait-for-IRQ spin loop (since IRQs are disabled in native)

### Priority 3: MMC3 IRQ setup
The oracle has IRQ enabled with latch=176, native has 0. Either:
- The game code that sets up IRQs never ran in native
- The runner's MMC3 IRQ implementation is wrong
- A mapper register write went to the wrong place

## Build & debug commands

```batch
# Build recompiler
"C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/MSBuild.exe" nesrecomp/build/recompiler/NESRecomp.sln -p:Configuration=Release -p:Platform=x64 -m

# Regenerate
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game
"C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/MSBuild.exe" build/MegaMan3Recomp.sln -p:Configuration=Release -p:Platform=x64 -m

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
