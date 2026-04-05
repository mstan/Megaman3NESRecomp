# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.

## Priority: Runtime Parity — Systematic Oracle Comparison

Stop chasing individual bugs. The goal is **byte-level runtime parity** between the native recompiled build and the emulator oracle. Everything else (flicker, visual glitches, missing audio) flows from divergences in runtime state.

### Approach

1. **Launch both builds** — native (TCP 4372) and emulated (TCP 4373)
2. **Navigate to gameplay** using `scripts/navigate_to_stage.txt` or manual input
3. **Sync state** between the two — match by game RAM values (game_mode, sub_mode, stage), NOT frame number
4. **Dump ALL state from both** at the synced point:
   - CPU RAM ($0000-$07FF)
   - PPU registers (PPUCTRL, PPUMASK, PPUSTATUS, scroll, addr, latches)
   - VRAM / Nametables ($2000-$2FFF)
   - Palette ($3F00-$3F1F)
   - CHR RAM (pattern tables $0000-$1FFF)
   - OAM (sprite data)
   - Mapper state (PRG/CHR bank mappings, IRQ latch/counter)
   - Scheduler state (`sched_state` / `sched_stack`)
5. **Diff everything** — byte-level comparison, produce a full divergence report
6. **Repeat across a timeseries** — sample at multiple points during gameplay to find when each divergence first appears
7. **Catalog ALL divergences** — don't fix anything yet. Build a complete list with:
   - Address range
   - First frame of divergence
   - Native value vs emulated value
   - Likely subsystem (codegen, runner PPU, runner mapper, timing, dispatch)
8. **Prioritize by impact** — which divergences cascade into others? Fix root causes first.

If TCP tooling is missing for any of the above state, **build it first** (see CLAUDE.md: "IF TOOLING IS MISSING → BUILD IT FIRST").

### What NOT to Do

- Don't chase a single visual bug without full state context
- Don't reason about what code "should" do — measure what it actually does
- Don't modify generated code
- Don't add printf debugging
- Don't propose fixes without a measured divergence and traced write

### Known Open Issues (for reference, not for direct targeting)

| Issue | Description |
|-------|-------------|
| Stage flicker | Background tile corruption during gameplay. Root cause unmeasured. |
| 8KB dispatch misses | Bank 4 $A00F/$A00C/$A012/$A716, bank 12 $A000, bank 14 $BB34 |
| No audio (Issue 4) | Sound engine uses `jump_local_ptr` — needs recompiler support |
| Cinematic glitches (Issue 6/8) | Robot master intro/cutscene visual issues |

### Session 8 Summary (2026-04-05)

**Committed changes:**
- Removed `is_mostly_illegal` heuristic from nesrecomp (was masking bugs, broke other games)
- Added `g_mmc3_bank_a000` = R7/2 tracking in mapper.c (infrastructure for future 8KB dispatch)
- Removed no-op data_region for bank 4 $A000-$C000

**Key findings:**
- `data_region` is ONLY for the pointer scanner — it does NOT prevent function generation via BFS. Using it for code generation stubbed 1060 functions and crashed the game.
- The `$8000` seed in function_finder.c blindly seeds every bank. Garbage functions from data banks are created via BFS from fixed-bank JSRs.
- Bank 4's lower 8KB is data, upper 8KB is code. The recompiler's 16KB granularity can't distinguish them. Future fix: multi-pass function discovery (pass 1: discover reachable bank+addr pairs; pass 2: generate only those).

**Reverted (not committed):**
- 8KB address remapping in dispatch (caused flicker)
- data_region-aware code generation (too aggressive, 1060 stubs)
- data_region-aware BFS filtering (killed real functions, link errors)
- Bank 4 extra_func entries (JMP targets land in data half)

### Build Commands

```bash
# Build recompiler (only if nesrecomp source changed)
cmake --build nesrecomp/build/recompiler --config Release

# Regenerate game code
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game
cmake --build build --config Release
```

### TCP Ports
- Native: **4372**
- Emulated: **4373**

### Dispatch Miss Log
`build/Release/dispatch_misses.log` — unique (bank, addr) pairs that failed dispatch.
