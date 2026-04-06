# Mega Man 3 Recomp — Session 18 Handoff

## FIRST: Read These Files

1. **CLAUDE.md** — The project rules. Non-negotiable.
2. **Memory files** (in `~/.claude/projects/.../memory/`) — TCP debug reference, debugging approach, feedback.
3. **ISSUES.md** — Full issue history. Issues 1-3, 6-7, 9-11 are fixed. Issue 4/5 (audio) deferred. Issue 13 (dispatch miss $D3FD) is open.

## Branch State

**fix/coroutine-resume-codegen** — pushed to master. All prior work merged.

## What Session 17 Fixed

### Issue 9: Stage background tile flicker (ACTUALLY FIXED)

Sessions 6-7 mitigated but did not fully fix. Session 17 found the true root cause:

**Cross-8KB direct calls bypassing dispatch on MMC3.** The recompiler emitted `func_8332_b4()` (a direct C call) for `JMP $8332` from bank 4's $A000 range. This bypassed `call_by_address()`'s 8KB address remapping. `func_8332_b4` was data-as-code (INC instructions from data bytes) that corrupted `$FD` scroll state, causing PPUCTRL nametable bits to cycle every frame.

**Fix (in nesrecomp, not game-specific):**
1. `code_generator.c`: Cross-8KB JMP/JSR within 16KB banks now use `call_by_address()` dispatch
2. `function_finder.c`: Cross-8KB targets get mirrored function entries (±$2000) — 139 additional functions discovered

**Verified:** $FD=0x00 stable, PPUCTRL=0x88 stable, matching emulated oracle across 20+ consecutive frames.

### Issue 10: Garbled stage select portraits (FIXED as side effect)

Same root cause as Issue 9. CHR bank switching during portrait loading was hitting data-as-code functions. With the MMC3 8KB dispatch fix, portraits now display correctly.

## Current State

- Title screen: working
- Stage select: working, portraits correct
- Stage entry: working (boss intro cinematic may still have glitches — Issue 8)
- Gameplay: working, no flicker, Mega Man spawns and stands correctly
- No audio (Issue 4 — deferred)
- Dispatch miss $D3FD bank 13 logged but not impacting gameplay yet (Issue 13)

## What to Do Next

### Priority 1: Investigate gameplay further
- Can Mega Man move/jump/shoot? Test with controller input via TCP or keyboard
- Does scrolling work when Mega Man walks right?
- Do enemies spawn and behave correctly?
- Any new dispatch misses when exploring the stage?

### Priority 2: Issue 13 — Dispatch miss $D3FD bank 13
- $D3FD is in the fixed bank range ($C000-$FFFF). A dispatch miss here means the function wasn't discovered by the function finder
- Add `extra_func -1 0xD3FD` to game.toml and regenerate, OR investigate why BFS didn't find it

### Priority 3: Issue 8 — Robot master intro cinematic
- The boss intro cutscene (name card, portrait, teleport-down) may still have visual glitches
- Now that MMC3 8KB dispatch is fixed, re-test to see if this resolved itself

### Priority 4: Issue 4 — Sound engine
- The `jump_local_ptr` pattern at $8023 (PLA-return-address-as-data) needs recompiler support
- This is the last major missing feature for full MM3 support

## Build Commands

```bash
# Build recompiler (after code_generator.c or function_finder.c changes)
"/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/MSBuild/Current/Bin/MSBuild.exe" \
  "F:/Projects/nesrecomp-release/megaman3/nesrecomp/build/recompiler/NESRecomp.sln" \
  -p:Configuration=Release -p:Platform=x64 -v:minimal

# Regenerate game code
cd F:/Projects/nesrecomp-release/megaman3
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game
"/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/MSBuild/Current/Bin/MSBuild.exe" \
  "F:/Projects/nesrecomp-release/megaman3/build/MegaMan3Recomp.sln" \
  -p:Configuration=Release -p:Platform=x64 -v:minimal
```

## Running the Game

```bash
cd build/Release

# Native (port 4372):
./MegaMan3Recomp.exe "path/to/Mega-Man 3 # NES.NES" --script path/to/script.txt > C:/temp/stdout.txt 2>&1

# Emulated oracle (port 4373):
./MegaMan3Recomp.exe "path/to/Mega-Man 3 # NES.NES" --emulated --script path/to/script.txt > C:/temp/stdout.txt 2>&1
```

Kill before relaunch: `taskkill //F //IM MegaMan3Recomp.exe`

## Scripts Available

| Script | Purpose |
|--------|---------|
| `scripts/gameplay_hold.txt` | Boot → title → stage select → UP → A → gameplay, hold for TCP |
| `tools/tcp_query.py` | Generic TCP query (port, command) |
| `tools/frame_diff.py` | Ring buffer frame diff (2 consecutive frames) |
| `tools/trace_7a.py` | Trace $7A/PPUCTRL/scroll over 20 frames |
| `tools/follow_fd.py` | Write follower on $FD |
| `tools/send_input.py` | Send button input via TCP |

## Ghidra State

4 programs open: bank11.bin, bank12.bin, bank14.bin, bank15.bin.
