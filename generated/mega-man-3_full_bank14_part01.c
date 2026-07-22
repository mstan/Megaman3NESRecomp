/* mega-man-3_full_bank14_part01.c — PRG bank 14 function bodies (sub-part 1).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_9ABB_b14_body(int _entry) { /* main_mag_fly */
    switch (_entry) {
        case 1: goto label_9ACB;
        case 2: goto label_9AC8;
        case 3: goto label_9B3A;
    }
label_9ABB:; /* main_mag_fly */
    /* $9ABB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ABE:;
    /* $9ABE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9AC0:;
    /* $9AC0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9AC8; }
label_9AC2:;
    /* $9AC2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AC4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AC5:;
    /* $9AC5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9ACB, 14); return;
label_9AC8:;
    /* $9AC8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1ACA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ACB:;
    /* $9ACB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1ACD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9ACB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ACE:;
    /* $9ACE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_9B2B; }
label_9AD0:;
    /* $9AD0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AD2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AD0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD3:;
    /* $9AD3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_9AD5:;
    /* $9AD5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9B2B; }
label_9AD7:;
    /* $9AD7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_9AD9:;
    /* $9AD9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9ADB:;
    /* $9ADB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9B08; }
label_9ADD:;
    /* $9ADD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9ADF:;
    /* $9ADF: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_9AE1:;
    /* $9AE1: 86 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.X);
label_9AE3:;
    /* $9AE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9AE5:;
    /* $9AE5: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_9AE8:;
    /* $9AE8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AEA:;
    /* $9AEA: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_9AED:;
    /* $9AED: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_9AF0:;
    /* $9AF0: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_9AF2:;
    /* $9AF2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_9AF5:;
    /* $9AF5: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AF8:;
    /* $9AF8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_9B43; }
label_9AFD:;
    /* $9AFD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x55; FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B02:;
    /* $9B02: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B04:;
    /* $9B04: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B07:;
    /* $9B07: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B08:;
    /* $9B08: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_9B0A:;
    /* $9B0A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9B0C:;
    /* $9B0C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B0E:;
    /* $9B0E: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x34); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9B10:;
    /* $9B10: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B12:;
    /* $9B12: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B16:;
    /* $9B16: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C0); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B19:;
    /* $9B19: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_9B1B:;
    /* $9B1B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B1D:;
    /* $9B1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B1F:;
    /* $9B1F: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B22:;
    /* $9B22: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B25:;
    /* $9B25: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B28:;
    /* $9B28: 85 */ maybe_trigger_vblank(3); nes_write(0x35, g_cpu.A);
label_9B2A:;
    /* $9B2A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B2B:;
    /* $9B2B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_9B2D:;
    /* $9B2D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9B2F:;
    /* $9B2F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B31:;
    /* $9B31: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x34); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9B33:;
    /* $9B33: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B35:;
    /* $9B35: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_9B37:;
    /* $9B37: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B3A:;
    /* $9B3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9B3C:;
    /* $9B3C: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B3F:;
    /* $9B3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B41:;
    /* $9B41: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_9B43:;
    /* $9B43: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9ABB_b14(void) { /* main_mag_fly */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ABB_b14");
#endif
    func_9ABB_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9ACB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ACB_b14");
#endif
    func_9ABB_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9AC8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AC8_b14");
#endif
    func_9ABB_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B3A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B3A_b14");
#endif
    func_9ABB_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AAE0_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AB09;
        case 2: goto label_AAF2;
        case 3: goto label_AB06;
        case 4: goto label_AB39;
        case 5: goto label_AB3A;
        case 6: goto label_AAFE;
    }
label_AAE0:;
    /* $AAE0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAE3:;
    /* $AAE3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AAE5:;
    /* $AAE5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AAF2; }
label_AAE7:;
    /* $AAE7: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAEA:;
    /* $AAEA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_AAEC:;
    /* $AAEC: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAEF:;
    /* $AAEF: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAF2:;
    /* $AAF2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAF5:;
    /* $AAF5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_AAF7:;
    /* $AAF7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AB3A; }
label_AAF9:;
    /* $AAF9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAFC:;
    /* $AAFC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_AAFE:;
    /* $AAFE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AB06; }
label_AB00:;
    /* $AB00: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B02); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB00, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB03:;
    /* $AB03: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAB09, 14); return;
label_AB06:;
    /* $AB06: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B08); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB06, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB09:;
    /* $AB09: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_AB0B:;
    /* $AB0B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B0D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB0B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB0E:;
    /* $AB0E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AB39; }
label_AB10:;
    /* $AB10: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB13:;
    /* $AB13: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB14:;
    /* $AB14: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAB4F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB17:;
    /* $AB17: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB1A:;
    /* $AB1A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAB52 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB1D:;
    /* $AB1D: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB20:;
    /* $AB20: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAB55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB23:;
    /* $AB23: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB26:;
    /* $AB26: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAB58 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB29:;
    /* $AB29: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB2C:;
    /* $AB2C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB2F:;
    /* $AB2F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB32:;
    /* $AB32: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_AB34:;
    /* $AB34: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AB39; }
label_AB36:;
    /* $AB36: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB39:;
    /* $AB39: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB3A:;
    /* $AB3A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB3D:;
    /* $AB3D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB3A;
    }
label_AB3F:;
    /* $AB3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_AB41:;
    /* $AB41: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B43); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB41, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB44:;
    /* $AB44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB46:;
    /* $AB46: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB49:;
    /* $AB49: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x39; FLAG_NZ(g_cpu.A);
label_AB4B:;
    /* $AB4B: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB4E:;
    /* $AB4E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AAE0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AAE0_b14");
#endif
    func_AAE0_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB09_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB09_b14");
#endif
    func_AAE0_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AAF2_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AAF2_b14");
#endif
    func_AAE0_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB06_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB06_b14");
#endif
    func_AAE0_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB39_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB39_b14");
#endif
    func_AAE0_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB3A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB3A_b14");
#endif
    func_AAE0_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AAFE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AAFE_b14");
#endif
    func_AAE0_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A66B_b14_body(int _entry) { /* main_gyoraibo */
    switch (_entry) {
        case 1: goto label_A698;
        case 2: goto label_A67D;
        case 3: goto label_A693;
        case 4: goto label_A69D;
        case 5: goto label_A6A0;
        case 6: goto label_A6BD;
    }
label_A66B:; /* main_gyoraibo */
    /* $A66B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A66E:;
    /* $A66E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A670:;
    /* $A670: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A67D; }
label_A672:;
    /* $A672: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A675:;
    /* $A675: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A677:;
    /* $A677: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A67A:;
    /* $A67A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A67D:;
    /* $A67D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A680:;
    /* $A680: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A6BD; }
label_A684:;
    /* $A684: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A687:;
    /* $A687: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A693; }
label_A68B:;
    /* $A68B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x14; FLAG_NZ(g_cpu.Y);
label_A68D:;
    /* $A68D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x068F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA68D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A690:;
    /* $A690: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA698, 14); return;
label_A693:;
    /* $A693: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_A695:;
    /* $A695: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0697); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA695, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A698:;
    /* $A698: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A6A0; }
label_A69A:;
    /* $A69A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A69D:;
    /* $A69D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; } return;
label_A6A0:;
    /* $A6A0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A69D;
    }
label_A6A5:;
    /* $A6A5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6A8:;
    /* $A6A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A6BC; }
label_A6AA:;
    /* $A6AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA6AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A6AD:;
    /* $A6AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A6AF:;
    /* $A6AF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A6BC; }
label_A6B1:;
    /* $A6B1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6B4:;
    /* $A6B4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6B7:;
    /* $A6B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x33; FLAG_NZ(g_cpu.A);
label_A6B9:;
    /* $A6B9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06BB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA6B9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A6BC:;
    /* $A6BC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A6BD:;
    /* $A6BD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C0:;
    /* $A6C0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x33; g_cpu.C=(g_cpu.A>=0x33)?1:0; FLAG_NZ(r&0xFF); }
label_A6C2:;
    /* $A6C2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A6BC;
    }
label_A6C4:;
    /* $A6C4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C7:;
    /* $A6C7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6CA:;
    /* $A6CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A6BC;
    }
label_A6CC:;
    /* $A6CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_A6CE:;
    /* $A6CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06D0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA6CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A6D1:;
    /* $A6D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A6D3:;
    /* $A6D3: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A6D6:;
    /* $A6D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A6D8:;
    /* $A6D8: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A6DB:;
    /* $A6DB: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6DE:;
    /* $A6DE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06E0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA6DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A6E1:;
    /* $A6E1: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_A730; }
label_A6E3:;
    /* $A6E3: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A6E5:;
    /* $A6E5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6E8:;
    /* $A6E8: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A6EB:;
    /* $A6EB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A6ED:;
    /* $A6ED: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A6EE:;
    /* $A6EE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6F1:;
    /* $A6F1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A6F2:;
    /* $A6F2: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA731 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6F5:;
    /* $A6F5: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A6F6:;
    /* $A6F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6F9:;
    /* $A6F9: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA732 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6FC:;
    /* $A6FC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_A6FE:;
    /* $A6FE: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A701:;
    /* $A701: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A702:;
    /* $A702: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A705:;
    /* $A705: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A708:;
    /* $A708: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A709:;
    /* $A709: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70B:;
    /* $A70B: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A70E:;
    /* $A70E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A710:;
    /* $A710: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A713:;
    /* $A713: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0717); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA715, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A718:;
    /* $A718: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A71B:;
    /* $A71B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x28; g_cpu.C=(g_cpu.A>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A71D:;
    /* $A71D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A726; }
label_A71F:;
    /* $A71F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_A721:;
    /* $A721: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A724:;
    /* $A724: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A72B; }
label_A726:;
    /* $A726: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x29; FLAG_NZ(g_cpu.A);
label_A728:;
    /* $A728: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A72B:;
    /* $A72B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A72D:;
    /* $A72D: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A730:;
    /* $A730: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A66B_b14(void) { /* main_gyoraibo */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A66B_b14");
#endif
    func_A66B_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A698_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A698_b14");
#endif
    func_A66B_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A67D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A67D_b14");
#endif
    func_A66B_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A693_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A693_b14");
#endif
    func_A66B_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A69D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A69D_b14");
#endif
    func_A66B_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A6A0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A6A0_b14");
#endif
    func_A66B_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A6BD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A6BD_b14");
