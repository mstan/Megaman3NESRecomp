/* mega-man-3_full_bank11_part02.c — PRG bank 11 function bodies (sub-part 2).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_BB89_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB89_b11");
#endif
label_BB89:;
    /* $BB89: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BB8A:;
    /* $BB8A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xB1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB8C:;
    /* $BB8C: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BB8E:;
    /* $BB8E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_BB91:;
    /* $BB91: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BB93:;
    /* $BB93: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x96; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB95:;
    /* $BB95: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BB96:;
    /* $BB96: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x90 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB98:;
    /* $BB98: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x90 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BB9A:;
    /* $BB9A: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x6090; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB9D:;
    /* $BB9D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_BC0D; }
label_BB9F:;
    /* $BB9F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x70 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BBA1:;
    /* $BBA1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BBA3:;
    /* $BBA3: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xBB01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBA6:;
    /* $BBA6: 8F */ maybe_trigger_vblank(4); nes_write(0x0004, g_cpu.A & g_cpu.X); /* SAX */
label_BBA9:;
    /* $BBA9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_BBAB:;
    /* $BBAB: 80 */ maybe_trigger_vblank(2); /* NOP */
label_BBAD:;
    /* $BBAD: 8D */ maybe_trigger_vblank(4); nes_write(0x8D6C, g_cpu.A);
label_BBB0:;
    /* $BBB0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BBB1:;
    /* $BBB1: 8D */ maybe_trigger_vblank(4); nes_write(0x8D6C, g_cpu.A);
