# Megaman3NESRecomp

> _This recompilation is a **byproduct of developing
> [nesrecomp](https://github.com/mstan/nesrecomp)** — the games are the proving ground, the framework is the
> goal, and depth will keep landing over months, not days. My time for any one
> title is limited, so I ask for your patience. Contributions are welcome —
> testing, issues, and PRs to the game or framework all help and will
> accelerate this game's polish. More on the why at:
> [Recomp + AI: 5 Months Later »](https://1379.tech/recomp-ai-5-months-later/)_

Static recompilation of Mega Man 3 (NES) for native PC.
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Work in progress.** Title screen, robot master select, and basic stage gameplay are functional. Boss fights, passwords, and special weapons are untested and may softlock. Visual gaps are expected. If you find a bug, please open an issue.

## What Works

- Title screen
- Main menu (GAME START / PASS WORD selection)
- Robot master stage select screen and navigation
- Loading into stages with background scrolling and basic enemies
- Player movement, jumping, and the Mega Buster

## Known Limitations

- **Boss fights** are untested and likely to stall or softlock
- **Special weapons** are untested
- **Passwords** are untested
- **Visual elements** may have minor glitches or missing sprites in some areas
- Audio is basic (APU register writes are captured but full audio mixing is work-in-progress)

## Quick Start

1. Download the latest release from [Releases](../../releases)
2. Extract and run `MegaMan3Recomp.exe`
3. Select your Mega Man 3 (USA) ROM when prompted — the path is saved for future launches

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
git clone https://github.com/mstan/Megaman3NESRecomp
cd Megaman3NESRecomp

# Windows
setup.bat

# Linux / macOS
chmod +x setup.sh && ./setup.sh
```

This initializes the pinned [nesrecomp](https://github.com/mstan/nesrecomp)
submodule and links the Nestopia oracle core.

Then build:

```bash
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release
```

Place your Mega Man 3 (USA) ROM in the build directory or select it at runtime.

## Architecture

This is a **static recompiler**, not an emulator. The original 6502 machine code is translated to C at build time, then compiled to native x64. The NES PPU, APU, and mapper are simulated by the runner library.

- **Mapper**: MMC3 (Mapper 4) with PRG/CHR bank switching and scanline IRQ
- **Framework**: [nesrecomp](https://github.com/mstan/nesrecomp) — shared across multiple NES recomp projects
- `game.toml` — recompiler configuration (dispatch tables, extra functions, data regions)
- `extras.c` — game-specific hooks (coroutine scheduler, TCP debug interface)
- `generated/` — auto-generated C code (do not edit manually)
- `nesrecomp/` — framework submodule (recompiler + runner)

---

<p align="center">
  <sub><b>R.A.I.D. — Retro AI Development</b> · a Discord for AI-assisted retro reverse-engineering, decomp &amp; recomp</sub>
</p>

<p align="center">
  <a href="https://discord.gg/Ad9BwSzctP"><img src=".github/raid-discord.png" alt="Join the Retro AI Development (R.A.I.D.) Discord" width="200"></a>
</p>
