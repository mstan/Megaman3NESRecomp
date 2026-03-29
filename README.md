# MegaMan3Recomp

Static recompilation of Mega Man 3 (NES) for native PC.
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Early — title screen and menus work.** 8,083 functions recompiled with zero dispatch misses. Stage loading and gameplay have known issues (see ISSUES.md).

## Acknowledgments

Function coverage assisted by the [megaman3-disassembly](https://github.com/example/megaman3-disassembly) community disassembly, providing 2,889 named function entry points.

## What Works

- Capcom copyright splash screen
- Title screen with animated logo
- Menu navigation (GAME START / PASS WORD selection)
- Password entry screen

## Known Issues

- Stage loading results in Mega Man stuck at top of screen
- See [ISSUES.md](ISSUES.md) for full details

## Quick Start

1. Build from source (see below)
2. Run `MegaMan3Recomp.exe`
3. Select your Mega Man 3 (USA) ROM when prompted

## Controls

| NES Button | Keyboard |
|------------|----------|
| D-Pad      | Arrow keys |
| A          | Z |
| B          | X |
| Start      | Enter |
| Select     | Tab |

| Hotkey | Action |
|--------|--------|
| F5     | Toggle turbo (fast-forward) |
| F6     | Save state |
| F7     | Load state |

## Building from Source

Requires Visual Studio 2022 and CMake 3.20+.

```bash
git clone --recursive https://github.com/mstan/MegaMan3Recomp
cd MegaMan3Recomp
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

## Architecture

This is a **static recompiler**, not an emulator. The 6502 machine code from the original ROM is translated to C, then compiled to native x64. At runtime, the game requires the original ROM for data (graphics, levels, audio samples) but all code execution is native.

- **Mapper**: MMC3 (Mapper 4) with PRG/CHR bank switching and scanline IRQ
- **Framework**: [nesrecomp](https://github.com/mstan/nesrecomp) — shared across multiple NES recomp projects
- **Renderer**: Software PPU renderer with sprite-0 scroll split support
