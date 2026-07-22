/* mega-man-3_full_bank01_part08.c — PRG bank 1 function bodies (sub-part 8).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_A14B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A14B_b1");
#endif
label_A14B:;
    /* $A14B: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A14D:;
    /* $A14D: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x3C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A14F:;
    /* $A14F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA14F); return;
}

void func_A12D_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A12D_b1");
#endif
label_A12D:;
    /* $A12D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x3868; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A130:;
    /* $A130: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A132:;
    /* $A132: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0124), 1); return; }
label_A134:;
    /* $A134: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A136:;
    /* $A136: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A138:;
    /* $A138: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A133_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A133_b1");
#endif
label_A133:;
    /* $A133: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x00DE), 1); return; }
label_A135:;
    /* $A135: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA135); return;
}

void func_A0DE_b1_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A0FB;
        case 2: goto label_A0E6;
    }
label_A0DE:;
    /* $A0DE: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A0E0:;
    /* $A0E0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x8D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A0E2:;
    /* $A0E2: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x07 + g_cpu.X) & 0xFF), g_cpu.A);
label_A0E4:;
    /* $A0E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0E6:;
    /* $A0E6: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_A0E9:;
    /* $A0E9: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A0EB:;
    /* $A0EB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A0ED:;
    /* $A0ED: 8D */ maybe_trigger_vblank(4); nes_write(0x0784, g_cpu.A);
label_A0F0:;
    /* $A0F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A0F2:;
    /* $A0F2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A0F3:;
    /* $A0F3: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A0F5:;
    /* $A0F5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A0F6:;
    /* $A0F6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A0F7:;
    /* $A0F7: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A0F9:;
    /* $A0F9: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A0FB:;
    /* $A0FB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x10); FLAG_NZ(g_cpu.Y);
label_A0FD:;
    /* $A0FD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA1E1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A100:; /* buster_damage_table */
    /* $A100: 8D */ maybe_trigger_vblank(4); nes_write(0x0783, g_cpu.A);
label_A103:;
    /* $A103: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x19; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A105:;
    /* $A105: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A107:;
    /* $A107: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A109:;
    /* $A109: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x010B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A10C:;
    /* $A10C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A10E:;
    /* $A10E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A110:;
    /* $A110: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A112:;
    /* $A112: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A114:;
    /* $A114: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0FB;
    }
label_A116:;
    /* $A116: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A118:;
    /* $A118: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0781; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A11B:;
    /* $A11B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0781); FLAG_NZ(g_cpu.A);
label_A11E:;
    /* $A11E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x35; g_cpu.C=(g_cpu.A>=0x35)?1:0; FLAG_NZ(r&0xFF); }
label_A120:;
    /* $A120: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0FB;
    }
label_A122:;
    /* $A122: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A124:;
    /* $A124: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A125:;
    /* $A125: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A127:;
    /* $A127: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A129:;
    /* $A129: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x012B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A12C:;
    /* $A12C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A12E:;
    /* $A12E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A12F:;
    /* $A12F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A130:;
    /* $A130: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A132:;
    /* $A132: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A124;
    }
label_A134:;
    /* $A134: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A136:;
    /* $A136: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A138:;
    /* $A138: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0DE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0DE_b1");
#endif
    func_A0DE_b1_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0FB_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0FB_b1");
#endif
    func_A0DE_b1_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0E6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0E6_b1");
#endif
    func_A0DE_b1_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}
