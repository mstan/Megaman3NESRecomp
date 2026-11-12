# Megaman3NESRecomp

> _This recompilation is a **byproduct of developing
> [nesrecomp](https://github.com/mstan/nesrecomp)** — the games are the proving ground, the framework is the goal.
> **These are in-development previews, not finished ports — expect rough
> edges**, and depth will keep landing over months, not days. My time for any
> one title is limited, so I ask for your patience. Contributions are welcome —
> testing, issues, and PRs to the game or framework all help and will
> accelerate this game's polish. More on the why at:
> [Recomp + AI: 5 Months Later »](https://1379.tech/recomp-ai-5-months-later/)_

Static recompilation of Mega Man 3 (NES) for native PC.
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Work in progress.** Title screen, robot master select, and basic stage gameplay are functional. Boss fights, passwords, and special weapons are untested and may softlock. Visual gaps are expected. If you find a bug, please open an issue.

## Cycle backend migration branch

Default cycle controls: arrows move, Z is A, X is B, Enter is Start and
Backslash is Select. Escape opens the menu, Tab fast-forwards, and F8/F9
save/load the cycle state. Use Controls to remap inputs in `config.ini`.
Older `keybinds.ini` and F5/F6/F7 instructions below apply to the legacy host.

The cycle build enables **Reduce slowdown** in the in-game menu. It gives the
ROM additional CPU time between the visible picture and its frame interrupt;
the display and audio retain their normal rate. Turn it off for original NES
timing. The choice persists as `[Game] ReduceSlowdown` and in cycle save states.
Headless checks can select `--extra-scanlines 0` (stock) or `128` (enhanced).

The owner's enemy-heavy stage repro completed 503 updates in 600 display frames
at stock timing, versus 600 with this enhancement. Native/interpreted enhanced
runs and save-state continuation matched; the stock setting matched the previous
cycle build exactly. This is a short repro result, not a full-game guarantee.

The normal build now uses the cycle CPU backend. Code is generated from the
original ROM during configure and stays in the build directory. Run `setup.bat`
or `setup.sh` to initialize the pinned engine/UI submodules, then configure:

```sh
cmake -S . -B build-cycle -DNESRECOMP_ROM="/path/to/Game.nes"
cmake --build build-cycle --config Release --parallel 4
```

Run the executable with that same ROM path. The launcher verifies the image;
the runtime also verifies cartridge metadata and PRG identity. `NESRECOMP_ROOT`
and `NESRECOMP_RECOMP_UI` can name other checkouts, and cross builds accept
`NESRECOMP_HOST_COMPILER` pointing to a runnable host compiler.

Keep the old generated sources and select them explicitly with
`-DNESRECOMP_BACKEND=legacy` in a separate build directory. Legacy save states
cannot be loaded by the cycle backend; its cartridge shortcut slot uses
`saves/<ROM stem>.cycstate`. Preserve existing saves and settings during rollout.
Cycle-native comparisons use `nesrecomp/tools/cyc/cyc_verify.py`; `--interp-only`
runs the cycle interpreter for diagnosis. Earlier `--verify` / `--emulated`
Nestopia entry points remain in the legacy build.

The default-on **Quick weapon switching** mod maps L/LB and R/RB to the
previous and next acquired weapon or Rush helper. It skips locked equipment,
allows empty acquired weapons, wraps, and changes once per press. Both shoulders
together do nothing. Switching clears the previous weapon's projectiles and
helper, updates the native palette and graphics, and preserves HP and ammo.
Start retains the native inventory. Both stick clicks open the system menu;
Escape remains available, and customized bindings are preserved. Keyboard weapon
actions start unbound. Use `--weapon-cycle on|off` for automated runs.

`tests/routes/boot_snake.route`, `weapons.route` and `weapons_guard.route` cover
the native stage entry, weapon gallery, held/simultaneous/separate-seat inputs
and unsafe-input guards. Their headers identify equipment assistance and the
current-build snapshot prerequisite. These checks do not establish full-game
or co-op qualification.

The owner accepted the short Windows playtest on 2026-10-04. These remain
branch previews; no merge or release has been performed. Desktop Windows checks cover a short gameplay route and runtime
menu/input/save-state behavior; other platforms and full-game completion have
not been validated by this migration.

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

## License

For this project's code covered by the [PolyForm Noncommercial License](LICENSE),
[PERMISSIONS.md](PERMISSIONS.md) grants standing permission for voluntary
donations, sponsorships, and advertising revenue, including support for broader
development initiatives. Payment must not buy access to the software, games
built with it, or their updates, features, or game content, including early access.

Matthew Stanley has authority from the relevant copyright holders to grant
these permissions for the project's PolyForm-covered code. Third-party
components and code explicitly licensed under other terms retain those terms.

PolyForm Noncommercial 1.0.0 — see [`LICENSE`](LICENSE). Third-party
components retain their own licenses.

---

<p align="center">
  <sub><b>R.A.I.D. — Retro AI Development</b> · a Discord for AI-assisted retro reverse-engineering, decomp &amp; recomp</sub>
</p>

<p align="center">
  <a href="https://discord.gg/Ad9BwSzctP"><img src=".github/raid-discord.png" alt="Join the Retro AI Development (R.A.I.D.) Discord" width="200"></a>
</p>

Cycle Windows builds use `tools/build.ps1 -Rom <original-ROM>`. Create a ROM-free
ZIP with `tools/make_release.ps1 -Rom <original-ROM>`; `-SkipBuild -BuildDir
build-cycle` packages an existing production cycle build. Legacy C remains
available through explicit CMake selection.

The cycle build includes optional Proto Man and L/R weapon switching in Mods.
Select swaps playable characters with a short teleport. Proto Man defaults to
his own traits: two normal shots, double incoming damage, and an airborne front
shield that reflects supported small projectiles. The character mod also offers
Mega Man behavior as a visual reskin. Native sliding and the original weapons
remain available. The current adapters are restricted to local play until the
complete online simulation profile is qualified.

The optional Charged Mega Buster package reads its art, constants and effects
from a verified local Mega Man 4 (USA) image. It works for both characters,
retains native sliding, and uses MM4's half/full charge timing and sound driver.
The source image is not included. Proto Man also has his own portrait in the
native pause menu; the original life and E-Tank counters remain in place.

The feature branch also has a development `--coop on` path, with complementary
characters (`--coop-p1 megaman|protoman`), separate native player/Rush/projectile
state, independent L/R equipment selection and current-build save/load. Player
two's controls are kept separate from the retail cartridge's debug controls.
Ordinary enemies and pickups use the nearer living player. A survivor retains
control and stage music; a team wipe uses the native shared-life retry. Native
health and ammo refills keep their recipient's inventory and drawing context.
Start pauses the world. Shared view shows the pausing player's native inventory
and accepts that player's choices. Separate views show each player's own usable
inventory panel; the player who opened the menu confirms resume with Start. Energy Tanks use one
shared stock and refill only the requesting player, including simultaneous use
of the last tank. The native menu layout, cursors, weapon graphics and Rush
transformation timing are retained, with a Proto Man portrait for that player.
Hold Select for 90 gameplay frames to withdraw while a partner is active. Release
and press Select again to rejoin beside a partner on clear, safe ground. This
retains HP and equipment; a held or unsafe rejoin press never queues for later.
The last active player cannot withdraw. Native checkpoint recovery restores a
dead partner with full HP and Buster selected, retaining their remaining ammo.
A team retry also retains each player's own ammo. Departure and arrival use the
native teleport animation and movement, with contact protection during arrival.
Co-op sprites follow the scene's native drawing order, including enemies in the
widened margins. Captured sprites retain their character owner across the death
handoff, and current-build states include the margin sprites and view bounds.
Native horizontal shutters and vertical scrolls carry the partner through the
same camera coroutine while preserving personal HP and ammo. The Snake Man
route has been checked from native checkpoint retry through player-two damage,
boss defeat, weapon award, password screen and entry into the next stage.
This remains a development slice: additional boss/script and transition
coverage, room leadership and online qualification are pending.
The development `--coop-view shared|split|p1|p2` option selects the view. Separate
views use two fixed 256-pixel
simulation rectangles. Native enemy construction, nearest-player targeting,
respawn identity and the sixteen-enemy pool operate on their union, excluding
the gap between distant players. Split, player-one-only and player-two-only
views produce the same simulation. Each panel keeps its own native HUD and
camera; a dead player's panel follows the survivor. Personal sprites use their
own native camera during capture, including a distant survivor handoff. Menus
retain the native bottom-panel position over a background-only scene.
The native camera also follows a distant survivor in shared and separate views.
Its tile ring and streaming cursors are rebased together; the replacement ring
publishes with a complete native OAM draw in NMI to preserve the prior picture.
Gemini Man's block destruction updates the common terrain and creates its native
child objects for either player's shots. Remote destruction preserves the live
native background, and later shots can pass through the opened space.
Additional room/helper/script behavior and online play remain under development.
