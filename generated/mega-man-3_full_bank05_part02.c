/* mega-man-3_full_bank05_part02.c — PRG bank 5 function bodies (sub-part 2).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_8504_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b5");
#endif
label_8504:;
    /* $8504: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8506:;
    /* $8506: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8507:;
    /* $8507: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8509:;
    /* $8509: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_850B:;
    /* $850B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_850C:;
    /* $850C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x850C); return;
}

void func_809D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_809D_b5");
#endif
label_809D:;
    /* $809D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x809D); return;
}

void func_9893_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9893_b5");
#endif
label_9893:;
    /* $9893: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x17 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9895:;
    /* $9895: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x31 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9897:;
    /* $9897: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x17 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9899:;
    /* $9899: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x39 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_989B:;
    /* $989B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0007 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_989E:;
    /* $989E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98A0:;
    /* $98A0: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2816); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_98A3:;
    /* $98A3: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xB800 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98A6:;
    /* $98A6: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x00B7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_98A9:;
    /* $98A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x98A9); return;
}

void func_B893_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B893_b5");
#endif
label_B893:;
    /* $B893: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x0404; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B896:;
    /* $B896: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x096D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B89A:;
    /* $B89A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B89C:;
    /* $B89C: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B89E:;
    /* $B89E: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x741A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8A1:;
    /* $B8A1: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0074; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8A4:;
    /* $B8A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x080F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8A7:;
    /* $B8A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A7); return;
}

void func_98BD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98BD_b5");
#endif
label_98BD:;
    /* $98BD: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98BF:;
    /* $98BF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1865), 5); return; }
label_98C1:;
    /* $98C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98C4:;
    /* $98C4: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xBD + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_98C6:;
    /* $98C6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_98C7:;
    /* $98C7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x98C7); return;
}

void func_B8BD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8BD_b5");
#endif
label_B8BD:;
    /* $B8BD: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B8BF:;
    /* $B8BF: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8C1:;
    /* $B8C1: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_B8C3:;
    /* $B8C3: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B8C4:;
    /* $B8C4: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x46; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B8C6:;
    /* $B8C6: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8C8:;
    /* $B8C8: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x484F); FLAG_NZ(g_cpu.A);
label_B8CB:;
    /* $B8CB: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x4F48; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B8CE:;
    /* $B8CE: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B8CF:;
    /* $B8CF: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x0404; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B8D2:;
    /* $B8D2: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D4:;
    /* $B8D4: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8D6:;
    /* $B8D6: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8D8:;
    /* $B8D8: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8DA:;
    /* $B8DA: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x16 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8DC:;
    /* $B8DC: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x2F33; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8DF:;
    /* $B8DF: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8E1:;
    /* $B8E1: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x32) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8E3:;
    /* $B8E3: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8E5:;
    /* $B8E5: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B8E7:;
    /* $B8E7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8E8:;
    /* $B8E8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8EA:;
    /* $B8EA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B8EC:;
    /* $B8EC: 8E */ maybe_trigger_vblank(4); nes_write(0x828F, g_cpu.X);
label_B8EF:;
    /* $B8EF: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x2D + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B8F1:;
    /* $B8F1: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x8B8A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8F4:;
    /* $B8F4: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B8F5:;
    /* $B8F5: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B8F7:;
    /* $B8F7: 8D */ maybe_trigger_vblank(4); nes_write(0x4F33, g_cpu.A);
label_B8FA:;
    /* $B8FA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x4850, -1); return;
}

void func_9865_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9865_b5");
#endif
label_9865:;
    /* $9865: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x2125; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9868:;
    /* $9868: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9868); return;
}

void func_9785_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b5");
#endif
label_9785:;
    /* $9785: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9787:;
    /* $9787: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xB7; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9789:;
    /* $9789: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_978A:;
    /* $978A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_978B:;
    /* $978B: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x07B1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_978E:;
    /* $978E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x978E); return;
}

void func_99F0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F0_b5");
#endif
label_99F0:;
    /* $99F0: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x3C2E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_99F3:;
    /* $99F3: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_99F4:;
    /* $99F4: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_99F5:;
    /* $99F5: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x662E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99F8:;
    /* $99F8: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x6C00 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99FB:;
    /* $99FB: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x3F20 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99FE:;
    /* $99FE: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1716); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9A01:;
    /* $9A01: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_9A22; }
label_9A03:;
    /* $9A03: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A04:;
    /* $9A04: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A05:;
    /* $9A05: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A05); return;
label_9A06:;
    /* $9A06: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0066; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A09:;
    /* $9A09: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x0000; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A0C:;
    /* $9A0C: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9A0D:;
    /* $9A0D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A0D); return;
label_9A0E:;
    /* $9A0E: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2A00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A11:;
    /* $9A11: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x6C2E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A14:;
    /* $9A14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A14); return;
label_9A15:;
    /* $9A15: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A15); return;
label_9A16:;
    /* $9A16: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A19:;
    /* $9A19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A19); return;
label_9A1A:;
    /* $9A1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9A1A); return;
label_9A1B:;
    /* $9A1B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x6C2E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9A1E:;
    /* $9A1E: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x6C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A20:;
    /* $9A20: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6C7E); nes_trace_indirect_jump(0x9A20, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_9A22:;
    /* $9A22: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x7F6C); nes_trace_indirect_jump(0x9A22, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_99AD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99AD_b5");
#endif
label_99AD:;
    /* $99AD: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x666C; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_99B0:;
    /* $99B0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_99B1:;
    /* $99B1: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6C03); nes_trace_indirect_jump(0x99B1, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_98A9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A9_b5");
#endif
label_98A9:;
    /* $98A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x98A9); return;
}

void func_88E8_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E8_b5");
#endif
label_88E8:;
    /* $88E8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x88E8); return;
}

void func_A2C7_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2C7_b5");
#endif
label_A2C7:;
    /* $A2C7: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A2C9:;
    /* $A2C9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA2C9); return;
}

void func_8038_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8038_b5");
#endif
label_8038:;
    /* $8038: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8038); return;
}

void func_8048_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8048_b5");
#endif
label_8048:;
    /* $8048: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8048); return;
}

void func_8053_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8053_b5");
#endif
label_8053:;
    /* $8053: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8055:;
    /* $8055: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8057:;
    /* $8057: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8057); return;
}

void func_8061_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8061_b5");
#endif
label_8061:;
    /* $8061: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8061); return;
}

void func_80A6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A6_b5");
#endif
label_80A6:;
    /* $80A6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80A8:;
    /* $80A8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_80AA:;
    /* $80AA: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_80AB:;
    /* $80AB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_80AD:;
    /* $80AD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80AD); return;
}

void func_80F1_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F1_b5");
#endif
label_80F1:;
    /* $80F1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80F3:;
    /* $80F3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80F3); return;
}

void func_80F9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F9_b5");
#endif
label_80F9:;
    /* $80F9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80F9); return;
}

void func_8121_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8121_b5");
#endif
label_8121:;
    /* $8121: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8123:;
    /* $8123: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8123); return;
}

void func_8131_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8131_b5");
#endif
label_8131:;
    /* $8131: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8131); return;
}

void func_814E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_814E_b5");
#endif
label_814E:;
    /* $814E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8150:;
    /* $8150: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8150); return;
}

void func_817B_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_817B_b5");
#endif
label_817B:;
    /* $817B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x817B); return;
}

void func_8190_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8190_b5");
#endif
label_8190:;
    /* $8190: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8190); return;
}

void func_81B0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81B0_b5");
#endif
label_81B0:;
    /* $81B0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81B2:;
    /* $81B2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81B4:;
    /* $81B4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81B4); return;
}

void func_81D6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81D6_b5");
#endif
label_81D6:;
    /* $81D6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81D8:;
    /* $81D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81D8); return;
}

void func_81E6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81E6_b5");
#endif
label_81E6:;
    /* $81E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81E6); return;
}

void func_81F1_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81F1_b5");
#endif
label_81F1:;
    /* $81F1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81F3:;
    /* $81F3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81F3); return;
}

void func_8255_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8255_b5");
#endif
label_8255:;
    /* $8255: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8255); return;
}

void func_8269_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8269_b5");
#endif
label_8269:;
    /* $8269: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8269); return;
}

void func_827E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_827E_b5");
#endif
label_827E:;
    /* $827E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x827E); return;
}

void func_8289_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8289_b5");
#endif
label_8289:;
    /* $8289: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_828B:;
    /* $828B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x828B); return;
}

void func_8291_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8291_b5");
#endif
label_8291:;
    /* $8291: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8291); return;
}

void func_82D2_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82D2_b5");
#endif
label_82D2:;
    /* $82D2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_82D3:;
    /* $82D3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82D3); return;
}

void func_82EA_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82EA_b5");
#endif
label_82EA:;
    /* $82EA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82EA); return;
}

void func_82F4_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F4_b5");
#endif
label_82F4:;
    /* $82F4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82F4); return;
}

void func_8301_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8301_b5");
#endif
label_8301:;
    /* $8301: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8301); return;
}

void func_8344_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8344_b5");
#endif
label_8344:;
    /* $8344: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8344); return;
}

void func_8352_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8352_b5");
#endif
label_8352:;
    /* $8352: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8353:;
    /* $8353: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8353); return;
}

void func_835C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_835C_b5");
#endif
label_835C:;
    /* $835C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x835C); return;
}

void func_8372_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8372_b5");
#endif
label_8372:;
    /* $8372: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8372); return;
}

void func_8375_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8375_b5");
#endif
label_8375:;
    /* $8375: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8377:;
    /* $8377: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8377); return;
}

void func_83CC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83CC_b5");
#endif
label_83CC:;
    /* $83CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x83CC); return;
}

void func_83F6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83F6_b5");
#endif
label_83F6:;
    /* $83F6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x83F6); return;
}

void func_8422_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8422_b5");
#endif
label_8422:;
    /* $8422: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8422); return;
}

void func_8430_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8430_b5");
#endif
label_8430:;
    /* $8430: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8432:;
    /* $8432: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8432); return;
}

void func_8466_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8466_b5");
#endif
label_8466:;
    /* $8466: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8466); return;
}

void func_8476_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8476_b5");
#endif
label_8476:;
    /* $8476: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8476); return;
}

void func_8481_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8481_b5");
#endif
label_8481:;
    /* $8481: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8481); return;
}

void func_848F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_848F_b5");
#endif
label_848F:;
    /* $848F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x848F); return;
}

void func_84A3_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84A3_b5");
#endif
label_84A3:;
    /* $84A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84A5:;
    /* $84A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x84A5); return;
}

void func_84D9_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84D9_b5");
#endif
label_84D9:;
    /* $84D9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x84D9); return;
}

void func_84EC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84EC_b5");
#endif
label_84EC:;
    /* $84EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x84EC); return;
}

void func_8500_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8500_b5");
#endif
label_8500:;
    /* $8500: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8500); return;
}

void func_850F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_850F_b5");
#endif
label_850F:;
    /* $850F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x850F); return;
}

void func_8543_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8543_b5");
#endif
label_8543:;
    /* $8543: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8543); return;
}

void func_8554_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8554_b5");
#endif
label_8554:;
    /* $8554: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8554); return;
}

void func_8565_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8565_b5");
#endif
label_8565:;
    /* $8565: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8565); return;
}

void func_8590_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8590_b5");
#endif
label_8590:;
    /* $8590: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8590); return;
}

void func_85A0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85A0_b5");
#endif
label_85A0:;
    /* $85A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85A0); return;
}

void func_8602_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8602_b5");
#endif
label_8602:;
    /* $8602: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8604:;
    /* $8604: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8606:;
    /* $8606: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8606); return;
}

void func_8654_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8654_b5");
#endif
label_8654:;
    /* $8654: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8654); return;
}

void func_A009_b5(void) { /* main_shadow_man_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A009_b5");
#endif
label_A009:; /* main_shadow_man_j */
    /* $A009: EE */ maybe_trigger_vblank(6); { uint16_t a=0x5220; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A00C:; /* main_snake_man_j */
    /* $A00C: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A00E:;
    /* $A00E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x85); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A010:;
    /* $A010: 97 */ maybe_trigger_vblank(4); nes_write((0x20 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A012:; /* main_gemini_man_j */
    /* $A012: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xC5; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A014:;
    /* $A014: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0016); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA014, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A017:;
    /* $A017: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0019); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A01A:;
    /* $A01A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A01C:; /* main_needle_man */
    /* $A01C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x001E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA01C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A01F:;
    /* $A01F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A021:; /* main_teleporter */
    /* $A021: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_A023:;
    /* $A023: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_A025:;
    /* $A025: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_A027:; /* main_wily_machine_C */
    /* $A027: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_A029:;
    /* $A029: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_A02B:;
    /* $A02B: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_A02D:;
    /* $A02D: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_A031:;
    /* $A031: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_A033:;
    /* $A033: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0037); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA035, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A038:;
    /* $A038: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A03A:;
    /* $A03A: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A03C:;
    /* $A03C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x003E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA03C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A03F:; /* main_holograph */
    /* $A03F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0041); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A042:;
    /* $A042: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A038;
    }
label_A046:;
    /* $A046: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A048:;
    /* $A048: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8655 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04B:;
    /* $A04B: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A04E:;
    /* $A04E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A04F:;
    /* $A04F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A048;
    }
label_A051:;
    /* $A051: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A053:;
    /* $A053: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86B5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A056:;
    /* $A056: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A059:;
    /* $A059: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A05A:;
    /* $A05A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A053;
    }
label_A05C:;
    /* $A05C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x005E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA05C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A063:;
    /* $A063: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A066:;
    /* $A066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A068:; /* needle_man_throw */
    /* $A068: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A06B:;
    /* $A06B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06E:;
    /* $A06E: 99 */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A071:;
    /* $A071: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A074:;
    /* $A074: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A077:;
    /* $A077: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07A:;
    /* $A07A: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A07D:;
    /* $A07D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A082:;
    /* $A082: 99 */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A085:;
    /* $A085: 99 */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A088:;
    /* $A088: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A08B:;
    /* $A08B: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A08E:;
    /* $A08E: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A091:;
    /* $A091: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A094:;
    /* $A094: 8D */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.A);
label_A097:;
    /* $A097: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A099:;
    /* $A099: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A09C:;
    /* $A09C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A09E:;
    /* $A09E: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0A1:;
    /* $A0A1: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0A2:;
    /* $A0A2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A061;
    }
label_A0A4:;
    /* $A0A4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_A0A6:;
    /* $A0A6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0A9:;
    /* $A0A9: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0AC:;
    /* $A0AC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0AD:;
    /* $A0AD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0A6;
    }
label_A0AF:;
    /* $A0AF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_A0B1:;
    /* $A0B1: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A0B3:;
    /* $A0B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A0B5:;
    /* $A0B5: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_A0B7:;
    /* $A0B7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A0BA:;
    /* $A0BA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00BC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0BD:;
    /* $A0BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A0C2:;
    /* $A0C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0C4:;
    /* $A0C4: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A0C7:;
    /* $A0C7: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A0C9:;
    /* $A0C9: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_A0CB:;
    /* $A0CB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A0CD:;
    /* $A0CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A0D0:;
    /* $A0D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A0D2:;
    /* $A0D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0F9; }
label_A0D4:;
    /* $A0D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A0D6:;
    /* $A0D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A11A; }
label_A0D8:;
    /* $A0D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00DA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0DB:;
    /* $A0DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA4; FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0E0:;
    /* $A0E0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0F1; }
label_A0E2:;
    /* $A0E2: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A0E5:;
    /* $A0E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05A0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0EA:;
    /* $A0EA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A11A; }
label_A0EC:;
    /* $A0EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A0EE:;
    /* $A0EE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00F0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0EE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0F1:;
    /* $A0F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0F3:;
    /* $A0F3: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A0F6:;
    /* $A0F6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x811A, 5); return;
label_A0F9:;
    /* $A0F9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A0FC:;
    /* $A0FC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A0FE:;
    /* $A0FE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A11A; }
label_A100:; /* buster_damage_table */
    /* $A100: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_A103:;
    /* $A103: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A104:;
    /* $A104: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x80; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A106:;
    /* $A106: 8D */ maybe_trigger_vblank(4); nes_write(0x0340, g_cpu.A);
label_A109:;
    /* $A109: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A10E:;
    /* $A10E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A111:;
    /* $A111: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x98; g_cpu.C=(g_cpu.A>=0x98)?1:0; FLAG_NZ(r&0xFF); }
label_A113:;
    /* $A113: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A11A; }
label_A115:;
    /* $A115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A117:;
    /* $A117: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0119); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA117, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A11A:;
    /* $A11A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A11C:;
    /* $A11C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A121; }
label_A11E:;
    /* $A11E: 8D */ maybe_trigger_vblank(4); nes_write(0x05E1, g_cpu.A);
label_A121:;
    /* $A121: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A123:;
    /* $A123: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14E; }
label_A127:;
    /* $A127: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A12A:;
    /* $A12A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0104); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A12E:;
    /* $A12E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A12F:;
    /* $A12F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A131:;
    /* $A131: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86C7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A134:;
    /* $A134: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A137:;
    /* $A137: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A138:;
    /* $A138: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A139:;
    /* $A139: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A13B:;
    /* $A13B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A131;
    }
label_A13D:;
    /* $A13D: 86 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.X);
label_A13F:;
    /* $A13F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0104; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A142:;
    /* $A142: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A147:;
    /* $A147: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14E; }
label_A149:;
    /* $A149: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A14E:;
    /* $A14E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A150:; /* needle_man_headbutt */
    /* $A150: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A152:;
    /* $A152: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0154); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA152, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A155:;
    /* $A155: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A158:;
    /* $A158: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A15A:;
    /* $A15A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A15C:;
    /* $A15C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A190; }
label_A161:;
    /* $A161: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A167:;
    /* $A167: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A16B:;
    /* $A16B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x016D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA16B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A16E:;
    /* $A16E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A170:;
    /* $A170: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A17B; }
label_A172:;
    /* $A172: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0500); FLAG_NZ(g_cpu.X);
label_A175:;
    /* $A175: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0177); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA006, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA175, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A178:;
    /* $A178: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x81AD, 5); return;
label_A17B:;
    /* $A17B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x017D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA003, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA17B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A17E:;
    /* $A17E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A180:;
    /* $A180: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A182:;
    /* $A182: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A184:;
    /* $A184: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A187:;
    /* $A187: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A18B:;
    /* $A18B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A190:;
    /* $A190: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A193:;
    /* $A193: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A195:;
    /* $A195: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_A198:;
    /* $A198: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A19A:;
    /* $A19A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1B0; }
label_A19C:;
    /* $A19C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_A19E:; /* needle_man_throw_vel_y_sub */
    /* $A19E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A1A0:; /* needle_man_throw_vel_y */
    /* $A1A0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01A2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1A0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1A3:;
    /* $A1A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A1A7:;
    /* $A1A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01A9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA000, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1AA:;
    /* $A1AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1AD:;
    /* $A1AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x80CB, 5); return;
label_A1B0:;
    /* $A1B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1B2:;
    /* $A1B2: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A1B4:;
    /* $A1B4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01B6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1B4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1B7:;
    /* $A1B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A1BB:;
    /* $A1BB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01BD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1BB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1BE:;
    /* $A1BE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01C0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1BE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1C1:;
    /* $A1C1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01C3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1C4:;
    /* $A1C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1C6:;
    /* $A1C6: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_A1C8:; /* needle_man_jump_vel_x_sub */
    /* $A1C8: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A1CA:;
    /* $A1CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_A1CC:;
    /* $A1CC: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A1CE:;
    /* $A1CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01D0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1D1:;
    /* $A1D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A1D3:;
    /* $A1D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01D5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1D6:;
    /* $A1D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1D8:; /* needle_man_jump_states */
    /* $A1D8: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A1DA:;
    /* $A1DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1DD:;
    /* $A1DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1E0:; /* spawn_needle */
    /* $A1E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A1E2:; /* main_proto_man_gemini_cutscene */
    /* $A1E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D6;
    }
label_A1E4:;
    /* $A1E4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A1E6:;
    /* $A1E6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8675 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1E9:;
    /* $A1E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1EC:;
    /* $A1EC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1ED:;
    /* $A1ED: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1E6;
    }
label_A1EF:;
    /* $A1EF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A1F1:;
    /* $A1F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1F7:;
    /* $A1F7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1F8:;
    /* $A1F8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1F1;
    }
label_A1FA:;
    /* $A1FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01FC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1FD:;
    /* $A1FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A1FF:;
    /* $A1FF: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A202:;
    /* $A202: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A204:;
    /* $A204: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A207:;
    /* $A207: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A209:;
    /* $A209: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_A20C:;
    /* $A20C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A20E:;
    /* $A20E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A216:;
    /* $A216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A218:;
    /* $A218: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A21B:;
    /* $A21B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A21E:;
    /* $A21E: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_A221:;
    /* $A221: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A224:;
    /* $A224: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A227:;
    /* $A227: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A22A:;
    /* $A22A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A22D:;
    /* $A22D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A22F:;
    /* $A22F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A232:;
    /* $A232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A234:;
    /* $A234: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A237:;
    /* $A237: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0239); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A23A:;
    /* $A23A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x023C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA23A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A23D:;
    /* $A23D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A291; }
label_A242:;
    /* $A242: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0244); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8603, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA242, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A245:;
    /* $A245: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A247:;
    /* $A247: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A249:;
    /* $A249: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A269; }
label_A24B:;
    /* $A24B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A24F:;
    /* $A24F: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0104); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A252:;
    /* $A252: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A253:;
    /* $A253: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A255:;
    /* $A255: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A25B:;
    /* $A25B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A25C:;
    /* $A25C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A25D:;
    /* $A25D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A25F:;
    /* $A25F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A255;
    }
label_A261:;
    /* $A261: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A264:;
    /* $A264: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A266:;
    /* $A266: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A269:;
    /* $A269: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A26B:;
    /* $A26B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A26D:;
    /* $A26D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A27E; }
label_A26F:;
    /* $A26F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0105); FLAG_NZ(g_cpu.A);
label_A272:;
    /* $A272: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0105; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A275:;
    /* $A275: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A277:;
    /* $A277: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A278:;
    /* $A278: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86DF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A27B:;
    /* $A27B: 8D */ maybe_trigger_vblank(4); nes_write(0x060D, g_cpu.A);
label_A27E:;
    /* $A27E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A280:;
    /* $A280: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A289; }
label_A284:;
    /* $A284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A286:;
    /* $A286: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0288); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA286, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A289:;
    /* $A289: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A28B:;
    /* $A28B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x028D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA28B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A28E:;
    /* $A28E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x823D, 5); return;
label_A291:;
    /* $A291: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A293:;
    /* $A293: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A295:;
    /* $A295: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0297); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA295, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A298:;
    /* $A298: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A29A:;
    /* $A29A: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A29D:;
    /* $A29D: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A2A0:;
    /* $A2A0: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A2A3:;
    /* $A2A3: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A2A6:;
    /* $A2A6: 8D */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.A);
label_A2A9:;
    /* $A2A9: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_A2AC:;
    /* $A2AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_A2AF:;
    /* $A2AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A2B2:;
    /* $A2B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A2B4:;
    /* $A2B4: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A2B7:;
    /* $A2B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A2B9:;
    /* $A2B9: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A2BC:;
    /* $A2BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A2C1:;
    /* $A2C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C3:;
    /* $A2C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A2C6:;
    /* $A2C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C8:;
    /* $A2C8: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A2CB:;
    /* $A2CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_A2CD:;
    /* $A2CD: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A2D0:;
    /* $A2D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A2D4:;
    /* $A2D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2D7:;
    /* $A2D7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2DD:;
    /* $A2DD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A2DE:;
    /* $A2DE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2D2;
    }
label_A2E0:;
    /* $A2E0: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_A2E2:;
    /* $A2E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A2E5:;
    /* $A2E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2EA; }
label_A2E7:;
    /* $A2E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8439, 5); return;
label_A2EA:;
    /* $A2EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A2ED:;
    /* $A2ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A2EF:;
    /* $A2EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F4; }
label_A2F1:;
    /* $A2F1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83A8, 5); return;
label_A2F4:;
    /* $A2F4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A2F7:;
    /* $A2F7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A2F9:;
    /* $A2F9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A301; }
label_A2FB:;
    /* $A2FB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2FE:;
    /* $A2FE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83E7, 5); return;
label_A301:;
    /* $A301: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A303:;
    /* $A303: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A306:;
    /* $A306: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A344; }
label_A308:;
    /* $A308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_A30A:;
    /* $A30A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A30C:;
    /* $A30C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x030E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA30C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A30F:;
    /* $A30F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_A315:;
    /* $A315: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_A318:;
    /* $A318: 8D */ maybe_trigger_vblank(4); nes_write(0x0581, g_cpu.A);
label_A31B:;
    /* $A31B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A31E:;
    /* $A31E: 8D */ maybe_trigger_vblank(4); nes_write(0x0381, g_cpu.A);
label_A321:;
    /* $A321: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A324:;
    /* $A324: 8D */ maybe_trigger_vblank(4); nes_write(0x03E1, g_cpu.A);
label_A327:;
    /* $A327: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A32A:;
    /* $A32A: 8D */ maybe_trigger_vblank(4); nes_write(0x0361, g_cpu.A);
label_A32D:;
    /* $A32D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A330:;
    /* $A330: 8D */ maybe_trigger_vblank(4); nes_write(0x03C1, g_cpu.A);
label_A333:;
    /* $A333: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A337:;
    /* $A337: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0339); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A33A:;
    /* $A33A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A33C:;
    /* $A33C: 8D */ maybe_trigger_vblank(4); nes_write(0x0501, g_cpu.A);
label_A33F:;
    /* $A33F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_A341:;
    /* $A341: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A344:;
    /* $A344: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0501); FLAG_NZ(g_cpu.A);
label_A347:;
    /* $A347: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x21; g_cpu.C=(g_cpu.A>=0x21)?1:0; FLAG_NZ(r&0xFF); }
label_A349:;
    /* $A349: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A352; }
label_A34B:;
    /* $A34B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A34D:;
    /* $A34D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A35C; }
label_A34F:;
    /* $A34F: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A352:;
    /* $A352: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A354:;
    /* $A354: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A356:;
    /* $A356: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A359:;
    /* $A359: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A35C:;
    /* $A35C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A375; }
label_A361:;
    /* $A361: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0521; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A364:;
    /* $A364: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_A369:;
    /* $A369: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A372; }
label_A36B:;
    /* $A36B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A36D:;
    /* $A36D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A36F:;
    /* $A36F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0371); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA36F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A372:;
    /* $A372: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A375:;
    /* $A375: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A379:;
    /* $A379: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37C:;
    /* $A37C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37F:;
    /* $A37F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3EA; }
label_A381:;
    /* $A381: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A383:;
    /* $A383: 8E */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.X);
label_A386:;
    /* $A386: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A388:;
    /* $A388: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x038A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA388, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A38B:;
    /* $A38B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A38E:;
    /* $A38E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A390:;
    /* $A390: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A393:;
    /* $A393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A395:;
    /* $A395: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A398:;
    /* $A398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A39D:;
    /* $A39D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A3A0:;
    /* $A3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A3A2:;
    /* $A3A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A3A5:;
    /* $A3A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A3EA:;
    /* $A3EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0540); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0460); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3F1:;
    /* $A3F1: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A3F4:;
    /* $A3F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A3F6:;
    /* $A3F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8735 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F9:;
    /* $A3F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3FC:;
    /* $A3FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8736 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FF:;
    /* $A3FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A402:;
    /* $A402: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8737 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A405:;
    /* $A405: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A408:;
    /* $A408: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A40B:;
    /* $A40B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A40C:;
    /* $A40C: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0540); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A40F:;
    /* $A40F: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A412:;
    /* $A412: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A413:;
    /* $A413: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A414:;
    /* $A414: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A415:;
    /* $A415: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A416:;
    /* $A416: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A418:;
    /* $A418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3F6;
    }
label_A41A:;
    /* $A41A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A41C:;
    /* $A41C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A41E:;
    /* $A41E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A422; }
label_A420:;
    /* $A420: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A422:;
    /* $A422: 86 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.X);
label_A424:;
    /* $A424: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0560); FLAG_NZ(g_cpu.A);
label_A427:;
    /* $A427: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A429:;
    /* $A429: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A430; }
label_A42B:;
    /* $A42B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A42D:;
    /* $A42D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x042F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA42D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A430:;
    /* $A430: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0432); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA430, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A433:;
    /* $A433: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0560; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A436:;
    /* $A436: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82E2, 5); return;
}

void func_A022_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A022_b5");
#endif
label_A022:;
    /* $A022: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A024:;
    /* $A024: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A025:;
    /* $A025: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_A027:; /* main_wily_machine_C */
    /* $A027: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_A029:;
    /* $A029: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_A02B:;
    /* $A02B: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_A02D:;
    /* $A02D: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x16; FLAG_NZ(g_cpu.A);
label_A031:;
    /* $A031: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_A033:;
    /* $A033: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0037); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA035, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A038:;
    /* $A038: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A03A:;
    /* $A03A: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A03C:;
    /* $A03C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x003E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA03C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A03F:; /* main_holograph */
    /* $A03F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0041); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A042:;
    /* $A042: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A044:;
    /* $A044: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A038;
    }
label_A046:;
    /* $A046: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A048:;
    /* $A048: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8655 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A04B:;
    /* $A04B: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A04E:;
    /* $A04E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A04F:;
    /* $A04F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A048;
    }
label_A051:;
    /* $A051: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A053:;
    /* $A053: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86B5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A056:;
    /* $A056: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A059:;
    /* $A059: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A05A:;
    /* $A05A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A053;
    }
label_A05C:;
    /* $A05C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x005E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA05C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A05F:;
    /* $A05F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A061:;
    /* $A061: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A063:;
    /* $A063: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A066:;
    /* $A066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A068:; /* needle_man_throw */
    /* $A068: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A06B:;
    /* $A06B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06E:;
    /* $A06E: 99 */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A071:;
    /* $A071: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A074:;
    /* $A074: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A077:;
    /* $A077: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07A:;
    /* $A07A: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A07D:;
    /* $A07D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A082:;
    /* $A082: 99 */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A085:;
    /* $A085: 99 */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A088:;
    /* $A088: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A08B:;
    /* $A08B: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A08E:;
    /* $A08E: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A091:;
    /* $A091: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A094:;
    /* $A094: 8D */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.A);