#endif
    func_A66B_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B44_b14_body(int _entry) { /* main_junk_golem */
    switch (_entry) {
        case 1: goto label_9B58;
        case 2: goto label_9B67;
        case 3: goto label_9B78;
        case 4: goto label_9B8D;
        case 5: goto label_9BA6;
        case 6: goto label_9BBD;
        case 7: goto label_9BD1;
        case 8: goto label_9BE1;
        case 9: goto label_9BB3;
    }
label_9B44:; /* main_junk_golem */
    /* $9B44: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B47:;
    /* $9B47: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9B49:;
    /* $9B49: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B58; }
label_9B4B:;
    /* $9B4B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B4D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B4B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B4E:;
    /* $9B4E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x76; g_cpu.C=(g_cpu.A>=0x76)?1:0; FLAG_NZ(r&0xFF); }
label_9B50:;
    /* $9B50: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1B43), 14); return; }
label_9B52:;
    /* $9B52: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B55:;
    /* $9B55: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B57); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B55, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B58:;
    /* $9B58: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B5B:;
    /* $9B5B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_9B5D:;
    /* $9B5D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B67; }
label_9B5F:;
    /* $9B5F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B62:;
    /* $9B62: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x04; FLAG_NZ(g_cpu.A);
label_9B64:;
    /* $9B64: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B67:;
    /* $9B67: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B6A:;
    /* $9B6A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9B6C:;
    /* $9B6C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B78; }
label_9B6E:;
    /* $9B6E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x24; FLAG_NZ(g_cpu.Y);
label_9B70:;
    /* $9B70: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B72); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B73:;
    /* $9B73: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9BE1; }
label_9B75:;
    /* $9B75: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B78:;
    /* $9B78: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B7B:;
    /* $9B7B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9B7C:;
    /* $9B7C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B7E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B7C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B7F:;
    /* $9B7F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9B80:;
    /* $9B80: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x04A0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9B83:;
    /* $9B83: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B8D; }
label_9B85:;
    /* $9B85: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B88:;
    /* $9B88: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_9B8A:;
    /* $9B8A: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B8D:;
    /* $9B8D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B90:;
    /* $9B90: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BA6; }
label_9B92:;
    /* $9B92: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B94); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9BE2, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B95:;
    /* $9B95: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_9B97:;
    /* $9B97: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9B99:;
    /* $9B99: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9B9C:;
    /* $9B9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_9B9E:;
    /* $9B9E: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BA1:;
    /* $9BA1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9BA3:;
    /* $9BA3: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9BA6:;
    /* $9BA6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BA9:;
    /* $9BA9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BD1; }
label_9BAB:;
    /* $9BAB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BAE:;
    /* $9BAE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9BAF:;
    /* $9BAF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BB2:;
    /* $9BB2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9BB3:;
    /* $9BB3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C0 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9BB6:;
    /* $9BB6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9BBD; }
label_9BB8:;
    /* $9BB8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_9BBA:;
    /* $9BBA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_9BBC:;
    /* $9BBC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9BBD:;
    /* $9BBD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_9BBF:;
    /* $9BBF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9BE1; }
label_9BC1:;
    /* $9BC1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BC4:;
    /* $9BC4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x39; g_cpu.C=(g_cpu.A>=0x39)?1:0; FLAG_NZ(r&0xFF); }
label_9BC6:;
    /* $9BC6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BD1; }
label_9BC8:;
    /* $9BC8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x39; FLAG_NZ(g_cpu.A);
label_9BCA:;
    /* $9BCA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BCC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BCA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BCD:;
    /* $9BCD: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BD0:;
    /* $9BD0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9BD1:;
    /* $9BD1: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9BD4:;
    /* $9BD4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BD7:;
    /* $9BD7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BDA:;
    /* $9BDA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9BE1; }
label_9BDC:;
    /* $9BDC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_9BDE:;
    /* $9BDE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BE0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BDE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BE1:;
    /* $9BE1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9B44_b14(void) { /* main_junk_golem */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B44_b14");
#endif
    func_9B44_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B58_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B58_b14");
#endif
    func_9B44_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B67_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B67_b14");
#endif
    func_9B44_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B78_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B78_b14");
#endif
    func_9B44_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B8D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B8D_b14");
#endif
    func_9B44_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9BA6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BA6_b14");
#endif
    func_9B44_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9BBD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BBD_b14");
#endif
    func_9B44_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9BD1_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BD1_b14");
#endif
    func_9B44_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9BE1_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BE1_b14");
#endif
    func_9B44_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9BB3_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BB3_b14");
#endif
    func_9B44_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C56_b14_body(int _entry) { /* main_pickelman_bull */
    switch (_entry) {
        case 1: goto label_9C73;
        case 2: goto label_9CA5;
        case 3: goto label_9CA6;
        case 4: goto label_9CD6;
        case 5: goto label_9CF0;
        case 6: goto label_9D18;
        case 7: goto label_9D00;
        case 8: goto label_9D03;
    }
label_9C56:; /* main_pickelman_bull */
    /* $9C56: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C59:;
    /* $9C59: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9C5B:;
    /* $9C5B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C73; }
label_9C5D:;
    /* $9C5D: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C60:;
    /* $9C60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9C62:;
    /* $9C62: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C65:;
    /* $9C65: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C67); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9D20, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C65, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C68:;
    /* $9C68: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C6B:;
    /* $9C6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_9C6D:;
    /* $9C6D: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C70:;
    /* $9C70: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C73:;
    /* $9C73: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C76:;
    /* $9C76: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9C77:;
    /* $9C77: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C7A:;
    /* $9C7A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9C7B:;
    /* $9C7B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x17; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C7D:;
    /* $9C7D: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C80:; /* spawn_enemy */
    /* $9C80: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC3; FLAG_NZ(g_cpu.A);
label_9C82:;
    /* $9C82: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C85:;
    /* $9C85: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C87); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C85, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C88:;
    /* $9C88: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9C89:;
    /* $9C89: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C8C:;
    /* $9C8C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C8F:;
    /* $9C8F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CA5; }
label_9C91:;
    /* $9C91: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAC; FLAG_NZ(g_cpu.A);
label_9C93:;
    /* $9C93: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C96:;
    /* $9C96: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C99:;
    /* $9C99: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9C9B:;
    /* $9C9B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CD6; }
label_9C9D:;
    /* $9C9D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9CA0:;
    /* $9CA0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CA6; }
label_9CA2:;
    /* $9CA2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9CA5:;
    /* $9CA5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9CA6:;
    /* $9CA6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2A; FLAG_NZ(g_cpu.Y);
label_9CA8:;
    /* $9CA8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CAA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F606(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CA8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CAB:;
    /* $9CAB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CAE:;
    /* $9CAE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9CB0:;
    /* $9CB0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CC0; }
label_9CB2:;
    /* $9CB2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x42); FLAG_NZ(g_cpu.A);
label_9CB4:;
    /* $9CB4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9CB6:;
    /* $9CB6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CCD; }
label_9CB8:;
    /* $9CB8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9CBA:;
    /* $9CBA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CBC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CBA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CBD:;
    /* $9CBD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9CCB, 14); return;
label_9CC0:;
    /* $9CC0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x44); FLAG_NZ(g_cpu.A);
label_9CC2:;
    /* $9CC2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_9CC4:;
    /* $9CC4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CCD; }
label_9CC6:;
    /* $9CC6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x11; FLAG_NZ(g_cpu.Y);
label_9CC8:;
    /* $9CC8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CCA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CC8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CCB:;
    /* $9CCB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9CD5; }
label_9CCD:;
    /* $9CCD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CD0:;
    /* $9CD0: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_9CD2:;
    /* $9CD2: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CD5:;
    /* $9CD5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9CD6:;
    /* $9CD6: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9CD9:;
    /* $9CD9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9CF0; }
label_9CDB:;
    /* $9CDB: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CDE:;
    /* $9CDE: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CE1:;
    /* $9CE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_9CE3:;
    /* $9CE3: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CE6:;
    /* $9CE6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CE8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9D20, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CE6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CE9:;
    /* $9CE9: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CEC:;
    /* $9CEC: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9CEF:;
    /* $9CEF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9CF0:;
    /* $9CF0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF3:;
    /* $9CF3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9D18; }
label_9CF5:;
    /* $9CF5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF8:;
    /* $9CF8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9CFA:;
    /* $9CFA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9CFB:;
    /* $9CFB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9CFC:;
    /* $9CFC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CFF:;
    /* $9CFF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9D00:;
    /* $9D00: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9D1C + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9D03:;
    /* $9D03: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D06:;
    /* $9D06: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D09:;
    /* $9D09: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9D1D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9D0C:;
    /* $9D0C: 9D */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D0F:;
    /* $9D0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9D11:;
    /* $9D11: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D14:;
    /* $9D14: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9D17:;
    /* $9D17: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9D18:;
    /* $9D18: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9D1B:;
    /* $9D1B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C56_b14(void) { /* main_pickelman_bull */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C56_b14");
#endif
    func_9C56_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C73_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C73_b14");
#endif
    func_9C56_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9CA5_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CA5_b14");
#endif
    func_9C56_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9CA6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CA6_b14");
#endif
    func_9C56_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9CD6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CD6_b14");
#endif
    func_9C56_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9CF0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9CF0_b14");
#endif
    func_9C56_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D18_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D18_b14");
#endif
    func_9C56_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D00_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D00_b14");
#endif
    func_9C56_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D03_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D03_b14");
#endif
    func_9C56_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D31_b14_body(int _entry) { /* main_bikky */
    switch (_entry) {
        case 1: goto label_9D4C;
        case 2: goto label_9D51;
        case 3: goto label_9D6B;
        case 4: goto label_9D7E;
        case 5: goto label_9D5B;
        case 6: goto label_9D80;
    }
label_9D31:; /* main_bikky */
    /* $9D31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D33); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D34:;
    /* $9D34: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9D36:;
    /* $9D36: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D38); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D36, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D39:;
    /* $9D39: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9D51; }
label_9D3B:;
    /* $9D3B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9D3D:;
    /* $9D3D: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D40:;
    /* $9D40: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D43:;
    /* $9D43: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9D45:;
    /* $9D45: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D4C; }
label_9D47:;
    /* $9D47: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_9D49:;
    /* $9D49: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; } return;
label_9D4C:;
    /* $9D4C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_9D4E:;
    /* $9D4E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; } return;
label_9D51:;
    /* $9D51: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D54:;
    /* $9D54: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9D56:;
    /* $9D56: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D7E; }
label_9D58:;
    /* $9D58: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D5B:;
    /* $9D5B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9D6B; }
label_9D5D:;
    /* $9D5D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9D5F:;
    /* $9D5F: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D62:;
    /* $9D62: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D65:;
    /* $9D65: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9D67:;
    /* $9D67: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D69); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D67, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D6A:;
    /* $9D6A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9D6B:;
    /* $9D6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_9D6D:;
    /* $9D6D: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D70:;
    /* $9D70: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_9D72:;
    /* $9D72: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D75:;
    /* $9D75: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D77); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D75, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D78:;
    /* $9D78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC5; FLAG_NZ(g_cpu.A);
label_9D7A:;
    /* $9D7A: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D7D:;
    /* $9D7D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9D7E:;
    /* $9D7E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA5; FLAG_NZ(g_cpu.A);
label_9D80:;
    /* $9D80: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D83:;
    /* $9D83: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D31_b14(void) { /* main_bikky */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D31_b14");
#endif
    func_9D31_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D4C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D4C_b14");
#endif
    func_9D31_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D51_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D51_b14");
#endif
    func_9D31_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D6B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D6B_b14");
#endif
    func_9D31_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D7E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D7E_b14");
#endif
    func_9D31_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D5B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D5B_b14");
#endif
    func_9D31_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D80_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D80_b14");
#endif
    func_9D31_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9096_b14_body(int _entry) { /* main_unknown_14 */
    switch (_entry) {
        case 1: goto label_90A9;
    }
label_9096:; /* main_unknown_14 */
    /* $9096: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9099:;
    /* $9099: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90DE; }
label_909B:;
    /* $909B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x109D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x909B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_909E:;
    /* $909E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_90D6; }
label_90A0:;
    /* $90A0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90A3:;
    /* $90A3: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90A6:;
    /* $90A6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90A9:;
    /* $90A9: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90AC:;
    /* $90AC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90AF:;
    /* $90AF: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90B2:;
    /* $90B2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90B5:;
    /* $90B5: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90B8:;
    /* $90B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_90BA:;
    /* $90BA: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90BD:;
    /* $90BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_90BF:;
    /* $90BF: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90C2:;
    /* $90C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4E; FLAG_NZ(g_cpu.A);
label_90C4:;
    /* $90C4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10C6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90C4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90C7:;
    /* $90C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_90C9:;
    /* $90C9: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90CC:;
    /* $90CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_90CE:;
    /* $90CE: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90D1:;
    /* $90D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_90D3:;
    /* $90D3: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90D6:;
    /* $90D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_90D8:;
    /* $90D8: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90DB:;
    /* $90DB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; } return;
label_90DE:;
    /* $90DE: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_90E1:;
    /* $90E1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9096_b14(void) { /* main_unknown_14 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9096_b14");
#endif
    func_9096_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90A9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90A9_b14");
#endif
    func_9096_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D84_b14_body(int _entry) { /* main_magnet_force */
    switch (_entry) {
        case 1: goto label_9DA3;
        case 2: goto label_9DA9;
        case 3: goto label_9DB3;
    }
label_9D84:; /* main_magnet_force */
    /* $9D84: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D86); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D84, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D87:;
    /* $9D87: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1C; g_cpu.C=(g_cpu.A>=0x1C)?1:0; FLAG_NZ(r&0xFF); }
label_9D89:;
    /* $9D89: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9DB3; }
label_9D8B:;
    /* $9D8B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D8D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D8B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D8E:;
    /* $9D8E: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9D90:;
    /* $9D90: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x68; g_cpu.C=(g_cpu.A>=0x68)?1:0; FLAG_NZ(r&0xFF); }
label_9D92:;
    /* $9D92: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9DB3; }
label_9D94:;
    /* $9D94: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D97:;
    /* $9D97: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_9D99:;
    /* $9D99: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9DA3; }
label_9D9B:;
    /* $9D9B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9D9D:;
    /* $9D9D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9DB3; }
label_9D9F:;
    /* $9D9F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9DA1:;
    /* $9DA1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9DA9; }
label_9DA3:;
    /* $9DA3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9DA5:;
    /* $9DA5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9DB3; }
label_9DA7:;
    /* $9DA7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9DA9:;
    /* $9DA9: 85 */ maybe_trigger_vblank(3); nes_write(0x36, g_cpu.A);
label_9DAB:;
    /* $9DAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9DAD:;
    /* $9DAD: 85 */ maybe_trigger_vblank(3); nes_write(0x37, g_cpu.A);
label_9DAF:;
    /* $9DAF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9DB1:;
    /* $9DB1: 85 */ maybe_trigger_vblank(3); nes_write(0x38, g_cpu.A);
label_9DB3:;
    /* $9DB3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9D84_b14(void) { /* main_magnet_force */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D84_b14");
#endif
    func_9D84_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9DA3_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9DA3_b14");
#endif
    func_9D84_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9DA9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9DA9_b14");
#endif
    func_9D84_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9DB3_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9DB3_b14");
#endif
    func_9D84_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C19_b14_body(int _entry) { /* main_unknown_24 */
    switch (_entry) {
        case 1: goto label_9C2B;
        case 2: goto label_9C3C;
        case 3: goto label_9C55;
    }
label_9C19:; /* main_unknown_24 */
    /* $9C19: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C1C:;
    /* $9C1C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9C1E:;
    /* $9C1E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9C2B; }
label_9C20:;
    /* $9C20: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C23:;
    /* $9C23: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9C25:;
    /* $9C25: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C28:;
    /* $9C28: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C2B:;
    /* $9C2B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C2D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C2B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C2E:;
    /* $9C2E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C31:;
    /* $9C31: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9C32:;
    /* $9C32: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0500 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9C35:;
    /* $9C35: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C3C; }
label_9C37:;
    /* $9C37: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_9C39:;
    /* $9C39: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_9C3B:;
    /* $9C3B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9C3C:;
    /* $9C3C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_9C3E:;
    /* $9C3E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9C55; }
label_9C40:;
    /* $9C40: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9C42:;
    /* $9C42: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9C44:;
    /* $9C44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9C46:;
    /* $9C46: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9C48:;
    /* $9C48: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C4A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC63(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C48, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C4B:;
    /* $9C4B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0C); FLAG_NZ(g_cpu.A);
label_9C4D:;
    /* $9C4D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C50:;
    /* $9C50: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_9C52:;
    /* $9C52: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C55:;
    /* $9C55: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C19_b14(void) { /* main_unknown_24 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C19_b14");
#endif
    func_9C19_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C2B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C2B_b14");
#endif
    func_9C19_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C3C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C3C_b14");
#endif
    func_9C19_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C55_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C55_b14");
#endif
    func_9C19_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A498_b14_body(int _entry) { /* main_nitron */
    switch (_entry) {
        case 1: goto label_A4BA;
        case 2: goto label_A4AF;
        case 3: goto label_A4AC;
        case 4: goto label_A4B9;
        case 5: goto label_A4C4;
        case 6: goto label_A4FC;
        case 7: goto label_A4BD;
        case 8: goto label_A4A9;
        case 9: goto label_A4E6;
    }
label_A498:; /* main_nitron */
    /* $A498: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A49D:;
    /* $A49D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4BA; }
label_A49F:;
    /* $A49F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A2:;
    /* $A4A2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A4A4:;
    /* $A4A4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4AC; }
label_A4A6:;
    /* $A4A6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04A8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA4A6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A4A9:;
    /* $A4A9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA4AF, 14); return;
label_A4AC:;
    /* $A4AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA4AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A4AF:;
    /* $A4AF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04B1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA4AF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A4B2:;
    /* $A4B2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_A4B4:;
    /* $A4B4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A4B9; }
label_A4B6:;
    /* $A4B6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B9:;
    /* $A4B9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A4BA:;
    /* $A4BA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4BD:;
    /* $A4BD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A4BF:;
    /* $A4BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4C4; }
label_A4C1:;
    /* $A4C1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA561, 14); return;
label_A4C4:;
    /* $A4C4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C7:;
    /* $A4C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A51A; }
label_A4C9:;
    /* $A4C9: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A4CC:;
    /* $A4CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA56E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CF:;
    /* $A4CF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D0:;
    /* $A4D0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A4D1:;
    /* $A4D1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA57C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D4:;
    /* $A4D4: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4D7:;
    /* $A4D7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA57D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4DA:;
    /* $A4DA: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4DD:;
    /* $A4DD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA59C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E0:;
    /* $A4E0: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4E3:;
    /* $A4E3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA59D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4E6:;
    /* $A4E6: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4E9:;
    /* $A4E9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4EC:;
    /* $A4EC: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A503; }
label_A4EE:;
    /* $A4EE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4F1:;
    /* $A4F1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_A4F3:;
    /* $A4F3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4F4:;
    /* $A4F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A4F6:;
    /* $A4F6: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4F9:;
    /* $A4F9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4FC:;
    /* $A4FC: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_A4FE:;
    /* $A4FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A500:; /* enemy_speed_ID_g */
    /* $A500: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A503:;
    /* $A503: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A506:;
    /* $A506: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A509:;
    /* $A509: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A50B:;
    /* $A50B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A515; }
label_A50D:;
    /* $A50D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A510:;
    /* $A510: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_A512:;
    /* $A512: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A515:;
    /* $A515: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_A517:;
    /* $A517: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A51A:;
    /* $A51A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51D:;
    /* $A51D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A520:;
    /* $A520: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A521:;
    /* $A521: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0440 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A524:;
    /* $A524: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A527:;
    /* $A527: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A52A:;
    /* $A52A: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0460 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A52D:;
    /* $A52D: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A530:;
    /* $A530: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A533:;
    /* $A533: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A535:;
    /* $A535: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A53E; }
label_A537:;
    /* $A537: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0539); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA537, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A53A:;
    /* $A53A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A541; }
label_A53C:;
    /* $A53C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A541; }
label_A53E:;
    /* $A53E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0540); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA53E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A541:;
    /* $A541: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A544:;
    /* $A544: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A55D; }
label_A546:;
    /* $A546: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0548); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA5BC, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA546, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A549:;
    /* $A549: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54C:;
    /* $A54C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A54F:;
    /* $A54F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A551:;
    /* $A551: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A557; }
label_A553:;
    /* $A553: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A555:;
    /* $A555: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A559; }
label_A557:;
    /* $A557: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A55C:;
    /* $A55C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A55D:;
    /* $A55D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A560:;
    /* $A560: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A498_b14(void) { /* main_nitron */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A498_b14");
#endif
    func_A498_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4BA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4BA_b14");
#endif
    func_A498_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4AF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4AF_b14");
#endif
    func_A498_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4AC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4AC_b14");
#endif
    func_A498_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4B9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4B9_b14");
#endif
    func_A498_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4C4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4C4_b14");
#endif
    func_A498_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4FC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4FC_b14");
#endif
    func_A498_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4BD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4BD_b14");
#endif
    func_A498_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4A9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4A9_b14");
#endif
    func_A498_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4E6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4E6_b14");
#endif
    func_A498_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A5FE_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A626;
        case 2: goto label_A605;
        case 3: goto label_A60B;
        case 4: goto label_A627;
    }
label_A5FE:;
    /* $A5FE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A601:;
    /* $A601: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A603:;
    /* $A603: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A60B; }
label_A605:;
    /* $A605: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0607); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA605, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A608:;
    /* $A608: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A60B:;
    /* $A60B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A60E:;
    /* $A60E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A610:;
    /* $A610: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A627; }
label_A612:;
    /* $A612: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x12; FLAG_NZ(g_cpu.Y);
label_A614:;
    /* $A614: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0616); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA614, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A617:;
    /* $A617: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A626; }
label_A619:;
    /* $A619: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x061D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA61B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A61E:;
    /* $A61E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A620:;
    /* $A620: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0622); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA620, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A623:;
    /* $A623: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A626:;
    /* $A626: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A627:;
    /* $A627: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A62A:;
    /* $A62A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x71; g_cpu.C=(g_cpu.A>=0x71)?1:0; FLAG_NZ(r&0xFF); }
label_A62C:;
    /* $A62C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A626;
    }
label_A62E:;
    /* $A62E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A631:;
    /* $A631: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A633:;
    /* $A633: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A626;
    }
label_A635:;
    /* $A635: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
}

void func_A5FE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5FE_b14");
#endif
    func_A5FE_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A626_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A626_b14");
#endif
    func_A5FE_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A605_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A605_b14");
#endif
    func_A5FE_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A60B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A60B_b14");
#endif
    func_A5FE_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A627_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A627_b14");
#endif
    func_A5FE_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A63A_b14_body(int _entry) { /* main_unknown_27 */
    switch (_entry) {
        case 1: goto label_A668;
    }
label_A63A:; /* main_unknown_27 */
    /* $A63A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x71; g_cpu.C=(g_cpu.A>=0x71)?1:0; FLAG_NZ(r&0xFF); }
label_A63F:;
    /* $A63F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A668; }
label_A641:;
    /* $A641: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A646:;
    /* $A646: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A667; }
label_A648:;
    /* $A648: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x92; FLAG_NZ(g_cpu.A);
label_A64A:;
    /* $A64A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x064C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA64A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A64D:;
    /* $A64D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A64F:;
    /* $A64F: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A652:;
    /* $A652: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A655:;
    /* $A655: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A657:;
    /* $A657: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A65A:;
    /* $A65A: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A65D:;
    /* $A65D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A65F:;
    /* $A65F: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A662:;
    /* $A662: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A664:;
    /* $A664: 9D */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A667:;
    /* $A667: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A668:;
    /* $A668: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xABEA, 14); return;
}

void func_A63A_b14(void) { /* main_unknown_27 */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A63A_b14");
#endif
    func_A63A_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A668_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A668_b14");
#endif
    func_A63A_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A735_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A74A;
    }
label_A735:;
    /* $A735: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A738:;
    /* $A738: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A73A:;
    /* $A73A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A74A; }
label_A73C:;
    /* $A73C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A73F:;
    /* $A73F: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A742:;
    /* $A742: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A744:;
    /* $A744: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A747:;
    /* $A747: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A74A:;
    /* $A74A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74D:;
    /* $A74D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A74F:;
    /* $A74F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A76B; }
label_A751:;
    /* $A751: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x17; FLAG_NZ(g_cpu.Y);
label_A753:;
    /* $A753: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0755); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F642(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA753, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A756:;
    /* $A756: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A76B; }
label_A758:;
    /* $A758: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A75B:;
    /* $A75B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_A75D:;
    /* $A75D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x075F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA75D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A760:;
    /* $A760: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A762:;
    /* $A762: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A765:;
    /* $A765: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x56; FLAG_NZ(g_cpu.A);
label_A767:;
    /* $A767: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A76A:;
    /* $A76A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A76B:;
    /* $A76B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A76E:;
    /* $A76E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A7CA; }
label_A770:;
    /* $A770: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A773:;
    /* $A773: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x29; g_cpu.C=(g_cpu.A>=0x29)?1:0; FLAG_NZ(r&0xFF); }
label_A775:;
    /* $A775: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A780; }
label_A777:;
    /* $A777: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A77A:;
    /* $A77A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x62; g_cpu.C=(g_cpu.A>=0x62)?1:0; FLAG_NZ(r&0xFF); }
label_A77C:;
    /* $A77C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7CA; }
label_A77E:;
    /* $A77E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A787; }
label_A780:;
    /* $A780: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A783:;
    /* $A783: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB4; g_cpu.C=(g_cpu.A>=0xB4)?1:0; FLAG_NZ(r&0xFF); }
label_A785:;
    /* $A785: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7CA; }
label_A787:;
    /* $A787: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A78A:;
    /* $A78A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x078C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA78A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A78D:;
    /* $A78D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A7CA; }
label_A78F:;
    /* $A78F: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A791:;
    /* $A791: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A794:;
    /* $A794: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A797:;
    /* $A797: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A799:;
    /* $A799: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A79A:;
    /* $A79A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A79E:;
    /* $A79E: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA731 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A1:;
    /* $A7A1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A7A2:;
    /* $A7A2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A5:;
    /* $A7A5: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA732 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A8:;
    /* $A7A8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_A7AA:;
    /* $A7AA: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7AD:;
    /* $A7AD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A7AE:;
    /* $A7AE: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7B1:;
    /* $A7B1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7B4:;
    /* $A7B4: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A7B5:;
    /* $A7B5: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B7:;
    /* $A7B7: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7BA:;
    /* $A7BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A7BC:;
    /* $A7BC: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7BF:;
    /* $A7BF: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7C2:;
    /* $A7C2: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7C5:;
    /* $A7C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_A7C7:;
    /* $A7C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07C9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7CA:;
    /* $A7CA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A735_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A735_b14");
#endif
    func_A735_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A74A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A74A_b14");
#endif
    func_A735_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2EC_b14_body(int _entry) { /* main_hari_harry */
    switch (_entry) {
        case 1: goto label_A3B0;
        case 2: goto label_A2FE;
        case 3: goto label_A318;
        case 4: goto label_A321;
        case 5: goto label_A33D;
        case 6: goto label_A354;
        case 7: goto label_A36A;
        case 8: goto label_A36B;
        case 9: goto label_A388;
        case 10: goto label_A389;
        case 11: goto label_A3AB;
        case 12: goto label_A3BA;
        case 13: goto label_A3D6;
        case 14: goto label_A3D7;
        case 15: goto label_A3FA;
        case 16: goto label_A2F8;
        case 17: goto label_A2FB;
    }
label_A2EC:; /* main_hari_harry */
    /* $A2EC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2EF:;
    /* $A2EF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A2F1:;
    /* $A2F1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2FE; }
label_A2F3:;
    /* $A2F3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02F5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA2F3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A2F6:;
    /* $A2F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A2F8:;
    /* $A2F8: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2FB:;
    /* $A2FB: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2FE:;
    /* $A2FE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A301:;
    /* $A301: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A303:;
    /* $A303: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A305:;
    /* $A305: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A321; }
label_A307:;
    /* $A307: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A309:;
    /* $A309: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A389; }
label_A30B:;
    /* $A30B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A30E:;
    /* $A30E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A318; }
label_A310:;
    /* $A310: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A315:;
    /* $A315: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A318:;
    /* $A318: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A31A:;
    /* $A31A: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A31D:;
    /* $A31D: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A320:;
    /* $A320: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A321:;
    /* $A321: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A324:;
    /* $A324: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A36B; }
label_A326:;
    /* $A326: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A329:;
    /* $A329: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A32B:;
    /* $A32B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A33D; }
label_A32D:;
    /* $A32D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A330:;
    /* $A330: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A332:;
    /* $A332: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A33D; }
label_A334:;
    /* $A334: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A336:;
    /* $A336: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A338:;
    /* $A338: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_A33A:;
    /* $A33A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x033C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA41A, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA33A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A33D:;
    /* $A33D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A340:;
    /* $A340: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A342:;
    /* $A342: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A354; }
label_A344:;
    /* $A344: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A347:;
    /* $A347: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A349:;
    /* $A349: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A354; }
label_A34B:;
    /* $A34B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A34D:;
    /* $A34D: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A34F:;
    /* $A34F: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_A351:;
    /* $A351: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0353); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA41A, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA351, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A354:;
    /* $A354: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A357:;
    /* $A357: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A359:;
    /* $A359: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A36A; }
label_A35B:;
    /* $A35B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A35E:;
    /* $A35E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A360:;
    /* $A360: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A36A; }
label_A362:;
    /* $A362: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A365:;
    /* $A365: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A36A:;
    /* $A36A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A36B:;
    /* $A36B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A36D:;
    /* $A36D: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A370:;
    /* $A370: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A373:;
    /* $A373: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A376:;
    /* $A376: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A388; }
label_A378:;
    /* $A378: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37B:;
    /* $A37B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x77; FLAG_NZ(g_cpu.A);
label_A37D:;
    /* $A37D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x037F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA37D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A380:;
    /* $A380: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0382); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA380, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A383:;
    /* $A383: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_A385:;
    /* $A385: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A388:;
    /* $A388: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A389:;
    /* $A389: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A38C:;
    /* $A38C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x76; g_cpu.C=(g_cpu.A>=0x76)?1:0; FLAG_NZ(r&0xFF); }
label_A38E:;
    /* $A38E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3FA; }
label_A390:;
    /* $A390: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_A392:;
    /* $A392: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0394); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA392, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A395:;
    /* $A395: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A3BA; }
label_A397:;
    /* $A397: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAA; FLAG_NZ(g_cpu.A);
label_A399:;
    /* $A399: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A39C:;
    /* $A39C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A39F:;
    /* $A39F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A3A1:;
    /* $A3A1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3AB; }
label_A3A3:;
    /* $A3A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1C; FLAG_NZ(g_cpu.Y);
label_A3A5:;
    /* $A3A5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03A7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA3A5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A3A8:;
    /* $A3A8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA3B0, 14); return;
label_A3AB:;
    /* $A3AB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1D; FLAG_NZ(g_cpu.Y);
label_A3AD:;
    /* $A3AD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03AF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA3AD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A3B0:;
    /* $A3B0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A3BA; }
label_A3B2:;
    /* $A3B2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3B5:;
    /* $A3B5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A3B7:;
    /* $A3B7: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3BA:;
    /* $A3BA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3BD:;
    /* $A3BD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3D7; }
label_A3BF:;
    /* $A3BF: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3C2:;
    /* $A3C2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3D6; }
label_A3C4:;
    /* $A3C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_A3C6:;
    /* $A3C6: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3C9:;
    /* $A3C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x76; FLAG_NZ(g_cpu.A);
label_A3CB:;
    /* $A3CB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03CD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA3CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A3CE:;
    /* $A3CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A3D0:;
    /* $A3D0: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3D3:;
    /* $A3D3: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3D6:;
    /* $A3D6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A3D7:;
    /* $A3D7: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3DA:;
    /* $A3DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3D6;
    }
label_A3DC:;
    /* $A3DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A3DE:;
    /* $A3DE: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3E1:;
    /* $A3E1: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3E4:;
    /* $A3E4: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3E7:;
    /* $A3E7: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3EA:;
    /* $A3EA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_A3EC:;
    /* $A3EC: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3EF:;
    /* $A3EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x76; FLAG_NZ(g_cpu.A);
label_A3F1:;
    /* $A3F1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03F3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA3F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A3F4:;
    /* $A3F4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_A3F6:;
    /* $A3F6: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3F9:;
    /* $A3F9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A3FA:;
    /* $A3FA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FD:;
    /* $A3FD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A3FF:;
    /* $A3FF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A419; }
label_A401:;
    /* $A401: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A404:;
    /* $A404: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A406:;
    /* $A406: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A419; }
label_A408:;
    /* $A408: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A40A:;
    /* $A40A: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A40C:;
    /* $A40C: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_A40E:;
    /* $A40E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0410); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA41A, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA40E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A411:;
    /* $A411: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A413:;
    /* $A413: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A416:;
    /* $A416: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A419:;
    /* $A419: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A2EC_b14(void) { /* main_hari_harry */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2EC_b14");
#endif
    func_A2EC_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3B0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3B0_b14");
#endif
    func_A2EC_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2FE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2FE_b14");
#endif
    func_A2EC_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A318_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A318_b14");
#endif
    func_A2EC_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A321_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A321_b14");
#endif
    func_A2EC_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A33D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A33D_b14");
#endif
    func_A2EC_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A354_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A354_b14");
#endif
    func_A2EC_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A36A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A36A_b14");
#endif
    func_A2EC_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A36B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A36B_b14");
#endif
    func_A2EC_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A388_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A388_b14");
#endif
    func_A2EC_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A389_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A389_b14");
#endif
    func_A2EC_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3AB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3AB_b14");
#endif
    func_A2EC_b14_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3BA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3BA_b14");
#endif
    func_A2EC_b14_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3D6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3D6_b14");
#endif
    func_A2EC_b14_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3D7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3D7_b14");
#endif
    func_A2EC_b14_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3FA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3FA_b14");
#endif
    func_A2EC_b14_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2F8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2F8_b14");
#endif
    func_A2EC_b14_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2FB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2FB_b14");
#endif
    func_A2EC_b14_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A7CB_b14_body(int _entry) { /* main_penpen_maker */
    switch (_entry) {
        case 1: goto label_A7D4;
        case 2: goto label_A7EB;
        case 3: goto label_A816;
        case 4: goto label_A811;
    }
label_A7CB:; /* main_penpen_maker */
    /* $A7CB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7CE:;
    /* $A7CE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A7D0:;
    /* $A7D0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A7EB; }
label_A7D2:;
    /* $A7D2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_A7D4:;
    /* $A7D4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA8BD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D7:;
    /* $A7D7: 99 */ maybe_trigger_vblank(5); nes_write((0x060D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7DA:;
    /* $A7DA: 99 */ maybe_trigger_vblank(5); nes_write((0x062D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A7DD:;
    /* $A7DD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A7DE:;
    /* $A7DE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A7D4;
    }
label_A7E0:;
    /* $A7E0: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_A7E2:;
    /* $A7E2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E5:;
    /* $A7E5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07E7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA82E, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7E8:;
    /* $A7E8: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7EB:;
    /* $A7EB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7EE:;
    /* $A7EE: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A7EF:;
    /* $A7EF: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A7F0:;
    /* $A7F0: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7F2:;
    /* $A7F2: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7F5:;
    /* $A7F5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A7F7:;
    /* $A7F7: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7FA:;
    /* $A7FA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7FD:;
    /* $A7FD: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A7FE:;
    /* $A7FE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0800); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7FE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A801:;
    /* $A801: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A802:;
    /* $A802: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A805:;
    /* $A805: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A806:;
    /* $A806: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A809:;
    /* $A809: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A80C:;
    /* $A80C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A81A; }
label_A80E:;
    /* $A80E: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A811:;
    /* $A811: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A814:;
    /* $A814: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_A816:;
    /* $A816: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A819:;
    /* $A819: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A81A:;
    /* $A81A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_A81C:;
    /* $A81C: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A81F:;
    /* $A81F: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A822:;
    /* $A822: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A82D; }
label_A824:;
    /* $A824: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0826); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA8EC, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA824, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A827:;
    /* $A827: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0829); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA82E, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA827, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A82A:;
    /* $A82A: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A82D:;
    /* $A82D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A7CB_b14(void) { /* main_penpen_maker */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7CB_b14");
#endif
    func_A7CB_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A7D4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7D4_b14");
#endif
    func_A7CB_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A7EB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7EB_b14");
#endif
    func_A7CB_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A816_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A816_b14");
#endif
    func_A7CB_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A811_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A811_b14");
#endif
    func_A7CB_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEC3_b14_body(int _entry) { /* main_returning_monking */
    switch (_entry) {
        case 1: goto label_AF70;
        case 2: goto label_AF9A;
        case 3: goto label_AEDF;
        case 4: goto label_AEEF;
        case 5: goto label_AF16;
        case 6: goto label_AF19;
        case 7: goto label_AF1A;
        case 8: goto label_AF30;
        case 9: goto label_AF3F;
        case 10: goto label_AF5C;
        case 11: goto label_AF6B;
        case 12: goto label_AF9B;
        case 13: goto label_AFA0;
    }
label_AEC3:; /* main_returning_monking */
    /* $AEC3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEC6:;
    /* $AEC6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AEC8:;
    /* $AEC8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AEDF; }
label_AECA:;
    /* $AECA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AECD:;
    /* $AECD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_AECF:;
    /* $AECF: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AED2:;
    /* $AED2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_AED4:;
    /* $AED4: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AED7:;
    /* $AED7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_AED9:;
    /* $AED9: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AEDC:;
    /* $AEDC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0EDE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAEDC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AEDF:;
    /* $AEDF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEE2:;
    /* $AEE2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AEE4:;
    /* $AEE4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_AEE6:;
    /* $AEE6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AF3F; }
label_AEE8:;
    /* $AEE8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_AEEA:;
    /* $AEEA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AEEF; }
label_AEEC:;
    /* $AEEC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAFA5, 14); return;
label_AEEF:;
    /* $AEEF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEF2:;
    /* $AEF2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AF16; }
label_AEF4:;
    /* $AEF4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEF7:;
    /* $AEF7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x44; g_cpu.C=(g_cpu.A>=0x44)?1:0; FLAG_NZ(r&0xFF); }
label_AEF9:;
    /* $AEF9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AF1A; }
label_AEFB:;
    /* $AEFB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEFE:;
    /* $AEFE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF1A; }
label_AF00:;
    /* $AF00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_AF02:;
    /* $AF02: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F04); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF02, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF05:;
    /* $AF05: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AF07:;
    /* $AF07: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F09); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF0A:;
    /* $AF0A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_AF0C:;
    /* $AF0C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_AF0E:;
    /* $AF0E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF19; }
label_AF10:;
    /* $AF10: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_AF12:;
    /* $AF12: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F14); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF12, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF15:;
    /* $AF15: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF16:;
    /* $AF16: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF19:;
    /* $AF19: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF1A:;
    /* $AF1A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF1D:;
    /* $AF1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x45; g_cpu.C=(g_cpu.A>=0x45)?1:0; FLAG_NZ(r&0xFF); }
label_AF1F:;
    /* $AF1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF30; }
label_AF21:;
    /* $AF21: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F23); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF21, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF24:;
    /* $AF24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x28; g_cpu.C=(g_cpu.A>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_AF26:;
    /* $AF26: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF19;
    }
label_AF28:;
    /* $AF28: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_AF2A:;
    /* $AF2A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F2C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF2A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF2D:;
    /* $AF2D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF30:;
    /* $AF30: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AF32:;
    /* $AF32: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F34); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF32, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF35:;
    /* $AF35: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AF19;
    }
label_AF37:;
    /* $AF37: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_AF39:;
    /* $AF39: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F3B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF39, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF3C:;
    /* $AF3C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF3F:;
    /* $AF3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF42:;
    /* $AF42: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF5C; }
label_AF44:;
    /* $AF44: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF47:;
    /* $AF47: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AF49:;
    /* $AF49: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF5C; }
label_AF4B:;
    /* $AF4B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF4E:;
    /* $AF4E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_AF50:;
    /* $AF50: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF53:;
    /* $AF53: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_AF55:;
    /* $AF55: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF58:;
    /* $AF58: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF5B:;
    /* $AF5B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF5C:;
    /* $AF5C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF5F:;
    /* $AF5F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_AF61:;
    /* $AF61: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF6B; }
label_AF63:;
    /* $AF63: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x16; FLAG_NZ(g_cpu.Y);
label_AF65:;
    /* $AF65: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F67); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF65, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF68:;
    /* $AF68: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAF70, 14); return;
label_AF6B:;
    /* $AF6B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x17; FLAG_NZ(g_cpu.Y);
label_AF6D:;
    /* $AF6D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F6F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF6D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF70:;
    /* $AF70: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF73:;
    /* $AF73: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x43; g_cpu.C=(g_cpu.A>=0x43)?1:0; FLAG_NZ(r&0xFF); }
label_AF75:;
    /* $AF75: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AF9B; }
label_AF77:;
    /* $AF77: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AF79:;
    /* $AF79: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F7B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF79, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF7C:;
    /* $AF7C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AF9A; }
label_AF7E:;
    /* $AF7E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBB; FLAG_NZ(g_cpu.A);
label_AF80:;
    /* $AF80: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF83:;
    /* $AF83: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_AF85:;
    /* $AF85: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF88:;
    /* $AF88: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x43; FLAG_NZ(g_cpu.A);
label_AF8A:;
    /* $AF8A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F8C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF8A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF8D:;
    /* $AF8D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AF8F:;
    /* $AF8F: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF92:;
    /* $AF92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AF94:;
    /* $AF94: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF97:;
    /* $AF97: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F99); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAF97, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF9A:;
    /* $AF9A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF9B:;
    /* $AF9B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF9E:;
    /* $AF9E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AFA0; }
label_AFA0:;
    /* $AFA0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x46; FLAG_NZ(g_cpu.A);
label_AFA2:;
    /* $AFA2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
}

void func_AEC3_b14(void) { /* main_returning_monking */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEC3_b14");
#endif
    func_AEC3_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF70_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF70_b14");
#endif
    func_AEC3_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF9A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF9A_b14");
#endif
    func_AEC3_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEDF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEDF_b14");
#endif
    func_AEC3_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEEF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEEF_b14");
#endif
    func_AEC3_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF16_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF16_b14");
#endif
    func_AEC3_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF19_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF19_b14");
#endif
    func_AEC3_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF1A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF1A_b14");
#endif
    func_AEC3_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF30_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF30_b14");
#endif
    func_AEC3_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF3F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF3F_b14");
#endif
    func_AEC3_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF5C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF5C_b14");
#endif
    func_AEC3_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF6B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF6B_b14");
#endif
    func_AEC3_b14_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF9B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF9B_b14");
#endif
    func_AEC3_b14_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFA0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFA0_b14");
#endif
    func_AEC3_b14_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD09_b14_body(int _entry) { /* main_have_su_bee */
    switch (_entry) {
        case 1: goto label_AD65;
        case 2: goto label_ADC2;
        case 3: goto label_AD99;
        case 4: goto label_AD4B;
        case 5: goto label_AD62;
        case 6: goto label_AD91;
        case 7: goto label_AD9A;
        case 8: goto label_ADB2;
        case 9: goto label_ADBF;
        case 10: goto label_AD0C;
    }
label_AD09:; /* main_have_su_bee */
    /* $AD09: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD0C:;
    /* $AD0C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AD0E:;
    /* $AD0E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD4B; }
label_AD10:;
    /* $AD10: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D12); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD10, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD13:;
    /* $AD13: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x28; g_cpu.C=(g_cpu.A>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_AD15:;
    /* $AD15: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AD4A; }
label_AD17:;
    /* $AD17: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD1A:;
    /* $AD1A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_AD1C:;
    /* $AD1C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD1F:;
    /* $AD1F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_AD21:;
    /* $AD21: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD24:;
    /* $AD24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD27:;
    /* $AD27: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x04; FLAG_NZ(g_cpu.A);
label_AD29:;
    /* $AD29: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD2C:;
    /* $AD2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD2F:;
    /* $AD2F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_AD31:;
    /* $AD31: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AD32:;
    /* $AD32: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD35:;
    /* $AD35: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD36:;
    /* $AD36: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xADD5 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD39:;
    /* $AD39: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AD3A:;
    /* $AD3A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD3D:;
    /* $AD3D: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xADD6 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD40:;
    /* $AD40: 9D */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD43:;
    /* $AD43: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AD44:;
    /* $AD44: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD47:;
    /* $AD47: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D49); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD47, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD4A:;
    /* $AD4A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD4B:;
    /* $AD4B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD4E:;
    /* $AD4E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_AD50:;
    /* $AD50: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD9A; }
label_AD52:;
    /* $AD52: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D54); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD52, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD55:;
    /* $AD55: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD58:;
    /* $AD58: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_AD5A:;
    /* $AD5A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD62; }
label_AD5C:;
    /* $AD5C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D5E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD5C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD5F:;
    /* $AD5F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAD65, 14); return;
label_AD62:;
    /* $AD62: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D64); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD62, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD65:;
    /* $AD65: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD68:;
    /* $AD68: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD99; }
label_AD6A:;
    /* $AD6A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D6C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD6A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD6D:;
    /* $AD6D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_AD6F:;
    /* $AD6F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AD99; }
label_AD71:;
    /* $AD71: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD74:;
    /* $AD74: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD77:;
    /* $AD77: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_AD79:;
    /* $AD79: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD7C:;
    /* $AD7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AD7E:;
    /* $AD7E: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD81:;
    /* $AD81: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD84:;
    /* $AD84: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_AD86:;
    /* $AD86: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AD91; }
label_AD88:;
    /* $AD88: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD8B:;
    /* $AD8B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_AD8D:;
    /* $AD8D: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD90:;
    /* $AD90: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD91:;
    /* $AD91: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD94:;
    /* $AD94: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_AD96:;
    /* $AD96: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD99:;
    /* $AD99: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD9A:;
    /* $AD9A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD9D:;
    /* $AD9D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ADB2; }
label_AD9F:;
    /* $AD9F: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADA2:;
    /* $ADA2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADA5:;
    /* $ADA5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_ADA7:;
    /* $ADA7: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADAA:;
    /* $ADAA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_ADAC:;
    /* $ADAC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0DAE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADAC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADAF:;
    /* $ADAF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xADD9, 14); return;
label_ADB2:;
    /* $ADB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADB5:;
    /* $ADB5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_ADB7:;
    /* $ADB7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ADBF; }
label_ADB9:;
    /* $ADB9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0DBB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADB9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADBC:;
    /* $ADBC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xADC2, 14); return;
label_ADBF:;
    /* $ADBF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0DC1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADBF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADC2:;
    /* $ADC2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADC5:;
    /* $ADC5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AD99;
    }
label_ADC7:;
    /* $ADC7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_ADC9:;
    /* $ADC9: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADCC:;
    /* $ADCC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADCF:;
    /* $ADCF: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_ADD1:;
    /* $ADD1: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADD4:;
    /* $ADD4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD09_b14(void) { /* main_have_su_bee */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD09_b14");
#endif
    func_AD09_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD65_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD65_b14");
#endif
    func_AD09_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADC2_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADC2_b14");
#endif
    func_AD09_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD99_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD99_b14");
#endif
    func_AD09_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD4B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD4B_b14");
#endif
    func_AD09_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD62_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD62_b14");
#endif
    func_AD09_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD91_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD91_b14");
#endif
    func_AD09_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD9A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD9A_b14");
#endif
    func_AD09_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADB2_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADB2_b14");
#endif
    func_AD09_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADBF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADBF_b14");
#endif
    func_AD09_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD0C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD0C_b14");
#endif
    func_AD09_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE28_b14(void) { /* main_beehive */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE28_b14");
#endif
label_AE28:; /* main_beehive */
    /* $AE28: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_AE2A:;
    /* $AE2A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E2C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F606(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE2A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE2D:;
    /* $AE2D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0E27), 14); return; }
label_AE2F:;
    /* $AE2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_AE31:;
    /* $AE31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E33); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE34:;
    /* $AE34: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE36:;
    /* $AE36: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE39:;
    /* $AE39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_AE3B:;
    /* $AE3B: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE3E:;
    /* $AE3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE40:;
    /* $AE40: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AE42:;
    /* $AE42: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E44); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE45:;
    /* $AE45: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AEB3; }
label_AE47:;
    /* $AE47: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_AE49:;
    /* $AE49: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE4C:;
    /* $AE4C: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE4F:;
    /* $AE4F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AE51:;
    /* $AE51: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE52:;
    /* $AE52: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE53:;
    /* $AE53: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE56:;
    /* $AE56: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE57:;
    /* $AE57: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAEB4 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AE5A:;
    /* $AE5A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AE5B:;
    /* $AE5B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE5E:;
    /* $AE5E: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAEB5 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AE61:;
    /* $AE61: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AE63:;
    /* $AE63: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE66:;
    /* $AE66: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AE67:;
    /* $AE67: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE6A:;
    /* $AE6A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x01); FLAG_NZ(g_cpu.Y);
label_AE6C:;
    /* $AE6C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE6F:;
    /* $AE6F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE70:;
    /* $AE70: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAEBE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AE73:;
    /* $AE73: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AE75:;
    /* $AE75: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE78:;
    /* $AE78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x41; FLAG_NZ(g_cpu.A);
label_AE7A:;
    /* $AE7A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E7C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE7A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE7D:;
    /* $AE7D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE7F:;
    /* $AE7F: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE82:;
    /* $AE82: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE85:;
    /* $AE85: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_AE87:;
    /* $AE87: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE8A:;
    /* $AE8A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AE8C:;
    /* $AE8C: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE8F:;
    /* $AE8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_AE91:;
    /* $AE91: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE94:;
    /* $AE94: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_AE96:;
    /* $AE96: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE99:;
    /* $AE99: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE9C:;
    /* $AE9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_AE9E:;
    /* $AE9E: 99 */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AEA1:;
    /* $AEA1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x33; FLAG_NZ(g_cpu.A);
label_AEA3:;
    /* $AEA3: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AEA6:;
    /* $AEA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AEA8:;
    /* $AEA8: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AEAB:;
    /* $AEAB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEAD:;
    /* $AEAD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AEAF:;
    /* $AEAF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_AEB1:;
    /* $AEB1: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE42;
    }
label_AEB3:;
    /* $AEB3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB5B_b14_body(int _entry) { /* main_bolton_and_nutton */
    switch (_entry) {
        case 1: goto label_ABE9;
        case 2: goto label_AB65;
        case 3: goto label_ABC9;
        case 4: goto label_ABCE;
        case 5: goto label_ABC0;
        case 6: goto label_AB60;
    }
label_AB5B:; /* main_bolton_and_nutton */
    /* $AB5B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB5E:;
    /* $AB5E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2F; g_cpu.C=(g_cpu.A>=0x2F)?1:0; FLAG_NZ(r&0xFF); }
label_AB60:;
    /* $AB60: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AB65; }
label_AB62:;
    /* $AB62: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xABEA, 14); return;
label_AB65:;
    /* $AB65: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB68:;
    /* $AB68: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AB6A:;
    /* $AB6A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ABC9; }
label_AB6C:;
    /* $AB6C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B6E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xAC27, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB6C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB6F:;
    /* $AB6F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_ABE9; }
label_AB71:;
    /* $AB71: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB74:;
    /* $AB74: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFB; FLAG_NZ(g_cpu.A);
label_AB76:;
    /* $AB76: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB79:;
    /* $AB79: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB7C:;
    /* $AB7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x66; FLAG_NZ(g_cpu.A);
label_AB7E:;
    /* $AB7E: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB81:;
    /* $AB81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB83:;
    /* $AB83: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB86:;
    /* $AB86: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2E; FLAG_NZ(g_cpu.A);
label_AB88:;
    /* $AB88: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B8A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB88, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB8B:;
    /* $AB8B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x31; FLAG_NZ(g_cpu.A);
label_AB8D:;
    /* $AB8D: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AB90:;
    /* $AB90: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB93:;
    /* $AB93: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AB96:;
    /* $AB96: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_AB98:;
    /* $AB98: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AB99:;
    /* $AB99: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_AB9B:;
    /* $AB9B: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AB9E:;
    /* $AB9E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_ABA0:;
    /* $ABA0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_ABA2:;
    /* $ABA2: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABA5:;
    /* $ABA5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ABA7:;
    /* $ABA7: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABAA:;
    /* $ABAA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_ABAC:;
    /* $ABAC: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABAF:;
    /* $ABAF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABB2:;
    /* $ABB2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ABB3:;
    /* $ABB3: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABB5:;
    /* $ABB5: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABB8:;
    /* $ABB8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABBB:;
    /* $ABBB: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABBD:;
    /* $ABBD: 99 */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABC0:;
    /* $ABC0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_ABC1:;
    /* $ABC1: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABC4:;
    /* $ABC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ABC6:;
    /* $ABC6: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ABC9:;
    /* $ABC9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABCC:;
    /* $ABCC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFB; FLAG_NZ(g_cpu.A);
label_ABCE:;
    /* $ABCE: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABD1:;
    /* $ABD1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABD4:;
    /* $ABD4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ABE9; }
label_ABD6:;
    /* $ABD6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ABD8:;
    /* $ABD8: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABDB:;
    /* $ABDB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x92); FLAG_NZ(g_cpu.A);
label_ABDD:;
    /* $ABDD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_ABDF:;
    /* $ABDF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ABE9; }
label_ABE1:;
    /* $ABE1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABE4:;
    /* $ABE4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_ABE6:;
    /* $ABE6: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABE9:;
    /* $ABE9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB5B_b14(void) { /* main_bolton_and_nutton */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB5B_b14");
#endif
    func_AB5B_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABE9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABE9_b14");
#endif
    func_AB5B_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB65_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB65_b14");
#endif
    func_AB5B_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABC9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABC9_b14");
#endif
    func_AB5B_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABCE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABCE_b14");
#endif
    func_AB5B_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABC0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABC0_b14");
#endif
    func_AB5B_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB60_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB60_b14");
#endif
    func_AB5B_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC82_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_ACB8;
        case 2: goto label_ACBE;
        case 3: goto label_ACCB;
        case 4: goto label_ACE0;
        case 5: goto label_AD08;
        case 6: goto label_AD05;
    }
label_AC82:;
    /* $AC82: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC85:;
    /* $AC85: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AC87:;
    /* $AC87: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ACBE; }
label_AC89:;
    /* $AC89: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC8C:;
    /* $AC8C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C8E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC8C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC8F:;
    /* $AC8F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC92:;
    /* $AC92: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AC93:;
    /* $AC93: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0360 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC96:;
    /* $AC96: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC99:;
    /* $AC99: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0380 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC9C:;
    /* $AC9C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_ACB8; }
label_AC9E:;
    /* $AC9E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACA1:;
    /* $ACA1: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACA4:;
    /* $ACA4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACA7:;
    /* $ACA7: 9D */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACAA:;
    /* $ACAA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACAD:;
    /* $ACAD: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_ACB0:;
    /* $ACB0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_ACB2:;
    /* $ACB2: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ACB5:;
    /* $ACB5: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACB8:;
    /* $ACB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_ACBA:;
    /* $ACBA: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACBD:;
    /* $ACBD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACBE:;
    /* $ACBE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACC1:;
    /* $ACC1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_ACCB; }
label_ACC3:;
    /* $ACC3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_ACC5:;
    /* $ACC5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CC7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xACC5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ACC8:;
    /* $ACC8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACCB:;
    /* $ACCB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_ACCD:;
    /* $ACCD: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_ACCF:;
    /* $ACCF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACD2:;
    /* $ACD2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_ACE0; }
label_ACD4:;
    /* $ACD4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACD7:;
    /* $ACD7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AD08; }
label_ACD9:;
    /* $ACD9: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACDC:;
    /* $ACDC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0360 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACDF:;
    /* $ACDF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACE0:;
    /* $ACE0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACE3:;
    /* $ACE3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AD08; }
label_ACE5:;
    /* $ACE5: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACE8:;
    /* $ACE8: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_ACEB:;
    /* $ACEB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACEE:;
    /* $ACEE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_AD08; }
label_ACF0:;
    /* $ACF0: 99 */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ACF3:;
    /* $ACF3: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ACF6:;
    /* $ACF6: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACF9:;
    /* $ACF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2F; FLAG_NZ(g_cpu.A);
label_ACFB:;
    /* $ACFB: 99 */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ACFE:;
    /* $ACFE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_AD00:;
    /* $AD00: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AD03:;
    /* $AD03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AD05:;
    /* $AD05: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AD08:;
    /* $AD08: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AC82_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC82_b14");
#endif
    func_AC82_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ACB8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACB8_b14");
#endif
    func_AC82_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ACBE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACBE_b14");
#endif
    func_AC82_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ACCB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACCB_b14");
#endif
    func_AC82_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ACE0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACE0_b14");
#endif
    func_AC82_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD08_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD08_b14");
#endif
    func_AC82_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD05_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD05_b14");
#endif
    func_AC82_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFD7_b14_body(int _entry) { /* main_wanaan */
    switch (_entry) {
        case 1: goto label_B007;
        case 2: goto label_B012;
        case 3: goto label_B001;
        case 4: goto label_B00C;
        case 5: goto label_B071;
    }
label_AFD7:; /* main_wanaan */
    /* $AFD7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFDA:;
    /* $AFDA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AFDC:;
    /* $AFDC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B00D; }
label_AFDE:;
    /* $AFDE: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFE1:;
    /* $AFE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_AFE3:;
    /* $AFE3: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFE6:;
    /* $AFE6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FE8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFE6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFE9:;
    /* $AFE9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x18; g_cpu.C=(g_cpu.A>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_AFEB:;
    /* $AFEB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_B00C; }
label_AFED:;
    /* $AFED: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FEF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFED, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFF0:;
    /* $AFF0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x18; g_cpu.C=(g_cpu.A>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_AFF2:;
    /* $AFF2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_B00C; }
label_AFF4:;
    /* $AFF4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFF7:;
    /* $AFF7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_AFF9:;
    /* $AFF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFFC:;
    /* $AFFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_AFFE:;
    /* $AFFE: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B001:;
    /* $B001: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B004:;
    /* $B004: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B007:;
    /* $B007: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B009:;
    /* $B009: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B00C:;
    /* $B00C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B00D:;
    /* $B00D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B010:;
    /* $B010: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_B012:;
    /* $B012: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B026; }
label_B014:;
    /* $B014: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B017:;
    /* $B017: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B00C;
    }
label_B019:;
    /* $B019: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B01C:;
    /* $B01C: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x04; FLAG_NZ(g_cpu.A);
label_B01E:;
    /* $B01E: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B021:;
    /* $B021: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_B023:;
    /* $B023: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B026:;
    /* $B026: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B029:;
    /* $B029: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B02B:;
    /* $B02B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B04C; }
label_B02D:;
    /* $B02D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B02F:;
    /* $B02F: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B032:;
    /* $B032: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B035:;
    /* $B035: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B038:;
    /* $B038: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B03B:;
    /* $B03B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B03E:;
    /* $B03E: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B041:;
    /* $B041: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B00C;
    }
label_B043:;
    /* $B043: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B046:;
    /* $B046: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B048:;
    /* $B048: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x104A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB048, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B04B:;
    /* $B04B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B04C:;
    /* $B04C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B04E:;
    /* $B04E: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B051:;
    /* $B051: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B053:;
    /* $B053: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B056:;
    /* $B056: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1058); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB056, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B059:;
    /* $B059: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B05C:;
    /* $B05C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B00C;
    }
label_B05E:;
    /* $B05E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B060:;
    /* $B060: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B063:;
    /* $B063: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B066:;
    /* $B066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B069:;
    /* $B069: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B06C:;
    /* $B06C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B06F:;
    /* $B06F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x94; FLAG_NZ(g_cpu.A);
label_B071:;
    /* $B071: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B074:;
    /* $B074: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B076:;
    /* $B076: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B079:;
    /* $B079: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_B07B:;
    /* $B07B: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B07E:;
    /* $B07E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFD7_b14(void) { /* main_wanaan */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFD7_b14");
#endif
    func_AFD7_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B007_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B007_b14");
#endif
    func_AFD7_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B012_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B012_b14");
#endif
    func_AFD7_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B001_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B001_b14");
#endif
    func_AFD7_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B00C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B00C_b14");
#endif
    func_AFD7_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B071_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B071_b14");
#endif
    func_AFD7_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B2FE_b14_body(int _entry) { /* main_needle_press */
    switch (_entry) {
        case 1: goto label_B34B;
        case 2: goto label_B308;
        case 3: goto label_B31F;
        case 4: goto label_B338;
        case 5: goto label_B341;
        case 6: goto label_B346;
        case 7: goto label_B34C;
    }
label_B2FE:; /* main_needle_press */
    /* $B2FE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B301:;
    /* $B301: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B308; }
label_B303:;
    /* $B303: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B306:;
    /* $B306: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B346; }
label_B308:;
    /* $B308: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B30B:;
    /* $B30B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_B30D:;
    /* $B30D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B31F; }
label_B30F:;
    /* $B30F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1311); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB30F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B312:;
    /* $B312: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x61; g_cpu.C=(g_cpu.A>=0x61)?1:0; FLAG_NZ(r&0xFF); }
label_B314:;
    /* $B314: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B346; }
label_B316:;
    /* $B316: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B319:;
    /* $B319: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFB; FLAG_NZ(g_cpu.A);
label_B31B:;
    /* $B31B: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B31E:;
    /* $B31E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B31F:;
    /* $B31F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B322:;
    /* $B322: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B34B; }
label_B324:;
    /* $B324: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B327:;
    /* $B327: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B338; }
label_B329:;
    /* $B329: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B32B:;
    /* $B32B: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B32E:;
    /* $B32E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B331:;
    /* $B331: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_B333:;
    /* $B333: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B336:;
    /* $B336: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B341; }
label_B338:;
    /* $B338: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B33A:;
    /* $B33A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B34C; }
label_B33C:;
    /* $B33C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAE; FLAG_NZ(g_cpu.A);
label_B33E:;
    /* $B33E: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B341:;
    /* $B341: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_B343:;
    /* $B343: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B346:;
    /* $B346: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B348:;
    /* $B348: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B34B:;
    /* $B34B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B34C:;
    /* $B34C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA4; FLAG_NZ(g_cpu.A);
label_B34E:;
    /* $B34E: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B351:;
    /* $B351: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B2FE_b14(void) { /* main_needle_press */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2FE_b14");
#endif
    func_B2FE_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B34B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B34B_b14");
#endif
    func_B2FE_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B308_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B308_b14");
#endif
    func_B2FE_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B31F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B31F_b14");
#endif
    func_B2FE_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B338_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B338_b14");
#endif
    func_B2FE_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B341_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B341_b14");
#endif
    func_B2FE_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B346_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B346_b14");
#endif
    func_B2FE_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B34C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B34C_b14");
#endif
    func_B2FE_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4C4_b14_body(int _entry) { /* main_walking_bomb */
    switch (_entry) {
        case 1: goto label_B500;
        case 2: goto label_B4EC;
        case 3: goto label_B4FB;
        case 4: goto label_B526;
        case 5: goto label_B52E;
        case 6: goto label_B53A;
        case 7: goto label_B53F;
        case 8: goto label_B504;
    }
label_B4C4:; /* main_walking_bomb */
    /* $B4C4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1A; FLAG_NZ(g_cpu.Y);
label_B4C6:;
    /* $B4C6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4C6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4C9:;
    /* $B4C9: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B4CB:;
    /* $B4CB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14CD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FB7B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4CE:;
    /* $B4CE: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B4EC; }
label_B4D0:;
    /* $B4D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B4D2:;
    /* $B4D2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14D4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4D2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4D5:;
    /* $B4D5: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x10); FLAG_NZ(g_cpu.Y);
label_B4D7:;
    /* $B4D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4D9:;
    /* $B4D9: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B4DC:;
    /* $B4DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_B4DE:;
    /* $B4DE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14E0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4E1:;
    /* $B4E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B4E3:;
    /* $B4E3: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4E6:;
    /* $B4E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x39; FLAG_NZ(g_cpu.A);
label_B4E8:;
    /* $B4E8: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B4EB:;
    /* $B4EB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B4EC:;
    /* $B4EC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B4EF:;
    /* $B4EF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B4F1:;
    /* $B4F1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B4FB; }
label_B4F3:;
    /* $B4F3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1C; FLAG_NZ(g_cpu.Y);
label_B4F5:;
    /* $B4F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B4F8:;
    /* $B4F8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB500, 14); return;
label_B4FB:;
    /* $B4FB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1D; FLAG_NZ(g_cpu.Y);
label_B4FD:;
    /* $B4FD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14FF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB4FD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B500:;
    /* $B500: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_B502:;
    /* $B502: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B504:;
    /* $B504: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B53F; }
label_B506:;
    /* $B506: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_B508:;
    /* $B508: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_B50A:;
    /* $B50A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B52E; }
label_B50C:;
    /* $B50C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x52; FLAG_NZ(g_cpu.A);
label_B50E:;
    /* $B50E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1510); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB50E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B511:;
    /* $B511: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B514:;
    /* $B514: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B517:;
    /* $B517: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B519:;
    /* $B519: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B526; }
label_B51B:;
    /* $B51B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x29; FLAG_NZ(g_cpu.A);
label_B51D:;
    /* $B51D: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B520:;
    /* $B520: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B522:;
    /* $B522: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B525:;
    /* $B525: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B526:;
    /* $B526: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B529:;
    /* $B529: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_B52B:;
    /* $B52B: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B52E:;
    /* $B52E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B531:;
    /* $B531: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x51; g_cpu.C=(g_cpu.A>=0x51)?1:0; FLAG_NZ(r&0xFF); }
label_B533:;
    /* $B533: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B53A; }
label_B535:;
    /* $B535: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x51; FLAG_NZ(g_cpu.A);
label_B537:;
    /* $B537: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1539); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB537, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B53A:;
    /* $B53A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B53C:;
    /* $B53C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B53F:;
    /* $B53F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B4C4_b14(void) { /* main_walking_bomb */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4C4_b14");
#endif
    func_B4C4_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B500_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B500_b14");
#endif
    func_B4C4_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4EC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4EC_b14");
#endif
    func_B4C4_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4FB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4FB_b14");
#endif
    func_B4C4_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B526_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B526_b14");
#endif
    func_B4C4_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B52E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B52E_b14");
#endif
    func_B4C4_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B53A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B53A_b14");
#endif
    func_B4C4_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B53F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B53F_b14");
#endif
    func_B4C4_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B504_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B504_b14");
#endif
    func_B4C4_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B352_b14_body(int _entry) { /* main_elecn */
    switch (_entry) {
        case 1: goto label_B38E;
        case 2: goto label_B355;
        case 3: goto label_B425;
    }
label_B352:; /* main_elecn */
    /* $B352: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B355:;
    /* $B355: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B357:;
    /* $B357: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B389; }
label_B359:;
    /* $B359: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B35C:;
    /* $B35C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_B35E:;
    /* $B35E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B372; }
label_B360:;
    /* $B360: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1362); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB360, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B363:;
    /* $B363: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x61; g_cpu.C=(g_cpu.A>=0x61)?1:0; FLAG_NZ(r&0xFF); }
label_B365:;
    /* $B365: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x134B), 14); return; }
label_B367:;
    /* $B367: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B36A:;
    /* $B36A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFB; FLAG_NZ(g_cpu.A);
label_B36C:;
    /* $B36C: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B36F:;
    /* $B36F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; } return;
label_B372:;
    /* $B372: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1374); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB372, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B375:;
    /* $B375: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B378:;
    /* $B378: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_B37A:;
    /* $B37A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x134B), 14); return; }
label_B37C:;
    /* $B37C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_B37E:;
    /* $B37E: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B381:;
    /* $B381: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B383:;
    /* $B383: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B386:;
    /* $B386: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B389:;
    /* $B389: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B38C:;
    /* $B38C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x56; g_cpu.C=(g_cpu.A>=0x56)?1:0; FLAG_NZ(r&0xFF); }
label_B38E:;
    /* $B38E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B39A; }
label_B390:;
    /* $B390: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B393:;
    /* $B393: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x134B), 14); return; }
label_B395:;
    /* $B395: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x55; FLAG_NZ(g_cpu.A);
label_B397:;
    /* $B397: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1399); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB397, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B39A:;
    /* $B39A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B39D:;
    /* $B39D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3A0:;
    /* $B3A0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3AA; }
label_B3A2:;
    /* $B3A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_B3A4:;
    /* $B3A4: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3A7:;
    /* $B3A7: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B3AA:;
    /* $B3AA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3AD:;
    /* $B3AD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B3AF:;
    /* $B3AF: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3B2:;
    /* $B3B2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B3B3:;
    /* $B3B3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3B6:;
    /* $B3B6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B3B7:;
    /* $B3B7: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB44C + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B3BA:;
    /* $B3BA: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3BD:;
    /* $B3BD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3C0:;
    /* $B3C0: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB450 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B3C3:;
    /* $B3C3: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B3C6:;
    /* $B3C6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3C9:;
    /* $B3C9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B3CB:;
    /* $B3CB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3DA; }
label_B3CD:;
    /* $B3CD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3D0:;
    /* $B3D0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3D7; }
label_B3D2:;
    /* $B3D2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13D4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3D2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3D5:;
    /* $B3D5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B3E7; }
label_B3D7:;
    /* $B3D7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; } return;
label_B3DA:;
    /* $B3DA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B3DD:;
    /* $B3DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B3E4; }
label_B3DF:;
    /* $B3DF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13E1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3E2:;
    /* $B3E2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B3E7; }
label_B3E4:;
    /* $B3E4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; } return;
label_B3E7:;
    /* $B3E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x26; FLAG_NZ(g_cpu.A);
label_B3E9:;
    /* $B3E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3EC:;
    /* $B3EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x56; FLAG_NZ(g_cpu.A);
label_B3EE:;
    /* $B3EE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13F0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3EE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3F1:;
    /* $B3F1: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_B3F3:;
    /* $B3F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_B3F5:;
    /* $B3F5: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_B3F7:;
    /* $B3F7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13F9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB3F7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B3FA:;
    /* $B3FA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_B446; }
label_B3FC:;
    /* $B3FC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_B3FE:;
    /* $B3FE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB454 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B401:;
    /* $B401: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B404:;
    /* $B404: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB45C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B407:;
    /* $B407: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B40A:;
    /* $B40A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB464 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B40D:;
    /* $B40D: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B410:;
    /* $B410: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB46C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B413:;
    /* $B413: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B416:;
    /* $B416: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB474 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B419:;
    /* $B419: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B41C:;
    /* $B41C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_B41E:;
    /* $B41E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x57; FLAG_NZ(g_cpu.A);
label_B420:;
    /* $B420: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1422); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB420, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B423:;
    /* $B423: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B425:;
    /* $B425: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B428:;
    /* $B428: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_B42A:;
    /* $B42A: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B42D:;
    /* $B42D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B430:;
    /* $B430: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B433:;
    /* $B433: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B436:;
    /* $B436: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B439:;
    /* $B439: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B43C:;
    /* $B43C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B43D:;
    /* $B43D: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x0C; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B43F:;
    /* $B43F: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B442:;
    /* $B442: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B444:;
    /* $B444: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B3F7;
    }
label_B446:;
    /* $B446: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_B448:;
    /* $B448: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B44B:;
    /* $B44B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B352_b14(void) { /* main_elecn */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B352_b14");
#endif
    func_B352_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B38E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B38E_b14");
#endif
    func_B352_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B355_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B355_b14");
#endif
    func_B352_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B425_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B425_b14");
#endif
    func_B352_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1BD_b14_body(int _entry) { /* main_mechakkero */
    switch (_entry) {
        case 1: goto label_B1D8;
        case 2: goto label_B1D3;
        case 3: goto label_B1EE;
        case 4: goto label_B1F5;
        case 5: goto label_B1F8;
    }
label_B1BD:; /* main_mechakkero */
    /* $B1BD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C0:;
    /* $B1C0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B1C2:;
    /* $B1C2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1F8; }
label_B1C4:;
    /* $B1C4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B1C9:;
    /* $B1C9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1D3; }
label_B1CB:;
    /* $B1CB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x18; FLAG_NZ(g_cpu.Y);
label_B1CD:;
    /* $B1CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11CF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1D0:;
    /* $B1D0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB1D8, 14); return;
label_B1D3:;
    /* $B1D3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x19; FLAG_NZ(g_cpu.Y);
label_B1D5:;
    /* $B1D5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11D7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1D5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1D8:;
    /* $B1D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x18; FLAG_NZ(g_cpu.Y);
label_B1DA:;
    /* $B1DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1DD:;
    /* $B1DD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B1EE; }
label_B1DF:;
    /* $B1DF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11E1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xB224, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB1DF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1E2:;
    /* $B1E2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1E5:;
    /* $B1E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCB; FLAG_NZ(g_cpu.A);
label_B1E7:;
    /* $B1E7: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1EA:;
    /* $B1EA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2B; FLAG_NZ(g_cpu.A);
label_B1EC:;
    /* $B1EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1F5; }
label_B1EE:;
    /* $B1EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC3; FLAG_NZ(g_cpu.A);
label_B1F0:;
    /* $B1F0: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1F3:;
    /* $B1F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2A; FLAG_NZ(g_cpu.A);
label_B1F5:;
    /* $B1F5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_B1F8:;
    /* $B1F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1FB:;
    /* $B1FB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2B; g_cpu.C=(g_cpu.A>=0x2B)?1:0; FLAG_NZ(r&0xFF); }
label_B1FD:;
    /* $B1FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B20A; }
label_B1FF:;
    /* $B1FF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B202:;
    /* $B202: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B204:;
    /* $B204: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B21F; }
label_B206:;
    /* $B206: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x29; FLAG_NZ(g_cpu.A);
label_B208:;
    /* $B208: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B20C; }
label_B20A:;
    /* $B20A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x29; FLAG_NZ(g_cpu.A);
label_B20C:;
    /* $B20C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x120E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB20C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B20F:;
    /* $B20F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B212:;
    /* $B212: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B220; }
label_B214:;
    /* $B214: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_B216:;
    /* $B216: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B219:;
    /* $B219: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B21C:;
    /* $B21C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x121E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB21C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B21F:;
    /* $B21F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B220:;
    /* $B220: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B223:;
    /* $B223: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B1BD_b14(void) { /* main_mechakkero */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1BD_b14");
#endif
    func_B1BD_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1D8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1D8_b14");
#endif
    func_B1BD_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1D3_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1D3_b14");
#endif
    func_B1BD_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1EE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1EE_b14");
#endif
    func_B1BD_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1F5_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1F5_b14");
#endif
    func_B1BD_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1F8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1F8_b14");
#endif
    func_B1BD_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B23E_b14_body(int _entry) { /* main_top_man_platform */
    switch (_entry) {
        case 1: goto label_B25A;
        case 2: goto label_B265;
        case 3: goto label_B2A9;
    }
label_B23E:; /* main_top_man_platform */
    /* $B23E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B241:;
    /* $B241: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B243:;
    /* $B243: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B265; }
label_B245:;
    /* $B245: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B248:;
    /* $B248: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B24A:;
    /* $B24A: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B24D:;
    /* $B24D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B250:;
    /* $B250: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B253:;
    /* $B253: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x88; g_cpu.C=(g_cpu.A>=0x88)?1:0; FLAG_NZ(r&0xFF); }
label_B255:;
    /* $B255: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B25A; }
label_B257:;
    /* $B257: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B25A:;
    /* $B25A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B25C:;
    /* $B25C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B25F:;
    /* $B25F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B261:;
    /* $B261: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B264:;
    /* $B264: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B265:;
    /* $B265: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1267); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB265, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B268:;
    /* $B268: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x16; g_cpu.C=(g_cpu.A>=0x16)?1:0; FLAG_NZ(r&0xFF); }
label_B26A:;
    /* $B26A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B29C; }
label_B26C:;
    /* $B26C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x126E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB26C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B26F:;
    /* $B26F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_B271:;
    /* $B271: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B29C; }
label_B273:;
    /* $B273: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B276:;
    /* $B276: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B278:;
    /* $B278: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B27E; }
label_B27A:;
    /* $B27A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B27C:;
    /* $B27C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B280; }
label_B27E:;
    /* $B27E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B280:;
    /* $B280: 85 */ maybe_trigger_vblank(3); nes_write(0x36, g_cpu.A);
label_B282:;
    /* $B282: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B284:;
    /* $B284: 85 */ maybe_trigger_vblank(3); nes_write(0x37, g_cpu.A);
label_B286:;
    /* $B286: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B288:;
    /* $B288: 85 */ maybe_trigger_vblank(3); nes_write(0x38, g_cpu.A);
label_B28A:;
    /* $B28A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B28D:;
    /* $B28D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B29C; }
label_B28F:;
    /* $B28F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B291:;
    /* $B291: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B294:;
    /* $B294: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B297:;
    /* $B297: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_B299:;
    /* $B299: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B29C:;
    /* $B29C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B29F:;
    /* $B29F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B2AF; }
label_B2A1:;
    /* $B2A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12A3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB2A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B2A4:;
    /* $B2A4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2A7:;
    /* $B2A7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B2AE; }
label_B2A9:;
    /* $B2A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B2AB:;
    /* $B2AB: 9D */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B2AE:;
    /* $B2AE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B2AF:;
    /* $B2AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2B2:;
    /* $B2B2: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B2B3:;
    /* $B2B3: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2B6:;
    /* $B2B6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12B8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FAE2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB2B6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B2B9:;
    /* $B2B9: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B2BA:;
    /* $B2BA: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B2BD:;
    /* $B2BD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B2F0; }
label_B2BF:;
    /* $B2BF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_B2C2:;
    /* $B2C2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B2C3:;
    /* $B2C3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C0 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B2C6:;
    /* $B2C6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B2DC; }
label_B2C8:;
    /* $B2C8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_B2CB:;
    /* $B2CB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_B2CD:;
    /* $B2CD: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_B2D0:;
    /* $B2D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_B2D2:;
    /* $B2D2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B2DC; }
label_B2D4:;
    /* $B2D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0F + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0F); g_cpu.A=r&0xFF; }
label_B2D6:;
    /* $B2D6: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_B2D9:;
    /* $B2D9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03E0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B2DC:;
    /* $B2DC: 86 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.X);
label_B2DE:;
    /* $B2DE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_B2E0:;
    /* $B2E0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_B2E2:;
    /* $B2E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12E4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB2E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B2E5:;
    /* $B2E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_B2E7:;
    /* $B2E7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_B2E9:;
    /* $B2E9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B2EE; }
label_B2EB:;
    /* $B2EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE13(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB2EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B2EE:;
    /* $B2EE: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_B2F0:;
    /* $B2F0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12F2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB2F0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B2F3:;
    /* $B2F3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B2F6:;
    /* $B2F6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B2AE;
    }
label_B2F8:;
    /* $B2F8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B2FA:;
    /* $B2FA: 9D */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B2FD:;
    /* $B2FD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B23E_b14(void) { /* main_top_man_platform */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B23E_b14");
#endif
    func_B23E_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B25A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B25A_b14");
#endif
    func_B23E_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B265_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B265_b14");
#endif
    func_B23E_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B2A9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B2A9_b14");
#endif
    func_B23E_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_92B6_b14_body(int _entry) { /* main_chibee */
    switch (_entry) {
        case 1: goto label_92F5;
        case 2: goto label_9303;
        case 3: goto label_9329;
        case 4: goto label_9348;
    }
label_92B6:; /* main_chibee */
    /* $92B6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92B9:;
    /* $92B9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_92F5; }
label_92BB:;
    /* $92BB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12BD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F954(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x92BB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_92BE:;
    /* $92BE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92C1:;
    /* $92C1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_92C2:;
    /* $92C2: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0540 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_92C5:;
    /* $92C5: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_92C6:;
    /* $92C6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9349 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92C9:;
    /* $92C9: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92CC:;
    /* $92CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9369 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92CF:;
    /* $92CF: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92D2:;
    /* $92D2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9389 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92D5:;
    /* $92D5: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92D8:;
    /* $92D8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x93A9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92DB:;
    /* $92DB: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92DE:;
    /* $92DE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x93C9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92E1:;
    /* $92E1: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92E4:;
    /* $92E4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92E7:;
    /* $92E7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_92E9:;
    /* $92E9: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x93E9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92EC:;
    /* $92EC: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92EF:;
    /* $92EF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92F2:;
    /* $92F2: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92F5:;
    /* $92F5: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92F8:;
    /* $92F8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_92FA:;
    /* $92FA: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_92FC:;
    /* $92FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92FF:;
    /* $92FF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9303; }
label_9301:;
    /* $9301: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9303:;
    /* $9303: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0340 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9306:;
    /* $9306: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9307:;
    /* $9307: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0400 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_930A:;
    /* $930A: 9D */ maybe_trigger_vblank(5); nes_write((0x0340 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_930D:;
    /* $930D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9310:;
    /* $9310: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0420 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9313:;
    /* $9313: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9316:;
    /* $9316: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9319:;
    /* $9319: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_931B:;
    /* $931B: 9D */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_931E:;
    /* $931E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9320:;
    /* $9320: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9322:;
    /* $9322: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0460 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9325:;
    /* $9325: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_9329; }
label_9327:;
    /* $9327: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9329:;
    /* $9329: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_932C:;
    /* $932C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_932D:;
    /* $932D: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0440 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9330:;
    /* $9330: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9333:;
    /* $9333: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9336:;
    /* $9336: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0460 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9339:;
    /* $9339: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_933C:;
    /* $933C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_933F:;
    /* $933F: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9341:;
    /* $9341: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9348; }
label_9343:;
    /* $9343: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9345:;
    /* $9345: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9348:;
    /* $9348: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_92B6_b14(void) { /* main_chibee */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92B6_b14");
#endif
    func_92B6_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_92F5_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92F5_b14");
#endif
    func_92B6_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9303_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9303_b14");
#endif
    func_92B6_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9329_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9329_b14");
#endif
    func_92B6_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9348_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9348_b14");
#endif
    func_92B6_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9E5_b14_body(int _entry) { /* main_spark_falling_platform */
    switch (_entry) {
        case 1: goto label_BA0B;
        case 2: goto label_BA2D;
        case 3: goto label_BA41;
        case 4: goto label_BA42;
        case 5: goto label_BA57;
    }
label_B9E5:; /* main_spark_falling_platform */
    /* $B9E5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9E8:;
    /* $B9E8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B9EA:;
    /* $B9EA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BA0B; }
label_B9EC:;
    /* $B9EC: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9EF:;
    /* $B9EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B9F1:;
    /* $B9F1: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9F4:;
    /* $B9F4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9F7:;
    /* $B9F7: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9FA:;
    /* $B9FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19FC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9FD:;
    /* $B9FD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_B9FF:;
    /* $B9FF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BA41; }
label_BA01:;
    /* $BA01: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A03); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA01, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA04:;
    /* $BA04: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_BA06:;
    /* $BA06: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BA41; }
label_BA08:;
    /* $BA08: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA0B:;
    /* $BA0B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA0E:;
    /* $BA0E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA42; }
label_BA10:;
    /* $BA10: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A12); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA10, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA13:;
    /* $BA13: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA16:;
    /* $BA16: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BA17:;
    /* $BA17: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_BA19:;
    /* $BA19: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA1C:;
    /* $BA1C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0460 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA1F:;
    /* $BA1F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_BA21:;
    /* $BA21: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA24:;
    /* $BA24: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BA26:;
    /* $BA26: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA2D; }
label_BA28:;
    /* $BA28: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BA2A:;
    /* $BA2A: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA2D:;
    /* $BA2D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA30:;
    /* $BA30: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3A; g_cpu.C=(g_cpu.A>=0x3A)?1:0; FLAG_NZ(r&0xFF); }
label_BA32:;
    /* $BA32: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BA41; }
label_BA34:;
    /* $BA34: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA37:;
    /* $BA37: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BA39:;
    /* $BA39: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA3C:;
    /* $BA3C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BA3E:;
    /* $BA3E: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA41:;
    /* $BA41: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BA42:;
    /* $BA42: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA45:;
    /* $BA45: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_BA47:;
    /* $BA47: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA57; }
label_BA49:;
    /* $BA49: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A4B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xB2AF, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA49, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA4C:;
    /* $BA4C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA4F:;
    /* $BA4F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0560 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA52:;
    /* $BA52: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA41;
    }
label_BA54:;
    /* $BA54: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA57:;
    /* $BA57: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A59); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA57, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA5A:;
    /* $BA5A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x16; g_cpu.C=(g_cpu.A>=0x16)?1:0; FLAG_NZ(r&0xFF); }
label_BA5C:;
    /* $BA5C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA41;
    }
label_BA5E:;
    /* $BA5E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A60); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA5E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BA61:;
    /* $BA61: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_BA63:;
    /* $BA63: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BA41;
    }
label_BA65:;
    /* $BA65: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA68:;
    /* $BA68: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA6B:;
    /* $BA6B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9E5_b14(void) { /* main_spark_falling_platform */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E5_b14");
#endif
    func_B9E5_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA0B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA0B_b14");
#endif
    func_B9E5_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA2D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA2D_b14");
#endif
    func_B9E5_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA41_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA41_b14");
#endif
    func_B9E5_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA42_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA42_b14");
#endif
    func_B9E5_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA57_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA57_b14");
#endif
    func_B9E5_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B156_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B18E;
        case 2: goto label_B173;
        case 3: goto label_B189;
        case 4: goto label_B198;
        case 5: goto label_B1A7;
        case 6: goto label_B1A8;
    }
label_B156:;
    /* $B156: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B159:;
    /* $B159: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B15B:;
    /* $B15B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B173; }
label_B15D:;
    /* $B15D: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B160:;
    /* $B160: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B163:;
    /* $B163: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B165:;
    /* $B165: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B168:;
    /* $B168: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B16B:;
    /* $B16B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_B16D:;
    /* $B16D: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B170:;
    /* $B170: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1172); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB170, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B173:;
    /* $B173: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_B175:;
    /* $B175: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1177); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB175, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B178:;
    /* $B178: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B198; }
label_B17A:;
    /* $B17A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B17D:;
    /* $B17D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B17F:;
    /* $B17F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B189; }
label_B181:;
    /* $B181: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_B183:;
    /* $B183: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1185); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB183, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B186:;
    /* $B186: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB18E, 14); return;
label_B189:;
    /* $B189: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_B18B:;
    /* $B18B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x118D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB18B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B18E:;
    /* $B18E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B198; }
label_B190:;
    /* $B190: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B193:;
    /* $B193: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_B195:;
    /* $B195: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B198:;
    /* $B198: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B19B:;
    /* $B19B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B1A8; }
label_B19D:;
    /* $B19D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_B19F:;
    /* $B19F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11A1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB19F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B1A2:;
    /* $B1A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B1A4:;
    /* $B1A4: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1A7:;
    /* $B1A7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B1A8:;
    /* $B1A8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1AB:;
    /* $B1AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B1A7;
    }
label_B1AD:;
    /* $B1AD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B0:;
    /* $B1B0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB4; g_cpu.C=(g_cpu.A>=0xB4)?1:0; FLAG_NZ(r&0xFF); }
label_B1B2:;
    /* $B1B2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B1A7;
    }
label_B1B4:;
    /* $B1B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_B1B6:;
    /* $B1B6: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B1B9:;
    /* $B1B9: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1BC:;
    /* $B1BC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B156_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B156_b14");
#endif
    func_B156_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B18E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B18E_b14");
#endif
    func_B156_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B173_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B173_b14");
#endif
    func_B156_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B189_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B189_b14");
#endif
    func_B156_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B198_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B198_b14");
#endif
    func_B156_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1A7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1A7_b14");
#endif
    func_B156_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B1A8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B1A8_b14");
#endif
    func_B156_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8F7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8F7_b14");
#endif
label_B8F7:;
    /* $B8F7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A93F_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A95F;
        case 2: goto label_A953;
        case 3: goto label_A94E;
        case 4: goto label_A942;
    }
label_A93F:;
    /* $A93F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A942:;
    /* $A942: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A944:;
    /* $A944: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A94E; }
label_A946:;
    /* $A946: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x094A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA948, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A94B:;
    /* $A94B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA953, 14); return;
label_A94E:;
    /* $A94E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_A950:;
    /* $A950: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0952); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA950, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A953:;
    /* $A953: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A95F; }
label_A955:;
    /* $A955: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_A957:;
    /* $A957: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0959); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA957, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A95A:;
    /* $A95A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A95C:;
    /* $A95C: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A95F:;
    /* $A95F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A93F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93F_b14");
#endif
    func_A93F_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A95F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A95F_b14");
#endif
    func_A93F_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A953_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A953_b14");
#endif
    func_A93F_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A94E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A94E_b14");
#endif
    func_A93F_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A942_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A942_b14");
#endif
    func_A93F_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B07F_b14_body(int _entry) { /* main_komasaburo */
    switch (_entry) {
        case 1: goto label_B110;
        case 2: goto label_B0FC;
        case 3: goto label_B0F7;
        case 4: goto label_B096;
        case 5: goto label_B0B5;
        case 6: goto label_B0CB;
        case 7: goto label_B0E0;
        case 8: goto label_B0EC;
        case 9: goto label_B0ED;
        case 10: goto label_B10A;
        case 11: goto label_B0DA;
        case 12: goto label_B103;
        case 13: goto label_B0AB;
    }
label_B07F:; /* main_komasaburo */
    /* $B07F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B082:;
    /* $B082: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B084:;
    /* $B084: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B096; }
label_B086:;
    /* $B086: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1088); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB086, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B089:;
    /* $B089: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B08C:;
    /* $B08C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_B08E:;
    /* $B08E: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B091:;
    /* $B091: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B093:;
    /* $B093: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B096:;
    /* $B096: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B099:;
    /* $B099: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B09B:;
    /* $B09B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B0CB; }
label_B09D:;
    /* $B09D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0A0:;
    /* $B0A0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_B0A2:;
    /* $B0A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B0B5; }
label_B0A4:;
    /* $B0A4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0A7:;
    /* $B0A7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B0A9:;
    /* $B0A9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B0ED; }
label_B0AB:;
    /* $B0AB: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0AE:;
    /* $B0AE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B0E0; }
label_B0B0:;
    /* $B0B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD6; FLAG_NZ(g_cpu.A);
label_B0B2:;
    /* $B0B2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10B4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB0B2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B0B5:;
    /* $B0B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B0B7:;
    /* $B0B7: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0BA:;
    /* $B0BA: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0BD:;
    /* $B0BD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10BF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xB11C, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB0BD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B0C0:;
    /* $B0C0: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0C3:;
    /* $B0C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_B0C5:;
    /* $B0C5: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0C8:;
    /* $B0C8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0CB:;
    /* $B0CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B0CD:;
    /* $B0CD: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0D0:;
    /* $B0D0: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0D3:;
    /* $B0D3: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0D6:;
    /* $B0D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B0EC; }
label_B0D8:;
    /* $B0D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B0DA:;
    /* $B0DA: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B0DD:;
    /* $B0DD: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0E0:;
    /* $B0E0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0E3:;
    /* $B0E3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC6; g_cpu.C=(g_cpu.A>=0xC6)?1:0; FLAG_NZ(r&0xFF); }
label_B0E5:;
    /* $B0E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B0EC; }
label_B0E7:;
    /* $B0E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_B0E9:;
    /* $B0E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB0E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B0EC:;
    /* $B0EC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B0ED:;
    /* $B0ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B0EF:;
    /* $B0EF: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_B0F1:;
    /* $B0F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE2; FLAG_NZ(g_cpu.A);
label_B0F3:;
    /* $B0F3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_B0F5:;
    /* $B0F5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_B0F7:;
    /* $B0F7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0FA:;
    /* $B0FA: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_B110; }
label_B0FC:;
    /* $B0FC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B0FD:;
    /* $B0FD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_B0FF:;
    /* $B0FF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0F7;
    }
label_B101:;
    /* $B101: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_B103:;
    /* $B103: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B105:;
    /* $B105: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B10A; }
label_B107:;
    /* $B107: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B10A:;
    /* $B10A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_B10C:;
    /* $B10C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B10F:;
    /* $B10F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B110:;
    /* $B110: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_B112:;
    /* $B112: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B115:;
    /* $B115: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B0FC;
    }
label_B117:;
    /* $B117: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B119:;
    /* $B119: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB0FC, 14); return;
}

void func_B07F_b14(void) { /* main_komasaburo */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B07F_b14");
#endif
    func_B07F_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B110_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B110_b14");
#endif
    func_B07F_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0FC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0FC_b14");
#endif
    func_B07F_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0F7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0F7_b14");
#endif
    func_B07F_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B096_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B096_b14");
#endif
    func_B07F_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0B5_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0B5_b14");
#endif
    func_B07F_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0CB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0CB_b14");
#endif
    func_B07F_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0E0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0E0_b14");
#endif
    func_B07F_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0EC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0EC_b14");
#endif
    func_B07F_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0ED_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0ED_b14");
#endif
    func_B07F_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B10A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B10A_b14");
#endif
    func_B07F_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0DA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0DA_b14");
#endif
    func_B07F_b14_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B103_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B103_b14");
#endif
    func_B07F_b14_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0AB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0AB_b14");
#endif
    func_B07F_b14_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5CC_b14_body(int _entry) { /* main_parasyu */
    switch (_entry) {
        case 1: goto label_B5FC;
        case 2: goto label_B5FD;
        case 3: goto label_B60D;
        case 4: goto label_B61B;
        case 5: goto label_B62C;
        case 6: goto label_B636;
        case 7: goto label_B5E6;
    }
label_B5CC:; /* main_parasyu */
    /* $B5CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B5CF:;
    /* $B5CF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B5D1:;
    /* $B5D1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B5FD; }
label_B5D3:;
    /* $B5D3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B5D6:;
    /* $B5D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B5D8:;
    /* $B5D8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B5DB:;
    /* $B5DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15DD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB5DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B5DE:;
    /* $B5DE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x64; g_cpu.C=(g_cpu.A>=0x64)?1:0; FLAG_NZ(r&0xFF); }
label_B5E0:;
    /* $B5E0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B5FC; }
label_B5E2:;
    /* $B5E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE4); FLAG_NZ(g_cpu.A);
label_B5E4:;
    /* $B5E4: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE5); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B5E6:;
    /* $B5E6: 85 */ maybe_trigger_vblank(3); nes_write(0xE5, g_cpu.A);
label_B5E8:;
    /* $B5E8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_B5EA:;
    /* $B5EA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B5EB:;
    /* $B5EB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB6E4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B5EE:;
    /* $B5EE: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B5F1:;
    /* $B5F1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B5F4:;
    /* $B5F4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B5F7:;
    /* $B5F7: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x04; FLAG_NZ(g_cpu.A);
label_B5F9:;
    /* $B5F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B5FC:;
    /* $B5FC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B5FD:;
    /* $B5FD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B600:;
    /* $B600: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B61B; }
label_B602:;
    /* $B602: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B605:;
    /* $B605: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B60D; }
label_B607:;
    /* $B607: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B60A:;
    /* $B60A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; } return;
label_B60D:;
    /* $B60D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4D; FLAG_NZ(g_cpu.A);
label_B60F:;
    /* $B60F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1611); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB60F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B612:;
    /* $B612: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B615:;
    /* $B615: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B617:;
    /* $B617: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B61A:;
    /* $B61A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B61B:;
    /* $B61B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B61E:;
    /* $B61E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B620:;
    /* $B620: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B62C; }
label_B622:;
    /* $B622: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_B624:;
    /* $B624: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B627:;
    /* $B627: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B629:;
    /* $B629: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B62C:;
    /* $B62C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B62F:;
    /* $B62F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B631:;
    /* $B631: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B636; }
label_B633:;
    /* $B633: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB6BC, 14); return;
label_B636:;
    /* $B636: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B639:;
    /* $B639: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B694; }
label_B63B:;
    /* $B63B: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B63E:;
    /* $B63E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB6D6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B641:;
    /* $B641: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B642:;
    /* $B642: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B643:;
    /* $B643: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8F4A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B646:;
    /* $B646: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B649:;
    /* $B649: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8F4B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B64C:;
    /* $B64C: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B64F:;
    /* $B64F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8F6A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B652:;
    /* $B652: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B655:;
    /* $B655: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8F6B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B658:;
    /* $B658: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B65B:;
    /* $B65B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B65E:;
    /* $B65E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B675; }
label_B660:;
    /* $B660: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B663:;
    /* $B663: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_B665:;
    /* $B665: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B666:;
    /* $B666: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_B668:;
    /* $B668: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B66B:;
    /* $B66B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B66E:;
    /* $B66E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_B670:;
    /* $B670: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_B672:;
    /* $B672: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B675:;
    /* $B675: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B678:;
    /* $B678: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B67B:;
    /* $B67B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_B67D:;
    /* $B67D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B68F; }
label_B67F:;
    /* $B67F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B682:;
    /* $B682: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_B684:;
    /* $B684: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B687:;
    /* $B687: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B68A:;
    /* $B68A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B68C:;
    /* $B68C: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B68F:;
    /* $B68F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_B691:;
    /* $B691: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B694:;
    /* $B694: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B697:;
    /* $B697: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B69A:;
    /* $B69A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B69B:;
    /* $B69B: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0440 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B69E:;
    /* $B69E: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B6A1:;
    /* $B6A1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6A4:;
    /* $B6A4: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0460 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B6A7:;
    /* $B6A7: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B6AA:;
    /* $B6AA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6AD:;
    /* $B6AD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B6AF:;
    /* $B6AF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6B8; }
label_B6B1:;
    /* $B6B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16B3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6B4:;
    /* $B6B4: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B6BB; }
label_B6B6:;
    /* $B6B6: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B6BB; }
label_B6B8:;
    /* $B6B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16BA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB6B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B6BB:;
    /* $B6BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B5CC_b14(void) { /* main_parasyu */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5CC_b14");
#endif
    func_B5CC_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5FC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FC_b14");
#endif
    func_B5CC_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5FD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FD_b14");
#endif
    func_B5CC_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B60D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B60D_b14");
#endif
    func_B5CC_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B61B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B61B_b14");
#endif
    func_B5CC_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B62C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B62C_b14");
#endif
    func_B5CC_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B636_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B636_b14");
#endif
    func_B5CC_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5E6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5E6_b14");
#endif
    func_B5CC_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B540_b14_body(int _entry) { /* main_hologran */
    switch (_entry) {
        case 1: goto label_B58E;
        case 2: goto label_B54A;
        case 3: goto label_B55B;
        case 4: goto label_B579;
        case 5: goto label_B58B;
    }
label_B540:; /* main_hologran */
    /* $B540: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B543:;
    /* $B543: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_B55B; }
label_B545:;
    /* $B545: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B547:;
    /* $B547: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B54A:;
    /* $B54A: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_B54C:;
    /* $B54C: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_B54E:;
    /* $B54E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_B550:;
    /* $B550: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_B552:;
    /* $B552: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_B554:;
    /* $B554: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_B556:;
    /* $B556: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_B558:;
    /* $B558: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_B55A:;
    /* $B55A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B55B:;
    /* $B55B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B55D:;
    /* $B55D: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B560:;
    /* $B560: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1562); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB560, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B563:;
    /* $B563: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B566:;
    /* $B566: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B54A;
    }
label_B568:;
    /* $B568: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B56B:;
    /* $B56B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B579; }
label_B56D:;
    /* $B56D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B570:;
    /* $B570: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B572:;
    /* $B572: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B579; }
label_B574:;
    /* $B574: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B576:;
    /* $B576: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B579:;
    /* $B579: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B57C:;
    /* $B57C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B5C6; }
label_B57E:;
    /* $B57E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B581:;
    /* $B581: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B583:;
    /* $B583: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B58B; }
label_B585:;
    /* $B585: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1587); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB585, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B588:;
    /* $B588: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB58E, 14); return;
label_B58B:;
    /* $B58B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x158D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB58B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B58E:;
    /* $B58E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B591:;
    /* $B591: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B593:;
    /* $B593: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B5CB; }
label_B595:;
    /* $B595: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1597); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB595, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B598:;
    /* $B598: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x61; g_cpu.C=(g_cpu.A>=0x61)?1:0; FLAG_NZ(r&0xFF); }
label_B59A:;
    /* $B59A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B5CB; }
label_B59C:;
    /* $B59C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B59F:;
    /* $B59F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x05A0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B5A2:;
    /* $B5A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_B5A4:;
    /* $B5A4: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B5A7:;
    /* $B5A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B5AA:;
    /* $B5AA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B5AC:;
    /* $B5AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B5B8; }
label_B5AE:;
    /* $B5AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_B5B0:;
    /* $B5B0: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B5B3:;
    /* $B5B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B5B5:;
    /* $B5B5: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B5B8:;
    /* $B5B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_B5BA:;
    /* $B5BA: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_B5BC:;
    /* $B5BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B5BE:;
    /* $B5BE: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_B5C0:;
    /* $B5C0: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_B5C2:;
    /* $B5C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B5C4:;
    /* $B5C4: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_B5C6:;
    /* $B5C6: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B5C9:;
    /* $B5C9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B5CB; }
label_B5CB:;
    /* $B5CB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B540_b14(void) { /* main_hologran */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B540_b14");
#endif
    func_B540_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B58E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B58E_b14");
#endif
    func_B540_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B54A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B54A_b14");
#endif
    func_B540_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B55B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B55B_b14");
#endif
    func_B540_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B579_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B579_b14");
#endif
    func_B540_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B58B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B58B_b14");
#endif
    func_B540_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA0A_b14_body(int _entry) { /* main_bomber_pepe */
    switch (_entry) {
        case 1: goto label_AA2C;
        case 2: goto label_AA3A;
        case 3: goto label_AA72;
    }
label_AA0A:; /* main_bomber_pepe */
    /* $AA0A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA0D:;
    /* $AA0D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AA0F:;
    /* $AA0F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA2C; }
label_AA11:;
    /* $AA11: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_AA13:;
    /* $AA13: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA16:;
    /* $AA16: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AA18:;
    /* $AA18: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA1B:;
    /* $AA1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_AA1D:;
    /* $AA1D: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA20:;
    /* $AA20: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A22); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA20, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA23:;
    /* $AA23: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A25); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA82E, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA23, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA26:;
    /* $AA26: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA29:;
    /* $AA29: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA2C:;
    /* $AA2C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA2F:;
    /* $AA2F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA3A; }
label_AA31:;
    /* $AA31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A33); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xAA9A, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA34:;
    /* $AA34: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A36); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA82E, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA34, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA37:;
    /* $AA37: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA3A:;
    /* $AA3A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA3D:;
    /* $AA3D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_AA3F:;
    /* $AA3F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA72; }
label_AA41:;
    /* $AA41: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA44:;
    /* $AA44: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_AA46:;
    /* $AA46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA50; }
label_AA48:;
    /* $AA48: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0A; FLAG_NZ(g_cpu.Y);
label_AA4A:;
    /* $AA4A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A4C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA4A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA4D:;
    /* $AA4D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAA55, 14); return;
label_AA50:;
    /* $AA50: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_AA52:;
    /* $AA52: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A54); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA52, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA55:;
    /* $AA55: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_AA57:;
    /* $AA57: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A59); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA57, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA5A:;
    /* $AA5A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AA6D; }
label_AA5C:;
    /* $AA5C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_AA5E:;
    /* $AA5E: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA61:;
    /* $AA61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_AA63:;
    /* $AA63: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA66:;
    /* $AA66: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA69:;
    /* $AA69: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3D; FLAG_NZ(g_cpu.A);
label_AA6B:;
    /* $AA6B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA6F; }
label_AA6D:;
    /* $AA6D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_AA6F:;
    /* $AA6F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_AA72:;
    /* $AA72: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA75:;
    /* $AA75: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3B; g_cpu.C=(g_cpu.A>=0x3B)?1:0; FLAG_NZ(r&0xFF); }
label_AA77:;
    /* $AA77: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA86; }
label_AA79:;
    /* $AA79: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA7C:;
    /* $AA7C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA7F:;
    /* $AA7F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA99; }
label_AA81:;
    /* $AA81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_AA83:;
    /* $AA83: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A85); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA83, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA86:;
    /* $AA86: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA89:;
    /* $AA89: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AA99; }
label_AA8B:;
    /* $AA8B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A8D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA8B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA8E:;
    /* $AA8E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A90); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA8E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA91:;
    /* $AA91: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA94:;
    /* $AA94: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_AA96:;
    /* $AA96: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA99:;
    /* $AA99: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA0A_b14(void) { /* main_bomber_pepe */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA0A_b14");
#endif
    func_AA0A_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA2C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA2C_b14");
#endif
    func_AA0A_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA3A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA3A_b14");
#endif
    func_AA0A_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA72_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA72_b14");
#endif
    func_AA0A_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99C3_b14_body(int _entry) { /* main_metall_dx */
    switch (_entry) {
        case 1: goto label_99D7;
        case 2: goto label_99FB;
        case 3: goto label_9A0E;
        case 4: goto label_9A18;
        case 5: goto label_9A1D;
        case 6: goto label_9A1E;
        case 7: goto label_9A32;
        case 8: goto label_9A41;
        case 9: goto label_9A4B;
        case 10: goto label_99F0;
    }
label_99C3:; /* main_metall_dx */
    /* $99C3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99C6:;
    /* $99C6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_99C8:;
    /* $99C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_99CA:;
    /* $99CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9A1E; }
label_99CC:;
    /* $99CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_99CE:;
    /* $99CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9A32; }
label_99D0:;
    /* $99D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_99D2:;
    /* $99D2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99D7; }
label_99D4:;
    /* $99D4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9776, 14); return;
label_99D7:;
    /* $99D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19D9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99DA:;
    /* $99DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99DD:;
    /* $99DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99E0:;
    /* $99E0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1F; g_cpu.C=(g_cpu.A>=0x1F)?1:0; FLAG_NZ(r&0xFF); }
label_99E2:;
    /* $99E2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_9A0E; }
label_99E4:;
    /* $99E4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99E7:;
    /* $99E7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_99FB; }
label_99E9:;
    /* $99E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99EC:;
    /* $99EC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x61; g_cpu.C=(g_cpu.A>=0x61)?1:0; FLAG_NZ(r&0xFF); }
label_99EE:;
    /* $99EE: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9A18; }
label_99F0:;
    /* $99F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC3; FLAG_NZ(g_cpu.A);
label_99F2:;
    /* $99F2: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_99F5:;
    /* $99F5: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x05A0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99F8:;
    /* $99F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99FB:;
    /* $99FB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_99FD:;
    /* $99FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9A1D; }
label_99FF:;
    /* $99FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A01:;
    /* $9A01: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A04:;
    /* $9A04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A06:;
    /* $9A06: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A09:;
    /* $9A09: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_9A0B:;
    /* $9A0B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_9A0E:;
    /* $9A0E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A10); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A0E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A11:;
    /* $9A11: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x49; g_cpu.C=(g_cpu.A>=0x49)?1:0; FLAG_NZ(r&0xFF); }
label_9A13:;
    /* $9A13: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A4B; }
label_9A15:;
    /* $9A15: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; } return;
label_9A18:;
    /* $9A18: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9A1A:;
    /* $9A1A: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A1D:;
    /* $9A1D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9A1E:;
    /* $9A1E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A20); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A1E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A21:;
    /* $9A21: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A24:;
    /* $9A24: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9A26:;
    /* $9A26: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A2D; }
label_9A28:;
    /* $9A28: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9A4F; }
label_9A2A:;
    /* $9A2A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9776, 14); return;
label_9A2D:;
    /* $9A2D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A4F; }
label_9A2F:;
    /* $9A2F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9776, 14); return;
label_9A32:;
    /* $9A32: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A34); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A32, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A35:;
    /* $9A35: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A37); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A35, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A38:;
    /* $9A38: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A3B:;
    /* $9A3B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9A41; }
label_9A3D:;
    /* $9A3D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A40:;
    /* $9A40: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9A41:;
    /* $9A41: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A43); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A41, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A44:;
    /* $9A44: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_9A46:;
    /* $9A46: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9A4B; }
label_9A48:;
    /* $9A48: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; } return;
label_9A4B:;
    /* $9A4B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A4E:;
    /* $9A4E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9A4F:;
    /* $9A4F: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_9A51:;
    /* $9A51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9A53:;
    /* $9A53: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9A55:;
    /* $9A55: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A57); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A55, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A58:;
    /* $9A58: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9AA1; }
label_9A5A:;
    /* $9A5A: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_9A5C:;
    /* $9A5C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9AAC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A5F:;
    /* $9A5F: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A62:;
    /* $9A62: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9AAF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A65:;
    /* $9A65: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A68:;
    /* $9A68: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9AB2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A6B:;
    /* $9A6B: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A6E:;
    /* $9A6E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9AB5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A71:;
    /* $9A71: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A74:;
    /* $9A74: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9AB8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A77:;
    /* $9A77: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A7A:;
    /* $9A7A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x73; FLAG_NZ(g_cpu.A);
label_9A7C:;
    /* $9A7C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A7E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A7C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A7F:;
    /* $9A7F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8B; FLAG_NZ(g_cpu.A);
label_9A81:;
    /* $9A81: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A84:;
    /* $9A84: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_9A86:;
    /* $9A86: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_9A88:;
    /* $9A88: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A8B:;
    /* $9A8B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A8E:;
    /* $9A8E: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A91:;
    /* $9A91: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A94:;
    /* $9A94: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A97:;
    /* $9A97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A9A:;
    /* $9A9A: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A9D:;
    /* $9A9D: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A9F:;
    /* $9A9F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A55;
    }
label_9AA1:;
    /* $9AA1: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_9AA3:;
    /* $9AA3: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AA6:;
    /* $9AA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_9AA8:;
    /* $9AA8: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AAB:;
    /* $9AAB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99C3_b14(void) { /* main_metall_dx */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99C3_b14");
#endif
    func_99C3_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99D7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99D7_b14");
#endif
    func_99C3_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99FB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99FB_b14");
#endif
    func_99C3_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A0E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A0E_b14");
#endif
    func_99C3_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A18_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A18_b14");
#endif
    func_99C3_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A1D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A1D_b14");
#endif
    func_99C3_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A1E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A1E_b14");
#endif
    func_99C3_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A32_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A32_b14");
#endif
    func_99C3_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A41_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A41_b14");
#endif
    func_99C3_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A4B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A4B_b14");
#endif
    func_99C3_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99F0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F0_b14");
#endif
    func_99C3_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95E4_b14(void) { /* main_petit_snakey */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95E4_b14");
#endif
label_95E4:; /* main_petit_snakey */
    /* $95E4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95E7:;
    /* $95E7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_95E9:;
    /* $95E9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_95F9; }
label_95EB:;
    /* $95EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95EE:;
    /* $95EE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15F0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95EE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95F1:;
    /* $95F1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95F4:;
    /* $95F4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_95F6:;
    /* $95F6: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95F9:;
    /* $95F9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95FC:;
    /* $95FC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9643; }
label_95FE:;
    /* $95FE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9601:;
    /* $9601: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_963F; }
label_9603:;
    /* $9603: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9606:;
    /* $9606: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9608:;
    /* $9608: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9617; }
label_960A:;
    /* $960A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x160C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8D9(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x960A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_960D:;
    /* $960D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_960E:;
    /* $960E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9610:;
    /* $9610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9612:;
    /* $9612: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9639; }
label_9614:;
    /* $9614: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9621, 14); return;
label_9617:;
    /* $9617: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1619); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8D9(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9617, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_961A:;
    /* $961A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_961B:;
    /* $961B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x09; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_961D:;
    /* $961D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_961F:;
    /* $961F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9639; }
label_9621:;
    /* $9621: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9624:;
    /* $9624: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD1; g_cpu.C=(g_cpu.A>=0xD1)?1:0; FLAG_NZ(r&0xFF); }
label_9626:;
    /* $9626: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_962C; }
label_9628:;
    /* $9628: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD2; FLAG_NZ(g_cpu.A);
label_962A:;
    /* $962A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_962E; }
label_962C:;
    /* $962C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_962E:;
    /* $962E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1630); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x962E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9631:;
    /* $9631: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1633); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9659, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9631, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9634:;
    /* $9634: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9636:;
    /* $9636: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9639:;
    /* $9639: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_963B:;
    /* $963B: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_963E:;
    /* $963E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_963F:;
    /* $963F: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9642:;
    /* $9642: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9643:;
    /* $9643: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9646:;
    /* $9646: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9658; }
label_9648:;
    /* $9648: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD2; g_cpu.C=(g_cpu.A>=0xD2)?1:0; FLAG_NZ(r&0xFF); }
label_964D:;
    /* $964D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9653; }
label_964F:;
    /* $964F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD1; FLAG_NZ(g_cpu.A);
label_9651:;
    /* $9651: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9655; }
label_9653:;
    /* $9653: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD4; FLAG_NZ(g_cpu.A);
label_9655:;
    /* $9655: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1657); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9655, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9658:;
    /* $9658: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB55_b14_body(int _entry) { /* init_tama */
    switch (_entry) {
        case 1: goto label_BBBB;
        case 2: goto label_BB69;
        case 3: goto label_BBB6;
    }
label_BB55:; /* init_tama */
    /* $BB55: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB58:;
    /* $BB58: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBBB; }
label_BB5A:;
    /* $BB5A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B5C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBB5A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BB5D:;
    /* $BB5D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BB5F:;
    /* $BB5F: 84 */ maybe_trigger_vblank(3); nes_write(0x54, g_cpu.Y);
label_BB61:;
    /* $BB61: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB64:;
    /* $BB64: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0B; g_cpu.C=(g_cpu.A>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_BB66:;
    /* $BB66: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB69; }
label_BB68:;
    /* $BB68: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BB69:;
    /* $BB69: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBBBC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB6C:;
    /* $BB6C: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB6F:;
    /* $BB6F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BBB6; }
label_BB71:;
    /* $BB71: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB74:;
    /* $BB74: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB77:;
    /* $BB77: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB79:;
    /* $BB79: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBBB; }
label_BB7B:;
    /* $BB7B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB7E:;
    /* $BB7E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BB80:;
    /* $BB80: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBBB; }
label_BB82:;
    /* $BB82: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_BB84:;
    /* $BB84: 8D */ maybe_trigger_vblank(4); nes_write(0x060D, g_cpu.A);
label_BB87:;
    /* $BB87: 8D */ maybe_trigger_vblank(4); nes_write(0x062D, g_cpu.A);
label_BB8A:;
    /* $BB8A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x37; FLAG_NZ(g_cpu.A);
label_BB8C:;
    /* $BB8C: 8D */ maybe_trigger_vblank(4); nes_write(0x060E, g_cpu.A);
label_BB8F:;
    /* $BB8F: 8D */ maybe_trigger_vblank(4); nes_write(0x062E, g_cpu.A);
label_BB92:;
    /* $BB92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_BB94:;
    /* $BB94: 8D */ maybe_trigger_vblank(4); nes_write(0x060F, g_cpu.A);
label_BB97:;
    /* $BB97: 8D */ maybe_trigger_vblank(4); nes_write(0x062F, g_cpu.A);
label_BB9A:;
    /* $BB9A: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_BB9C:;
    /* $BB9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB9E:;
    /* $BB9E: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBA1:;
    /* $BBA1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_BBA3:;
    /* $BBA3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBA6:;
    /* $BBA6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BBB0; }
label_BBA8:;
    /* $BBA8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBAB:;
    /* $BBAB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFB; FLAG_NZ(g_cpu.A);
label_BBAD:;
    /* $BBAD: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBB0:;
    /* $BBB0: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BBB1:;
    /* $BBB1: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_BBB3:;
    /* $BBB3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BBA3;
    }
label_BBB5:;
    /* $BBB5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BBB6:;
    /* $BBB6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BBB8:;
    /* $BBB8: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBBB:;
    /* $BBBB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB55_b14(void) { /* init_tama */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB55_b14");
#endif
    func_BB55_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BBBB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBBB_b14");
#endif
    func_BB55_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB69_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB69_b14");
#endif
    func_BB55_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BBB6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBB6_b14");
#endif
    func_BB55_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB34_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB34_b14");
#endif
label_BB34:;
    /* $BB34: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB37:;
    /* $BB37: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_BB39:;
    /* $BB39: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB41; }
label_BB3B:;
    /* $BB3B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B3D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBB3B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BB3E:;
    /* $BB3E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBB44, 14); return;
label_BB41:;
    /* $BB41: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B43); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBB41, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BB44:;
    /* $BB44: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB47:;
    /* $BB47: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_BB49:;
    /* $BB49: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB4E; }
label_BB4B:;
    /* $BB4B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; } return;
label_BB4E:;
    /* $BB4E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; } return;
}

void func_9FF7_b14(void) { /* main_proto_man */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9FF7_b14");
#endif
label_9FF7:; /* main_proto_man */
    /* $9FF7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1FF9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA249, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9FF7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9FFA:;
    /* $9FFA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9FFD:;
    /* $9FFD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1FE2), 14); return; }
label_9FFF:;
    /* $9FFF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A002:;
    /* $A002: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A007; }
label_A004:;
    /* $A004: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA180, 14); return;
label_A007:;
    /* $A007: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A00A:;
    /* $A00A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A00C:; /* main_snake_man_j */
    /* $A00C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A032; }
label_A00E:;
    /* $A00E: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A011:;
    /* $A011: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A014:;
    /* $A014: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x90; g_cpu.C=(g_cpu.A>=0x90)?1:0; FLAG_NZ(r&0xFF); }
label_A016:;
    /* $A016: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A01B; }
label_A018:;
    /* $A018: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; } return;
label_A01B:;
    /* $A01B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A01D:;
    /* $A01D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x001F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA01D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A020:;
    /* $A020: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A022:;
    /* $A022: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A025:;
    /* $A025: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A026:;
    /* $A026: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x52; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A028:;
    /* $A028: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A029:;
    /* $A029: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA176 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A02C:;
    /* $A02C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A032:;
    /* $A032: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x99; g_cpu.C=(g_cpu.A>=0x99)?1:0; FLAG_NZ(r&0xFF); }
label_A037:;
    /* $A037: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A04A; }
label_A039:; /* needle_man_init */
    /* $A039: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03C:;
    /* $A03C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A03E:;
    /* $A03E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05F; }
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA178 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B853_b14_body(int _entry) { /* main_robot_master_intro */
    switch (_entry) {
        case 1: goto label_B8BD;
        case 2: goto label_B860;
        case 3: goto label_B86D;
        case 4: goto label_B8C2;
        case 5: goto label_B8C6;
        case 6: goto label_B893;
    }
label_B853:; /* main_robot_master_intro */
    /* $B853: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B856:;
    /* $B856: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B858:;
    /* $B858: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B860; }
label_B85A:;
    /* $B85A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B85D:;
    /* $B85D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x185F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xB7DF, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB85D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B860:;
    /* $B860: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B863:;
    /* $B863: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_B865:;
    /* $B865: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B86D; }
label_B867:;
    /* $B867: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1869); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB867, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B86A:;
    /* $B86A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xB8BD, 14); return;
label_B86D:;
    /* $B86D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B870:;
    /* $B870: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B872:;
    /* $B872: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B873:;
    /* $B873: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB8EF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B876:;
    /* $B876: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B877:;
    /* $B877: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1879); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB877, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B87A:;
    /* $B87A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B8BD; }
label_B87C:;
    /* $B87C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B87F:;
    /* $B87F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B881:;
    /* $B881: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B882:;
    /* $B882: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB8E7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B885:;
    /* $B885: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05A0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B888:;
    /* $B888: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8C2; }
label_B88A:;
    /* $B88A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B88C:;
    /* $B88C: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B88F:;
    /* $B88F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_B891:;
    /* $B891: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x9C; g_cpu.C=(g_cpu.A>=0x9C)?1:0; FLAG_NZ(r&0xFF); }
label_B893:;
    /* $B893: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8C6; }
label_B895:;
    /* $B895: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_B897:;
    /* $B897: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B89A:;
    /* $B89A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1C; FLAG_NZ(g_cpu.A);
label_B89C:;
    /* $B89C: 9D */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B89F:;
    /* $B89F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8A2:;
    /* $B8A2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B8A5:;
    /* $B8A5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB8C7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8A8:;
    /* $B8A8: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B8AB:;
    /* $B8AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB8CF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8AE:;
    /* $B8AE: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B8B1:;
    /* $B8B1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB8D7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8B4:;
    /* $B8B4: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B8B7:;
    /* $B8B7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB8DF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8BA:;
    /* $B8BA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_B8BD:;
    /* $B8BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B8BF:;
    /* $B8BF: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B8C2:;
    /* $B8C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B8C4:;
    /* $B8C4: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_B8C6:;
    /* $B8C6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B853_b14(void) { /* main_robot_master_intro */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B853_b14");
#endif
    func_B853_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8BD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8BD_b14");
#endif
    func_B853_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B860_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B860_b14");
#endif
    func_B853_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B86D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B86D_b14");
#endif
    func_B853_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8C2_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C2_b14");
#endif
    func_B853_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8C6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C6_b14");
#endif
    func_B853_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B893_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B893_b14");
#endif
    func_B853_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7C9_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B7D9;
    }
label_B7C9:;
    /* $B7C9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x17CB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7CC:;
    /* $B7CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7CF:;
    /* $B7CF: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0520 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7D2:;
    /* $B7D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B7D9; }
label_B7D4:;
    /* $B7D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B7D6:;
    /* $B7D6: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_B7D8:;
    /* $B7D8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7D9:;
    /* $B7D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B7DB:;
    /* $B7DB: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B7DE:;
    /* $B7DE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7C9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7C9_b14");
#endif
    func_B7C9_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7D9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D9_b14");
#endif
    func_B7C9_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A83F_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A868;
        case 2: goto label_A885;
    }
label_A83F:;
    /* $A83F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A842:;
    /* $A842: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A8B8; }
label_A844:;
    /* $A844: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_A846:;
    /* $A846: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A849:;
    /* $A849: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x084B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA849, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A84C:;
    /* $A84C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A8BB; }
label_A84E:;
    /* $A84E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_A850:;
    /* $A850: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0852); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA850, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A853:;
    /* $A853: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_A855:;
    /* $A855: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0857); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA855, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A858:;
    /* $A858: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_A85A:;
    /* $A85A: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A85D:;
    /* $A85D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A85F:;
    /* $A85F: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A862:;
    /* $A862: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A865:;
    /* $A865: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A868:;
    /* $A868: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A86B:;
    /* $A86B: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_A86D:;
    /* $A86D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A870:;
    /* $A870: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A872:;
    /* $A872: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A875:;
    /* $A875: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A877:;
    /* $A877: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A87A:;
    /* $A87A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A87B:;
    /* $A87B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A87C:;
    /* $A87C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A87E:;
    /* $A87E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A87F:;
    /* $A87F: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA8DC + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A882:;
    /* $A882: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A885:;
    /* $A885: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A887:;
    /* $A887: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A888:;
    /* $A888: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xA8E4 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A88B:;
    /* $A88B: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A88E:;
    /* $A88E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A88F:;
    /* $A88F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A890:;
    /* $A890: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A891:;
    /* $A891: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A892:;
    /* $A892: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A894:;
    /* $A894: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA8BC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A897:;
    /* $A897: 99 */ maybe_trigger_vblank(5); nes_write((0x060C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A89A:;
    /* $A89A: 99 */ maybe_trigger_vblank(5); nes_write((0x062C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A89D:;
    /* $A89D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A89E:;
    /* $A89E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A89F:;
    /* $A89F: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A8A1:;
    /* $A8A1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A894;
    }
label_A8A3:;
    /* $A8A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A8A5:;
    /* $A8A5: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_A8A7:;
    /* $A8A7: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_A8A9:;
    /* $A8A9: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8AC:;
    /* $A8AC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8AF:;
    /* $A8AF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A8B1:;
    /* $A8B1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A8BB; }
label_A8B3:;
    /* $A8B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A8B5:;
    /* $A8B5: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A8B8:;
    /* $A8B8: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8BB:;
    /* $A8BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A83F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A83F_b14");
#endif
    func_A83F_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A868_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A868_b14");
#endif
    func_A83F_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A885_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A885_b14");
#endif
    func_A83F_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDF9_b14_body(int _entry) { /* main_item_pickup */
    switch (_entry) {
        case 1: goto label_BDFF;
        case 2: goto label_BE25;
        case 3: goto label_BE3A;
        case 4: goto label_BE49;
        case 5: goto label_BDFD;
    }
label_BDF9:; /* main_item_pickup */
    /* $BDF9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2C; FLAG_NZ(g_cpu.Y);
label_BDFB:;
    /* $BDFB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BDFF; }
label_BDFD:;
    /* $BDFD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2D; FLAG_NZ(g_cpu.Y);
label_BDFF:;
    /* $BDFF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1E01); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDFF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BE02:;
    /* $BE02: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1E04); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FAE2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBE02, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BE05:;
    /* $BE05: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BE3A; }
label_BE07:;
    /* $BE07: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE0A:;
    /* $BE0A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE25; }
label_BE0C:;
    /* $BE0C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE0F:;
    /* $BE0F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BE10:;
    /* $BE10: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_BE12:;
    /* $BE12: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BE13:;
    /* $BE13: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDEC2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE16:;
    /* $BE16: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_BE18:;
    /* $BE18: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BE19:;
    /* $BE19: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BE1A:;
    /* $BE1A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BE1B:;
    /* $BE1B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BE1C:;
    /* $BE1C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BE1D:;
    /* $BE1D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0150 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE20:;
    /* $BE20: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BE22:;
    /* $BE22: 99 */ maybe_trigger_vblank(5); nes_write((0x0150 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BE25:;
    /* $BE25: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BE27:;
    /* $BE27: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BE2A:;
    /* $BE2A: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BE2D:;
    /* $BE2D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDE6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE30:;
    /* $BE30: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_BE32:;
    /* $BE32: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDEC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE35:;
    /* $BE35: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_BE37:;
    /* $BE37: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0x00); nes_trace_indirect_jump(0xBE37, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_BE3A:;
    /* $BE3A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE3D:;
    /* $BE3D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE49; }
label_BE3F:;
    /* $BE3F: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE42:;
    /* $BE42: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE49; }
label_BE44:;
    /* $BE44: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BE46:;
    /* $BE46: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BE49:;
    /* $BE49: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BDF9_b14(void) { /* main_item_pickup */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDF9_b14");
#endif
    func_BDF9_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDFF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDFF_b14");
#endif
    func_BDF9_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE25_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE25_b14");
#endif
    func_BDF9_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE3A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE3A_b14");
#endif
    func_BDF9_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE49_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE49_b14");
#endif
    func_BDF9_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDFD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDFD_b14");
#endif
    func_BDF9_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BED2_b14_body(int _entry) { /* main_surprise_box */
    switch (_entry) {
        case 1: goto label_BF03;
        case 2: goto label_BF1D;
        case 3: goto label_BF25;
        case 4: goto label_BF3E;
    }
label_BED2:; /* main_surprise_box */
    /* $BED2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BED5:;
    /* $BED5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x71; g_cpu.C=(g_cpu.A>=0x71)?1:0; FLAG_NZ(r&0xFF); }
label_BED7:;
    /* $BED7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_BF03; }
label_BED9:;
    /* $BED9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1EDB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FB7B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBED9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BEDC:;
    /* $BEDC: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1ED1), 14); return; }
label_BEDE:;
    /* $BEDE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEE1:;
    /* $BEE1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BEE2:;
    /* $BEE2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_BEE4:;
    /* $BEE4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BEE5:;
    /* $BEE5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDEC2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEE8:;
    /* $BEE8: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_BEEA:;
    /* $BEEA: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BEEB:;
    /* $BEEB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BEEC:;
    /* $BEEC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BEED:;
    /* $BEED: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BEEE:;
    /* $BEEE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BEEF:;
    /* $BEEF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0150 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEF2:;
    /* $BEF2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BEF4:;
    /* $BEF4: 99 */ maybe_trigger_vblank(5); nes_write((0x0150 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BEF7:;
    /* $BEF7: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x10); FLAG_NZ(g_cpu.Y);
label_BEF9:;
    /* $BEF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BEFB:;
    /* $BEFB: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BEFE:;
    /* $BEFE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_BF00:;
    /* $BF00: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_BF03:;
    /* $BF03: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF06:;
    /* $BF06: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BF08:;
    /* $BF08: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BF3E; }
label_BF0A:;
    /* $BF0A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE5); FLAG_NZ(g_cpu.A);
label_BF0C:;
    /* $BF0C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BF0E:;
    /* $BF0E: 85 */ maybe_trigger_vblank(3); nes_write(0xE5, g_cpu.A);
label_BF10:;
    /* $BF10: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_BF12:;
    /* $BF12: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_BF14:;
    /* $BF14: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_BF16:;
    /* $BF16: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1F18); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FCEB(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBF16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BF19:;
    /* $BF19: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_BF1B:;
    /* $BF1B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_BF1D:;
    /* $BF1D: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF3F + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BF20:;
    /* $BF20: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BF25; }
label_BF22:;
    /* $BF22: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BF23:;
    /* $BF23: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BF1D;
    }
label_BF25:;
    /* $BF25: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF45 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF28:;
    /* $BF28: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1F2A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBF28, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BF2B:;
    /* $BF2B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF4B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF2E:;
    /* $BF2E: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF31:;
    /* $BF31: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF34:;
    /* $BF34: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_BF36:;
    /* $BF36: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF39:;
    /* $BF39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_BF3B:;
    /* $BF3B: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF3E:;
    /* $BF3E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BED2_b14(void) { /* main_surprise_box */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BED2_b14");
#endif
    func_BED2_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF03_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF03_b14");
#endif
    func_BED2_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF1D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF1D_b14");
#endif
    func_BED2_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF25_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF25_b14");
#endif
    func_BED2_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF3E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF3E_b14");
#endif
    func_BED2_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_952F_b14_body(int _entry) { /* main_junk_block */
    switch (_entry) {
        case 1: goto label_9540;
        case 2: goto label_958F;
        case 3: goto label_9592;
    }
label_952F:; /* main_junk_block */
    /* $952F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9532:;
    /* $9532: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9534:;
    /* $9534: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9540; }
label_9536:;
    /* $9536: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1538); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9536, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9539:;
    /* $9539: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x3C; g_cpu.C=(g_cpu.A>=0x3C)?1:0; FLAG_NZ(r&0xFF); }
label_953B:;
    /* $953B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9592; }
label_953D:;
    /* $953D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9540:;
    /* $9540: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9543:;
    /* $9543: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_958F; }
label_9545:;
    /* $9545: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x70; FLAG_NZ(g_cpu.A);
label_9547:;
    /* $9547: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_954A:;
    /* $954A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x154C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x95B9, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x954A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_954D:;
    /* $954D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9592; }
label_954F:;
    /* $954F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1551); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x954F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9552:;
    /* $9552: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9592; }
label_9554:;
    /* $9554: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x94; FLAG_NZ(g_cpu.A);
label_9556:;
    /* $9556: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1558); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9556, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9559:;
    /* $9559: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_955C:;
    /* $955C: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_955F:;
    /* $955F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9562:;
    /* $9562: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9565:;
    /* $9565: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9568:;
    /* $9568: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_956B:;
    /* $956B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x62; FLAG_NZ(g_cpu.A);
label_956D:;
    /* $956D: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9570:;
    /* $9570: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0480 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9573:;
    /* $9573: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9576:;
    /* $9576: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB2; FLAG_NZ(g_cpu.A);
label_9578:;
    /* $9578: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_957B:;
    /* $957B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5B; FLAG_NZ(g_cpu.A);
label_957D:;
    /* $957D: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9580:;
    /* $9580: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_9582:;
    /* $9582: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9585:;
    /* $9585: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9587:;
    /* $9587: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_958A:;
    /* $958A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_958C:;
    /* $958C: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_958F:;
    /* $958F: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9592:;
    /* $9592: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_952F_b14(void) { /* main_junk_block */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_952F_b14");
#endif
    func_952F_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9540_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9540_b14");
#endif
    func_952F_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_958F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_958F_b14");
#endif
    func_952F_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9592_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9592_b14");
#endif
    func_952F_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9165_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9186;
        case 2: goto label_9187;
        case 3: goto label_9191;
    }
label_9165:;
    /* $9165: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9167:;
    /* $9167: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1169); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9167, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_916A:;
    /* $916A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9186; }
label_916C:;
    /* $916C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_916F:;
    /* $916F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9171:;
    /* $9171: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9187; }
label_9173:;
    /* $9173: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9176:;
    /* $9176: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_9178:;
    /* $9178: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_917B:;
    /* $917B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_917D:;
    /* $917D: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9180:;
    /* $9180: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1182); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9180, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9183:;
    /* $9183: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1185); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F883(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9183, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9186:;
    /* $9186: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9187:;
    /* $9187: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_918A:;
    /* $918A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_918C:;
    /* $918C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9191; }
label_918E:;
    /* $918E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; } return;
label_9191:;
    /* $9191: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; } return;
}

void func_9165_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9165_b14");
#endif
    func_9165_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9186_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9186_b14");
#endif
    func_9165_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9187_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9187_b14");
#endif
    func_9165_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9191_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9191_b14");
#endif
    func_9165_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8F8_b14_body(int _entry) { /* main_spinning_wheel */
    switch (_entry) {
        case 1: goto label_B903;
    }
label_B8F8:; /* main_spinning_wheel */
    /* $B8F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8FB:;
    /* $B8FB: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B8FC:;
    /* $B8FC: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8FF:;
    /* $B8FF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1901); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FAE2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB8FF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B902:;
    /* $B902: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B903:;
    /* $B903: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B906:;
    /* $B906: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B92A; }
label_B908:;
    /* $B908: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B90B:;
    /* $B90B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B90D:;
    /* $B90D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B90E:;
    /* $B90E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_B911:;
    /* $B911: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B912:;
    /* $B912: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB92B + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B915:;
    /* $B915: 8D */ maybe_trigger_vblank(4); nes_write(0x0340, g_cpu.A);
label_B918:;
    /* $B918: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_B91B:;
    /* $B91B: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB92D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B91E:;
    /* $B91E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_B921:;
    /* $B921: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB92F + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B927:;
    /* $B927: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_B92A:;
    /* $B92A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8F8_b14(void) { /* main_spinning_wheel */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8F8_b14");
#endif
    func_B8F8_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B903_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B903_b14");
#endif
    func_B8F8_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B931_b14_body(int _entry) { /* main_trap_platform */
    switch (_entry) {
        case 1: goto label_B963;
        case 2: goto label_B964;
        case 3: goto label_B979;
        case 4: goto label_B98F;
        case 5: goto label_B95D;
        case 6: goto label_B985;
    }
label_B931:; /* main_trap_platform */
    /* $B931: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B934:;
    /* $B934: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B936:;
    /* $B936: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B964; }
label_B938:;
    /* $B938: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B93B:;
    /* $B93B: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B93E:;
    /* $B93E: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B941:;
    /* $B941: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1943); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB941, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B944:;
    /* $B944: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_B946:;
    /* $B946: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B963; }
label_B948:;
    /* $B948: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_B94A:;
    /* $B94A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B963; }
label_B94C:;
    /* $B94C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B94F:;
    /* $B94F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B952:;
    /* $B952: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B963; }
label_B954:;
    /* $B954: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1956); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB954, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B957:;
    /* $B957: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x18; g_cpu.C=(g_cpu.A>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_B959:;
    /* $B959: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B963; }
label_B95B:;
    /* $B95B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B95D:;
    /* $B95D: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B960:;
    /* $B960: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B963:;
    /* $B963: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B964:;
    /* $B964: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B967:;
    /* $B967: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B979; }
label_B969:;
    /* $B969: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B96C:;
    /* $B96C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B963;
    }
label_B96E:;
    /* $B96E: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B971:;
    /* $B971: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B974:;
    /* $B974: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A);
label_B976:;
    /* $B976: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B979:;
    /* $B979: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B97C:;
    /* $B97C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B97E:;
    /* $B97E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B98F; }
label_B980:;
    /* $B980: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B983:;
    /* $B983: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B985:;
    /* $B985: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B963;
    }
label_B987:;
    /* $B987: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B98A:;
    /* $B98A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_B98C:;
    /* $B98C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B98F:;
    /* $B98F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_B991:;
    /* $B991: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B994:;
    /* $B994: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B996:;
    /* $B996: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B999:;
    /* $B999: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B99C:;
    /* $B99C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B963;
    }
label_B99E:;
    /* $B99E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9A1:;
    /* $B9A1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_B9A3:;
    /* $B9A3: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9A6:;
    /* $B9A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B9A8:;
    /* $B9A8: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9AB:;
    /* $B9AB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B931_b14(void) { /* main_trap_platform */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B931_b14");
#endif
    func_B931_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B963_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B963_b14");
#endif
    func_B931_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B964_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B964_b14");
#endif
    func_B931_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B979_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B979_b14");
#endif
    func_B931_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B98F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B98F_b14");
#endif
    func_B931_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B95D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B95D_b14");
#endif
    func_B931_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B985_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B985_b14");
#endif
    func_B931_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1E2_b14_body(int _entry) { /* main_proto_man_gemini_cutscene */
    switch (_entry) {
        case 1: goto label_A211;
    }
label_A1E2:; /* main_proto_man_gemini_cutscene */
    /* $A1E2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01E4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA249, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1E2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1E5:;
    /* $A1E5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1E8:;
    /* $A1E8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x01E1), 14); return; }
label_A1EA:;
    /* $A1EA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A1EC:;
    /* $A1EC: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A1EE:;
    /* $A1EE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F1:;
    /* $A1F1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A1F3:;
    /* $A1F3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A216; }
label_A1F5:;
    /* $A1F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1F8:;
    /* $A1F8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_A1FA:;
    /* $A1FA: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A1FD:;
    /* $A1FD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_A243; }
label_A1FF:;
    /* $A1FF: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A202:;
    /* $A202: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A205:;
    /* $A205: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A207:;
    /* $A207: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A248; }
label_A209:;
    /* $A209: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x88; FLAG_NZ(g_cpu.A);
label_A20B:;
    /* $A20B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x020D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA20B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A20E:;
    /* $A20E: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A216:;
    /* $A216: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A219:;
    /* $A219: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A230; }
label_A21B:;
    /* $A21B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A21E:;
    /* $A21E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A243; }
label_A220:;
    /* $A220: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x99; FLAG_NZ(g_cpu.A);
label_A222:;
    /* $A222: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A225:;
    /* $A225: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x05A0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A228:;
    /* $A228: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A22A:;
    /* $A22A: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A22D:;
    /* $A22D: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A230:;
    /* $A230: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0232); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA1A2, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA230, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A233:;
    /* $A233: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x68); FLAG_NZ(g_cpu.A);
label_A235:;
    /* $A235: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A248; }
label_A237:;
    /* $A237: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A239:;
    /* $A239: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A23B:;
    /* $A23B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_A23D:;
    /* $A23D: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A240:;
    /* $A240: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A241:;
    /* $A241: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23D;
    }
label_A243:;
    /* $A243: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A245:;
    /* $A245: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A248:;
    /* $A248: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1E2_b14(void) { /* main_proto_man_gemini_cutscene */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1E2_b14");
#endif
    func_A1E2_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A211_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A211_b14");
#endif
    func_A1E2_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9194_b14_body(int _entry) { /* main_giant_springer */
    switch (_entry) {
        case 1: goto label_9224;
        case 2: goto label_9203;
        case 3: goto label_9208;
        case 4: goto label_9209;
        case 5: goto label_921F;
        case 6: goto label_922E;
        case 7: goto label_9242;
        case 8: goto label_9256;
        case 9: goto label_925F;
        case 10: goto label_9261;
        case 11: goto label_926E;
        case 12: goto label_9285;
    }
label_9194:; /* main_giant_springer */
    /* $9194: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1E; FLAG_NZ(g_cpu.Y);
label_9196:;
    /* $9196: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1198); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9196, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9199:;
    /* $9199: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_919C:;
    /* $919C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xBC; g_cpu.C=(g_cpu.A>=0xBC)?1:0; FLAG_NZ(r&0xFF); }
label_919E:;
    /* $919E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9209; }
label_91A0:;
    /* $91A0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91A3:;
    /* $91A3: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91A6:;
    /* $91A6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9208; }
label_91A8:;
    /* $91A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11AA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9286, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91AB:;
    /* $91AB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91AE:;
    /* $91AE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9209; }
label_91B0:;
    /* $91B0: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x05C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91B3:;
    /* $91B3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91B3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91B6:;
    /* $91B6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9203; }
label_91B8:;
    /* $91B8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91BB:;
    /* $91BB: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91BE:;
    /* $91BE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91C1:;
    /* $91C1: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91C4:;
    /* $91C4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91C7:;
    /* $91C7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x17; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_91C9:;
    /* $91C9: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91CC:;
    /* $91CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBD; FLAG_NZ(g_cpu.A);
label_91CE:;
    /* $91CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11D0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91D1:;
    /* $91D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x75; FLAG_NZ(g_cpu.A);
label_91D3:;
    /* $91D3: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91D6:;
    /* $91D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_91D8:;
    /* $91D8: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91DB:;
    /* $91DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_91DD:;
    /* $91DD: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91E0:;
    /* $91E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_91E2:;
    /* $91E2: 99 */ maybe_trigger_vblank(5); nes_write((0x04C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91E5:;
    /* $91E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_91E7:;
    /* $91E7: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91EA:;
    /* $91EA: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91ED:;
    /* $91ED: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91F0:;
    /* $91F0: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91F3:;
    /* $91F3: 99 */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91F6:;
    /* $91F6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFE; FLAG_NZ(g_cpu.A);
label_91F8:;
    /* $91F8: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_91FB:;
    /* $91FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_91FD:;
    /* $91FD: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9200:;
    /* $9200: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9203:;
    /* $9203: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9205:;
    /* $9205: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9208:;
    /* $9208: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9209:;
    /* $9209: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_920C:;
    /* $920C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_920E:;
    /* $920E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9256; }
label_9210:;
    /* $9210: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9213:;
    /* $9213: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9215:;
    /* $9215: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_921F; }
label_9217:;
    /* $9217: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_9219:;
    /* $9219: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x121B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9219, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_921C:;
    /* $921C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9224, 14); return;
label_921F:;
    /* $921F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x21; FLAG_NZ(g_cpu.Y);
label_9221:;
    /* $9221: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1223); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9221, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9224:;
    /* $9224: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_922E; }
label_9226:;
    /* $9226: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9229:;
    /* $9229: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_922B:;
    /* $922B: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_922E:;
    /* $922E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1230); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x922E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9231:;
    /* $9231: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_9233:;
    /* $9233: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9242; }
label_9235:;
    /* $9235: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_9237:;
    /* $9237: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_923A:;
    /* $923A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_923D:;
    /* $923D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC2; FLAG_NZ(g_cpu.A);
label_923F:;
    /* $923F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_9242:;
    /* $9242: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCA; FLAG_NZ(g_cpu.A);
label_9244:;
    /* $9244: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9247:;
    /* $9247: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_924A:;
    /* $924A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_924D:;
    /* $924D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1E; g_cpu.C=(g_cpu.A>=0x1E)?1:0; FLAG_NZ(r&0xFF); }
label_924F:;
    /* $924F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9285; }
label_9251:;
    /* $9251: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBC; FLAG_NZ(g_cpu.A);
label_9253:;
    /* $9253: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_9256:;
    /* $9256: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1258); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8B3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9256, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9259:;
    /* $9259: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_925F; }
label_925B:;
    /* $925B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDB; FLAG_NZ(g_cpu.A);
label_925D:;
    /* $925D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9261; }
label_925F:;
    /* $925F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCA; FLAG_NZ(g_cpu.A);
label_9261:;
    /* $9261: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9264:;
    /* $9264: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9267:;
    /* $9267: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_926E; }
label_9269:;
    /* $9269: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_926C:;
    /* $926C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9285; }
label_926E:;
    /* $926E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1270); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x926E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9271:;
    /* $9271: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_9273:;
    /* $9273: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9285; }
label_9275:;
    /* $9275: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9278:;
    /* $9278: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBB; FLAG_NZ(g_cpu.A);
label_927A:;
    /* $927A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x127C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x927A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_927D:;
    /* $927D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x127F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x927D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9280:;
    /* $9280: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9282:;
    /* $9282: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9285:;
    /* $9285: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9194_b14(void) { /* main_giant_springer */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9194_b14");
#endif
    func_9194_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9224_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9224_b14");
#endif
    func_9194_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9203_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9203_b14");
#endif
    func_9194_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9208_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9208_b14");
#endif
    func_9194_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9209_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9209_b14");
#endif
    func_9194_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_921F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_921F_b14");
#endif
    func_9194_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_922E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_922E_b14");
#endif
    func_9194_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9242_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9242_b14");
#endif
    func_9194_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9256_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9256_b14");
#endif
    func_9194_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_925F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_925F_b14");
#endif
    func_9194_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9261_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9261_b14");
#endif
    func_9194_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_926E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_926E_b14");
#endif
    func_9194_b14_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9285_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9285_b14");
#endif
    func_9194_b14_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9AC_b14_body(int _entry) { /* main_breakable_wall */
    switch (_entry) {
        case 1: goto label_B9AE;
        case 2: goto label_B9BE;
        case 3: goto label_B9DF;
    }
label_B9AC:; /* main_breakable_wall */
    /* $B9AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_B9AE:;
    /* $B9AE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9B1:;
    /* $B9B1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B9DF; }
label_B9B3:;
    /* $B9B3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9B6:;
    /* $B9B6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xAC; g_cpu.C=(g_cpu.A>=0xAC)?1:0; FLAG_NZ(r&0xFF); }
label_B9B8:;
    /* $B9B8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B9BE; }
label_B9BA:;
    /* $B9BA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xAF; g_cpu.C=(g_cpu.A>=0xAF)?1:0; FLAG_NZ(r&0xFF); }
label_B9BC:;
    /* $B9BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B9DF; }
label_B9BE:;
    /* $B9BE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19C0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FB7B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9BE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9C1:;
    /* $B9C1: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B9DF; }
label_B9C3:;
    /* $B9C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_B9C5:;
    /* $B9C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9C8:;
    /* $B9C8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x10); FLAG_NZ(g_cpu.Y);
label_B9CA:;
    /* $B9CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B9CC:;
    /* $B9CC: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B9CF:;
    /* $B9CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_B9D1:;
    /* $B9D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19D3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB9D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B9D4:;
    /* $B9D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B9D6:;
    /* $B9D6: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9D9:;
    /* $B9D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_B9DB:;
    /* $B9DB: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9DE:;
    /* $B9DE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B9DF:;
    /* $B9DF: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B9E0:;
    /* $B9E0: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_B9E2:;
    /* $B9E2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B9AE;
    }
label_B9E4:;
    /* $B9E4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9AC_b14(void) { /* main_breakable_wall */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9AC_b14");
#endif
    func_B9AC_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9AE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9AE_b14");
#endif
    func_B9AC_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9BE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9BE_b14");
#endif
    func_B9AC_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9DF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9DF_b14");
#endif
    func_B9AC_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_945F_b14_body(int _entry) { /* main_electric_gabyoall */
    switch (_entry) {
        case 1: goto label_949B;
        case 2: goto label_9501;
        case 3: goto label_946E;
        case 4: goto label_9496;
        case 5: goto label_94AF;
        case 6: goto label_94D4;
        case 7: goto label_94F9;
        case 8: goto label_94FE;
        case 9: goto label_9509;
        case 10: goto label_9526;
        case 11: goto label_947E;
    }
label_945F:; /* main_electric_gabyoall */
    /* $945F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9462:;
    /* $9462: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_9464:;
    /* $9464: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_946E; }
label_9466:;
    /* $9466: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9469:;
    /* $9469: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_946B:;
    /* $946B: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_946E:;
    /* $946E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0480 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9471:;
    /* $9471: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xE0; FLAG_NZ(g_cpu.A);
label_9473:;
    /* $9473: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9476:;
    /* $9476: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9479:;
    /* $9479: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_947C:;
    /* $947C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_947D:;
    /* $947D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_947E:;
    /* $947E: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x94AF + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9481:;
    /* $9481: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9484:;
    /* $9484: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1486); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8097, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9484, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9487:;
    /* $9487: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_948A:;
    /* $948A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_948C:;
    /* $948C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9496; }
label_948E:;
    /* $948E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_9490:;
    /* $9490: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1492); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9490, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9493:;
    /* $9493: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x949B, 14); return;
label_9496:;
    /* $9496: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_9498:;
    /* $9498: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x149A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_949B:;
    /* $949B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_949E:;
    /* $949E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_94A0:;
    /* $94A0: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_94A3:;
    /* $94A3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_94AF; }
label_94A5:;
    /* $94A5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94A8:;
    /* $94A8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_94AA:;
    /* $94AA: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_94AD:;
    /* $94AD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_94D4; }
label_94AF:;
    /* $94AF: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_94B2:;
    /* $94B2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94B5:;
    /* $94B5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_94B6:;
    /* $94B6: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x94B1 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94B9:;
    /* $94B9: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_94BC:;
    /* $94BC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14BE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8097, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94BC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94BF:;
    /* $94BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_94C1:;
    /* $94C1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94C4:;
    /* $94C4: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_94C7:;
    /* $94C7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0041 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94CA:;
    /* $94CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_94D4; }
label_94CC:;
    /* $94CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94CF:;
    /* $94CF: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_94D1:;
    /* $94D1: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_94D4:;
    /* $94D4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94D7:;
    /* $94D7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_94F9; }
label_94D9:;
    /* $94D9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94DC:;
    /* $94DC: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94DF:;
    /* $94DF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9509; }
label_94E1:;
    /* $94E1: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_94E4:;
    /* $94E4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_94E7:;
    /* $94E7: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x94B3 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_94EA:;
    /* $94EA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_94FE; }
label_94EC:;
    /* $94EC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_94ED:;
    /* $94ED: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94EF:;
    /* $94EF: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_94F2:;
    /* $94F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_94F4:;
    /* $94F4: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_94F7:;
    /* $94F7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9501; }
label_94F9:;
    /* $94F9: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_94FC:;
    /* $94FC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9509; }
label_94FE:;
    /* $94FE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x05C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9501:;
    /* $9501: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9503:;
    /* $9503: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9506:;
    /* $9506: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9509:;
    /* $9509: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_950A:;
    /* $950A: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_950D:;
    /* $950D: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9510:;
    /* $9510: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9513:;
    /* $9513: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x94B3 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9516:;
    /* $9516: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9526; }
label_9518:;
    /* $9518: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0480 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_951B:;
    /* $951B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xE0; FLAG_NZ(g_cpu.A);
label_951D:;
    /* $951D: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x94B5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9520:;
    /* $9520: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9523:;
    /* $9523: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1525); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8097, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9523, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9526:;
    /* $9526: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_945F_b14(void) { /* main_electric_gabyoall */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_945F_b14");
#endif
    func_945F_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_949B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_949B_b14");
#endif
    func_945F_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9501_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9501_b14");
#endif
    func_945F_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_946E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_946E_b14");
#endif
    func_945F_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9496_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9496_b14");
#endif
    func_945F_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94AF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94AF_b14");
#endif
    func_945F_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94D4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94D4_b14");
#endif
    func_945F_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94F9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94F9_b14");
#endif
    func_945F_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94FE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94FE_b14");
#endif
    func_945F_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9509_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9509_b14");
#endif
    func_945F_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9526_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9526_b14");
#endif
    func_945F_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_947E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_947E_b14");
#endif
    func_945F_b14_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF51_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BF6F;
        case 2: goto label_BF77;
        case 3: goto label_BF7D;
        case 4: goto label_BF96;
    }
label_BF51:;
    /* $BF51: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF54:;
    /* $BF54: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_BF56:;
    /* $BF56: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BF96; }
label_BF58:;
    /* $BF58: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5A); FLAG_NZ(g_cpu.A);
label_BF5A:;
    /* $BF5A: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_BF77; }
label_BF5C:;
    /* $BF5C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE6); FLAG_NZ(g_cpu.A);
label_BF5E:;
    /* $BF5E: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BF60:;
    /* $BF60: 85 */ maybe_trigger_vblank(3); nes_write(0xE7, g_cpu.A);
label_BF62:;
    /* $BF62: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_BF64:;
    /* $BF64: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_BF66:;
    /* $BF66: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_BF68:;
    /* $BF68: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1F6A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FCEB(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBF68, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BF6B:;
    /* $BF6B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_BF6D:;
    /* $BF6D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_BF6F:;
    /* $BF6F: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF97 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BF72:;
    /* $BF72: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BF7D; }
label_BF74:;
    /* $BF74: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BF75:;
    /* $BF75: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BF6F;
    }
label_BF77:;
    /* $BF77: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BF79:;
    /* $BF79: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF7C:;
    /* $BF7C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BF7D:;
    /* $BF7D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF9C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF80:;
    /* $BF80: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1F82); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBF80, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BF83:;
    /* $BF83: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBFA1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BF86:;
    /* $BF86: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF89:;
    /* $BF89: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_BF8B:;
    /* $BF8B: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF8E:;
    /* $BF8E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BF90:;
    /* $BF90: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF93:;
    /* $BF93: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BF96:;
    /* $BF96: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BF51_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF51_b14");
#endif
    func_BF51_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF6F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF6F_b14");
#endif
    func_BF51_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF77_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF77_b14");
#endif
    func_BF51_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF7D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF7D_b14");
#endif
    func_BF51_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF96_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF96_b14");
#endif
    func_BF51_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86A4_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_86BC;
        case 2: goto label_86E4;
        case 3: goto label_86F0;
        case 4: goto label_86FC;
        case 5: goto label_8712;
        case 6: goto label_8717;
    }
label_86A4:;
    /* $86A4: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86A7:;
    /* $86A7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_86A9:;
    /* $86A9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_86BC; }
label_86AB:;
    /* $86AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06AD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x86AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_86AE:;
    /* $86AE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86B1:;
    /* $86B1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_86B2:;
    /* $86B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_86B4:;
    /* $86B4: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_86B7:;
    /* $86B7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8712; }
label_86B9:;
    /* $86B9: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_86BC:;
    /* $86BC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_86BE:;
    /* $86BE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06C0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x86BE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_86C1:;
    /* $86C1: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8712; }
label_86C3:;
    /* $86C3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86C6:;
    /* $86C6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_86C8:;
    /* $86C8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8717; }
label_86CA:;
    /* $86CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_86CC:;
    /* $86CC: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86CF:;
    /* $86CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_86D1:;
    /* $86D1: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86D4:;
    /* $86D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_86D6:;
    /* $86D6: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86D9:;
    /* $86D9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_86DB:;
    /* $86DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06DD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x86DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_86DE:;
    /* $86DE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_86E0:;
    /* $86E0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_86E2:;
    /* $86E2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_86F0; }
label_86E4:;
    /* $86E4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_86E7:;
    /* $86E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_86E9:;
    /* $86E9: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86EC:;
    /* $86EC: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86EF:;
    /* $86EF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_86F0:;
    /* $86F0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_86F2:;
    /* $86F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_86F4:;
    /* $86F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_86FC; }
label_86F6:;
    /* $86F6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x41); FLAG_NZ(g_cpu.A);
label_86F8:;
    /* $86F8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_86FA:;
    /* $86FA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_86E4;
    }
label_86FC:;
    /* $86FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86FF:;
    /* $86FF: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_8701:;
    /* $8701: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8704:;
    /* $8704: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_8706:;
    /* $8706: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8707:;
    /* $8707: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x06; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8709:;
    /* $8709: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_870A:;
    /* $870A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_870B:;
    /* $870B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8718 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_870E:;
    /* $870E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0710); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x870E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8711:;
    /* $8711: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8712:;
    /* $8712: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8714:;
    /* $8714: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8717:;
    /* $8717: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_86A4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86A4_b14");
#endif
    func_86A4_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86BC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86BC_b14");
#endif
    func_86A4_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86E4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86E4_b14");
#endif
    func_86A4_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86F0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86F0_b14");
#endif
    func_86A4_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86FC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86FC_b14");
#endif
    func_86A4_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8712_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8712_b14");
#endif
    func_86A4_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8717_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8717_b14");
#endif
    func_86A4_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_871E_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_873B;
        case 2: goto label_874B;
        case 3: goto label_876B;
        case 4: goto label_8795;
    }
label_871E:;
    /* $871E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8721:;
    /* $8721: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8723:;
    /* $8723: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_876B; }
label_8725:;
    /* $8725: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8728:;
    /* $8728: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_874B; }
label_872A:;
    /* $872A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_872D:;
    /* $872D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD8; g_cpu.C=(g_cpu.A>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_872F:;
    /* $872F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_873B; }
label_8731:;
    /* $8731: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8733:;
    /* $8733: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8736:;
    /* $8736: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8739:;
    /* $8739: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8795; }
label_873B:;
    /* $873B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_873E:;
    /* $873E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x88; g_cpu.C=(g_cpu.A>=0x88)?1:0; FLAG_NZ(r&0xFF); }
label_8740:;
    /* $8740: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8795; }
label_8742:;
    /* $8742: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8745:;
    /* $8745: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8747:;
    /* $8747: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_874A:;
    /* $874A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_874B:;
    /* $874B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_874E:;
    /* $874E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8750:;
    /* $8750: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8753:;
    /* $8753: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8756:;
    /* $8756: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8759:;
    /* $8759: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_875C:;
    /* $875C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_875E:;
    /* $875E: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8761:;
    /* $8761: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_8763:;
    /* $8763: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0765); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8763, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8766:;
    /* $8766: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8768:;
    /* $8768: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_876B:;
    /* $876B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_876E:;
    /* $876E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8770:;
    /* $8770: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8795; }
label_8772:;
    /* $8772: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8774:;
    /* $8774: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8777:;
    /* $8777: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_877A:;
    /* $877A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_877B:;
    /* $877B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x99); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_877D:;
    /* $877D: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8780:;
    /* $8780: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0460 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8783:;
    /* $8783: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_8785:;
    /* $8785: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8788:;
    /* $8788: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x078A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8788, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_878B:;
    /* $878B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_878E:;
    /* $878E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8795; }
label_8790:;
    /* $8790: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8792:;
    /* $8792: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8795:;
    /* $8795: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_871E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_871E_b14");
#endif
    func_871E_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_873B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_873B_b14");
#endif
    func_871E_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_874B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_874B_b14");
#endif
    func_871E_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_876B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_876B_b14");
#endif
    func_871E_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8795_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8795_b14");
#endif
    func_871E_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8796_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8796_b14");
#endif
label_8796:;
    /* $8796: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_8799:;
    /* $8799: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_879A:;
    /* $879A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0360 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_879D:;
    /* $879D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_879E:;
    /* $879E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_87A1:;
    /* $87A1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0380 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87A4:;
    /* $87A4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_87A5:;
    /* $87A5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_87AC; }
label_87A7:;
    /* $87A7: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_87A9:;
    /* $87A9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_87AB:;
    /* $87AB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_87AC:;
    /* $87AC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_87AD:;
    /* $87AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_87AF:;
    /* $87AF: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_87B3; }
label_87B1:;
    /* $87B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_87B3:;
    /* $87B3: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_87B4:;
    /* $87B4: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87B7:;
    /* $87B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_87B9:;
    /* $87B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87BC:;
    /* $87BC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_87C6; }
label_87BE:;
    /* $87BE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_87C0:;
    /* $87C0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07C2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87C0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87C3:;
    /* $87C3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x87CB, 14); return;
label_87C6:;
    /* $87C6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_87C8:;
    /* $87C8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07CA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87C8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87CB:;
    /* $87CB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_87CE:;
    /* $87CE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_87D0:;
    /* $87D0: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_87D2:;
    /* $87D2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0581); FLAG_NZ(g_cpu.A);
label_87D5:;
    /* $87D5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_87D7:;
    /* $87D7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_87D9:;
    /* $87D9: 8D */ maybe_trigger_vblank(4); nes_write(0x0581, g_cpu.A);
label_87DC:;
    /* $87DC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_87DD_b14_body(int _entry) { /* main_magnet_missile */
    switch (_entry) {
        case 1: goto label_87FB;
        case 2: goto label_887D;
        case 3: goto label_8800;
        case 4: goto label_87FE;
        case 5: goto label_87EE;
        case 6: goto label_884B;
        case 7: goto label_8863;
        case 8: goto label_8875;
        case 9: goto label_8887;
        case 10: goto label_886F;
        case 11: goto label_883D;
        case 12: goto label_8805;
    }
label_87DD:; /* main_magnet_missile */
    /* $87DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87E0:;
    /* $87E0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_87E2:;
    /* $87E2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_884B; }
label_87E4:;
    /* $87E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x97; FLAG_NZ(g_cpu.A);
label_87E6:;
    /* $87E6: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87E9:;
    /* $87E9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_87EE; }
label_87EB:;
    /* $87EB: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_87EE:;
    /* $87EE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87F1:;
    /* $87F1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_87F3:;
    /* $87F3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_87FB; }
label_87F5:;
    /* $87F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87F8:;
    /* $87F8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x87FE, 14); return;
label_87FB:;
    /* $87FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07FD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87FB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87FE:;
    /* $87FE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_8800:;
    /* $8800: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8803:;
    /* $8803: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8845; }
label_8805:;
    /* $8805: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0480 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8808:;
    /* $8808: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_880A:;
    /* $880A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8845; }
label_880C:;
    /* $880C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_880F:;
    /* $880F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8810:;
    /* $8810: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0360 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8813:;
    /* $8813: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8814:;
    /* $8814: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8817:;
    /* $8817: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0380 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_881A:;
    /* $881A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_881B:;
    /* $881B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8821; }
label_881D:;
    /* $881D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_881F:;
    /* $881F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_8821:;
    /* $8821: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8823:;
    /* $8823: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8845; }
label_8825:;
    /* $8825: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8828:;
    /* $8828: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_882B:;
    /* $882B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_882E:;
    /* $882E: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8831:;
    /* $8831: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8833:;
    /* $8833: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8836:;
    /* $8836: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8839:;
    /* $8839: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_883A:;
    /* $883A: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C0 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_883D:;
    /* $883D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_884A; }
label_883F:;
    /* $883F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8841:;
    /* $8841: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8844:;
    /* $8844: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8845:;
    /* $8845: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8846:;
    /* $8846: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_8848:;
    /* $8848: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8800;
    }
label_884A:;
    /* $884A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_884B:;
    /* $884B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0460 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_884E:;
    /* $884E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8850:;
    /* $8850: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8863; }
label_8852:;
    /* $8852: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0440 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8855:;
    /* $8855: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8856:;
    /* $8856: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_8858:;
    /* $8858: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_885B:;
    /* $885B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0460 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_885E:;
    /* $885E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_8860:;
    /* $8860: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8863:;
    /* $8863: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8866:;
    /* $8866: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8868:;
    /* $8868: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8875; }
label_886A:;
    /* $886A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_886C:;
    /* $886C: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_886F:;
    /* $886F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0871); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x886F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8872:;
    /* $8872: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x887D, 14); return;
label_8875:;
    /* $8875: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0877); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8875, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8878:;
    /* $8878: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9B; FLAG_NZ(g_cpu.A);
label_887A:;
    /* $887A: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_887D:;
    /* $887D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8880:;
    /* $8880: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8887; }
label_8882:;
    /* $8882: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8884:;
    /* $8884: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8887:;
    /* $8887: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_87DD_b14(void) { /* main_magnet_missile */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87DD_b14");
#endif
    func_87DD_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87FB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87FB_b14");
#endif
    func_87DD_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_887D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_887D_b14");
#endif
    func_87DD_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8800_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8800_b14");
#endif
    func_87DD_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87FE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87FE_b14");
#endif
    func_87DD_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_87EE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_87EE_b14");
#endif
    func_87DD_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_884B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_884B_b14");
#endif
    func_87DD_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8863_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8863_b14");
#endif
    func_87DD_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8875_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8875_b14");
#endif
    func_87DD_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8887_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8887_b14");
#endif
    func_87DD_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_886F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_886F_b14");
#endif
    func_87DD_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_883D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_883D_b14");
#endif
    func_87DD_b14_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8805_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8805_b14");
#endif
    func_87DD_b14_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8888_b14_body(int _entry) { /* main_gemini_laser */
    switch (_entry) {
        case 1: goto label_8899;
        case 2: goto label_88AD;
        case 3: goto label_88BB;
        case 4: goto label_88C8;
        case 5: goto label_88A0;
    }
label_8888:; /* main_gemini_laser */
    /* $8888: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_888B:;
    /* $888B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8899; }
label_888D:;
    /* $888D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8890:;
    /* $8890: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8893:;
    /* $8893: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8943 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8896:;
    /* $8896: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8899; }
label_8898:;
    /* $8898: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8899:;
    /* $8899: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_889C:;
    /* $889C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_889E:;
    /* $889E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88BB; }
label_88A0:;
    /* $88A0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88A3:;
    /* $88A3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88AD; }
label_88A5:;
    /* $88A5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1E; FLAG_NZ(g_cpu.Y);
label_88A7:;
    /* $88A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08A9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88AA:;
    /* $88AA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88D6, 14); return;
label_88AD:;
    /* $88AD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88B0:;
    /* $88B0: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_88B2:;
    /* $88B2: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88B5:;
    /* $88B5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08B7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88B5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88B8:;
    /* $88B8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88FD, 14); return;
label_88BB:;
    /* $88BB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88BE:;
    /* $88BE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88C8; }
label_88C0:;
    /* $88C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_88C2:;
    /* $88C2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08C4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88C2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88C5:;
    /* $88C5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88D6, 14); return;
label_88C8:;
    /* $88C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88CB:;
    /* $88CB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_88CD:;
    /* $88CD: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88D0:;
    /* $88D0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08D2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88D3:;
    /* $88D3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88FD, 14); return;
}

void func_8888_b14(void) { /* main_gemini_laser */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8888_b14");
#endif
    func_8888_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8899_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8899_b14");
#endif
    func_8888_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_88AD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88AD_b14");
#endif
    func_8888_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_88BB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88BB_b14");
#endif
    func_8888_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_88C8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88C8_b14");
#endif
    func_8888_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_88A0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88A0_b14");
#endif
    func_8888_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8947_b14_body(int _entry) { /* main_hard_knuckle */
    switch (_entry) {
        case 1: goto label_89B7;
        case 2: goto label_8995;
        case 3: goto label_89A4;
        case 4: goto label_8956;
        case 5: goto label_8961;
        case 6: goto label_896D;
        case 7: goto label_8985;
        case 8: goto label_8992;
        case 9: goto label_89A1;
        case 10: goto label_89B4;
        case 11: goto label_89C1;
        case 12: goto label_89A8;
    }
label_8947:; /* main_hard_knuckle */
    /* $8947: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_894A:;
    /* $894A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x71; g_cpu.C=(g_cpu.A>=0x71)?1:0; FLAG_NZ(r&0xFF); }
label_894C:;
    /* $894C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8961; }
label_894E:;
    /* $894E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xAC; g_cpu.C=(g_cpu.A>=0xAC)?1:0; FLAG_NZ(r&0xFF); }
label_8950:;
    /* $8950: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8956; }
label_8952:;
    /* $8952: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xAE; g_cpu.C=(g_cpu.A>=0xAE)?1:0; FLAG_NZ(r&0xFF); }
label_8954:;
    /* $8954: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_896D; }
label_8956:;
    /* $8956: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8959:;
    /* $8959: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_89C1; }
label_895B:;
    /* $895B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_895D:;
    /* $895D: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8960:;
    /* $8960: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8961:;
    /* $8961: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8964:;
    /* $8964: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8966:;
    /* $8966: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_89C1; }
label_8968:;
    /* $8968: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAF; FLAG_NZ(g_cpu.A);
label_896A:;
    /* $896A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x896A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_896D:;
    /* $896D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8970:;
    /* $8970: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8972:;
    /* $8972: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8985; }
label_8974:;
    /* $8974: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8977:;
    /* $8977: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8978:;
    /* $8978: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_897A:;
    /* $897A: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_897D:;
    /* $897D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8980:;
    /* $8980: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_8982:;
    /* $8982: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8985:;
    /* $8985: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8988:;
    /* $8988: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_898A:;
    /* $898A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8992; }
label_898C:;
    /* $898C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x098E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x898C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_898F:;
    /* $898F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8995, 14); return;
label_8992:;
    /* $8992: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0994); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8992, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8995:;
    /* $8995: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_8997:;
    /* $8997: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8999:;
    /* $8999: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_89A1; }
label_899B:;
    /* $899B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_899E:;
    /* $899E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x89A4, 14); return;
label_89A1:;
    /* $89A1: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89A4:;
    /* $89A4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_89A6:;
    /* $89A6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_89A8:;
    /* $89A8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_89C1; }
label_89AA:;
    /* $89AA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_89AC:;
    /* $89AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_89B4; }
label_89AE:;
    /* $89AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x89AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_89B1:;
    /* $89B1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x89B7, 14); return;
label_89B4:;
    /* $89B4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09B6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x89B4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_89B7:;
    /* $89B7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89BA:;
    /* $89BA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_89C1; }
label_89BC:;
    /* $89BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_89BE:;
    /* $89BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89C1:;
    /* $89C1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8947_b14(void) { /* main_hard_knuckle */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8947_b14");
#endif
    func_8947_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89B7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89B7_b14");
#endif
    func_8947_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8995_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8995_b14");
#endif
    func_8947_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89A4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89A4_b14");
#endif
    func_8947_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8956_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8956_b14");
#endif
    func_8947_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8961_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8961_b14");
#endif
    func_8947_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_896D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_896D_b14");
#endif
    func_8947_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8985_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8985_b14");
#endif
    func_8947_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8992_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8992_b14");
#endif
    func_8947_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89A1_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89A1_b14");
#endif
    func_8947_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89B4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89B4_b14");
#endif
    func_8947_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89C1_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89C1_b14");
#endif
    func_8947_b14_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89A8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89A8_b14");
#endif
    func_8947_b14_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89C2_b14_body(int _entry) { /* main_search_snake */
    switch (_entry) {
        case 1: goto label_8A79;
        case 2: goto label_8A14;
        case 3: goto label_89DB;
        case 4: goto label_89F6;
        case 5: goto label_8A0A;
        case 6: goto label_8A73;
        case 7: goto label_8A85;
    }
label_89C2:; /* main_search_snake */
    /* $89C2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89C5:;
    /* $89C5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_89C7:;
    /* $89C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_89F6; }
label_89C9:;
    /* $89C9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x12; FLAG_NZ(g_cpu.Y);
label_89CB:;
    /* $89CB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09CD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x89CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_89CE:;
    /* $89CE: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_89DB; }
label_89D0:;
    /* $89D0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89D3:;
    /* $89D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8A47; }
label_89D5:;
    /* $89D5: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89D8:;
    /* $89D8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A80, 14); return;
label_89DB:;
    /* $89DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_89DD:;
    /* $89DD: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89E0:;
    /* $89E0: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89E3:;
    /* $89E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_89E5:;
    /* $89E5: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89E8:;
    /* $89E8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89EB:;
    /* $89EB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89EE:;
    /* $89EE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_89F0:;
    /* $89F0: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89F3:;
    /* $89F3: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89F6:;
    /* $89F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89F9:;
    /* $89F9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_89FB:;
    /* $89FB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8A0A; }
label_89FD:;
    /* $89FD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x12; FLAG_NZ(g_cpu.Y);
label_89FF:;
    /* $89FF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A01); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F606(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x89FF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A02:;
    /* $8A02: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA6; FLAG_NZ(g_cpu.A);
label_8A04:;
    /* $8A04: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A07:;
    /* $8A07: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A14, 14); return;
label_8A0A:;
    /* $8A0A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x13; FLAG_NZ(g_cpu.Y);
label_8A0C:;
    /* $8A0C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A0E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F642(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A0C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A0F:;
    /* $8A0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA7; FLAG_NZ(g_cpu.A);
label_8A11:;
    /* $8A11: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A14:;
    /* $8A14: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A17:;
    /* $8A17: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A92; }
label_8A19:;
    /* $8A19: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8A48; }
label_8A1B:;
    /* $8A1B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A1E:;
    /* $8A1E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_8A20:;
    /* $8A20: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8A21:;
    /* $8A21: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A24:;
    /* $8A24: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8A25:;
    /* $8A25: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x08; g_cpu.C=(g_cpu.Y>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_8A27:;
    /* $8A27: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A2E; }
label_8A29:;
    /* $8A29: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_8A2B:;
    /* $8A2B: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A2E:;
    /* $8A2E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A31:;
    /* $8A31: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8A32:;
    /* $8A32: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A34); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8A55, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A32, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A35:;
    /* $8A35: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A36:;
    /* $8A36: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A39:;
    /* $8A39: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A3A:;
    /* $8A3A: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A3D:;
    /* $8A3D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8A78; }
label_8A3F:;
    /* $8A3F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A42:;
    /* $8A42: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0C; FLAG_NZ(g_cpu.A);
label_8A44:;
    /* $8A44: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A47:;
    /* $8A47: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8A48:;
    /* $8A48: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A4B:;
    /* $8A4B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8A4D:;
    /* $8A4D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A55; }
label_8A4F:;
    /* $8A4F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A51:;
    /* $8A51: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A54:;
    /* $8A54: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8A55:;
    /* $8A55: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA5; FLAG_NZ(g_cpu.A);
label_8A57:;
    /* $8A57: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A5A:;
    /* $8A5A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A5D:;
    /* $8A5D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8A5F:;
    /* $8A5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A69; }
label_8A61:;
    /* $8A61: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1E; FLAG_NZ(g_cpu.Y);
label_8A63:;
    /* $8A63: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A65); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A63, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A66:;
    /* $8A66: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8A6E, 14); return;
label_8A69:;
    /* $8A69: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_8A6B:;
    /* $8A6B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A6D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A6B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A6E:;
    /* $8A6E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8A78; }
label_8A70:;
    /* $8A70: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A73:;
    /* $8A73: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0C; FLAG_NZ(g_cpu.A);
label_8A75:;
    /* $8A75: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A78:;
    /* $8A78: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8A79:; /* main_spark_shock */
    /* $8A79: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A7C:;
    /* $8A7C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8A7E:;
    /* $8A7E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A8D; }
label_8A80:;
    /* $8A80: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A83:;
    /* $8A83: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8A85:;
    /* $8A85: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A8A; }
label_8A87:;
    /* $8A87: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; } return;
label_8A8A:;
    /* $8A8A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; } return;
label_8A8D:;
    /* $8A8D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A90:;
    /* $8A90: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A97; }
label_8A92:;
    /* $8A92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A94:;
    /* $8A94: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A97:;
    /* $8A97: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_89C2_b14(void) { /* main_search_snake */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89C2_b14");
#endif
    func_89C2_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A79_b14(void) { /* main_spark_shock */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A79_b14");
#endif
    func_89C2_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A14_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A14_b14");
#endif
    func_89C2_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89DB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89DB_b14");
#endif
    func_89C2_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_89F6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_89F6_b14");
#endif
    func_89C2_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A0A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A0A_b14");
#endif
    func_89C2_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A73_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A73_b14");
#endif
    func_89C2_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A85_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A85_b14");
#endif
    func_89C2_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8A98_b14(void) { /* main_shadow_blade */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A98_b14");
#endif
label_8A98:; /* main_shadow_blade */
    /* $8A98: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A9B:;
    /* $8A9B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8A9D:;
    /* $8A9D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AAC; }
label_8A9F:;
    /* $8A9F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8AA1:;
    /* $8AA1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AA9; }
label_8AA3:;
    /* $8AA3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AA5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AA3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AA6:;
    /* $8AA6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8AAC, 14); return;
label_8AA9:;
    /* $8AA9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AAB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AA9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AAC:;
    /* $8AAC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AAF:;
    /* $8AAF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_8AB1:;
    /* $8AB1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AC0; }
label_8AB3:;
    /* $8AB3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8AB5:;
    /* $8AB5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8ABD; }
label_8AB7:;
    /* $8AB7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AB9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AB7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ABA:;
    /* $8ABA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8AC0, 14); return;
label_8ABD:;
    /* $8ABD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ABF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ABD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AC0:;
    /* $8AC0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AC3:;
    /* $8AC3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD1; }
label_8AC5:;
    /* $8AC5: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AC8:;
    /* $8AC8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AFA; }
label_8ACA:;
    /* $8ACA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8ACD:;
    /* $8ACD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8ACF:;
    /* $8ACF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD7; }
label_8AD1:;
    /* $8AD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AD3:;
    /* $8AD3: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8AD6:;
    /* $8AD6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8AD7:;
    /* $8AD7: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8ADA:;
    /* $8ADA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_8ADC:;
    /* $8ADC: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8ADF:;
    /* $8ADF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE2:;
    /* $8AE2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_8AE4:;
    /* $8AE4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AF2; }
label_8AE6:;
    /* $8AE6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE9:;
    /* $8AE9: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0C; FLAG_NZ(g_cpu.A);
label_8AEB:;
    /* $8AEB: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8AEE:;
    /* $8AEE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8AF0:;
    /* $8AF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AFA; }
label_8AF2:;
    /* $8AF2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AF5:;
    /* $8AF5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_8AF7:;
    /* $8AF7: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8AFA:;
    /* $8AFA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA6C_b14_body(int _entry) { /* main_big_snakey */
    switch (_entry) {
        case 1: goto label_BB01;
        case 2: goto label_BA8C;
        case 3: goto label_BAEE;
        case 4: goto label_BAF8;
        case 5: goto label_BAFE;
        case 6: goto label_BB16;
        case 7: goto label_BB27;
        case 8: goto label_BB2E;
        case 9: goto label_BAB5;
    }
label_BA6C:; /* main_big_snakey */
    /* $BA6C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA6F:;
    /* $BA6F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BA71:;
    /* $BA71: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BA8C; }
label_BA73:;
    /* $BA73: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA76:;
    /* $BA76: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE4); FLAG_NZ(g_cpu.A);
label_BA78:;
    /* $BA78: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE6); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA7A:;
    /* $BA7A: 85 */ maybe_trigger_vblank(3); nes_write(0xE4, g_cpu.A);
label_BA7C:;
    /* $BA7C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_BA7E:;
    /* $BA7E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BA7F:;
    /* $BA7F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBB51 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA82:;
    /* $BA82: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA85:;
    /* $BA85: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_BA87:;
    /* $BA87: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA8A:;
    /* $BA8A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BB01; }
label_BA8C:;
    /* $BA8C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA8F:;
    /* $BA8F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAFE; }
label_BA91:;
    /* $BA91: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA94:;
    /* $BA94: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_BA96:;
    /* $BA96: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BA99:;
    /* $BA99: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA9C:;
    /* $BA9C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAF8; }
label_BA9E:;
    /* $BA9E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AA0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBA9E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAA1:;
    /* $BAA1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xBA; FLAG_NZ(g_cpu.A);
label_BAA3:;
    /* $BAA3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AA5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAA3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAA6:;
    /* $BAA6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAA9:;
    /* $BAA9: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BAAC:;
    /* $BAAC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAAF:;
    /* $BAAF: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BAB2:;
    /* $BAB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BAB5:;
    /* $BAB5: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BAB8:;
    /* $BAB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_BABA:;
    /* $BABA: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BABD:;
    /* $BABD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8F; FLAG_NZ(g_cpu.A);
label_BABF:;
    /* $BABF: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BAC2:;
    /* $BAC2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BAC4:;
    /* $BAC4: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BAC7:;
    /* $BAC7: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_BAC9:;
    /* $BAC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_BACB:;
    /* $BACB: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BACE:;
    /* $BACE: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_BAD0:;
    /* $BAD0: 84 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.Y);
label_BAD2:;
    /* $BAD2: 86 */ maybe_trigger_vblank(3); nes_write(0x0E, g_cpu.X);
label_BAD4:;
    /* $BAD4: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_BAD6:;
    /* $BAD6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AD8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC63(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBAD6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BAD9:;
    /* $BAD9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x0F); FLAG_NZ(g_cpu.Y);
label_BADB:;
    /* $BADB: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0E); FLAG_NZ(g_cpu.X);
label_BADD:;
    /* $BADD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0C); FLAG_NZ(g_cpu.A);
label_BADF:;
    /* $BADF: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BAE2:;
    /* $BAE2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAE5:;
    /* $BAE5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BAEE; }
label_BAE7:;
    /* $BAE7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_BAE9:;
    /* $BAE9: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BAEC:;
    /* $BAEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BB01; }
label_BAEE:;
    /* $BAEE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BAF0:;
    /* $BAF0: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BAF3:;
    /* $BAF3: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAF6:;
    /* $BAF6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BB01; }
label_BAF8:;
    /* $BAF8: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BAFB:;
    /* $BAFB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBB01, 14); return;
label_BAFE:;
    /* $BAFE: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB01:;
    /* $BB01: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB04:;
    /* $BB04: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BB05:;
    /* $BB05: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B07); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBB05, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BB08:;
    /* $BB08: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BB09:;
    /* $BB09: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB0C:;
    /* $BB0C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB0F:;
    /* $BB0F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BB2E; }
label_BB11:;
    /* $BB11: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB14:;
    /* $BB14: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_BB16:;
    /* $BB16: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0310 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB19:;
    /* $BB19: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BB27; }
label_BB1B:;
    /* $BB1B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03D0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB1E:;
    /* $BB1E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_BB20:;
    /* $BB20: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BB27; }
label_BB22:;
    /* $BB22: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB24:;
    /* $BB24: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BB27:;
    /* $BB27: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BB28:;
    /* $BB28: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BB16;
    }
label_BB2A:;
    /* $BB2A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_BB2C:;
    /* $BB2C: 85 */ maybe_trigger_vblank(3); nes_write(0x55, g_cpu.A);
label_BB2E:;
    /* $BB2E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BB30:;
    /* $BB30: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BB33:;
    /* $BB33: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA6C_b14(void) { /* main_big_snakey */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA6C_b14");
#endif
    func_BA6C_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB01_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB01_b14");
#endif
    func_BA6C_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA8C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA8C_b14");
#endif
    func_BA6C_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAEE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAEE_b14");
#endif
    func_BA6C_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAF8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAF8_b14");
#endif
    func_BA6C_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAFE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAFE_b14");
#endif
    func_BA6C_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB16_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB16_b14");
#endif
    func_BA6C_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB27_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB27_b14");
#endif
    func_BA6C_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB2E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB2E_b14");
#endif
    func_BA6C_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BAB5_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BAB5_b14");
#endif
    func_BA6C_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BBBE_b14_body(int _entry) { /* main_tama_A */
    switch (_entry) {
        case 1: goto label_BC01;
        case 2: goto label_BBE9;
        case 3: goto label_BBF5;
        case 4: goto label_BC11;
        case 5: goto label_BC1D;
        case 6: goto label_BC1E;
        case 7: goto label_BC3E;
        case 8: goto label_BC44;
        case 9: goto label_BC52;
        case 10: goto label_BCA6;
    }
label_BBBE:; /* main_tama_A */
    /* $BBBE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBC1:;
    /* $BBC1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_BBC3:;
    /* $BBC3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1BBB), 14); return; }
label_BBC5:;
    /* $BBC5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBC8:;
    /* $BBC8: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_BBC9:;
    /* $BBC9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BCB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBBC9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BBCC:;
    /* $BBCC: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BBCD:;
    /* $BBCD: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBD0:;
    /* $BBD0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBD3:;
    /* $BBD3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BBF5; }
label_BBD5:;
    /* $BBD5: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBD8:;
    /* $BBD8: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBDB:;
    /* $BBDB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_BBDD:;
    /* $BBDD: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBE0:;
    /* $BBE0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x63; FLAG_NZ(g_cpu.A);
label_BBE2:;
    /* $BBE2: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBE5:;
    /* $BBE5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_BBE7:;
    /* $BBE7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BBE9:;
    /* $BBE9: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBEC:;
    /* $BBEC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BBED:;
    /* $BBED: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BBE9;
    }
label_BBEF:;
    /* $BBEF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_BBF1:;
    /* $BBF1: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBF4:;
    /* $BBF4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BBF5:;
    /* $BBF5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBF8:;
    /* $BBF8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BBFA:;
    /* $BBFA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_BC1E; }
label_BBFC:;
    /* $BBFC: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BBFF:;
    /* $BBFF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_BC01:;
    /* $BC01: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC04:;
    /* $BC04: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BC11; }
label_BC06:;
    /* $BC06: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC09:;
    /* $BC09: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCF; g_cpu.C=(g_cpu.A>=0xCF)?1:0; FLAG_NZ(r&0xFF); }
label_BC0B:;
    /* $BC0B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC1D; }
label_BC0D:;
    /* $BC0D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD0; g_cpu.C=(g_cpu.A>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_BC0F:;
    /* $BC0F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC1D; }
label_BC11:;
    /* $BC11: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BC12:;
    /* $BC12: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_BC14:;
    /* $BC14: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BC01;
    }
label_BC16:;
    /* $BC16: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_BC18:;
    /* $BC18: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC1D; }
label_BC1A:;
    /* $BC1A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC1D:;
    /* $BC1D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BC1E:;
    /* $BC1E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC21:;
    /* $BC21: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC24:;
    /* $BC24: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC44; }
label_BC26:;
    /* $BC26: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC29:;
    /* $BC29: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC2C:;
    /* $BC2C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BC2E:;
    /* $BC2E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC3E; }
label_BC30:;
    /* $BC30: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC33:;
    /* $BC33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BC35:;
    /* $BC35: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BC38:;
    /* $BC38: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BC3B:;
    /* $BC3B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x54; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC3D:;
    /* $BC3D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BC3E:;
    /* $BC3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BC40:;
    /* $BC40: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BC43:;
    /* $BC43: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BC44:;
    /* $BC44: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC47:;
    /* $BC47: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BC52; }
label_BC49:;
    /* $BC49: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC4C:;
    /* $BC4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BC4E:;
    /* $BC4E: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BC51:;
    /* $BC51: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BC52:;
    /* $BC52: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC55:;
    /* $BC55: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCA6; }
label_BC57:;
    /* $BC57: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC5A:;
    /* $BC5A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BC5C:;
    /* $BC5C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCA6; }
label_BC5E:;
    /* $BC5E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C60); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC5E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC61:;
    /* $BC61: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_BCA6; }
label_BC63:;
    /* $BC63: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCF; FLAG_NZ(g_cpu.A);
label_BC65:;
    /* $BC65: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C67); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC65, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BC68:;
    /* $BC68: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC6B:;
    /* $BC6B: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC6E:;
    /* $BC6E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC71:;
    /* $BC71: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC74:;
    /* $BC74: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC77:;
    /* $BC77: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC7A:;
    /* $BC7A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_BC7C:;
    /* $BC7C: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC7F:;
    /* $BC7F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_BC81:;
    /* $BC81: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC84:;
    /* $BC84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8D; FLAG_NZ(g_cpu.A);
label_BC86:;
    /* $BC86: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC89:;
    /* $BC89: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BC8B:;
    /* $BC8B: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC8E:;
    /* $BC8E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BC90:;
    /* $BC90: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC93:;
    /* $BC93: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BC95:;
    /* $BC95: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC98:;
    /* $BC98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_BC9A:;
    /* $BC9A: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BC9D:;
    /* $BC9D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C9F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBC9D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCA0:;
    /* $BCA0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCA3:;
    /* $BCA3: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BCA6:;
    /* $BCA6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BBBE_b14(void) { /* main_tama_A */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBBE_b14");
#endif
    func_BBBE_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC01_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC01_b14");
#endif
    func_BBBE_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BBE9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBE9_b14");
#endif
    func_BBBE_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BBF5_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBF5_b14");
#endif
    func_BBBE_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC11_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC11_b14");
#endif
    func_BBBE_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC1D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1D_b14");
#endif
    func_BBBE_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC1E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC1E_b14");
#endif
    func_BBBE_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC3E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC3E_b14");
#endif
    func_BBBE_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC44_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC44_b14");
#endif
    func_BBBE_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC52_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC52_b14");
#endif
    func_BBBE_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCA6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCA6_b14");
#endif
    func_BBBE_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCA7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCA7_b14");
#endif
label_BCA7:;
    /* $BCA7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BCA8_b14_body(int _entry) { /* main_tama_B */
    switch (_entry) {
        case 1: goto label_BCF6;
        case 2: goto label_BCBB;
        case 3: goto label_BCCB;
        case 4: goto label_BCD7;
        case 5: goto label_BCD8;
        case 6: goto label_BCE3;
        case 7: goto label_BD1E;
        case 8: goto label_BD2A;
    }
label_BCA8:; /* main_tama_B */
    /* $BCA8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCAB:;
    /* $BCAB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_BCAD:;
    /* $BCAD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1CA7), 14); return; }
label_BCAF:;
    /* $BCAF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCB2:;
    /* $BCB2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_BCB4:;
    /* $BCB4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCD8; }
label_BCB6:;
    /* $BCB6: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BCB9:;
    /* $BCB9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_BCBB:;
    /* $BCBB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCBE:;
    /* $BCBE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BCCB; }
label_BCC0:;
    /* $BCC0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCC3:;
    /* $BCC3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCF; g_cpu.C=(g_cpu.A>=0xCF)?1:0; FLAG_NZ(r&0xFF); }
label_BCC5:;
    /* $BCC5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCD7; }
label_BCC7:;
    /* $BCC7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD0; g_cpu.C=(g_cpu.A>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_BCC9:;
    /* $BCC9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCD7; }
label_BCCB:;
    /* $BCCB: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BCCC:;
    /* $BCCC: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_BCCE:;
    /* $BCCE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BCBB;
    }
label_BCD0:;
    /* $BCD0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x54); FLAG_NZ(g_cpu.A);
label_BCD2:;
    /* $BCD2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCD7; }
label_BCD4:;
    /* $BCD4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCD7:;
    /* $BCD7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BCD8:;
    /* $BCD8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCDB:;
    /* $BCDB: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCDE:;
    /* $BCDE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BCE3; }
label_BCE0:;
    /* $BCE0: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BCE3:;
    /* $BCE3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCE6:;
    /* $BCE6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BCE8:;
    /* $BCE8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BCD7;
    }
label_BCEA:;
    /* $BCEA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCED:;
    /* $BCED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BCD7;
    }
label_BCEF:;
    /* $BCEF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_BCF1:;
    /* $BCF1: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_BCF3:;
    /* $BCF3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CF5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCF3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCF6:;
    /* $BCF6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CF8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCF6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BCF9:;
    /* $BCF9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_BD58; }
label_BCFB:;
    /* $BCFB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_BCFD:;
    /* $BCFD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CFF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBCFD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BD00:;
    /* $BD00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BD02:;
    /* $BD02: 99 */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD05:;
    /* $BD05: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD08:;
    /* $BD08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCB; FLAG_NZ(g_cpu.A);
label_BD0A:;
    /* $BD0A: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD0D:;
    /* $BD0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_BD0F:;
    /* $BD0F: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD12:;
    /* $BD12: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD15:;
    /* $BD15: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD18:;
    /* $BD18: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD1B:;
    /* $BD1B: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD1E:;
    /* $BD1E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD21:;
    /* $BD21: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD24:;
    /* $BD24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD27:;
    /* $BD27: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD2A:;
    /* $BD2A: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_BD2C:;
    /* $BD2C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x10); FLAG_NZ(g_cpu.X);
label_BD2E:;
    /* $BD2E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD59 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD31:;
    /* $BD31: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD34:;
    /* $BD34: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD5C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD37:;
    /* $BD37: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD3A:;
    /* $BD3A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD5F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD3D:;
    /* $BD3D: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD40:;
    /* $BD40: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD62 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD43:;
    /* $BD43: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD46:;
    /* $BD46: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_BD48:;
    /* $BD48: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD4B:;
    /* $BD4B: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD4E:;
    /* $BD4E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_BD50:;
    /* $BD50: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD52:;
    /* $BD52: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BCF6;
    }
label_BD54:;
    /* $BD54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BD56:;
    /* $BD56: 85 */ maybe_trigger_vblank(3); nes_write(0x54, g_cpu.A);
label_BD58:;
    /* $BD58: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BCA8_b14(void) { /* main_tama_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCA8_b14");
#endif
    func_BCA8_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCF6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCF6_b14");
#endif
    func_BCA8_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCBB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCBB_b14");
#endif
    func_BCA8_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCCB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCCB_b14");
#endif
    func_BCA8_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCD7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCD7_b14");
#endif
    func_BCA8_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCD8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCD8_b14");
#endif
    func_BCA8_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCE3_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCE3_b14");
#endif
    func_BCA8_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD1E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD1E_b14");
#endif
    func_BCA8_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD2A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD2A_b14");
#endif
    func_BCA8_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD65_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BD8A;
        case 2: goto label_BD76;
        case 3: goto label_BD85;
        case 4: goto label_BD94;
    }
label_BD65:;
    /* $BD65: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_BD67:;
    /* $BD67: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D69); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBD67, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BD6A:;
    /* $BD6A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BD76; }
label_BD6C:;
    /* $BD6C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_BD6E:;
    /* $BD6E: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BD71:;
    /* $BD71: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_BD73:;
    /* $BD73: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BD76:;
    /* $BD76: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD79:;
    /* $BD79: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_BD7B:;
    /* $BD7B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BD85; }
label_BD7D:;
    /* $BD7D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_BD7F:;
    /* $BD7F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D81); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBD7F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BD82:;
    /* $BD82: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBD8A, 14); return;
label_BD85:;
    /* $BD85: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x09; FLAG_NZ(g_cpu.Y);
label_BD87:;
    /* $BD87: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D89); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBD87, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BD8A:;
    /* $BD8A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BD94; }
label_BD8C:;
    /* $BD8C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD8F:;
    /* $BD8F: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_BD91:;
    /* $BD91: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BD94:;
    /* $BD94: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BD65_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD65_b14");
#endif
    func_BD65_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD8A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD8A_b14");
#endif
    func_BD65_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD76_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD76_b14");
#endif
    func_BD65_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD85_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD85_b14");
#endif
    func_BD65_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD94_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD94_b14");
#endif
    func_BD65_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD95_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BDAA;
        case 2: goto label_BDAD;
        case 3: goto label_BDE6;
    }
label_BD95:;
    /* $BD95: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD98:;
    /* $BD98: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BDAD; }
label_BD9A:;
    /* $BD9A: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD9D:;
    /* $BD9D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D9F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBD9D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDA0:;
    /* $BDA0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDA3:;
    /* $BDA3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_BDA5:;
    /* $BDA5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BDAA; }
label_BDA7:;
    /* $BDA7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; } return;
label_BDAA:;
    /* $BDAA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; } return;
label_BDAD:;
    /* $BDAD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x12; FLAG_NZ(g_cpu.Y);
label_BDAF:;
    /* $BDAF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DB1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDAF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDB2:;
    /* $BDB2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_BDB4:;
    /* $BDB4: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDB7:;
    /* $BDB7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_BDDF; }
label_BDB9:;
    /* $BDB9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BDBB:;
    /* $BDBB: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDBE:;
    /* $BDBE: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BDC1:;
    /* $BDC1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BDF3; }
label_BDC3:;
    /* $BDC3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_BDC5:;
    /* $BDC5: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDC8:;
    /* $BDC8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_BDCA:;
    /* $BDCA: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDCD:;
    /* $BDCD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_BDCF:;
    /* $BDCF: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDD2:;
    /* $BDD2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF1; FLAG_NZ(g_cpu.A);
label_BDD4:;
    /* $BDD4: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDD7:;
    /* $BDD7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BDD9:;
    /* $BDD9: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDDC:;
    /* $BDDC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DDE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDDC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDDF:;
    /* $BDDF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDE2:;
    /* $BDE2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_BDE4:;
    /* $BDE4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BDEE; }
label_BDE6:;
    /* $BDE6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1E; FLAG_NZ(g_cpu.Y);
label_BDE8:;
    /* $BDE8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DEA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDE8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDEB:;
    /* $BDEB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBDF3, 14); return;
label_BDEE:;
    /* $BDEE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_BDF0:;
    /* $BDF0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DF2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDF0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDF3:;
    /* $BDF3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BDF5:;
    /* $BDF5: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDF8:;
    /* $BDF8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BD95_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD95_b14");
#endif
    func_BD95_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDAA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDAA_b14");
#endif
    func_BD95_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDAD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDAD_b14");
#endif
    func_BD95_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDE6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDE6_b14");
#endif
    func_BD95_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6E8_b14_body(int _entry) { /* main_doc_robot_intro */
    switch (_entry) {
        case 1: goto label_B73C;
        case 2: goto label_B751;
        case 3: goto label_B752;
    }
label_B6E8:; /* main_doc_robot_intro */
    /* $B6E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6EA:;
    /* $B6EA: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B6ED:;
    /* $B6ED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6F0:;
    /* $B6F0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_B6F2:;
    /* $B6F2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_B752; }
label_B6F4:;
    /* $B6F4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_B6F6:;
    /* $B6F6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x9C; g_cpu.C=(g_cpu.A>=0x9C)?1:0; FLAG_NZ(r&0xFF); }
label_B6F8:;
    /* $B6F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_B751; }
label_B6FA:;
    /* $B6FA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B6FD:;
    /* $B6FD: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_B6FF:;
    /* $B6FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B702:;
    /* $B702: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_B704:;
    /* $B704: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B707:;
    /* $B707: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B709:;
    /* $B709: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B70A:;
    /* $B70A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7FB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B70D:;
    /* $B70D: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B710:;
    /* $B710: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCA; FLAG_NZ(g_cpu.A);
label_B712:;
    /* $B712: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B715:;
    /* $B715: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1C; FLAG_NZ(g_cpu.A);
label_B717:;
    /* $B717: 9D */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B71A:;
    /* $B71A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB843 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B71D:;
    /* $B71D: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B720:;
    /* $B720: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB84B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B723:;
    /* $B723: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B726:;
    /* $B726: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1728); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB726, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B729:;
    /* $B729: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB81B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B72C:;
    /* $B72C: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_B72E:;
    /* $B72E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1730); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB72E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B731:;
    /* $B731: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_B733:;
    /* $B733: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B736:;
    /* $B736: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B737:;
    /* $B737: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B738:;
    /* $B738: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B739:;
    /* $B739: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B73A:;
    /* $B73A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_B73C:;
    /* $B73C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB823 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B73F:;
    /* $B73F: 9D */ maybe_trigger_vblank(5); nes_write((0x061C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B742:;
    /* $B742: 9D */ maybe_trigger_vblank(5); nes_write((0x063C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B745:;
    /* $B745: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B746:;
    /* $B746: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B747:;
    /* $B747: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_B749:;
    /* $B749: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B73C;
    }
label_B74B:;
    /* $B74B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_B74D:;
    /* $B74D: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_B74F:;
    /* $B74F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_B751:;
    /* $B751: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B752:;
    /* $B752: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1754); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xB7DF, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB752, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B755:;
    /* $B755: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B758:;
    /* $B758: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x175A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB758, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B75B:;
    /* $B75B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x61; FLAG_NZ(g_cpu.A);
label_B75D:;
    /* $B75D: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B760:;
    /* $B760: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B763:;
    /* $B763: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B766:;
    /* $B766: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B769:;
    /* $B769: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B76C:;
    /* $B76C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B76F:;
    /* $B76F: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B772:;
    /* $B772: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B774:;
    /* $B774: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B777:;
    /* $B777: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B779:;
    /* $B779: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B77C:;
    /* $B77C: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B77F:;
    /* $B77F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B781:;
    /* $B781: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B784:;
    /* $B784: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_B786:;
    /* $B786: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B789:;
    /* $B789: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B78B:;
    /* $B78B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B78C:;
    /* $B78C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7F3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B78F:;
    /* $B78F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_B791:;
    /* $B791: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1793); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB791, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B794:;
    /* $B794: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B797:;
    /* $B797: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_B799:;
    /* $B799: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B79A:;
    /* $B79A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB803 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B79D:;
    /* $B79D: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_B79F:;
    /* $B79F: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B7A0:;
    /* $B7A0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B7A1:;
    /* $B7A1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B7A2:;
    /* $B7A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_B7A4:;
    /* $B7A4: 8D */ maybe_trigger_vblank(4); nes_write(0x061C, g_cpu.A);
label_B7A7:;
    /* $B7A7: 8D */ maybe_trigger_vblank(4); nes_write(0x061D, g_cpu.A);
label_B7AA:;
    /* $B7AA: 8D */ maybe_trigger_vblank(4); nes_write(0x063C, g_cpu.A);
label_B7AD:;
    /* $B7AD: 8D */ maybe_trigger_vblank(4); nes_write(0x063D, g_cpu.A);
label_B7B0:;
    /* $B7B0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB80B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7B3:;
    /* $B7B3: 8D */ maybe_trigger_vblank(4); nes_write(0x061E, g_cpu.A);
label_B7B6:;
    /* $B7B6: 8D */ maybe_trigger_vblank(4); nes_write(0x063E, g_cpu.A);
label_B7B9:;
    /* $B7B9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB80C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7BC:;
    /* $B7BC: 8D */ maybe_trigger_vblank(4); nes_write(0x061F, g_cpu.A);
label_B7BF:;
    /* $B7BF: 8D */ maybe_trigger_vblank(4); nes_write(0x063F, g_cpu.A);
label_B7C2:;
    /* $B7C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_B7C4:;
    /* $B7C4: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_B7C6:;
    /* $B7C6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; } return;
}

void func_B6E8_b14(void) { /* main_doc_robot_intro */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E8_b14");
#endif
    func_B6E8_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B73C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B73C_b14");
#endif
    func_B6E8_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B751_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B751_b14");
#endif
    func_B6E8_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B752_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B752_b14");
#endif
    func_B6E8_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A00F_b14(void) { /* main_wily_machine_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A00F_b14");
#endif
label_A00F:; /* main_wily_machine_B */
    /* $A00F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A011:;
    /* $A011: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A014:;
    /* $A014: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x90; g_cpu.C=(g_cpu.A>=0x90)?1:0; FLAG_NZ(r&0xFF); }
label_A016:;
    /* $A016: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A01B; }
label_A018:;
    /* $A018: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; } return;
label_A01B:;
    /* $A01B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A01D:;
    /* $A01D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x001F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA01D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A020:;
    /* $A020: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A022:;
    /* $A022: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A025:;
    /* $A025: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A026:;
    /* $A026: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x52; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A028:;
    /* $A028: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A029:;
    /* $A029: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA176 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A02C:;
    /* $A02C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A032:;
    /* $A032: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x99; g_cpu.C=(g_cpu.A>=0x99)?1:0; FLAG_NZ(r&0xFF); }
label_A037:;
    /* $A037: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A04A; }
label_A039:; /* needle_man_init */
    /* $A039: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03C:;
    /* $A03C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A03E:;
    /* $A03E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05F; }
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA178 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A012_b14_body(int _entry) { /* main_gemini_man_j */
    switch (_entry) {
        case 1: goto label_A01B;
        case 2: goto label_A026;
    }
label_A012:; /* main_gemini_man_j */
    /* $A012: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A014:;
    /* $A014: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x90; g_cpu.C=(g_cpu.A>=0x90)?1:0; FLAG_NZ(r&0xFF); }
label_A016:;
    /* $A016: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A01B; }
label_A018:;
    /* $A018: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; } return;
label_A01B:;
    /* $A01B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A01D:;
    /* $A01D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x001F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA01D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A020:;
    /* $A020: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A022:;
    /* $A022: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A025:;
    /* $A025: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A026:;
    /* $A026: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x52; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A028:;
    /* $A028: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A029:;
    /* $A029: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA176 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A02C:;
    /* $A02C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A032:;
    /* $A032: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x99; g_cpu.C=(g_cpu.A>=0x99)?1:0; FLAG_NZ(r&0xFF); }
label_A037:;
    /* $A037: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A04A; }
label_A039:; /* needle_man_init */
    /* $A039: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03C:;
    /* $A03C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A03E:;
    /* $A03E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05F; }
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA178 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A012_b14(void) { /* main_gemini_man_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A012_b14");
#endif
    func_A012_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A01B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A01B_b14");
#endif
    func_A012_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A026_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A026_b14");
#endif
    func_A012_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A02A_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A032;
    }
label_A02A:;
    /* $A02A: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xA1 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A02C:;
    /* $A02C: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A032:;
    /* $A032: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x99; g_cpu.C=(g_cpu.A>=0x99)?1:0; FLAG_NZ(r&0xFF); }
label_A037:;
    /* $A037: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A04A; }
label_A039:; /* needle_man_init */
    /* $A039: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03C:;
    /* $A03C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A03E:;
    /* $A03E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05F; }
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA178 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A02A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A02A_b14");
#endif
    func_A02A_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A032_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A032_b14");
#endif
    func_A02A_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A033_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A033_b14");
#endif
label_A033:;
    /* $A033: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x05; g_cpu.C=(g_cpu.Y>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A035:;
    /* $A035: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x99; g_cpu.C=(g_cpu.A>=0x99)?1:0; FLAG_NZ(r&0xFF); }
label_A037:;
    /* $A037: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A04A; }
label_A039:; /* needle_man_init */
    /* $A039: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03C:;
    /* $A03C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A03E:;
    /* $A03E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05F; }
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA178 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A036_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A036_b14");
#endif
label_A036:;
    /* $A036: 99 */ maybe_trigger_vblank(5); nes_write((0x11D0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A039:; /* needle_man_init */
    /* $A039: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03C:;
    /* $A03C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A03E:;
    /* $A03E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05F; }
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA178 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A042_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A042_b14");
#endif
label_A042:;
    /* $A042: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x98); FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA178 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A047:;
    /* $A047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A045_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A07A;
        case 2: goto label_A098;
        case 3: goto label_A054;
        case 4: goto label_A04A;
        case 5: goto label_A05F;
        case 6: goto label_A075;
        case 7: goto label_A091;
        case 8: goto label_A0A1;
        case 9: goto label_A0BC;
        case 10: goto label_A048;
    }
label_A045:;
    /* $A045: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A046:;
    /* $A046: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A048:;
    /* $A048: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A04A:;
    /* $A04A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A04F:;
    /* $A04F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A054; }
label_A051:;
    /* $A051: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA0D3, 14); return;
label_A054:; /* main_giant_met */
    /* $A054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A057:;
    /* $A057: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A059:;
    /* $A059: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A05F; }
label_A05B:;
    /* $A05B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A05E:;
    /* $A05E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0063); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA061, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A064:;
    /* $A064: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A066:;
    /* $A066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A06B:;
    /* $A06B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A075; }
label_A06D:;
    /* $A06D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A06F:;
    /* $A06F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0071); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A072:;
    /* $A072: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA07A, 14); return;
label_A075:;
    /* $A075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A077:;
    /* $A077: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0079); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA077, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A07A:;
    /* $A07A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A080:;
    /* $A080: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A083:;
    /* $A083: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A085:;
    /* $A085: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A091; }
label_A087:;
    /* $A087: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD6; g_cpu.C=(g_cpu.A>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A08C:;
    /* $A08C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A08E:;
    /* $A08E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA098, 14); return;
label_A091:;
    /* $A091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A094:;
    /* $A094: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x2A; g_cpu.C=(g_cpu.A>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_A096:;
    /* $A096: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0A1; }
label_A098:;
    /* $A098: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A09B:;
    /* $A09B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_A09D:;
    /* $A09D: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0A0:;
    /* $A0A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0A1:;
    /* $A0A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A0A3:;
    /* $A0A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A0A5:;
    /* $A0A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0BC; }
label_A0A7:;
    /* $A0A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AA:;
    /* $A0AA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A0BC:;
    /* $A0BC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A045_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A045_b14");
#endif
    func_A045_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A07A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A07A_b14");
#endif
    func_A045_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A098_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A098_b14");
#endif
    func_A045_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A054_b14(void) { /* main_giant_met */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A054_b14");
#endif
    func_A045_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A04A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A04A_b14");
#endif
    func_A045_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A05F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A05F_b14");
#endif
    func_A045_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A075_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A075_b14");
#endif
    func_A045_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A091_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A091_b14");
#endif
    func_A045_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0A1_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0A1_b14");
#endif
    func_A045_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0BC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0BC_b14");
#endif
    func_A045_b14_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A048_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A048_b14");
#endif
    func_A045_b14_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0A9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0A9_b14");
#endif
label_A0A9:;
    /* $A0A9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x98); FLAG_NZ(g_cpu.A);
label_A0AB:;
    /* $A0AB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0AE:;
    /* $A0AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0B1:;
    /* $A0B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA8; FLAG_NZ(g_cpu.A);
label_A0B3:;
    /* $A0B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0B6:;
    /* $A0B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B020_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B020_b14");
#endif
label_B020:;
    /* $B020: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_B022:;
    /* $B022: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x9D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B024:;
    /* $B024: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B026:;
    /* $B026: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B029:;
    /* $B029: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_B02B:;
    /* $B02B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B04C; }
label_B02D:;
    /* $B02D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B02F:;
    /* $B02F: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B032:;
    /* $B032: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B035:;
    /* $B035: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B038:;
    /* $B038: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B03B:;
    /* $B03B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03C0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B03E:;
    /* $B03E: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B041:;
    /* $B041: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x100C), 14); return; }
label_B043:;
    /* $B043: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B046:;
    /* $B046: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_B048:;
    /* $B048: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x104A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB048, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B04B:;
    /* $B04B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B04C:;
    /* $B04C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_B04E:;
    /* $B04E: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B051:;
    /* $B051: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B053:;
    /* $B053: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B056:;
    /* $B056: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1058); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB056, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B059:;
    /* $B059: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B05C:;
    /* $B05C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x100C), 14); return; }
label_B05E:;
    /* $B05E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B060:;
    /* $B060: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B063:;
    /* $B063: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B066:;
    /* $B066: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B069:;
    /* $B069: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B06C:;
    /* $B06C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B06F:;
    /* $B06F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x94; FLAG_NZ(g_cpu.A);
label_B071:;
    /* $B071: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B074:;
    /* $B074: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B076:;
    /* $B076: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B079:;
    /* $B079: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_B07B:;
    /* $B07B: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B07E:;
    /* $B07E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BDF6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDF6_b14");
#endif
label_BDF6:;
    /* $BDF6: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_BDF8:;
    /* $BDF8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BD33_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD33_b14");
#endif
label_BD33:;
    /* $BD33: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD35:;
    /* $BD35: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x99BD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD38:;
    /* $BD38: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B900_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B900_b14");
#endif
label_B900:;
    /* $B900: E2 */ maybe_trigger_vblank(2); /* NOP */
label_B902:;
    /* $B902: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B903:;
    /* $B903: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B906:;
    /* $B906: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B92A; }
label_B908:;
    /* $B908: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B90B:;
    /* $B90B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B90D:;
    /* $B90D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B90E:;
    /* $B90E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_B911:;
    /* $B911: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B912:;
    /* $B912: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB92B + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B915:;
    /* $B915: 8D */ maybe_trigger_vblank(4); nes_write(0x0340, g_cpu.A);
label_B918:;
    /* $B918: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_B91B:;
    /* $B91B: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB92D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B91E:;
    /* $B91E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_B921:;
    /* $B921: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB92F + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B927:;
    /* $B927: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_B92A:;
    /* $B92A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99A8_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99A8_b14");
#endif
label_99A8:;
    /* $99A8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_99A9:;
    /* $99A9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_99AB:;
    /* $99AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19AD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99AE:;
    /* $99AE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x99B6, 14); return;
}

void func_B99D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B99D_b14");
#endif
label_B99D:;
    /* $B99D: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xBD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B99F:;
    /* $B99F: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B9A1:;
    /* $B9A1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_B9A3:;
    /* $B9A3: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9A6:;
    /* $B9A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B9A8:;
    /* $B9A8: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9AB:;
    /* $B9AB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BD03_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BD05;
        case 2: goto label_BD58;
    }
label_BD03:;
    /* $BD03: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_BD05:;
    /* $BD05: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD08:;
    /* $BD08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCB; FLAG_NZ(g_cpu.A);
label_BD0A:;
    /* $BD0A: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD0D:;
    /* $BD0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_BD0F:;
    /* $BD0F: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD12:;
    /* $BD12: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD15:;
    /* $BD15: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD18:;
    /* $BD18: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD1B:;
    /* $BD1B: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD1E:;
    /* $BD1E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD21:;
    /* $BD21: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD24:;
    /* $BD24: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD27:;
    /* $BD27: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD2A:;
    /* $BD2A: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_BD2C:;
    /* $BD2C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x10); FLAG_NZ(g_cpu.X);
label_BD2E:;
    /* $BD2E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD59 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD31:;
    /* $BD31: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD34:;
    /* $BD34: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD5C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD37:;
    /* $BD37: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD3A:;
    /* $BD3A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD5F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD3D:;
    /* $BD3D: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD40:;
    /* $BD40: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD62 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BD43:;
    /* $BD43: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD46:;
    /* $BD46: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_BD48:;
    /* $BD48: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD4B:;
    /* $BD4B: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BD4E:;
    /* $BD4E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_BD50:;
    /* $BD50: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD52:;
    /* $BD52: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x1CF6), 14); return; }
label_BD54:;
    /* $BD54: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BD56:;
    /* $BD56: 85 */ maybe_trigger_vblank(3); nes_write(0x54, g_cpu.A);
label_BD58:;
    /* $BD58: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BD03_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD03_b14");
#endif
    func_BD03_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD05_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD05_b14");
#endif
    func_BD03_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD58_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD58_b14");
#endif
    func_BD03_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDBD_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BDF3;
        case 2: goto label_BDDF;
        case 3: goto label_BDEE;
    }
label_BDBD:;
    /* $BDBD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xDE); FLAG_NZ(g_cpu.A);
label_BDBF:;
    /* $BDBF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DC1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD005, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDBF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDC2:;
    /* $BDC2: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1D6D), 14); return; }
label_BDC4:;
    /* $BDC4: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x209D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BDC7:;
    /* $BDC7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_BDC9:;
    /* $BDC9: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_BDCA:;
    /* $BDCA: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDCD:;
    /* $BDCD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x05; FLAG_NZ(g_cpu.A);
label_BDCF:;
    /* $BDCF: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDD2:;
    /* $BDD2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF1; FLAG_NZ(g_cpu.A);
label_BDD4:;
    /* $BDD4: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDD7:;
    /* $BDD7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BDD9:;
    /* $BDD9: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDDC:;
    /* $BDDC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DDE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDDC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDDF:;
    /* $BDDF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDE2:;
    /* $BDE2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_BDE4:;
    /* $BDE4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BDEE; }
label_BDE6:;
    /* $BDE6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1E; FLAG_NZ(g_cpu.Y);
label_BDE8:;
    /* $BDE8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DEA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDE8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDEB:;
    /* $BDEB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xBDF3, 14); return;
label_BDEE:;
    /* $BDEE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_BDF0:;
    /* $BDF0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1DF2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBDF0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BDF3:;
    /* $BDF3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BDF5:;
    /* $BDF5: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_BDF8:;
    /* $BDF8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BDBD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDBD_b14");
#endif
    func_BDBD_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDF3_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDF3_b14");
#endif
    func_BDBD_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDDF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDDF_b14");
#endif
    func_BDBD_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDEE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDEE_b14");
#endif
    func_BDBD_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE56_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BE68;
        case 2: goto label_BE6C;
        case 3: goto label_BE72;
        case 4: goto label_BE8D;
        case 5: goto label_BE98;
        case 6: goto label_BE5C;
        case 7: goto label_BE62;
        case 8: goto label_BE66;
    }
label_BE56:;
    /* $BE56: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_BE58:;
    /* $BE58: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BE5A:;
    /* $BE5A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE6C; }
label_BE5C:;
    /* $BE5C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_BE5E:;
    /* $BE5E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_BE60:;
    /* $BE60: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE6C; }
label_BE62:;
    /* $BE62: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_BE64:;
    /* $BE64: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE68; }
label_BE66:;
    /* $BE66: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_BE68:;
    /* $BE68: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA0); FLAG_NZ(g_cpu.Y);
label_BE6A:;
    /* $BE6A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE98; }
label_BE6C:;
    /* $BE6C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x58; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE6E:;
    /* $BE6E: 85 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.A);
label_BE70:;
    /* $BE70: 84 */ maybe_trigger_vblank(3); nes_write(0x0E, g_cpu.Y);
label_BE72:;
    /* $BE72: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x0E); FLAG_NZ(g_cpu.Y);
label_BE74:;
    /* $BE74: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x00A2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE77:;
    /* $BE77: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x9C; g_cpu.C=(g_cpu.A>=0x9C)?1:0; FLAG_NZ(r&0xFF); }
label_BE79:;
    /* $BE79: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE98; }
label_BE7B:;
    /* $BE7B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x00A2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE7E:;
    /* $BE7E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BE7F:;
    /* $BE7F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_BE81:;
    /* $BE81: 99 */ maybe_trigger_vblank(5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BE84:;
    /* $BE84: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1C; FLAG_NZ(g_cpu.A);
label_BE86:;
    /* $BE86: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1E88); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBE86, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BE89:;
    /* $BE89: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE8B:;
    /* $BE8B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BE98; }
label_BE8D:;
    /* $BE8D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1E8F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBE8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BE90:;
    /* $BE90: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_BE92:;
    /* $BE92: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_BE94:;
    /* $BE94: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BE8D;
    }
label_BE96:;
    /* $BE96: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_BE72;
    }
label_BE98:;
    /* $BE98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_BE9A:;
    /* $BE9A: 85 */ maybe_trigger_vblank(3); nes_write(0x58, g_cpu.A);
label_BE9C:;
    /* $BE9C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BE56_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE56_b14");
#endif
    func_BE56_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE68_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE68_b14");
#endif
    func_BE56_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE6C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE6C_b14");
#endif
    func_BE56_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE72_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE72_b14");
#endif
    func_BE56_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE8D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE8D_b14");
#endif
    func_BE56_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE98_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE98_b14");
#endif
    func_BE56_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE5C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE5C_b14");
#endif
    func_BE56_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE62_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE62_b14");
#endif
    func_BE56_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE66_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE66_b14");
#endif
    func_BE56_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE9D_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BEAA;
    }
label_BE9D:;
    /* $BE9D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_BE9F:;
    /* $BE9F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1EA1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xBE9F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_BEA2:;
    /* $BEA2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAF); FLAG_NZ(g_cpu.A);
label_BEA4:;
    /* $BEA4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_BEA6:;
    /* $BEA6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_BEAA; }
label_BEA8:;
    /* $BEA8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xAF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BEAA:;
    /* $BEAA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BE9D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE9D_b14");
#endif
    func_BE9D_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BEAA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEAA_b14");
#endif
    func_BE9D_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0BE_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A0D2;
    }
label_A0BE:;
    /* $A0BE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA8); FLAG_NZ(g_cpu.A);
label_A0C0:;
    /* $A0C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x05C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0C6:;
    /* $A0C6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0D2; }
label_A0C8:;
    /* $A0C8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CB:;
    /* $A0CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0CC:;
    /* $A0CC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA17C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CF:;
    /* $A0CF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00D1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D2:;
    /* $A0D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0BE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0BE_b14");
#endif
    func_A0BE_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0D2_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0D2_b14");
#endif
    func_A0BE_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85A4_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_85C8;
        case 2: goto label_85BC;
        case 3: goto label_85AE;
    }
label_85A4:;
    /* $85A4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85A6:;
    /* $85A6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85A8:;
    /* $85A8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85AA:;
    /* $85AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85AC:;
    /* $85AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85AE:;
    /* $85AE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B0:;
    /* $85B0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B2:;
    /* $85B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B4:;
    /* $85B4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B6:;
    /* $85B6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B8:;
    /* $85B8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85BA:;
    /* $85BA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85BC:;
    /* $85BC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85BE:;
    /* $85BE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C0:;
    /* $85C0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C2:;
    /* $85C2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C4:;
    /* $85C4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C6:;
    /* $85C6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_85C8:; /* main_ret_B */
    /* $85C8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85A4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A4_b14");
#endif
    func_85A4_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85C8_b14(void) { /* main_ret_B */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85C8_b14");
#endif
    func_85A4_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85BC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85BC_b14");
#endif
    func_85A4_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85AE_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AE_b14");
#endif
    func_85A4_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84F0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84F0_b14");
#endif
label_84F0:;
    /* $84F0: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA2); FLAG_NZ(g_cpu.A);
label_84F2:;
    /* $84F2: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xAE); FLAG_NZ(g_cpu.A);
label_84F4:;
    /* $84F4: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_84F6:;
    /* $84F6: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xACAB); FLAG_NZ(g_cpu.X);
label_84F9:;
    /* $84F9: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB4B2); FLAG_NZ(g_cpu.A);
label_84FC:;
    /* $84FC: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x98) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84FE:;
    /* $84FE: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8500:;
    /* $8500: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_8502:;
    /* $8502: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_8503:;
    /* $8503: 85 */ maybe_trigger_vblank(3); nes_write(0x8E, g_cpu.A);
label_8505:;
    /* $8505: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8585 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8508:;
    /* $8508: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_850A:;
    /* $850A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_850B:;
    /* $850B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_850C:;
    /* $850C: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_850E:;
    /* $850E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04B9), 14); return; }
label_8510:;
    /* $8510: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB5 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8512:;
    /* $8512: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8514:;
    /* $8514: 99 */ maybe_trigger_vblank(5); nes_write((0xBB95 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8517:;
    /* $8517: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_851A:;
    /* $851A: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_851D:;
    /* $851D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x85; FLAG_NZ(g_cpu.A);
label_851F:;
    /* $851F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8520:;
    /* $8520: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8521:;
    /* $8521: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8522:;
    /* $8522: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8523:;
    /* $8523: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8524:;
    /* $8524: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8525:;
    /* $8525: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8526:;
    /* $8526: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8527:;
    /* $8527: 85 */ maybe_trigger_vblank(3); nes_write(0xB7, g_cpu.A);
label_8529:;
    /* $8529: 95 */ maybe_trigger_vblank(4); nes_write((0xA8 + g_cpu.X) & 0xFF, g_cpu.A);
label_852B:;
    /* $852B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_852E:;
    /* $852E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8531:;
    /* $8531: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x9585 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8534:;
    /* $8534: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xB8) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8536:;
    /* $8536: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_8538:;
    /* $8538: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x85 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_853A:;
    /* $853A: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xB9) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_853C:;
    /* $853C: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_853D:;
    /* $853D: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_853F:;
    /* $853F: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8541:;
    /* $8541: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x8585 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8544:;
    /* $8544: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_8546:;
    /* $8546: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_8548:;
    /* $8548: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_854A:;
    /* $854A: 87 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.A & g_cpu.X); /* SAX */
label_854C:;
    /* $854C: 89 */ maybe_trigger_vblank(2); /* NOP */
label_854E:;
    /* $854E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_854F:;
    /* $854F: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8550:;
    /* $8550: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8551:;
    /* $8551: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8554:;
    /* $8554: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBBBD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8557:;
    /* $8557: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB6 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_8559:;
    /* $8559: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB6 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_855B:;
    /* $855B: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB6 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_855D:;
    /* $855D: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xB6 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_855F:;
    /* $855F: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_8561:;
    /* $8561: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_8563:;
    /* $8563: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_8565:;
    /* $8565: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_8567:;
    /* $8567: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8569:;
    /* $8569: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_856B:;
    /* $856B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_856D:;
    /* $856D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_856F:;
    /* $856F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8571:;
    /* $8571: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8573:;
    /* $8573: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8575:;
    /* $8575: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8577:;
    /* $8577: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8579:;
    /* $8579: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_857B:;
    /* $857B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_857D:;
    /* $857D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_857F:;
    /* $857F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8581:;
    /* $8581: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8583:;
    /* $8583: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8585:;
    /* $8585: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8587:;
    /* $8587: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8589:;
    /* $8589: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_858B:;
    /* $858B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_858D:;
    /* $858D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_858F:;
    /* $858F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8591:;
    /* $8591: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8593:;
    /* $8593: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8595:;
    /* $8595: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8597:;
    /* $8597: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_8599:;
    /* $8599: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_859B:;
    /* $859B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_859D:;
    /* $859D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_859F:;
    /* $859F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85A1:;
    /* $85A1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85A3:;
    /* $85A3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85A5:;
    /* $85A5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85A7:;
    /* $85A7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85A9:;
    /* $85A9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85AB:;
    /* $85AB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85AD:;
    /* $85AD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85AF:;
    /* $85AF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B1:;
    /* $85B1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B3:;
    /* $85B3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B5:;
    /* $85B5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B7:;
    /* $85B7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85B9:;
    /* $85B9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85BB:;
    /* $85BB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85BD:;
    /* $85BD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85BF:;
    /* $85BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C1:;
    /* $85C1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C3:;
    /* $85C3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C5:;
    /* $85C5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA0; FLAG_NZ(g_cpu.Y);
label_85C7:; /* main_ret_A */
    /* $85C7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9A2_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A2_b14");
#endif
label_B9A2:;
    /* $B9A2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x9D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9A4:;
    /* $B9A4: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B9A6:;
    /* $B9A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B9A8:;
    /* $B9A8: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B9AB:;
    /* $B9AB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A200_b14_body(int _entry) { /* enemy_shape_g */
    switch (_entry) {
        case 1: goto label_A216;
        case 2: goto label_A230;
        case 3: goto label_A23D;
        case 4: goto label_A243;
        case 5: goto label_A248;
    }
label_A200:; /* enemy_shape_g */
    /* $A200: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A202:;
    /* $A202: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A205:;
    /* $A205: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A207:;
    /* $A207: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A248; }
label_A209:;
    /* $A209: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x88; FLAG_NZ(g_cpu.A);
label_A20B:;
    /* $A20B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x020D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA20B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A20E:;
    /* $A20E: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A216:;
    /* $A216: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A219:;
    /* $A219: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A230; }
label_A21B:;
    /* $A21B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A21E:;
    /* $A21E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A243; }
label_A220:;
    /* $A220: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x99; FLAG_NZ(g_cpu.A);
label_A222:;
    /* $A222: 9D */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A225:;
    /* $A225: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x05A0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A228:;
    /* $A228: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A22A:;
    /* $A22A: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A22D:;
    /* $A22D: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A230:;
    /* $A230: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0232); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA1A2, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA230, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A233:;
    /* $A233: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x68); FLAG_NZ(g_cpu.A);
label_A235:;
    /* $A235: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A248; }
label_A237:;
    /* $A237: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A239:;
    /* $A239: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A23B:;
    /* $A23B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_A23D:;
    /* $A23D: 99 */ maybe_trigger_vblank(5); nes_write((0x0310 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A240:;
    /* $A240: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A241:;
    /* $A241: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23D;
    }
label_A243:;
    /* $A243: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A245:;
    /* $A245: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A248:;
    /* $A248: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A200_b14(void) { /* enemy_shape_g */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A200_b14");
#endif
    func_A200_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A216_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A216_b14");
#endif
    func_A200_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A230_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A230_b14");
#endif
    func_A200_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A23D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A23D_b14");
#endif
    func_A200_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A243_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A243_b14");
#endif
    func_A200_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A248_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A248_b14");
#endif
    func_A200_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95F0_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9621;
        case 2: goto label_95F9;
        case 3: goto label_9617;
        case 4: goto label_962C;
        case 5: goto label_962E;
        case 6: goto label_9639;
        case 7: goto label_963F;
        case 8: goto label_9643;
    }
label_95F0:;
    /* $95F0: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_95F1:;
    /* $95F1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95F4:;
    /* $95F4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_95F6:;
    /* $95F6: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_95F9:;
    /* $95F9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95FC:;
    /* $95FC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9643; }
label_95FE:;
    /* $95FE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9601:;
    /* $9601: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_963F; }
label_9603:;
    /* $9603: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9606:;
    /* $9606: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_9608:;
    /* $9608: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9617; }
label_960A:;
    /* $960A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x160C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8D9(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x960A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_960D:;
    /* $960D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_960E:;
    /* $960E: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9610:;
    /* $9610: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9612:;
    /* $9612: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9639; }
label_9614:;
    /* $9614: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9621, 14); return;
label_9617:;
    /* $9617: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1619); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8D9(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9617, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_961A:;
    /* $961A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_961B:;
    /* $961B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x09; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_961D:;
    /* $961D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_961F:;
    /* $961F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9639; }
label_9621:;
    /* $9621: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9624:;
    /* $9624: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD1; g_cpu.C=(g_cpu.A>=0xD1)?1:0; FLAG_NZ(r&0xFF); }
label_9626:;
    /* $9626: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_962C; }
label_9628:;
    /* $9628: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD2; FLAG_NZ(g_cpu.A);
label_962A:;
    /* $962A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_962E; }
label_962C:;
    /* $962C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD5; FLAG_NZ(g_cpu.A);
label_962E:;
    /* $962E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1630); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x962E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9631:;
    /* $9631: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1633); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9659, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9631, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9634:;
    /* $9634: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9636:;
    /* $9636: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9639:;
    /* $9639: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_963B:;
    /* $963B: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_963E:;
    /* $963E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_963F:;
    /* $963F: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9642:;
    /* $9642: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9643:;
    /* $9643: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9646:;
    /* $9646: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9658; }
label_9648:;
    /* $9648: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_964B:;
    /* $964B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD2; g_cpu.C=(g_cpu.A>=0xD2)?1:0; FLAG_NZ(r&0xFF); }
label_964D:;
    /* $964D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9653; }
label_964F:;
    /* $964F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD1; FLAG_NZ(g_cpu.A);
label_9651:;
    /* $9651: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9655; }
label_9653:;
    /* $9653: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD4; FLAG_NZ(g_cpu.A);
label_9655:;
    /* $9655: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1657); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9655, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9658:;
    /* $9658: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_95F0_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95F0_b14");
#endif
    func_95F0_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9621_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9621_b14");
#endif
    func_95F0_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95F9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95F9_b14");
#endif
    func_95F0_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9617_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9617_b14");
#endif
    func_95F0_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_962C_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_962C_b14");
#endif
    func_95F0_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_962E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_962E_b14");
#endif
    func_95F0_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9639_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9639_b14");
#endif
    func_95F0_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_963F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_963F_b14");
#endif
    func_95F0_b14_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9643_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9643_b14");
#endif
    func_95F0_b14_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A929_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A93A;
    }
label_A929:;
    /* $A929: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xF8; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A92B:;
    /* $A92B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x46; FLAG_NZ(g_cpu.A);
label_A92D:;
    /* $A92D: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A930:;
    /* $A930: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A932:;
    /* $A932: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A935:;
    /* $A935: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A937:;
    /* $A937: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A93A:;
    /* $A93A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A929_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A929_b14");
#endif
    func_A929_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A93A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93A_b14");
#endif
    func_A929_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFA9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFA9_b14");
#endif
label_AFA9:;
    /* $AFA9: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xF0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFAB:;
    /* $AFAB: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AFAC:;
    /* $AFAC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_AFAE:;
    /* $AFAE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FB0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFAE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFB1:;
    /* $AFB1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AFB3:;
    /* $AFB3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FB5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFB3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFB6:;
    /* $AFB6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_AFB8:;
    /* $AFB8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_AFBA:;
    /* $AFBA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0F9A), 14); return; }
label_AFBC:;
    /* $AFBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FC0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFBE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFC1:;
    /* $AFC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_AFC3:;
    /* $AFC3: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFC6:;
    /* $AFC6: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC9:;
    /* $AFC9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AFD6; }
label_AFCB:;
    /* $AFCB: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFCE:;
    /* $AFCE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FD0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFCE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFD1:;
    /* $AFD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_AFD3:;
    /* $AFD3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FD5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFD3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFD6:;
    /* $AFD6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFAF_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AFC6;
        case 2: goto label_AFD6;
    }
label_AFAF:;
    /* $AFAF: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFB1:;
    /* $AFB1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AFB3:;
    /* $AFB3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FB5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFB3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFB6:;
    /* $AFB6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_AFB8:;
    /* $AFB8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_AFBA:;
    /* $AFBA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0F9A), 14); return; }
label_AFBC:;
    /* $AFBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FC0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFBE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFC1:;
    /* $AFC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_AFC3:;
    /* $AFC3: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFC6:;
    /* $AFC6: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC9:;
    /* $AFC9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AFD6; }
label_AFCB:;
    /* $AFCB: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFCE:;
    /* $AFCE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FD0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFCE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFD1:;
    /* $AFD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_AFD3:;
    /* $AFD3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FD5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFD3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFD6:;
    /* $AFD6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AFAF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFAF_b14");
#endif
    func_AFAF_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFC6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFC6_b14");
#endif
    func_AFAF_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFD6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFD6_b14");
#endif
    func_AFAF_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9AE6_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9B43;
        case 2: goto label_9B08;
        case 3: goto label_9B2B;
    }
label_9AE6:;
    /* $9AE6: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x05; g_cpu.C=(g_cpu.Y>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9AE8:;
    /* $9AE8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AEA:;
    /* $9AEA: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_9AED:;
    /* $9AED: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_9AF0:;
    /* $9AF0: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_9AF2:;
    /* $9AF2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_9AF5:;
    /* $9AF5: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9AF8:;
    /* $9AF8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_9AFB:;
    /* $9AFB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_9B43; }
label_9AFD:;
    /* $9AFD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x55; FLAG_NZ(g_cpu.A);
label_9AFF:;
    /* $9AFF: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B02:;
    /* $9B02: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B04:;
    /* $9B04: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B07:;
    /* $9B07: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B08:;
    /* $9B08: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_9B0A:;
    /* $9B0A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9B0C:;
    /* $9B0C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B0E:;
    /* $9B0E: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x34); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9B10:;
    /* $9B10: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B12:;
    /* $9B12: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B15:;
    /* $9B15: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B16:;
    /* $9B16: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C0); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B19:;
    /* $9B19: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_9B1B:;
    /* $9B1B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B1D:;
    /* $9B1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B1F:;
    /* $9B1F: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B22:;
    /* $9B22: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B25:;
    /* $9B25: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B28:;
    /* $9B28: 85 */ maybe_trigger_vblank(3); nes_write(0x35, g_cpu.A);
label_9B2A:;
    /* $9B2A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B2B:;
    /* $9B2B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_9B2D:;
    /* $9B2D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_9B2F:;
    /* $9B2F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B31:;
    /* $9B31: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x34); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9B33:;
    /* $9B33: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B43; }
label_9B35:;
    /* $9B35: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_9B37:;
    /* $9B37: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B3A:;
    /* $9B3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_9B3C:;
    /* $9B3C: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B3F:;
    /* $9B3F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B41:;
    /* $9B41: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_9B43:;
    /* $9B43: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9AE6_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AE6_b14");
#endif
    func_9AE6_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B43_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B43_b14");
#endif
    func_9AE6_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B08_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B08_b14");
#endif
    func_9AE6_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B2B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B2B_b14");
#endif
    func_9AE6_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEA9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEA9_b14");
#endif
label_AEA9:;
    /* $AEA9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE29_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AE42;
        case 2: goto label_AEB3;
        case 3: goto label_AEAD;
        case 4: goto label_AE99;
    }
label_AE29:;
    /* $AE29: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE2A:;
    /* $AE2A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E2C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F606(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE2A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE2D:;
    /* $AE2D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0E27), 14); return; }
label_AE2F:;
    /* $AE2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_AE31:;
    /* $AE31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E33); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE34:;
    /* $AE34: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE36:;
    /* $AE36: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE39:;
    /* $AE39: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_AE3B:;
    /* $AE3B: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE3E:;
    /* $AE3E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE40:;
    /* $AE40: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AE42:;
    /* $AE42: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E44); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE45:;
    /* $AE45: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AEB3; }
label_AE47:;
    /* $AE47: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_AE49:;
    /* $AE49: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE4C:;
    /* $AE4C: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE4F:;
    /* $AE4F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AE51:;
    /* $AE51: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE52:;
    /* $AE52: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE53:;
    /* $AE53: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE56:;
    /* $AE56: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE57:;
    /* $AE57: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAEB4 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AE5A:;
    /* $AE5A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AE5B:;
    /* $AE5B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE5E:;
    /* $AE5E: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAEB5 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AE61:;
    /* $AE61: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AE63:;
    /* $AE63: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE66:;
    /* $AE66: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AE67:;
    /* $AE67: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE6A:;
    /* $AE6A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x01); FLAG_NZ(g_cpu.Y);
label_AE6C:;
    /* $AE6C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE6F:;
    /* $AE6F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE70:;
    /* $AE70: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAEBE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AE73:;
    /* $AE73: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AE75:;
    /* $AE75: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE78:;
    /* $AE78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x41; FLAG_NZ(g_cpu.A);
label_AE7A:;
    /* $AE7A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E7C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE7A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE7D:;
    /* $AE7D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE7F:;
    /* $AE7F: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE82:;
    /* $AE82: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE85:;
    /* $AE85: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_AE87:;
    /* $AE87: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE8A:;
    /* $AE8A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AE8C:;
    /* $AE8C: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE8F:;
    /* $AE8F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3B; FLAG_NZ(g_cpu.A);
label_AE91:;
    /* $AE91: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE94:;
    /* $AE94: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_AE96:;
    /* $AE96: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE99:;
    /* $AE99: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AE9C:;
    /* $AE9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_AE9E:;
    /* $AE9E: 99 */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AEA1:;
    /* $AEA1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x33; FLAG_NZ(g_cpu.A);
label_AEA3:;
    /* $AEA3: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AEA6:;
    /* $AEA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AEA8:;
    /* $AEA8: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AEAB:;
    /* $AEAB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEAD:;
    /* $AEAD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AEAF:;
    /* $AEAF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_AEB1:;
    /* $AEB1: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE42;
    }
label_AEB3:;
    /* $AEB3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE29_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE29_b14");
#endif
    func_AE29_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE42_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE42_b14");
#endif
    func_AE29_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEB3_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEB3_b14");
#endif
    func_AE29_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEAD_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEAD_b14");
#endif
    func_AE29_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE99_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE99_b14");
#endif
    func_AE29_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A985_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A985_b14");
#endif
label_A985:;
    /* $A985: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0987); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8503, 14)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA985, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A988:;
    /* $A988: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xBD) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A98A:;
    /* $A98A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98A); return;
}

void func_9EA9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9EA9_b14");
#endif
label_9EA9:;
    /* $9EA9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1EAB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9EA9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9EAC:;
    /* $9EAC: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1EA4), 14); return; }
label_9EAE:;
    /* $9EAE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9EB0:;
    /* $9EB0: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EB3:;
    /* $9EB3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9EB5:;
    /* $9EB5: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EB8:;
    /* $9EB8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x73; FLAG_NZ(g_cpu.A);
label_9EBA:;
    /* $9EBA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1EBC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9EBA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9EBD:;
    /* $9EBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8B; FLAG_NZ(g_cpu.A);
label_9EBF:;
    /* $9EBF: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EC2:;
    /* $9EC2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_9EC4:;
    /* $9EC4: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EC7:;
    /* $9EC7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ECA:;
    /* $9ECA: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9ECD:;
    /* $9ECD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ED0:;
    /* $9ED0: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9ED3:;
    /* $9ED3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9ED6:;
    /* $9ED6: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9ED7:;
    /* $9ED7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9ED9:;
    /* $9ED9: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EDC:;
    /* $9EDC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9EDF:;
    /* $9EDF: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EE2:;
    /* $9EE2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9EE5:;
    /* $9EE5: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EE8:;
    /* $9EE8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1EEA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9EE8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9EEB:;
    /* $9EEB: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_9EED:;
    /* $9EED: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9EEF:;
    /* $9EEF: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9F06 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9EF2:;
    /* $9EF2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9EF7; }
label_9EF4:;
    /* $9EF4: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9EF5:;
    /* $9EF5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9EEF;
    }
label_9EF7:;
    /* $9EF7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9F0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9EFA:;
    /* $9EFA: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EFD:;
    /* $9EFD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9F0E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9F00:;
    /* $9F00: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9F03:;
    /* $9F03: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_9F05:;
    /* $9F05: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_981D_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9823;
        case 2: goto label_9872;
    }
label_981D:;
    /* $981D: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_981F:;
    /* $981F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9821:;
    /* $9821: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9823:;
    /* $9823: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1825); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9823, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9826:;
    /* $9826: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9872; }
label_9828:;
    /* $9828: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_982A:;
    /* $982A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9875 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_982D:;
    /* $982D: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9830:;
    /* $9830: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9878 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9833:;
    /* $9833: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9836:;
    /* $9836: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x987B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9839:;
    /* $9839: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_983C:;
    /* $983C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x987E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_983F:;
    /* $983F: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9842:;
    /* $9842: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x73; FLAG_NZ(g_cpu.A);
label_9844:;
    /* $9844: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1846); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9844, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9847:;
    /* $9847: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8B; FLAG_NZ(g_cpu.A);
label_9849:;
    /* $9849: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_984C:;
    /* $984C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_984E:;
    /* $984E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_9850:;
    /* $9850: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9853:;
    /* $9853: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9856:;
    /* $9856: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9859:;
    /* $9859: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_985C:;
    /* $985C: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_985F:;
    /* $985F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9862:;
    /* $9862: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9863:;
    /* $9863: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_9865:;
    /* $9865: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9868:;
    /* $9868: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_986B:;
    /* $986B: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_986E:;
    /* $986E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9870:;
    /* $9870: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9823;
    }
label_9872:;
    /* $9872: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_9874:;
    /* $9874: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_981D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_981D_b14");
#endif
    func_981D_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9823_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9823_b14");
#endif
    func_981D_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9872_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9872_b14");
#endif
    func_981D_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9BE2_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9C18;
    }
label_9BE2:;
    /* $9BE2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BE4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BE2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BE5:;
    /* $9BE5: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9C18; }
label_9BE7:;
    /* $9BE7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BEA:;
    /* $9BEA: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BED:;
    /* $9BED: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BF0:;
    /* $9BF0: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BF3:;
    /* $9BF3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9BF6:;
    /* $9BF6: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BF9:;
    /* $9BF9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9BFB:;
    /* $9BFB: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9BFE:;
    /* $9BFE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C01:;
    /* $9C01: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9C04:;
    /* $9C04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x94; FLAG_NZ(g_cpu.A);
label_9C06:;
    /* $9C06: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C08); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C06, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C09:;
    /* $9C09: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xCA; FLAG_NZ(g_cpu.A);
label_9C0B:;
    /* $9C0B: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9C0E:;
    /* $9C0E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_9C10:;
    /* $9C10: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9C13:;
    /* $9C13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9C15:;
    /* $9C15: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9C18:;
    /* $9C18: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9BE2_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9BE2_b14");
#endif
    func_9BE2_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C18_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C18_b14");
#endif
    func_9BE2_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9D20_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9D20_b14");
#endif
label_9D20:;
    /* $9D20: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE4); FLAG_NZ(g_cpu.A);
label_9D22:;
    /* $9D22: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE5); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9D24:;
    /* $9D24: 85 */ maybe_trigger_vblank(3); nes_write(0xE4, g_cpu.A);
label_9D26:;
    /* $9D26: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9D28:;
    /* $9D28: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9D29:;
    /* $9D29: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D2D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D2C:;
    /* $9D2C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ABEA_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AC16;
        case 2: goto label_AC0B;
    }
label_ABEA:;
    /* $ABEA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_ABED:;
    /* $ABED: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ABEE:;
    /* $ABEE: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0360 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABF1:;
    /* $ABF1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_ABF2:;
    /* $ABF2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_ABF5:;
    /* $ABF5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0380 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABF8:;
    /* $ABF8: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_ABF9:;
    /* $ABF9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_AC16; }
label_ABFB:;
    /* $ABFB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_AC0B; }
label_ABFD:;
    /* $ABFD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BFF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F71D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xABFD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC00:;
    /* $AC00: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC03:;
    /* $AC03: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_AC05:;
    /* $AC05: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC08:;
    /* $AC08: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xAC16, 14); return;
label_AC0B:;
    /* $AC0B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C0D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F73B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC0B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC0E:;
    /* $AC0E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC11:;
    /* $AC11: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_AC13:;
    /* $AC13: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC16:;
    /* $AC16: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_AC19:;
    /* $AC19: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AC1A:;
    /* $AC1A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C0 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC1D:;
    /* $AC1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0BE9), 14); return; }
label_AC1F:;
    /* $AC1F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AC24; }
label_AC21:;
    /* $AC21: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; } return;
label_AC24:;
    /* $AC24: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; } return;
}

void func_ABEA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABEA_b14");
#endif
    func_ABEA_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC16_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC16_b14");
#endif
    func_ABEA_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC0B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC0B_b14");
#endif
    func_ABEA_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AFA5_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFA5_b14");
#endif
label_AFA5:;
    /* $AFA5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFA8:;
    /* $AFA8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x44; g_cpu.C=(g_cpu.A>=0x44)?1:0; FLAG_NZ(r&0xFF); }
label_AFAA:;
    /* $AFAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AFC6; }
label_AFAC:;
    /* $AFAC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_AFAE:;
    /* $AFAE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FB0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFAE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFB1:;
    /* $AFB1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x15; FLAG_NZ(g_cpu.Y);
label_AFB3:;
    /* $AFB3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FB5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFB3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFB6:;
    /* $AFB6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_AFB8:;
    /* $AFB8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_AFBA:;
    /* $AFBA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0F9A), 14); return; }
label_AFBC:;
    /* $AFBC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_AFBE:;
    /* $AFBE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FC0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFBE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFC1:;
    /* $AFC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_AFC3:;
    /* $AFC3: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFC6:;
    /* $AFC6: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC9:;
    /* $AFC9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AFD6; }
label_AFCB:;
    /* $AFCB: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFCE:;
    /* $AFCE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FD0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFCE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFD1:;
    /* $AFD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x45; FLAG_NZ(g_cpu.A);
label_AFD3:;
    /* $AFD3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FD5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFD3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFD6:;
    /* $AFD6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AC27_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AC4B;
        case 2: goto label_AC62;
        case 3: goto label_AC6F;
        case 4: goto label_AC79;
        case 5: goto label_AC7E;
        case 6: goto label_AC80;
    }
label_AC27:;
    /* $AC27: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C29); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8C2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC27, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC2A:;
    /* $AC2A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x44; g_cpu.C=(g_cpu.A>=0x44)?1:0; FLAG_NZ(r&0xFF); }
label_AC2C:;
    /* $AC2C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AC7E; }
label_AC2E:;
    /* $AC2E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC31:;
    /* $AC31: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AC32:;
    /* $AC32: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFC); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC34:;
    /* $AC34: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AC36:;
    /* $AC36: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC39:;
    /* $AC39: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF9); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC3B:;
    /* $AC3B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AC79; }
label_AC3D:;
    /* $AC3D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_AC3F:;
    /* $AC3F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_AC41:;
    /* $AC41: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AC79; }
label_AC43:;
    /* $AC43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC45:;
    /* $AC45: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AC47:;
    /* $AC47: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_AC49:;
    /* $AC49: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_AC4B:;
    /* $AC4B: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AC4D:;
    /* $AC4D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AC62; }
label_AC4F:;
    /* $AC4F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC52:;
    /* $AC52: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC62; }
label_AC54:;
    /* $AC54: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC57:;
    /* $AC57: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC62; }
label_AC59:;
    /* $AC59: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC5C:;
    /* $AC5C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_AC5E:;
    /* $AC5E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_AC62; }
label_AC60:;
    /* $AC60: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC62:;
    /* $AC62: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC63:;
    /* $AC63: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_AC65:;
    /* $AC65: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AC4B;
    }
label_AC67:;
    /* $AC67: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_AC69:;
    /* $AC69: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_AC6B:;
    /* $AC6B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AC79; }
label_AC6D:;
    /* $AC6D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AC6F:;
    /* $AC6F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC72:;
    /* $AC72: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC80; }
label_AC74:;
    /* $AC74: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC75:;
    /* $AC75: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_AC77:;
    /* $AC77: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AC6F;
    }
label_AC79:;
    /* $AC79: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC7B:;
    /* $AC7B: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC7E:;
    /* $AC7E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AC7F:;
    /* $AC7F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC80:;
    /* $AC80: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC81:;
    /* $AC81: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AC27_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC27_b14");
#endif
    func_AC27_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC4B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC4B_b14");
#endif
    func_AC27_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC62_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC62_b14");
#endif
    func_AC27_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC6F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC6F_b14");
#endif
    func_AC27_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC79_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC79_b14");
#endif
    func_AC27_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC7E_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC7E_b14");
#endif
    func_AC27_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC80_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC80_b14");
#endif
    func_AC27_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B224_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B224_b14");
#endif
label_B224:;
    /* $B224: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE4); FLAG_NZ(g_cpu.A);
label_B226:;
    /* $B226: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE5); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B228:;
    /* $B228: 85 */ maybe_trigger_vblank(3); nes_write(0xE5, g_cpu.A);
label_B22A:;
    /* $B22A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_B22C:;
    /* $B22C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B22D:;
    /* $B22D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB23A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B230:;
    /* $B230: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B233:;
    /* $B233: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB23C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B236:;
    /* $B236: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B239:;
    /* $B239: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B6BC_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B6C9;
    }
label_B6BC:;
    /* $B6BC: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0540 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6BF:;
    /* $B6BF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_B6C9; }
label_B6C1:;
    /* $B6C1: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B6C4:;
    /* $B6C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_B6C6:;
    /* $B6C6: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B6C9:;
    /* $B6C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B6CB:;
    /* $B6CB: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B6CE:;
    /* $B6CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B6D0:;
    /* $B6D0: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B6D3:;
    /* $B6D3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; } return;
}

void func_B6BC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6BC_b14");
#endif
    func_B6BC_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6C9_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C9_b14");
#endif
    func_B6BC_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA9A_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AADB;
    }
label_AA9A:;
    /* $AA9A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A9C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA9A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA9D:;
    /* $AA9D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AADB; }
label_AA9F:;
    /* $AA9F: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_AAA1:;
    /* $AAA1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAA4:;
    /* $AAA4: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAA7:;
    /* $AAA7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_AAA9:;
    /* $AAA9: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AAAA:;
    /* $AAAA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAAD:;
    /* $AAAD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AAAE:;
    /* $AAAE: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAADC + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAB1:;
    /* $AAB1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AAB2:;
    /* $AAB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAB5:;
    /* $AAB5: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAADD + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAB8:;
    /* $AAB8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AABA:;
    /* $AABA: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AABD:;
    /* $AABD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AABE:;
    /* $AABE: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAC1:;
    /* $AAC1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAC4:;
    /* $AAC4: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAC7:;
    /* $AAC7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_AAC9:;
    /* $AAC9: 99 */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AACC:;
    /* $AACC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3E; FLAG_NZ(g_cpu.A);
label_AACE:;
    /* $AACE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AD0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAACE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AAD1:;
    /* $AAD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_AAD3:;
    /* $AAD3: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AAD6:;
    /* $AAD6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_AAD8:;
    /* $AAD8: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_AADB:;
    /* $AADB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA9A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA9A_b14");
#endif
    func_AA9A_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AADB_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AADB_b14");
#endif
    func_AA9A_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A249_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A25D;
        case 2: goto label_A26B;
        case 3: goto label_A28A;
        case 4: goto label_A28F;
        case 5: goto label_A292;
        case 6: goto label_A259;
    }
label_A249:;
    /* $A249: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0560 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A24C:;
    /* $A24C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A292; }
label_A24E:;
    /* $A24E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A250:;
    /* $A250: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A25D; }
label_A252:;
    /* $A252: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A255:;
    /* $A255: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_A257:;
    /* $A257: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A292; }
label_A259:;
    /* $A259: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A25B:;
    /* $A25B: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A25D:;
    /* $A25D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_A25F:;
    /* $A25F: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A261:;
    /* $A261: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A26B; }
label_A263:;
    /* $A263: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0265); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA263, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A266:;
    /* $A266: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_A268:;
    /* $A268: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A26B:;
    /* $A26B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A26E:;
    /* $A26E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A292; }
label_A270:;
    /* $A270: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A272:;
    /* $A272: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A274:;
    /* $A274: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0560 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A277:;
    /* $A277: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A27A:;
    /* $A27A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFB; FLAG_NZ(g_cpu.A);
label_A27C:;
    /* $A27C: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A27F:;
    /* $A27F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x53; g_cpu.C=(g_cpu.A>=0x53)?1:0; FLAG_NZ(r&0xFF); }
label_A284:;
    /* $A284: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A28A; }
label_A286:;
    /* $A286: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_A288:;
    /* $A288: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A28F; }
label_A28A:;
    /* $A28A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A28C:;
    /* $A28C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A28D:;
    /* $A28D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_A28F:;
    /* $A28F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0291); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA28F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A292:;
    /* $A292: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A249_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A249_b14");
#endif
    func_A249_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A25D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A25D_b14");
#endif
    func_A249_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A26B_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A26B_b14");
#endif
    func_A249_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A28A_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A28A_b14");
#endif
    func_A249_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A28F_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A28F_b14");
#endif
    func_A249_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A292_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A292_b14");
#endif
    func_A249_b14_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A259_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A259_b14");
#endif
    func_A249_b14_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8249_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8249_b14");
#endif
label_8249:;
    /* $8249: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_824B:;
    /* $824B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_824D:;
    /* $824D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_824E:;
    /* $824E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8250:;
    /* $8250: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0252); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8250, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8253:;
    /* $8253: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_8255:;
    /* $8255: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8256:;
    /* $8256: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8259:;
    /* $8259: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_825B:;
    /* $825B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82AA; }
label_825D:;
    /* $825D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_825E:;
    /* $825E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0480 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8261:;
    /* $8261: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8263:;
    /* $8263: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_825D;
    }
label_8265:;
    /* $8265: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0267); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FAE2(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8265, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8268:;
    /* $8268: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_825D;
    }
label_826A:;
    /* $826A: 86 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.X);
label_826C:;
    /* $826C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF5); FLAG_NZ(g_cpu.A);
label_826E:;
    /* $826E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_826F:;
    /* $826F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8271:;
    /* $8271: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8273:;
    /* $8273: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0275); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8273, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8276:;
    /* $8276: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_8278:;
    /* $8278: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0320 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_827B:;
    /* $827B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x83AF); FLAG_NZ(g_cpu.A);
label_827E:;
    /* $827E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8280:;
    /* $8280: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x83BB); FLAG_NZ(g_cpu.A);
label_8283:;
    /* $8283: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8285:;
    /* $8285: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_8287:;
    /* $8287: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_8289:;
    /* $8289: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_828A:;
    /* $828A: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_828C:;
    /* $828C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8290; }
label_828E:;
    /* $828E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8290:;
    /* $8290: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8292:;
    /* $8292: 85 */ maybe_trigger_vblank(3); nes_write(0xA7, g_cpu.A);
label_8294:;
    /* $8294: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_8296:;
    /* $8296: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_8298:;
    /* $8298: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_829A:;
    /* $829A: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_829D:;
    /* $829D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x83B4); FLAG_NZ(g_cpu.A);
label_82A0:;
    /* $82A0: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_82A2:;
    /* $82A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x83C0); FLAG_NZ(g_cpu.A);
label_82A5:;
    /* $82A5: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_82A7:;
    /* $82A7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x81B6, 14); return;
label_82AA:;
    /* $82AA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82AD:;
    /* $82AD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_82AF:;
    /* $82AF: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_82B1:;
    /* $82B1: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_82B3:;
    /* $82B3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_82B5:;
    /* $82B5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82B8; }
label_82B7:;
    /* $82B7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82B8:;
    /* $82B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF2; FLAG_NZ(g_cpu.A);
label_82BA:;
    /* $82BA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02BC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82BD:;
    /* $82BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_82BF:;
    /* $82BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02C1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82C2:;
    /* $82C2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_82C4:;
    /* $82C4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5A); FLAG_NZ(g_cpu.A);
label_82C6:;
    /* $82C6: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_82CC; }
label_82C8:;
    /* $82C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_82CA:;
    /* $82CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82CE; }
label_82CC:;
    /* $82CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5B; FLAG_NZ(g_cpu.A);
label_82CE:;
    /* $82CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02D0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82D1:;
    /* $82D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_82D3:;
    /* $82D3: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82D6:;
    /* $82D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_82D8:;
    /* $82D8: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82DB:;
    /* $82DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_82DD:;
    /* $82DD: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82E0:;
    /* $82E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_82E2:;
    /* $82E2: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82E5:;
    /* $82E5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82E8:;
    /* $82E8: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82EB:;
    /* $82EB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82EE:;
    /* $82EE: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82F1:;
    /* $82F1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82F4:;
    /* $82F4: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82F7:;
    /* $82F7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD7E1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82FA:;
    /* $82FA: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82FD:;
    /* $82FD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD7F1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8300:;
    /* $8300: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8303:;
    /* $8303: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD801 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8306:;
    /* $8306: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8309:;
    /* $8309: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD811 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_830C:;
    /* $830C: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_830F:;
    /* $830F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8310:;
    /* $8310: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_8312:;
    /* $8312: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82C4;
    }
label_8314:;
    /* $8314: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_8316:;
    /* $8316: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8318:;
    /* $8318: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_831E; }
label_831A:;
    /* $831A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_831C:;
    /* $831C: 85 */ maybe_trigger_vblank(3); nes_write(0xFA, g_cpu.A);
label_831E:;
    /* $831E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8320:;
    /* $8320: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_8323:;
    /* $8323: 8D */ maybe_trigger_vblank(4); nes_write(0x0302, g_cpu.A);
label_8326:;
    /* $8326: 8D */ maybe_trigger_vblank(4); nes_write(0x0303, g_cpu.A);
label_8329:;
    /* $8329: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_832C:;
    /* $832C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_832E:;
    /* $832E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_8330:;
    /* $8330: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8360; }
label_8332:;
    /* $8332: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_8334:;
    /* $8334: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83AD; }
label_8338:;
    /* $8338: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_833A:;
    /* $833A: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_833C:;
    /* $833C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_833E:;
    /* $833E: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_8340:;
    /* $8340: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_8343:;
    /* $8343: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_8346:;
    /* $8346: 8D */ maybe_trigger_vblank(4); nes_write(0x0302, g_cpu.A);
label_8349:;
    /* $8349: 8D */ maybe_trigger_vblank(4); nes_write(0x0303, g_cpu.A);
label_834C:;
    /* $834C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_834E:;
    /* $834E: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8351:;
    /* $8351: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_835E; }
label_8353:;
    /* $8353: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_8356:;
    /* $8356: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8358:;
    /* $8358: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_835B:;
    /* $835B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_835E:;
    /* $835E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_835F:;
    /* $835F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8360:;
    /* $8360: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_8362:;
    /* $8362: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_8364:;
    /* $8364: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_836A; }
label_8366:;
    /* $8366: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8368:;
    /* $8368: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_836A:;
    /* $836A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_836C:;
    /* $836C: 8D */ maybe_trigger_vblank(4); nes_write(0x030F, g_cpu.A);
label_836F:;
    /* $836F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_8371:;
    /* $8371: 8D */ maybe_trigger_vblank(4); nes_write(0x058F, g_cpu.A);
label_8374:;
    /* $8374: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8377:;
    /* $8377: 8D */ maybe_trigger_vblank(4); nes_write(0x036F, g_cpu.A);
label_837A:;
    /* $837A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_837D:;
    /* $837D: 8D */ maybe_trigger_vblank(4); nes_write(0x038F, g_cpu.A);
label_8380:;
    /* $8380: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8383:;
    /* $8383: 8D */ maybe_trigger_vblank(4); nes_write(0x03CF, g_cpu.A);
label_8386:;
    /* $8386: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8388:;
    /* $8388: 8D */ maybe_trigger_vblank(4); nes_write(0x03EF, g_cpu.A);
label_838B:;
    /* $838B: 8D */ maybe_trigger_vblank(4); nes_write(0x05EF, g_cpu.A);
label_838E:;
    /* $838E: 8D */ maybe_trigger_vblank(4); nes_write(0x05AF, g_cpu.A);
label_8391:;
    /* $8391: 8D */ maybe_trigger_vblank(4); nes_write(0x048F, g_cpu.A);
label_8394:;
    /* $8394: 8D */ maybe_trigger_vblank(4); nes_write(0x04EF, g_cpu.A);
label_8397:;
    /* $8397: 8D */ maybe_trigger_vblank(4); nes_write(0x044F, g_cpu.A);
label_839A:;
    /* $839A: 8D */ maybe_trigger_vblank(4); nes_write(0x046F, g_cpu.A);
label_839D:;
    /* $839D: 8D */ maybe_trigger_vblank(4); nes_write(0x050F, g_cpu.A);
label_83A0:;
    /* $83A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_83A2:;
    /* $83A2: 8D */ maybe_trigger_vblank(4); nes_write(0x05CF, g_cpu.A);
label_83A5:;
    /* $83A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x64; FLAG_NZ(g_cpu.A);
label_83A7:;
    /* $83A7: 8D */ maybe_trigger_vblank(4); nes_write(0x032F, g_cpu.A);
label_83AA:;
    /* $83AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E11A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83AD:;
    /* $83AD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83AE:;
    /* $83AE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7DF_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7DF_b14");
#endif
label_B7DF:;
    /* $B7DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_B7E1:;
    /* $B7E1: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_B7E3:;
    /* $B7E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B7E5:;
    /* $B7E5: 85 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.A);
label_B7E7:;
    /* $B7E7: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_B7E9:;
    /* $B7E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x8E; FLAG_NZ(g_cpu.A);
label_B7EB:;
    /* $B7EB: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_B7ED:;
    /* $B7ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_B7EF:;
    /* $B7EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x17F1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB7EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B7F2:;
    /* $B7F2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9286_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9295;
        case 2: goto label_9290;
        case 3: goto label_92A4;
        case 4: goto label_92AA;
    }
label_9286:;
    /* $9286: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9288:;
    /* $9288: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_928A:;
    /* $928A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_928C:;
    /* $928C: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_928E:;
    /* $928E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_9290:;
    /* $9290: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9293:;
    /* $9293: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_92AA; }
label_9295:;
    /* $9295: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9296:;
    /* $9296: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9298:;
    /* $9298: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9290;
    }
label_929A:;
    /* $929A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_929C:;
    /* $929C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_92A4; }
label_929E:;
    /* $929E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_92A0:;
    /* $92A0: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92A3:;
    /* $92A3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_92A4:;
    /* $92A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_92A6:;
    /* $92A6: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_92A9:;
    /* $92A9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_92AA:;
    /* $92AA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_92AC:;
    /* $92AC: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x04C0 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_92AF:;
    /* $92AF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9295;
    }
label_92B1:;
    /* $92B1: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92B3:;
    /* $92B3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9295, 14); return;
}

void func_9286_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9286_b14");
#endif
    func_9286_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9295_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9295_b14");
#endif
    func_9286_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9290_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9290_b14");
#endif
    func_9286_b14_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_92A4_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92A4_b14");
#endif
    func_9286_b14_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_92AA_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92AA_b14");
#endif
    func_9286_b14_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8AAC_b14_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8AB7;
    }
label_8AAC:;
    /* $8AAC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AAF:;
    /* $8AAF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_8AB1:;
    /* $8AB1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AC0; }
label_8AB3:;
    /* $8AB3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8AB5:;
    /* $8AB5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8ABD; }
label_8AB7:;
    /* $8AB7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AB9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AB7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ABA:;
    /* $8ABA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8AC0, 14); return;
label_8ABD:;
    /* $8ABD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ABF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F759(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ABD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AC0:;
    /* $8AC0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AC3:;
    /* $8AC3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD1; }
label_8AC5:;
    /* $8AC5: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AC8:;
    /* $8AC8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AFA; }
label_8ACA:;
    /* $8ACA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8ACD:;
    /* $8ACD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8ACF:;
    /* $8ACF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD7; }
label_8AD1:;
    /* $8AD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AD3:;
    /* $8AD3: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8AD6:;
    /* $8AD6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8AD7:;
    /* $8AD7: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8ADA:;
    /* $8ADA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_8ADC:;
    /* $8ADC: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8ADF:;
    /* $8ADF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE2:;
    /* $8AE2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_8AE4:;
    /* $8AE4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AF2; }
label_8AE6:;
    /* $8AE6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AE9:;
    /* $8AE9: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0C; FLAG_NZ(g_cpu.A);
label_8AEB:;
    /* $8AEB: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8AEE:;
    /* $8AEE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8AF0:;
    /* $8AF0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AFA; }
label_8AF2:;
    /* $8AF2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AF5:;
    /* $8AF5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_8AF7:;
    /* $8AF7: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8AFA:;
    /* $8AFA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8AAC_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AAC_b14");
#endif
    func_8AAC_b14_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8AB7_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8AB7_b14");
#endif
    func_8AAC_b14_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD6D_b14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD6D_b14");
#endif
label_BD6D:;
    /* $BD6D: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x9D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD6F:;
    /* $BD6F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xBD6F; g_rti_bank = 14; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}
