/* mega-man-3_full_bank06_part04.c — PRG bank 6 function bodies (sub-part 4).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_A80C_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A80C_b6");
#endif
label_A80C:;
    /* $A80C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80C); return;
}

void func_A84C_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A84C_b6");
#endif
label_A84C:;
    /* $A84C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x084E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA84C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A84F:;
    /* $A84F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84F); return;
}

void func_A874_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A874_b6");
#endif
label_A874:;
    /* $A874: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A876:;
    /* $A876: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A878:;
    /* $A878: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A879:;
    /* $A879: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A87A:;
    /* $A87A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87A); return;
}

void func_A014_b6_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A03B;
        case 2: goto label_A02D;
        case 3: goto label_A039;
    }
label_A014:;
    /* $A014: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A015:; /* main_gamma_B */
    /* $A015: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A018:;
    /* $A018: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A019:;
    /* $A019: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A01B:;
    /* $A01B: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A01E:; /* main_gamma_F */
    /* $A01E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A01F:;
    /* $A01F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A021:; /* main_teleporter */
    /* $A021: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A024:;
    /* $A024: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A025:;
    /* $A025: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A027:; /* main_wily_machine_C */
    /* $A027: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A02A:;
    /* $A02A: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A02B:;
    /* $A02B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x000F), 6); return; }
label_A02D:;
    /* $A02D: 84 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.Y);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: 8C */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.Y);
label_A032:;
    /* $A032: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0540); FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A036:;
    /* $A036: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A037:;
    /* $A037: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A038:;
    /* $A038: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A039:; /* needle_man_init */
    /* $A039: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A03B:;
    /* $A03B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA360 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 9D */ maybe_trigger_vblank(5); nes_write((0x0618 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A041:;
    /* $A041: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A042:;
    /* $A042: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A043:;
    /* $A043: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A045:;
    /* $A045: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A03B;
    }
label_A047:;
    /* $A047: 86 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.X);
label_A049:;
    /* $A049: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0540; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A04C:;
    /* $A04C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A014_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A014_b6");
#endif
    func_A014_b6_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A03B_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A03B_b6");
#endif
    func_A014_b6_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A02D_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A02D_b6");
#endif
    func_A014_b6_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A039_b6(void) { /* needle_man_init */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A039_b6");
#endif
    func_A014_b6_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A001_b6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A001_b6");
#endif
label_A001:;
    /* $A001: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA001; g_rti_bank = 6; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}