label_BBB4:;
    /* $BBB4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BBB5:;
    /* $BBB5: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_BBB7:;
    /* $BBB7: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0E6D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BBBA:;
    /* $BBBA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xBB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BBBC:;
    /* $BBBC: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BBBE:; /* main_tama_A */
    /* $BBBE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BBC1:;
    /* $BBC1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BBC2:;
    /* $BBC2: 99 */ maybe_trigger_vblank(5); nes_write((0x9802 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BBC5:;
    /* $BBC5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BBC7:;
    /* $BBC7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BBC8:;
    /* $BBC8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x74 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BBCA:;
    /* $BBCA: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_BBCB:;
    /* $BBCB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBBCB); return;
label_BBCC:;
    /* $BBCC: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BBCE:;
    /* $BBCE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BBCF:;
    /* $BBCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBBCF); return;
label_BBD0:;
    /* $BBD0: 80 */ maybe_trigger_vblank(2); /* NOP */
label_BBD2:;
    /* $BBD2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BBD3:;
    /* $BBD3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_BBD5:;
    /* $BBD5: 80 */ maybe_trigger_vblank(2); /* NOP */
label_BBD7:;
    /* $BBD7: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BBD9:;
    /* $BBD9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_BBDB:;
    /* $BBDB: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_BBDC:;
    /* $BBDC: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6F6D); nes_trace_indirect_jump(0xBBDC, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_BC0D:;
    /* $BC0D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x010E); FLAG_NZ(g_cpu.X);
label_BC10:;
    /* $BC10: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_BC13:;
    /* $BC13: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC15:;
    /* $BC15: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xBC15; g_rti_bank = 11; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9910_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9910_b11");
#endif
label_9910:;
    /* $9910: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9912:;
    /* $9912: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x94 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9914:;
    /* $9914: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_9916:;
    /* $9916: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_9918:;
    /* $9918: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B910_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B910_b11");
#endif
label_B910:;
    /* $B910: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B912:;
    /* $B912: 87 */ maybe_trigger_vblank(3); nes_write(0xA6, g_cpu.A & g_cpu.X); /* SAX */
label_B914:;
    /* $B914: 84 */ maybe_trigger_vblank(3); nes_write(0x0E, g_cpu.Y);
label_B916:;
    /* $B916: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B918:;
    /* $B918: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x16) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B91A:;
    /* $B91A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B91B:;
    /* $B91B: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B91D:;
    /* $B91D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B91F:;
    /* $B91F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA27 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B922:;
    /* $B922: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_B923:;
    /* $B923: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBD46 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B926:;
    /* $B926: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_B927:;
    /* $B927: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B92B:;
    /* $B92B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0F07 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B92E:;
    /* $B92E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B92F:;
    /* $B92F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB92F; g_rti_bank = 11; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BB3A_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB3A_b11");
#endif
label_BB3A:;
    /* $BB3A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x98); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BB3C:;
    /* $BB3C: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_BB3E:;
    /* $BB3E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BB3F:;
    /* $BB3F: 97 */ maybe_trigger_vblank(4); nes_write((0x93 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_BB41:;
    /* $BB41: 8F */ maybe_trigger_vblank(4); nes_write(0x9601, g_cpu.A & g_cpu.X); /* SAX */
label_BB44:;
    /* $BB44: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x96 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BB46:;
    /* $BB46: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_BB48:;
    /* $BB48: 96 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.Y) & 0xFF, g_cpu.X);
label_BB4A:;
    /* $BB4A: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8E) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BB4C:;
    /* $BB4C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_BB4D:;
    /* $BB4D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x8F01 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BB50:;
    /* $BB50: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BB51:;
    /* $BB51: CF */ maybe_trigger_vblank(6); { uint16_t a=0x8F01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BB54:;
    /* $BB54: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BB56:;
    /* $BB56: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x51) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BB58:;
    /* $BB58: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x8000; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BB5B:;
    /* $BB5B: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BB5D:;
    /* $BB5D: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x64; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB5F:;
    /* $BB5F: 8F */ maybe_trigger_vblank(4); nes_write(0x91AF, g_cpu.A & g_cpu.X); /* SAX */
label_BB62:;
    /* $BB62: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BB64:;
    /* $BB64: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_BB66:;
    /* $BB66: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BB68:;
    /* $BB68: 87 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A & g_cpu.X); /* SAX */
label_BB6A:;
    /* $BB6A: 87 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A & g_cpu.X); /* SAX */
label_BB6C:;
    /* $BB6C: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_BB6E:;
    /* $BB6E: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_BB70:;
    /* $BB70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB70); return;
}

void func_81BD_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81BD_b11");
#endif
label_81BD:;
    /* $81BD: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81BF:;
    /* $81BF: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x3482); FLAG_NZ(g_cpu.A);
label_81C2:;
    /* $81C2: 82 */ maybe_trigger_vblank(2); /* NOP */
label_81C4:;
    /* $81C4: 82 */ maybe_trigger_vblank(2); /* NOP */
label_81C6:;
    /* $81C6: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x81); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_81C8:;
    /* $81C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81CA:;
    /* $81CA: 85 */ maybe_trigger_vblank(3); nes_write(0xCE, g_cpu.A);
label_81CC:;
    /* $81CC: 85 */ maybe_trigger_vblank(3); nes_write(0xD0, g_cpu.A);
label_81CE:;
    /* $81CE: 85 */ maybe_trigger_vblank(3); nes_write(0xD1, g_cpu.A);
label_81D0:;
    /* $81D0: 85 */ maybe_trigger_vblank(3); nes_write(0xD7, g_cpu.A);
label_81D2:;
    /* $81D2: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_81D4:;
    /* $81D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_81D6:;
    /* $81D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81E3; }
label_81D8:;
    /* $81D8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0F; FLAG_NZ(g_cpu.A);
label_81DA:;
    /* $81DA: 85 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.A);
label_81DC:;
    /* $81DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x81F1, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81DF:;
    /* $81DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81E1:;
    /* $81E1: 85 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.A);
label_81E3:;
    /* $81E3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_82BC_b11_body(int _entry) {
    switch (_entry) {
        case 1: goto label_82DA;
    }
label_82BC:;
    /* $82BC: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_82BE:;
    /* $82BE: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_82C0:;
    /* $82C0: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x85 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82C2:;
    /* $82C2: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_82C4:;
    /* $82C4: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x80; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82C6:;
    /* $82C6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC1); FLAG_NZ(g_cpu.Y);
label_82C8:;
    /* $82C8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82C9:;
    /* $82C9: 84 */ maybe_trigger_vblank(3); nes_write(0xD5, g_cpu.Y);
label_82CB:;
    /* $82CB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82CD:;
    /* $82CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02CF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8386, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82D0:;
    /* $82D0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_82D1:;
    /* $82D1: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_82D3:;
    /* $82D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82DA; }
label_82D5:;
    /* $82D5: 85 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.A);
label_82D7:;
    /* $82D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02D9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x81D4, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82DA:;
    /* $82DA: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_82DB:;
    /* $82DB: 85 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.A);
label_82DD:;
    /* $82DD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_82BC_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82BC_b11");
#endif
    func_82BC_b11_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82DA_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82DA_b11");
#endif
    func_82BC_b11_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9A5_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A5_b11");
#endif
label_B9A5:;
    /* $B9A5: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9A7:;
    /* $B9A7: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B9A9:;
    /* $B9A9: 8F */ maybe_trigger_vblank(4); nes_write(0x0171, g_cpu.A & g_cpu.X); /* SAX */
label_B9AC:; /* main_breakable_wall */
    /* $B9AC: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9AE:;
    /* $B9AE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x93 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9B0:;
    /* $B9B0: 96 */ maybe_trigger_vblank(4); nes_write((0x93 + g_cpu.Y) & 0xFF, g_cpu.X);
label_B9B2:;
    /* $B9B2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9B4:;
    /* $B9B4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9B6:;
    /* $B9B6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9B8:;
    /* $B9B8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9BA:;
    /* $B9BA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B9BC:;
    /* $B9BC: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x018E); nes_trace_indirect_jump(0xB9BC, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_B893_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B893_b11");
#endif
label_B893:;
    /* $B893: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x17 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B895:;
    /* $B895: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x50; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B899:;
    /* $B899: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B89A:;
    /* $B89A: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0109 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B89D:;
    /* $B89D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B89E:;
    /* $B89E: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB89E; g_rti_bank = 11; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B8BD_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8BD_b11");
#endif
label_B8BD:;
    /* $B8BD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x8E; FLAG_NZ(g_cpu.Y);
label_B8BF:;
    /* $B8BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_B8C1:;
    /* $B8C1: 8E */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.X);
label_B8C4:;
    /* $B8C4: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xAE00); FLAG_NZ(g_cpu.X);
label_B8C7:; /* robot_master_main_indices */
    /* $B8C7: 8E */ maybe_trigger_vblank(4); nes_write(0x808D, g_cpu.X);
label_B8CA:;
    /* $B8CA: 8D */ maybe_trigger_vblank(4); nes_write(0x808D, g_cpu.A);
label_B8CD:;
    /* $B8CD: 8D */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.A);
label_B8D0:;
    /* $B8D0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B8D1:;
    /* $B8D1: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8D3:;
    /* $B8D3: 8E */ maybe_trigger_vblank(4); nes_write(0x8EB2, g_cpu.X);
label_B8D6:;
    /* $B8D6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x8E; FLAG_NZ(g_cpu.Y);
label_B8D8:;
    /* $B8D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x8E; FLAG_NZ(g_cpu.Y);
label_B8DA:;
    /* $B8DA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8DA); return;
}

void func_9785_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b11");
#endif
label_9785:;
    /* $9785: 80 */ maybe_trigger_vblank(2); /* NOP */
label_9787:;
    /* $9787: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x73) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9789:;
    /* $9789: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x76 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_978B:;
    /* $978B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9F0_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F0_b11");
#endif
label_B9F0:;
    /* $B9F0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B9F1:;
    /* $B9F1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x8F8C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9F4:;
    /* $B9F4: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B9F6:;
    /* $B9F6: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_B9F7:;
    /* $B9F7: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9F9:;
    /* $B9F9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9FB:;
    /* $B9FB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9FD:;
    /* $B9FD: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B9FF:;
    /* $B9FF: 8C */ maybe_trigger_vblank(4); nes_write(0x9301, g_cpu.Y);
label_BA02:;
    /* $BA02: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA04:;
    /* $BA04: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xAC; FLAG_NZ(g_cpu.Y);
label_BA06:;
    /* $BA06: 8F */ maybe_trigger_vblank(4); nes_write(0x01B3, g_cpu.A & g_cpu.X); /* SAX */
label_BA09:;
    /* $BA09: 94 */ maybe_trigger_vblank(4); nes_write((0x06 + g_cpu.X) & 0xFF, g_cpu.Y);
label_BA0B:;
    /* $BA0B: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA0D:;
    /* $BA0D: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_BA0F:;
    /* $BA0F: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x96) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA11:;
    /* $BA11: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA13:;
    /* $BA13: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BA15:;
    /* $BA15: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA17:;
    /* $BA17: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BA19:;
    /* $BA19: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BA1B:;
    /* $BA1B: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x93) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_BA1D:;
    /* $BA1D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA1E:;
    /* $BA1E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x19BA), 11); return; }
label_BA20:;
    /* $BA20: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BA21:;
    /* $BA21: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA23:;
    /* $BA23: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_BA24:;
    /* $BA24: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BA25:;
    /* $BA25: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA27:;
    /* $BA27: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_BA29:;
    /* $BA29: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x64; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA2B:;
    /* $BA2B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BA2C:;
    /* $BA2C: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_BA2D:;
    /* $BA2D: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BA30:;
    /* $BA30: 89 */ maybe_trigger_vblank(2); /* NOP */
label_BA32:;
    /* $BA32: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_BA34:;
    /* $BA34: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_BA36:;
    /* $BA36: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x62 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BA38:;
    /* $BA38: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99AD_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99AD_b11");
#endif
label_99AD:;
    /* $99AD: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6C68); nes_trace_indirect_jump(0x99AD, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_B9AD_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9AD_b11");
#endif
label_B9AD:;
    /* $B9AD: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9AF:;
    /* $B9AF: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B9B1:;
    /* $B9B1: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B9B3:;
    /* $B9B3: 8E */ maybe_trigger_vblank(4); nes_write(0xCE01, g_cpu.X);
label_B9B6:;
    /* $B9B6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9B8:;
    /* $B9B8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9BA:;
    /* $B9BA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B9BC:;
    /* $B9BC: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x018E); nes_trace_indirect_jump(0xB9BC, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_A504_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A504_b11");
#endif
label_A504:;
    /* $A504: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x60 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A506:;
    /* $A506: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A507:;
    /* $A507: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88E8_b11_body(int _entry) {
    switch (_entry) {
        case 1: goto label_88F2;
        case 2: goto label_88FA;
    }
label_88E8:;
    /* $88E8: 89 */ maybe_trigger_vblank(2); /* NOP */
label_88EA:;
    /* $88EA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08EC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xB907, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88EA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88ED:;
    /* $88ED: 5A */ maybe_trigger_vblank(2); /* NOP */
label_88EE:;
    /* $88EE: 89 */ maybe_trigger_vblank(2); /* NOP */
label_88F0:;
    /* $88F0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_88F2:;
    /* $88F2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88F5:;
    /* $88F5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xDF; FLAG_NZ(g_cpu.A);
label_88F7:;
    /* $88F7: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88FA:;
    /* $88FA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_88FC:;
    /* $88FC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88FE:;
    /* $88FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8900:;
    /* $8900: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8914; }
label_8902:;
    /* $8902: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8903:;
    /* $8903: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0708 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8906:;
    /* $8906: 9D */ maybe_trigger_vblank(5); nes_write((0x0708 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8909:;
    /* $8909: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8914; }
label_890B:;
    /* $890B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_890E:;
    /* $890E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_890F:;
    /* $890F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_8911:;
    /* $8911: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8914:;
    /* $8914: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88E8_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E8_b11");
#endif
    func_88E8_b11_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_88F2_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88F2_b11");
#endif
    func_88E8_b11_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_88FA_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88FA_b11");
#endif
    func_88E8_b11_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9BA_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9BA_b11");
#endif
label_B9BA:;
    /* $B9BA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B9BC:;
    /* $B9BC: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x018E); nes_trace_indirect_jump(0xB9BC, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_A904_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b11");
#endif
label_A904:;
    /* $A904: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0907), 11); return; }
label_A906:;
    /* $A906: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A910; }
label_A908:;
    /* $A908: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A90A:;
    /* $A90A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x08BB), 11); return; }
label_A90C:;
    /* $A90C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A90D:;
    /* $A90D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A910; }
label_A90F:;
    /* $A90F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A910:;
    /* $A910: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A911:;
    /* $A911: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A913:;
    /* $A913: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A914:;
    /* $A914: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A915:;
    /* $A915: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A916:;
    /* $A916: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A919:;
    /* $A919: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A91C; }
label_A91B:;
    /* $A91B: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A91C:;
    /* $A91C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A91D:;
    /* $A91D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A91F:;
    /* $A91F: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A920:;
    /* $A920: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0930), 11); return; }
label_A922:;
    /* $A922: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: FA */ maybe_trigger_vblank(2); /* NOP */
label_A925:;
    /* $A925: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A927:;
    /* $A927: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A928:;
    /* $A928: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_A92B:;
    /* $A92B: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92D:;
    /* $A92D: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92F:;
    /* $A92F: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A931:;
    /* $A931: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A932:; return;
label_A934:; return;
label_A936:; return;
label_A937:; return;
label_A93A:; return;
label_A93B:; return;
label_A93C:; return;
label_A93D:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A943:; return;
label_A944:; return;
label_A945:; return;
label_A948:; return;
label_A94B:; return;
label_A94D:; return;
label_A94F:; return;
label_A952:; return;
label_A954:; return;
label_A955:; return;
label_A957:; return;
label_A959:; return;
label_A95C:; return;
label_A95E:; return;
label_A95F:; return;
label_A961:; return;
label_A963:; return;
label_A966:; return;
label_A969:; return;
label_A96A:; return;
label_A96D:; return;
label_A96F:; return;
label_A972:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A979:; return;
label_A97B:; return;
label_A97C:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A982:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A988:; return;
label_A989:; return;
label_A98C:; return;
label_A98E:; return;
label_A98F:; return;
label_A992:; return;
label_A993:; return;
label_A995:; return;
label_A998:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99F:; return;
label_A9A1:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B3:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9BA:; return;
label_A9BD:; return;
label_A9C0:; return;
label_A9C2:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CC:; return;
label_A9CE:; return;
label_A9CF:; return;
label_A9D0:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D8:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DC:; return;
label_A9DE:; return;
label_A9E0:; return;
label_A9E1:; return;
label_A9E4:; return;
label_A9E6:; return;
label_A9E7:; return;
label_A9E9:; return;
label_A9EB:; return;
label_A9EC:; return;
label_A9EF:; return;
label_A9F1:; return;
label_A9F3:; return;
label_A9F4:; return;
label_A9F5:; return;
label_A9F7:; return;
label_A9F9:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA04:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0D:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA12:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1C:; return;
label_AA1E:; return;
label_AA21:; return;
label_AA22:; return;
label_AA24:; return;
label_AA25:; return;
label_AA26:; return;
label_AA27:; return;
label_AA28:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2E:; return;
label_AA31:; return;
label_AA34:; return;
label_AA35:; return;
label_AA38:; return;
label_AA3A:; return;
label_AA3C:; return;
label_AA3F:; return;
label_AA41:; return;
label_AA42:; return;
label_AA44:; return;
label_AA45:; return;
label_AA48:; return;
label_AA4A:; return;
label_AA4D:; return;
label_AA4E:; return;
label_AA50:; return;
label_AA51:; return;
label_AA52:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA5A:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5E:; return;
label_AA60:; return;
label_AA62:; return;
label_AA63:; return;
label_AA65:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6C:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA72:; return;
label_AA74:; return;
label_AA77:; return;
label_AA7A:; return;
label_AA7C:; return;
label_AA7F:; return;
label_AA82:; return;
label_AA85:; return;
label_AA88:; return;
label_AA8B:; return;
label_AA8C:; return;
label_AA8E:; return;
label_AA90:; return;
label_AA93:; return;
label_AA94:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9C:; return;
label_AA9E:; return;
label_AAA1:; return;
label_AAA4:; return;
label_AAA6:; return;
label_AAA7:; return;
label_AAAA:; return;
label_AAAD:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB0:; return;
label_AAB1:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB9:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC6:; return;
label_AAC7:; return;
label_AACA:; return;
label_AACC:; return;
label_AACE:; return;
label_AACF:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AADA:; return;
label_AADD:; return;
label_AADF:; return;
label_AAE2:; return;
label_AAE5:; return;
label_AAE6:; return;
label_AAE8:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFB:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB01:; return;
label_AB04:; return;
label_AB06:; return;
label_AB07:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB0F:; return;
label_AB11:; return;
label_AB13:; return;
label_AB15:; return;
label_AB17:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1B:; return;
label_AB1D:; return;
label_AB1F:; return;
label_AB21:; return;
label_AB23:; return;
label_AB25:; return;
label_AB27:; return;
label_AB29:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB32:; return;
label_AB34:; return;
label_AB35:; return;
label_AB36:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3F:; return;
label_AB41:; return;
label_AB42:; return;
label_AB44:; return;
label_AB46:; return;
label_AB47:; return;
label_AB49:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB53:; return;
label_AB55:; return;
label_AB57:; return;
label_AB58:; return;
label_AB5A:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5F:; return;
label_AB61:; return;
label_AB63:; return;
label_AB66:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6E:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB76:; return;
label_AB78:; return;
label_AB7A:; return;
label_AB7C:; return;
label_AB7E:; return;
label_AB80:; return;
label_AB82:; return;
label_AB84:; return;
label_AB87:; return;
label_AB88:; return;
label_AB8A:; return;
label_AB8B:; return;
label_AB8D:; return;
label_AB8F:; return;
label_AB91:; return;
label_AB92:; return;
label_AB94:; return;
label_AB96:; return;
label_AB97:; return;
label_AB99:; return;
label_AB9B:; return;
label_AB9E:; return;
label_ABA0:; return;
label_ABA2:; return;
label_ABA3:; return;
label_ABA5:; return;
label_ABA7:; return;
label_ABA9:; return;
label_ABAB:; return;
label_ABAD:; return;
label_ABB0:; return;
label_ABB1:; return;
label_ABB3:; return;
label_ABB5:; return;
label_ABB7:; return;
label_ABB9:; return;
label_ABBA:; return;
label_ABBB:; return;
label_ABBD:; return;
label_ABBF:; return;
label_ABC1:; return;
label_ABC2:; return;
label_ABC4:; return;
label_ABC6:; return;
label_ABC9:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD2:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD8:; return;
label_ABDA:; return;
label_ABDC:; return;
label_ABDE:; return;
label_ABE0:; return;
label_ABE1:; return;
label_ABE2:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEB:; return;
label_ABED:; return;
label_ABEE:; return;
label_ABEF:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF6:; return;
label_ABF7:; return;
label_ABF8:; return;
label_ABFB:; return;
label_ABFD:; return;
label_AC00:; return;
label_AC03:; return;
label_AC04:; return;
label_AC05:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0B:; return;
label_AC0D:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC1A:; return;
label_AC1B:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC23:; return;
label_AC25:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
label_AC31:; return;
label_AC32:; return;
label_AC34:; return;
label_AC36:; return;
label_AC39:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3F:; return;
label_AC41:; return;
label_AC42:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4A:; return;
label_AC4C:; return;
label_AC4E:; return;
label_AC51:; return;
label_AC53:; return;
label_AC55:; return;
label_AC58:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5E:; return;
label_AC60:; return;
label_AC62:; return;
label_AC64:; return;
label_AC65:; return;
label_AC67:; return;
label_AC6A:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC72:; return;
label_AC75:; return;
label_AC77:; return;
label_AC7A:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC88:; return;
label_AC8B:; return;
label_AC8D:; return;
label_AC8F:; return;
label_AC91:; return;
label_AC92:; return;
label_AC94:; return;
label_AC95:; return;
label_AC97:; return;
label_AC9A:; return;
label_AC9D:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA3:; return;
label_ACA6:; return;
label_ACA9:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAF:; return;
label_ACB2:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBB:; return;
label_ACBE:; return;
label_ACC1:; return;
label_ACC4:; return;
label_ACC7:; return;
label_ACCA:; return;
label_ACCD:; return;
label_ACD0:; return;
label_ACD3:; return;
label_ACD5:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF9:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFD:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD02:; return;
label_AD03:; return;
label_AD05:; return;
label_AD08:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0D:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD12:; return;
label_AD13:; return;
label_AD14:; return;
label_AD17:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD24:; return;
label_AD27:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2D:; return;
label_AD2F:; return;
label_AD31:; return;
label_AD33:; return;
label_AD35:; return;
label_AD37:; return;
label_AD39:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD41:; return;
label_AD43:; return;
label_AD45:; return;
label_AD48:; return;
label_AD4A:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD50:; return;
label_AD51:; return;
label_AD54:; return;
label_AD55:; return;
label_AD58:; return;
label_AD5A:; return;
label_AD5C:; return;
label_AD5F:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD6A:; return;
label_AD6C:; return;
label_AD6E:; return;
label_AD71:; return;
label_AD73:; return;
label_AD75:; return;
label_AD76:; return;
label_AD77:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7D:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD81:; return;
label_AD82:; return;
label_AD84:; return;
label_AD86:; return;
label_AD88:; return;
label_AD89:; return;
label_AD8B:; return;
label_AD8D:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD91:; return;
label_AD92:; return;
label_AD94:; return;
label_AD96:; return;
label_AD97:; return;
label_AD99:; return;
label_AD9B:; return;
label_AD9D:; return;
label_AD9E:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAD:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB7:; return;
label_ADB9:; return;
label_ADBB:; return;
label_ADBD:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC4:; return;
label_ADC6:; return;
label_ADC7:; return;
label_ADC9:; return;
label_ADCB:; return;
label_ADCD:; return;
label_ADCE:; return;
label_ADD0:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD5:; return;
label_ADD7:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE3:; return;
label_ADE5:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEC:; return;
label_ADEE:; return;
label_ADEF:; return;
label_ADF1:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF7:; return;
label_ADF8:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE04:; return;
label_AE07:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE13:; return;
label_AE16:; return;
label_AE17:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE20:; return;
label_AE22:; return;
label_AE23:; return;
label_AE25:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2D:; return;
label_AE30:; return;
label_AE31:; return;
label_AE33:; return;
label_AE35:; return;
label_AE36:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3D:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE48:; return;
label_AE4A:; return;
label_AE4B:; return;
label_AE4D:; return;
label_AE4E:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE56:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5B:; return;
label_AE5D:; return;
label_AE60:; return;
label_AE63:; return;
label_AE64:; return;
label_AE66:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6E:; return;
label_AE70:; return;
label_AE72:; return;
label_AE74:; return;
label_AE76:; return;
label_AE79:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE84:; return;
label_AE86:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE92:; return;
label_AE95:; return;
label_AE97:; return;
label_AE98:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9C:; return;
label_AE9D:; return;
label_AE9F:; return;
label_AEA0:; return;
label_AEA3:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBB:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC3:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECB:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED4:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDD:; return;
label_AEE0:; return;
label_AEE1:; return;
label_AEE3:; return;
label_AEE4:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF0:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF6:; return;
label_AEF9:; return;
label_AEFB:; return;
label_AEFD:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF02:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF08:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF0F:; return;
label_AF10:; return;
label_AF11:; return;
label_AF13:; return;
label_AF15:; return;
label_AF16:; return;
label_AF17:; return;
label_AF18:; return;
label_AF1A:; return;
label_AF1C:; return;
label_AF1F:; return;
label_AF20:; return;
label_AF23:; return;
label_AF24:; return;
label_AF26:; return;
label_AF29:; return;
label_AF2B:; return;
label_AF2C:; return;
label_AF2F:; return;
label_AF30:; return;
label_AF32:; return;
label_AF35:; return;
label_AF37:; return;
label_AF3A:; return;
label_AF3B:; return;
label_AF3C:; return;
label_AF3D:; return;
label_AF3F:; return;
label_AF42:; return;
label_AF45:; return;
label_AF47:; return;
label_AF48:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF51:; return;
label_AF53:; return;
label_AF54:; return;
label_AF55:; return;
label_AF56:; return;
label_AF58:; return;
label_AF5A:; return;
label_AF5C:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF60:; return;
label_AF62:; return;
label_AF63:; return;
label_AF64:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6A:; return;
label_AF6C:; return;
label_AF6E:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7A:; return;
label_AF7C:; return;
label_AF7E:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF84:; return;
label_AF86:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8E:; return;
label_AF8F:; return;
label_AF91:; return;
label_AF93:; return;
label_AF95:; return;
label_AF96:; return;
label_AF97:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA3:; return;
label_AFA4:; return;
label_AFA5:; return;
label_AFA7:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAA:; return;
label_AFAB:; return;
label_AFAC:; return;
label_AFAE:; return;
label_AFB0:; return;
label_AFB1:; return;
label_AFB2:; return;
label_AFB3:; return;
label_AFB5:; return;
label_AFB7:; return;
label_AFB8:; return;
label_AFB9:; return;
label_AFBB:; return;
label_AFBC:; return;
label_AFBD:; return;
label_AFBE:; return;
label_AFBF:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC3:; return;
label_AFC5:; return;
label_AFC6:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFC9:; return;
label_AFCC:; return;
label_AFCF:; return;
label_AFD1:; return;
label_AFD2:; return;
label_AFD3:; return;
label_AFD4:; return;
label_AFD5:; return;
label_AFD6:; return;
label_AFD8:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDC:; return;
label_AFDD:; return;
label_AFDE:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE5:; return;
label_AFE7:; return;
label_AFE8:; return;
label_AFE9:; return;
label_AFEA:; return;
label_AFEB:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFEF:; return;
label_AFF1:; return;
label_AFF2:; return;
label_AFF3:; return;
label_AFF4:; return;
label_AFF5:; return;
label_AFF8:; return;
label_AFFB:; return;
label_AFFD:; return;
label_AFFE:; return;
label_AFFF:; return;
label_B000:; return;
label_B001:; return;
label_B002:; return;
label_B004:; return;
label_B005:; return;
label_B007:; return;
label_B008:; return;
label_B009:; return;
label_B00A:; return;
label_B00B:; return;
label_B00C:; return;
label_B00E:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B014:; return;
label_B015:; return;
label_B016:; return;
label_B017:; return;
label_B018:; return;
label_B01A:; return;
label_B01B:; return;
label_B01D:; return;
label_B01E:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B024:; return;
label_B027:; return;
label_B029:; return;
label_B02A:; return;
label_B02B:; return;
label_B02C:; return;
label_B02D:; return;
label_B02E:; return;
label_B030:; return;
label_B031:; return;
label_B033:; return;
label_B034:; return;
label_B035:; return;
label_B036:; return;
label_B037:; return;
label_B038:; return;
label_B03A:; return;
label_B03C:; return;
label_B03D:; return;
label_B03F:; return;
label_B040:; return;
label_B041:; return;
label_B042:; return;
label_B043:; return;
label_B044:; return;
label_B046:; return;
label_B047:; return;
label_B049:; return;
label_B04A:; return;
label_B04B:; return;
label_B04C:; return;
label_B04D:; return;
label_B050:; return;
label_B053:; return;
label_B055:; return;
label_B056:; return;
label_B057:; return;
label_B058:; return;
label_B059:; return;
label_B05A:; return;
label_B05C:; return;
label_B05D:; return;
label_B05F:; return;
label_B060:; return;
label_B061:; return;
label_B062:; return;
label_B063:; return;
label_B064:; return;
label_B066:; return;
label_B068:; return;
label_B069:; return;
label_B06B:; return;
label_B06C:; return;
label_B06D:; return;
label_B06E:; return;
label_B06F:; return;
label_B070:; return;
label_B072:; return;
label_B073:; return;
label_B075:; return;
label_B076:; return;
label_B077:; return;
label_B078:; return;
label_B079:; return;
label_B07C:; return;
label_B07F:; return;
label_B081:; return;
label_B082:; return;
label_B083:; return;
label_B084:; return;
label_B085:; return;
label_B086:; return;
label_B088:; return;
label_B089:; return;
label_B08B:; return;
label_B08C:; return;
label_B08D:; return;
label_B08E:; return;
label_B08F:; return;
label_B090:; return;
label_B092:; return;
label_B094:; return;
label_B095:; return;
label_B097:; return;
label_B09A:; return;
label_B09D:; return;
label_B0A0:; return;
label_B0A3:; return;
label_B0A6:; return;
label_B0A7:; return;
label_B0A8:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0B0:; return;
label_B0B3:; return;
label_B0B6:; return;
label_B0B9:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C3:; return;
label_B0C5:; return;
label_B0C7:; return;
label_B0C8:; return;
label_B0CA:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0CF:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0D9:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E0:; return;
label_B0E2:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E6:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0E9:; return;
label_B0EA:; return;
label_B0ED:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F9:; return;
label_B0FA:; return;
label_B0FD:; return;
label_B0FE:; return;
label_B101:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B107:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B119:; return;
label_B11C:; return;
label_B11F:; return;
label_B121:; return;
label_B123:; return;
label_B124:; return;
label_B126:; return;
label_B128:; return;
label_B129:; return;
label_B12A:; return;
label_B12B:; return;
label_B12D:; return;
label_B12E:; return;
label_B130:; return;
label_B131:; return;
label_B133:; return;
label_B135:; return;
label_B136:; return;
label_B139:; return;
label_B13A:; return;
label_B13B:; return;
label_B13D:; return;
label_B140:; return;
label_B141:; return;
label_B143:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14A:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B156:; return;
label_B159:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B166:; return;
label_B169:; return;
label_B16C:; return;
label_B16E:; return;
label_B171:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B183:; return;
label_B186:; return;
label_B189:; return;
label_B18A:; return;
label_B18D:; return;
label_B190:; return;
label_B193:; return;
label_B194:; return;
label_B196:; return;
label_B197:; return;
label_B19A:; return;
label_B19B:; return;
label_B19D:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A3:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AE:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B5:; return;
label_B1B7:; return;
label_B1B9:; return;
label_B1BA:; return;
label_B1BD:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C2:; return;
label_B1C4:; return;
label_B1C5:; return;
label_B1C8:; return;
label_B1CA:; return;
label_B1CB:; return;
label_B1CD:; return;
label_B1CE:; return;
label_B1D1:; return;
label_B1D3:; return;
label_B1D5:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DA:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F3:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FE:; return;
label_B1FF:; return;
label_B201:; return;
label_B202:; return;
label_B204:; return;
label_B205:; return;
label_B208:; return;
label_B209:; return;
label_B20B:; return;
label_B20D:; return;
label_B20F:; return;
label_B210:; return;
label_B211:; return;
label_B212:; return;
label_B214:; return;
label_B215:; return;
label_B217:; return;
label_B218:; return;
label_B219:; return;
label_B21B:; return;
label_B21C:; return;
label_B21E:; return;
label_B21F:; return;
label_B221:; return;
label_B222:; return;
label_B225:; return;
label_B226:; return;
label_B229:; return;
label_B22A:; return;
label_B22D:; return;
label_B22F:; return;
label_B231:; return;
label_B234:; return;
label_B235:; return;
label_B238:; return;
label_B23B:; return;
label_B23C:; return;
label_B23E:; return;
label_B23F:; return;
label_B242:; return;
label_B243:; return;
label_B246:; return;
label_B248:; return;
label_B24A:; return;
label_B24C:; return;
label_B24D:; return;
label_B24F:; return;
label_B251:; return;
label_B253:; return;
label_B255:; return;
label_B258:; return;
label_B25B:; return;
label_B25E:; return;
label_B260:; return;
label_B261:; return;
label_B262:; return;
label_B264:; return;
label_B266:; return;
label_B268:; return;
label_B269:; return;
label_B26C:; return;
label_B26E:; return;
label_B26F:; return;
label_B271:; return;
label_B273:; return;
label_B275:; return;
label_B278:; return;
label_B27A:; return;
label_B27C:; return;
label_B27E:; return;
label_B27F:; return;
label_B281:; return;
label_B282:; return;
label_B285:; return;
label_B288:; return;
label_B289:; return;
label_B28C:; return;
label_B28E:; return;
label_B28F:; return;
label_B291:; return;
label_B294:; return;
label_B296:; return;
label_B298:; return;
label_B29B:; return;
label_B29E:; return;
label_B2A1:; return;
label_B2A3:; return;
label_B2A5:; return;
label_B2A7:; return;
label_B2A8:; return;
label_B2AB:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B5:; return;
label_B2B7:; return;
label_B2B9:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2C0:; return;
label_B2C3:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2C9:; return;
label_B2CB:; return;
label_B2CC:; return;
label_B2CD:; return;
label_B2CF:; return;
label_B2D1:; return;
label_B2D3:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D7:; return;
label_B2D9:; return;
label_B2DB:; return;
label_B2DC:; return;
label_B2DD:; return;
label_B2DE:; return;
label_B2DF:; return;
label_B2E1:; return;
label_B2E3:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2EE:; return;
label_B2F1:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2F9:; return;
label_B2FB:; return;
label_B2FE:; return;
label_B301:; return;
label_B302:; return;
label_B304:; return;
label_B305:; return;
label_B308:; return;
label_B30B:; return;
label_B30E:; return;
label_B310:; return;
label_B311:; return;
label_B313:; return;
label_B316:; return;
label_B318:; return;
label_B31B:; return;
label_B31D:; return;
label_B320:; return;
label_B321:; return;
label_B324:; return;
label_B327:; return;
label_B329:; return;
label_B32B:; return;
label_B32D:; return;
label_B32E:; return;
label_B32F:; return;
label_B330:; return;
label_B331:; return;
label_B333:; return;
label_B336:; return;
label_B337:; return;
label_B339:; return;
label_B33B:; return;
label_B33D:; return;
label_B340:; return;
label_B341:; return;
label_B343:; return;
label_B345:; return;
label_B347:; return;
label_B349:; return;
label_B34A:; return;
label_B34C:; return;
label_B34E:; return;
label_B350:; return;
label_B352:; return;
label_B354:; return;
label_B356:; return;
label_B358:; return;
label_B35A:; return;
label_B35C:; return;
label_B35F:; return;
label_B361:; return;
label_B362:; return;
label_B364:; return;
label_B365:; return;
label_B368:; return;
label_B36A:; return;
label_B36C:; return;
label_B36E:; return;
label_B370:; return;
label_B372:; return;
label_B374:; return;
label_B376:; return;
label_B378:; return;
label_B37A:; return;
label_B37B:; return;
label_B37E:; return;
label_B380:; return;
label_B382:; return;
label_B384:; return;
label_B386:; return;
label_B388:; return;
label_B389:; return;
label_B38A:; return;
label_B38B:; return;
label_B38D:; return;
label_B390:; return;
label_B391:; return;
label_B393:; return;
label_B395:; return;
label_B398:; return;
label_B39B:; return;
label_B39D:; return;
label_B39F:; return;
label_B3A1:; return;
label_B3A2:; return;
label_B3A3:; return;
label_B3A4:; return;
label_B3A5:; return;
label_B3A7:; return;
label_B3AA:; return;
label_B3AC:; return;
label_B3AE:; return;
label_B3B0:; return;
label_B3B2:; return;
label_B3B5:; return;
label_B3B7:; return;
label_B3B9:; return;
label_B3BB:; return;
label_B3BC:; return;
label_B3BD:; return;
label_B3C0:; return;
label_B3C1:; return;
label_B3C4:; return;
label_B3C6:; return;
label_B3C9:; return;
label_B3CB:; return;
label_B3CE:; return;
label_B3D0:; return;
label_B3D2:; return;
label_B3D4:; return;
label_B3D6:; return;
label_B3D7:; return;
label_B3DA:; return;
label_B3DC:; return;
label_B3DF:; return;
label_B3E2:; return;
label_B3E5:; return;
label_B3E8:; return;
label_B3EB:; return;
label_B3EC:; return;
label_B3EE:; return;
label_B3F0:; return;
label_B3F2:; return;
label_B3F4:; return;
label_B3F5:; return;
label_B3F7:; return;
label_B3FA:; return;
label_B3FD:; return;
label_B3FF:; return;
label_B400:; return;
label_B402:; return;
label_B405:; return;
label_B408:; return;
label_B40B:; return;
label_B40E:; return;
label_B411:; return;
label_B414:; return;
label_B417:; return;
label_B419:; return;
label_B41B:; return;
label_B41D:; return;
label_B41F:; return;
label_B421:; return;
label_B424:; return;
label_B426:; return;
label_B428:; return;
label_B429:; return;
label_B42B:; return;
label_B42D:; return;
label_B42F:; return;
label_B430:; return;
label_B433:; return;
label_B436:; return;
label_B438:; return;
label_B43A:; return;
label_B43C:; return;
label_B43E:; return;
label_B43F:; return;
label_B441:; return;
label_B442:; return;
label_B444:; return;
label_B447:; return;
label_B44A:; return;
label_B44D:; return;
label_B450:; return;
label_B452:; return;
label_B455:; return;
label_B456:; return;
label_B459:; return;
label_B45A:; return;
label_B45C:; return;
label_B45E:; return;
label_B460:; return;
label_B461:; return;
label_B463:; return;
label_B465:; return;
label_B466:; return;
label_B468:; return;
label_B469:; return;
label_B46A:; return;
label_B46C:; return;
label_B46E:; return;
label_B470:; return;
label_B472:; return;
label_B474:; return;
label_B476:; return;
label_B478:; return;
label_B47A:; return;
label_B47C:; return;
label_B47E:; return;
label_B480:; return;
label_B482:; return;
label_B484:; return;
label_B486:; return;
label_B488:; return;
label_B48B:; return;
label_B48C:; return;
label_B48D:; return;
label_B48F:; return;
label_B492:; return;
label_B494:; return;
label_B495:; return;
label_B497:; return;
label_B499:; return;
label_B49B:; return;
label_B49D:; return;
label_B49E:; return;
label_B4A0:; return;
label_B4A2:; return;
label_B4A3:; return;
label_B4A6:; return;
label_B4A8:; return;
label_B4AA:; return;
label_B4AC:; return;
label_B4AE:; return;
label_B4AF:; return;
label_B4B0:; return;
label_B4B2:; return;
label_B4B4:; return;
label_B4B5:; return;
label_B4B6:; return;
label_B4B8:; return;
label_B4B9:; return;
label_B4BB:; return;
label_B4BD:; return;
label_B4BF:; return;
label_B4C2:; return;
label_B4C4:; return;
label_B4C6:; return;
label_B4C8:; return;
label_B4CB:; return;
label_B4CD:; return;
label_B4CF:; return;
label_B4D0:; return;
label_B4D1:; return;
label_B4D3:; return;
label_B4D5:; return;
label_B4D6:; return;
label_B4D7:; return;
label_B4DA:; return;
label_B4DC:; return;
label_B4DE:; return;
label_B4E0:; return;
label_B4E2:; return;
label_B4E3:; return;
label_B4E4:; return;
label_B4E6:; return;
label_B4E8:; return;
label_B4E9:; return;
label_B4EA:; return;
label_B4EC:; return;
label_B4ED:; return;
label_B4EF:; return;
label_B4F1:; return;
label_B4F3:; return;
label_B4F5:; return;
label_B4F7:; return;
label_B4FA:; return;
label_B4FB:; return;
label_B4FC:; return;
label_B4FE:; return;
label_B4FF:; return;
label_B500:; return;
label_B503:; return;
label_B506:; return;
label_B508:; return;
label_B50A:; return;
label_B50B:; return;
label_B50D:; return;
label_B50F:; return;
label_B510:; return;
label_B512:; return;
label_B513:; return;
label_B514:; return;
label_B515:; return;
label_B517:; return;
label_B518:; return;
label_B51A:; return;
label_B51B:; return;
label_B51D:; return;
label_B51E:; return;
label_B520:; return;
label_B521:; return;
label_B523:; return;
label_B524:; return;
label_B527:; return;
label_B529:; return;
label_B52A:; return;
label_B52B:; return;
label_B52D:; return;
label_B52F:; return;
label_B530:; return;
label_B532:; return;
label_B535:; return;
label_B536:; return;
label_B539:; return;
label_B53C:; return;
label_B53D:; return;
label_B540:; return;
label_B541:; return;
label_B543:; return;
label_B545:; return;
label_B547:; return;
label_B548:; return;
label_B54A:; return;
label_B54B:; return;
label_B54D:; return;
label_B54F:; return;
label_B551:; return;
label_B554:; return;
label_B556:; return;
label_B558:; return;
label_B55A:; return;
label_B55D:; return;
label_B55F:; return;
label_B562:; return;
label_B565:; return;
label_B566:; return;
label_B567:; return;
label_B569:; return;
label_B56B:; return;
label_B56D:; return;
label_B56F:; return;
label_B570:; return;
label_B571:; return;
label_B572:; return;
label_B573:; return;
label_B575:; return;
label_B576:; return;
label_B577:; return;
label_B578:; return;
label_B579:; return;
label_B57B:; return;
label_B57D:; return;
label_B580:; return;
label_B582:; return;
label_B583:; return;
label_B585:; return;
label_B587:; return;
label_B58A:; return;
label_B58D:; return;
label_B58F:; return;
label_B592:; return;
label_B594:; return;
label_B595:; return;
label_B596:; return;
label_B597:; return;
label_B599:; return;
label_B59B:; return;
label_B59D:; return;
label_B5A0:; return;
label_B5A2:; return;
label_B5A4:; return;
label_B5A6:; return;
label_B5A9:; return;
label_B5AA:; return;
label_B5AD:; return;
label_B5AF:; return;
label_B5B0:; return;
label_B5B1:; return;
label_B5B4:; return;
label_B5B6:; return;
label_B5B8:; return;
label_B5BB:; return;
label_B5BC:; return;
label_B5BF:; return;
label_B5C2:; return;
label_B5C4:; return;
label_B5C6:; return;
label_B5C8:; return;
label_B5CA:; return;
label_B5CB:; return;
label_B5CC:; return;
label_B5CD:; return;
label_B5D0:; return;
label_B5D1:; return;
label_B5D3:; return;
label_B5D4:; return;
label_B5D5:; return;
label_B5D6:; return;
label_B5D7:; return;
label_B5DA:; return;
label_B5DC:; return;
label_B5DD:; return;
label_B5DF:; return;
label_B5E1:; return;
label_B5E3:; return;
label_B5E4:; return;
label_B5E6:; return;
label_B5E8:; return;
label_B5E9:; return;
label_B5EB:; return;
label_B5EC:; return;
label_B5EE:; return;
label_B5F1:; return;
label_B5F4:; return;
label_B5F6:; return;
label_B5F7:; return;
label_B5F9:; return;
label_B5FB:; return;
label_B5FD:; return;
label_B5FF:; return;
label_B601:; return;
label_B603:; return;
label_B604:; return;
label_B606:; return;
label_B608:; return;
label_B609:; return;
label_B60B:; return;
label_B60E:; return;
label_B610:; return;
label_B612:; return;
label_B613:; return;
label_B615:; return;
label_B616:; return;
label_B618:; return;
label_B61A:; return;
label_B61D:; return;
label_B61F:; return;
label_B621:; return;
label_B623:; return;
label_B625:; return;
label_B628:; return;
label_B62B:; return;
label_B62E:; return;
label_B630:; return;
label_B631:; return;
label_B632:; return;
label_B633:; return;
label_B635:; return;
label_B637:; return;
label_B639:; return;
label_B63B:; return;
label_B63D:; return;
label_B63F:; return;
label_B641:; return;
label_B644:; return;
label_B646:; return;
label_B647:; return;
label_B649:; return;
label_B64B:; return;
label_B64D:; return;
label_B64F:; return;
label_B650:; return;
label_B652:; return;
label_B654:; return;
label_B656:; return;
label_B659:; return;
label_B65B:; return;
label_B65D:; return;
label_B65F:; return;
label_B661:; return;
label_B663:; return;
label_B665:; return;
label_B668:; return;
label_B66A:; return;
label_B66B:; return;
label_B66E:; return;
label_B66F:; return;
label_B672:; return;
label_B673:; return;
label_B675:; return;
label_B677:; return;
label_B679:; return;
label_B67B:; return;
label_B67C:; return;
label_B67E:; return;
label_B67F:; return;
label_B680:; return;
label_B681:; return;
label_B682:; return;
label_B683:; return;
label_B686:; return;
label_B687:; return;
label_B68A:; return;
label_B68C:; return;
label_B68F:; return;
label_B692:; return;
label_B694:; return;
label_B696:; return;
label_B698:; return;
label_B699:; return;
label_B69C:; return;
label_B69D:; return;
label_B69F:; return;
label_B6A1:; return;
label_B6A3:; return;
label_B6A5:; return;
label_B6A7:; return;
label_B6A8:; return;
label_B6AA:; return;
label_B6E9:; return;
label_B6EB:; return;
label_B6ED:; return;
label_B6EF:; return;
label_B6F1:; return;
label_B6F4:; return;
label_B6F7:; return;
label_B6F8:; return;
label_B6FA:; return;
label_B6FC:; return;
label_B6FD:; return;
label_B6FF:; return;
label_B701:; return;
label_B702:; return;
label_B703:; return;
label_B705:; return;
label_B707:; return;
label_B709:; return;
label_B70B:; return;
label_B70C:; return;
label_B70E:; return;
label_B710:; return;
label_B712:; return;
label_B715:; return;
label_B716:; return;
label_B717:; return;
label_B719:; return;
label_B71C:; return;
label_B71E:; return;
label_B720:; return;
label_B78E:; return;
label_B790:; return;
label_B792:; return;
label_B794:; return;
label_B796:; return;
label_B798:; return;
label_B79A:; return;
label_B79B:; return;
label_B79D:; return;
label_B79F:; return;
label_B7A2:; return;
label_B7A4:; return;
label_B7A6:; return;
label_B7A8:; return;
label_B7AA:; return;
label_B7AB:; return;
label_B7AC:; return;
label_B7AF:; return;
label_B7B1:; return;
label_B7B3:; return;
label_B7B5:; return;
label_B7B7:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BE:; return;
label_B7C1:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C9:; return;
label_B7CB:; return;
label_B7CD:; return;
label_B7CF:; return;
label_B7D1:; return;
label_B7D3:; return;
label_B7D4:; return;
label_B7D6:; return;
label_B7D8:; return;
label_B7DA:; return;
label_B7DB:; return;
label_B7DD:; return;
label_B7E0:; return;
label_B7E2:; return;
label_B7E4:; return;
label_B7E6:; return;
label_B7E9:; return;
label_B7EB:; return;
label_B7ED:; return;
label_B7EF:; return;
label_B7F0:; return;
label_B7F2:; return;
label_B7F4:; return;
label_B7F6:; return;
label_B7F7:; return;
label_B7F9:; return;
label_B7FB:; return;
label_B7FD:; return;
label_B7FF:; return;
label_B801:; return;
label_B802:; return;
label_B805:; return;
label_B806:; return;
label_B808:; return;
label_B80A:; return;
label_B80D:; return;
label_B810:; return;
label_B813:; return;
label_B814:; return;
label_B815:; return;
label_B816:; return;
label_B817:; return;
label_B818:; return;
label_B819:; return;
label_B81A:; return;
label_B81B:; return;
label_B81C:; return;
label_B81D:; return;
label_B81E:; return;
label_B81F:; return;
label_B820:; return;
label_B821:; return;
label_B822:; return;
label_B823:; return;
label_B826:; return;
label_B828:; return;
label_B82A:; return;
label_B82C:; return;
label_B82D:; return;
label_B82F:; return;
label_B831:; return;
label_B833:; return;
label_B836:; return;
label_B838:; return;
label_B839:; return;
label_B83B:; return;
label_B83D:; return;
label_B83E:; return;
label_B841:; return;
label_B842:; return;
label_B844:; return;
label_B845:; return;
label_B847:; return;
label_B848:; return;
label_B84A:; return;
label_B84C:; return;
label_B84E:; return;
label_B850:; return;
label_B852:; return;
label_B854:; return;
label_B856:; return;
label_B858:; return;
label_B85A:; return;
label_B85B:; return;
label_B85C:; return;
label_B85E:; return;
label_B85F:; return;
label_B861:; return;
label_B863:; return;
label_B865:; return;
label_B867:; return;
label_B868:; return;
}

void func_A2C7_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2C7_b11");
#endif
label_A2C7:;
    /* $A2C7: CE */ maybe_trigger_vblank(6); { uint16_t a=0x030C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2CA:;
    /* $A2CA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A2CC:;
    /* $A2CC: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2CE:;
    /* $A2CE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A2CF:;
    /* $A2CF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA2CF); return;
}

void func_B907_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B907_b11");
#endif
label_B907:;
    /* $B907: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x80; FLAG_NZ(g_cpu.A);
label_B909:;
    /* $B909: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B90B:;
    /* $B90B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_B90D:;
    /* $B90D: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_B90F:;
    /* $B90F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_B911:;
    /* $B911: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x87; FLAG_NZ(g_cpu.A);
label_B913:;
    /* $B913: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x84); FLAG_NZ(g_cpu.X);
label_B915:;
    /* $B915: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xB801; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B918:;
    /* $B918: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x16) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B91A:;
    /* $B91A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B91B:;
    /* $B91B: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B91D:;
    /* $B91D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B91F:;
    /* $B91F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA27 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B922:;
    /* $B922: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_B923:;
    /* $B923: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBD46 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B926:;
    /* $B926: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_B927:;
    /* $B927: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_B929:;
    /* $B929: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B92B:;
    /* $B92B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0F07 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B92E:;
    /* $B92E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B92F:;
    /* $B92F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB92F; g_rti_bank = 11; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A907_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A907_b11");
#endif
label_A907:;
    /* $A907: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A908:;
    /* $A908: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A90A:;
    /* $A90A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x08BB), 11); return; }
label_A90C:;
    /* $A90C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A90D:;
    /* $A90D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A910; }
label_A90F:;
    /* $A90F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A910:;
    /* $A910: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A911:;
    /* $A911: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A913:;
    /* $A913: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A914:;
    /* $A914: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A915:;
    /* $A915: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A916:;
    /* $A916: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x25; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A919:;
    /* $A919: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A91C; }
label_A91B:;
    /* $A91B: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A91C:;
    /* $A91C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A91D:;
    /* $A91D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A91F:;
    /* $A91F: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A920:;
    /* $A920: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0930), 11); return; }
label_A922:;
    /* $A922: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: FA */ maybe_trigger_vblank(2); /* NOP */
label_A925:;
    /* $A925: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A927:;
    /* $A927: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A928:;
    /* $A928: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_A92B:;
    /* $A92B: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92D:;
    /* $A92D: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92F:;
    /* $A92F: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A931:;
    /* $A931: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A932:; return;
label_A934:; return;
label_A936:; return;
label_A937:; return;
label_A93A:; return;
label_A93B:; return;
label_A93C:; return;
label_A93D:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A943:; return;
label_A944:; return;
label_A945:; return;
label_A948:; return;
label_A94B:; return;
label_A94D:; return;
label_A94F:; return;
label_A952:; return;
label_A954:; return;
label_A955:; return;
label_A957:; return;
label_A959:; return;
label_A95C:; return;
label_A95E:; return;
label_A95F:; return;
label_A961:; return;
label_A963:; return;
label_A966:; return;
label_A969:; return;
label_A96A:; return;
label_A96D:; return;
label_A96F:; return;
label_A972:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A979:; return;
label_A97B:; return;
label_A97C:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A982:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A988:; return;
label_A989:; return;
label_A98C:; return;
label_A98E:; return;
label_A98F:; return;
label_A992:; return;
label_A993:; return;
label_A995:; return;
label_A998:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99F:; return;
label_A9A1:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B3:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9BA:; return;
label_A9BD:; return;
label_A9C0:; return;
label_A9C2:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CC:; return;
label_A9CE:; return;
label_A9CF:; return;
label_A9D0:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D8:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DC:; return;
label_A9DE:; return;
label_A9E0:; return;
label_A9E1:; return;
label_A9E4:; return;
label_A9E6:; return;
label_A9E7:; return;
label_A9E9:; return;
label_A9EB:; return;
label_A9EC:; return;
label_A9EF:; return;
label_A9F1:; return;
label_A9F3:; return;
label_A9F4:; return;
label_A9F5:; return;
label_A9F7:; return;
label_A9F9:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA04:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0D:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA12:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1C:; return;
label_AA1E:; return;
label_AA21:; return;
label_AA22:; return;
label_AA24:; return;
label_AA25:; return;
label_AA26:; return;
label_AA27:; return;
label_AA28:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2E:; return;
label_AA31:; return;
label_AA34:; return;
label_AA35:; return;
label_AA38:; return;
label_AA3A:; return;
label_AA3C:; return;
label_AA3F:; return;
label_AA41:; return;
label_AA42:; return;
label_AA44:; return;
label_AA45:; return;
label_AA48:; return;
label_AA4A:; return;
label_AA4D:; return;
label_AA4E:; return;
label_AA50:; return;
label_AA51:; return;
label_AA52:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA5A:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5E:; return;
label_AA60:; return;
label_AA62:; return;
label_AA63:; return;
label_AA65:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6C:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA72:; return;
label_AA74:; return;
label_AA77:; return;
label_AA7A:; return;
label_AA7C:; return;
label_AA7F:; return;
label_AA82:; return;
label_AA85:; return;
label_AA88:; return;
label_AA8B:; return;
label_AA8C:; return;
label_AA8E:; return;
label_AA90:; return;
label_AA93:; return;
label_AA94:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9C:; return;
label_AA9E:; return;
label_AAA1:; return;
label_AAA4:; return;
label_AAA6:; return;
label_AAA7:; return;
label_AAAA:; return;
label_AAAD:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB0:; return;
label_AAB1:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB9:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC6:; return;
label_AAC7:; return;
label_AACA:; return;
label_AACC:; return;
label_AACE:; return;
label_AACF:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AADA:; return;
label_AADD:; return;
label_AADF:; return;
label_AAE2:; return;
label_AAE5:; return;
label_AAE6:; return;
label_AAE8:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFB:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB01:; return;
label_AB04:; return;
label_AB06:; return;
label_AB07:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB0F:; return;
label_AB11:; return;
label_AB13:; return;
label_AB15:; return;
label_AB17:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1B:; return;
label_AB1D:; return;
label_AB1F:; return;
label_AB21:; return;
label_AB23:; return;
label_AB25:; return;
label_AB27:; return;
label_AB29:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB32:; return;
label_AB34:; return;
label_AB35:; return;
label_AB36:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3F:; return;
label_AB41:; return;
label_AB42:; return;
label_AB44:; return;
label_AB46:; return;
label_AB47:; return;
label_AB49:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB53:; return;
label_AB55:; return;
label_AB57:; return;
label_AB58:; return;
label_AB5A:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5F:; return;
label_AB61:; return;
label_AB63:; return;
label_AB66:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6E:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB76:; return;
label_AB78:; return;
label_AB7A:; return;
label_AB7C:; return;
label_AB7E:; return;
label_AB80:; return;
label_AB82:; return;
label_AB84:; return;
label_AB87:; return;
label_AB88:; return;
label_AB8A:; return;
label_AB8B:; return;
label_AB8D:; return;
label_AB8F:; return;
label_AB91:; return;
label_AB92:; return;
label_AB94:; return;
label_AB96:; return;
label_AB97:; return;
label_AB99:; return;
label_AB9B:; return;
label_AB9E:; return;
label_ABA0:; return;
label_ABA2:; return;
label_ABA3:; return;
label_ABA5:; return;
label_ABA7:; return;
label_ABA9:; return;
label_ABAB:; return;
label_ABAD:; return;
label_ABB0:; return;
label_ABB1:; return;
label_ABB3:; return;
label_ABB5:; return;
label_ABB7:; return;
label_ABB9:; return;
label_ABBA:; return;
label_ABBB:; return;
label_ABBD:; return;
label_ABBF:; return;
label_ABC1:; return;
label_ABC2:; return;
label_ABC4:; return;
label_ABC6:; return;
label_ABC9:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD2:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD8:; return;
label_ABDA:; return;
label_ABDC:; return;
label_ABDE:; return;
label_ABE0:; return;
label_ABE1:; return;
label_ABE2:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEB:; return;
label_ABED:; return;
label_ABEE:; return;
label_ABEF:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF6:; return;
label_ABF7:; return;
label_ABF8:; return;
label_ABFB:; return;
label_ABFD:; return;
label_AC00:; return;
label_AC03:; return;
label_AC04:; return;
label_AC05:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0B:; return;
label_AC0D:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC1A:; return;
label_AC1B:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC23:; return;
label_AC25:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
label_AC31:; return;
label_AC32:; return;
label_AC34:; return;
label_AC36:; return;
label_AC39:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3F:; return;
label_AC41:; return;
label_AC42:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4A:; return;
label_AC4C:; return;
label_AC4E:; return;
label_AC51:; return;
label_AC53:; return;
label_AC55:; return;
label_AC58:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5E:; return;
label_AC60:; return;
label_AC62:; return;
label_AC64:; return;
label_AC65:; return;
label_AC67:; return;
label_AC6A:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC72:; return;
label_AC75:; return;
label_AC77:; return;
label_AC7A:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC88:; return;
label_AC8B:; return;
label_AC8D:; return;
label_AC8F:; return;
label_AC91:; return;
label_AC92:; return;
label_AC94:; return;
label_AC95:; return;
label_AC97:; return;
label_AC9A:; return;
label_AC9D:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA3:; return;
label_ACA6:; return;
label_ACA9:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAF:; return;
label_ACB2:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBB:; return;
label_ACBE:; return;
label_ACC1:; return;
label_ACC4:; return;
label_ACC7:; return;
label_ACCA:; return;
label_ACCD:; return;
label_ACD0:; return;
label_ACD3:; return;
label_ACD5:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF9:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFD:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD02:; return;
label_AD03:; return;
label_AD05:; return;
label_AD08:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0D:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD12:; return;
label_AD13:; return;
label_AD14:; return;
label_AD17:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD24:; return;
label_AD27:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2D:; return;
label_AD2F:; return;
label_AD31:; return;
label_AD33:; return;
label_AD35:; return;
label_AD37:; return;
label_AD39:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD41:; return;
label_AD43:; return;
label_AD45:; return;
label_AD48:; return;
label_AD4A:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD50:; return;
label_AD51:; return;
label_AD54:; return;
label_AD55:; return;
label_AD58:; return;
label_AD5A:; return;
label_AD5C:; return;
label_AD5F:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD6A:; return;
label_AD6C:; return;
label_AD6E:; return;
label_AD71:; return;
label_AD73:; return;
label_AD75:; return;
label_AD76:; return;
label_AD77:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7D:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD81:; return;
label_AD82:; return;
label_AD84:; return;
label_AD86:; return;
label_AD88:; return;
label_AD89:; return;
label_AD8B:; return;
label_AD8D:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD91:; return;
label_AD92:; return;
label_AD94:; return;
label_AD96:; return;
label_AD97:; return;
label_AD99:; return;
label_AD9B:; return;
label_AD9D:; return;
label_AD9E:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAD:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB7:; return;
label_ADB9:; return;
label_ADBB:; return;
label_ADBD:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC4:; return;
label_ADC6:; return;
label_ADC7:; return;
label_ADC9:; return;
label_ADCB:; return;
label_ADCD:; return;
label_ADCE:; return;
label_ADD0:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD5:; return;
label_ADD7:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE3:; return;
label_ADE5:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEC:; return;
label_ADEE:; return;
label_ADEF:; return;
label_ADF1:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF7:; return;
label_ADF8:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE04:; return;
label_AE07:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE13:; return;
label_AE16:; return;
label_AE17:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE20:; return;
label_AE22:; return;
label_AE23:; return;
label_AE25:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2D:; return;
label_AE30:; return;
label_AE31:; return;
label_AE33:; return;
label_AE35:; return;
label_AE36:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3D:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE48:; return;
label_AE4A:; return;
label_AE4B:; return;
label_AE4D:; return;
label_AE4E:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE56:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5B:; return;
label_AE5D:; return;
label_AE60:; return;
label_AE63:; return;
label_AE64:; return;
label_AE66:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6E:; return;
label_AE70:; return;
label_AE72:; return;
label_AE74:; return;
label_AE76:; return;
label_AE79:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE84:; return;
label_AE86:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE92:; return;
label_AE95:; return;
label_AE97:; return;
label_AE98:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9C:; return;
label_AE9D:; return;
label_AE9F:; return;
label_AEA0:; return;
label_AEA3:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBB:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC3:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECB:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED4:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDD:; return;
label_AEE0:; return;
label_AEE1:; return;
label_AEE3:; return;
label_AEE4:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF0:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF6:; return;
label_AEF9:; return;
label_AEFB:; return;
label_AEFD:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF02:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF08:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF0F:; return;
label_AF10:; return;
label_AF11:; return;
label_AF13:; return;
label_AF15:; return;
label_AF16:; return;
label_AF17:; return;
label_AF18:; return;
label_AF1A:; return;
label_AF1C:; return;
label_AF1F:; return;
label_AF20:; return;
label_AF23:; return;
label_AF24:; return;
label_AF26:; return;
label_AF29:; return;
label_AF2B:; return;
label_AF2C:; return;
label_AF2F:; return;
label_AF30:; return;
label_AF32:; return;
label_AF35:; return;
label_AF37:; return;
label_AF3A:; return;
label_AF3B:; return;
label_AF3C:; return;
label_AF3D:; return;
label_AF3F:; return;
label_AF42:; return;
label_AF45:; return;
label_AF47:; return;
label_AF48:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF51:; return;
label_AF53:; return;
label_AF54:; return;
label_AF55:; return;
label_AF56:; return;
label_AF58:; return;
label_AF5A:; return;
label_AF5C:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF60:; return;
label_AF62:; return;
label_AF63:; return;
label_AF64:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6A:; return;
label_AF6C:; return;
label_AF6E:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7A:; return;
label_AF7C:; return;
label_AF7E:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF84:; return;
label_AF86:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8E:; return;
label_AF8F:; return;
label_AF91:; return;
label_AF93:; return;
label_AF95:; return;
label_AF96:; return;
label_AF97:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA3:; return;
label_AFA4:; return;
label_AFA5:; return;
label_AFA7:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAA:; return;
label_AFAB:; return;
label_AFAC:; return;
label_AFAE:; return;
label_AFB0:; return;
label_AFB1:; return;
label_AFB2:; return;
label_AFB3:; return;
label_AFB5:; return;
label_AFB7:; return;
label_AFB8:; return;
label_AFB9:; return;
label_AFBB:; return;
label_AFBC:; return;
label_AFBD:; return;
label_AFBE:; return;
label_AFBF:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC3:; return;
label_AFC5:; return;
label_AFC6:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFC9:; return;
label_AFCC:; return;
label_AFCF:; return;
label_AFD1:; return;
label_AFD2:; return;
label_AFD3:; return;
label_AFD4:; return;
label_AFD5:; return;
label_AFD6:; return;
label_AFD8:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDC:; return;
label_AFDD:; return;
label_AFDE:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE5:; return;
label_AFE7:; return;
label_AFE8:; return;
label_AFE9:; return;
label_AFEA:; return;
label_AFEB:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFEF:; return;
label_AFF1:; return;
label_AFF2:; return;
label_AFF3:; return;
label_AFF4:; return;
label_AFF5:; return;
label_AFF8:; return;
label_AFFB:; return;
label_AFFD:; return;
label_AFFE:; return;
label_AFFF:; return;
label_B000:; return;
label_B001:; return;
label_B002:; return;
label_B004:; return;
label_B005:; return;
label_B007:; return;
label_B008:; return;
label_B009:; return;
label_B00A:; return;
label_B00B:; return;
label_B00C:; return;
label_B00E:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B014:; return;
label_B015:; return;
label_B016:; return;
label_B017:; return;
label_B018:; return;
label_B01A:; return;
label_B01B:; return;
label_B01D:; return;
label_B01E:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B024:; return;
label_B027:; return;
label_B029:; return;
label_B02A:; return;
label_B02B:; return;
label_B02C:; return;
label_B02D:; return;
label_B02E:; return;
label_B030:; return;
label_B031:; return;
label_B033:; return;
label_B034:; return;
label_B035:; return;
label_B036:; return;
label_B037:; return;
label_B038:; return;
label_B03A:; return;
label_B03C:; return;
label_B03D:; return;
label_B03F:; return;
label_B040:; return;
label_B041:; return;
label_B042:; return;
label_B043:; return;
label_B044:; return;
label_B046:; return;
label_B047:; return;
label_B049:; return;
label_B04A:; return;
label_B04B:; return;
label_B04C:; return;
label_B04D:; return;
label_B050:; return;
label_B053:; return;
label_B055:; return;
label_B056:; return;
label_B057:; return;
label_B058:; return;
label_B059:; return;
label_B05A:; return;
label_B05C:; return;
label_B05D:; return;
label_B05F:; return;
label_B060:; return;
label_B061:; return;
label_B062:; return;
label_B063:; return;
label_B064:; return;
label_B066:; return;
label_B068:; return;
label_B069:; return;
label_B06B:; return;
label_B06C:; return;
label_B06D:; return;
label_B06E:; return;
label_B06F:; return;
label_B070:; return;
label_B072:; return;
label_B073:; return;
label_B075:; return;
label_B076:; return;
label_B077:; return;
label_B078:; return;
label_B079:; return;
label_B07C:; return;
label_B07F:; return;
label_B081:; return;
label_B082:; return;
label_B083:; return;
label_B084:; return;
label_B085:; return;
label_B086:; return;
label_B088:; return;
label_B089:; return;
label_B08B:; return;
label_B08C:; return;
label_B08D:; return;
label_B08E:; return;
label_B08F:; return;
label_B090:; return;
label_B092:; return;
label_B094:; return;
label_B095:; return;
label_B097:; return;
label_B09A:; return;
label_B09D:; return;
label_B0A0:; return;
label_B0A3:; return;
label_B0A6:; return;
label_B0A7:; return;
label_B0A8:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0B0:; return;
label_B0B3:; return;
label_B0B6:; return;
label_B0B9:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C1:; return;
label_B0C3:; return;
label_B0C5:; return;
label_B0C7:; return;
label_B0C8:; return;
label_B0CA:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0CF:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0D9:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DF:; return;
label_B0E0:; return;
label_B0E2:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E6:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0E9:; return;
label_B0EA:; return;
label_B0ED:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F6:; return;
label_B0F9:; return;
label_B0FA:; return;
label_B0FD:; return;
label_B0FE:; return;
label_B101:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B107:; return;
label_B109:; return;
label_B10B:; return;
label_B10D:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B119:; return;
label_B11C:; return;
label_B11F:; return;
label_B121:; return;
label_B123:; return;
label_B124:; return;
label_B126:; return;
label_B128:; return;
label_B129:; return;
label_B12A:; return;
label_B12B:; return;
label_B12D:; return;
label_B12E:; return;
label_B130:; return;
label_B131:; return;
label_B133:; return;
label_B135:; return;
label_B136:; return;
label_B139:; return;
label_B13A:; return;
label_B13B:; return;
label_B13D:; return;
label_B140:; return;
label_B141:; return;
label_B143:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14A:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B156:; return;
label_B159:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B166:; return;
label_B169:; return;
label_B16C:; return;
label_B16E:; return;
label_B171:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B183:; return;
label_B186:; return;
label_B189:; return;
label_B18A:; return;
label_B18D:; return;
label_B190:; return;
label_B193:; return;
label_B194:; return;
label_B196:; return;
label_B197:; return;
label_B19A:; return;
label_B19B:; return;
label_B19D:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A3:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AE:; return;
label_B1B1:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B5:; return;
label_B1B7:; return;
label_B1B9:; return;
label_B1BA:; return;
label_B1BD:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C2:; return;
label_B1C4:; return;
label_B1C5:; return;
label_B1C8:; return;
label_B1CA:; return;
label_B1CB:; return;
label_B1CD:; return;
label_B1CE:; return;
label_B1D1:; return;
label_B1D3:; return;
label_B1D5:; return;
label_B1D7:; return;
label_B1D8:; return;
label_B1DA:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E2:; return;
label_B1E5:; return;
label_B1E8:; return;
label_B1EA:; return;
label_B1ED:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F3:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FE:; return;
label_B1FF:; return;
label_B201:; return;
label_B202:; return;
label_B204:; return;
label_B205:; return;
label_B208:; return;
label_B209:; return;
label_B20B:; return;
label_B20D:; return;
label_B20F:; return;
label_B210:; return;
label_B211:; return;
label_B212:; return;
label_B214:; return;
label_B215:; return;
label_B217:; return;
label_B218:; return;
label_B219:; return;
label_B21B:; return;
label_B21C:; return;
label_B21E:; return;
label_B21F:; return;
label_B221:; return;
label_B222:; return;
label_B225:; return;
label_B226:; return;
label_B229:; return;
label_B22A:; return;
label_B22D:; return;
label_B22F:; return;
label_B231:; return;
label_B234:; return;
label_B235:; return;
label_B238:; return;
label_B23B:; return;
label_B23C:; return;
label_B23E:; return;
label_B23F:; return;
label_B242:; return;
label_B243:; return;
label_B246:; return;
label_B248:; return;
label_B24A:; return;
label_B24C:; return;
label_B24D:; return;
label_B24F:; return;
label_B251:; return;
label_B253:; return;
label_B255:; return;
label_B258:; return;
label_B25B:; return;
label_B25E:; return;
label_B260:; return;
label_B261:; return;
label_B262:; return;
label_B264:; return;
label_B266:; return;
label_B268:; return;
label_B269:; return;
label_B26C:; return;
label_B26E:; return;
label_B26F:; return;
label_B271:; return;
label_B273:; return;
label_B275:; return;
label_B278:; return;
label_B27A:; return;
label_B27C:; return;
label_B27E:; return;
label_B27F:; return;
label_B281:; return;
label_B282:; return;
label_B285:; return;
label_B288:; return;
label_B289:; return;
label_B28C:; return;
label_B28E:; return;
label_B28F:; return;
label_B291:; return;
label_B294:; return;
label_B296:; return;
label_B298:; return;
label_B29B:; return;
label_B29E:; return;
label_B2A1:; return;
label_B2A3:; return;
label_B2A5:; return;
label_B2A7:; return;
label_B2A8:; return;
label_B2AB:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B5:; return;
label_B2B7:; return;
label_B2B9:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2C0:; return;
label_B2C3:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2C9:; return;
label_B2CB:; return;
label_B2CC:; return;
label_B2CD:; return;
label_B2CF:; return;
label_B2D1:; return;
label_B2D3:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D7:; return;
label_B2D9:; return;
label_B2DB:; return;
label_B2DC:; return;
label_B2DD:; return;
label_B2DE:; return;
label_B2DF:; return;
label_B2E1:; return;
label_B2E3:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2EE:; return;
label_B2F1:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2F9:; return;
label_B2FB:; return;
label_B2FE:; return;
label_B301:; return;
label_B302:; return;
label_B304:; return;
label_B305:; return;
label_B308:; return;
label_B30B:; return;
label_B30E:; return;
label_B310:; return;
label_B311:; return;
label_B313:; return;
label_B316:; return;
label_B318:; return;
label_B31B:; return;
label_B31D:; return;
label_B320:; return;
label_B321:; return;
label_B324:; return;
label_B327:; return;
label_B329:; return;
label_B32B:; return;
label_B32D:; return;
label_B32E:; return;
label_B32F:; return;
label_B330:; return;
label_B331:; return;
label_B333:; return;
label_B336:; return;
label_B337:; return;
label_B339:; return;
label_B33B:; return;
label_B33D:; return;
label_B340:; return;
label_B341:; return;
label_B343:; return;
label_B345:; return;
label_B347:; return;
label_B349:; return;
label_B34A:; return;
label_B34C:; return;
label_B34E:; return;
label_B350:; return;
label_B352:; return;
label_B354:; return;
label_B356:; return;
label_B358:; return;
label_B35A:; return;
label_B35C:; return;
label_B35F:; return;
label_B361:; return;
label_B362:; return;
label_B364:; return;
label_B365:; return;
label_B368:; return;
label_B36A:; return;
label_B36C:; return;
label_B36E:; return;
label_B370:; return;
label_B372:; return;
label_B374:; return;
label_B376:; return;
label_B378:; return;
label_B37A:; return;
label_B37B:; return;
label_B37E:; return;
label_B380:; return;
label_B382:; return;
label_B384:; return;
label_B386:; return;
label_B388:; return;
label_B389:; return;
label_B38A:; return;
label_B38B:; return;
label_B38D:; return;
label_B390:; return;
label_B391:; return;
label_B393:; return;
label_B395:; return;
label_B398:; return;
label_B39B:; return;
label_B39D:; return;
label_B39F:; return;
label_B3A1:; return;
label_B3A2:; return;
label_B3A3:; return;
label_B3A4:; return;
label_B3A5:; return;
label_B3A7:; return;
label_B3AA:; return;
label_B3AC:; return;
label_B3AE:; return;
label_B3B0:; return;
label_B3B2:; return;
label_B3B5:; return;
label_B3B7:; return;
label_B3B9:; return;
label_B3BB:; return;
label_B3BC:; return;
label_B3BD:; return;
label_B3C0:; return;
label_B3C1:; return;
label_B3C4:; return;
label_B3C6:; return;
label_B3C9:; return;
label_B3CB:; return;
label_B3CE:; return;
label_B3D0:; return;
label_B3D2:; return;
label_B3D4:; return;
label_B3D6:; return;
label_B3D7:; return;
label_B3DA:; return;
label_B3DC:; return;
label_B3DF:; return;
label_B3E2:; return;
label_B3E5:; return;
label_B3E8:; return;
label_B3EB:; return;
label_B3EC:; return;
label_B3EE:; return;
label_B3F0:; return;
label_B3F2:; return;
label_B3F4:; return;
label_B3F5:; return;
label_B3F7:; return;
label_B3FA:; return;
label_B3FD:; return;
label_B3FF:; return;
label_B400:; return;
label_B402:; return;
label_B405:; return;
label_B408:; return;
label_B40B:; return;
label_B40E:; return;
label_B411:; return;
label_B414:; return;
label_B417:; return;
label_B419:; return;
label_B41B:; return;
label_B41D:; return;
label_B41F:; return;
label_B421:; return;
label_B424:; return;
label_B426:; return;
label_B428:; return;
label_B429:; return;
label_B42B:; return;
label_B42D:; return;
label_B42F:; return;
label_B430:; return;
label_B433:; return;
label_B436:; return;
label_B438:; return;
label_B43A:; return;
label_B43C:; return;
label_B43E:; return;
label_B43F:; return;
label_B441:; return;
label_B442:; return;
label_B444:; return;
label_B447:; return;
label_B44A:; return;
label_B44D:; return;
label_B450:; return;
label_B452:; return;
label_B455:; return;
label_B456:; return;
label_B459:; return;
label_B45A:; return;
label_B45C:; return;
label_B45E:; return;
label_B460:; return;
label_B461:; return;
label_B463:; return;
label_B465:; return;
label_B466:; return;
label_B468:; return;
label_B469:; return;
label_B46A:; return;
label_B46C:; return;
label_B46E:; return;
label_B470:; return;
label_B472:; return;
label_B474:; return;
label_B476:; return;
label_B478:; return;
label_B47A:; return;
label_B47C:; return;
label_B47E:; return;
label_B480:; return;
label_B482:; return;
label_B484:; return;
label_B486:; return;
label_B488:; return;
label_B48B:; return;
label_B48C:; return;
label_B48D:; return;
label_B48F:; return;
label_B492:; return;
label_B494:; return;
label_B495:; return;
label_B497:; return;
label_B499:; return;
label_B49B:; return;
label_B49D:; return;
label_B49E:; return;
label_B4A0:; return;
label_B4A2:; return;
label_B4A3:; return;
label_B4A6:; return;
label_B4A8:; return;
label_B4AA:; return;
label_B4AC:; return;
label_B4AE:; return;
label_B4AF:; return;
label_B4B0:; return;
label_B4B2:; return;
label_B4B4:; return;
label_B4B5:; return;
label_B4B6:; return;
label_B4B8:; return;
label_B4B9:; return;
label_B4BB:; return;
label_B4BD:; return;
label_B4BF:; return;
label_B4C2:; return;
label_B4C4:; return;
label_B4C6:; return;
label_B4C8:; return;
label_B4CB:; return;
label_B4CD:; return;
label_B4CF:; return;
label_B4D0:; return;
label_B4D1:; return;
label_B4D3:; return;
label_B4D5:; return;
label_B4D6:; return;
label_B4D7:; return;
label_B4DA:; return;
label_B4DC:; return;
label_B4DE:; return;
label_B4E0:; return;
label_B4E2:; return;
label_B4E3:; return;
label_B4E4:; return;
label_B4E6:; return;
label_B4E8:; return;
label_B4E9:; return;
label_B4EA:; return;
label_B4EC:; return;
label_B4ED:; return;
label_B4EF:; return;
label_B4F1:; return;
label_B4F3:; return;
label_B4F5:; return;
label_B4F7:; return;
label_B4FA:; return;
label_B4FB:; return;
label_B4FC:; return;
label_B4FE:; return;
label_B4FF:; return;
label_B500:; return;
label_B503:; return;
label_B506:; return;
label_B508:; return;
label_B50A:; return;
label_B50B:; return;
label_B50D:; return;
label_B50F:; return;
label_B510:; return;
label_B512:; return;
label_B513:; return;
label_B514:; return;
label_B515:; return;
label_B517:; return;
label_B518:; return;
label_B51A:; return;
label_B51B:; return;
label_B51D:; return;
label_B51E:; return;
label_B520:; return;
label_B521:; return;
label_B523:; return;
label_B524:; return;
label_B527:; return;
label_B529:; return;
label_B52A:; return;
label_B52B:; return;
label_B52D:; return;
label_B52F:; return;
label_B530:; return;
label_B532:; return;
label_B535:; return;
label_B536:; return;
label_B539:; return;
label_B53C:; return;
label_B53D:; return;
label_B540:; return;
label_B541:; return;
label_B543:; return;
label_B545:; return;
label_B547:; return;
label_B548:; return;
label_B54A:; return;
label_B54B:; return;
label_B54D:; return;
label_B54F:; return;
label_B551:; return;
label_B554:; return;
label_B556:; return;
label_B558:; return;
label_B55A:; return;
label_B55D:; return;
label_B55F:; return;
label_B562:; return;
label_B565:; return;
label_B566:; return;
label_B567:; return;
label_B569:; return;
label_B56B:; return;
label_B56D:; return;
label_B56F:; return;
label_B570:; return;
label_B571:; return;
label_B572:; return;
label_B573:; return;
label_B575:; return;
label_B576:; return;
label_B577:; return;
label_B578:; return;
label_B579:; return;
label_B57B:; return;
label_B57D:; return;
label_B580:; return;
label_B582:; return;
label_B583:; return;
label_B585:; return;
label_B587:; return;
label_B58A:; return;
label_B58D:; return;
label_B58F:; return;
label_B592:; return;
label_B594:; return;
label_B595:; return;
label_B596:; return;
label_B597:; return;
label_B599:; return;
label_B59B:; return;
label_B59D:; return;
label_B5A0:; return;
label_B5A2:; return;
label_B5A4:; return;
label_B5A6:; return;
label_B5A9:; return;
label_B5AA:; return;
label_B5AD:; return;
label_B5AF:; return;
label_B5B0:; return;
label_B5B1:; return;
label_B5B4:; return;
label_B5B6:; return;
label_B5B8:; return;
label_B5BB:; return;
label_B5BC:; return;
label_B5BF:; return;
label_B5C2:; return;
label_B5C4:; return;
label_B5C6:; return;
label_B5C8:; return;
label_B5CA:; return;
label_B5CB:; return;
label_B5CC:; return;
label_B5CD:; return;
label_B5D0:; return;
label_B5D1:; return;
label_B5D3:; return;
label_B5D4:; return;
label_B5D5:; return;
label_B5D6:; return;
label_B5D7:; return;
label_B5DA:; return;
label_B5DC:; return;
label_B5DD:; return;
label_B5DF:; return;
label_B5E1:; return;
label_B5E3:; return;
label_B5E4:; return;
label_B5E6:; return;
label_B5E8:; return;
label_B5E9:; return;
label_B5EB:; return;
label_B5EC:; return;
label_B5EE:; return;
label_B5F1:; return;
label_B5F4:; return;
label_B5F6:; return;
label_B5F7:; return;
label_B5F9:; return;
label_B5FB:; return;
label_B5FD:; return;
label_B5FF:; return;
label_B601:; return;
label_B603:; return;
label_B604:; return;
label_B606:; return;
label_B608:; return;
label_B609:; return;
label_B60B:; return;
label_B60E:; return;
label_B610:; return;
label_B612:; return;
label_B613:; return;
label_B615:; return;
label_B616:; return;
label_B618:; return;
label_B61A:; return;
label_B61D:; return;
label_B61F:; return;
label_B621:; return;
label_B623:; return;
label_B625:; return;
label_B628:; return;
label_B62B:; return;
label_B62E:; return;
label_B630:; return;
label_B631:; return;
label_B632:; return;
label_B633:; return;
label_B635:; return;
label_B637:; return;
label_B639:; return;
label_B63B:; return;
label_B63D:; return;
label_B63F:; return;
label_B641:; return;
label_B644:; return;
label_B646:; return;
label_B647:; return;
label_B649:; return;
label_B64B:; return;
label_B64D:; return;
label_B64F:; return;
label_B650:; return;
label_B652:; return;
label_B654:; return;
label_B656:; return;
label_B659:; return;
label_B65B:; return;
label_B65D:; return;
label_B65F:; return;
label_B661:; return;
label_B663:; return;
label_B665:; return;
label_B668:; return;
label_B66A:; return;
label_B66B:; return;
label_B66E:; return;
label_B66F:; return;
label_B672:; return;
label_B673:; return;
label_B675:; return;
label_B677:; return;
label_B679:; return;
label_B67B:; return;
label_B67C:; return;
label_B67E:; return;
label_B67F:; return;
label_B680:; return;
label_B681:; return;
label_B682:; return;
label_B683:; return;
label_B686:; return;
label_B687:; return;
label_B68A:; return;
label_B68C:; return;
label_B68F:; return;
label_B692:; return;
label_B694:; return;
label_B696:; return;
label_B698:; return;
label_B699:; return;
label_B69C:; return;
label_B69D:; return;
label_B69F:; return;
label_B6A1:; return;
label_B6A3:; return;
label_B6A5:; return;
label_B6A7:; return;
label_B6A8:; return;
label_B6AA:; return;
label_B6E9:; return;
label_B6EB:; return;
label_B6ED:; return;
label_B6EF:; return;
label_B6F1:; return;
label_B6F4:; return;
label_B6F7:; return;
label_B6F8:; return;
label_B6FA:; return;
label_B6FC:; return;
label_B6FD:; return;
label_B6FF:; return;
label_B701:; return;
label_B702:; return;
label_B703:; return;
label_B705:; return;
label_B707:; return;
label_B709:; return;
label_B70B:; return;
label_B70C:; return;
label_B70E:; return;
label_B710:; return;
label_B712:; return;
label_B715:; return;
label_B716:; return;
label_B717:; return;
label_B719:; return;
label_B71C:; return;
label_B71E:; return;
label_B720:; return;
label_B78E:; return;
label_B790:; return;
label_B792:; return;
label_B794:; return;
label_B796:; return;
label_B798:; return;
label_B79A:; return;
label_B79B:; return;
label_B79D:; return;
label_B79F:; return;
label_B7A2:; return;
label_B7A4:; return;
label_B7A6:; return;
label_B7A8:; return;
label_B7AA:; return;
label_B7AB:; return;
label_B7AC:; return;
label_B7AF:; return;
label_B7B1:; return;
label_B7B3:; return;
label_B7B5:; return;
label_B7B7:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BE:; return;
label_B7C1:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C9:; return;
label_B7CB:; return;
label_B7CD:; return;
label_B7CF:; return;
label_B7D1:; return;
label_B7D3:; return;
label_B7D4:; return;
label_B7D6:; return;
label_B7D8:; return;
label_B7DA:; return;
label_B7DB:; return;
label_B7DD:; return;
label_B7E0:; return;
label_B7E2:; return;
label_B7E4:; return;
label_B7E6:; return;
label_B7E9:; return;
label_B7EB:; return;
label_B7ED:; return;
label_B7EF:; return;
label_B7F0:; return;
label_B7F2:; return;
label_B7F4:; return;
label_B7F6:; return;
label_B7F7:; return;
label_B7F9:; return;
label_B7FB:; return;
label_B7FD:; return;
label_B7FF:; return;
label_B801:; return;
label_B802:; return;
label_B805:; return;
label_B806:; return;
label_B808:; return;
label_B80A:; return;
label_B80D:; return;
label_B810:; return;
label_B813:; return;
label_B814:; return;
label_B815:; return;
label_B816:; return;
label_B817:; return;
label_B818:; return;
label_B819:; return;
label_B81A:; return;
label_B81B:; return;
label_B81C:; return;
label_B81D:; return;
label_B81E:; return;
label_B81F:; return;
label_B820:; return;
label_B821:; return;
label_B822:; return;
label_B823:; return;
label_B826:; return;
label_B828:; return;
label_B82A:; return;
label_B82C:; return;
label_B82D:; return;
label_B82F:; return;
label_B831:; return;
label_B833:; return;
label_B836:; return;
label_B838:; return;
label_B839:; return;
label_B83B:; return;
label_B83D:; return;
label_B83E:; return;
label_B841:; return;
label_B842:; return;
label_B844:; return;
label_B845:; return;
label_B847:; return;
label_B848:; return;
label_B84A:; return;
label_B84C:; return;
label_B84E:; return;
label_B850:; return;
label_B852:; return;
label_B854:; return;
label_B856:; return;
label_B858:; return;
label_B85A:; return;
label_B85B:; return;
label_B85C:; return;
label_B85E:; return;
label_B85F:; return;
label_B861:; return;
label_B863:; return;
label_B865:; return;
label_B867:; return;
label_B868:; return;
label_B86A:; return;
}

void func_8572_b11_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8575;
    }
label_8572:;
    /* $8572: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x6007); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8575:;
    /* $8575: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8578:;
    /* $8578: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x97; FLAG_NZ(g_cpu.A);
label_857A:;
    /* $857A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_857C:;
    /* $857C: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_857F:;
    /* $857F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8572_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8572_b11");
#endif
    func_8572_b11_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8575_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8575_b11");
#endif
    func_8572_b11_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85B3_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85B3_b11");
#endif
label_85B3:;
    /* $85B3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_85B5:;
    /* $85B5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_85B7:;
    /* $85B7: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_85BA:;
    /* $85BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x29; g_cpu.C=(g_cpu.X>=0x29)?1:0; FLAG_NZ(r&0xFF); }
label_85BC:;
    /* $85BC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D0; }
label_85BE:;
    /* $85BE: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x01; g_cpu.C=(g_cpu.X>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_85C0:;
    /* $85C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D7; }
label_85C2:;
    /* $85C2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD3); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_85C6:;
    /* $85C6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x070C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85C9:; /* main_unknown_1B */
    /* $85C9: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_85CB:;
    /* $85CB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x05CD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x85CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_85CE:;
    /* $85CE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC1); FLAG_NZ(g_cpu.Y);
label_85D0:;
    /* $85D0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85D1:;
    /* $85D1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0704 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85D4:;
    /* $85D4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0704 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85D7:;
    /* $85D7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_85D8:;
    /* $85D8: 9D */ maybe_trigger_vblank(5); nes_write((0x0710 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_85DB:;
    /* $85DB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85DC:;
    /* $85DC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85DD:;
    /* $85DD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8023_b11(void) { /* jump_local_ptr */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8023_b11");
#endif
label_8023:; /* jump_local_ptr */
    /* $8023: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8024:;
    /* $8024: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8025:;
    /* $8025: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8026:;
    /* $8026: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8027:;
    /* $8027: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8029:;
    /* $8029: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_802A:;
    /* $802A: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_802C:;
    /* $802C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_802E:;
    /* $802E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_802F:;
    /* $802F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8030:;
    /* $8030: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8032:;
    /* $8032: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_8034:;
    /* $8034: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8035:;
    /* $8035: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8037:;
    /* $8037: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0xC1); nes_trace_indirect_jump(0x8037, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_81AD_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81AD_b11");
#endif
label_81AD:;
    /* $81AD: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x84 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_81AF:;
    /* $81AF: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x29 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_81B1:;
    /* $81B1: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81B3:;
    /* $81B3: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x80 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_81B5:;
    /* $81B5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x81); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_81B7:;
    /* $81B7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81B8:;
    /* $81B8: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xE4 + g_cpu.X) & 0xFF), g_cpu.A);
label_81BA:;
    /* $81BA: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x1E + g_cpu.X) & 0xFF), g_cpu.A);
label_81BC:;
    /* $81BC: 82 */ maybe_trigger_vblank(2); /* NOP */
label_81BE:;
    /* $81BE: 82 */ maybe_trigger_vblank(2); /* NOP */
label_81C0:;
    /* $81C0: 82 */ maybe_trigger_vblank(2); /* NOP */
label_81C2:;
    /* $81C2: 82 */ maybe_trigger_vblank(2); /* NOP */
label_81C4:;
    /* $81C4: 82 */ maybe_trigger_vblank(2); /* NOP */
label_81C6:;
    /* $81C6: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x81); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_81C8:;
    /* $81C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81CA:;
    /* $81CA: 85 */ maybe_trigger_vblank(3); nes_write(0xCE, g_cpu.A);
label_81CC:;
    /* $81CC: 85 */ maybe_trigger_vblank(3); nes_write(0xD0, g_cpu.A);
label_81CE:;
    /* $81CE: 85 */ maybe_trigger_vblank(3); nes_write(0xD1, g_cpu.A);
label_81D0:;
    /* $81D0: 85 */ maybe_trigger_vblank(3); nes_write(0xD7, g_cpu.A);
label_81D2:;
    /* $81D2: 85 */ maybe_trigger_vblank(3); nes_write(0xD8, g_cpu.A);
label_81D4:;
    /* $81D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_81D6:;
    /* $81D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_81E3; }
label_81D8:;
    /* $81D8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0F; FLAG_NZ(g_cpu.A);
label_81DA:;
    /* $81DA: 85 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.A);
label_81DC:;
    /* $81DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x81F1, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x81DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_81DF:;
    /* $81DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_81E1:;
    /* $81E1: 85 */ maybe_trigger_vblank(3); nes_write(0xCF, g_cpu.A);
label_81E3:;
    /* $81E3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_823D_b11_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8247;
        case 2: goto label_8249;
    }
label_823D:;
    /* $823D: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x07F0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8240:;
    /* $8240: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xFF; FLAG_NZ(g_cpu.Y);
label_8242:;
    /* $8242: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8244:;
    /* $8244: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8249; }
label_8246:;
    /* $8246: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8247:;
    /* $8247: 84 */ maybe_trigger_vblank(3); nes_write(0xCD, g_cpu.Y);
label_8249:;
    /* $8249: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_823D_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_823D_b11");
#endif
    func_823D_b11_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8247_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8247_b11");
#endif
    func_823D_b11_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8249_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8249_b11");
#endif
    func_823D_b11_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82E2_b11_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8592;
        case 2: goto label_8393;
        case 3: goto label_8386;
        case 4: goto label_86BA;
        case 5: goto label_85A3;
        case 6: goto label_8326;
        case 7: goto label_85AE;
        case 8: goto label_85DE;
        case 9: goto label_8497;
        case 10: goto label_85A0;
        case 11: goto label_82E6;
        case 12: goto label_82FA;
        case 13: goto label_82FB;
        case 14: goto label_8300;
        case 15: goto label_830A;
        case 16: goto label_8311;
        case 17: goto label_8320;
        case 18: goto label_8390;
        case 19: goto label_84A4;
        case 20: goto label_85E4;
    }
label_82E2:;
    /* $82E2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_82E4:;
    /* $82E4: 84 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.Y);
label_82E6:;
    /* $82E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC0); FLAG_NZ(g_cpu.A);
label_82E8:;
    /* $82E8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_82E9:;
    /* $82E9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_830A; }
label_82EB:;
    /* $82EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x86BA, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82EB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82EE:;
    /* $82EE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD3); FLAG_NZ(g_cpu.A);
label_82F0:;
    /* $82F0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FA; }
label_82F2:;
    /* $82F2: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x01; g_cpu.C=(g_cpu.X>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_82F4:;
    /* $82F4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FB; }
label_82F6:;
    /* $82F6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD5); FLAG_NZ(g_cpu.A);
label_82F8:;
    /* $82F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8300; }
label_82FA:;
    /* $82FA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82FB:;
    /* $82FB: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0710 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82FE:;
    /* $82FE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82FA;
    }
label_8300:;
    /* $8300: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8303:;
    /* $8303: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8305:;
    /* $8305: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82FA;
    }
label_8307:;
    /* $8307: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x85A3, 11); return;
label_830A:;
    /* $830A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_830C:;
    /* $830C: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_830E:;
    /* $830E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0310); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8386, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x830E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8311:;
    /* $8311: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8312:;
    /* $8312: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8320; }
label_8314:;
    /* $8314: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8315:;
    /* $8315: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0317); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8386, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8315, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8318:;
    /* $8318: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_831A:;
    /* $831A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_831C:;
    /* $831C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x031E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8326, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x831C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_831F:;
    /* $831F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8320:;
    /* $8320: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0333), 11); return; }
label_8322:;
    /* $8322: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8324:;
    /* $8324: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8311;
    }
label_8326:;
    /* $8326: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $8023: 7 entries (bank=11) */
switch(g_cpu.A) {
  case 0: nes_write(0x00C1, 0x6F); nes_write(0x00C2, 0x86); g_cpu.A = 0x6F; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_866F_b11(); return;
  case 1: nes_write(0x00C1, 0xAD); nes_write(0x00C2, 0x86); g_cpu.A = 0xAD; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86AD_b11(); return;
  case 2: nes_write(0x00C1, 0x5A); nes_write(0x00C2, 0x86); g_cpu.A = 0x5A; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_865A_b11(); return;
  case 3: nes_write(0x00C1, 0xA7); nes_write(0x00C2, 0x86); g_cpu.A = 0xA7; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86A7_b11(); return;
  case 4: nes_write(0x00C1, 0xA1); nes_write(0x00C2, 0x86); g_cpu.A = 0xA1; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86A1_b11(); return;
  case 5: nes_write(0x00C1, 0x20); nes_write(0x00C2, 0x86); g_cpu.A = 0x20; g_cpu.Y = 0x0C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8620_b11(); return;
  case 6: nes_write(0x00C1, 0x83); nes_write(0x00C2, 0xA8); g_cpu.A = 0x83; g_cpu.Y = 0x0E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_A883_b11(); return;
  default: nes_log_inline_miss(0x8326, g_cpu.A); return;
}
label_8337:;
    /* $8337: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8349; }
label_8339:;
    /* $8339: 9D */ maybe_trigger_vblank(5); nes_write((0x0710 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_833C:;
    /* $833C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_833F:;
    /* $833F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_8341:;
    /* $8341: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_8343:;
    /* $8343: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8346:;
    /* $8346: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x80D8, 11); return;
label_8349:;
    /* $8349: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_834C:;
    /* $834C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_834E:;
    /* $834E: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8351:;
    /* $8351: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0718 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8354:;
    /* $8354: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8355:;
    /* $8355: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x54; FLAG_NZ(g_cpu.A);
label_8357:;
    /* $8357: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_835B; }
label_8359:;
    /* $8359: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_835B:;
    /* $835B: 9D */ maybe_trigger_vblank(5); nes_write((0x071C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_835E:;
    /* $835E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_835F:;
    /* $835F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_836B; }
label_8361:;
    /* $8361: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x01; g_cpu.C=(g_cpu.X>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_8363:;
    /* $8363: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8368; }
label_8365:;
    /* $8365: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0367); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85AE, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8365, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8368:;
    /* $8368: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8644, 11); return;
label_836B:;
    /* $836B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x036D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85AE, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x836B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_836E:;
    /* $836E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8370:;
    /* $8370: 9D */ maybe_trigger_vblank(5); nes_write((0x077C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8373:;
    /* $8373: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8374:;
    /* $8374: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8375:;
    /* $8375: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_837F; }
label_8377:;
    /* $8377: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_8379:;
    /* $8379: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_837A:;
    /* $837A: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0F; FLAG_NZ(g_cpu.A);
label_837C:;
    /* $837C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8636, 11); return;
label_837F:;
    /* $837F: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8380:;
    /* $8380: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8381:;
    /* $8381: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD2); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8383:;
    /* $8383: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x85DE, 11); return;
label_8386:;
    /* $8386: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xD0); FLAG_NZ(g_cpu.Y);
label_8388:;
    /* $8388: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD1); FLAG_NZ(g_cpu.A);
label_838A:;
    /* $838A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xD0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_838C:;
    /* $838C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8390; }
label_838E:;
    /* $838E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xD1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8390:;
    /* $8390: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x803A, 11); return;
label_8393:;
    /* $8393: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8394:;
    /* $8394: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x28; FLAG_NZ(g_cpu.A);
label_8396:;
    /* $8396: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8397:;
    /* $8397: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0728 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_839A:;
    /* $839A: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x072C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_839D:;
    /* $839D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83CC; }
label_839F:;
    /* $839F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83A2:;
    /* $83A2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83CD; }
label_83A4:;
    /* $83A4: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0700 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_83A7:;
    /* $83A7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83AF; }
label_83A9:;
    /* $83A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8684, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83AC:;
    /* $83AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x86BA, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83AF:; /* weapon_damage_ptr_lo */
    /* $83AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0740 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83B2:;
    /* $83B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_83B3:;
    /* $83B3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83B5:;
    /* $83B5: 9D */ maybe_trigger_vblank(5); nes_write((0x0740 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83B8:;
    /* $83B8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83BC; }
label_83BA:;
    /* $83BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_83BF; }
label_83BC:;
    /* $83BC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03BE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85A3, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83BC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83BF:;
    /* $83BF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83C2:;
    /* $83C2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_83C3:;
    /* $83C3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C5:;
    /* $83C5: 9D */ maybe_trigger_vblank(5); nes_write((0x0738 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83C8:;
    /* $83C8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83CD; }
label_83CA:;
    /* $83CA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_83CD; }
label_83CC:;
    /* $83CC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_83CD:;
    /* $83CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03CF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8592, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D0:;
    /* $83D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_83D2:;
    /* $83D2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_83DA; }
label_83D4:;
    /* $83D4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03D6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8497, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83D4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D7:;
    /* $83D7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83CD, 11); return;
label_83DA:;
    /* $83DA: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_83DB:;
    /* $83DB: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DC:;
    /* $83DC: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DD:;
    /* $83DD: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DE:;
    /* $83DE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DF:;
    /* $83DF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_83E1:;
    /* $83E1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83E2:;
    /* $83E2: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_83E3:;
    /* $83E3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83E6:;
    /* $83E6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83E7:;
    /* $83E7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83E8:;
    /* $83E8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83EF; }
label_83EA:;
    /* $83EA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8915 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83ED:;
    /* $83ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8406; }
label_83EF:;
    /* $83EF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83F0:;
    /* $83F0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83F1:;
    /* $83F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x891C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83F4:;
    /* $83F4: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8406; }
label_83F6:;
    /* $83F6: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_83F8:;
    /* $83F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83FB:;
    /* $83FB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xEF; FLAG_NZ(g_cpu.A);
label_83FD:;
    /* $83FD: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8400:;
    /* $8400: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8402:;
    /* $8402: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8403:;
    /* $8403: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8404:;
    /* $8404: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8406:;
    /* $8406: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8407:;
    /* $8407: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0738 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_840A:;
    /* $840A: 9D */ maybe_trigger_vblank(5); nes_write((0x0738 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_840D:;
    /* $840D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_840E:;
    /* $840E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_840F:;
    /* $840F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_8411:;
    /* $8411: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8419; }
label_8413:;
    /* $8413: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0415); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85A3, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8413, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8416:;
    /* $8416: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8491, 11); return;
label_8419:;
    /* $8419: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_841A:;
    /* $841A: 84 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.Y);
label_841C:;
    /* $841C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x073C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_841F:;
    /* $841F: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8421:;
    /* $8421: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0423); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8421, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8424:;
    /* $8424: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_8426:;
    /* $8426: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_842A; }
label_8428:;
    /* $8428: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_842A:;
    /* $842A: 9D */ maybe_trigger_vblank(5); nes_write((0x0740 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_842D:;
    /* $842D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_842E:;
    /* $842E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_842F:;
    /* $842F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8430:;
    /* $8430: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8433:;
    /* $8433: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8440; }
label_8435:;
    /* $8435: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0718 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8438:;
    /* $8438: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8454; }
label_843A:;
    /* $843A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x043C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8644, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x843A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_843D:;
    /* $843D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x847E, 11); return;
label_8440:;
    /* $8440: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0442); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85AE, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8440, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8443:;
    /* $8443: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_8445:;
    /* $8445: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8454; }
label_8447:;
    /* $8447: 84 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.Y);
label_8449:;
    /* $8449: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_844A:;
    /* $844A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_844C:;
    /* $844C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_844D:;
    /* $844D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_844F:;
    /* $844F: 99 */ maybe_trigger_vblank(5); nes_write((0x077C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8452:;
    /* $8452: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC3); FLAG_NZ(g_cpu.Y);
label_8454:;
    /* $8454: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8455:;
    /* $8455: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8457:;
    /* $8457: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8466; }
label_8459:;
    /* $8459: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_845B:;
    /* $845B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_845C:;
    /* $845C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_845E:;
    /* $845E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0F; FLAG_NZ(g_cpu.A);
label_8460:;
    /* $8460: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0462); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8636, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8460, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8463:;
    /* $8463: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x847E, 11); return;
label_8466:;
    /* $8466: 84 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.Y);
label_8468:;
    /* $8468: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_846B:;
    /* $846B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_846D:;
    /* $846D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_846E:;
    /* $846E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8923 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8471:;
    /* $8471: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8472:;
    /* $8472: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8474:;
    /* $8474: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8475:;
    /* $8475: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCB); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8477:;
    /* $8477: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8478:;
    /* $8478: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0734 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_847B:;
    /* $847B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x047D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85DE, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x847B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_847E:;
    /* $847E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8481:;
    /* $8481: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8482:;
    /* $8482: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_8484:;
    /* $8484: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8485:;
    /* $8485: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_8487:;
    /* $8487: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8488:;
    /* $8488: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_848A:;
    /* $848A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_848C:;
    /* $848C: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_848F:;
    /* $848F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8496; }
label_8491:;
    /* $8491: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8493:;
    /* $8493: 9D */ maybe_trigger_vblank(5); nes_write((0x0740 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8496:;
    /* $8496: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8497:;
    /* $8497: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8499:;
    /* $8499: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_84A4; }
label_849B:;
    /* $849B: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_849D:;
    /* $849D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x049F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8592, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x849D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84A0:;
    /* $84A0: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_84A2:;
    /* $84A2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_84A4:;
    /* $84A4: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $8023: 25 entries (bank=11) */
switch(g_cpu.A) {
  case 0: nes_write(0x00C1, 0xD9); nes_write(0x00C2, 0x84); g_cpu.A = 0xD9; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_84D9_b11(); return;
  case 1: nes_write(0x00C1, 0xDD); nes_write(0x00C2, 0x84); g_cpu.A = 0xDD; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_84DD_b11(); return;
  case 2: nes_write(0x00C1, 0xE1); nes_write(0x00C2, 0x84); g_cpu.A = 0xE1; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_84E1_b11(); return;
  case 3: nes_write(0x00C1, 0xE8); nes_write(0x00C2, 0x84); g_cpu.A = 0xE8; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_84E8_b11(); return;
  case 4: nes_write(0x00C1, 0x75); nes_write(0x00C2, 0x85); g_cpu.A = 0x75; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8575_b11(); return;
  case 5: nes_write(0x00C1, 0xF1); nes_write(0x00C2, 0x84); g_cpu.A = 0xF1; g_cpu.Y = 0x0C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_84F1_b11(); return;
  case 6: nes_write(0x00C1, 0xFF); nes_write(0x00C2, 0x84); g_cpu.A = 0xFF; g_cpu.Y = 0x0E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_84FF_b11(); return;
  case 7: nes_write(0x00C1, 0x5A); nes_write(0x00C2, 0x86); g_cpu.A = 0x5A; g_cpu.Y = 0x10; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_865A_b11(); return;
  case 8: nes_write(0x00C1, 0x6F); nes_write(0x00C2, 0x86); g_cpu.A = 0x6F; g_cpu.Y = 0x12; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_866F_b11(); return;
  case 9: nes_write(0x00C1, 0x05); nes_write(0x00C2, 0x85); g_cpu.A = 0x05; g_cpu.Y = 0x14; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8505_b11(); return;
  case 10: nes_write(0x00C1, 0x10); nes_write(0x00C2, 0x85); g_cpu.A = 0x10; g_cpu.Y = 0x16; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8510_b11(); return;
  case 11: nes_write(0x00C1, 0x15); nes_write(0x00C2, 0x85); g_cpu.A = 0x15; g_cpu.Y = 0x18; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8515_b11(); return;
  case 12: nes_write(0x00C1, 0xA1); nes_write(0x00C2, 0x86); g_cpu.A = 0xA1; g_cpu.Y = 0x1A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86A1_b11(); return;
  case 13: nes_write(0x00C1, 0xA7); nes_write(0x00C2, 0x86); g_cpu.A = 0xA7; g_cpu.Y = 0x1C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86A7_b11(); return;
  case 14: nes_write(0x00C1, 0x1B); nes_write(0x00C2, 0x85); g_cpu.A = 0x1B; g_cpu.Y = 0x1E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_851B_b11(); return;
  case 15: nes_write(0x00C1, 0x1F); nes_write(0x00C2, 0x85); g_cpu.A = 0x1F; g_cpu.Y = 0x20; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_851F_b11(); return;
  case 16: nes_write(0x00C1, 0x23); nes_write(0x00C2, 0x85); g_cpu.A = 0x23; g_cpu.Y = 0x22; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8523_b11(); return;
  case 17: nes_write(0x00C1, 0x27); nes_write(0x00C2, 0x85); g_cpu.A = 0x27; g_cpu.Y = 0x24; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8527_b11(); return;
  case 18: nes_write(0x00C1, 0x1B); nes_write(0x00C2, 0x85); g_cpu.A = 0x1B; g_cpu.Y = 0x26; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_851B_b11(); return;
  case 19: nes_write(0x00C1, 0x1F); nes_write(0x00C2, 0x85); g_cpu.A = 0x1F; g_cpu.Y = 0x28; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_851F_b11(); return;
  case 20: nes_write(0x00C1, 0x23); nes_write(0x00C2, 0x85); g_cpu.A = 0x23; g_cpu.Y = 0x2A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8523_b11(); return;
  case 21: nes_write(0x00C1, 0x27); nes_write(0x00C2, 0x85); g_cpu.A = 0x27; g_cpu.Y = 0x2C; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8527_b11(); return;
  case 22: nes_write(0x00C1, 0x5A); nes_write(0x00C2, 0x85); g_cpu.A = 0x5A; g_cpu.Y = 0x2E; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_855A_b11(); return;
  case 23: nes_write(0x00C1, 0x80); nes_write(0x00C2, 0x85); g_cpu.A = 0x80; g_cpu.Y = 0x30; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_8580_b11(); return;
  case 24: nes_write(0x00C1, 0xAD); nes_write(0x00C2, 0x86); g_cpu.A = 0xAD; g_cpu.Y = 0x32; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86AD_b11(); return;
  default: nes_log_inline_miss(0x84A4, g_cpu.A); return;
}
label_84D9:;
    /* $84D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_84DB:;
    /* $84DB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84EA; }
label_84DD:;
    /* $84DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_84DF:;
    /* $84DF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84EA; }
label_84E1:;
    /* $84E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_84E3:;
    /* $84E3: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84E6:;
    /* $84E6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_84ED; }
label_84E8:;
    /* $84E8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_84EA:;
    /* $84EA: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84ED:;
    /* $84ED: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_84F0:;
    /* $84F0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_84F1:;
    /* $84F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_84F3:;
    /* $84F3: 85 */ maybe_trigger_vblank(3); nes_write(0xC8, g_cpu.A);
label_84F5:;
    /* $84F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8592, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84F8:;
    /* $84F8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC3); FLAG_NZ(g_cpu.Y);
label_84FA:;
    /* $84FA: 85 */ maybe_trigger_vblank(3); nes_write(0xCA, g_cpu.A);
label_84FC:;
    /* $84FC: 84 */ maybe_trigger_vblank(3); nes_write(0xC9, g_cpu.Y);
label_84FE:;
    /* $84FE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_84FF:;
    /* $84FF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8501:;
    /* $8501: 9D */ maybe_trigger_vblank(5); nes_write((0x073C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8504:;
    /* $8504: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8505:;
    /* $8505: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8508:;
    /* $8508: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_850A:;
    /* $850A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_850C:;
    /* $850C: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_850F:;
    /* $850F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8510:;
    /* $8510: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8512:;
    /* $8512: 85 */ maybe_trigger_vblank(3); nes_write(0xCB, g_cpu.A);
label_8514:;
    /* $8514: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8515:;
    /* $8515: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8517:;
    /* $8517: 9D */ maybe_trigger_vblank(5); nes_write((0x0734 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_851A:;
    /* $851A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_851B:;
    /* $851B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_851D:;
    /* $851D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8529; }
label_851F:;
    /* $851F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8521:;
    /* $8521: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8529; }
label_8523:;
    /* $8523: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_8525:;
    /* $8525: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8529; }
label_8527:;
    /* $8527: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8529:;
    /* $8529: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_852B:;
    /* $852B: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_852C:;
    /* $852C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_852D:;
    /* $852D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC2); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_852F:;
    /* $852F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8530:;
    /* $8530: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_8532:;
    /* $8532: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_8534:;
    /* $8534: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8547; }
label_8536:;
    /* $8536: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0744 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8539:;
    /* $8539: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_853A:;
    /* $853A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_853C:;
    /* $853C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8540; }
label_853E:;
    /* $853E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 99 */ maybe_trigger_vblank(5); nes_write((0x0744 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8543:;
    /* $8543: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8566; }
label_8545:;
    /* $8545: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8555; }
label_8547:;
    /* $8547: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0744 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_854A:;
    /* $854A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_854B:;
    /* $854B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854D:;
    /* $854D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8566; }
label_854F:;
    /* $854F: 99 */ maybe_trigger_vblank(5); nes_write((0x0744 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8552:;
    /* $8552: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0554); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8575, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8552, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8555:;
    /* $8555: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0557); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8592, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8555, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8558:;
    /* $8558: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_855A:;
    /* $855A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x055C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8592, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x855A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_855D:;
    /* $855D: 9D */ maybe_trigger_vblank(5); nes_write((0x0728 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8560:;
    /* $8560: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8562:;
    /* $8562: 9D */ maybe_trigger_vblank(5); nes_write((0x072C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8565:;
    /* $8565: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8566:;
    /* $8566: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8568:;
    /* $8568: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8569:;
    /* $8569: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0728 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_856C:;
    /* $856C: 9D */ maybe_trigger_vblank(5); nes_write((0x0728 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_856F:;
    /* $856F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8574; }
label_8571:;
    /* $8571: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x072C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8574:;
    /* $8574: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8575:;
    /* $8575: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8578:;
    /* $8578: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x97; FLAG_NZ(g_cpu.A);
label_857A:;
    /* $857A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_857C:;
    /* $857C: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_857F:;
    /* $857F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8580:;
    /* $8580: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8581:;
    /* $8581: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8582:;
    /* $8582: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8584:;
    /* $8584: 9D */ maybe_trigger_vblank(5); nes_write((0x0728 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8587:;
    /* $8587: 9D */ maybe_trigger_vblank(5); nes_write((0x072C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_858A:;
    /* $858A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_858C:;
    /* $858C: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8591; }
label_858E:;
    /* $858E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x80D8, 11); return;
label_8591:;
    /* $8591: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8592:;
    /* $8592: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0728 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8595:;
    /* $8595: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x072C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8598:;
    /* $8598: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0728 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_859B:;
    /* $859B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85A0; }
label_859D:;
    /* $859D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x072C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85A0:;
    /* $85A0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x803A, 11); return;
label_85A3:;
    /* $85A3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85A6:;
    /* $85A6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_85A8:;
    /* $85A8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_85AA:;
    /* $85AA: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_85AD:;
    /* $85AD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85AE:;
    /* $85AE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_85AF:;
    /* $85AF: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_85B0:;
    /* $85B0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_85B2:;
    /* $85B2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85B5:;
    /* $85B5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF8; FLAG_NZ(g_cpu.A);
label_85B7:;
    /* $85B7: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_85BA:;
    /* $85BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x29; g_cpu.C=(g_cpu.X>=0x29)?1:0; FLAG_NZ(r&0xFF); }
label_85BC:;
    /* $85BC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D0; }
label_85BE:;
    /* $85BE: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x01; g_cpu.C=(g_cpu.X>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_85C0:;
    /* $85C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85D7; }
label_85C2:;
    /* $85C2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD3); FLAG_NZ(g_cpu.A);
label_85C4:;
    /* $85C4: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_85C6:;
    /* $85C6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x070C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85C9:; /* main_unknown_1B */
    /* $85C9: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_85CB:;
    /* $85CB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x05CD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x85CB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_85CE:;
    /* $85CE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC1); FLAG_NZ(g_cpu.Y);
label_85D0:;
    /* $85D0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85D1:;
    /* $85D1: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0704 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85D4:;
    /* $85D4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0704 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85D7:;
    /* $85D7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_85D8:;
    /* $85D8: 9D */ maybe_trigger_vblank(5); nes_write((0x0710 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_85DB:;
    /* $85DB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_85DC:;
    /* $85DC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_85DD:;
    /* $85DD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_85DE:;
    /* $85DE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_85E0:;
    /* $85E0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E4; }
label_85E2:;
    /* $85E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_85E4:;
    /* $85E4: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_85E6:;
    /* $85E6: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85E8:;
    /* $85E8: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_85EA:;
    /* $85EA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_862A; }
label_85EC:;
    /* $85EC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x071C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85EF:;
    /* $85EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_861D; }
label_85F1:;
    /* $85F1: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_85F3:;
    /* $85F3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_85FC; }
label_85F5:;
    /* $85F5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85F8:;
    /* $85F8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_861D; }
label_85FA:;
    /* $85FA: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_8644; }
label_85FC:;
    /* $85FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0718 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_85FF:;
    /* $85FF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_861D; }
label_8601:;
    /* $8601: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8607; }
label_8603:;
    /* $8603: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_8605:;
    /* $8605: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8609; }
label_8607:;
    /* $8607: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8609:;
    /* $8609: 9D */ maybe_trigger_vblank(5); nes_write((0x0718 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_860C:;
    /* $860C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_860F:;
    /* $860F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_8611:;
    /* $8611: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8614:;
    /* $8614: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8616:;
    /* $8616: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x071C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8619:;
    /* $8619: 84 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.Y);
label_861B:;
    /* $861B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8627; }
label_861D:;
    /* $861D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8620:;
    /* $8620: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xDF; FLAG_NZ(g_cpu.A);
label_8622:;
    /* $8622: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8625:;
    /* $8625: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8627:;
    /* $8627: 9D */ maybe_trigger_vblank(5); nes_write((0x071C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_862A:;
    /* $862A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_862C:;
    /* $862C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC3); FLAG_NZ(g_cpu.Y);
label_862E:;
    /* $862E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8959 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8631:;
    /* $8631: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_8633:;
    /* $8633: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x895A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8636:;
    /* $8636: 9D */ maybe_trigger_vblank(5); nes_write((0x0724 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8639:;
    /* $8639: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_863B:;
    /* $863B: 9D */ maybe_trigger_vblank(5); nes_write((0x0720 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_863E:;
    /* $863E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_8640:;
    /* $8640: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8642:;
    /* $8642: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_864C; }
label_8644:;
    /* $8644: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8647:;
    /* $8647: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_8649:;
    /* $8649: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_864C; }
label_864B:;
    /* $864B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_864C:;
    /* $864C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_864E:;
    /* $864E: 9D */ maybe_trigger_vblank(5); nes_write((0x0708 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8651:;
    /* $8651: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8654:;
    /* $8654: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x37; FLAG_NZ(g_cpu.A);
label_8656:;
    /* $8656: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8659:;
    /* $8659: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_865A:;
    /* $865A: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x01; g_cpu.C=(g_cpu.X>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_865C:;
    /* $865C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8662; }
label_865E:;
    /* $865E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8660:;
    /* $8660: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_866B; }
label_8662:;
    /* $8662: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x070C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8665:;
    /* $8665: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_8667:;
    /* $8667: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8669:;
    /* $8669: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x30; FLAG_NZ(g_cpu.A);
label_866B:;
    /* $866B: 9D */ maybe_trigger_vblank(5); nes_write((0x070C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_866E:;
    /* $866E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_866F:;
    /* $866F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8671:;
    /* $8671: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8673:;
    /* $8673: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0700 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8676:;
    /* $8676: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_86A0; }
label_8678:;
    /* $8678: 9D */ maybe_trigger_vblank(5); nes_write((0x0700 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_867B:;
    /* $867B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_867C:;
    /* $867C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_867F:;
    /* $867F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_8681:;
    /* $8681: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8684:;
    /* $8684: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8685:;
    /* $8685: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8687:;
    /* $8687: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_8689:;
    /* $8689: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_868A:;
    /* $868A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_868B:;
    /* $868B: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_868D:;
    /* $868D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_868E:;
    /* $868E: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8690:;
    /* $8690: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8691:;
    /* $8691: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xC3; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8693:;
    /* $8693: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8694:;
    /* $8694: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8A42); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8697:;
    /* $8697: 85 */ maybe_trigger_vblank(3); nes_write(0xC5, g_cpu.A);
label_8699:;
    /* $8699: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_869B:;
    /* $869B: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8A41); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_869E:;
    /* $869E: 85 */ maybe_trigger_vblank(3); nes_write(0xC6, g_cpu.A);
label_86A0:;
    /* $86A0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_86A1:;
    /* $86A1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_86A3:;
    /* $86A3: 9D */ maybe_trigger_vblank(5); nes_write((0x0714 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86A6:;
    /* $86A6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_86A7:;
    /* $86A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_86A9:;
    /* $86A9: 9D */ maybe_trigger_vblank(5); nes_write((0x0718 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86AC:;
    /* $86AC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_86AD:;
    /* $86AD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x070C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86B0:;
    /* $86B0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_86B2:;
    /* $86B2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_86B4:;
    /* $86B4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x30; FLAG_NZ(g_cpu.A);
label_86B6:;
    /* $86B6: 9D */ maybe_trigger_vblank(5); nes_write((0x070C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86B9:;
    /* $86B9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_86BA:;
    /* $86BA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0710 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86BD:;
    /* $86BD: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_86BF:;
    /* $86BF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86C2:;
    /* $86C2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_86C4:;
    /* $86C4: 20 */ maybe_trigger_vblank(6); /* inline_dispatch $8023: 5 entries (bank=11) */
switch(g_cpu.A) {
  case 0: nes_write(0x00C1, 0xD1); nes_write(0x00C2, 0x86); g_cpu.A = 0xD1; g_cpu.Y = 0x02; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86D1_b11(); return;
  case 1: nes_write(0x00C1, 0xE6); nes_write(0x00C2, 0x86); g_cpu.A = 0xE6; g_cpu.Y = 0x04; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 1; maybe_trigger_vblank(50); func_86E6_b11(); return;
  case 2: nes_write(0x00C1, 0x20); nes_write(0x00C2, 0x87); g_cpu.A = 0x20; g_cpu.Y = 0x06; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8720_b11(); return;
  case 3: nes_write(0x00C1, 0x02); nes_write(0x00C2, 0x87); g_cpu.A = 0x02; g_cpu.Y = 0x08; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8702_b11(); return;
  case 4: nes_write(0x00C1, 0x14); nes_write(0x00C2, 0x89); g_cpu.A = 0x14; g_cpu.Y = 0x0A; g_cpu.C = 0; g_cpu.Z = 0; g_cpu.N = 0; maybe_trigger_vblank(50); func_8914_b11(); return;
  default: nes_log_inline_miss(0x86C4, g_cpu.A); return;
}
label_86D1:;
    /* $86D1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_86D3:;
    /* $86D3: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86D5:;
    /* $86D5: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_86D6:;
    /* $86D6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_86D8:;
    /* $86D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_86D9:;
    /* $86D9: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8933 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86DC:;
    /* $86DC: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_86E2; }
label_86DE:;
    /* $86DE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_86E0:;
    /* $86E0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_871D; }
label_86E2:;
    /* $86E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_86E4:;
    /* $86E4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_871A; }
label_86E6:;
    /* $86E6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_86E8:;
    /* $86E8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86EA:;
    /* $86EA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_86FB; }
label_86EC:;
    /* $86EC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_86ED:;
    /* $86ED: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_86EF:;
    /* $86EF: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_86F0:;
    /* $86F0: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8933 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86F3:;
    /* $86F3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_86FB; }
label_86F5:;
    /* $86F5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_86F7:;
    /* $86F7: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_86F9:;
    /* $86F9: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_871D; }
label_86FB:;
    /* $86FB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_86FD:;
    /* $86FD: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86FF:;
    /* $86FF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x871A, 11); return;
label_871A:;
    /* $871A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0704 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_871D:;
    /* $871D: 9D */ maybe_trigger_vblank(5); nes_write((0x0710 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8720:;
    /* $8720: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_8722:;
    /* $8722: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8737; }
label_8724:;
    /* $8724: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_8726:;
    /* $8726: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_872B; }
label_8728:;
    /* $8728: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88A0, 11); return;
label_872B:;
    /* $872B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCD); FLAG_NZ(g_cpu.A);
label_872D:;
    /* $872D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xCC); FLAG_NZ(g_cpu.Y);
label_872F:;
    /* $872F: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8733; }
label_8731:;
    /* $8731: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_8733:;
    /* $8733: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_8735:;
    /* $8735: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8740; }
label_8737:;
    /* $8737: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8738:;
    /* $8738: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_873A:;
    /* $873A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_873C:;
    /* $873C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8760; }
label_873E:;
    /* $873E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8752; }
label_8740:;
    /* $8740: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x29; g_cpu.C=(g_cpu.X>=0x29)?1:0; FLAG_NZ(r&0xFF); }
label_8742:;
    /* $8742: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_875B; }
label_8744:;
    /* $8744: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_8746:;
    /* $8746: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0740 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8749:;
    /* $8749: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_874B:;
    /* $874B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x074D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x874B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_874E:;
    /* $874E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_8750:;
    /* $8750: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_87AA; }
label_8752:;
    /* $8752: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0710 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8755:;
    /* $8755: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_87AA; }
label_8757:;
    /* $8757: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8759:;
    /* $8759: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_87AA; }
label_875B:;
    /* $875B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0710 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_875E:;
    /* $875E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8763; }
label_8760:;
    /* $8760: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0710 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8763:;
    /* $8763: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8764:;
    /* $8764: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8765:;
    /* $8765: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8766:;
    /* $8766: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8767:;
    /* $8767: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0F; FLAG_NZ(g_cpu.A);
label_8769:;
    /* $8769: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_876B:;
    /* $876B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_876D:;
    /* $876D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_876F:;
    /* $876F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8771:;
    /* $8771: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8797; }
label_8773:;
    /* $8773: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_8775:;
    /* $8775: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0708 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8778:;
    /* $8778: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_877B:;
    /* $877B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_877C:;
    /* $877C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_877D:;
    /* $877D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_877E:;
    /* $877E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8782; }
label_8780:;
    /* $8780: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_8782:;
    /* $8782: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8797; }
label_8784:;
    /* $8784: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8786:;
    /* $8786: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0788); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8786, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8789:;
    /* $8789: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_878B:;
    /* $878B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_878C:;
    /* $878C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_878D:;
    /* $878D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_878F:;
    /* $878F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_87A5; }
label_8791:;
    /* $8791: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8793:;
    /* $8793: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8797; }
label_8795:;
    /* $8795: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_8797:;
    /* $8797: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8799:;
    /* $8799: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_879B:;
    /* $879B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x070C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_879E:;
    /* $879E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_879F:;
    /* $879F: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87A1:;
    /* $87A1: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_87A3:;
    /* $87A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_87AA; }
label_87A5:;
    /* $87A5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x070C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87A8:;
    /* $87A8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_87AA:;
    /* $87AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_87AC:;
    /* $87AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80EC, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87AF:;
    /* $87AF: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_87B0:;
    /* $87B0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_87B2:;
    /* $87B2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_87B3:;
    /* $87B3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x077C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87B6:;
    /* $87B6: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_880C; }
label_87B8:;
    /* $87B8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_87BA:;
    /* $87BA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87BC:;
    /* $87BC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_880C; }
label_87BE:;
    /* $87BE: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_87C0:;
    /* $87C0: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0708 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_87C3:;
    /* $87C3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87C6:;
    /* $87C6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_87C7:;
    /* $87C7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_87C8:;
    /* $87C8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_87C9:;
    /* $87C9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_87CD; }
label_87CB:;
    /* $87CB: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_87CD:;
    /* $87CD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_880C; }
label_87CF:;
    /* $87CF: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_87D1:;
    /* $87D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07D3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x87D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_87D4:;
    /* $87D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_87D6:;
    /* $87D6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_87D7:;
    /* $87D7: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC2; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87D9:;
    /* $87D9: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_87DA:;
    /* $87DA: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC2; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87DC:;
    /* $87DC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_87DD:; /* main_magnet_missile */
    /* $87DD: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC2; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87DF:;
    /* $87DF: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_87E0:;
    /* $87E0: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC2; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87E2:;
    /* $87E2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_87E3:;
    /* $87E3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC2); FLAG_NZ(g_cpu.A);
label_87E5:;
    /* $87E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_880C; }
label_87E7:;
    /* $87E7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87EA:;
    /* $87EA: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_87FA; }
label_87EC:;
    /* $87EC: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_87ED:;
    /* $87ED: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC2); FLAG_NZ(g_cpu.A);
label_87EF:;
    /* $87EF: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0720 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87F2:;
    /* $87F2: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_87F4:;
    /* $87F4: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_87F5:;
    /* $87F5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0724 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87F8:;
    /* $87F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8809; }
label_87FA:;
    /* $87FA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_87FB:;
    /* $87FB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0720 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87FE:;
    /* $87FE: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC2); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8800:;
    /* $8800: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_8802:;
    /* $8802: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0724 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8805:;
    /* $8805: 84 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.Y);
label_8807:;
    /* $8807: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8809:;
    /* $8809: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_880A:;
    /* $880A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8814; }
label_880C:;
    /* $880C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0720 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_880F:;
    /* $880F: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_8811:;
    /* $8811: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0724 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8814:;
    /* $8814: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_8816:;
    /* $8816: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8835; }
label_8818:;
    /* $8818: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD6); FLAG_NZ(g_cpu.A);
label_881A:;
    /* $881A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8835; }
label_881C:;
    /* $881C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD8); FLAG_NZ(g_cpu.A);
label_881E:;
    /* $881E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8835; }
label_8820:;
    /* $8820: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_8822:;
    /* $8822: 84 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.Y);
label_8824:;
    /* $8824: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC2); FLAG_NZ(g_cpu.A);
label_8826:;
    /* $8826: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8827:;
    /* $8827: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0829); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8827, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_882A:;
    /* $882A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_882B:;
    /* $882B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_882C:;
    /* $882C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC2); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_882E:;
    /* $882E: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_8830:;
    /* $8830: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8832:;
    /* $8832: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8834:;
    /* $8834: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8835:;
    /* $8835: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8836:;
    /* $8836: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8838:;
    /* $8838: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8849; }
label_883A:;
    /* $883A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_883B:;
    /* $883B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_883D:;
    /* $883D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_883F:;
    /* $883F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8841:;
    /* $8841: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_8843:;
    /* $8843: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8845:;
    /* $8845: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8847:;
    /* $8847: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8884; }
label_8849:;
    /* $8849: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_884A:;
    /* $884A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_884C:;
    /* $884C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_884D:;
    /* $884D: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8953 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8850:;
    /* $8850: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_884C;
    }
label_8852:;
    /* $8852: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8854:;
    /* $8854: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8855:;
    /* $8855: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8856:;
    /* $8856: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8858:;
    /* $8858: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8859:;
    /* $8859: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_885B:;
    /* $885B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_885C:;
    /* $885C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x07 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x07); g_cpu.A=r&0xFF; }
label_885E:;
    /* $885E: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8860:;
    /* $8860: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8861:;
    /* $8861: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_8863:;
    /* $8863: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x38; FLAG_NZ(g_cpu.A);
label_8865:;
    /* $8865: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8870; }
label_8867:;
    /* $8867: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xC1; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8869:;
    /* $8869: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC2; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_886B:;
    /* $886B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_886C:;
    /* $886C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_886E:;
    /* $886E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8867;
    }
label_8870:;
    /* $8870: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8872:;
    /* $8872: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0714 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8875:;
    /* $8875: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8884; }
label_8877:;
    /* $8877: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_887A; }
label_8879:;
    /* $8879: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_887A:;
    /* $887A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_887B:;
    /* $887B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC2); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_887D:;
    /* $887D: 85 */ maybe_trigger_vblank(3); nes_write(0xC2, g_cpu.A);
label_887F:;
    /* $887F: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8880:;
    /* $8880: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8882:;
    /* $8882: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8884:;
    /* $8884: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_8886:;
    /* $8886: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC2); FLAG_NZ(g_cpu.A);
label_8888:; /* main_gemini_laser */
    /* $8888: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x088A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80EC, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8888, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_888B:;
    /* $888B: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_888C:;
    /* $888C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_888E:;
    /* $888E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_888F:;
    /* $888F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_8891:;
    /* $8891: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x077C + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8894:;
    /* $8894: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88A0; }
label_8896:;
    /* $8896: 99 */ maybe_trigger_vblank(5); nes_write((0x077C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8899:;
    /* $8899: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_889B:;
    /* $889B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_889D:;
    /* $889D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x089F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80EC, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x889D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88A0:;
    /* $88A0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88A3:;
    /* $88A3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_88A5:;
    /* $88A5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88FA; }
label_88A7:;
    /* $88A7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0718 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88AA:;
    /* $88AA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88F2; }
label_88AC:;
    /* $88AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_88AE:;
    /* $88AE: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_88AF:;
    /* $88AF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_88B0:;
    /* $88B0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_88B8; }
label_88B2:;
    /* $88B2: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_88B4:;
    /* $88B4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_88B5:;
    /* $88B5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_88B7:;
    /* $88B7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_88B8:;
    /* $88B8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_88B9:;
    /* $88B9: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0720 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88BC:;
    /* $88BC: 9D */ maybe_trigger_vblank(5); nes_write((0x0720 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88BF:;
    /* $88BF: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_88C0:;
    /* $88C0: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0724 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88C3:;
    /* $88C3: 9D */ maybe_trigger_vblank(5); nes_write((0x0724 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88C6:;
    /* $88C6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x071C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88C9:;
    /* $88C9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_88CA:;
    /* $88CA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_88CB:;
    /* $88CB: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_88CC:;
    /* $88CC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0720 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88CF:;
    /* $88CF: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8959 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88D2:;
    /* $88D2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0724 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88D5:;
    /* $88D5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_88D7:;
    /* $88D7: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x895A + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88DA:;
    /* $88DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_88DC:;
    /* $88DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_88DE:;
    /* $88DE: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_88DF:;
    /* $88DF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_88E1:;
    /* $88E1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_88FA; }
label_88E3:;
    /* $88E3: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_88E4:;
    /* $88E4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88FA; }
label_88E6:;
    /* $88E6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8959 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88E9:;
    /* $88E9: 9D */ maybe_trigger_vblank(5); nes_write((0x0720 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88EC:;
    /* $88EC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x895A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88EF:;
    /* $88EF: 9D */ maybe_trigger_vblank(5); nes_write((0x0724 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88F2:;
    /* $88F2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88F5:;
    /* $88F5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xDF; FLAG_NZ(g_cpu.A);
label_88F7:;
    /* $88F7: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_88FA:;
    /* $88FA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_88FC:;
    /* $88FC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88FE:;
    /* $88FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8900:;
    /* $8900: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8914; }
label_8902:;
    /* $8902: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8903:;
    /* $8903: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0708 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8906:;
    /* $8906: 9D */ maybe_trigger_vblank(5); nes_write((0x0708 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8909:;
    /* $8909: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8914; }
label_890B:;
    /* $890B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0704 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_890E:;
    /* $890E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_890F:;
    /* $890F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_8911:;
    /* $8911: 9D */ maybe_trigger_vblank(5); nes_write((0x0704 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8914:;
    /* $8914: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8915:; return;
label_8916:; return;
label_8918:; return;
label_891A:; return;
label_891B:; return;
label_891D:; return;
label_891F:; return;
label_8920:; return;
label_8922:; return;
label_8924:; return;
label_8927:; return;
label_8929:; return;
label_892A:; return;
label_892C:; return;
label_892E:; return;
label_8931:; return;
label_8932:; return;
label_893A:; return;
label_893C:; return;
label_893E:; return;
label_8940:; return;
label_8943:; return;
label_8944:; return;
label_8946:; return;
label_8948:; return;
label_894B:; return;
label_894C:; return;
label_894E:; return;
label_8950:; return;
label_8953:; return;
label_8954:; return;
label_8956:; return;
label_8958:; return;
label_895A:; return;
label_895C:; return;
label_895E:; return;
label_8960:; return;
label_8962:; return;
label_8964:; return;
label_8966:; return;
label_8968:; return;
label_896A:; return;
label_896B:; return;
label_896C:; return;
label_896D:; return;
label_896F:; return;
label_8971:; return;
label_8973:; return;
label_8976:; return;
label_8979:; return;
label_897C:; return;
label_897F:; return;
label_8980:; return;
label_8983:; return;
label_8984:; return;
label_8986:; return;
label_8987:; return;
label_8989:; return;
label_898B:; return;
label_898E:; return;
label_898F:; return;
label_8991:; return;
label_8994:; return;
label_8996:; return;
label_8998:; return;
label_899A:; return;
label_899C:; return;
label_899E:; return;
label_89A0:; return;
label_89A2:; return;
label_89A4:; return;
label_89A5:; return;
label_89A8:; return;
label_89AB:; return;
label_89AE:; return;
label_89B1:; return;
label_89B2:; return;
label_89B5:; return;
label_89B7:; return;
label_89B9:; return;
label_89BB:; return;
label_89BE:; return;
label_89BF:; return;
label_89C1:; return;
label_89C4:; return;
label_89C5:; return;
label_89C6:; return;
label_89C7:; return;
label_89C8:; return;
label_89CA:; return;
label_89CC:; return;
label_89CE:; return;
label_89D0:; return;
label_89D2:; return;
label_89D4:; return;
label_89D6:; return;
label_89D8:; return;
label_89D9:; return;
label_89DC:; return;
label_89DE:; return;
label_89E0:; return;
label_89E2:; return;
label_89E5:; return;
label_89E7:; return;
label_89E9:; return;
label_89EB:; return;
label_89EE:; return;
label_89F1:; return;
label_89F4:; return;
label_89F5:; return;
label_89F6:; return;
label_89F7:; return;
label_89F8:; return;
label_89FA:; return;
label_89FB:; return;
label_89FC:; return;
label_89FD:; return;
label_89FF:; return;
label_8A01:; return;
label_8A03:; return;
label_8A06:; return;
label_8A08:; return;
label_8A0A:; return;
label_8A0C:; return;
label_8A0E:; return;
label_8A10:; return;
label_8A11:; return;
label_8A12:; return;
label_8A14:; return;
label_8A16:; return;
label_8A17:; return;
label_8A19:; return;
label_8A1B:; return;
label_8A1C:; return;
label_8A1D:; return;
label_8A1E:; return;
label_8A1F:; return;
label_8A20:; return;
label_8A21:; return;
label_8A22:; return;
label_8A23:; return;
label_8A24:; return;
label_8A25:; return;
label_8A26:; return;
label_8A27:; return;
label_8A28:; return;
label_8A29:; return;
label_8A2A:; return;
label_8A2B:; return;
label_8A2C:; return;
label_8A2D:; return;
label_8A2E:; return;
label_8A2F:; return;
label_8A30:; return;
label_8A31:; return;
label_8A32:; return;
label_8A33:; return;
label_8A34:; return;
label_8A35:; return;
label_8A36:; return;
label_8A37:; return;
label_8A38:; return;
label_8A39:; return;
label_8A3A:; return;
label_8A3B:; return;
label_8A3C:; return;
label_8A3D:; return;
label_8A3E:; return;
label_8A3F:; return;
label_8A40:; return;
label_8A43:; return;
label_8A46:; return;
label_8A49:; return;
label_8A4A:; return;
label_8A4C:; return;
label_8A4E:; return;
label_8A51:; return;
label_8A53:; return;
label_8A54:; return;
label_8A56:; return;
label_8A58:; return;
label_8A5A:; return;
label_8A5C:; return;
label_8A5E:; return;
label_8A60:; return;
label_8A62:; return;
label_8A65:; return;
label_8A68:; return;
label_8A6B:; return;
label_8A6D:; return;
label_8A6F:; return;
label_8A71:; return;
label_8A73:; return;
label_8A75:; return;
label_8A77:; return;
label_8A79:; return;
label_8A7B:; return;
label_8A7D:; return;
label_8A7F:; return;
label_8A81:; return;
label_8A83:; return;
label_8A85:; return;
label_8A87:; return;
label_8A89:; return;
label_8A8B:; return;
label_8A8D:; return;
label_8A8F:; return;
label_8A91:; return;
label_8A93:; return;
label_8A95:; return;
label_8A97:; return;
label_8A99:; return;
label_8A9A:; return;
label_8A9C:; return;
label_8A9E:; return;
label_8AA0:; return;
label_8AA3:; return;
label_8AA4:; return;
label_8AA6:; return;
label_8AA8:; return;
label_8AA9:; return;
label_8AAA:; return;
label_8AAC:; return;
label_8AAE:; return;
label_8AAF:; return;
label_8AB1:; return;
label_8AB4:; return;
label_8AB7:; return;
label_8AB9:; return;
label_8ABB:; return;
label_8ABC:; return;
label_8ABD:; return;
label_8AC0:; return;
label_8AC1:; return;
label_8AC3:; return;
label_8AC4:; return;
label_8AC5:; return;
label_8AC8:; return;
label_8ACA:; return;
label_8ACB:; return;
label_8ACC:; return;
label_8ACE:; return;
label_8AD0:; return;
label_8AD2:; return;
label_8AD4:; return;
label_8AD5:; return;
label_8AD8:; return;
label_8ADA:; return;
label_8ADB:; return;
label_8ADD:; return;
label_8AE0:; return;
label_8AE2:; return;
label_8AE4:; return;
label_8AE5:; return;
label_8AE8:; return;
label_8AE9:; return;
label_8AEA:; return;
label_8AEB:; return;
label_8AEC:; return;
label_8AED:; return;
label_8AF0:; return;
label_8AF2:; return;
label_8AF3:; return;
label_8AF4:; return;
label_8AF5:; return;
label_8AF8:; return;
label_8AFA:; return;
label_8AFC:; return;
label_8AFD:; return;
label_8B00:; return;
label_8B02:; return;
label_8B03:; return;
label_8B06:; return;
label_8B08:; return;
label_8B09:; return;
label_8B0A:; return;
label_8B0B:; return;
label_8B0C:; return;
label_8B0D:; return;
label_8B10:; return;
label_8B13:; return;
label_8B14:; return;
label_8B16:; return;
label_8B19:; return;
label_8B1C:; return;
label_8B1D:; return;
label_8B20:; return;
label_8B22:; return;
label_8B24:; return;
label_8B25:; return;
label_8B28:; return;
label_8B2B:; return;
label_8B2E:; return;
label_8B31:; return;
label_8B32:; return;
label_8B33:; return;
label_8B36:; return;
label_8B38:; return;
label_8B3A:; return;
label_8B3B:; return;
label_8B3C:; return;
label_8B3D:; return;
label_8B3E:; return;
label_8B40:; return;
label_8B42:; return;
label_8B43:; return;
label_8B44:; return;
label_8B45:; return;
label_8B48:; return;
label_8B4A:; return;
label_8B4B:; return;
label_8B4C:; return;
label_8B4D:; return;
label_8B50:; return;
label_8B51:; return;
label_8B52:; return;
label_8B53:; return;
label_8B54:; return;
label_8B55:; return;
label_8B58:; return;
label_8B5B:; return;
label_8B5C:; return;
label_8B5D:; return;
label_8B5E:; return;
label_8B5F:; return;
label_8B61:; return;
label_8B62:; return;
label_8B63:; return;
label_8B64:; return;
label_8B65:; return;
label_8B68:; return;
label_8B6A:; return;
label_8B6B:; return;
label_8B6C:; return;
label_8B6D:; return;
label_8B70:; return;
label_8B72:; return;
label_8B74:; return;
label_8B75:; return;
label_8B78:; return;
label_8B79:; return;
label_8B7C:; return;
label_8B7D:; return;
label_8B80:; return;
label_8B82:; return;
label_8B85:; return;
label_8B88:; return;
label_8B8A:; return;
label_8B8B:; return;
label_8B8C:; return;
label_8B8D:; return;
label_8B90:; return;
label_8B92:; return;
label_8B94:; return;
label_8B95:; return;
label_8B98:; return;
label_8B9A:; return;
label_8B9B:; return;
label_8B9C:; return;
label_8B9D:; return;
label_8BA0:; return;
label_8BA3:; return;
label_8BA4:; return;
label_8BA6:; return;
label_8BA7:; return;
label_8BA9:; return;
label_8BAC:; return;
label_8BAD:; return;
label_8BB0:; return;
label_8BB2:; return;
label_8BB4:; return;
label_8BB5:; return;
label_8BB8:; return;
label_8BB9:; return;
label_8BBA:; return;
label_8BBB:; return;
label_8BBC:; return;
label_8BBD:; return;
label_8BC0:; return;
label_8BC1:; return;
label_8BC3:; return;
label_8BC4:; return;
label_8BC5:; return;
label_8BC8:; return;
label_8BCA:; return;
label_8BCB:; return;
label_8BCC:; return;
label_8BCD:; return;
label_8BD0:; return;
label_8BD2:; return;
label_8BD3:; return;
label_8BD6:; return;
label_8BD9:; return;
label_8BDA:; return;
label_8BDB:; return;
label_8BDC:; return;
label_8BDD:; return;
label_8BE0:; return;
label_8BE1:; return;
label_8BE4:; return;
label_8BE5:; return;
label_8BE7:; return;
label_8BE9:; return;
label_8BEB:; return;
label_8BEC:; return;
label_8BED:; return;
label_8BF0:; return;
label_8BF2:; return;
label_8BF4:; return;
label_8BF5:; return;
label_8BF8:; return;
label_8BFB:; return;
label_8BFC:; return;
label_8BFD:; return;
label_8C00:; return;
label_8C03:; return;
label_8C04:; return;
label_8C05:; return;
label_8C08:; return;
label_8C0B:; return;
label_8C0C:; return;
label_8C0D:; return;
label_8C10:; return;
label_8C13:; return;
label_8C14:; return;
label_8C15:; return;
label_8C18:; return;
label_8C1B:; return;
label_8C1C:; return;
label_8C1D:; return;
label_8C20:; return;
label_8C23:; return;
label_8C24:; return;
label_8C25:; return;
label_8C28:; return;
label_8C2B:; return;
label_8C2C:; return;
label_8C2D:; return;
label_8C30:; return;
label_8C33:; return;
label_8C34:; return;
label_8C35:; return;
label_8C38:; return;
label_8C3A:; return;
label_8C3B:; return;
label_8C3C:; return;
label_8C3D:; return;
label_8C40:; return;
label_8C43:; return;
label_8C44:; return;
label_8C46:; return;
label_8C49:; return;
label_8C4B:; return;
label_8C4C:; return;
label_8C4E:; return;
label_8C51:; return;
label_8C52:; return;
label_8C55:; return;
label_8C58:; return;
label_8C5B:; return;
label_8C5C:; return;
label_8C5D:; return;
label_8C60:; return;
label_8C63:; return;
label_8C64:; return;
label_8C65:; return;
label_8C68:; return;
label_8C6B:; return;
label_8C6C:; return;
label_8C6D:; return;
label_8C70:; return;
label_8C71:; return;
label_8C72:; return;
label_8C73:; return;
label_8C74:; return;
label_8C75:; return;
label_8C78:; return;
label_8C7A:; return;
label_8C7B:; return;
label_8C7C:; return;
label_8C7D:; return;
label_8C80:; return;
label_8C83:; return;
label_8C84:; return;
label_8C85:; return;
label_8C88:; return;
label_8C8B:; return;
label_8C8C:; return;
label_8C8D:; return;
label_8C90:; return;
label_8C93:; return;
label_8C94:; return;
label_8C95:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9E:; return;
label_8CA1:; return;
label_8CA2:; return;
label_8CA5:; return;
label_8CA8:; return;
label_8CAA:; return;
label_8CAC:; return;
label_8CAD:; return;
label_8CAF:; return;
label_8CB0:; return;
label_8CB1:; return;
label_8CB2:; return;
label_8CB5:; return;
label_8CB7:; return;
label_8CB9:; return;
label_8CBB:; return;
label_8CBD:; return;
label_8CC0:; return;
label_8CC1:; return;
label_8CC4:; return;
label_8CC7:; return;
label_8CC8:; return;
label_8CCB:; return;
label_8CCD:; return;
label_8CCF:; return;
label_8CD1:; return;
label_8CD2:; return;
label_8CD5:; return;
label_8CD6:; return;
label_8CD8:; return;
label_8CD9:; return;
label_8CDB:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE3:; return;
label_8CE6:; return;
label_8CE8:; return;
label_8CEA:; return;
label_8CEB:; return;
label_8CEC:; return;
label_8CEE:; return;
label_8CEF:; return;
label_8CF1:; return;
label_8CF2:; return;
label_8CF4:; return;
label_8CF6:; return;
label_8CF9:; return;
label_8CFA:; return;
label_8CFC:; return;
label_8CFF:; return;
label_8D00:; return;
label_8D03:; return;
label_8D04:; return;
label_8D05:; return;
label_8D06:; return;
label_8D08:; return;
label_8D0A:; return;
label_8D0C:; return;
label_8D0D:; return;
label_8D0E:; return;
label_8D10:; return;
label_8D11:; return;
label_8D13:; return;
label_8D15:; return;
label_8D16:; return;
label_8D17:; return;
label_8D19:; return;
label_8D1B:; return;
label_8D1C:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D27:; return;
label_8D29:; return;
label_8D2B:; return;
label_8D2D:; return;
label_8D2F:; return;
label_8D31:; return;
label_8D33:; return;
label_8D35:; return;
label_8D37:; return;
label_8D39:; return;
label_8D3B:; return;
label_8D3D:; return;
label_8D3F:; return;
label_8D41:; return;
label_8D43:; return;
label_8D45:; return;
label_8D46:; return;
label_8D47:; return;
label_8D49:; return;
label_8D4C:; return;
label_8D4E:; return;
label_8D50:; return;
label_8D51:; return;
label_8D53:; return;
label_8D54:; return;
label_8D56:; return;
label_8D58:; return;
label_8D59:; return;
label_8D5A:; return;
label_8D5B:; return;
label_8D5C:; return;
label_8D5E:; return;
label_8D60:; return;
label_8D61:; return;
label_8D63:; return;
label_8D66:; return;
label_8D67:; return;
label_8D69:; return;
label_8D6C:; return;
label_8D6D:; return;
label_8D70:; return;
label_8D72:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7B:; return;
label_8D7C:; return;
label_8D7E:; return;
label_8D81:; return;
label_8D84:; return;
label_8D87:; return;
label_8D88:; return;
label_8D8A:; return;
label_8D8D:; return;
label_8D90:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D97:; return;
label_8D98:; return;
label_8D99:; return;
label_8D9A:; return;
label_8D9D:; return;
label_8D9F:; return;
label_8DA2:; return;
label_8DA5:; return;
label_8DA6:; return;
label_8DA9:; return;
label_8DAC:; return;
label_8DAD:; return;
label_8DB0:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB7:; return;
label_8DB9:; return;
label_8DBB:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DC0:; return;
label_8DC2:; return;
label_8DC4:; return;
label_8DC5:; return;
label_8DC7:; return;
label_8DC9:; return;
label_8DCB:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD1:; return;
label_8DD3:; return;
label_8DD5:; return;
label_8DD7:; return;
label_8DD9:; return;
label_8DDC:; return;
label_8DDF:; return;
label_8DE1:; return;
label_8DE4:; return;
label_8DE7:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF0:; return;
label_8DF1:; return;
label_8DF4:; return;
label_8DF6:; return;
label_8DF7:; return;
label_8DF9:; return;
label_8DFB:; return;
label_8DFD:; return;
label_8E00:; return;
label_8E02:; return;
label_8E04:; return;
label_8E06:; return;
label_8E09:; return;
label_8E0B:; return;
label_8E0E:; return;
label_8E11:; return;
label_8E13:; return;
label_8E15:; return;
label_8E16:; return;
label_8E18:; return;
label_8E1A:; return;
label_8E1C:; return;
label_8E1F:; return;
label_8E22:; return;
label_8E25:; return;
label_8E28:; return;
label_8E2A:; return;
label_8E2C:; return;
label_8E2D:; return;
label_8E2E:; return;
label_8E2F:; return;
label_8E32:; return;
label_8E34:; return;
label_8E36:; return;
label_8E38:; return;
label_8E3A:; return;
label_8E3B:; return;
label_8E3D:; return;
label_8E3F:; return;
label_8E41:; return;
label_8E43:; return;
label_8E45:; return;
label_8E47:; return;
label_8E49:; return;
label_8E4B:; return;
label_8E4C:; return;
label_8E4E:; return;
label_8E51:; return;
label_8E52:; return;
label_8E55:; return;
label_8E56:; return;
label_8E59:; return;
label_8E5B:; return;
label_8E5C:; return;
label_8E5F:; return;
label_8E60:; return;
label_8E62:; return;
label_8E64:; return;
label_8E66:; return;
label_8E68:; return;
label_8E6B:; return;
label_8E6C:; return;
label_8E6E:; return;
label_8E70:; return;
label_8E72:; return;
label_8E73:; return;
label_8E76:; return;
label_8E79:; return;
label_8E7A:; return;
label_8E7D:; return;
label_8E7E:; return;
label_8E81:; return;
label_8E84:; return;
label_8E86:; return;
label_8E88:; return;
label_8E89:; return;
label_8E8C:; return;
label_8E8D:; return;
label_8E8F:; return;
label_8E90:; return;
label_8E92:; return;
label_8E93:; return;
label_8E95:; return;
label_8E97:; return;
label_8E98:; return;
label_8E9A:; return;
label_8E9B:; return;
label_8E9D:; return;
label_8E9F:; return;
label_8EA2:; return;
label_8EA3:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA7:; return;
label_8EA8:; return;
label_8EA9:; return;
label_8EAC:; return;
label_8EAE:; return;
label_8EB0:; return;
label_8EB3:; return;
label_8EB6:; return;
label_8EB7:; return;
label_8EBA:; return;
label_8EBD:; return;
label_8EBE:; return;
label_8EC1:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8ECA:; return;
label_8ECB:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ED1:; return;
label_8ED3:; return;
label_8ED5:; return;
label_8ED8:; return;
label_8EDA:; return;
label_8EDC:; return;
label_8EDE:; return;
label_8EE1:; return;
label_8EE4:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEB:; return;
label_8EED:; return;
label_8EEF:; return;
label_8EF0:; return;
label_8EF1:; return;
label_8EF3:; return;
label_8EF6:; return;
label_8EF8:; return;
label_8EF9:; return;
label_8EFB:; return;
label_8EFD:; return;
label_8EFF:; return;
label_8F01:; return;
label_8F03:; return;
label_8F05:; return;
label_8F07:; return;
label_8F09:; return;
label_8F0B:; return;
label_8F0D:; return;
label_8F0E:; return;
label_8F0F:; return;
label_8F11:; return;
label_8F12:; return;
label_8F13:; return;
label_8F15:; return;
label_8F17:; return;
label_8F19:; return;
label_8F1B:; return;
label_8F1D:; return;
label_8F1F:; return;
label_8F21:; return;
label_8F23:; return;
label_8F25:; return;
label_8F27:; return;
label_8F29:; return;
label_8F2A:; return;
label_8F2B:; return;
label_8F2D:; return;
label_8F2E:; return;
label_8F2F:; return;
label_8F31:; return;
label_8F32:; return;
label_8F34:; return;
label_8F36:; return;
label_8F39:; return;
label_8F3B:; return;
label_8F3D:; return;
label_8F40:; return;
label_8F42:; return;
label_8F43:; return;
label_8F45:; return;
label_8F46:; return;
label_8F47:; return;
label_8F49:; return;
label_8FA1:; return;
label_8FA3:; return;
label_8FA6:; return;
label_8FA9:; return;
label_8FAB:; return;
label_8FAD:; return;
label_8FAF:; return;
label_8FB0:; return;
label_8FB3:; return;
label_8FB4:; return;
label_8FB6:; return;
label_8FB8:; return;
label_8FBB:; return;
label_8FBD:; return;
label_8FBE:; return;
label_8FC0:; return;
label_8FC2:; return;
label_8FC3:; return;
label_8FC6:; return;
label_8FC7:; return;
label_8FC8:; return;
label_8FC9:; return;
label_8FCB:; return;
label_8FCD:; return;
label_8FD0:; return;
label_8FD3:; return;
label_8FD5:; return;
label_8FD7:; return;
label_8FD8:; return;
label_8FDB:; return;
label_8FDC:; return;
label_8FDD:; return;
label_8FDE:; return;
label_8FE0:; return;
label_8FE2:; return;
label_8FE5:; return;
label_8FE7:; return;
label_8FEA:; return;
label_8FEC:; return;
label_8FEE:; return;
label_8FF0:; return;
label_8FF2:; return;
label_8FF3:; return;
label_8FF4:; return;
label_8FF6:; return;
label_8FF8:; return;
label_8FFA:; return;
label_8FFB:; return;
label_8FFE:; return;
label_8FFF:; return;
label_9000:; return;
label_9001:; return;
label_9003:; return;
label_9005:; return;
label_9008:; return;
label_900A:; return;
label_900B:; return;
label_900D:; return;
label_900F:; return;
label_9010:; return;
label_9013:; return;
label_9014:; return;
label_9015:; return;
label_9016:; return;
label_9018:; return;
label_901A:; return;
label_901D:; return;
label_901F:; return;
label_9020:; return;
label_9023:; return;
label_9026:; return;
label_9028:; return;
label_9029:; return;
label_902A:; return;
label_902B:; return;
label_902D:; return;
label_9030:; return;
label_9031:; return;
label_9033:; return;
label_9035:; return;
label_9037:; return;
label_9038:; return;
label_903B:; return;
label_903C:; return;
label_903D:; return;
label_903E:; return;
label_9040:; return;
label_9042:; return;
label_9044:; return;
label_9046:; return;
label_9048:; return;
label_9049:; return;
label_904C:; return;
label_904D:; return;
label_904E:; return;
label_904F:; return;
label_9051:; return;
label_9053:; return;
label_9056:; return;
label_9057:; return;
label_9059:; return;
label_905B:; return;
label_905D:; return;
label_905E:; return;
label_9061:; return;
label_9062:; return;
label_9063:; return;
label_9064:; return;
label_9066:; return;
label_9068:; return;
label_906B:; return;
label_906D:; return;
label_906E:; return;
label_9070:; return;
label_9072:; return;
label_9073:; return;
label_9076:; return;
label_9077:; return;
label_9078:; return;
label_9079:; return;
label_907B:; return;
label_907D:; return;
label_9080:; return;
label_9083:; return;
label_9085:; return;
label_9086:; return;
label_9088:; return;
label_908A:; return;
label_908C:; return;
label_908F:; return;
label_9091:; return;
label_9092:; return;
label_9095:; return;
label_9097:; return;
label_9099:; return;
label_909B:; return;
label_909D:; return;
label_909E:; return;
label_909F:; return;
label_90A0:; return;
label_90A1:; return;
label_90A2:; return;
label_90A3:; return;
label_90A4:; return;
label_90A5:; return;
label_90A6:; return;
label_90A7:; return;
label_90A8:; return;
label_90A9:; return;
label_90AA:; return;
label_90AB:; return;
label_90AC:; return;
label_90AD:; return;
label_90AE:; return;
label_90B1:; return;
label_90B4:; return;
label_90B6:; return;
label_90B8:; return;
label_90BB:; return;
label_90BE:; return;
label_90C0:; return;
label_90C1:; return;
label_90C3:; return;
label_90C5:; return;
label_90C7:; return;
label_90C9:; return;
label_90CC:; return;
label_90CD:; return;
label_90D0:; return;
label_90D3:; return;
label_90D5:; return;
label_90D8:; return;
label_90DB:; return;
label_90DD:; return;
label_90DF:; return;
label_90E0:; return;
label_90E2:; return;
label_90E3:; return;
label_90E5:; return;
label_90E7:; return;
label_90E9:; return;
label_90EB:; return;
label_90ED:; return;
label_90EF:; return;
label_90F1:; return;
label_90F2:; return;
label_90F4:; return;
label_90F7:; return;
label_90F8:; return;
label_90FA:; return;
label_90FD:; return;
label_90FF:; return;
label_9101:; return;
label_9102:; return;
label_9104:; return;
label_9107:; return;
label_9109:; return;
label_910A:; return;
label_910D:; return;
label_910F:; return;
label_9111:; return;
label_9113:; return;
label_9115:; return;
label_9116:; return;
label_9117:; return;
label_9119:; return;
label_911B:; return;
label_911D:; return;
label_911F:; return;
label_9122:; return;
label_9124:; return;
label_9126:; return;
label_9127:; return;
label_9129:; return;
label_912C:; return;
label_912E:; return;
label_9130:; return;
label_9131:; return;
label_9132:; return;
label_9134:; return;
label_9136:; return;
label_9138:; return;
label_9139:; return;
label_913C:; return;
label_913D:; return;
label_913E:; return;
label_9140:; return;
label_9142:; return;
label_9143:; return;
label_9145:; return;
label_9146:; return;
label_9148:; return;
label_9149:; return;
label_914A:; return;
label_914C:; return;
label_914E:; return;
label_914F:; return;
label_9151:; return;
label_9153:; return;
label_9154:; return;
label_9156:; return;
label_9157:; return;
label_9159:; return;
label_915A:; return;
label_915C:; return;
label_915D:; return;
label_9160:; return;
label_9162:; return;
label_9164:; return;
label_9165:; return;
label_9168:; return;
label_916A:; return;
label_916C:; return;
label_916E:; return;
label_916F:; return;
label_9172:; return;
label_9174:; return;
label_9176:; return;
label_9179:; return;
label_917B:; return;
label_917C:; return;
label_917F:; return;
label_9180:; return;
label_9182:; return;
label_9185:; return;
label_9188:; return;
label_9189:; return;
label_918A:; return;
label_918D:; return;
label_918F:; return;
label_9191:; return;
label_9193:; return;
label_9195:; return;
label_9197:; return;
label_9199:; return;
label_919B:; return;
label_919E:; return;
label_91A0:; return;
label_91A3:; return;
label_91A4:; return;
label_91A6:; return;
label_91A8:; return;
label_91A9:; return;
label_91AC:; return;
label_91AD:; return;
label_91AF:; return;
label_91B0:; return;
label_91B2:; return;
label_91B4:; return;
label_91B7:; return;
label_91B9:; return;
label_91BA:; return;
label_91BC:; return;
label_91BF:; return;
label_91C1:; return;
label_91C2:; return;
label_91C4:; return;
label_91C5:; return;
label_91C6:; return;
label_91C8:; return;
label_91CB:; return;
label_91CC:; return;
label_91CE:; return;
label_91CF:; return;
label_91D1:; return;
label_91D3:; return;
label_91D5:; return;
label_91D8:; return;
label_91D9:; return;
label_91DA:; return;
label_91DC:; return;
label_91DD:; return;
label_91DF:; return;
label_91E1:; return;
label_91E3:; return;
label_91E4:; return;
label_91E5:; return;
label_91E7:; return;
label_91E8:; return;
label_91E9:; return;
label_91EC:; return;
label_91EF:; return;
label_91F0:; return;
label_91F1:; return;
label_91F3:; return;
label_91F4:; return;
label_91F6:; return;
label_91F7:; return;
label_91F8:; return;
label_91FA:; return;
label_91FC:; return;
label_91FD:; return;
label_91FF:; return;
label_9201:; return;
label_9203:; return;
label_9204:; return;
label_9205:; return;
label_9207:; return;
label_9209:; return;
label_920A:; return;
label_920C:; return;
label_920D:; return;
label_920E:; return;
label_920F:; return;
label_9211:; return;
label_9212:; return;
label_9213:; return;
label_9215:; return;
label_9216:; return;
label_9217:; return;
label_9218:; return;
label_921A:; return;
label_921C:; return;
label_921E:; return;
label_9220:; return;
label_9222:; return;
label_9223:; return;
label_9225:; return;
label_9226:; return;
label_9228:; return;
label_922A:; return;
label_922B:; return;
label_922D:; return;
label_922F:; return;
label_9232:; return;
label_9235:; return;
label_9236:; return;
label_9237:; return;
label_9239:; return;
label_923B:; return;
label_923D:; return;
label_923F:; return;
label_9241:; return;
label_9242:; return;
label_9244:; return;
label_9247:; return;
label_924A:; return;
label_924B:; return;
label_924D:; return;
label_924E:; return;
label_9250:; return;
label_9251:; return;
label_9252:; return;
label_9253:; return;
label_9255:; return;
label_9258:; return;
label_925B:; return;
label_925D:; return;
label_925E:; return;
label_9260:; return;
label_9263:; return;
label_9266:; return;
label_9268:; return;
label_926A:; return;
label_926C:; return;
label_926E:; return;
label_9270:; return;
label_9271:; return;
label_9274:; return;
label_9276:; return;
label_9279:; return;
label_927B:; return;
label_927C:; return;
label_927E:; return;
label_9280:; return;
label_9282:; return;
label_9284:; return;
label_9286:; return;
label_9288:; return;
label_9289:; return;
label_928B:; return;
label_928D:; return;
label_928E:; return;
label_9290:; return;
label_9292:; return;
label_9295:; return;
label_9297:; return;
label_9299:; return;
label_929A:; return;
label_929D:; return;
label_929E:; return;
label_92A1:; return;
label_92A4:; return;
label_92A7:; return;
label_92A8:; return;
label_92AA:; return;
label_92AB:; return;
label_92AE:; return;
label_92AF:; return;
label_92B0:; return;
label_92B2:; return;
label_92B3:; return;
label_92B4:; return;
label_92B7:; return;
label_92B9:; return;
label_92BA:; return;
label_92BC:; return;
label_92BF:; return;
label_92C2:; return;
label_92C4:; return;
label_92C7:; return;
label_92C8:; return;
label_92CB:; return;
label_92CC:; return;
label_92CE:; return;
label_92CF:; return;
label_92D2:; return;
label_92D3:; return;
label_92D4:; return;
label_92D6:; return;
label_92D7:; return;
label_92D8:; return;
label_92DA:; return;
label_92DD:; return;
label_92DE:; return;
label_92E1:; return;
label_92E3:; return;
label_92E4:; return;
label_92E6:; return;
label_92E9:; return;
label_92EA:; return;
label_92EC:; return;
label_92EE:; return;
label_92EF:; return;
label_92F0:; return;
label_92F3:; return;
label_92F4:; return;
label_92F5:; return;
label_92F7:; return;
label_92FA:; return;
label_92FB:; return;
label_92FD:; return;
label_92FF:; return;
label_9301:; return;
label_9303:; return;
}

void func_82E2_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82E2_b11");
#endif
    func_82E2_b11_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8592_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8592_b11");
#endif
    func_82E2_b11_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8393_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8393_b11");
#endif
    func_82E2_b11_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8386_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8386_b11");
#endif
    func_82E2_b11_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_86BA_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86BA_b11");
#endif
    func_82E2_b11_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85A3_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A3_b11");
#endif
    func_82E2_b11_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8326_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8326_b11");
#endif
    func_82E2_b11_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85AE_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AE_b11");
#endif
    func_82E2_b11_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85DE_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85DE_b11");
#endif
    func_82E2_b11_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8497_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8497_b11");
#endif
    func_82E2_b11_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85A0_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A0_b11");
#endif
    func_82E2_b11_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82E6_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82E6_b11");
#endif
    func_82E2_b11_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82FA_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82FA_b11");
#endif
    func_82E2_b11_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82FB_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82FB_b11");
#endif
    func_82E2_b11_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8300_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8300_b11");
#endif
    func_82E2_b11_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_830A_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_830A_b11");
#endif
    func_82E2_b11_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8311_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8311_b11");
#endif
    func_82E2_b11_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8320_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8320_b11");
#endif
    func_82E2_b11_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8390_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8390_b11");
#endif
    func_82E2_b11_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84A4_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84A4_b11");
#endif
    func_82E2_b11_body(19);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85E4_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85E4_b11");
#endif
    func_82E2_b11_body(20);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83A8_b11_body(int _entry) {
    switch (_entry) {
        case 1: goto label_83CD;
        case 2: goto label_8491;
        case 3: goto label_847E;
        case 4: goto label_83AF;
        case 5: goto label_83BC;
        case 6: goto label_83BF;
        case 7: goto label_83CC;
        case 8: goto label_83DA;
        case 9: goto label_83E7;
        case 10: goto label_83EA;
        case 11: goto label_83EF;
        case 12: goto label_8406;
        case 13: goto label_8419;
        case 14: goto label_842A;
        case 15: goto label_8440;
        case 16: goto label_8454;
        case 17: goto label_8466;
        case 18: goto label_8496;
    }
label_83A8:;
    /* $83A8: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83AA:;
    /* $83AA: 84 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.Y);
label_83AC:;
    /* $83AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x86BA, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83AF:; /* weapon_damage_ptr_lo */
    /* $83AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0740 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83B2:;
    /* $83B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_83B3:;
    /* $83B3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83B5:;
    /* $83B5: 9D */ maybe_trigger_vblank(5); nes_write((0x0740 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83B8:;
    /* $83B8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83BC; }
label_83BA:;
    /* $83BA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_83BF; }
label_83BC:;
    /* $83BC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03BE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85A3, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83BC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83BF:;
    /* $83BF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83C2:;
    /* $83C2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_83C3:;
    /* $83C3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C5:;
    /* $83C5: 9D */ maybe_trigger_vblank(5); nes_write((0x0738 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_83C8:;
    /* $83C8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_83CD; }
label_83CA:;
    /* $83CA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_83CD; }
label_83CC:;
    /* $83CC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_83CD:;
    /* $83CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03CF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8592, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D0:;
    /* $83D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_83D2:;
    /* $83D2: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_83DA; }
label_83D4:;
    /* $83D4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03D6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8497, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83D4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83D7:;
    /* $83D7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83CD, 11); return;
label_83DA:;
    /* $83DA: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_83DB:;
    /* $83DB: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DC:;
    /* $83DC: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DD:;
    /* $83DD: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DE:;
    /* $83DE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_83DF:;
    /* $83DF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_83E1:;
    /* $83E1: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_83E2:;
    /* $83E2: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_83E3:;
    /* $83E3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83E6:;
    /* $83E6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83E7:;
    /* $83E7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83E8:;
    /* $83E8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_83EF; }
label_83EA:;
    /* $83EA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8915 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83ED:;
    /* $83ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_8406; }
label_83EF:;
    /* $83EF: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83F0:;
    /* $83F0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_83F1:;
    /* $83F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x891C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83F4:;
    /* $83F4: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_8406; }
label_83F6:;
    /* $83F6: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_83F8:;
    /* $83F8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83FB:;
    /* $83FB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xEF; FLAG_NZ(g_cpu.A);
label_83FD:;
    /* $83FD: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8400:;
    /* $8400: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_8402:;
    /* $8402: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8403:;
    /* $8403: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8404:;
    /* $8404: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8406:;
    /* $8406: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8407:;
    /* $8407: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0738 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_840A:;
    /* $840A: 9D */ maybe_trigger_vblank(5); nes_write((0x0738 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_840D:;
    /* $840D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_840E:;
    /* $840E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_840F:;
    /* $840F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_8411:;
    /* $8411: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8419; }
label_8413:;
    /* $8413: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0415); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85A3, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8413, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8416:;
    /* $8416: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8491, 11); return;
label_8419:;
    /* $8419: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_841A:;
    /* $841A: 84 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.Y);
label_841C:;
    /* $841C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x073C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_841F:;
    /* $841F: 85 */ maybe_trigger_vblank(3); nes_write(0xC1, g_cpu.A);
label_8421:;
    /* $8421: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0423); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8421, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8424:;
    /* $8424: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC1); FLAG_NZ(g_cpu.A);
label_8426:;
    /* $8426: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_842A; }
label_8428:;
    /* $8428: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_842A:;
    /* $842A: 9D */ maybe_trigger_vblank(5); nes_write((0x0740 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_842D:;
    /* $842D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_842E:;
    /* $842E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_842F:;
    /* $842F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8430:;
    /* $8430: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8433:;
    /* $8433: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8440; }
label_8435:;
    /* $8435: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0718 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8438:;
    /* $8438: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8454; }
label_843A:;
    /* $843A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x043C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8644, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x843A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_843D:;
    /* $843D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x847E, 11); return;
label_8440:;
    /* $8440: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0442); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85AE, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8440, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8443:;
    /* $8443: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xCF); FLAG_NZ(g_cpu.A);
label_8445:;
    /* $8445: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8454; }
label_8447:;
    /* $8447: 84 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.Y);
label_8449:;
    /* $8449: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_844A:;
    /* $844A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_844C:;
    /* $844C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_844D:;
    /* $844D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_844F:;
    /* $844F: 99 */ maybe_trigger_vblank(5); nes_write((0x077C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8452:;
    /* $8452: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xC3); FLAG_NZ(g_cpu.Y);
label_8454:;
    /* $8454: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8455:;
    /* $8455: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_8457:;
    /* $8457: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8466; }
label_8459:;
    /* $8459: 85 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.A);
label_845B:;
    /* $845B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_845C:;
    /* $845C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_845E:;
    /* $845E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x0F; FLAG_NZ(g_cpu.A);
label_8460:;
    /* $8460: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0462); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8636, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8460, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8463:;
    /* $8463: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x847E, 11); return;
label_8466:;
    /* $8466: 84 */ maybe_trigger_vblank(3); nes_write(0xC3, g_cpu.Y);
label_8468:;
    /* $8468: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_846B:;
    /* $846B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_846D:;
    /* $846D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_846E:;
    /* $846E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8923 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8471:;
    /* $8471: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8472:;
    /* $8472: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8474:;
    /* $8474: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8475:;
    /* $8475: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCB); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8477:;
    /* $8477: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8478:;
    /* $8478: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0734 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_847B:;
    /* $847B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x047D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x85DE, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x847B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_847E:;
    /* $847E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0730 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8481:;
    /* $8481: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8482:;
    /* $8482: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_8484:;
    /* $8484: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8485:;
    /* $8485: 85 */ maybe_trigger_vblank(3); nes_write(0xC4, g_cpu.A);
label_8487:;
    /* $8487: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8488:;
    /* $8488: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_848A:;
    /* $848A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC4); FLAG_NZ(g_cpu.A);
label_848C:;
    /* $848C: 9D */ maybe_trigger_vblank(5); nes_write((0x0730 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_848F:;
    /* $848F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8496; }
label_8491:;
    /* $8491: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8493:;
    /* $8493: 9D */ maybe_trigger_vblank(5); nes_write((0x0740 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8496:;
    /* $8496: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_83A8_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83A8_b11");
#endif
    func_83A8_b11_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83CD_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83CD_b11");
#endif
    func_83A8_b11_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8491_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8491_b11");
#endif
    func_83A8_b11_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_847E_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_847E_b11");
#endif
    func_83A8_b11_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83AF_b11(void) { /* weapon_damage_ptr_lo */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83AF_b11");
#endif
    func_83A8_b11_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83BC_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83BC_b11");
#endif
    func_83A8_b11_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83BF_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83BF_b11");
#endif
    func_83A8_b11_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83CC_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83CC_b11");
#endif
    func_83A8_b11_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83DA_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83DA_b11");
#endif
    func_83A8_b11_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83E7_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83E7_b11");
#endif
    func_83A8_b11_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83EA_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83EA_b11");
#endif
    func_83A8_b11_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83EF_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83EF_b11");
#endif
    func_83A8_b11_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8406_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8406_b11");
#endif
    func_83A8_b11_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8419_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8419_b11");
#endif
    func_83A8_b11_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_842A_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_842A_b11");
#endif
    func_83A8_b11_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8440_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8440_b11");
#endif
    func_83A8_b11_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8454_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8454_b11");
#endif
    func_83A8_b11_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8466_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8466_b11");
#endif
    func_83A8_b11_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8496_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8496_b11");
#endif
    func_83A8_b11_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8439_b11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8439_b11");
#endif
label_8439:;
    /* $8439: 1A */ maybe_trigger_vblank(2); /* NOP */
label_843A:;
    /* $843A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x043C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8644, 11)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x843A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_843D:;
    /* $843D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x847E, 11); return;
}
