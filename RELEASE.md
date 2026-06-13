# Mega Man 3 — macOS (Apple Silicon) build

Native arm64 macOS build of Mega Man 3, attached to release **v0.0.1** as
`Megaman3NESRecomp-macos-arm64.zip`.

## What this is
- The original game statically recompiled to native arm64 (no emulator core shipped).
- Self-contained `.app`: SDL2 bundled via `@executable_path`, ad-hoc codesigned.
- Verified by manual play on Apple Silicon (looks/sounds correct on the golden path).

## Status
Largely untested / experimental. Please report any bugs by filing an issue on the repository.


## Install
1. Download `Megaman3NESRecomp-macos-arm64.zip` from the **v0.0.1** release and unzip.
2. First launch: right-click `Mega Man 3.app` -> Open (ad-hoc signed), or
   `xattr -dr com.apple.quarantine "Mega Man 3.app"`.
3. ROM not included — supply your own dump: Mega Man 3 (USA) .nes dump
4. Run: `"Mega Man 3.app/Contents/MacOS/Mega Man 3" /path/to/rom`

## Build it yourself
`scripts/release-mac.sh` reproduces this artifact (build -> .app -> zip);
`scripts/release-mac.sh --publish` re-attaches it to the latest release.
Requires: `brew install cmake ninja sdl2 dylibbundler` on Apple Silicon.
