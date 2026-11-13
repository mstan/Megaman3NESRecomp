param([string]$Rom, [string]$BuildDir='build_release', [string]$EngineRoot, [string]$RecompUi, [switch]$SkipBuild)
$ErrorActionPreference='Stop'
$root=Split-Path -Parent $PSScriptRoot
if (-not $EngineRoot) { $EngineRoot=Join-Path $root 'nesrecomp' }
if (-not $Rom) {
    $images=@(Get-ChildItem -LiteralPath $root -File | Where-Object { $_.Extension -ieq '.nes' })
    if ($images.Count -eq 1) { $Rom=$images[0].FullName }
}
$notes = @'
Fit to screen, quick weapon switching, Reduce slowdown and No sprite flicker
are enabled for a fresh profile. Existing saved choices take precedence.
L/LB and R/RB select the previous/next acquired weapon or Rush helper.
Enable Proto Man in Mods for Select character exchange. Real Proto Man traits
are the default; the reskin option retains Mega Man behavior. Both can slide.
Charged Mega Buster is optional and requires your own Mega Man 4 (USA) source
selected through that mod's resource setting. No source ROM or extracted data
is included.
Optional Co-op supports shared, split and individual views, personal native
inventories, and rollback netplay. Start opens the inventory. Hold Select for
90 gameplay updates to withdraw; release and press again on safe ground to
rejoin. A team wipe spends one shared life. Shared Rush Jet retains its owner's
control and fuel. Remap both players in Controls before playing locally.
Each player has their own Rush Marine submarine and energy.
Online peers need the same game build and ROM. The host's gameplay profile is
sealed before play; an enabled charge source must be verified on both peers.
'@
& (Join-Path $EngineRoot 'tools/package_cycle_windows.ps1') -ProjectRoot $root -Target 'MegaMan3Recomp' -Title 'Mega Man 3' -BuildDir $BuildDir -Rom $Rom -EngineRoot $EngineRoot -RecompUi $RecompUi -SkipBuild:$SkipBuild -GameNotes $notes
