---
Handoff: MM3 NES Recomp — Black Screen After Stage Select

## North Star
Get Mega Man 3 to display in-stage graphics after selecting a robot master. Title screen, stage select, and music all work. The screen goes black after stage selection.

## Current State (committed)

### Branch: fix/data-region-suppression (both game repo and nesrecomp submodule)

### Latest commits:
- **nesrecomp d4505ab**: coroutine S-register save/restore, bail_trace codegen, call_by_address bail bypass, yield func detection, RTI hijack
- **game repo 0c5c660**: regen with new codegen, extras.c cleanup (NMI housekeeping removed, calls func_C000 directly)

### What works:
- Title screen displays correctly
- Controls work (keyboard: Z=A, X=B, arrows, Enter=Start, Tab=Select)
- Stage select screen displays, cursor moves, can pick a robot master
- Music plays during stage (sound engine runs via scheduler)
- Coroutine fiber survives past initial bail cascade (was dying at frame 1019, now dies at frame 2578)
- func_C000() runs from NMI without bail events
- 0 dispatch misses

### What's broken:
- **Black screen** after selecting a robot master (stage loads but no visuals)
- **$18 (palette DMA flag) never set** — NMI handler checks $18, finds 0, skips palette transfer
- **$4F (frame counter) never advances** — game logic inside coroutine is yielding but not progressing
- **Coroutine dies at frame 2578** — `call_by_address($C8D0)` returns with SP=$73, fiber is deleted

## Root Cause Analysis (proven)

### Fixed: S-register drift across yield boundary
The scheduler's resume path (PLA/PLA/S+=2 at $FEE2-$FEF1) modifies g_cpu.S by +4 from the saved SP. Without save/restore in `coroutine_yield()`, the coroutine saw a different S after resuming, causing bail checks to fire and cascade up through the call chain.

**Fix**: Save `g_cpu.S` before `SwitchToFiber`, restore after resume. Runner-level fix in `coroutine.c`.
**Result**: Fiber death pushed from frame 1019 to frame 2578.

### Remaining: game logic not advancing (NOT yet root-caused)
The coroutine IS alive and yielding/resuming every frame (1200+ yield/resume pairs). But the game state doesn't change:
- game_data identical across 10+ consecutive frames
- $18 = 0 (palette DMA never triggered)
- $4F = 0 (game frame counter stuck)
- $31 transitions from 1 → 0 (game_mode goes back to title)

**Oracle comparison** (Nestopia emulated mode) shows:
- $4F = $8E (advancing)
- Correct stage palette in both shadow ($0600) and PPU ($3F00)
- $FF = $88 (NMI enabled), $FE = $18 (rendering enabled)
- MMC3 IRQs set up (latch=64, counter active)

### Key observations from TCP capture:
- **IRQ system is implemented correctly** but `mmc3_irq_enabled=0` in native (should be enabled for status bar split)
- At frame ~1060: game_mode=1, scheduler active, 1019 yields — game IS running
- By frame ~2578: fiber dies, game resets to mode 0
- The game code enters the stage init path (func_C8D0), loads palettes, CHR data, calls banked stage code ($A000), but never reaches the part that sets $18

### Two possible failure modes:
1. **Game code takes wrong branch path** — a condition that depends on hardware state (IRQ, PPU timing) evaluates differently in the recomp vs real NES
2. **Second bail cascade** at frame 2578 — `SP=$73` is very deep, suggesting the game ran deep into the stage code before something caused a return

## What Needs Doing (in priority order)

### 1. Find FIRST divergence between native and oracle
Run both native (port 4372) and oracle (port 4373) side by side. Use the ring buffer `frame_timeseries` to find the FIRST frame where any game_data byte differs. This pinpoints when the native starts diverging.

### 2. Trace $18 writes in the oracle
Set up a `follow` on $18 in the oracle (port 4373). See which function writes to $18 and at what frame. Then check if that same write happens in native. If not, trace backward to find why.

### 3. Investigate the second fiber death at frame 2578
The bail_trace now records events. Run the game to frame 2578 and check bail_trace for any events near that frame. If there are bail events, they'll show the exact PC and S mismatch.

### 4. Check whether game code reaches the gameplay loop
The stage init at func_C8D0 has a linear sequence: init → yield → load palettes → yield → set up CHR → yield → enter gameplay loop. Determine how far the game gets through this sequence.

## Build Commands

```batch
# Build recompiler (after code_generator.c changes)
"C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/MSBuild.exe" nesrecomp/build/recompiler/NESRecomp.sln -p:Configuration=Release -p:Platform=x64 -m

# Regenerate game code
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Build game project
"C:/Program Files/Microsoft Visual Studio/2022/Community/MSBuild/Current/Bin/MSBuild.exe" build/MegaMan3Recomp.sln -p:Configuration=Release -p:Platform=x64 -m

# Launch native:
build/Release/MegaMan3Recomp.exe "Mega-Man 3 # NES.NES" --script C:/temp/mm3_debug_run.txt > C:/temp/mm3_stdout.txt 2>&1

# Launch oracle:
build/Release/MegaMan3Recomp.exe "Mega-Man 3 # NES.NES" --emulated --script C:/temp/mm3_debug_run.txt > C:/temp/mm3_oracle_out.txt 2>&1
```

## Test Script (navigates to stage)
Save to C:/temp/mm3_debug_run.txt:
```
LOG waiting for title screen
WAIT 600
LOG pressing START
HOLD START
WAIT 4
RELEASE START
WAIT 30
HOLD START
WAIT 4
RELEASE START
LOG waiting for stage select
WAIT 300
LOG picking a robot master (UP then START)
HOLD UP
WAIT 4
RELEASE UP
WAIT 15
HOLD START
WAIT 4
RELEASE START
LOG waiting for stage to load
WAIT 36000
```

## TCP Debug (native=4372, oracle=4373)
```python
import socket, json
def tcp(port, cmd):
    s = socket.socket(); s.settimeout(5); s.connect(('localhost', port))
    s.send(json.dumps(cmd).encode() + b'\n')
    data = b''
    while True:
        try: d = s.recv(65536); data += d; json.loads(data.decode()); break
        except json.JSONDecodeError: pass
    s.close(); return json.loads(data.decode())

# Key commands:
# mm3_state, sched_state, coroutine_info, bail_trace — game-specific
# read_ram, read_ppu, ppu_state, mapper_state — generic
# follow/unfollow, follow_history — write tracing
# pause, continue, step, run_to_frame — execution control
# get_frame, frame_timeseries, frame_diff — ring buffer queries
```

## Key Files
| File | Purpose | Edit? |
|------|---------|-------|
| nesrecomp/runner/src/coroutine.c | S-restore fix lives here | Yes |
| nesrecomp/recompiler/src/code_generator.c | bail_trace codegen, bail bypass | Yes |
| extras.c | Game hooks, TCP debug cmds | Yes |
| generated/mega-man-3_full.c | Recompiled game code | NEVER |

## Diagnostic Logs
- `coroutine_wal.log` — WAL log of all fiber events (START/YIELD/RESUME/RETURN)
- `bail_trace.log` — logged bail events with PC, expected/actual SP (now enabled)
- `C:/temp/sched_trace_dump.txt` — scheduler state at exit (atexit handler)
---