label_A097:;
    /* $A097: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A099:;
    /* $A099: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A09C:;
    /* $A09C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A09E:;
    /* $A09E: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0A1:;
    /* $A0A1: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0A2:;
    /* $A0A2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A061;
    }
label_A0A4:;
    /* $A0A4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_A0A6:;
    /* $A0A6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86E9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0A9:;
    /* $A0A9: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0AC:;
    /* $A0AC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0AD:;
    /* $A0AD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0A6;
    }
label_A0AF:;
    /* $A0AF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_A0B1:;
    /* $A0B1: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A0B3:;
    /* $A0B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A0B5:;
    /* $A0B5: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_A0B7:;
    /* $A0B7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00B9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A0BA:;
    /* $A0BA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00BC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0BA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0BD:;
    /* $A0BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A0BF:;
    /* $A0BF: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A0C2:;
    /* $A0C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0C4:;
    /* $A0C4: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A0C7:;
    /* $A0C7: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A0C9:;
    /* $A0C9: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_A0CB:;
    /* $A0CB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A0CD:;
    /* $A0CD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A0D0:;
    /* $A0D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A0D2:;
    /* $A0D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A0F9; }
label_A0D4:;
    /* $A0D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A0D6:;
    /* $A0D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A11A; }
label_A0D8:;
    /* $A0D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00DA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F797(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0DB:;
    /* $A0DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA4; FLAG_NZ(g_cpu.A);
label_A0DD:;
    /* $A0DD: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0E0:;
    /* $A0E0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A0F1; }
label_A0E2:;
    /* $A0E2: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A0E5:;
    /* $A0E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A0E7:;
    /* $A0E7: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05A0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A0EA:;
    /* $A0EA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A11A; }
label_A0EC:;
    /* $A0EC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A0EE:;
    /* $A0EE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00F0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0EE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0F1:;
    /* $A0F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0F3:;
    /* $A0F3: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A0F6:;
    /* $A0F6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x811A, 5); return;
label_A0F9:;
    /* $A0F9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A0FC:;
    /* $A0FC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A0FE:;
    /* $A0FE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A11A; }
label_A100:; /* buster_damage_table */
    /* $A100: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_A103:;
    /* $A103: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A104:;
    /* $A104: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x80; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A106:;
    /* $A106: 8D */ maybe_trigger_vblank(4); nes_write(0x0340, g_cpu.A);
label_A109:;
    /* $A109: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A10C:;
    /* $A10C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A10E:;
    /* $A10E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A111:;
    /* $A111: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x98; g_cpu.C=(g_cpu.A>=0x98)?1:0; FLAG_NZ(r&0xFF); }
label_A113:;
    /* $A113: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A11A; }
label_A115:;
    /* $A115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A117:;
    /* $A117: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0119); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA117, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A11A:;
    /* $A11A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A11C:;
    /* $A11C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A121; }
label_A11E:;
    /* $A11E: 8D */ maybe_trigger_vblank(4); nes_write(0x05E1, g_cpu.A);
label_A121:;
    /* $A121: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A123:;
    /* $A123: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A125:;
    /* $A125: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14E; }
label_A127:;
    /* $A127: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A12A:;
    /* $A12A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A12B:;
    /* $A12B: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0104); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A12E:;
    /* $A12E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A12F:;
    /* $A12F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A131:;
    /* $A131: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86C7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A134:;
    /* $A134: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A137:;
    /* $A137: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A138:;
    /* $A138: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A139:;
    /* $A139: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A13B:;
    /* $A13B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A131;
    }
label_A13D:;
    /* $A13D: 86 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.X);
label_A13F:;
    /* $A13F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0104; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A142:;
    /* $A142: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A147:;
    /* $A147: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14E; }
label_A149:;
    /* $A149: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A14E:;
    /* $A14E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A150:; /* needle_man_headbutt */
    /* $A150: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A152:;
    /* $A152: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0154); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA152, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A155:;
    /* $A155: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A158:;
    /* $A158: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A15A:;
    /* $A15A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A15C:;
    /* $A15C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A190; }
label_A161:;
    /* $A161: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A167:;
    /* $A167: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A16B:;
    /* $A16B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x016D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA16B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A16E:;
    /* $A16E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A170:;
    /* $A170: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A17B; }
label_A172:;
    /* $A172: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0500); FLAG_NZ(g_cpu.X);
label_A175:;
    /* $A175: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0177); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA006, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA175, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A178:;
    /* $A178: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x81AD, 5); return;
label_A17B:;
    /* $A17B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x017D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA003, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA17B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A17E:;
    /* $A17E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A180:;
    /* $A180: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A182:;
    /* $A182: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A184:;
    /* $A184: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A187:;
    /* $A187: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A18B:;
    /* $A18B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A190:;
    /* $A190: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A193:;
    /* $A193: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A195:;
    /* $A195: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_A198:;
    /* $A198: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A19A:;
    /* $A19A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1B0; }
label_A19C:;
    /* $A19C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_A19E:; /* needle_man_throw_vel_y_sub */
    /* $A19E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A1A0:; /* needle_man_throw_vel_y */
    /* $A1A0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01A2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1A0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1A3:;
    /* $A1A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A1A7:;
    /* $A1A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01A9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA000, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1AA:;
    /* $A1AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1AD:;
    /* $A1AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x80CB, 5); return;
label_A1B0:;
    /* $A1B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1B2:;
    /* $A1B2: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A1B4:;
    /* $A1B4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01B6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1B4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1B7:;
    /* $A1B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A1BB:;
    /* $A1BB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01BD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1BB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1BE:;
    /* $A1BE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01C0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1BE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1C1:;
    /* $A1C1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01C3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1C4:;
    /* $A1C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1C6:;
    /* $A1C6: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_A1C8:; /* needle_man_jump_vel_x_sub */
    /* $A1C8: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A1CA:;
    /* $A1CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_A1CC:;
    /* $A1CC: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A1CE:;
    /* $A1CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01D0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1D1:;
    /* $A1D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A1D3:;
    /* $A1D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01D5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1D6:;
    /* $A1D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1D8:; /* needle_man_jump_states */
    /* $A1D8: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A1DA:;
    /* $A1DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1DD:;
    /* $A1DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1E0:; /* spawn_needle */
    /* $A1E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A1E2:; /* main_proto_man_gemini_cutscene */
    /* $A1E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D6;
    }
label_A1E4:;
    /* $A1E4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A1E6:;
    /* $A1E6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8675 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1E9:;
    /* $A1E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1EC:;
    /* $A1EC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1ED:;
    /* $A1ED: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1E6;
    }
label_A1EF:;
    /* $A1EF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A1F1:;
    /* $A1F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1F7:;
    /* $A1F7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1F8:;
    /* $A1F8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1F1;
    }
label_A1FA:;
    /* $A1FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01FC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1FD:;
    /* $A1FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A1FF:;
    /* $A1FF: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A202:;
    /* $A202: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A204:;
    /* $A204: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A207:;
    /* $A207: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A209:;
    /* $A209: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_A20C:;
    /* $A20C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A20E:;
    /* $A20E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A216:;
    /* $A216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A218:;
    /* $A218: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A21B:;
    /* $A21B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A21E:;
    /* $A21E: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_A221:;
    /* $A221: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A224:;
    /* $A224: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A227:;
    /* $A227: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A22A:;
    /* $A22A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A22D:;
    /* $A22D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A22F:;
    /* $A22F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A232:;
    /* $A232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A234:;
    /* $A234: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A237:;
    /* $A237: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0239); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A23A:;
    /* $A23A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x023C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA23A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A23D:;
    /* $A23D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A291; }
label_A242:;
    /* $A242: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0244); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8603, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA242, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A245:;
    /* $A245: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A247:;
    /* $A247: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A249:;
    /* $A249: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A269; }
label_A24B:;
    /* $A24B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A24F:;
    /* $A24F: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0104); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A252:;
    /* $A252: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A253:;
    /* $A253: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A255:;
    /* $A255: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A25B:;
    /* $A25B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A25C:;
    /* $A25C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A25D:;
    /* $A25D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A25F:;
    /* $A25F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A255;
    }
label_A261:;
    /* $A261: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A264:;
    /* $A264: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A266:;
    /* $A266: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A269:;
    /* $A269: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A26B:;
    /* $A26B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A26D:;
    /* $A26D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A27E; }
label_A26F:;
    /* $A26F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0105); FLAG_NZ(g_cpu.A);
label_A272:;
    /* $A272: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0105; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A275:;
    /* $A275: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A277:;
    /* $A277: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A278:;
    /* $A278: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86DF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A27B:;
    /* $A27B: 8D */ maybe_trigger_vblank(4); nes_write(0x060D, g_cpu.A);
label_A27E:;
    /* $A27E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A280:;
    /* $A280: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A289; }
label_A284:;
    /* $A284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A286:;
    /* $A286: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0288); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA286, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A289:;
    /* $A289: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A28B:;
    /* $A28B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x028D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA28B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A28E:;
    /* $A28E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x823D, 5); return;
label_A291:;
    /* $A291: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A293:;
    /* $A293: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A295:;
    /* $A295: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0297); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA295, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A298:;
    /* $A298: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A29A:;
    /* $A29A: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A29D:;
    /* $A29D: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A2A0:;
    /* $A2A0: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A2A3:;
    /* $A2A3: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A2A6:;
    /* $A2A6: 8D */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.A);
label_A2A9:;
    /* $A2A9: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_A2AC:;
    /* $A2AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_A2AF:;
    /* $A2AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A2B2:;
    /* $A2B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A2B4:;
    /* $A2B4: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A2B7:;
    /* $A2B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A2B9:;
    /* $A2B9: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A2BC:;
    /* $A2BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A2C1:;
    /* $A2C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C3:;
    /* $A2C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A2C6:;
    /* $A2C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C8:;
    /* $A2C8: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A2CB:;
    /* $A2CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_A2CD:;
    /* $A2CD: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A2D0:;
    /* $A2D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A2D4:;
    /* $A2D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2D7:;
    /* $A2D7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2DD:;
    /* $A2DD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A2DE:;
    /* $A2DE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2D2;
    }
label_A2E0:;
    /* $A2E0: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_A2E2:;
    /* $A2E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A2E5:;
    /* $A2E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2EA; }
label_A2E7:;
    /* $A2E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8439, 5); return;
label_A2EA:;
    /* $A2EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A2ED:;
    /* $A2ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A2EF:;
    /* $A2EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F4; }
label_A2F1:;
    /* $A2F1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83A8, 5); return;
label_A2F4:;
    /* $A2F4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A2F7:;
    /* $A2F7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A2F9:;
    /* $A2F9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A301; }
label_A2FB:;
    /* $A2FB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2FE:;
    /* $A2FE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83E7, 5); return;
label_A301:;
    /* $A301: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A303:;
    /* $A303: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A306:;
    /* $A306: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A344; }
label_A308:;
    /* $A308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_A30A:;
    /* $A30A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A30C:;
    /* $A30C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x030E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA30C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A30F:;
    /* $A30F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_A315:;
    /* $A315: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_A318:;
    /* $A318: 8D */ maybe_trigger_vblank(4); nes_write(0x0581, g_cpu.A);
label_A31B:;
    /* $A31B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A31E:;
    /* $A31E: 8D */ maybe_trigger_vblank(4); nes_write(0x0381, g_cpu.A);
label_A321:;
    /* $A321: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A324:;
    /* $A324: 8D */ maybe_trigger_vblank(4); nes_write(0x03E1, g_cpu.A);
label_A327:;
    /* $A327: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A32A:;
    /* $A32A: 8D */ maybe_trigger_vblank(4); nes_write(0x0361, g_cpu.A);
label_A32D:;
    /* $A32D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A330:;
    /* $A330: 8D */ maybe_trigger_vblank(4); nes_write(0x03C1, g_cpu.A);
label_A333:;
    /* $A333: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A337:;
    /* $A337: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0339); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A33A:;
    /* $A33A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A33C:;
    /* $A33C: 8D */ maybe_trigger_vblank(4); nes_write(0x0501, g_cpu.A);
label_A33F:;
    /* $A33F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_A341:;
    /* $A341: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A344:;
    /* $A344: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0501); FLAG_NZ(g_cpu.A);
label_A347:;
    /* $A347: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x21; g_cpu.C=(g_cpu.A>=0x21)?1:0; FLAG_NZ(r&0xFF); }
label_A349:;
    /* $A349: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A352; }
label_A34B:;
    /* $A34B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A34D:;
    /* $A34D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A35C; }
label_A34F:;
    /* $A34F: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A352:;
    /* $A352: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A354:;
    /* $A354: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A356:;
    /* $A356: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A359:;
    /* $A359: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A35C:;
    /* $A35C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A375; }
label_A361:;
    /* $A361: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0521; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A364:;
    /* $A364: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_A369:;
    /* $A369: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A372; }
label_A36B:;
    /* $A36B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A36D:;
    /* $A36D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A36F:;
    /* $A36F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0371); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA36F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A372:;
    /* $A372: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A375:;
    /* $A375: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A379:;
    /* $A379: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37C:;
    /* $A37C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37F:;
    /* $A37F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3EA; }
label_A381:;
    /* $A381: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A383:;
    /* $A383: 8E */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.X);
label_A386:;
    /* $A386: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A388:;
    /* $A388: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x038A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA388, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A38B:;
    /* $A38B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A38E:;
    /* $A38E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A390:;
    /* $A390: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A393:;
    /* $A393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A395:;
    /* $A395: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A398:;
    /* $A398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A39D:;
    /* $A39D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A3A0:;
    /* $A3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A3A2:;
    /* $A3A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A3A5:;
    /* $A3A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A3EA:;
    /* $A3EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0540); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0460); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3F1:;
    /* $A3F1: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A3F4:;
    /* $A3F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A3F6:;
    /* $A3F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8735 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F9:;
    /* $A3F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3FC:;
    /* $A3FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8736 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FF:;
    /* $A3FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A402:;
    /* $A402: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8737 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A405:;
    /* $A405: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A408:;
    /* $A408: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A40B:;
    /* $A40B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A40C:;
    /* $A40C: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0540); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A40F:;
    /* $A40F: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A412:;
    /* $A412: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A413:;
    /* $A413: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A414:;
    /* $A414: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A415:;
    /* $A415: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A416:;
    /* $A416: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A418:;
    /* $A418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3F6;
    }
label_A41A:;
    /* $A41A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A41C:;
    /* $A41C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A41E:;
    /* $A41E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A422; }
label_A420:;
    /* $A420: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A422:;
    /* $A422: 86 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.X);
label_A424:;
    /* $A424: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0560); FLAG_NZ(g_cpu.A);
label_A427:;
    /* $A427: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A429:;
    /* $A429: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A430; }
label_A42B:;
    /* $A42B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A42D:;
    /* $A42D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x042F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA42D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A430:;
    /* $A430: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0432); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA430, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A433:;
    /* $A433: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0560; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A436:;
    /* $A436: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82E2, 5); return;
}

void func_A12C_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A1B4;
    }
label_A12C:;
    /* $A12C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A12E:;
    /* $A12E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A12F:;
    /* $A12F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A131:;
    /* $A131: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86C7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A134:;
    /* $A134: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A137:;
    /* $A137: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A138:;
    /* $A138: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A139:;
    /* $A139: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A13B:;
    /* $A13B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A131;
    }
label_A13D:;
    /* $A13D: 86 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.X);
label_A13F:;
    /* $A13F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0104; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A142:;
    /* $A142: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A145:;
    /* $A145: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A147:;
    /* $A147: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A14E; }
label_A149:;
    /* $A149: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A14B:;
    /* $A14B: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A14E:;
    /* $A14E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A150:; /* needle_man_headbutt */
    /* $A150: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A152:;
    /* $A152: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0154); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA152, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A155:;
    /* $A155: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_A158:;
    /* $A158: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A15A:;
    /* $A15A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A15C:;
    /* $A15C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A190; }
label_A161:;
    /* $A161: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A165:;
    /* $A165: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A167:;
    /* $A167: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_A169:;
    /* $A169: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A16B:;
    /* $A16B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x016D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA16B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A16E:;
    /* $A16E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A170:;
    /* $A170: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A17B; }
label_A172:;
    /* $A172: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0500); FLAG_NZ(g_cpu.X);
label_A175:;
    /* $A175: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0177); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA006, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA175, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A178:;
    /* $A178: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x81AD, 5); return;
label_A17B:;
    /* $A17B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x017D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA003, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA17B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A17E:;
    /* $A17E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB8); FLAG_NZ(g_cpu.A);
label_A180:;
    /* $A180: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A182:;
    /* $A182: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A184:;
    /* $A184: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A187:;
    /* $A187: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A189:;
    /* $A189: 85 */ maybe_trigger_vblank(3); nes_write(0xB8, g_cpu.A);
label_A18B:;
    /* $A18B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_A18D:;
    /* $A18D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A190:;
    /* $A190: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A193:;
    /* $A193: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AD; }
label_A195:;
    /* $A195: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_A198:;
    /* $A198: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A19A:;
    /* $A19A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1B0; }
label_A19C:;
    /* $A19C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_A19E:; /* needle_man_throw_vel_y_sub */
    /* $A19E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A1A0:; /* needle_man_throw_vel_y */
    /* $A1A0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01A2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1A0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1A3:;
    /* $A1A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1A5:;
    /* $A1A5: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A1A7:;
    /* $A1A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01A9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA000, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1AA:;
    /* $A1AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1AD:;
    /* $A1AD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x80CB, 5); return;
label_A1B0:;
    /* $A1B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1B2:;
    /* $A1B2: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A1B4:;
    /* $A1B4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01B6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1B4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1B7:;
    /* $A1B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A1B9:;
    /* $A1B9: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_A1BB:;
    /* $A1BB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01BD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1BB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1BE:;
    /* $A1BE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01C0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1BE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1C1:;
    /* $A1C1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01C3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1C4:;
    /* $A1C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1C6:;
    /* $A1C6: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_A1C8:; /* needle_man_jump_vel_x_sub */
    /* $A1C8: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A1CA:;
    /* $A1CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_A1CC:;
    /* $A1CC: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A1CE:;
    /* $A1CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01D0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1D1:;
    /* $A1D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A1D3:;
    /* $A1D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01D5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1D6:;
    /* $A1D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1D8:; /* needle_man_jump_states */
    /* $A1D8: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A1DA:;
    /* $A1DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1DD:;
    /* $A1DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1E0:; /* spawn_needle */
    /* $A1E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A1E2:; /* main_proto_man_gemini_cutscene */
    /* $A1E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D6;
    }
label_A1E4:;
    /* $A1E4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A1E6:;
    /* $A1E6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8675 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1E9:;
    /* $A1E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1EC:;
    /* $A1EC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1ED:;
    /* $A1ED: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1E6;
    }
label_A1EF:;
    /* $A1EF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A1F1:;
    /* $A1F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1F7:;
    /* $A1F7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1F8:;
    /* $A1F8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1F1;
    }
label_A1FA:;
    /* $A1FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01FC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1FD:;
    /* $A1FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A1FF:;
    /* $A1FF: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A202:;
    /* $A202: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A204:;
    /* $A204: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A207:;
    /* $A207: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A209:;
    /* $A209: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_A20C:;
    /* $A20C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A20E:;
    /* $A20E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A216:;
    /* $A216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A218:;
    /* $A218: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A21B:;
    /* $A21B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A21E:;
    /* $A21E: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_A221:;
    /* $A221: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A224:;
    /* $A224: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A227:;
    /* $A227: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A22A:;
    /* $A22A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A22D:;
    /* $A22D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A22F:;
    /* $A22F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A232:;
    /* $A232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A234:;
    /* $A234: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A237:;
    /* $A237: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0239); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A23A:;
    /* $A23A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x023C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA23A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A23D:;
    /* $A23D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A291; }
label_A242:;
    /* $A242: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0244); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8603, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA242, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A245:;
    /* $A245: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A247:;
    /* $A247: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A249:;
    /* $A249: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A269; }
label_A24B:;
    /* $A24B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A24F:;
    /* $A24F: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0104); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A252:;
    /* $A252: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A253:;
    /* $A253: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A255:;
    /* $A255: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A25B:;
    /* $A25B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A25C:;
    /* $A25C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A25D:;
    /* $A25D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A25F:;
    /* $A25F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A255;
    }
label_A261:;
    /* $A261: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A264:;
    /* $A264: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A266:;
    /* $A266: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A269:;
    /* $A269: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A26B:;
    /* $A26B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A26D:;
    /* $A26D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A27E; }
label_A26F:;
    /* $A26F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0105); FLAG_NZ(g_cpu.A);
label_A272:;
    /* $A272: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0105; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A275:;
    /* $A275: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A277:;
    /* $A277: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A278:;
    /* $A278: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86DF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A27B:;
    /* $A27B: 8D */ maybe_trigger_vblank(4); nes_write(0x060D, g_cpu.A);
label_A27E:;
    /* $A27E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A280:;
    /* $A280: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A289; }
label_A284:;
    /* $A284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A286:;
    /* $A286: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0288); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA286, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A289:;
    /* $A289: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A28B:;
    /* $A28B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x028D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA28B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A28E:;
    /* $A28E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x823D, 5); return;
label_A291:;
    /* $A291: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A293:;
    /* $A293: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A295:;
    /* $A295: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0297); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA295, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A298:;
    /* $A298: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A29A:;
    /* $A29A: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A29D:;
    /* $A29D: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A2A0:;
    /* $A2A0: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A2A3:;
    /* $A2A3: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A2A6:;
    /* $A2A6: 8D */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.A);
label_A2A9:;
    /* $A2A9: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_A2AC:;
    /* $A2AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_A2AF:;
    /* $A2AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A2B2:;
    /* $A2B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A2B4:;
    /* $A2B4: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A2B7:;
    /* $A2B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A2B9:;
    /* $A2B9: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A2BC:;
    /* $A2BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A2C1:;
    /* $A2C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C3:;
    /* $A2C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A2C6:;
    /* $A2C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C8:;
    /* $A2C8: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A2CB:;
    /* $A2CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_A2CD:;
    /* $A2CD: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A2D0:;
    /* $A2D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A2D4:;
    /* $A2D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2D7:;
    /* $A2D7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2DD:;
    /* $A2DD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A2DE:;
    /* $A2DE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2D2;
    }
label_A2E0:;
    /* $A2E0: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_A2E2:;
    /* $A2E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A2E5:;
    /* $A2E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2EA; }
label_A2E7:;
    /* $A2E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8439, 5); return;
label_A2EA:;
    /* $A2EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A2ED:;
    /* $A2ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A2EF:;
    /* $A2EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F4; }
label_A2F1:;
    /* $A2F1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83A8, 5); return;
label_A2F4:;
    /* $A2F4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A2F7:;
    /* $A2F7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A2F9:;
    /* $A2F9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A301; }
label_A2FB:;
    /* $A2FB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2FE:;
    /* $A2FE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83E7, 5); return;
label_A301:;
    /* $A301: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A303:;
    /* $A303: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A306:;
    /* $A306: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A344; }
label_A308:;
    /* $A308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_A30A:;
    /* $A30A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A30C:;
    /* $A30C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x030E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA30C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A30F:;
    /* $A30F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_A315:;
    /* $A315: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_A318:;
    /* $A318: 8D */ maybe_trigger_vblank(4); nes_write(0x0581, g_cpu.A);
label_A31B:;
    /* $A31B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A31E:;
    /* $A31E: 8D */ maybe_trigger_vblank(4); nes_write(0x0381, g_cpu.A);
label_A321:;
    /* $A321: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A324:;
    /* $A324: 8D */ maybe_trigger_vblank(4); nes_write(0x03E1, g_cpu.A);
label_A327:;
    /* $A327: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A32A:;
    /* $A32A: 8D */ maybe_trigger_vblank(4); nes_write(0x0361, g_cpu.A);
label_A32D:;
    /* $A32D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A330:;
    /* $A330: 8D */ maybe_trigger_vblank(4); nes_write(0x03C1, g_cpu.A);
label_A333:;
    /* $A333: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A337:;
    /* $A337: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0339); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A33A:;
    /* $A33A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A33C:;
    /* $A33C: 8D */ maybe_trigger_vblank(4); nes_write(0x0501, g_cpu.A);
label_A33F:;
    /* $A33F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_A341:;
    /* $A341: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A344:;
    /* $A344: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0501); FLAG_NZ(g_cpu.A);
label_A347:;
    /* $A347: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x21; g_cpu.C=(g_cpu.A>=0x21)?1:0; FLAG_NZ(r&0xFF); }
label_A349:;
    /* $A349: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A352; }
label_A34B:;
    /* $A34B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A34D:;
    /* $A34D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A35C; }
label_A34F:;
    /* $A34F: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A352:;
    /* $A352: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A354:;
    /* $A354: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A356:;
    /* $A356: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A359:;
    /* $A359: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A35C:;
    /* $A35C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A375; }
label_A361:;
    /* $A361: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0521; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A364:;
    /* $A364: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_A369:;
    /* $A369: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A372; }
label_A36B:;
    /* $A36B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A36D:;
    /* $A36D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A36F:;
    /* $A36F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0371); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA36F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A372:;
    /* $A372: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A375:;
    /* $A375: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A379:;
    /* $A379: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37C:;
    /* $A37C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37F:;
    /* $A37F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3EA; }
label_A381:;
    /* $A381: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A383:;
    /* $A383: 8E */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.X);
label_A386:;
    /* $A386: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A388:;
    /* $A388: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x038A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA388, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A38B:;
    /* $A38B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A38E:;
    /* $A38E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A390:;
    /* $A390: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A393:;
    /* $A393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A395:;
    /* $A395: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A398:;
    /* $A398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A39D:;
    /* $A39D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A3A0:;
    /* $A3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A3A2:;
    /* $A3A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A3A5:;
    /* $A3A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A3EA:;
    /* $A3EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0540); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0460); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3F1:;
    /* $A3F1: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A3F4:;
    /* $A3F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A3F6:;
    /* $A3F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8735 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F9:;
    /* $A3F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3FC:;
    /* $A3FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8736 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FF:;
    /* $A3FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A402:;
    /* $A402: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8737 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A405:;
    /* $A405: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A408:;
    /* $A408: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A40B:;
    /* $A40B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A40C:;
    /* $A40C: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0540); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A40F:;
    /* $A40F: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A412:;
    /* $A412: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A413:;
    /* $A413: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A414:;
    /* $A414: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A415:;
    /* $A415: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A416:;
    /* $A416: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A418:;
    /* $A418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3F6;
    }
label_A41A:;
    /* $A41A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A41C:;
    /* $A41C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A41E:;
    /* $A41E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A422; }
label_A420:;
    /* $A420: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A422:;
    /* $A422: 86 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.X);
label_A424:;
    /* $A424: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0560); FLAG_NZ(g_cpu.A);
label_A427:;
    /* $A427: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A429:;
    /* $A429: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A430; }
label_A42B:;
    /* $A42B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A42D:;
    /* $A42D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x042F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA42D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A430:;
    /* $A430: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0432); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA430, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A433:;
    /* $A433: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0560; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A436:;
    /* $A436: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82E2, 5); return;
}

void func_A12C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A12C_b5");
#endif
    func_A12C_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1B4_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1B4_b5");
#endif
    func_A12C_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1CF_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1CF_b5");
#endif
label_A1CF:;
    /* $A1CF: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0xFF; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A1D1:;
    /* $A1D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A1D3:;
    /* $A1D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01D5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1D3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1D6:;
    /* $A1D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1D8:; /* needle_man_jump_states */
    /* $A1D8: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A1DA:;
    /* $A1DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1DD:;
    /* $A1DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1E0:; /* spawn_needle */
    /* $A1E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A1E2:; /* main_proto_man_gemini_cutscene */
    /* $A1E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D6;
    }
label_A1E4:;
    /* $A1E4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A1E6:;
    /* $A1E6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8675 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1E9:;
    /* $A1E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1EC:;
    /* $A1EC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1ED:;
    /* $A1ED: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1E6;
    }
label_A1EF:;
    /* $A1EF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A1F1:;
    /* $A1F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1F7:;
    /* $A1F7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1F8:;
    /* $A1F8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1F1;
    }
label_A1FA:;
    /* $A1FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01FC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1FD:;
    /* $A1FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A1FF:;
    /* $A1FF: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A202:;
    /* $A202: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A204:;
    /* $A204: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A207:;
    /* $A207: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A209:;
    /* $A209: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_A20C:;
    /* $A20C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A20E:;
    /* $A20E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A216:;
    /* $A216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A218:;
    /* $A218: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A21B:;
    /* $A21B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A21E:;
    /* $A21E: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_A221:;
    /* $A221: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A224:;
    /* $A224: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A227:;
    /* $A227: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A22A:;
    /* $A22A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A22D:;
    /* $A22D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A22F:;
    /* $A22F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A232:;
    /* $A232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A234:;
    /* $A234: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A237:;
    /* $A237: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0239); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A23A:;
    /* $A23A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x023C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA23A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A23D:;
    /* $A23D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A291; }
label_A242:;
    /* $A242: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0244); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8603, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA242, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A245:;
    /* $A245: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A247:;
    /* $A247: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A249:;
    /* $A249: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A269; }
label_A24B:;
    /* $A24B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A24F:;
    /* $A24F: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0104); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A252:;
    /* $A252: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A253:;
    /* $A253: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A255:;
    /* $A255: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A25B:;
    /* $A25B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A25C:;
    /* $A25C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A25D:;
    /* $A25D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A25F:;
    /* $A25F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A255;
    }
label_A261:;
    /* $A261: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A264:;
    /* $A264: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A266:;
    /* $A266: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A269:;
    /* $A269: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A26B:;
    /* $A26B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A26D:;
    /* $A26D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A27E; }
label_A26F:;
    /* $A26F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0105); FLAG_NZ(g_cpu.A);
label_A272:;
    /* $A272: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0105; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A275:;
    /* $A275: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A277:;
    /* $A277: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A278:;
    /* $A278: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86DF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A27B:;
    /* $A27B: 8D */ maybe_trigger_vblank(4); nes_write(0x060D, g_cpu.A);
label_A27E:;
    /* $A27E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A280:;
    /* $A280: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A289; }
label_A284:;
    /* $A284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A286:;
    /* $A286: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0288); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA286, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A289:;
    /* $A289: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A28B:;
    /* $A28B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x028D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA28B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A28E:;
    /* $A28E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x823D, 5); return;
label_A291:;
    /* $A291: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A293:;
    /* $A293: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A295:;
    /* $A295: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0297); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA295, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A298:;
    /* $A298: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A29A:;
    /* $A29A: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A29D:;
    /* $A29D: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A2A0:;
    /* $A2A0: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A2A3:;
    /* $A2A3: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A2A6:;
    /* $A2A6: 8D */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.A);
