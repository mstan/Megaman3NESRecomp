# Mega Man 3 Recomp — Session Handoff

Read CLAUDE.md first. Follow its debugging protocol EXACTLY.

## Current State: Coroutine scheduler fixed, blocked on bank 4 dispatch miss

### What's Working

The coroutine scheduler is now handled by the **recompiler + runner**, not extras.c:
- `code_generator.c` detects yield/resume/scheduler patterns automatically
- `coroutine.c` in the runner provides Windows Fiber-based coroutine support
- The ~200-line Fiber hack in extras.c has been deleted
- Game advances 1366 frames through the title screen with the new system

### Current Blocker: Bank 4 dispatch miss at $8716

The game hits `[Dispatch] MISS: no func for $8716 bank=4` at frame 1366 and stalls. This is the same bank 4 issue from session 8:

- Bank 4 (MMC3 8KB bank) has lower half = data, upper half = code
- The recompiler uses 16KB granularity — can't distinguish data from code within the bank
- `function_finder.c` seeds $8000 for every bank, creating garbage functions from data regions
- The real fix: multi-pass function discovery in `function_finder.c` (pass 1: discover reachable bank+addr pairs from fixed-bank JSRs; pass 2: generate only those)

### How to Investigate $8716

1. Use Ghidra on the 8KB bank that maps to $8000 at bank 4
2. Check if $8716 is real code or data
3. If real code: add it as `extra_func` in game.toml (temporary) or fix function_finder to discover it
4. If data: the caller is dispatching to garbage — trace the caller

### Session 9 Changes

**Committed to nesrecomp (recompiler + runner):**
- `code_generator.c`: Coroutine pattern detection (yield, resume, scheduler entry, START)
- `coroutine.c/h`: Fiber-based coroutine runtime (generic, not game-specific)
- `runner.cmake`: Added coroutine.c to source list
- `debug_server.c`: MMC3 mapper state in get_frame/mapper_state commands

**Committed to game repo:**
- `extras.c`: Removed 200-line Fiber scheduler hack, kept only runner hooks + TCP commands
- `game.toml`: Removed `replace_func` entries for $FEAA and $FF21
- `nestopia_bridge.cpp/h`: Full PPU/CPU/VRAM/OAM state extraction from Nestopia
- `nestopia-core/`: Accessor methods for PPU, CPU, mapper in NstPpu.hpp, NstCpu.hpp, NstApiEmulator.hpp, libretro.cpp
- `verify_mode.c`: Updated to use new bridge functions
- `tools/full_compare.py`: Systematic dual-instance comparison tool
- Fixed `game_fill_frame_record` overwriting frame_number instead of game_data

**Key findings:**
- Oracle comparison proved scheduler was root cause (0/20 frames matched)
- setjmp/longjmp cannot work for coroutines (STATUS_BAD_STACK crash — can't longjmp to unwound frames)
- Windows Fibers are required for separate C stacks per coroutine
- Channels initialized outside the scheduler's START path need fallback fiber creation

### Coroutine Pattern Detection (code_generator.c)

The code generator detects these 6502 patterns:

| Pattern | Detection | Emitted Code |
|---------|-----------|-------------|
| Scheduler entry | `LDX #$FF; TXS` ($A2 $FF $9A) | `coroutine_scheduler_setjmp()` |
| Yield | `TSX; STX zp,Y; JMP abs` ($BA $96 $NN $4C) | `coroutine_yield(); return;` |
| START dispatch | `JMP (ind)` in scheduler context | `coroutine_start(channel, addr); goto sched;` |
| RESUME dispatch | `PLA/TAY/PLA/TAX/RTS` after TXS | `coroutine_resume(channel); goto sched;` |

### Build Commands

```bash
# Build recompiler (only if nesrecomp source changed)
CMAKE="/c/Program Files (x86)/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"
"$CMAKE" --build nesrecomp/build/recompiler --config Release

# Regenerate game code
nesrecomp/build/recompiler/Release/NESRecomp.exe "Mega-Man 3 # NES.NES"

# Reconfigure (needed after adding new source files)
"$CMAKE" -S . -B build -G "Visual Studio 17 2022" -A x64

# Build game
"$CMAKE" --build build --config Release
```

### TCP Ports
- Native: **4372**
- Emulated: **4373**
