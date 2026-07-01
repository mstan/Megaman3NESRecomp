<#
make_release.ps1 -- build the Windows release zip for Megaman3NESRecomp.

Ships ONE windows zip (never a bare exe -- the exe needs SDL2.dll and the
launcher/ assets):

  MegaMan3Recomp-windows-x64.zip
      MegaMan3Recomp.exe + SDL2.dll + keybinds.ini + launcher/ + launcher-deps/ + README.txt

Builds build_release\ via build_all.bat (plain regen, oracle OFF, reverse-debug
OFF) when present, then stages and zips. The zip lands in release\ (gitignored)
and never contains debug.ini, config.ini, a ROM, saves, or logs.

Publish AFTER smoke-testing the zip from a scratch directory:

  gh release create vX.Y.Z release\MegaMan3Recomp-windows-x64.zip `
      --title "vX.Y.Z -- <headline>" --notes-file RELEASE_NOTES.md

Usage: powershell -File tools\make_release.ps1 [-SkipBuild]
#>
param(
  [switch]$SkipBuild
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
$bin  = Join-Path $root 'build_release'
$out  = Join-Path $root 'release'
New-Item -ItemType Directory -Force $out | Out-Null

if (-not $SkipBuild) {
  $buildAll = Join-Path $root 'build_all.bat'
  if (Test-Path $buildAll) {
    & cmd /c $buildAll
    if ($LASTEXITCODE -ne 0) { throw "build_all.bat failed ($LASTEXITCODE)" }
  } else {
    Write-Host "no build_all.bat; staging the existing build_release\ (pass -SkipBuild to silence)"
  }
}

$exe = Join-Path $bin 'MegaMan3Recomp.exe'
if (-not (Test-Path $exe)) { throw "missing $exe -- build the game first (build_all.bat, or cmake --build build_release)" }

$readme = @'
Mega Man 3 - Static Recompilation
================================

A native PC build of Mega Man 3, produced by statically recompiling the NES
ROM's 6502 code to C with the NESRecomp framework (github.com/mstan/nesrecomp).

No ROM is included. On first launch, select your legally-obtained Mega Man 3
ROM. The path is remembered for future launches.

Controls: arrow keys = D-Pad, Z = A, X = B, Enter = Start, Right Shift = Select.
F5 turbo, F6 save state, F7 load state, F11 / Alt+Enter fullscreen. Gamepads are
supported; bindings are configurable in keybinds.ini.
'@

$stage = Join-Path $out 'stage'
if (Test-Path $stage) { Remove-Item -Recurse -Force $stage }
New-Item -ItemType Directory -Force $stage | Out-Null

Copy-Item $exe $stage
foreach ($extra in 'SDL2.dll', 'keybinds.ini') {
  $p = Join-Path $bin $extra
  if (Test-Path $p) { Copy-Item $p $stage }
}
foreach ($dir in 'launcher') {
  $p = Join-Path $bin $dir
  if (Test-Path $p) { Copy-Item -Recurse $p (Join-Path $stage $dir) }
}

$readme | Out-File -Encoding ascii (Join-Path $stage 'README.txt')

# Belt-and-braces: never ship debug/dev artifacts, a ROM, saves, or logs.
foreach ($banned in 'debug.ini', 'config.ini', 'rom.cfg', 'dispatch_misses.log') {
  $p = Join-Path $stage $banned
  if (Test-Path $p) { Remove-Item $p }
}
Get-ChildItem $stage -Recurse -Include '*.nes','*.NES','*.srm','*.sav' -ErrorAction SilentlyContinue | Remove-Item -Force

$zip = Join-Path $out 'MegaMan3Recomp-windows-x64.zip'
if (Test-Path $zip) { Remove-Item $zip }
Compress-Archive -Path (Join-Path $stage '*') -DestinationPath $zip
Remove-Item -Recurse -Force $stage
Write-Host "staged $zip"