label_A2A9:;
    /* $A2A9: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_A2AC:;
    /* $A2AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_A2AF:;
    /* $A2AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A2B2:;
    /* $A2B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A2B4:;
    /* $A2B4: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A2B7:;
    /* $A2B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A2B9:;
    /* $A2B9: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A2BC:;
    /* $A2BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A2C1:;
    /* $A2C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C3:;
    /* $A2C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A2C6:;
    /* $A2C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C8:;
    /* $A2C8: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A2CB:;
    /* $A2CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_A2CD:;
    /* $A2CD: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A2D0:;
    /* $A2D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A2D4:;
    /* $A2D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2D7:;
    /* $A2D7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2DD:;
    /* $A2DD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A2DE:;
    /* $A2DE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2D2;
    }
label_A2E0:;
    /* $A2E0: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_A2E2:;
    /* $A2E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A2E5:;
    /* $A2E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2EA; }
label_A2E7:;
    /* $A2E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8439, 5); return;
label_A2EA:;
    /* $A2EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A2ED:;
    /* $A2ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A2EF:;
    /* $A2EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F4; }
label_A2F1:;
    /* $A2F1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83A8, 5); return;
label_A2F4:;
    /* $A2F4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A2F7:;
    /* $A2F7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A2F9:;
    /* $A2F9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A301; }
label_A2FB:;
    /* $A2FB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2FE:;
    /* $A2FE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83E7, 5); return;
label_A301:;
    /* $A301: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A303:;
    /* $A303: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A306:;
    /* $A306: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A344; }
label_A308:;
    /* $A308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_A30A:;
    /* $A30A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A30C:;
    /* $A30C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x030E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA30C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A30F:;
    /* $A30F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_A315:;
    /* $A315: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_A318:;
    /* $A318: 8D */ maybe_trigger_vblank(4); nes_write(0x0581, g_cpu.A);
label_A31B:;
    /* $A31B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A31E:;
    /* $A31E: 8D */ maybe_trigger_vblank(4); nes_write(0x0381, g_cpu.A);
label_A321:;
    /* $A321: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A324:;
    /* $A324: 8D */ maybe_trigger_vblank(4); nes_write(0x03E1, g_cpu.A);
label_A327:;
    /* $A327: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A32A:;
    /* $A32A: 8D */ maybe_trigger_vblank(4); nes_write(0x0361, g_cpu.A);
label_A32D:;
    /* $A32D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A330:;
    /* $A330: 8D */ maybe_trigger_vblank(4); nes_write(0x03C1, g_cpu.A);
label_A333:;
    /* $A333: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A337:;
    /* $A337: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0339); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A33A:;
    /* $A33A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A33C:;
    /* $A33C: 8D */ maybe_trigger_vblank(4); nes_write(0x0501, g_cpu.A);
label_A33F:;
    /* $A33F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_A341:;
    /* $A341: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A344:;
    /* $A344: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0501); FLAG_NZ(g_cpu.A);
label_A347:;
    /* $A347: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x21; g_cpu.C=(g_cpu.A>=0x21)?1:0; FLAG_NZ(r&0xFF); }
label_A349:;
    /* $A349: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A352; }
label_A34B:;
    /* $A34B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A34D:;
    /* $A34D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A35C; }
label_A34F:;
    /* $A34F: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A352:;
    /* $A352: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A354:;
    /* $A354: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A356:;
    /* $A356: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A359:;
    /* $A359: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A35C:;
    /* $A35C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A375; }
label_A361:;
    /* $A361: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0521; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A364:;
    /* $A364: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_A369:;
    /* $A369: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A372; }
label_A36B:;
    /* $A36B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A36D:;
    /* $A36D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A36F:;
    /* $A36F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0371); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA36F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A372:;
    /* $A372: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A375:;
    /* $A375: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A379:;
    /* $A379: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37C:;
    /* $A37C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37F:;
    /* $A37F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3EA; }
label_A381:;
    /* $A381: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A383:;
    /* $A383: 8E */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.X);
