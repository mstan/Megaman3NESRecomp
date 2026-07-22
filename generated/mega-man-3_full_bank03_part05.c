/* mega-man-3_full_bank03_part05.c — PRG bank 3 function bodies (sub-part 5).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_A88E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A88E_b3");
#endif
label_A88E:;
    /* $A88E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_A890:;
    /* $A890: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA890); return;
}

void func_A8D7_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A8EE;
        case 2: goto label_A8FC;
    }
label_A8D7:;
    /* $A8D7: FC */ maybe_trigger_vblank(4); (void)nes_read((0x4DB0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8DA:;
    /* $A8DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A8DC:;
    /* $A8DC: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8DF:;
    /* $A8DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A8E1:;
    /* $A8E1: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8E4:;
    /* $A8E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A8E6:;
    /* $A8E6: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8E9:;
    /* $A8E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_A8EB:;
    /* $A8EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8EE:;
    /* $A8EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8B; FLAG_NZ(g_cpu.A);
label_A8F0:;
    /* $A8F0: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8F3:;
    /* $A8F3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8F6:;
    /* $A8F6: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8F9:;
    /* $A8F9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8FC:;
    /* $A8FC: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8FF:;
    /* $A8FF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A902:;
    /* $A902: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A905:;
    /* $A905: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A908:;
    /* $A908: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A90B:;
    /* $A90B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A911:;
    /* $A911: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A913:;
    /* $A913: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A914:;
    /* $A914: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A917:;
    /* $A917: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A918:;
    /* $A918: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA96E + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A91B:;
    /* $A91B: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A91E:;
    /* $A91E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A921:;
    /* $A921: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA96F + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A924:;
    /* $A924: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A927:;
    /* $A927: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_A929:;
    /* $A929: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8D7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8D7_b3");
#endif
    func_A8D7_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8EE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8EE_b3");
#endif
    func_A8D7_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8FC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8FC_b3");
#endif
    func_A8D7_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A907_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A90B;
        case 2: goto label_A909;
    }
label_A907:;
    /* $A907: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x99 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A909:;
    /* $A909: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A90B:;
    /* $A90B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A90E:;
    /* $A90E: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A911:;
    /* $A911: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A913:;
    /* $A913: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A914:;
    /* $A914: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A917:;
    /* $A917: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A918:;
    /* $A918: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA96E + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A91B:;
    /* $A91B: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A91E:;
    /* $A91E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A921:;
    /* $A921: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA96F + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A924:;
    /* $A924: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A927:;
    /* $A927: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_A929:;
    /* $A929: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A907_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A907_b3");
#endif
    func_A907_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A90B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A90B_b3");
#endif
    func_A907_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A909_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A909_b3");
#endif
    func_A907_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A946_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A946_b3");
#endif
label_A946:;
    /* $A946: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A968_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A968_b3");
#endif
label_A968:;
    /* $A968: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A96A:;
    /* $A96A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96A); return;
}

void func_A988_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A988_b3");
#endif
label_A988:;
    /* $A988: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A98A:;
    /* $A98A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98A); return;
}

void func_BD05_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD05_b3");
#endif
label_BD05:;
    /* $BD05: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD07:;
    /* $BD07: 1A */ maybe_trigger_vblank(2); /* NOP */
label_BD08:;
    /* $BD08: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D0A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xBAB8, 3)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBD08, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BD0B:;
    /* $BD0B: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BD0E:;
    /* $BD0E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD0E); return;
}
