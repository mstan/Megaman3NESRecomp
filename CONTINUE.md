# Mega Man 3 Recomp — Continuation Notes

## Current Status

Game is playable: title screen, stage select, and stages all run. Visual artifacts
persist — the status bar area renders incorrectly (~7812 pixels differ vs Nestopia).

## The Bug

**Symptom:** Status bar region uses wrong BG pattern table. Native renderer uses
$0000 (HUD tiles) for the entire frame; real hardware switches to $1000 (stage tiles)
mid-frame via MMC3 scanline IRQ.

**Root cause chain:**
1. `$F8` (screen mode variable) stays **0** in native recomp during gameplay.
2. NMI copies `$F8` → `$78` at $C025.
3. `$78=0` indexes into the IRQ handler table at $C4C8/$C4DA → picks `$C4BA` (no-op).
4. The real handler at `$C152` (used when `$78 >= 1`) writes PPUCTRL to switch BG
   pattern table from $0000 → $1000 and adjusts scroll mid-frame.
5. Without that mid-frame switch, our renderer draws the whole frame with BG at $0000.

**Next step:** Find what code sets `$F8` during stage loading. That code path is not
executing in the native recomp. Likely a missing or incorrectly recompiled function
in the stage init sequence.

**How to investigate:**
- Run `--verify` mode, grep the log for `$F8:N=`/`$F8:E=` to see when the emulator
  sets `$F8` to non-zero. That tells you the frame number.
- Use `get_frame` / `frame_range` on the TCP debug server to inspect what function
  was running at that frame.
- Cross-reference with Ghidra to find the function that writes `$F8`.
- Check if that function exists in the dispatch table or is a missing `extra_func`.

## Verify Mode

`--verify` now compares both RAM and rendered framebuffers each frame. When pixels
differ, it saves PNGs every 120 frames to `C:/temp/`:
- `verify_native_XXXX.png` — what our renderer produces
- `verify_emu_XXXX.png` — what Nestopia produces (ground truth)
- `verify_diff_XXXX.png` — red where pixels differ, black where they match

RAM divergence log includes `$F8/$78/$5E/$9B` values for both native and emulated.

## MMC3 Scanline IRQ

Implemented in `mapper.c` (`mapper_clock_scanline()`) and called per-scanline in
`ppu_renderer.c`. The counter logic is correct but currently the game picks the
no-op handler because `$F8=0`. Once `$F8` is fixed, the IRQ will fire and call
the real handler at `$C152` which does the mid-frame PPUCTRL/scroll split.

## Key Addresses

| Address | Purpose |
|---------|---------|
| `$F8`   | Screen mode (copied to $78 by NMI). 0=no split, 2+=gameplay split |
| `$78`   | Working copy of $F8, indexes IRQ handler table |
| `$9B`   | IRQ enable flag (0=disabled, 1=enabled) |
| `$7B`   | IRQ latch value (scanline count before IRQ fires) |
| `$9C-9D`| IRQ handler vector (indirect JMP target) |
| `$FF`   | PPUCTRL shadow register |
| `$F0`   | MMC3 bank select value written to $8000 |
| `$E8-ED`| CHR bank values R0-R5 (written by func_FF41) |
| `$C4C8` | IRQ handler low-byte lookup table (indexed by $78) |
| `$C4DA` | IRQ handler high-byte lookup table (indexed by $78) |

## Key Functions

| Address | Purpose |
|---------|---------|
| `$C000` | NMI handler — PPU setup, OAM DMA, CHR banks, IRQ config |
| `$C143` | IRQ entry — push regs, ack, JMP ($9C) |
| `$C152` | Real IRQ handler — mid-frame PPUCTRL/scroll split |
| `$C4BA` | No-op IRQ handler — just ack and RTI |
| `$FF41` | CHR bank writer — writes R0-R5 from $E8-$ED when $1B is set |