label_A386:;
    /* $A386: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A388:;
    /* $A388: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x038A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA388, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A38B:;
    /* $A38B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A38E:;
    /* $A38E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A390:;
    /* $A390: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A393:;
    /* $A393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A395:;
    /* $A395: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A398:;
    /* $A398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A39D:;
    /* $A39D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A3A0:;
    /* $A3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A3A2:;
    /* $A3A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A3A5:;
    /* $A3A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A3EA:;
    /* $A3EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0540); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0460); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3F1:;
    /* $A3F1: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A3F4:;
    /* $A3F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A3F6:;
    /* $A3F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8735 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F9:;
    /* $A3F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3FC:;
    /* $A3FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8736 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FF:;
    /* $A3FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A402:;
    /* $A402: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8737 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A405:;
    /* $A405: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A408:;
    /* $A408: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A40B:;
    /* $A40B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A40C:;
    /* $A40C: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0540); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A40F:;
    /* $A40F: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A412:;
    /* $A412: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A413:;
    /* $A413: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A414:;
    /* $A414: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A415:;
    /* $A415: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A416:;
    /* $A416: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A418:;
    /* $A418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3F6;
    }
label_A41A:;
    /* $A41A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A41C:;
    /* $A41C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A41E:;
    /* $A41E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A422; }
label_A420:;
    /* $A420: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A422:;
    /* $A422: 86 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.X);
label_A424:;
    /* $A424: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0560); FLAG_NZ(g_cpu.A);
label_A427:;
    /* $A427: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A429:;
    /* $A429: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A430; }
label_A42B:;
    /* $A42B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A42D:;
    /* $A42D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x042F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA42D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A430:;
    /* $A430: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0432); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA430, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A433:;
    /* $A433: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0560; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A436:;
    /* $A436: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82E2, 5); return;
}

void func_A360_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A360_b5");
#endif
label_A360:;
    /* $A360: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A362:;
    /* $A362: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A364:;
    /* $A364: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_A369:;
    /* $A369: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A372; }
label_A36B:;
    /* $A36B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A36D:;
    /* $A36D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A36F:;
    /* $A36F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0371); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA36F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A372:;
    /* $A372: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
}

void func_A451_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A498;
    }
label_A451:;
    /* $A451: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x16A9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A454:;
    /* $A454: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_A456:;
    /* $A456: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A458:;
    /* $A458: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_A45A:;
    /* $A45A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_A45C:;
    /* $A45C: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A45E:;
    /* $A45E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0460); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA45E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A461:;
    /* $A461: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A463:;
    /* $A463: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0465); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA463, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A466:;
    /* $A466: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A468:;
    /* $A468: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A46A:;
    /* $A46A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x046C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA46A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A46D:;
    /* $A46D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x046F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A470:;
    /* $A470: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A472:;
    /* $A472: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A466;
    }
label_A474:;
    /* $A474: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A476:;
    /* $A476: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8695 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A479:;
    /* $A479: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A47C:;
    /* $A47C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A47D:;
    /* $A47D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A476;
    }
label_A47F:;
    /* $A47F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A481:;
    /* $A481: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86C1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A484:;
    /* $A484: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A487:;
    /* $A487: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A488:;
    /* $A488: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A481;
    }
label_A48A:;
    /* $A48A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x048C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA48A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A48D:;
    /* $A48D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x27; FLAG_NZ(g_cpu.Y);
label_A48F:;
    /* $A48F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86F1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A492:;
    /* $A492: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A495:;
    /* $A495: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A496:;
    /* $A496: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A48F;
    }
label_A498:; /* main_nitron */
    /* $A498: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x049A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA498, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A49B:;
    /* $A49B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x049D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A49E:;
    /* $A49E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04A0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA49E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A4A1:;
    /* $A4A1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x13; FLAG_NZ(g_cpu.Y);
label_A4A3:;
    /* $A4A3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8719 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A6:;
    /* $A4A6: 99 */ maybe_trigger_vblank(5); nes_write((0x0228 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4A9:;
    /* $A4A9: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A4AA:;
    /* $A4AA: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A4A3;
    }
label_A4AC:;
    /* $A4AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A4AE:;
    /* $A4AE: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A4B1:;
    /* $A4B1: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A4B4:;
    /* $A4B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4B6:;
    /* $A4B6: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A4B9:;
    /* $A4B9: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_A4BC:;
    /* $A4BC: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A4BF:;
    /* $A4BF: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A4C2:;
    /* $A4C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x60; FLAG_NZ(g_cpu.A);
label_A4C4:;
    /* $A4C4: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A4C7:;
    /* $A4C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A4C9:;
    /* $A4C9: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A4CC:;
    /* $A4CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7B; FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_A4D1:;
    /* $A4D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4D3:;
    /* $A4D3: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A4D5:;
    /* $A4D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A4D7:;
    /* $A4D7: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A4D9:;
    /* $A4D9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A4DB:;
    /* $A4DB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A4DD:;
    /* $A4DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4EC; }
label_A4DF:;
    /* $A4DF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A4E1:;
    /* $A4E1: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_A4E4:;
    /* $A4E4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E6:;
    /* $A4E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A4E8:;
    /* $A4E8: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x2F; FLAG_NZ(g_cpu.A);
label_A4EA:;
    /* $A4EA: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A4EC:;
    /* $A4EC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04EE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A4EF:;
    /* $A4EF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4F1:;
    /* $A4F1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A4F3:;
    /* $A4F3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A4F5:;
    /* $A4F5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A4D9;
    }
label_A4F7:;
    /* $A4F7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04F9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x854B, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA4F7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A4FA:;
    /* $A4FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4FC:;
    /* $A4FC: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A4FE:;
    /* $A4FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A500:; /* enemy_speed_ID_g */
    /* $A500: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A501:;
    /* $A501: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0503); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8525, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA501, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A504:;
    /* $A504: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A505:;
    /* $A505: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A506:;
    /* $A506: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A508:;
    /* $A508: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A500;
    }
label_A50A:;
    /* $A50A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x050C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8591, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA50A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A50D:;
    /* $A50D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A50F:;
    /* $A50F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A510:;
    /* $A510: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0512); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8525, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA510, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A513:;
    /* $A513: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A514:;
    /* $A514: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A515:;
    /* $A515: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A517:;
    /* $A517: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A50F;
    }
label_A519:;
    /* $A519: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A51B:;
    /* $A51B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A51C:;
    /* $A51C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0C); g_cpu.A=r&0xFF; }
label_A51E:;
    /* $A51E: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_A520:;
    /* $A520: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A522:;
    /* $A522: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; } return;
}

void func_A451_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A451_b5");
#endif
    func_A451_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A498_b5(void) { /* main_nitron */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A498_b5");
#endif
    func_A451_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A50E_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A50E_b5");
#endif
label_A50E:;
    /* $A50E: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x2048 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A511:;
    /* $A511: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x85); FLAG_NZ(g_cpu.A);
label_A513:;
    /* $A513: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A514:;
    /* $A514: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A515:;
    /* $A515: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A517:;
    /* $A517: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x050F), 5); return; }
label_A519:;
    /* $A519: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_A51B:;
    /* $A51B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A51C:;
    /* $A51C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0C); g_cpu.A=r&0xFF; }
label_A51E:;
    /* $A51E: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_A520:;
    /* $A520: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A522:;
    /* $A522: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; } return;
}

void func_A518_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A518_b5");
#endif
label_A518:;
    /* $A518: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xA5 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51A:;
    /* $A51A: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x18 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A51C:;
    /* $A51C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0C); g_cpu.A=r&0xFF; }
label_A51E:;
    /* $A51E: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_A520:;
    /* $A520: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A522:;
    /* $A522: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; } return;
}

void func_A632_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A632_b5");
#endif
label_A632:;
    /* $A632: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A634:;
    /* $A634: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0400); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A638:;
    /* $A638: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x872D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A63E:;
    /* $A63E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0420); FLAG_NZ(g_cpu.A);
label_A641:;
    /* $A641: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8731 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A644:;
    /* $A644: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A647:;
    /* $A647: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A64A:;
    /* $A64A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A654; }
label_A64C:;
    /* $A64C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A64F:;
    /* $A64F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A654:;
    /* $A654: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A796_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_ABCE;
        case 2: goto label_A9A8;
        case 3: goto label_AC9D;
        case 4: goto label_ACB4;
        case 5: goto label_A8DB;
        case 6: goto label_AA28;
        case 7: goto label_B005;
        case 8: goto label_A816;
        case 9: goto label_A798;
        case 10: goto label_A7FB;
        case 11: goto label_AA73;
        case 12: goto label_AC18;
        case 13: goto label_A909;
        case 14: goto label_A9B3;
        case 15: goto label_ADEC;
        case 16: goto label_AE1A;
        case 17: goto label_B0DA;
        case 18: goto label_A811;
        case 19: goto label_A83D;
        case 20: goto label_A8A0;
        case 21: goto label_AEAD;
        case 22: goto label_AD05;
        case 23: goto label_B183;
        case 24: goto label_B103;
        case 25: goto label_A904;
    }
label_A796:;
    /* $A796: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A798:;
    /* $A798: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A79A:;
    /* $A79A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A79C:;
    /* $A79C: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_A81D; }
label_A79E:;
    /* $A79E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7A0:;
    /* $A7A0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A7A1:;
    /* $A7A1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xC803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A4:;
    /* $A7A4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A7A5:;
    /* $A7A5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xC803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A8:;
    /* $A7A8: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A7A9:;
    /* $A7A9: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC803 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7AC:;
    /* $A7AC: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A7AD:;
    /* $A7AD: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xC003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7B0:;
    /* $A7B0: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A7B1:;
    /* $A7B1: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xB803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7B4:;
    /* $A7B4: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_A835; }
label_A7B6:;
    /* $A7B6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7B8:;
    /* $A7B8: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A7B9:;
    /* $A7B9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BC:;
    /* $A7BC: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA7BC; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A7BD:;
    /* $A7BD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C0:;
    /* $A7C0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A7C1:;
    /* $A7C1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A843; }
label_A7C6:;
    /* $A7C6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7C8:;
    /* $A7C8: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0848), 5); return; }
label_A7CA:;
    /* $A7CA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CC:;
    /* $A7CC: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A84C; }
label_A7CE:;
    /* $A7CE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D0:;
    /* $A7D0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0850), 5); return; }
label_A7D2:;
    /* $A7D2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x98 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D4:;
    /* $A7D4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A854; }
label_A7D6:;
    /* $A7D6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x90 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D8:;
    /* $A7D8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A7D9:;
    /* $A7D9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x8803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7DC:;
    /* $A7DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7DF:;
    /* $A7DF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A7E0:;
    /* $A7E0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07E2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7E0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7E3:;
    /* $A7E3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A7E5:;
    /* $A7E5: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E8:;
    /* $A7E8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07EA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7E8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7EB:;
    /* $A7EB: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_A80D; }
label_A7ED:;
    /* $A7ED: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x6803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7F0:;
    /* $A7F0: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x037F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A7F3:;
    /* $A7F3: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x7F34 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7F6:;
    /* $A7F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7F8:;
    /* $A7F8: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x037F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7FB:;
    /* $A7FB: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x7F44 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7FE:;
    /* $A7FE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A800:; /* spark_damage_table */
    /* $A800: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
label_A803:;
    /* $A803: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A804:;
    /* $A804: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A805:;
    /* $A805: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A807:;
    /* $A807: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0809); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x1402, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA807, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A80A:;
    /* $A80A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80A); return;
label_A80B:;
    /* $A80B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80B); return;
label_A80C:;
    /* $A80C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A80D:;
    /* $A80D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80D); return;
label_A80E:;
    /* $A80E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80E); return;
label_A80F:;
    /* $A80F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A811:;
    /* $A811: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A813:;
    /* $A813: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A814:;
    /* $A814: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA814); return;
label_A815:;
    /* $A815: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A816:;
    /* $A816: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA816); return;
label_A817:;
    /* $A817: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A819:;
    /* $A819: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A81A:;
    /* $A81A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A81B:;
    /* $A81B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81B); return;
label_A81C:;
    /* $A81C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A81D:;
    /* $A81D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A81F:;
    /* $A81F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81F); return;
label_A820:;
    /* $A820: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA820); return;
label_A821:;
    /* $A821: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA821); return;
label_A822:;
    /* $A822: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA822); return;
label_A823:;
    /* $A823: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A824:;
    /* $A824: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA824); return;
label_A825:;
    /* $A825: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A827:;
    /* $A827: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA827); return;
label_A828:;
    /* $A828: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA828); return;
label_A829:;
    /* $A829: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A82A:;
    /* $A82A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82A); return;
label_A82B:;
    /* $A82B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82B); return;
label_A82C:;
    /* $A82C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82C); return;
label_A82D:;
    /* $A82D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82D); return;
label_A82E:;
    /* $A82E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82E); return;
label_A82F:;
    /* $A82F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82F); return;
label_A830:;
    /* $A830: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA830); return;
label_A831:;
    /* $A831: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA831); return;
label_A832:;
    /* $A832: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA832); return;
label_A833:;
    /* $A833: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A835:;
    /* $A835: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA835); return;
label_A836:; /* test_facing_change */
    /* $A836: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA836); return;
label_A837:;
    /* $A837: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA837); return;
label_A838:;
    /* $A838: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA838); return;
label_A839:;
    /* $A839: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A83B:;
    /* $A83B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83B); return;
label_A83C:;
    /* $A83C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83C); return;
label_A83D:;
    /* $A83D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83D); return;
label_A83E:;
    /* $A83E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83E); return;
label_A83F:;
    /* $A83F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A841:;
    /* $A841: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A843:;
    /* $A843: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A844:;
    /* $A844: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA844); return;
label_A845:;
    /* $A845: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A847:;
    /* $A847: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A849:;
    /* $A849: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA849); return;
label_A84A:;
    /* $A84A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84A); return;
label_A84B:;
    /* $A84B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A84C:;
    /* $A84C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84C); return;
label_A84D:;
    /* $A84D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA84D; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A84E:;
    /* $A84E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84E); return;
label_A84F:;
    /* $A84F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A851:;
    /* $A851: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA851); return;
label_A852:;
    /* $A852: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A853:;
    /* $A853: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA853; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A854:;
    /* $A854: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA854); return;
label_A855:;
    /* $A855: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA855); return;
label_A856:;
    /* $A856: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0858); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA856, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A859:;
    /* $A859: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA859); return;
label_A85A:;
    /* $A85A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85A); return;
label_A85B:;
    /* $A85B: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A85D:;
    /* $A85D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85D); return;
label_A85E:;
    /* $A85E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85E); return;
label_A85F:;
    /* $A85F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85F); return;
label_A860:;
    /* $A860: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA860); return;
label_A861:;
    /* $A861: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA861); return;
label_A862:;
    /* $A862: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA862); return;
label_A863:;
    /* $A863: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA863); return;
label_A864:;
    /* $A864: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA864); return;
label_A865:;
    /* $A865: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA865); return;
label_A866:;
    /* $A866: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA866); return;
label_A867:;
    /* $A867: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA867); return;
label_A868:;
    /* $A868: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA868); return;
label_A869:;
    /* $A869: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A86B:;
    /* $A86B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA86B); return;
label_A86C:;
    /* $A86C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA86C); return;
label_A86D:;
    /* $A86D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A86F:;
    /* $A86F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A870:;
    /* $A870: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA870); return;
label_A871:;
    /* $A871: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA871); return;
label_A872:;
    /* $A872: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA872); return;
label_A873:;
    /* $A873: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA873); return;
label_A874:;
    /* $A874: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA874); return;
label_A875:;
    /* $A875: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA875); return;
label_A876:;
    /* $A876: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA876); return;
label_A877:;
    /* $A877: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA877); return;
label_A878:;
    /* $A878: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A879:;
    /* $A879: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA879); return;
label_A87A:;
    /* $A87A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87A); return;
label_A87B:;
    /* $A87B: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA87B; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A87C:;
    /* $A87C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87C); return;
label_A87D:;
    /* $A87D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87D); return;
label_A87E:;
    /* $A87E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87E); return;
label_A87F:;
    /* $A87F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87F); return;
label_A880:;
    /* $A880: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA880); return;
label_A881:;
    /* $A881: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA881); return;
label_A882:;
    /* $A882: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA882); return;
label_A883:;
    /* $A883: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA883); return;
label_A884:;
    /* $A884: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A885:;
    /* $A885: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA885; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A886:;
    /* $A886: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA886); return;
label_A887:;
    /* $A887: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A888:;
    /* $A888: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA888); return;
label_A889:;
    /* $A889: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA889); return;
label_A88A:;
    /* $A88A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88A); return;
label_A88B:;
    /* $A88B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88B); return;
label_A88C:;
    /* $A88C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88C); return;
label_A88D:;
    /* $A88D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA88D; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A88E:;
    /* $A88E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A88F:;
    /* $A88F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88F); return;
label_A890:;
    /* $A890: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA890); return;
label_A891:;
    /* $A891: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA891); return;
label_A892:;
    /* $A892: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A893:;
    /* $A893: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA893); return;
label_A894:;
    /* $A894: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA894); return;
label_A895:;
    /* $A895: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA895); return;
label_A896:;
    /* $A896: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA896); return;
label_A897:;
    /* $A897: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A899; }
label_A899:;
    /* $A899: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A89B:;
    /* $A89B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89B); return;
label_A89C:;
    /* $A89C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89D:;
    /* $A89D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89D); return;
label_A89E:;
    /* $A89E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89E); return;
label_A89F:;
    /* $A89F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89F); return;
label_A8A0:;
    /* $A8A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A0); return;
label_A8A1:;
    /* $A8A1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A1); return;
label_A8A2:;
    /* $A8A2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A2); return;
label_A8A3:;
    /* $A8A3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8A4:;
    /* $A8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A4); return;
label_A8A5:;
    /* $A8A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A5); return;
label_A8A6:;
    /* $A8A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A6); return;
label_A8A7:;
    /* $A8A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A7); return;
label_A8A8:;
    /* $A8A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08AA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0044, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8AB:;
    /* $A8AB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AB); return;
label_A8AC:;
    /* $A8AC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AC); return;
label_A8AD:;
    /* $A8AD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8AE:;
    /* $A8AE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AE); return;
label_A8AF:;
    /* $A8AF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AF); return;
label_A8B0:;
    /* $A8B0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B0); return;
label_A8B1:;
    /* $A8B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B1); return;
label_A8B2:;
    /* $A8B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B2); return;
label_A8B3:;
    /* $A8B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B3); return;
label_A8B4:;
    /* $A8B4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B4); return;
label_A8B5:;
    /* $A8B5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B5); return;
label_A8B6:;
    /* $A8B6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B6); return;
label_A8B7:;
    /* $A8B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B7); return;
label_A8B8:;
    /* $A8B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B8); return;
label_A8B9:;
    /* $A8B9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA8B9; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A8BA:;
    /* $A8BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BA); return;
label_A8BB:;
    /* $A8BB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BB); return;
label_A8BC:;
    /* $A8BC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BC); return;
label_A8BD:;
    /* $A8BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BD); return;
label_A8BE:;
    /* $A8BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BE); return;
label_A8BF:;
    /* $A8BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BF); return;
label_A8C0:;
    /* $A8C0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C0); return;
label_A8C1:;
    /* $A8C1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8C3:;
    /* $A8C3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C3); return;
label_A8C4:;
    /* $A8C4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C4); return;
label_A8C5:;
    /* $A8C5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C5); return;
label_A8C6:;
    /* $A8C6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C6); return;
label_A8C7:;
    /* $A8C7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C7); return;
label_A8C8:;
    /* $A8C8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08CA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8C8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8CB:;
    /* $A8CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8CB); return;
label_A8CC:;
    /* $A8CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8CC); return;
label_A8CD:;
    /* $A8CD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8CD); return;
label_A8CE:;
    /* $A8CE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8CE); return;
label_A8CF:;
    /* $A8CF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8CF); return;
label_A8D0:;
    /* $A8D0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D0); return;
label_A8D1:;
    /* $A8D1: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA8D1; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A8D2:;
    /* $A8D2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8D3:;
    /* $A8D3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D3); return;
label_A8D4:;
    /* $A8D4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D4); return;
label_A8D5:;
    /* $A8D5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8D6:;
    /* $A8D6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D6); return;
label_A8D7:;
    /* $A8D7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D7); return;
label_A8D8:;
    /* $A8D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D8); return;
label_A8D9:;
    /* $A8D9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D9); return;
label_A8DA:;
    /* $A8DA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8DA); return;
label_A8DB:;
    /* $A8DB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8DB); return;
label_A8DC:;
    /* $A8DC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8DC); return;
label_A8DD:;
    /* $A8DD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8DD); return;
label_A8DE:;
    /* $A8DE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8DE); return;
label_A8DF:;
    /* $A8DF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8DF); return;
label_A8E0:;
    /* $A8E0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E0); return;
label_A8E1:;
    /* $A8E1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E1); return;
label_A8E2:;
    /* $A8E2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E2); return;
label_A8E3:;
    /* $A8E3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E3); return;
label_A8E4:;
    /* $A8E4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E4); return;
label_A8E5:;
    /* $A8E5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8E6:;
    /* $A8E6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08E8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0800, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8E6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8E9:;
    /* $A8E9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8E9); return;
label_A8EA:;
    /* $A8EA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8EA); return;
label_A8EB:;
    /* $A8EB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8EB); return;
label_A8EC:;
    /* $A8EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8EC); return;
label_A8ED:;
    /* $A8ED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8ED); return;
label_A8EE:;
    /* $A8EE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8EE); return;
label_A8EF:;
    /* $A8EF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8EF); return;
label_A8F0:;
    /* $A8F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F1:;
    /* $A8F1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8F3:;
    /* $A8F3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8F3); return;
label_A8F4:;
    /* $A8F4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8F5:;
    /* $A8F5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8F5); return;
label_A8F6:;
    /* $A8F6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8F6); return;
label_A8F7:;
    /* $A8F7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8F7); return;
label_A8F8:;
    /* $A8F8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8F8); return;
label_A8F9:;
    /* $A8F9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8F9); return;
label_A8FA:;
    /* $A8FA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A8FC:;
    /* $A8FC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8FC); return;
label_A8FD:;
    /* $A8FD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8FD); return;
label_A8FE:;
    /* $A8FE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A900:; /* shadow_damage_table */
    /* $A900: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA900); return;
label_A901:;
    /* $A901: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A903; }
label_A903:;
    /* $A903: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA903; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A904:;
    /* $A904: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0906); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA904, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A907:;
    /* $A907: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA907); return;
label_A908:;
    /* $A908: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA908); return;
label_A909:;
    /* $A909: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA909); return;
label_A90A:;
    /* $A90A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA90A); return;
label_A90B:;
    /* $A90B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x090D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0008, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA90B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A90E:;
    /* $A90E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA90E); return;
label_A90F:;
    /* $A90F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA90F); return;
label_A910:;
    /* $A910: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0912); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0004, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA910, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A913:;
    /* $A913: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A914:;
    /* $A914: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA914); return;
label_A915:;
    /* $A915: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA915); return;
label_A916:;
    /* $A916: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A918:;
    /* $A918: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA918); return;
label_A919:;
    /* $A919: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A91A:;
    /* $A91A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91A); return;
label_A91B:;
    /* $A91B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A91D:;
    /* $A91D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91D); return;
label_A91E:;
    /* $A91E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A91F:;
    /* $A91F: 8C */ maybe_trigger_vblank(4); nes_write(0x0000, g_cpu.Y);
label_A922:;
    /* $A922: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA922); return;
label_A923:;
    /* $A923: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA923); return;
label_A924:;
    /* $A924: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A92E; }
label_A926:;
    /* $A926: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA926); return;
label_A927:;
    /* $A927: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A929; }
label_A929:;
    /* $A929: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA929); return;
label_A92A:;
    /* $A92A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA92A); return;
label_A92B:;
    /* $A92B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA92B); return;
label_A92C:;
    /* $A92C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA92C); return;
label_A92D:;
    /* $A92D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA92D); return;
label_A92E:;
    /* $A92E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA92E); return;
label_A92F:;
    /* $A92F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA92F); return;
label_A930:;
    /* $A930: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA930); return;
label_A931:;
    /* $A931: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA931); return;
label_A932:;
    /* $A932: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA932); return;
label_A933:;
    /* $A933: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA933); return;
label_A934:;
    /* $A934: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA934); return;
label_A935:;
    /* $A935: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA935); return;
label_A936:;
    /* $A936: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA936); return;
label_A937:;
    /* $A937: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A939:;
    /* $A939: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA939); return;
label_A93A:;
    /* $A93A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93A); return;
label_A93B:;
    /* $A93B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93B); return;
label_A93C:;
    /* $A93C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93C); return;
label_A93D:;
    /* $A93D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93D); return;
label_A93E:;
    /* $A93E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93E); return;
label_A93F:;
    /* $A93F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A941:;
    /* $A941: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA941); return;
label_A942:;
    /* $A942: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA942); return;
label_A943:;
    /* $A943: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA943); return;
label_A944:;
    /* $A944: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA944); return;
label_A945:;
    /* $A945: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA945); return;
label_A946:;
    /* $A946: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA946); return;
label_A947:;
    /* $A947: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA947); return;
label_A948:;
    /* $A948: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A94A:;
    /* $A94A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x094C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA94A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A94D:;
    /* $A94D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA94D); return;
label_A94E:;
    /* $A94E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA94E); return;
label_A94F:;
    /* $A94F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA94F); return;
label_A950:;
    /* $A950: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA950); return;
label_A951:;
    /* $A951: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA951); return;
label_A952:;
    /* $A952: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A953:;
    /* $A953: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA953); return;
label_A954:;
    /* $A954: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA954); return;
label_A955:;
    /* $A955: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA955); return;
label_A956:;
    /* $A956: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA956); return;
label_A957:;
    /* $A957: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA957); return;
label_A958:;
    /* $A958: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A959:;
    /* $A959: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A95B; }
label_A95B:;
    /* $A95B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95B); return;
label_A95C:;
    /* $A95C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95C); return;
label_A95D:;
    /* $A95D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95D); return;
label_A95E:;
    /* $A95E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95E); return;
label_A95F:;
    /* $A95F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A961:;
    /* $A961: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA961); return;
label_A962:;
    /* $A962: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA962); return;
label_A963:;
    /* $A963: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA963); return;
label_A964:;
    /* $A964: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA964); return;
label_A965:;
    /* $A965: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA965); return;
label_A966:;
    /* $A966: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA966); return;
label_A967:;
    /* $A967: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA967); return;
label_A968:;
    /* $A968: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A969:;
    /* $A969: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA969); return;
label_A96A:;
    /* $A96A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96A); return;
label_A96B:;
    /* $A96B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96B); return;
label_A96C:;
    /* $A96C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96C); return;
label_A96D:;
    /* $A96D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96D); return;
label_A96E:;
    /* $A96E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96E); return;
label_A96F:;
    /* $A96F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA96F); return;
label_A970:;
    /* $A970: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA970); return;
label_A971:;
    /* $A971: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA971); return;
label_A972:;
    /* $A972: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA972); return;
label_A973:;
    /* $A973: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA973); return;
label_A974:;
    /* $A974: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA974); return;
label_A975:;
    /* $A975: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A977:;
    /* $A977: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA977); return;
label_A978:;
    /* $A978: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA978); return;
label_A979:;
    /* $A979: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA979); return;
label_A97A:;
    /* $A97A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97A); return;
label_A97B:;
    /* $A97B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97B); return;
label_A97C:;
    /* $A97C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97C); return;
label_A97D:;
    /* $A97D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97D); return;
label_A97E:;
    /* $A97E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97E); return;
label_A97F:;
    /* $A97F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97F); return;
label_A980:;
    /* $A980: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A981:;
    /* $A981: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA981); return;
label_A982:;
    /* $A982: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA982); return;
label_A983:;
    /* $A983: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA983); return;
label_A984:;
    /* $A984: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA984); return;
label_A985:;
    /* $A985: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA985); return;
label_A986:;
    /* $A986: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A987:;
    /* $A987: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0989); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA987, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A98A:;
    /* $A98A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98A); return;
label_A98B:;
    /* $A98B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98B); return;
label_A98C:;
    /* $A98C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98C); return;
label_A98D:;
    /* $A98D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A98F:;
    /* $A98F: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A991:;
    /* $A991: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A992:;
    /* $A992: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA992); return;
label_A993:;
    /* $A993: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA993); return;
label_A994:;
    /* $A994: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA994); return;
label_A995:;
    /* $A995: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA995); return;
label_A996:;
    /* $A996: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A998:;
    /* $A998: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A999:;
    /* $A999: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA999); return;
label_A99A:;
    /* $A99A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99A); return;
label_A99B:;
    /* $A99B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A99D; }
label_A99D:;
    /* $A99D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99D); return;
label_A99E:;
    /* $A99E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99E); return;
label_A99F:;
    /* $A99F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99F); return;
label_A9A0:;
    /* $A9A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A0); return;
label_A9A1:;
    /* $A9A1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A1); return;
label_A9A2:;
    /* $A9A2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A2); return;
label_A9A3:;
    /* $A9A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A5:;
    /* $A9A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A5); return;
label_A9A6:;
    /* $A9A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A6); return;
label_A9A7:;
    /* $A9A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A7); return;
label_A9A8:;
    /* $A9A8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A8); return;
label_A9A9:;
    /* $A9A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9A9); return;
label_A9AA:;
    /* $A9AA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9AA); return;
label_A9AB:;
    /* $A9AB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9AD:;
    /* $A9AD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9AD); return;
label_A9AE:;
    /* $A9AE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9AE); return;
label_A9AF:;
    /* $A9AF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9AF); return;
label_A9B0:;
    /* $A9B0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B0); return;
label_A9B1:;
    /* $A9B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B1); return;
label_A9B2:;
    /* $A9B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B2); return;
label_A9B3:;
    /* $A9B3: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA9B3; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A9B4:;
    /* $A9B4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B4); return;
label_A9B5:;
    /* $A9B5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9B7:;
    /* $A9B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B7); return;
label_A9B8:;
    /* $A9B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B8); return;
label_A9B9:;
    /* $A9B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B9); return;
label_A9BA:;
    /* $A9BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BA); return;
label_A9BB:;
    /* $A9BB: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA9BB; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A9BC:;
    /* $A9BC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BC); return;
label_A9BD:;
    /* $A9BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BD); return;
label_A9BE:;
    /* $A9BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BE); return;
label_A9BF:;
    /* $A9BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BF); return;
label_A9C0:;
    /* $A9C0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C0); return;
label_A9C1:;
    /* $A9C1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C1); return;
label_A9C2:;
    /* $A9C2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C2); return;
label_A9C3:;
    /* $A9C3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9C4:;
    /* $A9C4: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9C5:;
    /* $A9C5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9C6:;
    /* $A9C6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C6); return;
label_A9C7:;
    /* $A9C7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C7); return;
label_A9C8:;
    /* $A9C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C8); return;
label_A9C9:;
    /* $A9C9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9C9); return;
label_A9CA:;
    /* $A9CA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CA); return;
label_A9CB:;
    /* $A9CB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CB); return;
label_A9CC:;
    /* $A9CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CC); return;
label_A9CD:;
    /* $A9CD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A9CF:;
    /* $A9CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9D0:;
    /* $A9D0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D0); return;
label_A9D1:;
    /* $A9D1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D1); return;
label_A9D2:;
    /* $A9D2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D2); return;
label_A9D3:;
    /* $A9D3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9D4:;
    /* $A9D4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D4); return;
label_A9D5:;
    /* $A9D5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D5); return;
label_A9D6:;
    /* $A9D6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D6); return;
label_A9D7:;
    /* $A9D7: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9D9:;
    /* $A9D9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D9); return;
label_A9DA:;
    /* $A9DA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DA); return;
label_A9DB:;
    /* $A9DB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DB); return;
label_A9DC:;
    /* $A9DC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DC); return;
label_A9DD:;
    /* $A9DD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DD); return;
label_A9DE:;
    /* $A9DE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DE); return;
label_A9DF:;
    /* $A9DF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9DF); return;
label_A9E0:;
    /* $A9E0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E0); return;
label_A9E1:;
    /* $A9E1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E1); return;
label_A9E2:;
    /* $A9E2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E2); return;
label_A9E3:;
    /* $A9E3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E3); return;
label_A9E4:;
    /* $A9E4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E4); return;
label_A9E5:;
    /* $A9E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E5); return;
label_A9E6:;
    /* $A9E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E6); return;
label_A9E7:;
    /* $A9E7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E7); return;
label_A9E8:;
    /* $A9E8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E8); return;
label_A9E9:;
    /* $A9E9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E9); return;
label_A9EA:;
    /* $A9EA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9EA); return;
label_A9EB:;
    /* $A9EB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9EC:;
    /* $A9EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9EC); return;
label_A9ED:;
    /* $A9ED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9ED); return;
label_A9EE:;
    /* $A9EE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9EE); return;
label_A9EF:;
    /* $A9EF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9EF); return;
label_A9F0:;
    /* $A9F0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F0); return;
label_A9F1:;
    /* $A9F1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F1); return;
label_A9F2:;
    /* $A9F2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F2); return;
label_A9F3:;
    /* $A9F3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9F5:;
    /* $A9F5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F5); return;
label_A9F6:;
    /* $A9F6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F6); return;
label_A9F7:;
    /* $A9F7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F7); return;
label_A9F8:;
    /* $A9F8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F8); return;
label_A9F9:;
    /* $A9F9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9F9); return;
label_A9FA:;
    /* $A9FA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9FA); return;
label_A9FB:;
    /* $A9FB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9FB); return;
label_A9FC:;
    /* $A9FC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9FC); return;
label_A9FD:;
    /* $A9FD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9FD); return;
label_A9FE:;
    /* $A9FE: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A9FF:;
    /* $A9FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9FF); return;
label_AA00:;
    /* $AA00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA00); return;
label_AA01:;
    /* $AA01: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA03:;
    /* $AA03: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA05:;
    /* $AA05: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA09:;
    /* $AA09: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_AA0B:;
    /* $AA0B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA0D:;
    /* $AA0D: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F0E); FLAG_NZ(g_cpu.A);
label_AA10:;
    /* $AA10: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0A23), 5); return; }
label_AA12:;
    /* $AA12: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AA13:;
    /* $AA13: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA15:;
    /* $AA15: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AA17:;
    /* $AA17: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA19:;
    /* $AA19: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0008 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA1C:;
    /* $AA1C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA1C); return;
label_AA1D:;
    /* $AA1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA1D); return;
label_AA1E:;
    /* $AA1E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA1F:;
    /* $AA1F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA20:;
    /* $AA20: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA20); return;
label_AA21:;
    /* $AA21: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA21); return;
label_AA22:;
    /* $AA22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A24); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0021, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA25:;
    /* $AA25: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA25); return;
label_AA26:;
    /* $AA26: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA26); return;
label_AA27:;
    /* $AA27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA27); return;
label_AA28:;
    /* $AA28: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA29:;
    /* $AA29: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA29); return;
label_AA2A:;
    /* $AA2A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA2A); return;
label_AA2B:;
    /* $AA2B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA2B); return;
label_AA2C:;
    /* $AA2C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA2C); return;
label_AA2D:;
    /* $AA2D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA2D); return;
label_AA2E:;
    /* $AA2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA2E); return;
label_AA2F:;
    /* $AA2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA2F); return;
label_AA30:;
    /* $AA30: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x5A5A); FLAG_NZ(g_cpu.A);
label_AA33:;
    /* $AA33: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AA34:;
    /* $AA34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA34); return;
label_AA35:;
    /* $AA35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA35); return;
label_AA36:;
    /* $AA36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA36); return;
label_AA37:;
    /* $AA37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA37); return;
label_AA38:;
    /* $AA38: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x5A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA3A:;
    /* $AA3A: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AA3B:;
    /* $AA3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3B); return;
label_AA3C:;
    /* $AA3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3C); return;
label_AA3D:;
    /* $AA3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3D); return;
label_AA3E:;
    /* $AA3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3E); return;
label_AA3F:;
    /* $AA3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3F); return;
label_AA40:;
    /* $AA40: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA40; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA41:;
    /* $AA41: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA41; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA42:;
    /* $AA42: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA42; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA43:;
    /* $AA43: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA45:;
    /* $AA45: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x60; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA47:;
    /* $AA47: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A49); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2220, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA47, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA4A:;
    /* $AA4A: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x20 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AA4C:;
    /* $AA4C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A4E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA4C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA4F:;
    /* $AA4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA4F); return;
label_AA50:;
    /* $AA50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA50); return;
label_AA51:;
    /* $AA51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA51); return;
label_AA52:;
    /* $AA52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA52); return;
label_AA53:;
    /* $AA53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA53); return;
label_AA54:;
    /* $AA54: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A56); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA57:;
    /* $AA57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA57); return;
label_AA58:;
    /* $AA58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA58); return;
label_AA59:;
    /* $AA59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA59); return;
label_AA5A:;
    /* $AA5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5A); return;
label_AA5B:;
    /* $AA5B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A5D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0002, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA5B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA5E:;
    /* $AA5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5E); return;
label_AA5F:;
    /* $AA5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5F); return;
label_AA60:;
    /* $AA60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA60); return;
label_AA61:;
    /* $AA61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA61); return;
label_AA62:;
    /* $AA62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA62); return;
label_AA63:;
    /* $AA63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA63); return;
label_AA64:;
    /* $AA64: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA64); return;
label_AA65:;
    /* $AA65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA65); return;
label_AA66:;
    /* $AA66: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA67:;
    /* $AA67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA67); return;
label_AA68:;
    /* $AA68: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA6A:;
    /* $AA6A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA6B:;
    /* $AA6B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA6B); return;
label_AA6C:;
    /* $AA6C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA6D:;
    /* $AA6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA6D); return;
label_AA6E:;
    /* $AA6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA6E); return;
label_AA6F:;
    /* $AA6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA6F); return;
label_AA70:;
    /* $AA70: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1700; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA73:;
    /* $AA73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA73); return;
label_AA74:;
    /* $AA74: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_AA76; }
label_AA76:;
    /* $AA76: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA78:;
    /* $AA78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA78); return;
label_AA79:;
    /* $AA79: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA79); return;
label_AA7A:;
    /* $AA7A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xFF00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA7D:;
    /* $AA7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7D); return;
label_AA7E:;
    /* $AA7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7E); return;
label_AA7F:;
    /* $AA7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7F); return;
label_AA80:;
    /* $AA80: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x0F5E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA83:;
    /* $AA83: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x06 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA85:;
    /* $AA85: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA87:;
    /* $AA87: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA89:;
    /* $AA89: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA8B:;
    /* $AA8B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0109); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA8E:;
    /* $AA8E: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2830; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA91:;
    /* $AA91: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x8A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA93:;
    /* $AA93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA93); return;
label_AA94:;
    /* $AA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA94); return;
label_AA95:;
    /* $AA95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA95); return;
label_AA96:;
    /* $AA96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA96); return;
label_AA97:;
    /* $AA97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA97); return;
label_AA98:;
    /* $AA98: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA99:;
    /* $AA99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA99); return;
label_AA9A:;
    /* $AA9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA9A); return;
label_AA9B:;
    /* $AA9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA9B); return;
label_AA9C:;
    /* $AA9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA9C); return;
label_AA9D:;
    /* $AA9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA9D); return;
label_AA9E:;
    /* $AA9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA9E); return;
label_AA9F:;
    /* $AA9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA9F); return;
label_AAA0:;
    /* $AAA0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA0); return;
label_AAA1:;
    /* $AAA1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AAA3; }
label_AAA3:;
    /* $AAA3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAA4:;
    /* $AAA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA4); return;
label_AAA5:;
    /* $AAA5: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAAA5; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAA6:;
    /* $AAA6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA6); return;
label_AAA7:;
    /* $AAA7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAA9:;
    /* $AAA9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAAB:;
    /* $AAAB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAAB); return;
label_AAAC:;
    /* $AAAC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAAC); return;
label_AAAD:;
    /* $AAAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAAD); return;
label_AAAE:;
    /* $AAAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAAE); return;
label_AAAF:;
    /* $AAAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAAF); return;
label_AAB0:;
    /* $AAB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB0); return;
label_AAB1:;
    /* $AAB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB1); return;
label_AAB2:;
    /* $AAB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB2); return;
label_AAB3:;
    /* $AAB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB3); return;
label_AAB4:;
    /* $AAB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB4); return;
label_AAB5:;
    /* $AAB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB5); return;
label_AAB6:;
    /* $AAB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB6); return;
label_AAB7:;
    /* $AAB7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAB9:;
    /* $AAB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB9); return;
label_AABA:;
    /* $AABA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABA); return;
label_AABB:;
    /* $AABB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABB); return;
label_AABC:;
    /* $AABC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABC); return;
label_AABD:;
    /* $AABD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABD); return;
label_AABE:;
    /* $AABE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AABF:;
    /* $AABF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AAC1:;
    /* $AAC1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC1); return;
label_AAC2:;
    /* $AAC2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC2); return;
label_AAC3:;
    /* $AAC3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAC4:;
    /* $AAC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC4); return;
label_AAC5:;
    /* $AAC5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAC7:;
    /* $AAC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC7); return;
label_AAC8:;
    /* $AAC8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC8); return;
label_AAC9:;
    /* $AAC9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAC9); return;
label_AACA:;
    /* $AACA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAACA); return;
label_AACB:;
    /* $AACB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAACB); return;
label_AACC:;
    /* $AACC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAACC); return;
label_AACD:;
    /* $AACD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAACD); return;
label_AACE:;
    /* $AACE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAACE); return;
label_AACF:;
    /* $AACF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AAD1; }
label_AAD1:;
    /* $AAD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD1); return;
label_AAD2:;
    /* $AAD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD2); return;
label_AAD3:;
    /* $AAD3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAD5:;
    /* $AAD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD5); return;
label_AAD6:;
    /* $AAD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD6); return;
label_AAD7:;
    /* $AAD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD7); return;
label_AAD8:;
    /* $AAD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD8); return;
label_AAD9:;
    /* $AAD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD9); return;
label_AADA:;
    /* $AADA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAADA); return;
label_AADB:;
    /* $AADB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAADB); return;
label_AADC:;
    /* $AADC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAADC); return;
label_AADD:;
    /* $AADD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAADD); return;
label_AADE:;
    /* $AADE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAADE); return;
label_AADF:;
    /* $AADF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAADF); return;
label_AAE0:;
    /* $AAE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE0); return;
label_AAE1:;
    /* $AAE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE1); return;
label_AAE2:;
    /* $AAE2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE2); return;
label_AAE3:;
    /* $AAE3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE3); return;
label_AAE4:;
    /* $AAE4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE4); return;
label_AAE5:;
    /* $AAE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE5); return;
label_AAE6:;
    /* $AAE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE6); return;
label_AAE7:;
    /* $AAE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE7); return;
label_AAE8:;
    /* $AAE8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAE9:;
    /* $AAE9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAE9); return;
label_AAEA:;
    /* $AAEA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAEA); return;
label_AAEB:;
    /* $AAEB: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAEC:;
    /* $AAEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAEC); return;
label_AAED:;
    /* $AAED: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AAEF:;
    /* $AAEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAEF); return;
label_AAF0:;
    /* $AAF0: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_AAF2:;
    /* $AAF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAF2); return;
label_AAF3:;
    /* $AAF3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAF4:;
    /* $AAF4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAF5:;
    /* $AAF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAF5); return;
label_AAF6:;
    /* $AAF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAF6); return;
label_AAF7:;
    /* $AAF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAF7); return;
label_AAF8:;
    /* $AAF8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_AB12; }
label_AAFA:;
    /* $AAFA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAFD:;
    /* $AAFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAFD); return;
label_AAFE:;
    /* $AAFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAFE); return;
label_AAFF:;
    /* $AAFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAFF); return;
label_AB00:;
    /* $AB00: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB02:;
    /* $AB02: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB04:;
    /* $AB04: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB06:;
    /* $AB06: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB08:;
    /* $AB08: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB09:;
    /* $AB09: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB0A:;
    /* $AB0A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB0B:;
    /* $AB0B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB0C:;
    /* $AB0C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB0D:;
    /* $AB0D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB0E:;
    /* $AB0E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AB10:;
    /* $AB10: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_AB12:;
    /* $AB12: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB13:;
    /* $AB13: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB14:;
    /* $AB14: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB15:;
    /* $AB15: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB16:;
    /* $AB16: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB18:;
    /* $AB18: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB1A:;
    /* $AB1A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AB1C:;
    /* $AB1C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0D0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB1F:;
    /* $AB1F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x100F); FLAG_NZ(g_cpu.A);
label_AB22:;
    /* $AB22: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB24:;
    /* $AB24: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AB25:;
    /* $AB25: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB27:;
    /* $AB27: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB29:;
    /* $AB29: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB2B:;
    /* $AB2B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x15 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB2D:;
    /* $AB2D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x15 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB2F:;
    /* $AB2F: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB31:;
    /* $AB31: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x16 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB33:;
    /* $AB33: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB35:;
    /* $AB35: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00FF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB38:;
    /* $AB38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB38); return;
label_AB39:;
    /* $AB39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB39); return;
label_AB3A:;
    /* $AB3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3A); return;
label_AB3B:;
    /* $AB3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3B); return;
label_AB3C:;
    /* $AB3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3C); return;
label_AB3D:;
    /* $AB3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3D); return;
label_AB3E:;
    /* $AB3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3E); return;
label_AB3F:;
    /* $AB3F: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB41:;
    /* $AB41: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB43:;
    /* $AB43: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB45:;
    /* $AB45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB45); return;
label_AB46:;
    /* $AB46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB46); return;
label_AB47:;
    /* $AB47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB47); return;
label_AB48:;
    /* $AB48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB48); return;
label_AB49:;
    /* $AB49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB49); return;
label_AB4A:;
    /* $AB4A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4A); return;
label_AB4B:;
    /* $AB4B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB4D; }
label_AB4D:;
    /* $AB4D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB4F; }
label_AB4F:;
    /* $AB4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4F); return;
label_AB50:;
    /* $AB50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB50); return;
label_AB51:;
    /* $AB51: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAB51; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB52:;
    /* $AB52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB52); return;
label_AB53:;
    /* $AB53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB53); return;
label_AB54:;
    /* $AB54: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB55:;
    /* $AB55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB55); return;
label_AB56:;
    /* $AB56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB56); return;
label_AB57:;
    /* $AB57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB57); return;
label_AB58:;
    /* $AB58: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B5A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0008, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB58, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB5B:; /* main_bolton_and_nutton */
    /* $AB5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5B); return;
label_AB5C:;
    /* $AB5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5C); return;
label_AB5D:;
    /* $AB5D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB5E:;
    /* $AB5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5E); return;
label_AB5F:;
    /* $AB5F: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0B81), 5); return; }
label_AB61:;
    /* $AB61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB61); return;
label_AB62:;
    /* $AB62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB62); return;
label_AB63:;
    /* $AB63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB63); return;
label_AB64:;
    /* $AB64: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB64); return;
label_AB65:;
    /* $AB65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB65); return;
label_AB66:;
    /* $AB66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB66); return;
label_AB67:;
    /* $AB67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB67); return;
label_AB68:;
    /* $AB68: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB68); return;
label_AB69:;
    /* $AB69: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAB69; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB6A:;
    /* $AB6A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB6A); return;
label_AB6B:;
    /* $AB6B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B6D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB6B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB6E:;
    /* $AB6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB6E); return;
label_AB6F:;
    /* $AB6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB6F); return;
label_AB70:;
    /* $AB70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB70); return;
label_AB71:;
    /* $AB71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB71); return;
label_AB72:;
    /* $AB72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB72); return;
label_AB73:;
    /* $AB73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB73); return;
label_AB74:;
    /* $AB74: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB74); return;
label_AB75:;
    /* $AB75: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB76:;
    /* $AB76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB76); return;
label_AB77:;
    /* $AB77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB77); return;
label_AB78:;
    /* $AB78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB78); return;
label_AB79:;
    /* $AB79: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB7B:;
    /* $AB7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB7B); return;
label_AB7C:;
    /* $AB7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB7C); return;
label_AB7D:;
    /* $AB7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB7D); return;
label_AB7E:;
    /* $AB7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB7E); return;
label_AB7F:;
    /* $AB7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB7F); return;
label_AB80:;
    /* $AB80: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B82); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB80, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB83:;
    /* $AB83: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB83); return;
label_AB84:;
    /* $AB84: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB85:;
    /* $AB85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB85); return;
label_AB86:;
    /* $AB86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB86); return;
label_AB87:;
    /* $AB87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB87); return;
label_AB88:;
    /* $AB88: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB88); return;
label_AB89:;
    /* $AB89: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAB89; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB8A:;
    /* $AB8A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB8A); return;
label_AB8B:;
    /* $AB8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB8B); return;
label_AB8C:;
    /* $AB8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB8C); return;
label_AB8D:;
    /* $AB8D: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AB8E:;
    /* $AB8E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB90:;
    /* $AB90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB90); return;
label_AB91:;
    /* $AB91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB91); return;
label_AB92:;
    /* $AB92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB92); return;
label_AB93:;
    /* $AB93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB93); return;
label_AB94:;
    /* $AB94: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B96); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0280, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB94, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB97:;
    /* $AB97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB97); return;
label_AB98:;
    /* $AB98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB98); return;
label_AB99:;
    /* $AB99: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB9A:;
    /* $AB9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9A); return;
label_AB9B:;
    /* $AB9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9B); return;
label_AB9C:;
    /* $AB9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9C); return;
label_AB9D:;
    /* $AB9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9D); return;
label_AB9E:;
    /* $AB9E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ABA0:;
    /* $ABA0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA0); return;
label_ABA1:;
    /* $ABA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA1); return;
label_ABA2:;
    /* $ABA2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ABA3:;
    /* $ABA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA3); return;
label_ABA4:;
    /* $ABA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA4); return;
label_ABA5:;
    /* $ABA5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ABA6:;
    /* $ABA6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA6); return;
label_ABA7:;
    /* $ABA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA7); return;
label_ABA8:;
    /* $ABA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA8); return;
label_ABA9:;
    /* $ABA9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABA9); return;
label_ABAA:;
    /* $ABAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAA); return;
label_ABAB:;
    /* $ABAB: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ABAD:;
    /* $ABAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAD); return;
label_ABAE:;
    /* $ABAE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BB0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xABAE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ABB1:;
    /* $ABB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB1); return;
label_ABB2:;
    /* $ABB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB2); return;
label_ABB3:;
    /* $ABB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB3); return;
label_ABB4:;
    /* $ABB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB4); return;
label_ABB5:;
    /* $ABB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB5); return;
label_ABB6:;
    /* $ABB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB6); return;
label_ABB7:;
    /* $ABB7: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xABB7; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ABB8:;
    /* $ABB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB8); return;
label_ABB9:;
    /* $ABB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB9); return;
label_ABBA:;
    /* $ABBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBA); return;
label_ABBB:;
    /* $ABBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBB); return;
label_ABBC:;
    /* $ABBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBC); return;
label_ABBD:;
    /* $ABBD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABBE:;
    /* $ABBE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABBF:;
    /* $ABBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBF); return;
label_ABC0:;
    /* $ABC0: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x35 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABC2:;
    /* $ABC2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC2); return;
label_ABC3:;
    /* $ABC3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC3); return;
label_ABC4:;
    /* $ABC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC4); return;
label_ABC5:;
    /* $ABC5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABC7:;
    /* $ABC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC7); return;
label_ABC8:;
    /* $ABC8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC8); return;
label_ABC9:;
    /* $ABC9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABC9); return;
label_ABCA:;
    /* $ABCA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCA); return;
label_ABCB:;
    /* $ABCB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCB); return;
label_ABCC:;
    /* $ABCC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCC); return;
label_ABCD:;
    /* $ABCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCD); return;
label_ABCE:;
    /* $ABCE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCE); return;
label_ABCF:;
    /* $ABCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCF); return;
label_ABD0:;
    /* $ABD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD0); return;
label_ABD1:;
    /* $ABD1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BD3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xABD1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ABD4:;
    /* $ABD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD4); return;
label_ABD5:;
    /* $ABD5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABD6:;
    /* $ABD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD6); return;
label_ABD7:;
    /* $ABD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD7); return;
label_ABD8:;
    /* $ABD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD8); return;
label_ABD9:;
    /* $ABD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD9); return;
label_ABDA:;
    /* $ABDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDA); return;
label_ABDB:;
    /* $ABDB: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xABDB; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ABDC:;
    /* $ABDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDC); return;
label_ABDD:;
    /* $ABDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDD); return;
label_ABDE:;
    /* $ABDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDE); return;
label_ABDF:;
    /* $ABDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDF); return;
label_ABE0:;
    /* $ABE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE0); return;
label_ABE1:;
    /* $ABE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE1); return;
label_ABE2:;
    /* $ABE2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE2); return;
label_ABE3:;
    /* $ABE3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ABE5:;
    /* $ABE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE5); return;
label_ABE6:;
    /* $ABE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE6); return;
label_ABE7:;
    /* $ABE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE7); return;
label_ABE8:;
    /* $ABE8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABE8); return;
label_ABE9:;
    /* $ABE9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABEB:;
    /* $ABEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABEB); return;
label_ABEC:;
    /* $ABEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABEC); return;
label_ABED:;
    /* $ABED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABED); return;
label_ABEE:;
    /* $ABEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABEE); return;
label_ABEF:;
    /* $ABEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABEF); return;
label_ABF0:;
    /* $ABF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF0); return;
label_ABF1:;
    /* $ABF1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF1); return;
label_ABF2:;
    /* $ABF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF2); return;
label_ABF3:;
    /* $ABF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF3); return;
label_ABF4:;
    /* $ABF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF4); return;
label_ABF5:;
    /* $ABF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF5); return;
label_ABF6:;
    /* $ABF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF6); return;
label_ABF7:;
    /* $ABF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF7); return;
label_ABF8:;
    /* $ABF8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF8); return;
label_ABF9:;
    /* $ABF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABF9); return;
label_ABFA:;
    /* $ABFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFA); return;
label_ABFB:;
    /* $ABFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFB); return;
label_ABFC:;
    /* $ABFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFC); return;
label_ABFD:;
    /* $ABFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFD); return;
label_ABFE:;
    /* $ABFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFE); return;
label_ABFF:;
    /* $ABFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFF); return;
label_AC00:;
    /* $AC00: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_AC22; }
label_AC02:;
    /* $AC02: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC04:;
    /* $AC04: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC05:;
    /* $AC05: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ABD7;
    }
label_AC07:;
    /* $AC07: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_AC39; }
label_AC09:;
    /* $AC09: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C83), 5); return; }
label_AC0B:;
    /* $AC0B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AC0C:;
    /* $AC0C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC0D:;
    /* $AC0D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB97;
    }
label_AC0F:;
    /* $AC0F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC10:;
    /* $AC10: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC11:;
    /* $AC11: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C83), 5); return; }
label_AC13:;
    /* $AC13: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC14:;
    /* $AC14: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C06), 5); return; }
label_AC16:;
    /* $AC16: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_AC48; }
label_AC18:;
    /* $AC18: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_AC8A; }
label_AC1A:;
    /* $AC1A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC1B:;
    /* $AC1B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AC91; }
label_AC1D:;
    /* $AC1D: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD868); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AC20:;
    /* $AC20: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x98; g_cpu.C=(g_cpu.Y>=0x98)?1:0; FLAG_NZ(r&0xFF); }
label_AC22:;
    /* $AC22: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC23:;
    /* $AC23: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC25:;
    /* $AC25: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_AC26:;
    /* $AC26: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AC27:;
    /* $AC27: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x38 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC29:;
    /* $AC29: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AC2A:;
    /* $AC2A: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x18 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_AC2C:;
    /* $AC2C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC2D:;
    /* $AC2D: 8C */ maybe_trigger_vblank(4); nes_write(0xE4B8, g_cpu.Y);
label_AC30:;
    /* $AC30: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC31:;
    /* $AC31: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AC32:;
    /* $AC32: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AC33:;
    /* $AC33: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AC34:;
    /* $AC34: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AC35:;
    /* $AC35: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_AC37:;
    /* $AC37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC37); return;
label_AC38:;
    /* $AC38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC38); return;
label_AC39:;
    /* $AC39: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC3B:;
    /* $AC3B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC3D:;
    /* $AC3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3D); return;
label_AC3E:;
    /* $AC3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3E); return;
label_AC3F:;
    /* $AC3F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC41:;
    /* $AC41: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC43:;
    /* $AC43: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC43); return;
label_AC44:;
    /* $AC44: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C46); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC44, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC47:;
    /* $AC47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC47); return;
label_AC48:;
    /* $AC48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC48); return;
label_AC49:;
    /* $AC49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC49); return;
label_AC4A:;
    /* $AC4A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C4C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC4A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC4D:;
    /* $AC4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4D); return;
label_AC4E:;
    /* $AC4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4E); return;
label_AC4F:;
    /* $AC4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4F); return;
label_AC50:;
    /* $AC50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC50); return;
label_AC51:;
    /* $AC51: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC53:;
    /* $AC53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC53); return;
label_AC54:;
    /* $AC54: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC54; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC55:;
    /* $AC55: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC57:;
    /* $AC57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC57); return;
label_AC58:;
    /* $AC58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC58); return;
label_AC59:;
    /* $AC59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC59); return;
label_AC5A:;
    /* $AC5A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C5C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0010, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC5A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC5D:;
    /* $AC5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5D); return;
label_AC5E:;
    /* $AC5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5E); return;
label_AC5F:;
    /* $AC5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5F); return;
label_AC60:;
    /* $AC60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC60); return;
label_AC61:;
    /* $AC61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC61); return;
label_AC62:;
    /* $AC62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC62); return;
label_AC63:;
    /* $AC63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC63); return;
label_AC64:;
    /* $AC64: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC66:;
    /* $AC66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC66); return;
label_AC67:;
    /* $AC67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC67); return;
label_AC68:;
    /* $AC68: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_AC6A:;
    /* $AC6A: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC6A; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC6B:;
    /* $AC6B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6B); return;
label_AC6C:;
    /* $AC6C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6C); return;
label_AC6D:;
    /* $AC6D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC6D; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC6E:;
    /* $AC6E: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC70:;
    /* $AC70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC70); return;
label_AC71:;
    /* $AC71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC71); return;
label_AC72:;
    /* $AC72: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC72; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC73:;
    /* $AC73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC73); return;
label_AC74:;
    /* $AC74: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC75:;
    /* $AC75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC75); return;
label_AC76:;
    /* $AC76: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC76; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC77:;
    /* $AC77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC77); return;
label_AC78:;
    /* $AC78: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C7A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0800, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC78, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC7B:;
    /* $AC7B: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC7B; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC7C:;
    /* $AC7C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x80); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC7E:;
    /* $AC7E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC7F:;
    /* $AC7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7F); return;
label_AC80:;
    /* $AC80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC80); return;
label_AC81:;
    /* $AC81: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC81); return;
label_AC82:;
    /* $AC82: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC84:;
    /* $AC84: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC84); return;
label_AC85:;
    /* $AC85: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC87:;
    /* $AC87: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC8B; }
label_AC89:;
    /* $AC89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC89); return;
label_AC8A:;
    /* $AC8A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8A); return;
label_AC8B:;
    /* $AC8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8B); return;
label_AC8C:;
    /* $AC8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8C); return;
label_AC8D:;
    /* $AC8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8D); return;
label_AC8E:;
    /* $AC8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8E); return;
label_AC8F:;
    /* $AC8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC8F); return;
label_AC90:;
    /* $AC90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC90); return;
label_AC91:;
    /* $AC91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC91); return;
label_AC92:;
    /* $AC92: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C94); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAC92, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AC95:;
    /* $AC95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC95); return;
label_AC96:;
    /* $AC96: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC98:;
    /* $AC98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC98); return;
label_AC99:;
    /* $AC99: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC9B:;
    /* $AC9B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC9D:;
    /* $AC9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9D); return;
label_AC9E:;
    /* $AC9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9E); return;
label_AC9F:;
    /* $AC9F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA1:;
    /* $ACA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA1); return;
label_ACA2:;
    /* $ACA2: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA4:;
    /* $ACA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA4); return;
label_ACA5:;
    /* $ACA5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACA7:;
    /* $ACA7: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACA7; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACA8:;
    /* $ACA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA8); return;
label_ACA9:;
    /* $ACA9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ACEB; }
label_ACAB:;
    /* $ACAB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x31); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACAD:;
    /* $ACAD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACAF:;
    /* $ACAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAF); return;
label_ACB0:;
    /* $ACB0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ACB1:;
    /* $ACB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB1); return;
label_ACB2:;
    /* $ACB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB2); return;
label_ACB3:;
    /* $ACB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB3); return;
label_ACB4:;
    /* $ACB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB4); return;
label_ACB5:;
    /* $ACB5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACB7:;
    /* $ACB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB7); return;
label_ACB8:;
    /* $ACB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB8); return;
label_ACB9:;
    /* $ACB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB9); return;
label_ACBA:;
    /* $ACBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBA); return;
label_ACBB:;
    /* $ACBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBB); return;
label_ACBC:;
    /* $ACBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBC); return;
label_ACBD:;
    /* $ACBD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ACC9; }
label_ACBF:;
    /* $ACBF: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACBF; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACC0:;
    /* $ACC0: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC2:;
    /* $ACC2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACC4:;
    /* $ACC4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ACC7; }
label_ACC6:;
    /* $ACC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC6); return;
label_ACC7:;
    /* $ACC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC7); return;
label_ACC8:;
    /* $ACC8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC8); return;
label_ACC9:;
    /* $ACC9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACC9; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACCA:;
    /* $ACCA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCA); return;
label_ACCB:;
    /* $ACCB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCB); return;
label_ACCC:;
    /* $ACCC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCC); return;
label_ACCD:;
    /* $ACCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCD); return;
label_ACCE:;
    /* $ACCE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0CD5), 5); return; }
label_ACD0:;
    /* $ACD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD0); return;
label_ACD1:;
    /* $ACD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD1); return;
label_ACD2:;
    /* $ACD2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ACD4; }
label_ACD4:;
    /* $ACD4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACD6:;
    /* $ACD6: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0000); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACD9:;
    /* $ACD9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACDB:;
    /* $ACDB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDB); return;
label_ACDC:;
    /* $ACDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDC); return;
label_ACDD:;
    /* $ACDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDD); return;
label_ACDE:;
    /* $ACDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDE); return;
label_ACDF:;
    /* $ACDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACDF); return;
label_ACE0:;
    /* $ACE0: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACE2:;
    /* $ACE2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ACE4; }
label_ACE4:;
    /* $ACE4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE6:;
    /* $ACE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE6); return;
label_ACE7:;
    /* $ACE7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACE9:;
    /* $ACE9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACEB:;
    /* $ACEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEB); return;
label_ACEC:;
    /* $ACEC: 94 */ maybe_trigger_vblank(4); nes_write((0x00 + g_cpu.X) & 0xFF, g_cpu.Y);
label_ACEE:;
    /* $ACEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEE); return;
label_ACEF:;
    /* $ACEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACEF); return;
label_ACF0:;
    /* $ACF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF0); return;
label_ACF1:;
    /* $ACF1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF1); return;
label_ACF2:;
    /* $ACF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF2); return;
label_ACF3:;
    /* $ACF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF3); return;
label_ACF4:;
    /* $ACF4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACF5:;
    /* $ACF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF5); return;
label_ACF6:;
    /* $ACF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF6); return;
label_ACF7:;
    /* $ACF7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACF9:;
    /* $ACF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF9); return;
label_ACFA:;
    /* $ACFA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CFC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8040, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xACFA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ACFD:;
    /* $ACFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFD); return;
label_ACFE:;
    /* $ACFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFE); return;
label_ACFF:;
    /* $ACFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFF); return;
label_AD00:;
    /* $AD00: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AD01:;
    /* $AD01: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AD02:;
    /* $AD02: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AD03:;
    /* $AD03: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AD04:;
    /* $AD04: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AD05:;
    /* $AD05: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AD06:;
    /* $AD06: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AD07:;
    /* $AD07: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AD08:;
    /* $AD08: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AD09:; /* main_have_su_bee */
    /* $AD09: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD0A:;
    /* $AD0A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D0C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xB458, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD0A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD0D:;
    /* $AD0D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AD0E:;
    /* $AD0E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AD0F:;
    /* $AD0F: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x34 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD11:;
    /* $AD11: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_AD12:;
    /* $AD12: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_AD13:;
    /* $AD13: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AC9D;
    }
label_AD15:;
    /* $AD15: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AD16:;
    /* $AD16: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AD17:;
    /* $AD17: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AD18:;
    /* $AD18: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_AD19:;
    /* $AD19: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD1A:;
    /* $AD1A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD84; }
label_AD1C:;
    /* $AD1C: 94 */ maybe_trigger_vblank(4); nes_write((0x74 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AD1E:;
    /* $AD1E: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_AD1F:;
    /* $AD1F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AD20:;
    /* $AD20: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0CDA), 5); return; }
label_AD22:;
    /* $AD22: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ACB4;
    }
label_AD24:;
    /* $AD24: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_AD2A; }
label_AD26:;
    /* $AD26: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD28:;
    /* $AD28: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD2A:;
    /* $AD2A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AD2B:;
    /* $AD2B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD2D:;
    /* $AD2D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AD2E:;
    /* $AD2E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xB8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD30:;
    /* $AD30: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCBC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AD33:;
    /* $AD33: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB060 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AD36:;
    /* $AD36: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0050 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD39:;
    /* $AD39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD39); return;
label_AD3A:;
    /* $AD3A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D3C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0001, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD3A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD3D:;
    /* $AD3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3D); return;
label_AD3E:;
    /* $AD3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3E); return;
label_AD3F:;
    /* $AD3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3F); return;
label_AD40:;
    /* $AD40: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD42:;
    /* $AD42: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D44); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0440, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD42, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD45:;
    /* $AD45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD45); return;
label_AD46:;
    /* $AD46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD46); return;
label_AD47:;
    /* $AD47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD47); return;
label_AD48:;
    /* $AD48: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AD49:;
    /* $AD49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD49); return;
label_AD4A:;
    /* $AD4A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4A); return;
label_AD4B:;
    /* $AD4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4B); return;
label_AD4C:;
    /* $AD4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4C); return;
label_AD4D:;
    /* $AD4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4D); return;
label_AD4E:;
    /* $AD4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4E); return;
label_AD4F:;
    /* $AD4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4F); return;
label_AD50:;
    /* $AD50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD50); return;
label_AD51:;
    /* $AD51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD51); return;
label_AD52:;
    /* $AD52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD52); return;
label_AD53:;
    /* $AD53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD53); return;
label_AD54:;
    /* $AD54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD54); return;
label_AD55:;
    /* $AD55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD55); return;
label_AD56:;
    /* $AD56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD56); return;
label_AD57:;
    /* $AD57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD57); return;
label_AD58:;
    /* $AD58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD58); return;
label_AD59:;
    /* $AD59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD59); return;
label_AD5A:;
    /* $AD5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5A); return;
label_AD5B:;
    /* $AD5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5B); return;
label_AD5C:;
    /* $AD5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5C); return;
label_AD5D:;
    /* $AD5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5D); return;
label_AD5E:;
    /* $AD5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5E); return;
label_AD5F:;
    /* $AD5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5F); return;
label_AD60:;
    /* $AD60: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD61:;
    /* $AD61: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x11); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD63:;
    /* $AD63: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD65; }
label_AD65:;
    /* $AD65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD65); return;
label_AD66:;
    /* $AD66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD66); return;
label_AD67:;
    /* $AD67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD67); return;
label_AD68:;
    /* $AD68: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD68); return;
label_AD69:;
    /* $AD69: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD69); return;
label_AD6A:;
    /* $AD6A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD6C; }
label_AD6C:;
    /* $AD6C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6C); return;
label_AD6D:;
    /* $AD6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6D); return;
label_AD6E:;
    /* $AD6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6E); return;
label_AD6F:;
    /* $AD6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6F); return;
label_AD70:;
    /* $AD70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD70); return;
label_AD71:;
    /* $AD71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD71); return;
label_AD72:;
    /* $AD72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD72); return;
label_AD73:;
    /* $AD73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD73); return;
label_AD74:;
    /* $AD74: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD74); return;
label_AD75:;
    /* $AD75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD75); return;
label_AD76:;
    /* $AD76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD76); return;
label_AD77:;
    /* $AD77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD77); return;
label_AD78:;
    /* $AD78: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x44 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD7A:;
    /* $AD7A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7B:;
    /* $AD7B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD7D:;
    /* $AD7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7D); return;
label_AD7E:;
    /* $AD7E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD7F:;
    /* $AD7F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAD7F; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD80:;
    /* $AD80: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D82); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2044, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD80, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD83:;
    /* $AD83: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD83); return;
label_AD84:;
    /* $AD84: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD84); return;
label_AD85:;
    /* $AD85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD85); return;
label_AD86:;
    /* $AD86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD86); return;
label_AD87:;
    /* $AD87: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD89; }
label_AD89:;
    /* $AD89: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAD89; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD8A:;
    /* $AD8A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD8C; }
label_AD8C:;
    /* $AD8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8C); return;
label_AD8D:;
    /* $AD8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8D); return;
label_AD8E:;
    /* $AD8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8E); return;
label_AD8F:;
    /* $AD8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8F); return;
label_AD90:;
    /* $AD90: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD92:;
    /* $AD92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD92); return;
label_AD93:;
    /* $AD93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD93); return;
label_AD94:;
    /* $AD94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD94); return;
label_AD95:;
    /* $AD95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD95); return;
label_AD96:;
    /* $AD96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD96); return;
label_AD97:;
    /* $AD97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD97); return;
label_AD98:;
    /* $AD98: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD9A; }
label_AD9A:;
    /* $AD9A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD9B:;
    /* $AD9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9B); return;
label_AD9C:;
    /* $AD9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9C); return;
label_AD9D:;
    /* $AD9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9D); return;
label_AD9E:;
    /* $AD9E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD9F:;
    /* $AD9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9F); return;
label_ADA0:;
    /* $ADA0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADA2:;
    /* $ADA2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA2); return;
label_ADA3:;
    /* $ADA3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ADC5; }
label_ADA5:;
    /* $ADA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA5); return;
label_ADA6:;
    /* $ADA6: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ADA7:;
    /* $ADA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA7); return;
label_ADA8:;
    /* $ADA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA8); return;
label_ADA9:;
    /* $ADA9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAB:;
    /* $ADAB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAB); return;
label_ADAC:;
    /* $ADAC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAC); return;
label_ADAD:;
    /* $ADAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAD); return;
label_ADAE:;
    /* $ADAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAE); return;
label_ADAF:;
    /* $ADAF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADB1:;
    /* $ADB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB1); return;
label_ADB2:;
    /* $ADB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB2); return;
label_ADB3:;
    /* $ADB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB3); return;
label_ADB4:;
    /* $ADB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB4); return;
label_ADB5:;
    /* $ADB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB5); return;
label_ADB6:;
    /* $ADB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB6); return;
label_ADB7:;
    /* $ADB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB7); return;
label_ADB8:;
    /* $ADB8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ADB9:;
    /* $ADB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB9); return;
label_ADBA:;
    /* $ADBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBA); return;
label_ADBB:;
    /* $ADBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBB); return;
label_ADBC:;
    /* $ADBC: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ADBE; }
label_ADBE:;
    /* $ADBE: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xADBE; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ADBF:;
    /* $ADBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBF); return;
label_ADC0:;
    /* $ADC0: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ADC2:;
    /* $ADC2: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADC4:;
    /* $ADC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC4); return;
label_ADC5:;
    /* $ADC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC5); return;
label_ADC6:;
    /* $ADC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC6); return;
label_ADC7:;
    /* $ADC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC7); return;
label_ADC8:;
    /* $ADC8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ADC9:;
    /* $ADC9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC9); return;
label_ADCA:;
    /* $ADCA: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ADCB:;
    /* $ADCB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCB); return;
label_ADCC:;
    /* $ADCC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCC); return;
label_ADCD:;
    /* $ADCD: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_ADCF:;
    /* $ADCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCF); return;
label_ADD0:;
    /* $ADD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD0); return;
label_ADD1:;
    /* $ADD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD1); return;
label_ADD2:;
    /* $ADD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD2); return;
label_ADD3:;
    /* $ADD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD3); return;
label_ADD4:;
    /* $ADD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD4); return;
label_ADD5:;
    /* $ADD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD5); return;
label_ADD6:;
    /* $ADD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD6); return;
label_ADD7:;
    /* $ADD7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x08); FLAG_NZ(g_cpu.A);
label_ADD9:;
    /* $ADD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD9); return;
label_ADDA:;
    /* $ADDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDA); return;
label_ADDB:;
    /* $ADDB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ADDE; }
label_ADDD:;
    /* $ADDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDD); return;
label_ADDE:;
    /* $ADDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDE); return;
label_ADDF:;
    /* $ADDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDF); return;
label_ADE0:;
    /* $ADE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE0); return;
label_ADE1:;
    /* $ADE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE1); return;
label_ADE2:;
    /* $ADE2: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x01 + g_cpu.X) & 0xFF), g_cpu.A);
label_ADE4:;
    /* $ADE4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE4); return;
label_ADE5:;
    /* $ADE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE5); return;
label_ADE6:;
    /* $ADE6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ADE7:;
    /* $ADE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE7); return;
label_ADE8:;
    /* $ADE8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE8); return;
label_ADE9:;
    /* $ADE9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE9); return;
label_ADEA:;
    /* $ADEA: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xADEA; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ADEB:;
    /* $ADEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEB); return;
label_ADEC:;
    /* $ADEC: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xADEC; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ADED:;
    /* $ADED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADED); return;
label_ADEE:;
    /* $ADEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEE); return;
label_ADEF:;
    /* $ADEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEF); return;
label_ADF0:;
    /* $ADF0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADF2:;
    /* $ADF2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ADF3:;
    /* $ADF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF3); return;
label_ADF4:;
    /* $ADF4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0DF6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0004, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADF4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADF7:;
    /* $ADF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF7); return;
label_ADF8:;
    /* $ADF8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF8); return;
label_ADF9:;
    /* $ADF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF9); return;
label_ADFA:;
    /* $ADFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFA); return;
label_ADFB:;
    /* $ADFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFB); return;
label_ADFC:;
    /* $ADFC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ADFD:;
    /* $ADFD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x12); FLAG_NZ(g_cpu.A);
label_ADFF:;
    /* $ADFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFF); return;
label_AE00:;
    /* $AE00: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE02:;
    /* $AE02: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x13 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE04:;
    /* $AE04: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE06:;
    /* $AE06: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE08:;
    /* $AE08: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE09:;
    /* $AE09: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE0A:;
    /* $AE0A: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AE0B:;
    /* $AE0B: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE0C:;
    /* $AE0C: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x5A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE0E:;
    /* $AE0E: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AE0F:;
    /* $AE0F: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE11:;
    /* $AE11: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE12:;
    /* $AE12: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE13:;
    /* $AE13: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AE14:;
    /* $AE14: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE15:;
    /* $AE15: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE16:;
    /* $AE16: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE17:;
    /* $AE17: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE18:;
    /* $AE18: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE19:;
    /* $AE19: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE1A:;
    /* $AE1A: 3A */ maybe_trigger_vblank(2); /* NOP */
label_AE1B:;
    /* $AE1B: 5A */ maybe_trigger_vblank(2); /* NOP */
label_AE1C:;
    /* $AE1C: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AE1E:;
    /* $AE1E: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x36 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE20:;
    /* $AE20: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x50; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_AE22:;
    /* $AE22: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE24:;
    /* $AE24: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x38 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AE26:;
    /* $AE26: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AE27:;
    /* $AE27: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x38; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE29:;
    /* $AE29: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AE2A:;
    /* $AE2A: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x38; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE2C:;
    /* $AE2C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AE2D:;
    /* $AE2D: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x38; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE2F:;
    /* $AE2F: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x53; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE31:;
    /* $AE31: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE33:;
    /* $AE33: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5C) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE35:;
    /* $AE35: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x00FF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AE38:;
    /* $AE38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE38); return;
label_AE39:;
    /* $AE39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE39); return;
label_AE3A:;
    /* $AE3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3A); return;
label_AE3B:;
    /* $AE3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3B); return;
label_AE3C:;
    /* $AE3C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_AE3E:;
    /* $AE3E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE3F:;
    /* $AE3F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x10 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE41:;
    /* $AE41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE41); return;
label_AE42:;
    /* $AE42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE42); return;
label_AE43:;
    /* $AE43: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AE45; }
label_AE45:;
    /* $AE45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE45); return;
label_AE46:;
    /* $AE46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE46); return;
label_AE47:;
    /* $AE47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE47); return;
label_AE48:;
    /* $AE48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE48); return;
label_AE49:;
    /* $AE49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE49); return;
label_AE4A:;
    /* $AE4A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AE4B:;
    /* $AE4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4B); return;
label_AE4C:;
    /* $AE4C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_AE4E:;
    /* $AE4E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AE4F:;
    /* $AE4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4F); return;
label_AE50:;
    /* $AE50: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE52:;
    /* $AE52: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE54:;
    /* $AE54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE54); return;
label_AE55:;
    /* $AE55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE55); return;
label_AE56:;
    /* $AE56: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE57:;
    /* $AE57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE57); return;
label_AE58:;
    /* $AE58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE58); return;
label_AE59:;
    /* $AE59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE59); return;
label_AE5A:;
    /* $AE5A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE5C:;
    /* $AE5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5C); return;
label_AE5D:;
    /* $AE5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5D); return;
label_AE5E:;
    /* $AE5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5E); return;
label_AE5F:;
    /* $AE5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5F); return;
label_AE60:;
    /* $AE60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE60); return;
label_AE61:;
    /* $AE61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE61); return;
label_AE62:;
    /* $AE62: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AE63:;
    /* $AE63: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE65:;
    /* $AE65: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AE67; }
label_AE67:;
    /* $AE67: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE69:;
    /* $AE69: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE69); return;
label_AE6A:;
    /* $AE6A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE6A); return;
label_AE6B:;
    /* $AE6B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE6D:;
    /* $AE6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE6D); return;
label_AE6E:;
    /* $AE6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE6E); return;
label_AE6F:;
    /* $AE6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE6F); return;
label_AE70:;
    /* $AE70: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AE72:;
    /* $AE72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E74); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0810, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE75:;
    /* $AE75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE75); return;
label_AE76:;
    /* $AE76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE76); return;
label_AE77:;
    /* $AE77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE77); return;
label_AE78:;
    /* $AE78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE78); return;
label_AE79:;
    /* $AE79: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0E9D), 5); return; }
label_AE7B:;
    /* $AE7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7B); return;
label_AE7C:;
    /* $AE7C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AE7D:;
    /* $AE7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7D); return;
label_AE7E:;
    /* $AE7E: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE80:;
    /* $AE80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE80); return;
label_AE81:;
    /* $AE81: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE81); return;
label_AE82:;
    /* $AE82: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE82); return;
label_AE83:;
    /* $AE83: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE83); return;
label_AE84:;
    /* $AE84: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE84); return;
label_AE85:;
    /* $AE85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE85); return;
label_AE86:;
    /* $AE86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE86); return;
label_AE87:;
    /* $AE87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE87); return;
label_AE88:;
    /* $AE88: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE88); return;
label_AE89:;
    /* $AE89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE89); return;
label_AE8A:;
    /* $AE8A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8A); return;
label_AE8B:;
    /* $AE8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8B); return;
label_AE8C:;
    /* $AE8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8C); return;
label_AE8D:;
    /* $AE8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8D); return;
label_AE8E:;
    /* $AE8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8E); return;
label_AE8F:;
    /* $AE8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8F); return;
label_AE90:;
    /* $AE90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE90); return;
label_AE91:;
    /* $AE91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE91); return;
label_AE92:;
    /* $AE92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE92); return;
label_AE93:;
    /* $AE93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE93); return;
label_AE94:;
    /* $AE94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE94); return;
label_AE95:;
    /* $AE95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE95); return;
label_AE96:;
    /* $AE96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE96); return;
label_AE97:;
    /* $AE97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE97); return;
label_AE98:;
    /* $AE98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE98); return;
label_AE99:;
    /* $AE99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE99); return;
label_AE9A:;
    /* $AE9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE9A); return;
label_AE9B:;
    /* $AE9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE9B); return;
label_AE9C:;
    /* $AE9C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AE9E:;
    /* $AE9E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE9F:;
    /* $AE9F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAE9F; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEA0:;
    /* $AEA0: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAEA0; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEA1:;
    /* $AEA1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA3:;
    /* $AEA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA3); return;
label_AEA4:;
    /* $AEA4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0EA6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2004, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAEA4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AEA7:;
    /* $AEA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA7); return;
label_AEA8:;
    /* $AEA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEA8); return;
label_AEA9:;
    /* $AEA9: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AEAD; }
label_AEAD:;
    /* $AEAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAD); return;
label_AEAE:;
    /* $AEAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAE); return;
label_AEAF:;
    /* $AEAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAF); return;
label_AEB0:;
    /* $AEB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB0); return;
label_AEB1:;
    /* $AEB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB1); return;
label_AEB2:;
    /* $AEB2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AEB4; }
label_AEB4:; /* bee_spawn_x_offset */
    /* $AEB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB4); return;
label_AEB5:;
    /* $AEB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB5); return;
label_AEB6:;
    /* $AEB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB6); return;
label_AEB7:;
    /* $AEB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB7); return;
label_AEB8:;
    /* $AEB8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEBA:;
    /* $AEBA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0EBC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAEBA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AEBD:;
    /* $AEBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBD); return;
label_AEBE:; /* bee_spawn_y_offset */
    /* $AEBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBE); return;
label_AEBF:;
    /* $AEBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBF); return;
label_AEC0:;
    /* $AEC0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEC2:;
    /* $AEC2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AEC8; }
label_AEC4:;
    /* $AEC4: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AEC6:;
    /* $AEC6: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AEC8:;
    /* $AEC8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC8); return;
label_AEC9:;
    /* $AEC9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEC9); return;
label_AECA:;
    /* $AECA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ECC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x6040, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAECA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AECD:;
    /* $AECD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECD); return;
label_AECE:;
    /* $AECE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECE); return;
label_AECF:;
    /* $AECF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAECF); return;
label_AED0:;
    /* $AED0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED0); return;
label_AED1:;
    /* $AED1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AED3:;
    /* $AED3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED3); return;
label_AED4:;
    /* $AED4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED4); return;
label_AED5:;
    /* $AED5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AED7; }
label_AED7:;
    /* $AED7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED7); return;
label_AED8:;
    /* $AED8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED8); return;
label_AED9:;
    /* $AED9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAED9); return;
label_AEDA:;
    /* $AEDA: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AEDC:;
    /* $AEDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDC); return;
label_AEDD:;
    /* $AEDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDD); return;
label_AEDE:;
    /* $AEDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDE); return;
label_AEDF:;
    /* $AEDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEDF); return;
label_AEE0:;
    /* $AEE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE0); return;
label_AEE1:;
    /* $AEE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE1); return;
label_AEE2:;
    /* $AEE2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0EE4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAEE2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AEE5:;
    /* $AEE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE5); return;
label_AEE6:;
    /* $AEE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE6); return;
label_AEE7:;
    /* $AEE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE7); return;
label_AEE8:;
    /* $AEE8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEEA:;
    /* $AEEA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEEA); return;
label_AEEB:;
    /* $AEEB: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAEEB; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEEC:;
    /* $AEEC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AEED:;
    /* $AEED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEED); return;
label_AEEE:;
    /* $AEEE: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AEEF:;
    /* $AEEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEEF); return;
label_AEF0:;
    /* $AEF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF0); return;
label_AEF1:;
    /* $AEF1: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAEF1; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEF2:;
    /* $AEF2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF4:;
    /* $AEF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF4); return;
label_AEF5:;
    /* $AEF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF5); return;
label_AEF6:;
    /* $AEF6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEF7:;
    /* $AEF7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEF9:;
    /* $AEF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF9); return;
label_AEFA:;
    /* $AEFA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AEFC:;
    /* $AEFC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AEFD:;
    /* $AEFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEFD); return;
label_AEFE:;
    /* $AEFE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F00); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAEFE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AF01:;
    /* $AF01: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF03:;
    /* $AF03: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF05:;
    /* $AF05: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AF06:;
    /* $AF06: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF08:;
    /* $AF08: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF0A:;
    /* $AF0A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_AF0C:;
    /* $AF0C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_AF0E:;
    /* $AF0E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_AF10:;
    /* $AF10: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF12:;
    /* $AF12: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF14:;
    /* $AF14: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x07; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF16:;
    /* $AF16: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF18:;
    /* $AF18: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AF19:;
    /* $AF19: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF1B:;
    /* $AF1B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF1D:;
    /* $AF1D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF1F:;
    /* $AF1F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AF20:;
    /* $AF20: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF21:;
    /* $AF21: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF23:;
    /* $AF23: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF25:;
    /* $AF25: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF27:;
    /* $AF27: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF28:;
    /* $AF28: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF28); return;
label_AF29:;
    /* $AF29: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF2B:;
    /* $AF2B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF2D:;
    /* $AF2D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF2F:;
    /* $AF2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF2F); return;
label_AF30:;
    /* $AF30: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x09); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF32:;
    /* $AF32: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AF34:;
    /* $AF34: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x090D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF37:;
    /* $AF37: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x06); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF39:;
    /* $AF39: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0E; FLAG_NZ(g_cpu.A);
label_AF3B:;
    /* $AF3B: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x100F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF3E:;
    /* $AF3E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x06; FLAG_NZ(g_cpu.A);
label_AF40:;
    /* $AF40: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AF41:;
    /* $AF41: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0E; FLAG_NZ(g_cpu.A);
label_AF43:;
    /* $AF43: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x100F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF46:;
    /* $AF46: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_AF48:;
    /* $AF48: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF49:;
    /* $AF49: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF4B:;
    /* $AF4B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF4D:;
    /* $AF4D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF4F:;
    /* $AF4F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF50:;
    /* $AF50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF50); return;
label_AF51:;
    /* $AF51: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF53:;
    /* $AF53: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AF54:;
    /* $AF54: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AF55:;
    /* $AF55: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF57:;
    /* $AF57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAF57); return;
label_AF58:;
    /* $AF58: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x09); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF5A:;
    /* $AF5A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF5C:;
    /* $AF5C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF5E:;
    /* $AF5E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_AF60:;
    /* $AF60: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF62:;
    /* $AF62: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF64:;
    /* $AF64: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF66:;
    /* $AF66: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x06; FLAG_NZ(g_cpu.A);
label_AF68:;
    /* $AF68: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF6A:;
    /* $AF6A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF6C:;
    /* $AF6C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AF6E:;
    /* $AF6E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x13; FLAG_NZ(g_cpu.A);
label_AF70:;
    /* $AF70: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x15 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF72:;
    /* $AF72: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF74:;
    /* $AF74: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x15; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AF76:;
    /* $AF76: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF78:;
    /* $AF78: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF7A:;
    /* $AF7A: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0E10 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF7D:;
    /* $AF7D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AF7E:;
    /* $AF7E: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0417 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF81:;
    /* $AF81: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AF82:;
    /* $AF82: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0E10 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF85:;
    /* $AF85: 1A */ maybe_trigger_vblank(2); /* NOP */
label_AF86:;
    /* $AF86: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0604 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF89:;
    /* $AF89: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x101D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AF8C:;
    /* $AF8C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1D1C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF8F:;
    /* $AF8F: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF91:;
    /* $AF91: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF93:;
    /* $AF93: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AFA3; }
label_AF95:;
    /* $AF95: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AF97:;
    /* $AF97: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AF99:;
    /* $AF99: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AF9A:;
    /* $AF9A: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AF9B:;
    /* $AF9B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0E; FLAG_NZ(g_cpu.A);
label_AF9D:;
    /* $AF9D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AF9F:;
    /* $AF9F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFA1:;
    /* $AFA1: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AFA3:;
    /* $AFA3: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AFA5:;
    /* $AFA5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AFA6:;
    /* $AFA6: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1F1E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFA9:;
    /* $AFA9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_AFAB:;
    /* $AFAB: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFAD:;
    /* $AFAD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FAF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x1F21, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFAD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFB0:;
    /* $AFB0: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AFB1:;
    /* $AFB1: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0E; FLAG_NZ(g_cpu.A);
label_AFB3:;
    /* $AFB3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AFB4:;
    /* $AFB4: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D1C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB7:;
    /* $AFB7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AFB8:;
    /* $AFB8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFB9:;
    /* $AFB9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0E; FLAG_NZ(g_cpu.A);
label_AFBB:;
    /* $AFBB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FBD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2021, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAFBB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AFBE:;
    /* $AFBE: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFC0:;
    /* $AFC0: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x09 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFC2:;
    /* $AFC2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0301; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC5:;
    /* $AFC5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AFC7:;
    /* $AFC7: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x091E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFCA:;
    /* $AFCA: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AFCB:;
    /* $AFCB: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AFCD:;
    /* $AFCD: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AFCF:;
    /* $AFCF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AFD0:;
    /* $AFD0: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x2409 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFD3:;
    /* $AFD3: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x09); FLAG_NZ(g_cpu.A);
label_AFD5:;
    /* $AFD5: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFD7:; /* main_wanaan */
    /* $AFD7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFD8:;
    /* $AFD8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AFD9:;
    /* $AFD9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x27; FLAG_NZ(g_cpu.A);
label_AFDB:;
    /* $AFDB: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AFDC:;
    /* $AFDC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x26; FLAG_NZ(g_cpu.A);
label_AFDE:;
    /* $AFDE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2A; FLAG_NZ(g_cpu.A);
label_AFE0:;
    /* $AFE0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AFE1:;
    /* $AFE1: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x27; FLAG_NZ(g_cpu.A);
label_AFE3:;
    /* $AFE3: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x2B; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFE5:;
    /* $AFE5: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x09); FLAG_NZ(g_cpu.A);
label_AFE7:;
    /* $AFE7: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AFE8:;
    /* $AFE8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAFE8); return;
label_AFE9:;
    /* $AFE9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x27; FLAG_NZ(g_cpu.A);
label_AFEB:;
    /* $AFEB: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2D0C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AFEE:;
    /* $AFEE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; FLAG_NZ(g_cpu.A);
label_AFF0:;
    /* $AFF0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x2E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFF2:;
    /* $AFF2: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x302F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AFF5:;
    /* $AFF5: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x0C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFF7:;
    /* $AFF7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x06 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AFF9:;
    /* $AFF9: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AFFA:;
    /* $AFFA: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x3333 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AFFD:;
    /* $AFFD: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AFFE:;
    /* $AFFE: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x3418 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B001:;
    /* $B001: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B003:;
    /* $B003: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B005:;
    /* $B005: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x142A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B008:;
    /* $B008: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B009:;
    /* $B009: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B00A:;
    /* $B00A: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B00B:;
    /* $B00B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B00C:;
    /* $B00C: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1208 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B00F:;
    /* $B00F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x3B3A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B012:;
    /* $B012: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3E3D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B015:;
    /* $B015: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B016:;
    /* $B016: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1F; FLAG_NZ(g_cpu.A);
label_B018:;
    /* $B018: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4140 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B01B:;
    /* $B01B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B01C:;
    /* $B01C: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B01E:;
    /* $B01E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B020:;
    /* $B020: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B022:;
    /* $B022: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x47; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B024:;
    /* $B024: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B025:;
    /* $B025: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B026:;
    /* $B026: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_B028:;
    /* $B028: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x49; FLAG_NZ(g_cpu.A);
label_B02A:;
    /* $B02A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B02B:;
    /* $B02B: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B02D:;
    /* $B02D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B02F:;
    /* $B02F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB02F); return;
label_B030:;
    /* $B030: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x3C4D, -1); return;
label_B0DA:;
    /* $B0DA: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0DC:;
    /* $B0DC: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0DE:;
    /* $B0DE: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x091F + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B0E1:;
    /* $B0E1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B0E3:;
    /* $B0E3: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0E5:;
    /* $B0E5: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x66 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0E7:;
    /* $B0E7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B0E8:;
    /* $B0E8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x75; FLAG_NZ(g_cpu.A);
label_B0EA:;
    /* $B0EA: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0EC:;
    /* $B0EC: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x7A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0EE:;
    /* $B0EE: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x2C0A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0F1:;
    /* $B0F1: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x65 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B0F3:;
    /* $B0F3: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B0F5:;
    /* $B0F5: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x007D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B0F8:;
    /* $B0F8: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B0FA:;
    /* $B0FA: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B0FC:;
    /* $B0FC: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x3333 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B0FF:;
    /* $B0FF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x09); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B101:;
    /* $B101: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B103:;
    /* $B103: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x7E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B105:;
    /* $B105: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B106:;
    /* $B106: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_B179; }
label_B108:;
    /* $B108: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x75; FLAG_NZ(g_cpu.A);
label_B10A:;
    /* $B10A: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B10C:;
    /* $B10C: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x2878; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B10F:;
    /* $B10F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; FLAG_NZ(g_cpu.A);
label_B111:;
    /* $B111: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B113:;
    /* $B113: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x70 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B115:;
    /* $B115: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B117:;
    /* $B117: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B119:;
    /* $B119: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B11B:;
    /* $B11B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x28 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B11D:;
    /* $B11D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x73; FLAG_NZ(g_cpu.A);
label_B11F:;
    /* $B11F: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B120:;
    /* $B120: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x75; FLAG_NZ(g_cpu.A);
label_B122:;
    /* $B122: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B124:;
    /* $B124: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B126:;
    /* $B126: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B128:;
    /* $B128: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x75; FLAG_NZ(g_cpu.A);
label_B12A:;
    /* $B12A: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B12C:;
    /* $B12C: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x7F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B12E:;
    /* $B12E: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B130:;
    /* $B130: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x15) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B132:;
    /* $B132: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x65); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B134:;
    /* $B134: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x65); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B136:;
    /* $B136: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x31 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B138:;
    /* $B138: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B139:;
    /* $B139: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B13A:;
    /* $B13A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B13C:;
    /* $B13C: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B13E:;
    /* $B13E: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x8032 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B141:;
    /* $B141: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B142:;
    /* $B142: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x11B5), 5); return; }
label_B144:;
    /* $B144: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x7E + g_cpu.X) & 0xFF), g_cpu.A);
label_B146:;
    /* $B146: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B147:;
    /* $B147: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x11B7), 5); return; }
label_B149:;
    /* $B149: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B14A:;
    /* $B14A: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B14B:;
    /* $B14B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; FLAG_NZ(g_cpu.A);
label_B14D:;
    /* $B14D: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x2878; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B150:;
    /* $B150: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x65 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B152:;
    /* $B152: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B154:;
    /* $B154: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x65 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B156:;
    /* $B156: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B158:;
    /* $B158: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B159:;
    /* $B159: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B15B:;
    /* $B15B: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x4118 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B15E:;
    /* $B15E: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B160:;
    /* $B160: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x4632 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B163:;
    /* $B163: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x1C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B165:;
    /* $B165: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B166:;
    /* $B166: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x21; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B168:;
    /* $B168: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B16A:;
    /* $B16A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B16B:;
    /* $B16B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B16D:;
    /* $B16D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B16E:;
    /* $B16E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B16F:;
    /* $B16F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x15 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B171:;
    /* $B171: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x65); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B173:;
    /* $B173: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x15 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B175:;
    /* $B175: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x65); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B177:;
    /* $B177: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B179:;
    /* $B179: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x41 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B17B:;
    /* $B17B: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x4118 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B17E:;
    /* $B17E: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x19 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B180:;
    /* $B180: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x80) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B182:;
    /* $B182: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B183:;
    /* $B183: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x11F6), 5); return; }
label_B185:;
    /* $B185: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B187:;
    /* $B187: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_B1B2; }
label_B189:;
    /* $B189: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x2878; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B18C:;
    /* $B18C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x6E; FLAG_NZ(g_cpu.A);
label_B18E:;
    /* $B18E: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B18F:;
    /* $B18F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B190:;
    /* $B190: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x70; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B192:;
    /* $B192: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B194:;
    /* $B194: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x70; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B196:;
    /* $B196: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B198:;
    /* $B198: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B199:;
    /* $B199: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x7329); FLAG_NZ(g_cpu.A);
label_B19C:;
    /* $B19C: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B19D:;
    /* $B19D: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x7329); FLAG_NZ(g_cpu.A);
label_B1A0:;
    /* $B1A0: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B1A2:;
    /* $B1A2: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x82; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B1A4:;
    /* $B1A4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B1A6:;
    /* $B1A6: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x82; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B1A8:;
    /* $B1A8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B1AA:;
    /* $B1AA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2D; FLAG_NZ(g_cpu.A);
label_B1AC:;
    /* $B1AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B1AE:;
    /* $B1AE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2D; FLAG_NZ(g_cpu.A);
label_B1B0:;
    /* $B1B0: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B2:;
    /* $B1B2: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B4:;
    /* $B1B4: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B6:;
    /* $B1B6: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B8:;
    /* $B1B8: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1B9:;
    /* $B1B9: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1BA:;
    /* $B1BA: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1BB:;
    /* $B1BB: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1BC:;
    /* $B1BC: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1BD:; /* main_mechakkero */
    /* $B1BD: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1BE:;
    /* $B1BE: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1BF:;
    /* $B1BF: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1C0:;
    /* $B1C0: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7675; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1C3:;
    /* $B1C3: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1C5:;
    /* $B1C5: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1C7:;
    /* $B1C7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x09); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B1C9:;
    /* $B1C9: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B1CB:;
    /* $B1CB: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1CD:;
    /* $B1CD: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1CF:;
    /* $B1CF: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B1D1:;
    /* $B1D1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B1D3:;
    /* $B1D3: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1D5:;
    /* $B1D5: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1D7:;
    /* $B1D7: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B1D9:;
    /* $B1D9: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B1DB:;
    /* $B1DB: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1DD:;
    /* $B1DD: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x15 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1DF:;
    /* $B1DF: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x09 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1E1:;
    /* $B1E1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B1E3:;
    /* $B1E3: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1E5:;
    /* $B1E5: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1E7:;
    /* $B1E7: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7509 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1EA:;
    /* $B1EA: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1EC:;
    /* $B1EC: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1EE:;
    /* $B1EE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3121 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1F1:;
    /* $B1F1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x76 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B1F3:;
    /* $B1F3: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1F5:;
    /* $B1F5: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1F7:;
    /* $B1F7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x32 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B1F9:;
    /* $B1F9: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B1FA:;
    /* $B1FA: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1FC:;
    /* $B1FC: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1FE:;
    /* $B1FE: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B200:;
    /* $B200: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B183;
    }
label_B202:;
    /* $B202: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x8409; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B205:;
    /* $B205: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B207:;
    /* $B207: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x28) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B209:;
    /* $B209: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x6E; FLAG_NZ(g_cpu.A);
label_B20B:;
    /* $B20B: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B20C:;
    /* $B20C: 84 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.Y);
label_B20E:;
    /* $B20E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x14; FLAG_NZ(g_cpu.A);
label_B210:;
    /* $B210: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x2B; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B212:;
    /* $B212: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1285), 5); return; }
label_B214:;
    /* $B214: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_B216:;
    /* $B216: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B217:;
    /* $B217: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x7826 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B21A:;
    /* $B21A: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B21B:;
    /* $B21B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x86; FLAG_NZ(g_cpu.A);
label_B21D:;
    /* $B21D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B21F:;
    /* $B21F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x090C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B222:;
    /* $B222: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x867F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B225:;
    /* $B225: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x87; FLAG_NZ(g_cpu.A);
label_B227:;
    /* $B227: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B228:;
    /* $B228: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B229:;
    /* $B229: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B22A:;
    /* $B22A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B22B:;
    /* $B22B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0C86); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B22E:;
    /* $B22E: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B230:;
    /* $B230: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B232:;
    /* $B232: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B234:;
    /* $B234: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x8908); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B237:;
    /* $B237: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB237); return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03B:; return;
label_B03D:; return;
label_B03F:; return;
label_B041:; return;
label_B043:; return;
label_B045:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04D:; return;
label_B04E:; return;
label_B04F:; return;
label_B050:; return;
label_B053:; return;
label_B054:; return;
label_B057:; return;
label_B058:; return;
label_B05B:; return;
label_B05E:; return;
label_B060:; return;
label_B061:; return;
label_B063:; return;
label_B065:; return;
label_B067:; return;
label_B069:; return;
label_B06B:; return;
label_B06D:; return;
label_B06F:; return;
label_B071:; return;
label_B073:; return;
label_B075:; return;
label_B077:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B086:; return;
label_B088:; return;
label_B08A:; return;
label_B08B:; return;
label_B08D:; return;
label_B08E:; return;
label_B090:; return;
label_B093:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09C:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A7:; return;
label_B0A9:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B1:; return;
label_B0B3:; return;
label_B0B6:; return;
label_B0B8:; return;
label_B0BA:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C2:; return;
label_B0C4:; return;
label_B0C6:; return;
label_B0C8:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D0:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D7:; return;
label_B238:; return;
label_B23A:; return;
label_B23C:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B244:; return;
label_B245:; return;
label_B247:; return;
label_B24A:; return;
label_B24D:; return;
label_B24E:; return;
label_B24F:; return;
label_B250:; return;
label_B252:; return;
label_B254:; return;
label_B256:; return;
label_B258:; return;
label_B25B:; return;
label_B25D:; return;
label_B25F:; return;
label_B260:; return;
label_B261:; return;
label_B263:; return;
label_B266:; return;
label_B267:; return;
label_B269:; return;
label_B26B:; return;
label_B26C:; return;
label_B26E:; return;
label_B270:; return;
label_B271:; return;
label_B273:; return;
label_B275:; return;
label_B277:; return;
label_B279:; return;
label_B27B:; return;
label_B27E:; return;
label_B280:; return;
label_B282:; return;
label_B284:; return;
label_B286:; return;
label_B289:; return;
label_B28B:; return;
label_B28C:; return;
label_B28D:; return;
label_B28F:; return;
label_B290:; return;
label_B293:; return;
label_B294:; return;
label_B297:; return;
label_B29A:; return;
label_B29C:; return;
label_B29E:; return;
label_B2A0:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A9:; return;
label_B2AB:; return;
label_B2AC:; return;
label_B2AE:; return;
label_B2B0:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B6:; return;
label_B2B9:; return;
label_B2BB:; return;
label_B2BD:; return;
label_B2BF:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CA:; return;
label_B2CB:; return;
label_B2CC:; return;
label_B2CD:; return;
label_B2CE:; return;
label_B2CF:; return;
label_B2D0:; return;
label_B2D2:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D8:; return;
label_B2DA:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E4:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2ED:; return;
label_B2EF:; return;
label_B2F1:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B2FF:; return;
label_B301:; return;
label_B303:; return;
label_B305:; return;
label_B307:; return;
label_B309:; return;
label_B30B:; return;
label_B30E:; return;
label_B310:; return;
label_B313:; return;
label_B314:; return;
label_B317:; return;
label_B319:; return;
label_B31A:; return;
label_B31B:; return;
label_B31D:; return;
label_B31E:; return;
label_B31F:; return;
label_B321:; return;
label_B324:; return;
label_B325:; return;
label_B328:; return;
label_B32B:; return;
label_B32C:; return;
label_B32E:; return;
label_B32F:; return;
label_B330:; return;
label_B332:; return;
label_B334:; return;
label_B336:; return;
label_B338:; return;
label_B339:; return;
label_B33B:; return;
label_B33E:; return;
label_B340:; return;
label_B342:; return;
label_B344:; return;
}

void func_A796_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A796_b5");
#endif
    func_A796_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABCE_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABCE_b5");
#endif
    func_A796_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9A8_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A8_b5");
#endif
    func_A796_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC9D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC9D_b5");
#endif
    func_A796_b5_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ACB4_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACB4_b5");
#endif
    func_A796_b5_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8DB_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8DB_b5");
#endif
    func_A796_b5_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA28_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA28_b5");
#endif
    func_A796_b5_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B005_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B005_b5");
#endif
    func_A796_b5_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A816_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A816_b5");
#endif
    func_A796_b5_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A798_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A798_b5");
#endif
    func_A796_b5_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A7FB_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7FB_b5");
#endif
    func_A796_b5_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA73_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA73_b5");
#endif
    func_A796_b5_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC18_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC18_b5");
#endif
    func_A796_b5_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A909_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A909_b5");
#endif
    func_A796_b5_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9B3_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B3_b5");
#endif
    func_A796_b5_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADEC_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADEC_b5");
#endif
    func_A796_b5_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE1A_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE1A_b5");
#endif
    func_A796_b5_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0DA_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0DA_b5");
#endif
    func_A796_b5_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A811_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A811_b5");
#endif
    func_A796_b5_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A83D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A83D_b5");
#endif
    func_A796_b5_body(19);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8A0_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8A0_b5");
#endif
    func_A796_b5_body(20);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEAD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEAD_b5");
#endif
    func_A796_b5_body(21);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD05_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD05_b5");
#endif
    func_A796_b5_body(22);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B183_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B183_b5");
#endif
    func_A796_b5_body(23);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B103_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B103_b5");
#endif
    func_A796_b5_body(24);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A904_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b5");
#endif
    func_A796_b5_body(25);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A7A6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7A6_b5");
#endif
label_A7A6:;
    /* $A7A6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7A8:;
    /* $A7A8: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A7A9:;
    /* $A7A9: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC803 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7AC:;
    /* $A7AC: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A7AD:;
    /* $A7AD: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xC003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7B0:;
    /* $A7B0: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A7B1:;
    /* $A7B1: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xB803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7B4:;
    /* $A7B4: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_A835; }
label_A7B6:;
    /* $A7B6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7B8:;
    /* $A7B8: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A7B9:;
    /* $A7B9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BC:;
    /* $A7BC: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA7BC; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A7BD:;
    /* $A7BD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C0:;
    /* $A7C0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A7C1:;
    /* $A7C1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A843; }
label_A7C6:;
    /* $A7C6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7C8:;
    /* $A7C8: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0848), 5); return; }
label_A7CA:;
    /* $A7CA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CC:;
    /* $A7CC: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A84C; }
label_A7CE:;
    /* $A7CE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D0:;
    /* $A7D0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0850), 5); return; }
label_A7D2:;
    /* $A7D2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x98 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D4:;
    /* $A7D4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A854; }
label_A7D6:;
    /* $A7D6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x90 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D8:;
    /* $A7D8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A7D9:;
    /* $A7D9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x8803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7DC:;
    /* $A7DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7DF:;
    /* $A7DF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A7E0:;
    /* $A7E0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07E2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7E0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7E3:;
    /* $A7E3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A7E5:;
    /* $A7E5: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E8:;
    /* $A7E8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07EA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7E8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7EB:;
    /* $A7EB: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_A80D; }
label_A7ED:;
    /* $A7ED: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x6803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7F0:;
    /* $A7F0: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x037F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A7F3:;
    /* $A7F3: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x7F34 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7F6:;
    /* $A7F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7F8:;
    /* $A7F8: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x037F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7FB:;
    /* $A7FB: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x7F44 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7FE:;
    /* $A7FE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A800:; /* spark_damage_table */
    /* $A800: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
label_A803:;
    /* $A803: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A804:;
    /* $A804: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A805:;
    /* $A805: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A807:;
    /* $A807: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0809); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x1402, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA807, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A80A:;
    /* $A80A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80A); return;
label_A80B:;
    /* $A80B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80B); return;
label_A80C:;
    /* $A80C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A80D:;
    /* $A80D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80D); return;
label_A80E:;
    /* $A80E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80E); return;
label_A80F:;
    /* $A80F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A811:;
    /* $A811: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A813:;
    /* $A813: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A814:;
    /* $A814: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA814); return;
label_A815:;
    /* $A815: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A816:;
    /* $A816: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA816); return;
label_A817:;
    /* $A817: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A819:;
    /* $A819: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A81A:;
    /* $A81A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A81B:;
    /* $A81B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81B); return;
label_A81C:;
    /* $A81C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A81D:;
    /* $A81D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A81F:;
    /* $A81F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81F); return;
label_A820:;
    /* $A820: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA820); return;
label_A821:;
    /* $A821: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA821); return;
label_A822:;
    /* $A822: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA822); return;
label_A823:;
    /* $A823: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A824:;
    /* $A824: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA824); return;
label_A825:;
    /* $A825: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A827:;
    /* $A827: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA827); return;
label_A828:;
    /* $A828: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA828); return;
label_A829:;
    /* $A829: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A82A:;
    /* $A82A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82A); return;
label_A82B:;
    /* $A82B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82B); return;
label_A82C:;
    /* $A82C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82C); return;
label_A82D:;
    /* $A82D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82D); return;
label_A82E:;
    /* $A82E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82E); return;
label_A82F:;
    /* $A82F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82F); return;
label_A830:;
    /* $A830: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA830); return;
label_A831:;
    /* $A831: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA831); return;
label_A832:;
    /* $A832: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA832); return;
label_A833:;
    /* $A833: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A835:;
    /* $A835: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA835); return;
label_A836:; /* test_facing_change */
    /* $A836: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA836); return;
label_A837:;
    /* $A837: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA837); return;
label_A838:;
    /* $A838: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA838); return;
label_A839:;
    /* $A839: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A83B:;
    /* $A83B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83B); return;
label_A83C:;
    /* $A83C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83C); return;
label_A83D:;
    /* $A83D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83D); return;
label_A83E:;
    /* $A83E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83E); return;
label_A83F:;
    /* $A83F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A841:;
    /* $A841: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A843:;
    /* $A843: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A844:;
    /* $A844: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA844); return;
label_A845:;
    /* $A845: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A847:;
    /* $A847: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A849:;
    /* $A849: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA849); return;
label_A84A:;
    /* $A84A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84A); return;
label_A84B:;
    /* $A84B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A84C:;
    /* $A84C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84C); return;
label_A84D:;
    /* $A84D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA84D; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A84E:;
    /* $A84E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84E); return;
label_A84F:;
    /* $A84F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A851:;
    /* $A851: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA851); return;
label_A852:;
    /* $A852: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A853:;
    /* $A853: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA853; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A854:;
    /* $A854: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA854); return;
label_A855:; return;
label_A856:; return;
label_A859:; return;
label_A85A:; return;
label_A85B:; return;
label_A85D:; return;
label_A85E:; return;
label_A85F:; return;
label_A860:; return;
label_A861:; return;
label_A862:; return;
label_A863:; return;
label_A864:; return;
label_A865:; return;
label_A866:; return;
label_A867:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86C:; return;
label_A86D:; return;
label_A86F:; return;
label_A870:; return;
label_A871:; return;
label_A872:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
label_A876:; return;
label_A877:; return;
label_A878:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87C:; return;
label_A87D:; return;
label_A87E:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A882:; return;
label_A883:; return;
label_A884:; return;
label_A885:; return;
label_A886:; return;
label_A887:; return;
label_A888:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88E:; return;
label_A88F:; return;
label_A890:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A899:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A0:; return;
label_A8A1:; return;
label_A8A2:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8A8:; return;
label_A8AB:; return;
label_A8AC:; return;
label_A8AD:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B0:; return;
label_A8B1:; return;
label_A8B2:; return;
label_A8B3:; return;
label_A8B4:; return;
label_A8B5:; return;
label_A8B6:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8B9:; return;
label_A8BA:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C0:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C5:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C8:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CE:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D1:; return;
label_A8D2:; return;
label_A8D3:; return;
label_A8D4:; return;
label_A8D5:; return;
label_A8D6:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DA:; return;
label_A8DB:; return;
label_A8DC:; return;
label_A8DD:; return;
label_A8DE:; return;
label_A8DF:; return;
label_A8E0:; return;
label_A8E1:; return;
label_A8E2:; return;
label_A8E3:; return;
label_A8E4:; return;
label_A8E5:; return;
label_A8E6:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EC:; return;
label_A8ED:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F0:; return;
label_A8F1:; return;
label_A8F3:; return;
label_A8F4:; return;
label_A8F5:; return;
label_A8F6:; return;
label_A8F7:; return;
label_A8F8:; return;
label_A8F9:; return;
label_A8FA:; return;
label_A8FC:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A900:; return;
label_A901:; return;
label_A903:; return;
label_A904:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90A:; return;
label_A90B:; return;
label_A90E:; return;
label_A90F:; return;
label_A910:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A918:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A922:; return;
label_A923:; return;
label_A924:; return;
label_A926:; return;
label_A927:; return;
label_A929:; return;
label_A92A:; return;
label_A92B:; return;
label_A92C:; return;
label_A92D:; return;
label_A92E:; return;
label_A92F:; return;
label_A930:; return;
label_A931:; return;
label_A932:; return;
label_A933:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93C:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A943:; return;
label_A944:; return;
label_A945:; return;
label_A946:; return;
label_A947:; return;
label_A948:; return;
label_A94A:; return;
label_A94D:; return;
label_A94E:; return;
label_A94F:; return;
label_A950:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A955:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A961:; return;
label_A962:; return;
label_A963:; return;
label_A964:; return;
label_A965:; return;
label_A966:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96A:; return;
label_A96B:; return;
label_A96C:; return;
label_A96D:; return;
label_A96E:; return;
label_A96F:; return;
label_A970:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A974:; return;
label_A975:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97A:; return;
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
label_A985:; return;
label_A986:; return;
label_A987:; return;
label_A98A:; return;
label_A98B:; return;
label_A98C:; return;
label_A98D:; return;
label_A98F:; return;
label_A991:; return;
label_A992:; return;
label_A993:; return;
label_A994:; return;
label_A995:; return;
label_A996:; return;
label_A998:; return;
label_A999:; return;
label_A99A:; return;
label_A99B:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A1:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A5:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A8:; return;
label_A9A9:; return;
label_A9AA:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AE:; return;
label_A9AF:; return;
label_A9B0:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B8:; return;
label_A9B9:; return;
label_A9BA:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C2:; return;
label_A9C3:; return;
label_A9C4:; return;
label_A9C5:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CB:; return;
label_A9CC:; return;
label_A9CD:; return;
label_A9CF:; return;
label_A9D0:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D3:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D6:; return;
label_A9D7:; return;
label_A9D9:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DC:; return;
label_A9DD:; return;
label_A9DE:; return;
label_A9DF:; return;
label_A9E0:; return;
label_A9E1:; return;
label_A9E2:; return;
label_A9E3:; return;
label_A9E4:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E7:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EA:; return;
label_A9EB:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9EE:; return;
label_A9EF:; return;
label_A9F0:; return;
label_A9F1:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F6:; return;
label_A9F7:; return;
label_A9F8:; return;
label_A9F9:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FC:; return;
label_A9FD:; return;
label_A9FE:; return;
label_A9FF:; return;
label_AA00:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA10:; return;
label_AA12:; return;
label_AA13:; return;
label_AA15:; return;
label_AA17:; return;
label_AA19:; return;
label_AA1C:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA22:; return;
label_AA25:; return;
label_AA26:; return;
label_AA27:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2A:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2E:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA33:; return;
label_AA34:; return;
label_AA35:; return;
label_AA36:; return;
label_AA37:; return;
label_AA38:; return;
label_AA3A:; return;
label_AA3B:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA45:; return;
label_AA47:; return;
label_AA4A:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA51:; return;
label_AA52:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA59:; return;
label_AA5A:; return;
label_AA5B:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA65:; return;
label_AA66:; return;
label_AA67:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA70:; return;
label_AA73:; return;
label_AA74:; return;
label_AA76:; return;
label_AA78:; return;
label_AA79:; return;
label_AA7A:; return;
label_AA7D:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA80:; return;
label_AA83:; return;
label_AA85:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8B:; return;
label_AA8E:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA97:; return;
label_AA98:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9B:; return;
label_AA9C:; return;
label_AA9D:; return;
label_AA9E:; return;
label_AA9F:; return;
label_AAA0:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA6:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAB:; return;
label_AAAC:; return;
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
label_AAB7:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABE:; return;
label_AABF:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC5:; return;
label_AAC7:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACA:; return;
label_AACB:; return;
label_AACC:; return;
label_AACD:; return;
label_AACE:; return;
label_AACF:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD5:; return;
label_AAD6:; return;
label_AAD7:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE1:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE6:; return;
label_AAE7:; return;
label_AAE8:; return;
label_AAE9:; return;
label_AAEA:; return;
label_AAEB:; return;
label_AAEC:; return;
label_AAED:; return;
label_AAEF:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF3:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAF8:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFE:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB02:; return;
label_AB04:; return;
label_AB06:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0D:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB13:; return;
label_AB14:; return;
label_AB15:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB22:; return;
label_AB24:; return;
label_AB25:; return;
label_AB27:; return;
label_AB29:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB31:; return;
label_AB33:; return;
label_AB35:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3C:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB46:; return;
label_AB47:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB52:; return;
label_AB53:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB61:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB66:; return;
label_AB67:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6A:; return;
label_AB6B:; return;
label_AB6E:; return;
label_AB6F:; return;
label_AB70:; return;
label_AB71:; return;
label_AB72:; return;
label_AB73:; return;
label_AB74:; return;
label_AB75:; return;
label_AB76:; return;
label_AB77:; return;
label_AB78:; return;
label_AB79:; return;
label_AB7B:; return;
label_AB7C:; return;
label_AB7D:; return;
label_AB7E:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB83:; return;
label_AB84:; return;
label_AB85:; return;
label_AB86:; return;
label_AB87:; return;
label_AB88:; return;
label_AB89:; return;
label_AB8A:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8D:; return;
label_AB8E:; return;
label_AB90:; return;
label_AB91:; return;
label_AB92:; return;
label_AB93:; return;
label_AB94:; return;
label_AB97:; return;
label_AB98:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9B:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9E:; return;
label_ABA0:; return;
label_ABA1:; return;
label_ABA2:; return;
label_ABA3:; return;
label_ABA4:; return;
label_ABA5:; return;
label_ABA6:; return;
label_ABA7:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABB1:; return;
label_ABB2:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB5:; return;
label_ABB6:; return;
label_ABB7:; return;
label_ABB8:; return;
label_ABB9:; return;
label_ABBA:; return;
label_ABBB:; return;
label_ABBC:; return;
label_ABBD:; return;
label_ABBE:; return;
label_ABBF:; return;
label_ABC0:; return;
label_ABC2:; return;
label_ABC3:; return;
label_ABC4:; return;
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCA:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
label_ABCF:; return;
label_ABD0:; return;
label_ABD1:; return;
label_ABD4:; return;
label_ABD5:; return;
label_ABD6:; return;
label_ABD7:; return;
label_ABD8:; return;
label_ABD9:; return;
label_ABDA:; return;
label_ABDB:; return;
label_ABDC:; return;
label_ABDD:; return;
label_ABDE:; return;
label_ABDF:; return;
label_ABE0:; return;
label_ABE1:; return;
label_ABE2:; return;
label_ABE3:; return;
label_ABE5:; return;
label_ABE6:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEB:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEE:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF4:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF7:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFA:; return;
label_ABFB:; return;
label_ABFC:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC00:; return;
label_AC02:; return;
label_AC04:; return;
label_AC05:; return;
label_AC07:; return;
label_AC09:; return;
label_AC0B:; return;
label_AC0C:; return;
label_AC0D:; return;
label_AC0F:; return;
label_AC10:; return;
label_AC11:; return;
label_AC13:; return;
label_AC14:; return;
label_AC16:; return;
label_AC18:; return;
label_AC1A:; return;
label_AC1B:; return;
label_AC1D:; return;
label_AC20:; return;
label_AC22:; return;
label_AC23:; return;
label_AC25:; return;
label_AC26:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2A:; return;
label_AC2C:; return;
label_AC2D:; return;
label_AC30:; return;
label_AC31:; return;
label_AC32:; return;
label_AC33:; return;
label_AC34:; return;
label_AC35:; return;
label_AC37:; return;
label_AC38:; return;
label_AC39:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC41:; return;
label_AC43:; return;
label_AC44:; return;
label_AC47:; return;
label_AC48:; return;
label_AC49:; return;
label_AC4A:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC53:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC61:; return;
label_AC62:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC67:; return;
label_AC68:; return;
label_AC6A:; return;
label_AC6B:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC70:; return;
label_AC71:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC76:; return;
label_AC77:; return;
label_AC78:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC81:; return;
label_AC82:; return;
label_AC84:; return;
label_AC85:; return;
label_AC87:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8D:; return;
label_AC8E:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC91:; return;
label_AC92:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9B:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACA9:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAF:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB2:; return;
label_ACB3:; return;
label_ACB4:; return;
label_ACB5:; return;
label_ACB7:; return;
label_ACB8:; return;
label_ACB9:; return;
label_ACBA:; return;
label_ACBB:; return;
label_ACBC:; return;
label_ACBD:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC7:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCB:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEB:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACEF:; return;
label_ACF0:; return;
label_ACF1:; return;
label_ACF2:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF5:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF9:; return;
label_ACFA:; return;
label_ACFD:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD00:; return;
label_AD01:; return;
label_AD02:; return;
label_AD03:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD07:; return;
label_AD08:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD12:; return;
label_AD13:; return;
label_AD15:; return;
label_AD16:; return;
label_AD17:; return;
label_AD18:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD22:; return;
label_AD24:; return;
label_AD26:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2B:; return;
label_AD2D:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD33:; return;
label_AD36:; return;
label_AD39:; return;
label_AD3A:; return;
label_AD3D:; return;
label_AD3E:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD42:; return;
label_AD45:; return;
label_AD46:; return;
label_AD47:; return;
label_AD48:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4D:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD50:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD58:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5D:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD61:; return;
label_AD63:; return;
label_AD65:; return;
label_AD66:; return;
label_AD67:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6A:; return;
label_AD6C:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD6F:; return;
label_AD70:; return;
label_AD71:; return;
label_AD72:; return;
label_AD73:; return;
label_AD74:; return;
label_AD75:; return;
label_AD76:; return;
label_AD77:; return;
label_AD78:; return;
label_AD7A:; return;
label_AD7B:; return;
label_AD7D:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD83:; return;
label_AD84:; return;
label_AD85:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8D:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD94:; return;
label_AD95:; return;
label_AD96:; return;
label_AD97:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA5:; return;
label_ADA6:; return;
label_ADA7:; return;
label_ADA8:; return;
label_ADA9:; return;
label_ADAB:; return;
label_ADAC:; return;
label_ADAD:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
label_ADB5:; return;
label_ADB6:; return;
label_ADB7:; return;
label_ADB8:; return;
label_ADB9:; return;
label_ADBA:; return;
label_ADBB:; return;
label_ADBC:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC0:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC5:; return;
label_ADC6:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCD:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE1:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE5:; return;
label_ADE6:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEA:; return;
label_ADEB:; return;
label_ADEC:; return;
label_ADED:; return;
label_ADEE:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF4:; return;
label_ADF7:; return;
label_ADF8:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFB:; return;
label_ADFC:; return;
label_ADFD:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE06:; return;
label_AE08:; return;
label_AE09:; return;
label_AE0A:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE0F:; return;
label_AE11:; return;
label_AE12:; return;
label_AE13:; return;
label_AE14:; return;
label_AE15:; return;
label_AE16:; return;
label_AE17:; return;
label_AE18:; return;
label_AE19:; return;
label_AE1A:; return;
label_AE1B:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE20:; return;
label_AE22:; return;
label_AE24:; return;
label_AE26:; return;
label_AE27:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2D:; return;
label_AE2F:; return;
label_AE31:; return;
label_AE33:; return;
label_AE35:; return;
label_AE38:; return;
label_AE39:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE41:; return;
label_AE42:; return;
label_AE43:; return;
label_AE45:; return;
label_AE46:; return;
label_AE47:; return;
label_AE48:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4B:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE4F:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE55:; return;
label_AE56:; return;
label_AE57:; return;
label_AE58:; return;
label_AE59:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE63:; return;
label_AE65:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE72:; return;
label_AE75:; return;
label_AE76:; return;
label_AE77:; return;
label_AE78:; return;
label_AE79:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE85:; return;
label_AE86:; return;
label_AE87:; return;
label_AE88:; return;
label_AE89:; return;
label_AE8A:; return;
label_AE8B:; return;
label_AE8C:; return;
label_AE8D:; return;
label_AE8E:; return;
label_AE8F:; return;
label_AE90:; return;
label_AE91:; return;
label_AE92:; return;
label_AE93:; return;
label_AE94:; return;
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9C:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA0:; return;
label_AEA1:; return;
label_AEA3:; return;
label_AEA4:; return;
label_AEA7:; return;
label_AEA8:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAE:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEDF:; return;
label_AEE0:; return;
label_AEE1:; return;
label_AEE2:; return;
label_AEE5:; return;
label_AEE6:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEB:; return;
label_AEEC:; return;
label_AEED:; return;
label_AEEE:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF1:; return;
label_AEF2:; return;
label_AEF4:; return;
label_AEF5:; return;
label_AEF6:; return;
label_AEF7:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFC:; return;
label_AEFD:; return;
label_AEFE:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF10:; return;
label_AF12:; return;
label_AF14:; return;
label_AF16:; return;
label_AF18:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1D:; return;
label_AF1F:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF25:; return;
label_AF27:; return;
label_AF28:; return;
label_AF29:; return;
label_AF2B:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF30:; return;
label_AF32:; return;
label_AF34:; return;
label_AF37:; return;
label_AF39:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF41:; return;
label_AF43:; return;
label_AF46:; return;
label_AF48:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF51:; return;
label_AF53:; return;
label_AF54:; return;
label_AF55:; return;
label_AF57:; return;
label_AF58:; return;
label_AF5A:; return;
label_AF5C:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF62:; return;
label_AF64:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6A:; return;
label_AF6C:; return;
label_AF6E:; return;
label_AF70:; return;
label_AF72:; return;
label_AF74:; return;
label_AF76:; return;
label_AF78:; return;
label_AF7A:; return;
label_AF7D:; return;
label_AF7E:; return;
label_AF81:; return;
label_AF82:; return;
label_AF85:; return;
label_AF86:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8F:; return;
label_AF91:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9B:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA6:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAD:; return;
label_AFB0:; return;
label_AFB1:; return;
label_AFB3:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB8:; return;
label_AFB9:; return;
label_AFBB:; return;
label_AFBE:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC5:; return;
label_AFC7:; return;
label_AFCA:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDC:; return;
label_AFDE:; return;
label_AFE0:; return;
label_AFE1:; return;
label_AFE3:; return;
label_AFE5:; return;
label_AFE7:; return;
label_AFE8:; return;
label_AFE9:; return;
label_AFEB:; return;
label_AFEE:; return;
label_AFF0:; return;
label_AFF2:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFF9:; return;
label_AFFA:; return;
label_AFFD:; return;
label_AFFE:; return;
label_B001:; return;
label_B003:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00A:; return;
label_B00B:; return;
label_B00C:; return;
label_B00F:; return;
label_B012:; return;
label_B015:; return;
label_B016:; return;
label_B018:; return;
label_B01B:; return;
label_B01C:; return;
label_B01E:; return;
label_B020:; return;
label_B022:; return;
label_B024:; return;
label_B025:; return;
label_B026:; return;
label_B028:; return;
label_B02A:; return;
label_B02B:; return;
label_B02D:; return;
label_B02F:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03B:; return;
label_B03D:; return;
label_B03F:; return;
label_B041:; return;
label_B043:; return;
label_B045:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04D:; return;
label_B04E:; return;
label_B04F:; return;
label_B050:; return;
label_B053:; return;
label_B054:; return;
label_B057:; return;
label_B058:; return;
label_B05B:; return;
label_B05E:; return;
label_B060:; return;
label_B061:; return;
label_B063:; return;
label_B065:; return;
label_B067:; return;
label_B069:; return;
label_B06B:; return;
label_B06D:; return;
label_B06F:; return;
label_B071:; return;
label_B073:; return;
label_B075:; return;
label_B077:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B086:; return;
label_B088:; return;
label_B08A:; return;
label_B08B:; return;
label_B08D:; return;
label_B08E:; return;
label_B090:; return;
label_B093:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09C:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A7:; return;
label_B0A9:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B1:; return;
label_B0B3:; return;
label_B0B6:; return;
label_B0B8:; return;
label_B0BA:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C2:; return;
label_B0C4:; return;
label_B0C6:; return;
label_B0C8:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D0:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D7:; return;
label_B0DA:; return;
label_B0DC:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0EA:; return;
label_B0EC:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FA:; return;
label_B0FC:; return;
label_B0FF:; return;
label_B101:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10A:; return;
label_B10C:; return;
label_B10F:; return;
label_B111:; return;
label_B113:; return;
label_B115:; return;
label_B117:; return;
label_B119:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B122:; return;
label_B124:; return;
label_B126:; return;
label_B128:; return;
label_B12A:; return;
label_B12C:; return;
label_B12E:; return;
label_B130:; return;
label_B132:; return;
label_B134:; return;
label_B136:; return;
label_B138:; return;
label_B139:; return;
label_B13A:; return;
label_B13C:; return;
label_B13E:; return;
label_B141:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B147:; return;
label_B149:; return;
label_B14A:; return;
label_B14B:; return;
label_B14D:; return;
label_B150:; return;
label_B152:; return;
label_B154:; return;
label_B156:; return;
label_B158:; return;
label_B159:; return;
label_B15B:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B166:; return;
label_B168:; return;
label_B16A:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B16F:; return;
label_B171:; return;
label_B173:; return;
label_B175:; return;
label_B177:; return;
label_B179:; return;
label_B17B:; return;
label_B17E:; return;
label_B180:; return;
label_B182:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18C:; return;
label_B18E:; return;
label_B18F:; return;
label_B190:; return;
label_B192:; return;
label_B194:; return;
label_B196:; return;
label_B198:; return;
label_B199:; return;
label_B19C:; return;
label_B19D:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1B9:; return;
label_B1BA:; return;
label_B1BB:; return;
label_B1BC:; return;
label_B1BD:; return;
label_B1BE:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C5:; return;
label_B1C7:; return;
label_B1C9:; return;
label_B1CB:; return;
label_B1CD:; return;
label_B1CF:; return;
label_B1D1:; return;
label_B1D3:; return;
label_B1D5:; return;
label_B1D7:; return;
label_B1D9:; return;
label_B1DB:; return;
label_B1DD:; return;
label_B1DF:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F3:; return;
label_B1F5:; return;
label_B1F7:; return;
label_B1F9:; return;
label_B1FA:; return;
label_B1FC:; return;
label_B1FE:; return;
label_B200:; return;
label_B202:; return;
label_B205:; return;
label_B207:; return;
label_B209:; return;
label_B20B:; return;
label_B20C:; return;
label_B20E:; return;
label_B210:; return;
label_B212:; return;
label_B214:; return;
label_B216:; return;
label_B217:; return;
label_B21A:; return;
label_B21B:; return;
label_B21D:; return;
label_B21F:; return;
label_B222:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
label_B22A:; return;
label_B22B:; return;
label_B22E:; return;
label_B230:; return;
label_B232:; return;
label_B234:; return;
label_B237:; return;
label_B238:; return;
label_B23A:; return;
label_B23C:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B244:; return;
label_B245:; return;
label_B247:; return;
label_B24A:; return;
label_B24D:; return;
label_B24E:; return;
label_B24F:; return;
label_B250:; return;
label_B252:; return;
label_B254:; return;
label_B256:; return;
label_B258:; return;
label_B25B:; return;
label_B25D:; return;
label_B25F:; return;
label_B260:; return;
label_B261:; return;
label_B263:; return;
label_B266:; return;
label_B267:; return;
label_B269:; return;
label_B26B:; return;
label_B26C:; return;
label_B26E:; return;
label_B270:; return;
label_B271:; return;
label_B273:; return;
label_B275:; return;
label_B277:; return;
label_B279:; return;
label_B27B:; return;
label_B27E:; return;
label_B280:; return;
label_B282:; return;
label_B284:; return;
label_B286:; return;
label_B289:; return;
label_B28B:; return;
label_B28C:; return;
label_B28D:; return;
label_B28F:; return;
label_B290:; return;
label_B293:; return;
label_B294:; return;
label_B297:; return;
label_B29A:; return;
label_B29C:; return;
label_B29E:; return;
label_B2A0:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A9:; return;
label_B2AB:; return;
label_B2AC:; return;
label_B2AE:; return;
label_B2B0:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B6:; return;
label_B2B9:; return;
label_B2BB:; return;
label_B2BD:; return;
label_B2BF:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CA:; return;
label_B2CB:; return;
label_B2CC:; return;
label_B2CD:; return;
label_B2CE:; return;
label_B2CF:; return;
label_B2D0:; return;
label_B2D2:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D8:; return;
label_B2DA:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E4:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2ED:; return;
label_B2EF:; return;
label_B2F1:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B2FF:; return;
label_B301:; return;
label_B303:; return;
label_B305:; return;
label_B307:; return;
label_B309:; return;
label_B30B:; return;
label_B30E:; return;
label_B310:; return;
label_B313:; return;
label_B314:; return;
label_B317:; return;
label_B319:; return;
label_B31A:; return;
label_B31B:; return;
label_B31D:; return;
label_B31E:; return;
label_B31F:; return;
label_B321:; return;
label_B324:; return;
label_B325:; return;
label_B328:; return;
label_B32B:; return;
label_B32C:; return;
label_B32E:; return;
label_B32F:; return;
label_B330:; return;
label_B332:; return;
label_B334:; return;
label_B336:; return;
label_B338:; return;
label_B339:; return;
label_B33B:; return;
label_B33E:; return;
label_B340:; return;
label_B342:; return;
label_B344:; return;
label_B346:; return;
label_B349:; return;
label_B34B:; return;
label_B34C:; return;
label_B34E:; return;
label_B34F:; return;
label_B352:; return;
label_B354:; return;
}

void func_A7BE_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A86F;
        case 2: goto label_A80C;
        case 3: goto label_A833;
        case 4: goto label_A87D;
        case 5: goto label_A8C7;
    }
label_A7BE:;
    /* $A7BE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7C0:;
    /* $A7C0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A7C1:;
    /* $A7C1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xB003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A843; }
label_A7C6:;
    /* $A7C6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7C8:;
    /* $A7C8: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0848), 5); return; }
label_A7CA:;
    /* $A7CA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7CC:;
    /* $A7CC: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A84C; }
label_A7CE:;
    /* $A7CE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D0:;
    /* $A7D0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0850), 5); return; }
label_A7D2:;
    /* $A7D2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x98 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D4:;
    /* $A7D4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_A854; }
label_A7D6:;
    /* $A7D6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x90 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7D8:;
    /* $A7D8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A7D9:;
    /* $A7D9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x8803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7DC:;
    /* $A7DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7DC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7DF:;
    /* $A7DF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A7E0:;
    /* $A7E0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07E2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7E0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7E3:;
    /* $A7E3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A7E5:;
    /* $A7E5: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7E8:;
    /* $A7E8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x07EA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x037E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA7E8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A7EB:;
    /* $A7EB: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_A80D; }
label_A7ED:;
    /* $A7ED: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x6803 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7F0:;
    /* $A7F0: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x037F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A7F3:;
    /* $A7F3: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x7F34 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7F6:;
    /* $A7F6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A7F8:;
    /* $A7F8: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x037F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7FB:;
    /* $A7FB: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x7F44 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7FE:;
    /* $A7FE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A800:; /* spark_damage_table */
    /* $A800: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
label_A803:;
    /* $A803: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A804:;
    /* $A804: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A805:;
    /* $A805: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A807:;
    /* $A807: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0809); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x1402, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA807, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A80A:;
    /* $A80A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80A); return;
label_A80B:;
    /* $A80B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80B); return;
label_A80C:;
    /* $A80C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A80D:;
    /* $A80D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80D); return;
label_A80E:;
    /* $A80E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80E); return;
label_A80F:;
    /* $A80F: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A811:;
    /* $A811: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A813:;
    /* $A813: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A814:;
    /* $A814: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA814); return;
label_A815:;
    /* $A815: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A816:;
    /* $A816: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA816); return;
label_A817:;
    /* $A817: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A819:;
    /* $A819: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A81A:;
    /* $A81A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A81B:;
    /* $A81B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81B); return;
label_A81C:;
    /* $A81C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A81D:;
    /* $A81D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A81F:;
    /* $A81F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81F); return;
label_A820:;
    /* $A820: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA820); return;
label_A821:;
    /* $A821: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA821); return;
label_A822:;
    /* $A822: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA822); return;
label_A823:;
    /* $A823: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A824:;
    /* $A824: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA824); return;
label_A825:;
    /* $A825: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A827:;
    /* $A827: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA827); return;
label_A828:;
    /* $A828: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA828); return;
label_A829:;
    /* $A829: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A82A:;
    /* $A82A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82A); return;
label_A82B:;
    /* $A82B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82B); return;
label_A82C:;
    /* $A82C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82C); return;
label_A82D:;
    /* $A82D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82D); return;
label_A82E:;
    /* $A82E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82E); return;
label_A82F:;
    /* $A82F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82F); return;
label_A830:;
    /* $A830: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA830); return;
label_A831:;
    /* $A831: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA831); return;
label_A832:;
    /* $A832: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA832); return;
label_A833:;
    /* $A833: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A835:;
    /* $A835: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA835); return;
label_A836:; /* test_facing_change */
    /* $A836: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA836); return;
label_A837:;
    /* $A837: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA837); return;
label_A838:;
    /* $A838: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA838); return;
label_A839:;
    /* $A839: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A83B:;
    /* $A83B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83B); return;
label_A83C:;
    /* $A83C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83C); return;
label_A83D:;
    /* $A83D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83D); return;
label_A83E:;
    /* $A83E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83E); return;
label_A83F:;
    /* $A83F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A841:;
    /* $A841: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A843:;
    /* $A843: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A844:;
    /* $A844: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA844); return;
label_A845:;
    /* $A845: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A847:;
    /* $A847: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A849:;
    /* $A849: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA849); return;
label_A84A:;
    /* $A84A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84A); return;
label_A84B:;
    /* $A84B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A84C:;
    /* $A84C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84C); return;
label_A84D:;
    /* $A84D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA84D; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A84E:;
    /* $A84E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84E); return;
label_A84F:;
    /* $A84F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A851:;
    /* $A851: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA851); return;
label_A852:;
    /* $A852: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A853:;
    /* $A853: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA853; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A854:;
    /* $A854: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA854); return;
label_A855:;
    /* $A855: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA855); return;
label_A856:;
    /* $A856: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0858); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA856, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A859:;
    /* $A859: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA859); return;
label_A85A:;
    /* $A85A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85A); return;
label_A85B:;
    /* $A85B: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A85D:;
    /* $A85D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85D); return;
label_A85E:;
    /* $A85E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85E); return;
label_A85F:;
    /* $A85F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85F); return;
label_A860:;
    /* $A860: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA860); return;
label_A861:;
    /* $A861: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA861); return;
label_A862:;
    /* $A862: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA862); return;
label_A863:;
    /* $A863: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA863); return;
label_A864:;
    /* $A864: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA864); return;
label_A865:;
    /* $A865: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA865); return;
label_A866:;
    /* $A866: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA866); return;
label_A867:;
    /* $A867: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA867); return;
label_A868:;
    /* $A868: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA868); return;
label_A869:;
    /* $A869: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A86B:;
    /* $A86B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA86B); return;
label_A86C:;
    /* $A86C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA86C); return;
label_A86D:;
    /* $A86D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A86F:;
    /* $A86F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A870:;
    /* $A870: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA870); return;
label_A871:;
    /* $A871: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA871); return;
label_A872:;
    /* $A872: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA872); return;
label_A873:;
    /* $A873: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA873); return;
label_A874:;
    /* $A874: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA874); return;
label_A875:;
    /* $A875: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA875); return;
label_A876:;
    /* $A876: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA876); return;
label_A877:;
    /* $A877: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA877); return;
label_A878:;
    /* $A878: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A879:;
    /* $A879: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA879); return;
label_A87A:;
    /* $A87A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87A); return;
label_A87B:;
    /* $A87B: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA87B; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A87C:;
    /* $A87C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87C); return;
label_A87D:;
    /* $A87D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87D); return;
label_A87E:;
    /* $A87E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87E); return;
label_A87F:;
    /* $A87F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87F); return;
label_A880:;
    /* $A880: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA880); return;
label_A881:;
    /* $A881: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA881); return;
label_A882:;
    /* $A882: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA882); return;
label_A883:;
    /* $A883: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA883); return;
label_A884:;
    /* $A884: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A885:;
    /* $A885: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA885; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A886:;
    /* $A886: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA886); return;
label_A887:;
    /* $A887: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A888:;
    /* $A888: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA888); return;
label_A889:;
    /* $A889: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA889); return;
label_A88A:;
    /* $A88A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88A); return;
label_A88B:;
    /* $A88B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88B); return;
label_A88C:;
    /* $A88C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88C); return;
label_A88D:;
    /* $A88D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA88D; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A88E:;
    /* $A88E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A88F:;
    /* $A88F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88F); return;
label_A890:;
    /* $A890: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA890); return;
label_A891:;
    /* $A891: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA891); return;
label_A892:;
    /* $A892: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A893:;
    /* $A893: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA893); return;
label_A894:;
    /* $A894: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA894); return;
label_A895:;
    /* $A895: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA895); return;
label_A896:;
    /* $A896: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA896); return;
label_A897:;
    /* $A897: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A899; }
label_A899:;
    /* $A899: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A89B:;
    /* $A89B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89B); return;
label_A89C:;
    /* $A89C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89D:;
    /* $A89D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89D); return;
label_A89E:;
    /* $A89E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89E); return;
label_A89F:;
    /* $A89F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89F); return;
label_A8A0:;
    /* $A8A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A0); return;
label_A8A1:;
    /* $A8A1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A1); return;
label_A8A2:;
    /* $A8A2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A2); return;
label_A8A3:;
    /* $A8A3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8A4:;
    /* $A8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A4); return;
label_A8A5:;
    /* $A8A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A5); return;
label_A8A6:;
    /* $A8A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A6); return;
label_A8A7:;
    /* $A8A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8A7); return;
label_A8A8:;
    /* $A8A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08AA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0044, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8AB:;
    /* $A8AB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AB); return;
label_A8AC:;
    /* $A8AC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AC); return;
label_A8AD:;
    /* $A8AD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8AE:;
    /* $A8AE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AE); return;
label_A8AF:;
    /* $A8AF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8AF); return;
label_A8B0:;
    /* $A8B0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B0); return;
label_A8B1:;
    /* $A8B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B1); return;
label_A8B2:;
    /* $A8B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B2); return;
label_A8B3:;
    /* $A8B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B3); return;
label_A8B4:;
    /* $A8B4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B4); return;
label_A8B5:;
    /* $A8B5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B5); return;
label_A8B6:;
    /* $A8B6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B6); return;
label_A8B7:;
    /* $A8B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B7); return;
label_A8B8:;
    /* $A8B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B8); return;
label_A8B9:;
    /* $A8B9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA8B9; g_rti_bank = 5; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A8BA:;
    /* $A8BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BA); return;
label_A8BB:;
    /* $A8BB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BB); return;
label_A8BC:;
    /* $A8BC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BC); return;
label_A8BD:;
    /* $A8BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BD); return;
label_A8BE:;
    /* $A8BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BE); return;
label_A8BF:;
    /* $A8BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BF); return;
label_A8C0:;
    /* $A8C0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C0); return;
label_A8C1:;
    /* $A8C1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8C3:;
    /* $A8C3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C3); return;
label_A8C4:;
    /* $A8C4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C4); return;
label_A8C5:;
    /* $A8C5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C5); return;
label_A8C6:;
    /* $A8C6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C6); return;
label_A8C7:;
    /* $A8C7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C7); return;
label_A8C8:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CE:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D1:; return;
label_A8D2:; return;
label_A8D3:; return;
label_A8D4:; return;
label_A8D5:; return;
label_A8D6:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DA:; return;
label_A8DB:; return;
label_A8DC:; return;
label_A8DD:; return;
label_A8DE:; return;
label_A8DF:; return;
label_A8E0:; return;
label_A8E1:; return;
label_A8E2:; return;
label_A8E3:; return;
label_A8E4:; return;
label_A8E5:; return;
label_A8E6:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EC:; return;
label_A8ED:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F0:; return;
label_A8F1:; return;
label_A8F3:; return;
label_A8F4:; return;
label_A8F5:; return;
label_A8F6:; return;
label_A8F7:; return;
label_A8F8:; return;
label_A8F9:; return;
label_A8FA:; return;
label_A8FC:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A900:; return;
label_A901:; return;
label_A903:; return;
label_A904:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90A:; return;
label_A90B:; return;
label_A90E:; return;
label_A90F:; return;
label_A910:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A918:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A922:; return;
label_A923:; return;
label_A924:; return;
label_A926:; return;
label_A927:; return;
label_A929:; return;
label_A92A:; return;
label_A92B:; return;
label_A92C:; return;
label_A92D:; return;
label_A92E:; return;
label_A92F:; return;
label_A930:; return;
label_A931:; return;
label_A932:; return;
label_A933:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93C:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A943:; return;
label_A944:; return;
label_A945:; return;
label_A946:; return;
label_A947:; return;
label_A948:; return;
label_A94A:; return;
label_A94D:; return;
label_A94E:; return;
label_A94F:; return;
label_A950:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A955:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A961:; return;
label_A962:; return;
label_A963:; return;
label_A964:; return;
label_A965:; return;
label_A966:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96A:; return;
label_A96B:; return;
label_A96C:; return;
label_A96D:; return;
label_A96E:; return;
label_A96F:; return;
label_A970:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A974:; return;
label_A975:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97A:; return;
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
label_A985:; return;
label_A986:; return;
label_A987:; return;
label_A98A:; return;
label_A98B:; return;
label_A98C:; return;
label_A98D:; return;
label_A98F:; return;
label_A991:; return;
label_A992:; return;
label_A993:; return;
label_A994:; return;
label_A995:; return;
label_A996:; return;
label_A998:; return;
label_A999:; return;
label_A99A:; return;
label_A99B:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A1:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A5:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A8:; return;
label_A9A9:; return;
label_A9AA:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AE:; return;
label_A9AF:; return;
label_A9B0:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B8:; return;
label_A9B9:; return;
label_A9BA:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C2:; return;
label_A9C3:; return;
label_A9C4:; return;
label_A9C5:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CB:; return;
label_A9CC:; return;
label_A9CD:; return;
label_A9CF:; return;
label_A9D0:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D3:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D6:; return;
label_A9D7:; return;
label_A9D9:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DC:; return;
label_A9DD:; return;
label_A9DE:; return;
label_A9DF:; return;
label_A9E0:; return;
label_A9E1:; return;
label_A9E2:; return;
label_A9E3:; return;
label_A9E4:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E7:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EA:; return;
label_A9EB:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9EE:; return;
label_A9EF:; return;
label_A9F0:; return;
label_A9F1:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F6:; return;
label_A9F7:; return;
label_A9F8:; return;
label_A9F9:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FC:; return;
label_A9FD:; return;
label_A9FE:; return;
label_A9FF:; return;
label_AA00:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA10:; return;
label_AA12:; return;
label_AA13:; return;
label_AA15:; return;
label_AA17:; return;
label_AA19:; return;
label_AA1C:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA22:; return;
label_AA25:; return;
label_AA26:; return;
label_AA27:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2A:; return;
label_AA2B:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2E:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA33:; return;
label_AA34:; return;
label_AA35:; return;
label_AA36:; return;
label_AA37:; return;
label_AA38:; return;
label_AA3A:; return;
label_AA3B:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA45:; return;
label_AA47:; return;
label_AA4A:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA51:; return;
label_AA52:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA59:; return;
label_AA5A:; return;
label_AA5B:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA65:; return;
label_AA66:; return;
label_AA67:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA70:; return;
label_AA73:; return;
label_AA74:; return;
label_AA76:; return;
label_AA78:; return;
label_AA79:; return;
label_AA7A:; return;
label_AA7D:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA80:; return;
label_AA83:; return;
label_AA85:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8B:; return;
label_AA8E:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA97:; return;
label_AA98:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9B:; return;
label_AA9C:; return;
label_AA9D:; return;
label_AA9E:; return;
label_AA9F:; return;
label_AAA0:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA6:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAB:; return;
label_AAAC:; return;
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
label_AAB7:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABE:; return;
label_AABF:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC4:; return;
label_AAC5:; return;
label_AAC7:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACA:; return;
label_AACB:; return;
label_AACC:; return;
label_AACD:; return;
label_AACE:; return;
label_AACF:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD5:; return;
label_AAD6:; return;
label_AAD7:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE1:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE6:; return;
label_AAE7:; return;
label_AAE8:; return;
label_AAE9:; return;
label_AAEA:; return;
label_AAEB:; return;
label_AAEC:; return;
label_AAED:; return;
label_AAEF:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF3:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAF8:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFE:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB02:; return;
label_AB04:; return;
label_AB06:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0D:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB13:; return;
label_AB14:; return;
label_AB15:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB22:; return;
label_AB24:; return;
label_AB25:; return;
label_AB27:; return;
label_AB29:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB31:; return;
label_AB33:; return;
label_AB35:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3C:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB46:; return;
label_AB47:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB52:; return;
label_AB53:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB61:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB66:; return;
label_AB67:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6A:; return;
label_AB6B:; return;
label_AB6E:; return;
label_AB6F:; return;
label_AB70:; return;
label_AB71:; return;
label_AB72:; return;
label_AB73:; return;
label_AB74:; return;
label_AB75:; return;
label_AB76:; return;
label_AB77:; return;
label_AB78:; return;
label_AB79:; return;
label_AB7B:; return;
label_AB7C:; return;
label_AB7D:; return;
label_AB7E:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB83:; return;
label_AB84:; return;
label_AB85:; return;
label_AB86:; return;
label_AB87:; return;
label_AB88:; return;
label_AB89:; return;
label_AB8A:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8D:; return;
label_AB8E:; return;
label_AB90:; return;
label_AB91:; return;
label_AB92:; return;
label_AB93:; return;
label_AB94:; return;
label_AB97:; return;
label_AB98:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9B:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9E:; return;
label_ABA0:; return;
label_ABA1:; return;
label_ABA2:; return;
label_ABA3:; return;
label_ABA4:; return;
label_ABA5:; return;
label_ABA6:; return;
label_ABA7:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABB1:; return;
label_ABB2:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB5:; return;
label_ABB6:; return;
label_ABB7:; return;
label_ABB8:; return;
label_ABB9:; return;
label_ABBA:; return;
label_ABBB:; return;
label_ABBC:; return;
label_ABBD:; return;
label_ABBE:; return;
label_ABBF:; return;
label_ABC0:; return;
label_ABC2:; return;
label_ABC3:; return;
label_ABC4:; return;
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCA:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
label_ABCF:; return;
label_ABD0:; return;
label_ABD1:; return;
label_ABD4:; return;
label_ABD5:; return;
label_ABD6:; return;
label_ABD7:; return;
label_ABD8:; return;
label_ABD9:; return;
label_ABDA:; return;
label_ABDB:; return;
label_ABDC:; return;
label_ABDD:; return;
label_ABDE:; return;
label_ABDF:; return;
label_ABE0:; return;
label_ABE1:; return;
label_ABE2:; return;
label_ABE3:; return;
label_ABE5:; return;
label_ABE6:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEB:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEE:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF3:; return;
label_ABF4:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF7:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFA:; return;
label_ABFB:; return;
label_ABFC:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC00:; return;
label_AC02:; return;
label_AC04:; return;
label_AC05:; return;
label_AC07:; return;
label_AC09:; return;
label_AC0B:; return;
label_AC0C:; return;
label_AC0D:; return;
label_AC0F:; return;
label_AC10:; return;
label_AC11:; return;
label_AC13:; return;
label_AC14:; return;
label_AC16:; return;
label_AC18:; return;
label_AC1A:; return;
label_AC1B:; return;
label_AC1D:; return;
label_AC20:; return;
label_AC22:; return;
label_AC23:; return;
label_AC25:; return;
label_AC26:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2A:; return;
label_AC2C:; return;
label_AC2D:; return;
label_AC30:; return;
label_AC31:; return;
label_AC32:; return;
label_AC33:; return;
label_AC34:; return;
label_AC35:; return;
label_AC37:; return;
label_AC38:; return;
label_AC39:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC41:; return;
label_AC43:; return;
label_AC44:; return;
label_AC47:; return;
label_AC48:; return;
label_AC49:; return;
label_AC4A:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC53:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC61:; return;
label_AC62:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC67:; return;
label_AC68:; return;
label_AC6A:; return;
label_AC6B:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC70:; return;
label_AC71:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC76:; return;
label_AC77:; return;
label_AC78:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC81:; return;
label_AC82:; return;
label_AC84:; return;
label_AC85:; return;
label_AC87:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8D:; return;
label_AC8E:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC91:; return;
label_AC92:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9B:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACA9:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAF:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB2:; return;
label_ACB3:; return;
label_ACB4:; return;
label_ACB5:; return;
label_ACB7:; return;
label_ACB8:; return;
label_ACB9:; return;
label_ACBA:; return;
label_ACBB:; return;
label_ACBC:; return;
label_ACBD:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC7:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCB:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEB:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACEF:; return;
label_ACF0:; return;
label_ACF1:; return;
label_ACF2:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF5:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF9:; return;
label_ACFA:; return;
label_ACFD:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD00:; return;
label_AD01:; return;
label_AD02:; return;
label_AD03:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD07:; return;
label_AD08:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD12:; return;
label_AD13:; return;
label_AD15:; return;
label_AD16:; return;
label_AD17:; return;
label_AD18:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD22:; return;
label_AD24:; return;
label_AD26:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2B:; return;
label_AD2D:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD33:; return;
label_AD36:; return;
label_AD39:; return;
label_AD3A:; return;
label_AD3D:; return;
label_AD3E:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD42:; return;
label_AD45:; return;
label_AD46:; return;
label_AD47:; return;
label_AD48:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4D:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD50:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD58:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5D:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD61:; return;
label_AD63:; return;
label_AD65:; return;
label_AD66:; return;
label_AD67:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6A:; return;
label_AD6C:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD6F:; return;
label_AD70:; return;
label_AD71:; return;
label_AD72:; return;
label_AD73:; return;
label_AD74:; return;
label_AD75:; return;
label_AD76:; return;
label_AD77:; return;
label_AD78:; return;
label_AD7A:; return;
label_AD7B:; return;
label_AD7D:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD83:; return;
label_AD84:; return;
label_AD85:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8D:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD94:; return;
label_AD95:; return;
label_AD96:; return;
label_AD97:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA5:; return;
label_ADA6:; return;
label_ADA7:; return;
label_ADA8:; return;
label_ADA9:; return;
label_ADAB:; return;
label_ADAC:; return;
label_ADAD:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
label_ADB5:; return;
label_ADB6:; return;
label_ADB7:; return;
label_ADB8:; return;
label_ADB9:; return;
label_ADBA:; return;
label_ADBB:; return;
label_ADBC:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC0:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC5:; return;
label_ADC6:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCD:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE1:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE5:; return;
label_ADE6:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEA:; return;
label_ADEB:; return;
label_ADEC:; return;
label_ADED:; return;
label_ADEE:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF4:; return;
label_ADF7:; return;
label_ADF8:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFB:; return;
label_ADFC:; return;
label_ADFD:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE06:; return;
label_AE08:; return;
label_AE09:; return;
label_AE0A:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE0F:; return;
label_AE11:; return;
label_AE12:; return;
label_AE13:; return;
label_AE14:; return;
label_AE15:; return;
label_AE16:; return;
label_AE17:; return;
label_AE18:; return;
label_AE19:; return;
label_AE1A:; return;
label_AE1B:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE20:; return;
label_AE22:; return;
label_AE24:; return;
label_AE26:; return;
label_AE27:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2D:; return;
label_AE2F:; return;
label_AE31:; return;
label_AE33:; return;
label_AE35:; return;
label_AE38:; return;
label_AE39:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE41:; return;
label_AE42:; return;
label_AE43:; return;
label_AE45:; return;
label_AE46:; return;
label_AE47:; return;
label_AE48:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4B:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE4F:; return;
label_AE50:; return;
label_AE52:; return;
label_AE54:; return;
label_AE55:; return;
label_AE56:; return;
label_AE57:; return;
label_AE58:; return;
label_AE59:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE63:; return;
label_AE65:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6D:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE72:; return;
label_AE75:; return;
label_AE76:; return;
label_AE77:; return;
label_AE78:; return;
label_AE79:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE85:; return;
label_AE86:; return;
label_AE87:; return;
label_AE88:; return;
label_AE89:; return;
label_AE8A:; return;
label_AE8B:; return;
label_AE8C:; return;
label_AE8D:; return;
label_AE8E:; return;
label_AE8F:; return;
label_AE90:; return;
label_AE91:; return;
label_AE92:; return;
label_AE93:; return;
label_AE94:; return;
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9C:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA0:; return;
label_AEA1:; return;
label_AEA3:; return;
label_AEA4:; return;
label_AEA7:; return;
label_AEA8:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAE:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEDF:; return;
label_AEE0:; return;
label_AEE1:; return;
label_AEE2:; return;
label_AEE5:; return;
label_AEE6:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEB:; return;
label_AEEC:; return;
label_AEED:; return;
label_AEEE:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF1:; return;
label_AEF2:; return;
label_AEF4:; return;
label_AEF5:; return;
label_AEF6:; return;
label_AEF7:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFC:; return;
label_AEFD:; return;
label_AEFE:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF10:; return;
label_AF12:; return;
label_AF14:; return;
label_AF16:; return;
label_AF18:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1D:; return;
label_AF1F:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF25:; return;
label_AF27:; return;
label_AF28:; return;
label_AF29:; return;
label_AF2B:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF30:; return;
label_AF32:; return;
label_AF34:; return;
label_AF37:; return;
label_AF39:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF41:; return;
label_AF43:; return;
label_AF46:; return;
label_AF48:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF51:; return;
label_AF53:; return;
label_AF54:; return;
label_AF55:; return;
label_AF57:; return;
label_AF58:; return;
label_AF5A:; return;
label_AF5C:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF62:; return;
label_AF64:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6A:; return;
label_AF6C:; return;
label_AF6E:; return;
label_AF70:; return;
label_AF72:; return;
label_AF74:; return;
label_AF76:; return;
label_AF78:; return;
label_AF7A:; return;
label_AF7D:; return;
label_AF7E:; return;
label_AF81:; return;
label_AF82:; return;
label_AF85:; return;
label_AF86:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8F:; return;
label_AF91:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9B:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA6:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAD:; return;
label_AFB0:; return;
label_AFB1:; return;
label_AFB3:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB8:; return;
label_AFB9:; return;
label_AFBB:; return;
label_AFBE:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC5:; return;
label_AFC7:; return;
label_AFCA:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDC:; return;
label_AFDE:; return;
label_AFE0:; return;
label_AFE1:; return;
label_AFE3:; return;
label_AFE5:; return;
label_AFE7:; return;
label_AFE8:; return;
label_AFE9:; return;
label_AFEB:; return;
label_AFEE:; return;
label_AFF0:; return;
label_AFF2:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFF9:; return;
label_AFFA:; return;
label_AFFD:; return;
label_AFFE:; return;
label_B001:; return;
label_B003:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00A:; return;
label_B00B:; return;
label_B00C:; return;
label_B00F:; return;
label_B012:; return;
label_B015:; return;
label_B016:; return;
label_B018:; return;
label_B01B:; return;
label_B01C:; return;
label_B01E:; return;
label_B020:; return;
label_B022:; return;
label_B024:; return;
label_B025:; return;
label_B026:; return;
label_B028:; return;
label_B02A:; return;
label_B02B:; return;
label_B02D:; return;
label_B02F:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03B:; return;
label_B03D:; return;
label_B03F:; return;
label_B041:; return;
label_B043:; return;
label_B045:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04D:; return;
label_B04E:; return;
label_B04F:; return;
label_B050:; return;
label_B053:; return;
label_B054:; return;
label_B057:; return;
label_B058:; return;
label_B05B:; return;
label_B05E:; return;
label_B060:; return;
label_B061:; return;
label_B063:; return;
label_B065:; return;
label_B067:; return;
label_B069:; return;
label_B06B:; return;
label_B06D:; return;
label_B06F:; return;
label_B071:; return;
label_B073:; return;
label_B075:; return;
label_B077:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07E:; return;
label_B081:; return;
label_B083:; return;
label_B084:; return;
label_B086:; return;
label_B088:; return;
label_B08A:; return;
label_B08B:; return;
label_B08D:; return;
label_B08E:; return;
label_B090:; return;
label_B093:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09C:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A7:; return;
label_B0A9:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B1:; return;
label_B0B3:; return;
label_B0B6:; return;
label_B0B8:; return;
label_B0BA:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C2:; return;
label_B0C4:; return;
label_B0C6:; return;
label_B0C8:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D0:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D7:; return;
label_B0DA:; return;
label_B0DC:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0EA:; return;
label_B0EC:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FA:; return;
label_B0FC:; return;
label_B0FF:; return;
label_B101:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10A:; return;
label_B10C:; return;
label_B10F:; return;
label_B111:; return;
label_B113:; return;
label_B115:; return;
label_B117:; return;
label_B119:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B122:; return;
label_B124:; return;
label_B126:; return;
label_B128:; return;
label_B12A:; return;
label_B12C:; return;
label_B12E:; return;
label_B130:; return;
label_B132:; return;
label_B134:; return;
label_B136:; return;
label_B138:; return;
label_B139:; return;
label_B13A:; return;
label_B13C:; return;
label_B13E:; return;
label_B141:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B147:; return;
label_B149:; return;
label_B14A:; return;
label_B14B:; return;
label_B14D:; return;
label_B150:; return;
label_B152:; return;
label_B154:; return;
label_B156:; return;
label_B158:; return;
label_B159:; return;
label_B15B:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B166:; return;
label_B168:; return;
label_B16A:; return;
label_B16B:; return;
label_B16D:; return;
label_B16E:; return;
label_B16F:; return;
label_B171:; return;
label_B173:; return;
label_B175:; return;
label_B177:; return;
label_B179:; return;
label_B17B:; return;
label_B17E:; return;
label_B180:; return;
label_B182:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18C:; return;
label_B18E:; return;
label_B18F:; return;
label_B190:; return;
label_B192:; return;
label_B194:; return;
label_B196:; return;
label_B198:; return;
label_B199:; return;
label_B19C:; return;
label_B19D:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1AA:; return;
label_B1AC:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1B9:; return;
label_B1BA:; return;
label_B1BB:; return;
label_B1BC:; return;
label_B1BD:; return;
label_B1BE:; return;
label_B1BF:; return;
label_B1C0:; return;
label_B1C3:; return;
label_B1C5:; return;
label_B1C7:; return;
label_B1C9:; return;
label_B1CB:; return;
label_B1CD:; return;
label_B1CF:; return;
label_B1D1:; return;
label_B1D3:; return;
label_B1D5:; return;
label_B1D7:; return;
label_B1D9:; return;
label_B1DB:; return;
label_B1DD:; return;
label_B1DF:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F3:; return;
label_B1F5:; return;
label_B1F7:; return;
label_B1F9:; return;
label_B1FA:; return;
label_B1FC:; return;
label_B1FE:; return;
label_B200:; return;
label_B202:; return;
label_B205:; return;
label_B207:; return;
label_B209:; return;
label_B20B:; return;
label_B20C:; return;
label_B20E:; return;
label_B210:; return;
label_B212:; return;
label_B214:; return;
label_B216:; return;
label_B217:; return;
label_B21A:; return;
label_B21B:; return;
label_B21D:; return;
label_B21F:; return;
label_B222:; return;
label_B225:; return;
label_B227:; return;
label_B228:; return;
label_B229:; return;
label_B22A:; return;
label_B22B:; return;
label_B22E:; return;
label_B230:; return;
label_B232:; return;
label_B234:; return;
label_B237:; return;
label_B238:; return;
label_B23A:; return;
label_B23C:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B244:; return;
label_B245:; return;
label_B247:; return;
label_B24A:; return;
label_B24D:; return;
label_B24E:; return;
label_B24F:; return;
label_B250:; return;
label_B252:; return;
label_B254:; return;
label_B256:; return;
label_B258:; return;
label_B25B:; return;
label_B25D:; return;
label_B25F:; return;
label_B260:; return;
label_B261:; return;
label_B263:; return;
label_B266:; return;
label_B267:; return;
label_B269:; return;
label_B26B:; return;
label_B26C:; return;
label_B26E:; return;
label_B270:; return;
label_B271:; return;
label_B273:; return;
label_B275:; return;
label_B277:; return;
label_B279:; return;
label_B27B:; return;
label_B27E:; return;
label_B280:; return;
label_B282:; return;
label_B284:; return;
label_B286:; return;
label_B289:; return;
label_B28B:; return;
label_B28C:; return;
label_B28D:; return;
label_B28F:; return;
label_B290:; return;
label_B293:; return;
label_B294:; return;
label_B297:; return;
label_B29A:; return;
label_B29C:; return;
label_B29E:; return;
label_B2A0:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A9:; return;
label_B2AB:; return;
label_B2AC:; return;
label_B2AE:; return;
label_B2B0:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B6:; return;
label_B2B9:; return;
label_B2BB:; return;
label_B2BD:; return;
label_B2BF:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CA:; return;
label_B2CB:; return;
label_B2CC:; return;
label_B2CD:; return;
label_B2CE:; return;
label_B2CF:; return;
label_B2D0:; return;
label_B2D2:; return;
label_B2D4:; return;
label_B2D6:; return;
label_B2D8:; return;
label_B2DA:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E4:; return;
label_B2E6:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2ED:; return;
label_B2EF:; return;
label_B2F1:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2FA:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B2FF:; return;
label_B301:; return;
label_B303:; return;
label_B305:; return;
label_B307:; return;
label_B309:; return;
label_B30B:; return;
label_B30E:; return;
label_B310:; return;
label_B313:; return;
label_B314:; return;
label_B317:; return;
label_B319:; return;
label_B31A:; return;
label_B31B:; return;
label_B31D:; return;
label_B31E:; return;
label_B31F:; return;
label_B321:; return;
label_B324:; return;
label_B325:; return;
label_B328:; return;
label_B32B:; return;
label_B32C:; return;
label_B32E:; return;
label_B32F:; return;
label_B330:; return;
label_B332:; return;
label_B334:; return;
label_B336:; return;
label_B338:; return;
label_B339:; return;
label_B33B:; return;
label_B33E:; return;
label_B340:; return;
label_B342:; return;
label_B344:; return;
label_B346:; return;
label_B349:; return;
label_B34B:; return;
label_B34C:; return;
label_B34E:; return;
label_B34F:; return;
label_B352:; return;
label_B354:; return;
label_B355:; return;
label_B357:; return;
label_B359:; return;
label_B35A:; return;
label_B35C:; return;
label_B35D:; return;
label_B35F:; return;
label_B362:; return;
label_B365:; return;
label_B368:; return;
label_B36A:; return;
label_B36B:; return;
}

void func_A7BE_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7BE_b5");
#endif
    func_A7BE_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A86F_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A86F_b5");
#endif
    func_A7BE_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A80C_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A80C_b5");
#endif
    func_A7BE_b5_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A833_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A833_b5");
#endif
    func_A7BE_b5_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A87D_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A87D_b5");
#endif
    func_A7BE_b5_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8C7_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8C7_b5");
#endif
    func_A7BE_b5_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A921_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A921_b5");
#endif
label_A921:;
    /* $A921: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA921); return;
}

void func_A1D6_b5_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A1DD;
    }
label_A1D6:;
    /* $A1D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1D8:; /* needle_man_jump_states */
    /* $A1D8: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A1DA:;
    /* $A1DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1DD:;
    /* $A1DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01DF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A1E0:; /* spawn_needle */
    /* $A1E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A1E2:; /* main_proto_man_gemini_cutscene */
    /* $A1E2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D6;
    }
label_A1E4:;
    /* $A1E4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A1E6:;
    /* $A1E6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8675 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1E9:;
    /* $A1E9: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1EC:;
    /* $A1EC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1ED:;
    /* $A1ED: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1E6;
    }
label_A1EF:;
    /* $A1EF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_A1F1:;
    /* $A1F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86BB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1F7:;
    /* $A1F7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1F8:;
    /* $A1F8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1F1;
    }
label_A1FA:;
    /* $A1FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01FC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1FD:;
    /* $A1FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A1FF:;
    /* $A1FF: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A202:;
    /* $A202: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A204:;
    /* $A204: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A207:;
    /* $A207: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A209:;
    /* $A209: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_A20C:;
    /* $A20C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A20E:;
    /* $A20E: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A211:;
    /* $A211: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A213:;
    /* $A213: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A216:;
    /* $A216: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A218:;
    /* $A218: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A21B:;
    /* $A21B: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_A21E:;
    /* $A21E: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_A221:;
    /* $A221: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A224:;
    /* $A224: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A227:;
    /* $A227: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A22A:;
    /* $A22A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A22D:;
    /* $A22D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A22F:;
    /* $A22F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A232:;
    /* $A232: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A234:;
    /* $A234: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A237:;
    /* $A237: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0239); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_A23A:;
    /* $A23A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x023C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA23A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A23D:;
    /* $A23D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A240:;
    /* $A240: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A291; }
label_A242:;
    /* $A242: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0244); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8603, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA242, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A245:;
    /* $A245: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A247:;
    /* $A247: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A249:;
    /* $A249: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A269; }
label_A24B:;
    /* $A24B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A24F:;
    /* $A24F: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0104); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A252:;
    /* $A252: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A253:;
    /* $A253: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_A255:;
    /* $A255: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86D9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A25B:;
    /* $A25B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A25C:;
    /* $A25C: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A25D:;
    /* $A25D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A25F:;
    /* $A25F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A255;
    }
label_A261:;
    /* $A261: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0104); FLAG_NZ(g_cpu.A);
label_A264:;
    /* $A264: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A266:;
    /* $A266: 8D */ maybe_trigger_vblank(4); nes_write(0x0104, g_cpu.A);
label_A269:;
    /* $A269: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A26B:;
    /* $A26B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A26D:;
    /* $A26D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A27E; }
label_A26F:;
    /* $A26F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0105); FLAG_NZ(g_cpu.A);
label_A272:;
    /* $A272: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0105; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A275:;
    /* $A275: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A277:;
    /* $A277: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A278:;
    /* $A278: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x86DF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A27B:;
    /* $A27B: 8D */ maybe_trigger_vblank(4); nes_write(0x060D, g_cpu.A);
label_A27E:;
    /* $A27E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A280:;
    /* $A280: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A289; }
label_A284:;
    /* $A284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A286:;
    /* $A286: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0288); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA286, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A289:;
    /* $A289: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A28B:;
    /* $A28B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x028D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA28B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A28E:;
    /* $A28E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x823D, 5); return;
label_A291:;
    /* $A291: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A293:;
    /* $A293: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_A295:;
    /* $A295: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0297); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 5)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA295, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A298:;
    /* $A298: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A29A:;
    /* $A29A: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_A29D:;
    /* $A29D: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A2A0:;
    /* $A2A0: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A2A3:;
    /* $A2A3: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A2A6:;
    /* $A2A6: 8D */ maybe_trigger_vblank(4); nes_write(0x0560, g_cpu.A);
label_A2A9:;
    /* $A2A9: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_A2AC:;
    /* $A2AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_A2AF:;
    /* $A2AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A2B2:;
    /* $A2B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A2B4:;
    /* $A2B4: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A2B7:;
    /* $A2B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A2B9:;
    /* $A2B9: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A2BC:;
    /* $A2BC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_A2C1:;
    /* $A2C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C3:;
    /* $A2C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A2C6:;
    /* $A2C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2C8:;
    /* $A2C8: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A2CB:;
    /* $A2CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_A2CD:;
    /* $A2CD: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A2D0:;
    /* $A2D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_A2D2:;
    /* $A2D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A2D4:;
    /* $A2D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2D7:;
    /* $A2D7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2DD:;
    /* $A2DD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A2DE:;
    /* $A2DE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2D2;
    }
label_A2E0:;
    /* $A2E0: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_A2E2:;
    /* $A2E2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A2E5:;
    /* $A2E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2EA; }
label_A2E7:;
    /* $A2E7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8439, 5); return;
label_A2EA:;
    /* $A2EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A2ED:;
    /* $A2ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A2EF:;
    /* $A2EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F4; }
label_A2F1:;
    /* $A2F1: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83A8, 5); return;
label_A2F4:;
    /* $A2F4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A2F7:;
    /* $A2F7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x60; g_cpu.C=(g_cpu.A>=0x60)?1:0; FLAG_NZ(r&0xFF); }
label_A2F9:;
    /* $A2F9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A301; }
label_A2FB:;
    /* $A2FB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2FE:;
    /* $A2FE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83E7, 5); return;
label_A301:;
    /* $A301: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A303:;
    /* $A303: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A306:;
    /* $A306: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A344; }
label_A308:;
    /* $A308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_A30A:;
    /* $A30A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A30C:;
    /* $A30C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x030E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA30C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A30F:;
    /* $A30F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_A315:;
    /* $A315: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_A318:;
    /* $A318: 8D */ maybe_trigger_vblank(4); nes_write(0x0581, g_cpu.A);
label_A31B:;
    /* $A31B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A31E:;
    /* $A31E: 8D */ maybe_trigger_vblank(4); nes_write(0x0381, g_cpu.A);
label_A321:;
    /* $A321: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_A324:;
    /* $A324: 8D */ maybe_trigger_vblank(4); nes_write(0x03E1, g_cpu.A);
label_A327:;
    /* $A327: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A32A:;
    /* $A32A: 8D */ maybe_trigger_vblank(4); nes_write(0x0361, g_cpu.A);
label_A32D:;
    /* $A32D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_A330:;
    /* $A330: 8D */ maybe_trigger_vblank(4); nes_write(0x03C1, g_cpu.A);
label_A333:;
    /* $A333: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A337:;
    /* $A337: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0339); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA337, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A33A:;
    /* $A33A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_A33C:;
    /* $A33C: 8D */ maybe_trigger_vblank(4); nes_write(0x0501, g_cpu.A);
label_A33F:;
    /* $A33F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB4; FLAG_NZ(g_cpu.A);
label_A341:;
    /* $A341: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A344:;
    /* $A344: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0501); FLAG_NZ(g_cpu.A);
label_A347:;
    /* $A347: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x21; g_cpu.C=(g_cpu.A>=0x21)?1:0; FLAG_NZ(r&0xFF); }
label_A349:;
    /* $A349: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A352; }
label_A34B:;
    /* $A34B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A34D:;
    /* $A34D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A35C; }
label_A34F:;
    /* $A34F: CE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A352:;
    /* $A352: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A354:;
    /* $A354: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A356:;
    /* $A356: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A359:;
    /* $A359: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A35C:;
    /* $A35C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A375; }
label_A361:;
    /* $A361: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0521; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A364:;
    /* $A364: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0521); FLAG_NZ(g_cpu.A);
label_A367:;
    /* $A367: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x78; g_cpu.C=(g_cpu.A>=0x78)?1:0; FLAG_NZ(r&0xFF); }
label_A369:;
    /* $A369: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A372; }
label_A36B:;
    /* $A36B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A36D:;
    /* $A36D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5E; FLAG_NZ(g_cpu.A);
label_A36F:;
    /* $A36F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0371); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA36F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A372:;
    /* $A372: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A375:;
    /* $A375: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 85 */ maybe_trigger_vblank(3); nes_write(0x95, g_cpu.A);
label_A379:;
    /* $A379: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03C1; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37C:;
    /* $A37C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0501; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A37F:;
    /* $A37F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3EA; }
label_A381:;
    /* $A381: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A383:;
    /* $A383: 8E */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.X);
label_A386:;
    /* $A386: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5F; FLAG_NZ(g_cpu.A);
label_A388:;
    /* $A388: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x038A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA388, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A38B:;
    /* $A38B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A38E:;
    /* $A38E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A390:;
    /* $A390: 8D */ maybe_trigger_vblank(4); nes_write(0x0521, g_cpu.A);
label_A393:;
    /* $A393: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A395:;
    /* $A395: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A398:;
    /* $A398: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_A39D:;
    /* $A39D: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_A3A0:;
    /* $A3A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A3A2:;
    /* $A3A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A3A5:;
    /* $A3A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x83EA, 5); return;
label_A3EA:;
    /* $A3EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0540); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0460); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A3F1:;
    /* $A3F1: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A3F4:;
    /* $A3F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A3F6:;
    /* $A3F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8735 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F9:;
    /* $A3F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3FC:;
    /* $A3FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8736 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FF:;
    /* $A3FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A402:;
    /* $A402: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8737 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A405:;
    /* $A405: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A408:;
    /* $A408: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8738 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A40B:;
    /* $A40B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A40C:;
    /* $A40C: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0540); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A40F:;
    /* $A40F: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A412:;
    /* $A412: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A413:;
    /* $A413: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A414:;
    /* $A414: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A415:;
    /* $A415: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A416:;
    /* $A416: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x28; g_cpu.C=(g_cpu.X>=0x28)?1:0; FLAG_NZ(r&0xFF); }
label_A418:;
    /* $A418: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3F6;
    }
label_A41A:;
    /* $A41A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_A41C:;
    /* $A41C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A41E:;
    /* $A41E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A422; }
label_A420:;
    /* $A420: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A422:;
    /* $A422: 86 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.X);
label_A424:;
    /* $A424: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0560); FLAG_NZ(g_cpu.A);
label_A427:;
    /* $A427: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A429:;
    /* $A429: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A430; }
label_A42B:;
    /* $A42B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x28; FLAG_NZ(g_cpu.A);
label_A42D:;
    /* $A42D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x042F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA42D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A430:;
    /* $A430: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0432); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD80(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA430, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A433:;
    /* $A433: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0560; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A436:;
    /* $A436: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x82E2, 5); return;
}

void func_A1D6_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1D6_b5");
#endif
    func_A1D6_b5_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1DD_b5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1DD_b5");
#endif
    func_A1D6_b5_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}
