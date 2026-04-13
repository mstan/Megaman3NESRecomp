# Disassembly vs Codegen Divergence Report

Compared [refreshing-lemonade/megaman3-disassembly](https://github.com/refreshing-lemonade/megaman3-disassembly) against recompiler-generated C code. Focus areas: enemy spawning, enemy rendering/collision, robot master intro screen.

---

## DIVERGENCE 1 (CRITICAL): process_sprites PHA/PHA/JMP(ind) — collision detection unreachable

**Location:** `process_sprites` at $805D (bank 1C/1D)  
**Codegen:** `func_800C_b14` in `mega-man-3_full.c` ~line 30152  
**Status:** FIXED — codegen now detects 2-PHA/JMP(ind) pattern and emits `goto` continuation

### What the disassembly does

At $8057-$805D, `process_sprites` performs an indirect JSR by manually pushing a return address:

```asm
$8057: LDA #$80       ; high byte of return addr
$8059: PHA
$805A: LDA #$76       ; low byte of return addr (RTS adds +1 = $8077)
$805C: PHA
$805D: JMP ($0000)    ; indirect jump to per-enemy AI routine
; --- enemy AI does RTS, pops $8076+1=$8077 ---
$8077: CPX #$10       ; continuation: check if slot >= 16
$8080: JSR $8102      ; check_weapon_hit
$8088: JSR $8097      ; check_player_hit
$808B: INC $EF        ; advance to next sprite slot
```

### What the codegen produces

```c
{ uint16_t _jt = nes_read16zp(0x00); call_by_address(_jt); return; }
// label_8077 exists in the code but is UNREACHABLE after the return
```

### Impact

- `check_weapon_hit` ($8102) **never called** — enemies cannot be damaged
- `check_player_hit` ($8097) **never called** — enemies cannot damage the player
- Sprite loop doesn't advance — only ONE sprite processed per call
- Directly explains ISSUES.md Issue 15b (no collision physics)

### Root cause

The recompiler translates `JMP (ind)` as `call_by_address(); return;` unconditionally. It doesn't recognize PHA/PHA/JMP(ind) as an indirect JSR that should continue at the pushed return address. Additionally, $8077 is missing from the dispatch table.

---

## DIVERGENCE 2 (CRITICAL): Intro cutscene entirely skipped

**Location:** Coroutine scheduler level  
**Codegen:** `func_9009_b12` and related intro functions  
**Status:** OPEN (matches ISSUES.md Issue 8)

### What should happen

Oracle plays full intro: portrait sliding in (frame ~60), centered animation (frame ~120), name card (frames ~240-360), teleport-down (frame ~600), gameplay (frame ~720).

### What actually happens

Native goes black -> "READY" -> gameplay. The intro cutscene is entirely bypassed.

### Key finding

**All instructions in the intro functions match the disassembly exactly.** This is NOT an instruction-level problem. The coroutine channel responsible for the intro animation either isn't scheduled or is killed prematurely. The divergence is at the scheduler state machine level.

---

## DIVERGENCE 3 (HIGH): MMC3 cross-bank dispatch at $920F

**Location:** `func_90B4_b12` at $920F  
**Codegen:** `call_by_address(0xA593)` dispatches using `g_current_bank`  
**Status:** FIX IMPLEMENTED BUT REVERTED — dispatch table correctly computes `_bank` from `g_mmc3_bank_a000`, but enabling it causes the intro code at $A593 (bank 1) to execute in a non-coroutine context, freezing the game. Blocked on Issue 8 (coroutine scheduler for intro). The `_bank` variable is emitted but the inner switch still uses `g_current_bank`.

### What the disassembly does

```asm
$9208: LDA #$03
$920A: STA $F5
$920C: JSR select_PRG_banks  ; sets R7=3 for $A000-$BFFF
$920F: JMP $A593             ; jump into bank 3's $A000 window
```

### What the codegen does

`call_by_address(0xA593)` routes via `g_current_bank` which is still 12 (from R6=24 for $8000-$9FFF). Routes to `func_A593_b12` = garbage (illegal opcodes). Should route to `func_A593_b3` (real code).

### Root cause

The dispatch table only checks `g_current_bank` (derived from R6). For addresses in $A000-$BFFF, it should check the R7-derived bank instead.

---

## DIVERGENCE 4 (HIGH): MMC3 cross-bank dispatch at $9388

**Location:** `func_9300_b12` at $9388  
**Status:** REVERTED — same as Divergence 3, blocked on Issue 8

Same class of bug as Divergence 3. After `STA $F5` / `JSR select_PRG_banks` switching R7 to bank 3, `JMP $A000` dispatches to bank 12 instead of bank 3.

---

## DIVERGENCE 5 (LOW-MEDIUM): FLAG_NZC_SUB N flag bug (systemic)

**Location:** Macro definition in `mega-man-3_full.c` line ~16  
**Status:** FIXED — N flag now uses `(_r&0xFF)>>7` to isolate the result byte's bit 7

### The bug

```c
#define FLAG_NZC_SUB(r,a,b) do { int16_t _r=(r); \
    g_cpu.N=((_r>>7)&1); ...    // BUG
```

Should be: `g_cpu.N=((_r&0xFF)>>7)&1`

For SBC results in range -255 to -129 (where low byte has bit 7 = 0 but int16_t is negative), N flag is set to 1 when it should be 0.

**Example:** A=0, M=128, C=0 → result=-129 → byte=0x7F → N should be 0, macro gives N=1.

**Current impact:** Not triggered in enemy spawning/rendering paths (values always in safe range). Latent bug that could affect other code paths.

---

## DIVERGENCE 6 (LOW): Dispatch entry 0 ($85C7) decodes data as code

**Location:** `sprite_main_ptr` entry 0, bank 14  
**Status:** OPEN

Address $85C7 falls inside a `data_region` ($83AF-$85CE). Generated `func_85C7_b14` decodes data bytes as illegal opcodes. If enemy type index 0 with active flag ever exists, garbage executes. Probably never triggered (type 0 = "no enemy").

---

## DIVERGENCE 7 (LOW): Sound engine dead

**Location:** NMI trampoline at $C121, sound engine at $FF90  
**Status:** OPEN (matches ISSUES.md Issue 4)

All 5 sound triggers in the intro path encode correctly (values pushed to circular buffer at $DC-$E3), but the sound engine consumer never runs. No audio during intro or gameplay.

---

## Areas with NO divergence (verified correct)

### Enemy Spawning ($9C00-$9D25)
- All branch logic (left/right camera loops, track loops) ✓
- All indexed memory accesses ($04C0+X, $0300+X, $0360+X, etc.) ✓
- Carry flag propagation in camera edge ADC chain ✓
- CMP flag semantics ✓
- Loop termination conditions ✓
- PHA/PLA stack pairs ✓
- Enemy data table reads ($A000-$A700) ✓
- Bank switching for data tables ✓
- find_enemy_freeslot_x ($FC43) ✓
- Killed-enemy bitmask check ($DEC2/$0150) ✓
- Dispatch routing to bank 13 ✓

### Robot Master Intro Instructions ($9000-$9A70, $B853-$B8C6)
- All PPU write sequences ✓
- Energy bar fill timing counters ✓
- CHR bank switching ✓
- Game mode transition state machine ✓
- Nametable layout addresses ✓
- All JSR targets map correctly ✓
- Dispatch table coverage for all intro entries ✓
- Function split boundaries preserve CPU state ✓

### OAM / Sprite Rendering ($C000-$C748)
- OAM DMA write order (page $02, index 0-255) ✓
- Animation counter logic in NMI ✓
- Sprite clear routine ($C628) ✓
- Sprite coordinate assembly ($C5E9) ✓
- All 97 sprite_main_ptr targets in dispatch table ✓
