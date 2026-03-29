# Mega Man 3 — Known Issues

## Issue 1: Artifact on Capcom copyright screen
**Severity:** Minor (cosmetic)
**When:** Capcom copyright splash screen (frames ~120-240)
**Symptom:** Spurious artifact visible in the bottom-left corner of the screen.
**Likely cause:** Stale sprite data in OAM not being cleared, or a sprite with incorrect Y position rendering where it shouldn't. Could also be a CHR bank mapping issue where tile 0 in the sprite pattern table contains non-blank data.
**Diagnosis steps:**
1. Capture OAM state during copyright screen (dump all 64 sprite slots)
2. Check if any sprites have Y positions in the visible range that shouldn't be there
3. Verify CHR bank state during this screen — are sprite tiles loaded correctly?

## Issue 2: Selection caret stuck below menu items
**Severity:** Major (blocks normal menu navigation)
**When:** Title screen, after logo animation completes
**Symptom:** The arrow/caret sprite that selects between "GAME START" and "PASS WORD" appears below both options instead of next to one of them. Moving up/down does not reposition it — it stays in the same place.
**Likely cause:**
- Sprite Y position is being set from a RAM address that's incorrect or not updating
- Could be a controller input issue — D-pad input not reaching the game's menu handler
- Could be an indirect dispatch miss during the menu input routine (a JMP indirect that doesn't resolve)
**Diagnosis steps:**
1. Identify which OAM slot is the caret sprite
2. Read the RAM addresses that control menu selection ($00A0 area per RAM map)
3. Check if controller input ($4016 reads) is reaching the menu state machine
4. Check dispatch_misses.log for any misses during menu interaction

## Issue 3: Password screen → stage load with stuck Mega Man
**Severity:** Major (gameplay broken)
**When:** Press Start on title screen → password screen appears → press Start again → attempts to load a stage
**Symptom:** Game transitions to what appears to be a stage, but Mega Man spawns stuck at the top of the screen. Stage graphics may be partially loaded or corrupt.
**Likely cause:**
- MMC3 PRG bank switching during stage load — R6/R7 may not be switching to the correct code/data banks for level initialization
- The stage select screen is being skipped entirely (going straight from password to stage), suggesting the menu state machine has a logic error or dispatch miss
- Player initialization routine may be in a bank that isn't mapped correctly
- Possible data_region needed in game.cfg — stage layout data being parsed as code
**Diagnosis steps:**
1. Trace bank switches during the transition (mapper_trace.csv)
2. Check if stage select screen should appear between password and stage load
3. Identify which stage it's trying to load and verify the correct banks are mapped
4. Check if player spawn Y position is being read from correct RAM/ROM location
5. Look for dispatch misses during the stage load sequence

---

## General Notes
- Title screen and Capcom splash render correctly overall — MMC3 CHR banking is largely working
- Zero dispatch misses in the log file during title screen idle
- TCP debug server available on port 4371 for live inspection
- All 8,083 functions recompiled with 2,889 from community disassembly
