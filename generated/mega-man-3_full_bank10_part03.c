/* mega-man-3_full_bank10_part03.c — PRG bank 10 function bodies (sub-part 3).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_B9A5_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A5_b10");
#endif
label_B9A5:;
    /* $B9A5: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9A7:;
    /* $B9A7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x43 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9A9:;
    /* $B9A9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AB:;
    /* $B9AB: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC3 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AD:;
    /* $B9AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9AF:;
    /* $B9AF: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B1:;
    /* $B9B1: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B3:;
    /* $B9B3: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B5:;
    /* $B9B5: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B7:;
    /* $B9B7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9B9:;
    /* $B9B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BB:;
    /* $B9BB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BD:;
    /* $B9BD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BF:;
    /* $B9BF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9C1:;
    /* $B9C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C3:;
    /* $B9C3: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9C4:;
    /* $B9C4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C6:;
    /* $B9C6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C8:;
    /* $B9C8: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xF9 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CA:;
    /* $B9CA: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CC:;
    /* $B9CC: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03FA); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9CF:;
    /* $B9CF: FA */ maybe_trigger_vblank(2); /* NOP */
label_B9D0:;
    /* $B9D0: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D2:;
    /* $B9D2: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xFA + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9D4:;
    /* $B9D4: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9D6:;
    /* $B9D6: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x43F9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9D9:;
    /* $B9D9: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9DA:;
    /* $B9DA: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9DC:;
    /* $B9DC: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9DE:;
    /* $B9DE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8F + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9E0:;
    /* $B9E0: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x02E7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9E3:;
    /* $B9E3: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9E5:; /* main_spark_falling_platform */
    /* $B9E5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9E6:;
    /* $B9E6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9E7:;
    /* $B9E7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9E9:;
    /* $B9E9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9EB:;
    /* $B9EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9EC:;
    /* $B9EC: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9ED:;
    /* $B9ED: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9EE:;
    /* $B9EE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9EF:;
    /* $B9EF: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F1:;
    /* $B9F1: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9F4:;
    /* $B9F4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9F5:;
    /* $B9F5: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F7:;
    /* $B9F7: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F9:;
    /* $B9F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FB:;
    /* $B9FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FD:;
    /* $B9FD: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA00:;
    /* $BA00: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA01:;
    /* $BA01: 8F */ maybe_trigger_vblank(4); nes_write(0xE75E, g_cpu.A & g_cpu.X); /* SAX */
label_BA04:;
    /* $BA04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA05:;
    /* $BA05: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA07:;
    /* $BA07: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA08:;
    /* $BA08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA09:;
    /* $BA09: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA0B:;
    /* $BA0B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA0D:;
    /* $BA0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA0E:;
    /* $BA0E: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA0F:;
    /* $BA0F: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA10:;
    /* $BA10: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA11:;
    /* $BA11: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA13:;
    /* $BA13: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA15:;
    /* $BA15: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA16:;
    /* $BA16: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA17:;
    /* $BA17: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BA18:;
    /* $BA18: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1A:;
    /* $BA1A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xE6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1C:;
    /* $BA1C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA1D:;
    /* $BA1D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA1F:;
    /* $BA1F: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA22:;
    /* $BA22: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA23:;
    /* $BA23: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x94 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA25:;
    /* $BA25: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA27:;
    /* $BA27: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA29:;
    /* $BA29: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA2B:;
    /* $BA2B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA2D:;
    /* $BA2D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xDA93); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA30:;
    /* $BA30: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA31:;
    /* $BA31: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA34:;
    /* $BA34: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA35:;
    /* $BA35: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDD02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA38:;
    /* $BA38: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA39:;
    /* $BA39: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA3C:;
    /* $BA3C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA3D:;
    /* $BA3D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BA3F:;
    /* $BA3F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA41:;
    /* $BA41: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BA43:;
    /* $BA43: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA45:;
    /* $BA45: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA47:;
    /* $BA47: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA49:;
    /* $BA49: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x95 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4B:;
    /* $BA4B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BA4C:;
    /* $BA4C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4E:;
    /* $BA4E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA50:;
    /* $BA50: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA52:;
    /* $BA52: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA54:;
    /* $BA54: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03DF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA57:;
    /* $BA57: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BA59:;
    /* $BA59: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE083 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA5C:;
    /* $BA5C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BA5E:;
    /* $BA5E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02F8); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA61:;
    /* $BA61: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA62:;
    /* $BA62: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA63:;
    /* $BA63: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA64:;
    /* $BA64: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA66:;
    /* $BA66: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA68:;
    /* $BA68: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA6B:;
    /* $BA6B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEC2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA6E:;
    /* $BA6E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA6F:;
    /* $BA6F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA72:;
    /* $BA72: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA75:;
    /* $BA75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF42 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA78:;
    /* $BA78: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA7A:;
    /* $BA7A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA7C:;
    /* $BA7C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x82FE); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA7F:;
    /* $BA7F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD42 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA82:;
    /* $BA82: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA84:;
    /* $BA84: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA85:;
    /* $BA85: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA87:;
    /* $BA87: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEE03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA8A:;
    /* $BA8A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8C:;
    /* $BA8C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8E:;
    /* $BA8E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA90:;
    /* $BA90: 8E */ maybe_trigger_vblank(4); nes_write(0x00C7, g_cpu.X);
label_BA93:;
    /* $BA93: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA94:;
    /* $BA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA94); return;
}

void func_968D_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_968D_b10");
#endif
label_968D:;
    /* $968D: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4FEF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9690:;
    /* $9690: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE4D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9693:;
    /* $9693: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF3 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9695:;
    /* $9695: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_9696:;
    /* $9696: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xE677 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9699:;
    /* $9699: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_969B:;
    /* $969B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xEF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_969D:;
    /* $969D: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x45FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_96A0:;
    /* $96A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x67C7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_96A3:;
    /* $96A3: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x55DF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_96A6:;
    /* $96A6: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF5D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96A9:;
    /* $96A9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96AB:;
    /* $96AB: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96AD:;
    /* $96AD: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96AF:;
    /* $96AF: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96B1:;
    /* $96B1: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x4F7B + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96B4:;
    /* $96B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF75 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_96B7:;
    /* $96B7: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_96B9:;
    /* $96B9: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xBE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_96BB:;
    /* $96BB: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x47EF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_96BE:;
    /* $96BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6F5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_96C1:;
    /* $96C1: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x7F); FLAG_NZ(g_cpu.A);
label_96C3:;
    /* $96C3: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xEF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96C5:; /* main_yambow */
    /* $96C5: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96C7:;
    /* $96C7: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD0) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_96C9:;
    /* $96C9: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFB + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_96CC:;
    /* $96CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_96CF:;
    /* $96CF: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96D1:;
    /* $96D1: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5DED + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96D4:;
    /* $96D4: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD75C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96D7:;
    /* $96D7: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_96D9:;
    /* $96D9: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xFD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_96DB:;
    /* $96DB: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96DD:;
    /* $96DD: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBC + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96DF:;
    /* $96DF: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_96E1:;
    /* $96E1: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96E3:;
    /* $96E3: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7F + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_96E5:;
    /* $96E5: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0xF9BF); FLAG_NZ(g_cpu.A);
label_96E8:;
    /* $96E8: 7A */ maybe_trigger_vblank(2); /* NOP */
label_96E9:;
    /* $96E9: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5B5E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_96EC:;
    /* $96EC: FA */ maybe_trigger_vblank(2); /* NOP */
label_96ED:;
    /* $96ED: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_96EF:;
    /* $96EF: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96F1:;
    /* $96F1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF6 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96F3:;
    /* $96F3: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_96F5:;
    /* $96F5: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xBD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96F7:;
    /* $96F7: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_96F9:;
    /* $96F9: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96FB:;
    /* $96FB: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF7EB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96FE:;
    /* $96FE: FA */ maybe_trigger_vblank(2); /* NOP */
label_96FF:;
    /* $96FF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9701:;
    /* $9701: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xBF) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9703:;
    /* $9703: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x5EBE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9706:;
    /* $9706: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9F11 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9709:;
    /* $9709: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_970B:;
    /* $970B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xED + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_970D:;
    /* $970D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_970F:;
    /* $970F: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xC6 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9711:;
    /* $9711: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7F + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9713:;
    /* $9713: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x4FFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9716:;
    /* $9716: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x7E55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9719:;
    /* $9719: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x55FF); FLAG_NZ(g_cpu.A);
label_971C:;
    /* $971C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF54 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_971F:;
    /* $971F: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9721:;
    /* $9721: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xD57D + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9724:;
    /* $9724: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF760 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9727:;
    /* $9727: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_972A:;
    /* $972A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF51 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_972D:;
    /* $972D: 3C */ maybe_trigger_vblank(4); (void)nes_read((0xFF77 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9730:;
    /* $9730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9733:;
    /* $9733: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x56FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9736:;
    /* $9736: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9739:;
    /* $9739: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_973B:;
    /* $973B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_973D:;
    /* $973D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_973F:;
    /* $973F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x4DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9742:;
    /* $9742: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF45 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9745:;
    /* $9745: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x7DDC); FLAG_NZ(g_cpu.A);
label_9748:;
    /* $9748: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF47 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_974B:;
    /* $974B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_974D:;
    /* $974D: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_974F:;
    /* $974F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9751:;
    /* $9751: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xDF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9753:;
    /* $9753: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9755:;
    /* $9755: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x51DD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9758:;
    /* $9758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_975B:;
    /* $975B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_975D:;
    /* $975D: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_975F:;
    /* $975F: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9761:;
    /* $9761: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9763:;
    /* $9763: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFB) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9765:;
    /* $9765: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9767:;
    /* $9767: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xB7 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9769:;
    /* $9769: 97 */ maybe_trigger_vblank(4); nes_write((0xFD + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_976B:;
    /* $976B: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7F + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_976D:;
    /* $976D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_976F:;
    /* $976F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x65FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9772:;
    /* $9772: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7DD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9775:;
    /* $9775: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9778:;
    /* $9778: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFB57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_977B:;
    /* $977B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_977D:;
    /* $977D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_977F:;
    /* $977F: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x7B; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9781:;
    /* $9781: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xE5) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9783:; /* main_met */
    /* $9783: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9785:;
    /* $9785: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9787:;
    /* $9787: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9789:;
    /* $9789: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xEE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_978B:;
    /* $978B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_978D:;
    /* $978D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF5FF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9790:;
    /* $9790: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9793:;
    /* $9793: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9796:;
    /* $9796: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9799:;
    /* $9799: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_979B:;
    /* $979B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x35EF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_979E:;
    /* $979E: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97A1:;
    /* $97A1: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97A3:;
    /* $97A3: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x47BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97A6:;
    /* $97A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97A9:;
    /* $97A9: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97AB:;
    /* $97AB: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97AD:;
    /* $97AD: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97AF:;
    /* $97AF: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_97B1:;
    /* $97B1: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7F + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97B3:;
    /* $97B3: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x75BF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_97B6:;
    /* $97B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF17 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97B9:;
    /* $97B9: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD7D7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97BC:;
    /* $97BC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97BE:;
    /* $97BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97C1:;
    /* $97C1: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97C3:;
    /* $97C3: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97C5:;
    /* $97C5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x51FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97C8:;
    /* $97C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97CB:;
    /* $97CB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_97CD:;
    /* $97CD: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x37BB + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97D0:;
    /* $97D0: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEE15 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97D3:;
    /* $97D3: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97D5:;
    /* $97D5: FC */ maybe_trigger_vblank(4); (void)nes_read((0x57FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_97D8:;
    /* $97D8: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xDFD4); FLAG_NZ(g_cpu.A);
label_97DB:;
    /* $97DB: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_97DD:;
    /* $97DD: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97DF:;
    /* $97DF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97E1:;
    /* $97E1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97E4:;
    /* $97E4: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFFF1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97E7:;
    /* $97E7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97E9:;
    /* $97E9: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x5FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97EC:;
    /* $97EC: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFF56 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_97EF:;
    /* $97EF: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97F1:;
    /* $97F1: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_97F3:;
    /* $97F3: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_97F5:;
    /* $97F5: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97F7:;
    /* $97F7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_97F9:;
    /* $97F9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x27DF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97FC:;
    /* $97FC: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xFFD5); FLAG_NZ(g_cpu.A);
label_97FF:;
    /* $97FF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0000 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9802:;
    /* $9802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9802); return;
}

void func_8504_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b10");
#endif
label_8504:;
    /* $8504: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8505:;
    /* $8505: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xFA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8507:;
    /* $8507: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF8F3 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_850A:;
    /* $850A: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850C:;
    /* $850C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBF0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850F:;
    /* $850F: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8510:;
    /* $8510: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFB00 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8513:;
    /* $8513: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8514:;
    /* $8514: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8516:;
    /* $8516: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8518:;
    /* $8518: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_851A:;
    /* $851A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xF4; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_851C:;
    /* $851C: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_851E:;
    /* $851E: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8520:;
    /* $8520: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF3FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8523:;
    /* $8523: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8524:;
    /* $8524: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8526:;
    /* $8526: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBE8 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8529:;
    /* $8529: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_852E; }
label_852B:;
    /* $852B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_852C:;
    /* $852C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_852E:;
    /* $852E: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8530:;
    /* $8530: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF8) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8532:;
    /* $8532: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFB08 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8535:;
    /* $8535: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8535); return;
}

void func_809D_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_809D_b10");
#endif
label_809D:;
    /* $809D: EE */ maybe_trigger_vblank(6); { uint16_t a=0xF6F9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80A0:;
    /* $80A0: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FE + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80A3:;
    /* $80A3: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80A5:;
    /* $80A5: EE */ maybe_trigger_vblank(6); { uint16_t a=0xF601; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80A8:;
    /* $80A8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80AA:;
    /* $80AA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80AC:;
    /* $80AC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF6; FLAG_NZ(g_cpu.A);
label_80AE:;
    /* $80AE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFE; FLAG_NZ(g_cpu.A);
label_80B0:;
    /* $80B0: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x06; FLAG_NZ(g_cpu.A);
label_80B2:;
    /* $80B2: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF7) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80B4:;
    /* $80B4: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFF7 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80B7:;
    /* $80B7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80B9:;
    /* $80B9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x02E9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80BC:;
    /* $80BC: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xFA; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80BE:;
    /* $80BE: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80C0:;
    /* $80C0: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80C2:;
    /* $80C2: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFA) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80C4:;
    /* $80C4: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF2) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80C6:;
    /* $80C6: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF90A + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80C9:;
    /* $80C9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_80CA:;
    /* $80CA: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80CD:;
    /* $80CD: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_80CE:;
    /* $80CE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80D0:;
    /* $80D0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80D2:;
    /* $80D2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80D4:;
    /* $80D4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80D6:;
    /* $80D6: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_80D8:;
    /* $80D8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFA; FLAG_NZ(g_cpu.A);
label_80DA:;
    /* $80DA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF2; FLAG_NZ(g_cpu.A);
label_80DC:;
    /* $80DC: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80DE:;
    /* $80DE: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF01 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80E1:;
    /* $80E1: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_80E2:;
    /* $80E2: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_80E4:;
    /* $80E4: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80E7:;
    /* $80E7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_80E8:;
    /* $80E8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80EA:;
    /* $80EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80EC:;
    /* $80EC: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xFA; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80EE:;
    /* $80EE: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80F0:;
    /* $80F0: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF2) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80F2:;
    /* $80F2: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFA) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80F4:;
    /* $80F4: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80F6:;
    /* $80F6: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80F8:;
    /* $80F8: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9F2 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80FB:;
    /* $80FB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_80FC:;
    /* $80FC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80FE:;
    /* $80FE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8100:;
    /* $8100: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF3; FLAG_NZ(g_cpu.A);
label_8102:; /* check_weapon_hit */
    /* $8102: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFB; FLAG_NZ(g_cpu.A);
label_8104:;
    /* $8104: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_8106:; /* play_sound_ID */
    /* $8106: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_8108:;
    /* $8108: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFB) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_810A:;
    /* $810A: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FB + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_810D:;
    /* $810D: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF6F9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8110:;
    /* $8110: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8114:;
    /* $8114: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xFE; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8116:;
    /* $8116: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF6; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8118:;
    /* $8118: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_811A:;
    /* $811A: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_811C:;
    /* $811C: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF6) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_811E:;
    /* $811E: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xEE) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8120:;
    /* $8120: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF906 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8123:;
    /* $8123: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0601; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8126:;
    /* $8126: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8128:;
    /* $8128: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x05; FLAG_NZ(g_cpu.A);
label_812A:;
    /* $812A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFD; FLAG_NZ(g_cpu.A);
label_812C:;
    /* $812C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF5; FLAG_NZ(g_cpu.A);
label_812E:;
    /* $812E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xED; FLAG_NZ(g_cpu.A);
label_8130:;
    /* $8130: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8132:;
    /* $8132: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFD + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8135:;
    /* $8135: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8136:;
    /* $8136: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFB00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8139:;
    /* $8139: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8139); return;
}

void func_9893_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9893_b10");
#endif
label_9893:;
    /* $9893: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9893); return;
}

void func_B893_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B893_b10");
#endif
label_B893:;
    /* $B893: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B897; }
label_B895:;
    /* $B895: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B897:;
    /* $B897: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_B899:;
    /* $B899: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B89B:;
    /* $B89B: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B89D:;
    /* $B89D: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B89E:;
    /* $B89E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89F:;
    /* $B89F: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x56); FLAG_NZ(g_cpu.A);
label_B8A1:;
    /* $B8A1: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B8A4:;
    /* $B8A4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8A6:;
    /* $B8A6: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xE0 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B8A8:;
    /* $B8A8: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xFE + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B8AA:;
    /* $B8AA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8AC:;
    /* $B8AC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x85 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8AE:;
    /* $B8AE: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xE3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B8B0:;
    /* $B8B0: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B8B1:;
    /* $B8B1: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x42); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B8B3:;
    /* $B8B3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x42); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8B5:;
    /* $B8B5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8B7:;
    /* $B8B7: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B8B9:;
    /* $B8B9: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B8BA:;
    /* $B8BA: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B8BB:;
    /* $B8BB: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xA0 + g_cpu.X) & 0xFF), g_cpu.A);
label_B8BD:;
    /* $B8BD: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFD02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B8C0:;
    /* $B8C0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8C2:;
    /* $B8C2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x02FB; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8C5:;
    /* $B8C5: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xF78A); FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8CA:;
    /* $B8CA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8CC:;
    /* $B8CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8CD:;
    /* $B8CD: FA */ maybe_trigger_vblank(2); /* NOP */
label_B8CE:;
    /* $B8CE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8CF:;
    /* $B8CF: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D1:;
    /* $B8D1: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D3:;
    /* $B8D3: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D5:;
    /* $B8D5: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D7:;
    /* $B8D7: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D9:;
    /* $B8D9: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8DB:;
    /* $B8DB: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8DD:;
    /* $B8DD: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8DF:;
    /* $B8DF: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8E1:;
    /* $B8E1: E2 */ maybe_trigger_vblank(2); /* NOP */
label_B8E3:;
    /* $B8E3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x78); FLAG_NZ(g_cpu.A);
label_B8E5:;
    /* $B8E5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA01 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8E8:;
    /* $B8E8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xBB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8EA:;
    /* $B8EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8EC:;
    /* $B8EC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8EE:;
    /* $B8EE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8F0:;
    /* $B8F0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8F2:;
    /* $B8F2: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B8F3:;
    /* $B8F3: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B8F5:;
    /* $B8F5: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B8F7:;
    /* $B8F7: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B8F9:;
    /* $B8F9: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBD01 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B8FC:;
    /* $B8FC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xBE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8FE:;
    /* $B8FE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B900:;
    /* $B900: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_B902:;
    /* $B902: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B904:;
    /* $B904: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B906:;
    /* $B906: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B908:;
    /* $B908: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B90A:;
    /* $B90A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B90C:;
    /* $B90C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B90E:;
    /* $B90E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B90F:;
    /* $B90F: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x25; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B911:;
    /* $B911: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1914), 10); return; }
label_B913:;
    /* $B913: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B915:;
    /* $B915: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B916:;
    /* $B916: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B918:;
    /* $B918: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B91A:;
    /* $B91A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B91C:;
    /* $B91C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B91E:;
    /* $B91E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B91F:;
    /* $B91F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B920:;
    /* $B920: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xA0; g_cpu.C=(g_cpu.X>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_B922:;
    /* $B922: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B926:;
    /* $B926: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B928:;
    /* $B928: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B92A:;
    /* $B92A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B92C:;
    /* $B92C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B92E:;
    /* $B92E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B92F:;
    /* $B92F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_B931:; /* main_trap_platform */
    /* $B931: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B932:;
    /* $B932: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B933:;
    /* $B933: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B935:;
    /* $B935: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCD01); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B938:;
    /* $B938: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B93A:;
    /* $B93A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B93C:;
    /* $B93C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B93E:;
    /* $B93E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B940:;
    /* $B940: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B942:;
    /* $B942: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B944:;
    /* $B944: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B946:;
    /* $B946: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B948:;
    /* $B948: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B94A:;
    /* $B94A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B94C:;
    /* $B94C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B94D:;
    /* $B94D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B94E:;
    /* $B94E: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B950:;
    /* $B950: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B952:;
    /* $B952: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B954:;
    /* $B954: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B956:;
    /* $B956: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B958:;
    /* $B958: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B95A:;
    /* $B95A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B95C:;
    /* $B95C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B95E:;
    /* $B95E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B960:;
    /* $B960: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B961:;
    /* $B961: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x92; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B963:;
    /* $B963: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B965:;
    /* $B965: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B967:;
    /* $B967: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B968:;
    /* $B968: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B96A:;
    /* $B96A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B96C:;
    /* $B96C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B96E:;
    /* $B96E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B970:;
    /* $B970: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B972:;
    /* $B972: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B974:;
    /* $B974: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B976:;
    /* $B976: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B978:;
    /* $B978: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B97A:;
    /* $B97A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B97B:;
    /* $B97B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B97D:;
    /* $B97D: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B97F:;
    /* $B97F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B982:;
    /* $B982: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B983:;
    /* $B983: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0302 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B986:;
    /* $B986: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02B0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B989:;
    /* $B989: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B98B:;
    /* $B98B: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B98D:;
    /* $B98D: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B98F:;
    /* $B98F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B991:;
    /* $B991: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B993:;
    /* $B993: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B996:;
    /* $B996: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B997:;
    /* $B997: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0342 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B99A:;
    /* $B99A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02B0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B99D:;
    /* $B99D: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B99F:;
    /* $B99F: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B9A1:;
    /* $B9A1: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B9A3:;
    /* $B9A3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9A5:;
    /* $B9A5: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9A7:;
    /* $B9A7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x43 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9A9:;
    /* $B9A9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AB:;
    /* $B9AB: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC3 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AD:;
    /* $B9AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9AF:;
    /* $B9AF: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B1:;
    /* $B9B1: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B3:;
    /* $B9B3: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B5:;
    /* $B9B5: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B7:;
    /* $B9B7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9B9:;
    /* $B9B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BB:;
    /* $B9BB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BD:;
    /* $B9BD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BF:;
    /* $B9BF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9C1:;
    /* $B9C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C3:;
    /* $B9C3: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9C4:;
    /* $B9C4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C6:;
    /* $B9C6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C8:;
    /* $B9C8: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xF9 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CA:;
    /* $B9CA: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CC:;
    /* $B9CC: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03FA); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9CF:;
    /* $B9CF: FA */ maybe_trigger_vblank(2); /* NOP */
label_B9D0:;
    /* $B9D0: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D2:;
    /* $B9D2: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xFA + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9D4:;
    /* $B9D4: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9D6:;
    /* $B9D6: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x43F9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9D9:;
    /* $B9D9: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9DA:;
    /* $B9DA: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9DC:;
    /* $B9DC: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9DE:;
    /* $B9DE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8F + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9E0:;
    /* $B9E0: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x02E7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9E3:;
    /* $B9E3: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9E5:; /* main_spark_falling_platform */
    /* $B9E5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9E6:;
    /* $B9E6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9E7:;
    /* $B9E7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9E9:;
    /* $B9E9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9EB:;
    /* $B9EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9EC:;
    /* $B9EC: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9ED:;
    /* $B9ED: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9EE:;
    /* $B9EE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9EF:;
    /* $B9EF: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F1:;
    /* $B9F1: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9F4:;
    /* $B9F4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9F5:;
    /* $B9F5: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F7:;
    /* $B9F7: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F9:;
    /* $B9F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FB:;
    /* $B9FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FD:;
    /* $B9FD: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA00:;
    /* $BA00: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA01:;
    /* $BA01: 8F */ maybe_trigger_vblank(4); nes_write(0xE75E, g_cpu.A & g_cpu.X); /* SAX */
label_BA04:;
    /* $BA04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA05:;
    /* $BA05: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA07:;
    /* $BA07: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA08:;
    /* $BA08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA09:;
    /* $BA09: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA0B:;
    /* $BA0B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA0D:;
    /* $BA0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA0E:;
    /* $BA0E: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA0F:;
    /* $BA0F: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA10:;
    /* $BA10: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA11:;
    /* $BA11: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA13:;
    /* $BA13: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA15:;
    /* $BA15: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA16:;
    /* $BA16: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA17:;
    /* $BA17: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BA18:;
    /* $BA18: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1A:;
    /* $BA1A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xE6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1C:;
    /* $BA1C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA1D:;
    /* $BA1D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA1F:;
    /* $BA1F: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA22:;
    /* $BA22: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA23:;
    /* $BA23: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x94 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA25:;
    /* $BA25: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA27:;
    /* $BA27: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA29:;
    /* $BA29: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA2B:;
    /* $BA2B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA2D:;
    /* $BA2D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xDA93); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA30:;
    /* $BA30: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA31:;
    /* $BA31: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA34:;
    /* $BA34: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA35:;
    /* $BA35: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDD02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA38:;
    /* $BA38: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA39:;
    /* $BA39: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA3C:;
    /* $BA3C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA3D:;
    /* $BA3D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BA3F:;
    /* $BA3F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA41:;
    /* $BA41: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BA43:;
    /* $BA43: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA45:;
    /* $BA45: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA47:;
    /* $BA47: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA49:;
    /* $BA49: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x95 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4B:;
    /* $BA4B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BA4C:;
    /* $BA4C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4E:;
    /* $BA4E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA50:;
    /* $BA50: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA52:;
    /* $BA52: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA54:;
    /* $BA54: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03DF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA57:;
    /* $BA57: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BA59:;
    /* $BA59: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE083 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA5C:;
    /* $BA5C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BA5E:;
    /* $BA5E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02F8); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA61:;
    /* $BA61: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA62:;
    /* $BA62: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA63:;
    /* $BA63: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA64:;
    /* $BA64: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA66:;
    /* $BA66: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA68:;
    /* $BA68: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA6B:;
    /* $BA6B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEC2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA6E:;
    /* $BA6E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA6F:;
    /* $BA6F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA72:;
    /* $BA72: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA75:;
    /* $BA75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF42 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA78:;
    /* $BA78: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA7A:;
    /* $BA7A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA7C:;
    /* $BA7C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x82FE); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA7F:;
    /* $BA7F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD42 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA82:;
    /* $BA82: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA84:;
    /* $BA84: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA85:;
    /* $BA85: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA87:;
    /* $BA87: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEE03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA8A:;
    /* $BA8A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8C:;
    /* $BA8C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8E:;
    /* $BA8E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA90:;
    /* $BA90: 8E */ maybe_trigger_vblank(4); nes_write(0x00C7, g_cpu.X);
label_BA93:;
    /* $BA93: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA94:;
    /* $BA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA94); return;
label_BA95:; return;
label_BA97:; return;
label_BA98:; return;
label_BA99:; return;
label_BA9B:; return;
label_BA9E:; return;
label_BA9F:; return;
label_BAA2:; return;
label_BAA5:; return;
label_BAA7:; return;
label_BAA8:; return;
label_BAA9:; return;
label_BAAB:; return;
label_BAAE:; return;
label_BAAF:; return;
label_BAB1:; return;
label_BAB3:; return;
label_BAB4:; return;
label_BAB7:; return;
label_BAB9:; return;
label_BABA:; return;
label_BABB:; return;
label_BABC:; return;
label_BABD:; return;
label_BAC0:; return;
label_BAC1:; return;
label_BAC4:; return;
label_BAC5:; return;
label_BAC8:; return;
label_BACA:; return;
label_BACC:; return;
label_BACE:; return;
label_BAD0:; return;
label_BAD2:; return;
label_BAD4:; return;
label_BAD6:; return;
label_BAD8:; return;
label_BADA:; return;
label_BADC:; return;
label_BADE:; return;
label_BAE0:; return;
label_BAE2:; return;
label_BAE4:; return;
label_BAE6:; return;
label_BAE8:; return;
label_BAEA:; return;
label_BAEC:; return;
label_BAED:; return;
label_BAEF:; return;
label_BAF1:; return;
label_BAF3:; return;
label_BAF5:; return;
label_BAF7:; return;
label_BAF9:; return;
label_BAFB:; return;
label_BAFD:; return;
label_BAFF:; return;
label_BB01:; return;
label_BB03:; return;
label_BB05:; return;
label_BB07:; return;
label_BB09:; return;
label_BB0B:; return;
label_BB0D:; return;
label_BB0F:; return;
label_BB11:; return;
label_BB13:; return;
label_BB14:; return;
label_BB15:; return;
label_BB16:; return;
label_BB17:; return;
label_BB19:; return;
label_BB1A:; return;
label_BB1B:; return;
label_BB1D:; return;
label_BB1E:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB23:; return;
label_BB24:; return;
label_BB25:; return;
label_BB27:; return;
label_BB28:; return;
label_BB29:; return;
label_BB2A:; return;
label_BB2B:; return;
label_BB2C:; return;
label_BB2D:; return;
label_BB2E:; return;
label_BB2F:; return;
label_BB31:; return;
label_BB32:; return;
label_BB33:; return;
label_BB34:; return;
label_BB35:; return;
label_BB36:; return;
label_BB37:; return;
label_BB38:; return;
label_BB39:; return;
label_BB3A:; return;
label_BB3B:; return;
label_BB3C:; return;
label_BB3D:; return;
label_BB3E:; return;
label_BB3F:; return;
label_BB40:; return;
label_BB41:; return;
label_BB42:; return;
label_BB43:; return;
label_BB45:; return;
label_BB46:; return;
label_BB47:; return;
label_BB48:; return;
label_BB4A:; return;
label_BB4B:; return;
label_BB4C:; return;
label_BB4D:; return;
label_BB4E:; return;
label_BB4F:; return;
label_BB50:; return;
label_BB51:; return;
label_BB52:; return;
label_BB53:; return;
label_BB55:; return;
label_BB56:; return;
label_BB57:; return;
label_BB59:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5D:; return;
label_BB5E:; return;
label_BB5F:; return;
label_BB60:; return;
label_BB63:; return;
label_BB64:; return;
label_BB66:; return;
label_BB67:; return;
label_BB68:; return;
label_BB69:; return;
label_BB6A:; return;
label_BB6B:; return;
label_BB6C:; return;
label_BB6D:; return;
label_BB6E:; return;
label_BB6F:; return;
label_BB70:; return;
label_BB71:; return;
label_BB73:; return;
label_BB74:; return;
label_BB75:; return;
label_BB76:; return;
label_BB77:; return;
label_BB78:; return;
label_BB79:; return;
label_BB7A:; return;
label_BB7B:; return;
label_BB7C:; return;
label_BB7E:; return;
label_BB7F:; return;
label_BB81:; return;
label_BB82:; return;
label_BB83:; return;
label_BB84:; return;
label_BB85:; return;
label_BB86:; return;
label_BB87:; return;
label_BB88:; return;
label_BB8B:; return;
label_BB8C:; return;
label_BB8D:; return;
label_BB8E:; return;
label_BB8F:; return;
label_BB90:; return;
label_BB91:; return;
label_BB92:; return;
label_BB93:; return;
label_BB94:; return;
label_BB95:; return;
label_BB96:; return;
label_BB97:; return;
label_BB98:; return;
label_BB99:; return;
label_BB9A:; return;
label_BB9B:; return;
label_BB9C:; return;
label_BB9D:; return;
label_BB9E:; return;
label_BBA1:; return;
label_BBA2:; return;
label_BBA3:; return;
label_BBA4:; return;
label_BBA5:; return;
label_BBA7:; return;
label_BBA8:; return;
label_BBA9:; return;
label_BBAB:; return;
label_BBAC:; return;
label_BBAE:; return;
label_BBAF:; return;
label_BBB1:; return;
label_BBB2:; return;
label_BBB3:; return;
label_BBB4:; return;
label_BBB5:; return;
label_BBB6:; return;
label_BBB7:; return;
label_BBB8:; return;
label_BBB9:; return;
label_BBBA:; return;
label_BBBD:; return;
label_BBBE:; return;
label_BBBF:; return;
label_BBC0:; return;
label_BBC1:; return;
label_BBC2:; return;
label_BBC3:; return;
label_BBC4:; return;
label_BBC5:; return;
label_BBC6:; return;
label_BBC7:; return;
label_BBC8:; return;
label_BBC9:; return;
label_BBCB:; return;
label_BBCC:; return;
label_BBCD:; return;
label_BBCE:; return;
label_BBCF:; return;
label_BBD1:; return;
label_BBD2:; return;
label_BBD3:; return;
label_BBD5:; return;
label_BBD6:; return;
label_BBD7:; return;
label_BBD8:; return;
label_BBD9:; return;
label_BBDA:; return;
label_BBDB:; return;
label_BBDC:; return;
label_BBDD:; return;
label_BBDF:; return;
label_BBE0:; return;
label_BBE1:; return;
label_BBE2:; return;
label_BBE3:; return;
label_BBE4:; return;
label_BBE5:; return;
label_BBE6:; return;
label_BBE7:; return;
label_BBE8:; return;
label_BBEB:; return;
label_BBEC:; return;
label_BBEF:; return;
label_BBF0:; return;
label_BBF1:; return;
label_BBF2:; return;
label_BBF5:; return;
label_BBF7:; return;
label_BBF8:; return;
label_BBF9:; return;
label_BBFB:; return;
label_BBFC:; return;
label_BBFD:; return;
label_BBFE:; return;
label_BBFF:; return;
label_BC02:; return;
label_BC03:; return;
label_BC05:; return;
label_BC07:; return;
label_BC08:; return;
label_BC09:; return;
label_BC0A:; return;
label_BC0C:; return;
label_BC0E:; return;
label_BC0F:; return;
label_BC11:; return;
label_BC12:; return;
label_BC13:; return;
label_BC14:; return;
label_BC15:; return;
label_BC17:; return;
label_BC18:; return;
label_BC19:; return;
label_BC1A:; return;
label_BC1B:; return;
label_BC1C:; return;
label_BC1D:; return;
label_BC1F:; return;
label_BC20:; return;
label_BC21:; return;
label_BC22:; return;
label_BC24:; return;
label_BC25:; return;
label_BC26:; return;
label_BC28:; return;
label_BC29:; return;
label_BC2B:; return;
label_BC2D:; return;
label_BC2E:; return;
label_BC2F:; return;
label_BC30:; return;
label_BC31:; return;
label_BC32:; return;
label_BC33:; return;
label_BC35:; return;
label_BC37:; return;
label_BC38:; return;
label_BC39:; return;
label_BC3A:; return;
label_BC3C:; return;
label_BC3D:; return;
label_BC3E:; return;
label_BC3F:; return;
label_BC41:; return;
label_BC42:; return;
label_BC43:; return;
label_BC44:; return;
label_BC45:; return;
label_BC46:; return;
label_BC47:; return;
label_BC49:; return;
label_BC4A:; return;
label_BC4B:; return;
label_BC4C:; return;
label_BC4D:; return;
label_BC4E:; return;
label_BC4F:; return;
label_BC50:; return;
label_BC51:; return;
label_BC53:; return;
label_BC55:; return;
label_BC56:; return;
label_BC58:; return;
label_BC59:; return;
label_BC5A:; return;
label_BC5B:; return;
label_BC5C:; return;
label_BC5E:; return;
label_BC5F:; return;
label_BC60:; return;
label_BC62:; return;
label_BC63:; return;
label_BC65:; return;
label_BC67:; return;
label_BC68:; return;
label_BC6A:; return;
label_BC6D:; return;
label_BC6F:; return;
label_BC71:; return;
label_BC73:; return;
label_BC75:; return;
label_BC77:; return;
label_BC79:; return;
label_BC7B:; return;
label_BC7C:; return;
label_BC7E:; return;
label_BC80:; return;
label_BC81:; return;
label_BC82:; return;
label_BC84:; return;
label_BC85:; return;
label_BC87:; return;
label_BC88:; return;
label_BC89:; return;
label_BC8A:; return;
label_BC8B:; return;
label_BC8C:; return;
label_BC8F:; return;
label_BC90:; return;
label_BC91:; return;
label_BC92:; return;
label_BC93:; return;
label_BC94:; return;
label_BC95:; return;
label_BC96:; return;
label_BC97:; return;
label_BC99:; return;
label_BC9A:; return;
label_BC9B:; return;
label_BC9C:; return;
label_BC9D:; return;
label_BC9F:; return;
label_BCA0:; return;
label_BCA2:; return;
label_BCA3:; return;
label_BCA5:; return;
label_BCA7:; return;
label_BCA8:; return;
label_BCA9:; return;
label_BCAB:; return;
label_BCAD:; return;
label_BCAE:; return;
label_BCAF:; return;
label_BCB1:; return;
label_BCB3:; return;
label_BCB5:; return;
label_BCB6:; return;
label_BCB8:; return;
label_BCB9:; return;
label_BCBA:; return;
label_BCBB:; return;
label_BCBC:; return;
label_BCBD:; return;
label_BCBE:; return;
label_BCC0:; return;
label_BCC1:; return;
label_BCC2:; return;
label_BCC4:; return;
label_BCC5:; return;
label_BCC7:; return;
label_BCC8:; return;
label_BCC9:; return;
label_BCCB:; return;
label_BCCC:; return;
label_BCCE:; return;
label_BCCF:; return;
label_BCD0:; return;
label_BCD1:; return;
label_BCD2:; return;
label_BCD3:; return;
label_BCD4:; return;
label_BCD7:; return;
label_BCD8:; return;
label_BCD9:; return;
label_BCDA:; return;
label_BCDB:; return;
label_BCDC:; return;
label_BCDD:; return;
label_BCDE:; return;
label_BCDF:; return;
label_BCE1:; return;
label_BCE3:; return;
label_BCE4:; return;
label_BCE5:; return;
label_BCE7:; return;
label_BCEA:; return;
label_BCEC:; return;
label_BCEE:; return;
label_BCF0:; return;
label_BCF2:; return;
label_BCF3:; return;
label_BCF5:; return;
label_BCF7:; return;
label_BCF9:; return;
label_BCFB:; return;
label_BCFC:; return;
label_BCFD:; return;
label_BCFF:; return;
label_BD00:; return;
label_BD01:; return;
label_BD02:; return;
label_BD04:; return;
label_BD05:; return;
label_BD07:; return;
label_BD08:; return;
label_BD0B:; return;
label_BD0C:; return;
label_BD0D:; return;
label_BD0E:; return;
label_BD0F:; return;
label_BD11:; return;
label_BD12:; return;
label_BD14:; return;
label_BD15:; return;
label_BD16:; return;
label_BD17:; return;
label_BD18:; return;
label_BD19:; return;
label_BD1A:; return;
label_BD1B:; return;
label_BD1C:; return;
label_BD1D:; return;
label_BD1E:; return;
label_BD1F:; return;
label_BD20:; return;
label_BD21:; return;
label_BD23:; return;
label_BD24:; return;
label_BD25:; return;
label_BD27:; return;
label_BD28:; return;
label_BD29:; return;
label_BD2B:; return;
label_BD2D:; return;
label_BD2E:; return;
label_BD30:; return;
label_BD32:; return;
label_BD34:; return;
label_BD36:; return;
label_BD37:; return;
label_BD38:; return;
label_BD3A:; return;
label_BD3B:; return;
label_BD3C:; return;
label_BD3F:; return;
label_BD40:; return;
label_BD43:; return;
label_BD44:; return;
label_BD45:; return;
label_BD47:; return;
label_BD49:; return;
label_BD4A:; return;
label_BD4B:; return;
label_BD4C:; return;
label_BD4D:; return;
label_BD4E:; return;
label_BD50:; return;
label_BD51:; return;
label_BD52:; return;
label_BD54:; return;
label_BD55:; return;
label_BD56:; return;
label_BD57:; return;
label_BD58:; return;
label_BD59:; return;
label_BD5A:; return;
label_BD5C:; return;
label_BD5D:; return;
label_BD5F:; return;
label_BD60:; return;
label_BD63:; return;
label_BD64:; return;
label_BD67:; return;
label_BD68:; return;
label_BD6A:; return;
label_BD6B:; return;
label_BD6D:; return;
label_BD6F:; return;
label_BD71:; return;
label_BD73:; return;
label_BD75:; return;
label_BD77:; return;
label_BD79:; return;
label_BD7A:; return;
label_BD7B:; return;
label_BD7D:; return;
label_BD7F:; return;
label_BD81:; return;
label_BD82:; return;
label_BD84:; return;
label_BD86:; return;
label_BD88:; return;
label_BD8A:; return;
label_BD8B:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
label_BD94:; return;
label_BD96:; return;
label_BD97:; return;
label_BD98:; return;
label_BD99:; return;
label_BD9A:; return;
label_BD9D:; return;
label_BD9E:; return;
label_BD9F:; return;
label_BDA0:; return;
label_BDA2:; return;
label_BDA3:; return;
label_BDA5:; return;
label_BDA7:; return;
label_BDA8:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
label_BDAE:; return;
label_BDB1:; return;
label_BDB2:; return;
label_BDB4:; return;
label_BDB6:; return;
label_BDB7:; return;
label_BDB8:; return;
label_BDBA:; return;
label_BDBC:; return;
label_BDBE:; return;
label_BDC1:; return;
label_BDC2:; return;
label_BDC3:; return;
label_BDC4:; return;
label_BDC5:; return;
label_BDC6:; return;
label_BDC7:; return;
label_BDC8:; return;
label_BDC9:; return;
label_BDCA:; return;
label_BDCC:; return;
label_BDCF:; return;
label_BDD0:; return;
label_BDD1:; return;
label_BDD2:; return;
label_BDD4:; return;
label_BDD5:; return;
label_BDD6:; return;
label_BDD7:; return;
label_BDD8:; return;
label_BDDA:; return;
label_BDDC:; return;
label_BDDE:; return;
label_BDDF:; return;
label_BDE0:; return;
label_BDE2:; return;
label_BDE3:; return;
label_BDE4:; return;
label_BDE7:; return;
label_BDE9:; return;
label_BDEB:; return;
label_BDEE:; return;
label_BDF1:; return;
label_BDF3:; return;
label_BDF5:; return;
label_BDF7:; return;
label_BDF9:; return;
label_BDFB:; return;
label_BDFD:; return;
label_BDFF:; return;
label_BE00:; return;
label_BE01:; return;
label_BE02:; return;
label_BE03:; return;
label_BE05:; return;
label_BE07:; return;
label_BE09:; return;
label_BE0A:; return;
label_BE0C:; return;
label_BE0D:; return;
label_BE0E:; return;
label_BE0F:; return;
label_BE10:; return;
label_BE11:; return;
label_BE12:; return;
label_BE13:; return;
label_BE14:; return;
label_BE15:; return;
label_BE16:; return;
label_BE17:; return;
label_BE18:; return;
label_BE19:; return;
label_BE1A:; return;
label_BE1B:; return;
label_BE1C:; return;
label_BE1E:; return;
label_BE1F:; return;
label_BE20:; return;
label_BE21:; return;
label_BE22:; return;
label_BE23:; return;
label_BE25:; return;
label_BE27:; return;
label_BE28:; return;
label_BE2B:; return;
label_BE2D:; return;
label_BE2F:; return;
label_BE30:; return;
label_BE31:; return;
label_BE32:; return;
label_BE34:; return;
label_BE35:; return;
label_BE36:; return;
label_BE38:; return;
label_BE39:; return;
label_BE3A:; return;
label_BE3B:; return;
label_BE3D:; return;
label_BE3E:; return;
label_BE3F:; return;
label_BE41:; return;
label_BE42:; return;
label_BE44:; return;
label_BE45:; return;
label_BE47:; return;
label_BE48:; return;
label_BE49:; return;
label_BE4B:; return;
label_BE4C:; return;
label_BE4D:; return;
label_BE4F:; return;
label_BE50:; return;
label_BE52:; return;
label_BE53:; return;
label_BE55:; return;
label_BE57:; return;
label_BE59:; return;
label_BE5A:; return;
label_BE5B:; return;
label_BE5C:; return;
label_BE5D:; return;
label_BE5F:; return;
label_BE60:; return;
label_BE62:; return;
label_BE65:; return;
label_BE66:; return;
label_BE68:; return;
label_BE6A:; return;
label_BE6C:; return;
label_BE6E:; return;
label_BE70:; return;
label_BE72:; return;
label_BE74:; return;
label_BE76:; return;
label_BE78:; return;
label_BE79:; return;
label_BE7A:; return;
label_BE7C:; return;
label_BE7D:; return;
label_BE7F:; return;
label_BE81:; return;
label_BE82:; return;
label_BE85:; return;
label_BE87:; return;
label_BE88:; return;
label_BE89:; return;
label_BE8A:; return;
label_BE8B:; return;
label_BE8D:; return;
label_BE8E:; return;
label_BE8F:; return;
label_BE90:; return;
label_BE91:; return;
label_BE92:; return;
label_BE94:; return;
label_BE97:; return;
label_BE98:; return;
label_BE9B:; return;
label_BE9C:; return;
label_BE9D:; return;
label_BE9E:; return;
label_BE9F:; return;
label_BEA0:; return;
label_BEA2:; return;
label_BEA3:; return;
label_BEA4:; return;
label_BEA5:; return;
label_BEA6:; return;
label_BEA8:; return;
label_BEAA:; return;
label_BEAC:; return;
label_BEAD:; return;
label_BEAE:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB4:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB8:; return;
label_BEB9:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBE:; return;
label_BEC0:; return;
label_BEC2:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC5:; return;
label_BEC6:; return;
label_BEC8:; return;
label_BEC9:; return;
label_BECB:; return;
label_BECD:; return;
label_BECE:; return;
label_BECF:; return;
label_BED0:; return;
label_BED1:; return;
label_BED2:; return;
label_BED3:; return;
label_BED4:; return;
label_BED5:; return;
label_BED6:; return;
label_BED7:; return;
label_BED8:; return;
label_BED9:; return;
label_BEDA:; return;
label_BEDB:; return;
label_BEDC:; return;
label_BEDD:; return;
label_BEDE:; return;
label_BEDF:; return;
label_BEE0:; return;
label_BEE2:; return;
label_BEE3:; return;
label_BEE5:; return;
label_BEE7:; return;
label_BEE9:; return;
label_BEEC:; return;
label_BEEE:; return;
label_BEEF:; return;
label_BEF1:; return;
label_BEF2:; return;
label_BEF4:; return;
label_BEF5:; return;
label_BEF7:; return;
label_BEF8:; return;
label_BEFA:; return;
label_BEFD:; return;
label_BEFF:; return;
label_BF01:; return;
label_BF02:; return;
label_BF04:; return;
label_BF05:; return;
label_BF06:; return;
label_BF08:; return;
label_BF09:; return;
label_BF0A:; return;
label_BF0B:; return;
label_BF0C:; return;
label_BF0D:; return;
label_BF0E:; return;
label_BF0F:; return;
label_BF11:; return;
label_BF12:; return;
label_BF13:; return;
label_BF14:; return;
label_BF15:; return;
label_BF16:; return;
label_BF17:; return;
label_BF18:; return;
label_BF1A:; return;
label_BF1B:; return;
label_BF1C:; return;
label_BF1D:; return;
label_BF1F:; return;
label_BF20:; return;
label_BF21:; return;
label_BF22:; return;
label_BF23:; return;
label_BF24:; return;
label_BF26:; return;
label_BF28:; return;
label_BF2A:; return;
label_BF2B:; return;
label_BF2D:; return;
label_BF2E:; return;
label_BF2F:; return;
label_BF30:; return;
label_BF31:; return;
label_BF33:; return;
label_BF34:; return;
label_BF35:; return;
label_BF36:; return;
label_BF37:; return;
label_BF38:; return;
label_BF3B:; return;
label_BF3C:; return;
label_BF3E:; return;
label_BF3F:; return;
label_BF40:; return;
label_BF41:; return;
label_BF42:; return;
label_BF43:; return;
label_BF44:; return;
label_BF45:; return;
label_BF46:; return;
label_BF47:; return;
label_BF48:; return;
label_BF49:; return;
label_BF4A:; return;
label_BF4C:; return;
label_BF4D:; return;
label_BF4E:; return;
label_BF50:; return;
label_BF51:; return;
label_BF52:; return;
label_BF53:; return;
label_BF54:; return;
label_BF55:; return;
label_BF56:; return;
label_BF58:; return;
label_BF5A:; return;
label_BF5B:; return;
label_BF5C:; return;
label_BF5E:; return;
label_BF60:; return;
label_BF61:; return;
label_BF63:; return;
label_BF65:; return;
label_BF66:; return;
label_BF68:; return;
label_BF6A:; return;
label_BF6C:; return;
label_BF6E:; return;
label_BF71:; return;
label_BF73:; return;
label_BF75:; return;
label_BF77:; return;
label_BF78:; return;
label_BF7A:; return;
label_BF7C:; return;
label_BF7D:; return;
label_BF7F:; return;
label_BF81:; return;
label_BF82:; return;
label_BF83:; return;
label_BF84:; return;
label_BF87:; return;
label_BF89:; return;
label_BF8A:; return;
label_BF8B:; return;
label_BF8C:; return;
label_BF8D:; return;
label_BF8F:; return;
label_BF90:; return;
label_BF91:; return;
label_BF92:; return;
label_BF93:; return;
label_BF94:; return;
label_BF95:; return;
label_BF97:; return;
label_BF99:; return;
label_BF9A:; return;
label_BF9C:; return;
label_BF9D:; return;
label_BF9E:; return;
label_BF9F:; return;
label_BFA0:; return;
label_BFA2:; return;
label_BFA4:; return;
label_BFA6:; return;
label_BFA7:; return;
label_BFA9:; return;
label_BFAB:; return;
label_BFAC:; return;
label_BFAE:; return;
label_BFAF:; return;
label_BFB0:; return;
label_BFB1:; return;
label_BFB2:; return;
label_BFB3:; return;
label_BFB4:; return;
label_BFB6:; return;
label_BFB8:; return;
label_BFBA:; return;
label_BFBB:; return;
label_BFBD:; return;
label_BFBE:; return;
label_BFBF:; return;
label_BFC0:; return;
label_BFC1:; return;
label_BFC3:; return;
label_BFC4:; return;
label_BFC6:; return;
label_BFC7:; return;
label_BFC8:; return;
label_BFC9:; return;
label_BFCA:; return;
label_BFCC:; return;
label_BFCD:; return;
label_BFCF:; return;
label_BFD1:; return;
label_BFD3:; return;
label_BFD4:; return;
label_BFD6:; return;
label_BFD8:; return;
label_BFD9:; return;
label_BFDA:; return;
label_BFDC:; return;
label_BFDE:; return;
label_BFDF:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE9:; return;
label_BFEB:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF2:; return;
label_BFF4:; return;
label_BFF7:; return;
label_BFF8:; return;
label_BFF9:; return;
label_BFFA:; return;
label_BFFC:; return;
label_BFFF:; return;
label_C001:; return;
label_C002:; return;
label_C003:; return;
label_C004:; return;
label_C005:; return;
label_C006:; return;
label_C009:; return;
label_C00B:; return;
label_C00D:; return;
label_C010:; return;
label_C012:; return;
label_C015:; return;
label_C017:; return;
label_C019:; return;
label_C01B:; return;
label_C01D:; return;
label_C01F:; return;
label_C021:; return;
label_C023:; return;
label_C025:; return;
label_C027:; return;
label_C029:; return;
label_C02B:; return;
label_C02D:; return;
label_C02F:; return;
label_C031:; return;
label_C034:; return;
label_C036:; return;
label_C039:; return;
label_C03B:; return;
label_C03D:; return;
label_C040:; return;
label_C042:; return;
label_C044:; return;
label_C046:; return;
label_C048:; return;
label_C04A:; return;
label_C04D:; return;
label_C04F:; return;
label_C051:; return;
label_C054:; return;
label_C056:; return;
label_C058:; return;
label_C05B:; return;
label_C05D:; return;
label_C05F:; return;
label_C061:; return;
label_C063:; return;
label_C066:; return;
label_C068:; return;
label_C06B:; return;
label_C06E:; return;
label_C070:; return;
label_C073:; return;
label_C076:; return;
label_C077:; return;
label_C078:; return;
label_C07A:; return;
label_C07C:; return;
label_C07F:; return;
label_C082:; return;
label_C085:; return;
label_C088:; return;
label_C08A:; return;
label_C08C:; return;
label_C08E:; return;
label_C091:; return;
label_C093:; return;
label_C096:; return;
label_C098:; return;
label_C09B:; return;
label_C09D:; return;
label_C0A0:; return;
label_C0A2:; return;
label_C0A5:; return;
label_C0A7:; return;
label_C0AA:; return;
label_C0AC:; return;
label_C0AF:; return;
label_C0B1:; return;
label_C0B3:; return;
label_C0B5:; return;
label_C0B8:; return;
label_C0BB:; return;
label_C0BD:; return;
label_C0C0:; return;
label_C0C2:; return;
label_C0C5:; return;
label_C0C8:; return;
label_C0CA:; return;
label_C0CD:; return;
label_C0CF:; return;
label_C0D1:; return;
label_C0D3:; return;
label_C0D5:; return;
label_C0D7:; return;
label_C0D9:; return;
label_C0DB:; return;
label_C0DD:; return;
label_C0E0:; return;
label_C0E2:; return;
label_C0E5:; return;
label_C0E7:; return;
label_C0E9:; return;
label_C0EB:; return;
label_C0ED:; return;
label_C0EE:; return;
label_C0F0:; return;
label_C0F2:; return;
label_C0F4:; return;
label_C0F6:; return;
label_C0F8:; return;
label_C0FA:; return;
label_C0FC:; return;
label_C0FE:; return;
label_C0FF:; return;
label_C100:; return;
label_C101:; return;
label_C102:; return;
label_C103:; return;
label_C105:; return;
label_C106:; return;
label_C109:; return;
label_C10B:; return;
label_C10E:; return;
label_C110:; return;
label_C112:; return;
label_C115:; return;
label_C117:; return;
label_C11A:; return;
label_C11B:; return;
label_C11C:; return;
label_C11D:; return;
label_C11E:; return;
label_C11F:; return;
label_C120:; return;
label_C121:; return;
label_C122:; return;
label_C123:; return;
label_C124:; return;
label_C125:; return;
label_C126:; return;
label_C127:; return;
label_C128:; return;
label_C129:; return;
label_C12A:; return;
label_C12B:; return;
label_C12D:; return;
label_C12F:; return;
label_C132:; return;
label_C134:; return;
label_C136:; return;
label_C139:; return;
label_C13C:; return;
label_C13D:; return;
label_C13E:; return;
label_C13F:; return;
label_C140:; return;
label_C141:; return;
label_C142:; return;
label_C143:; return;
label_C144:; return;
label_C145:; return;
label_C146:; return;
label_C147:; return;
label_C148:; return;
label_C149:; return;
label_C14C:; return;
label_C14F:; return;
label_C152:; return;
label_C154:; return;
label_C156:; return;
label_C158:; return;
label_C15B:; return;
label_C15D:; return;
label_C160:; return;
label_C162:; return;
label_C165:; return;
label_C167:; return;
label_C168:; return;
label_C169:; return;
label_C16B:; return;
label_C16D:; return;
label_C170:; return;
label_C172:; return;
label_C175:; return;
label_C178:; return;
label_C17B:; return;
label_C17E:; return;
label_C180:; return;
label_C183:; return;
label_C185:; return;
label_C188:; return;
label_C18A:; return;
label_C18D:; return;
label_C18F:; return;
label_C192:; return;
label_C195:; return;
label_C198:; return;
label_C19B:; return;
label_C19D:; return;
label_C1A0:; return;
label_C1A2:; return;
label_C1A5:; return;
label_C1A7:; return;
label_C1A9:; return;
label_C1AB:; return;
label_C1AC:; return;
label_C1AE:; return;
label_C1B1:; return;
label_C1B4:; return;
label_C1B6:; return;
label_C1B9:; return;
label_C1BB:; return;
label_C1BE:; return;
label_C1C1:; return;
label_C1C4:; return;
label_C1C6:; return;
label_C1C9:; return;
label_C1CB:; return;
label_C1CE:; return;
label_C1D0:; return;
label_C1D2:; return;
label_C1D5:; return;
label_C1D7:; return;
label_C1DA:; return;
label_C1DD:; return;
label_C1DF:; return;
label_C1E0:; return;
label_C1E2:; return;
label_C1E5:; return;
label_C1E7:; return;
label_C1E9:; return;
label_C1EB:; return;
label_C1ED:; return;
label_C1EF:; return;
label_C1F1:; return;
label_C1F3:; return;
label_C1F6:; return;
label_C1F8:; return;
label_C1FB:; return;
label_C1FD:; return;
label_C200:; return;
label_C203:; return;
label_C205:; return;
label_C208:; return;
label_C20A:; return;
label_C20D:; return;
label_C20F:; return;
label_C212:; return;
label_C214:; return;
label_C217:; return;
label_C219:; return;
label_C21C:; return;
label_C21E:; return;
label_C220:; return;
label_C222:; return;
label_C223:; return;
label_C225:; return;
label_C228:; return;
label_C22B:; return;
label_C22D:; return;
label_C230:; return;
label_C232:; return;
label_C235:; return;
label_C238:; return;
label_C23A:; return;
label_C23D:; return;
label_C23F:; return;
label_C240:; return;
label_C241:; return;
label_C242:; return;
label_C244:; return;
label_C246:; return;
label_C249:; return;
label_C24B:; return;
label_C24D:; return;
label_C250:; return;
label_C252:; return;
label_C255:; return;
label_C257:; return;
label_C25A:; return;
label_C25C:; return;
label_C25D:; return;
label_C25F:; return;
label_C262:; return;
label_C265:; return;
label_C267:; return;
label_C26A:; return;
label_C26C:; return;
label_C26F:; return;
label_C272:; return;
label_C274:; return;
label_C277:; return;
label_C279:; return;
label_C27A:; return;
label_C27B:; return;
label_C27C:; return;
label_C27E:; return;
label_C280:; return;
label_C283:; return;
label_C285:; return;
label_C287:; return;
label_C28A:; return;
label_C28C:; return;
label_C28F:; return;
label_C291:; return;
label_C294:; return;
label_C297:; return;
label_C29A:; return;
label_C29C:; return;
label_C29E:; return;
label_C29F:; return;
label_C2A1:; return;
label_C2A3:; return;
label_C2A5:; return;
label_C2A7:; return;
label_C2A9:; return;
label_C2AB:; return;
label_C2AD:; return;
label_C2AF:; return;
label_C2B1:; return;
label_C2B3:; return;
label_C2B6:; return;
label_C2B8:; return;
label_C2BB:; return;
label_C2BD:; return;
label_C2C0:; return;
label_C2C2:; return;
label_C2C5:; return;
label_C2C8:; return;
label_C2CA:; return;
label_C2CD:; return;
label_C2CF:; return;
label_C2D2:; return;
label_C2D5:; return;
label_C2D7:; return;
label_C2D9:; return;
label_C2DA:; return;
label_C2DB:; return;
label_C2DD:; return;
label_C2E0:; return;
label_C2E2:; return;
label_C2E3:; return;
label_C2E4:; return;
label_C2E5:; return;
label_C2E7:; return;
label_C2E9:; return;
label_C2EC:; return;
label_C2EE:; return;
label_C2F0:; return;
label_C2F2:; return;
label_C2F5:; return;
label_C2F7:; return;
label_C2FA:; return;
label_C2FC:; return;
label_C2FF:; return;
label_C302:; return;
label_C305:; return;
label_C307:; return;
label_C309:; return;
label_C30C:; return;
label_C30D:; return;
label_C310:; return;
label_C313:; return;
label_C316:; return;
label_C319:; return;
label_C31B:; return;
label_C31E:; return;
label_C321:; return;
label_C323:; return;
label_C326:; return;
label_C328:; return;
label_C32B:; return;
label_C32E:; return;
label_C330:; return;
label_C332:; return;
label_C335:; return;
label_C338:; return;
label_C33B:; return;
label_C33D:; return;
label_C33F:; return;
label_C341:; return;
label_C343:; return;
label_C345:; return;
label_C348:; return;
label_C34B:; return;
label_C34D:; return;
label_C350:; return;
label_C352:; return;
label_C355:; return;
label_C357:; return;
label_C359:; return;
label_C35B:; return;
label_C35D:; return;
label_C35F:; return;
label_C360:; return;
label_C362:; return;
label_C365:; return;
label_C368:; return;
label_C36A:; return;
label_C36D:; return;
label_C36F:; return;
label_C372:; return;
label_C375:; return;
label_C378:; return;
label_C37A:; return;
label_C37D:; return;
label_C37F:; return;
label_C382:; return;
label_C384:; return;
label_C386:; return;
label_C389:; return;
label_C38B:; return;
label_C38E:; return;
label_C391:; return;
label_C393:; return;
label_C396:; return;
label_C399:; return;
label_C39B:; return;
label_C39E:; return;
label_C3A0:; return;
label_C3A3:; return;
label_C3A6:; return;
label_C3A8:; return;
label_C3AB:; return;
label_C3AD:; return;
label_C3B0:; return;
label_C3B2:; return;
label_C3B4:; return;
label_C3B6:; return;
label_C3B7:; return;
label_C3B9:; return;
label_C3BC:; return;
label_C3BF:; return;
label_C3C1:; return;
label_C3C4:; return;
label_C3C6:; return;
label_C3C9:; return;
label_C3CC:; return;
label_C3CF:; return;
label_C3D1:; return;
label_C3D2:; return;
label_C3D3:; return;
label_C3D5:; return;
label_C3D8:; return;
label_C3DA:; return;
label_C3DB:; return;
label_C3DC:; return;
label_C3DD:; return;
label_C3DF:; return;
label_C3E2:; return;
label_C3E4:; return;
label_C3E7:; return;
label_C3E9:; return;
label_C3EC:; return;
label_C3EE:; return;
label_C3F0:; return;
label_C3F3:; return;
label_C3F5:; return;
label_C3F6:; return;
label_C3F8:; return;
label_C3FB:; return;
label_C3FE:; return;
label_C400:; return;
label_C403:; return;
label_C405:; return;
label_C408:; return;
label_C40A:; return;
label_C40C:; return;
label_C40E:; return;
label_C40F:; return;
label_C411:; return;
label_C412:; return;
label_C414:; return;
label_C417:; return;
label_C41A:; return;
label_C41C:; return;
label_C41F:; return;
label_C421:; return;
label_C424:; return;
label_C426:; return;
label_C428:; return;
label_C42B:; return;
label_C42D:; return;
label_C430:; return;
label_C433:; return;
label_C435:; return;
label_C437:; return;
label_C43A:; return;
label_C43D:; return;
label_C43F:; return;
label_C442:; return;
label_C444:; return;
label_C447:; return;
label_C44A:; return;
label_C44D:; return;
label_C44F:; return;
label_C452:; return;
label_C454:; return;
label_C457:; return;
label_C459:; return;
label_C45C:; return;
label_C45F:; return;
label_C461:; return;
label_C464:; return;
label_C466:; return;
label_C469:; return;
label_C46C:; return;
label_C46E:; return;
label_C471:; return;
label_C473:; return;
label_C476:; return;
label_C478:; return;
label_C47A:; return;
label_C47C:; return;
label_C47F:; return;
label_C481:; return;
label_C483:; return;
label_C485:; return;
label_C487:; return;
label_C48A:; return;
label_C48C:; return;
label_C48F:; return;
label_C491:; return;
label_C493:; return;
label_C495:; return;
label_C497:; return;
label_C499:; return;
label_C49C:; return;
label_C49E:; return;
label_C49F:; return;
label_C4A1:; return;
label_C4A2:; return;
label_C4A4:; return;
label_C4A6:; return;
label_C4A8:; return;
label_C4AA:; return;
label_C4AD:; return;
label_C4AF:; return;
label_C4B2:; return;
label_C4B3:; return;
label_C4B5:; return;
label_C4B6:; return;
label_C4B8:; return;
label_C4BA:; return;
label_C4BD:; return;
label_C4BE:; return;
label_C4BF:; return;
label_C4C0:; return;
label_C4C1:; return;
label_C4C2:; return;
label_C4C3:; return;
label_C4C4:; return;
label_C4C5:; return;
label_C4C6:; return;
label_C4C7:; return;
label_C4C8:; return;
label_C4C9:; return;
label_C4CA:; return;
label_C4CB:; return;
label_C4CD:; return;
label_C4CF:; return;
label_C4D1:; return;
label_C4D2:; return;
label_C4D4:; return;
label_C4D6:; return;
label_C4D7:; return;
label_C4D8:; return;
label_C4DA:; return;
label_C4DC:; return;
label_C4DE:; return;
label_C4E0:; return;
label_C4E2:; return;
label_C4E4:; return;
label_C4E6:; return;
label_C4E8:; return;
label_C4EA:; return;
label_C4EC:; return;
label_C4EF:; return;
label_C4F1:; return;
label_C4F3:; return;
label_C4F4:; return;
label_C4F6:; return;
label_C4F8:; return;
label_C4FA:; return;
label_C4FC:; return;
label_C4FF:; return;
label_C501:; return;
label_C504:; return;
label_C507:; return;
label_C50A:; return;
label_C50D:; return;
label_C510:; return;
label_C513:; return;
label_C514:; return;
label_C515:; return;
label_C517:; return;
label_C518:; return;
label_C519:; return;
label_C51A:; return;
label_C51C:; return;
label_C51D:; return;
label_C51F:; return;
label_C521:; return;
label_C523:; return;
label_C526:; return;
label_C527:; return;
label_C529:; return;
label_C52B:; return;
label_C52D:; return;
label_C530:; return;
label_C531:; return;
label_C533:; return;
label_C535:; return;
label_C537:; return;
label_C53A:; return;
label_C53B:; return;
label_C53D:; return;
label_C53F:; return;
label_C541:; return;
label_C544:; return;
label_C545:; return;
label_C547:; return;
label_C54A:; return;
label_C54B:; return;
label_C54E:; return;
label_C550:; return;
label_C553:; return;
label_C554:; return;
label_C556:; return;
label_C557:; return;
label_C559:; return;
label_C55C:; return;
label_C55D:; return;
label_C55F:; return;
label_C560:; return;
label_C562:; return;
label_C563:; return;
label_C565:; return;
label_C567:; return;
label_C569:; return;
label_C56B:; return;
label_C56D:; return;
label_C56F:; return;
label_C571:; return;
label_C573:; return;
label_C575:; return;
label_C576:; return;
label_C578:; return;
label_C57A:; return;
label_C57C:; return;
label_C57E:; return;
label_C57F:; return;
label_C581:; return;
label_C583:; return;
label_C585:; return;
label_C587:; return;
label_C589:; return;
label_C58B:; return;
label_C58D:; return;
label_C58F:; return;
label_C591:; return;
label_C593:; return;
label_C595:; return;
label_C597:; return;
label_C599:; return;
label_C59A:; return;
label_C59C:; return;
label_C59D:; return;
label_C59F:; return;
label_C5A1:; return;
label_C5A3:; return;
label_C5A6:; return;
label_C5A8:; return;
label_C5AA:; return;
label_C5AD:; return;
label_C5AF:; return;
label_C5B2:; return;
label_C5B4:; return;
label_C5B7:; return;
label_C5B9:; return;
label_C5BB:; return;
label_C5BD:; return;
label_C5BF:; return;
label_C5C1:; return;
label_C5C3:; return;
label_C5C6:; return;
label_C5C7:; return;
label_C5C9:; return;
label_C5CA:; return;
label_C5CC:; return;
label_C5CE:; return;
label_C5D0:; return;
label_C5D2:; return;
label_C5D4:; return;
label_C5D6:; return;
label_C5D9:; return;
label_C5DB:; return;
label_C5DE:; return;
label_C5E0:; return;
label_C5E3:; return;
label_C5E4:; return;
label_C5E6:; return;
label_C5E8:; return;
label_C5E9:; return;
label_C5EB:; return;
label_C5ED:; return;
label_C5EF:; return;
label_C5F1:; return;
label_C5F3:; return;
label_C5F5:; return;
label_C5F7:; return;
label_C5F9:; return;
label_C5FB:; return;
label_C5FD:; return;
label_C600:; return;
label_C602:; return;
label_C604:; return;
label_C606:; return;
label_C608:; return;
label_C60A:; return;
label_C60C:; return;
label_C60F:; return;
label_C610:; return;
label_C611:; return;
label_C612:; return;
label_C613:; return;
label_C615:; return;
label_C617:; return;
label_C619:; return;
label_C61B:; return;
label_C61D:; return;
label_C61F:; return;
label_C621:; return;
label_C623:; return;
label_C625:; return;
label_C627:; return;
label_C628:; return;
label_C62A:; return;
label_C62C:; return;
label_C62F:; return;
label_C631:; return;
label_C634:; return;
label_C635:; return;
label_C637:; return;
label_C639:; return;
label_C63B:; return;
label_C63D:; return;
label_C63E:; return;
label_C640:; return;
label_C642:; return;
label_C644:; return;
label_C647:; return;
label_C64A:; return;
label_C64D:; return;
label_C650:; return;
label_C653:; return;
label_C656:; return;
label_C659:; return;
label_C65C:; return;
label_C65D:; return;
label_C65E:; return;
label_C65F:; return;
label_C660:; return;
label_C662:; return;
label_C664:; return;
label_C666:; return;
label_C668:; return;
label_C669:; return;
label_C66B:; return;
label_C66E:; return;
label_C66F:; return;
label_C671:; return;
label_C674:; return;
label_C675:; return;
label_C676:; return;
label_C677:; return;
label_C678:; return;
label_C67A:; return;
label_C67C:; return;
label_C67E:; return;
label_C680:; return;
label_C682:; return;
label_C685:; return;
label_C686:; return;
label_C688:; return;
label_C68B:; return;
label_C68C:; return;
label_C68D:; return;
label_C68E:; return;
label_C68F:; return;
label_C691:; return;
label_C693:; return;
label_C695:; return;
label_C696:; return;
label_C698:; return;
label_C69A:; return;
label_C69C:; return;
label_C69D:; return;
}

void func_98BD_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98BD_b10");
#endif
label_98BD:;
    /* $98BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x98BD); return;
}

void func_B8BD_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8BD_b10");
#endif
label_B8BD:;
    /* $B8BD: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFD02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B8C0:;
    /* $B8C0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8C2:;
    /* $B8C2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x02FB; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8C5:;
    /* $B8C5: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xF78A); FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8CA:;
    /* $B8CA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8CC:;
    /* $B8CC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8CD:;
    /* $B8CD: FA */ maybe_trigger_vblank(2); /* NOP */
label_B8CE:;
    /* $B8CE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8CF:;
    /* $B8CF: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D1:;
    /* $B8D1: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D3:;
    /* $B8D3: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D5:;
    /* $B8D5: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D7:;
    /* $B8D7: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8D9:;
    /* $B8D9: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8DB:;
    /* $B8DB: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8DD:;
    /* $B8DD: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8DF:;
    /* $B8DF: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8E1:;
    /* $B8E1: E2 */ maybe_trigger_vblank(2); /* NOP */
label_B8E3:;
    /* $B8E3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x78); FLAG_NZ(g_cpu.A);
label_B8E5:;
    /* $B8E5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA01 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8E8:;
    /* $B8E8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xBB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8EA:;
    /* $B8EA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8EC:;
    /* $B8EC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8EE:;
    /* $B8EE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8F0:;
    /* $B8F0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8F2:;
    /* $B8F2: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B8F3:;
    /* $B8F3: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_B8F5:;
    /* $B8F5: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B8F7:;
    /* $B8F7: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B8F9:;
    /* $B8F9: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBD01 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B8FC:;
    /* $B8FC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xBE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8FE:;
    /* $B8FE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B900:;
    /* $B900: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_B902:;
    /* $B902: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B904:;
    /* $B904: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B906:;
    /* $B906: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B908:;
    /* $B908: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B90A:;
    /* $B90A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B90C:;
    /* $B90C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B90E:;
    /* $B90E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B90F:;
    /* $B90F: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x25; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B911:;
    /* $B911: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1914), 10); return; }
label_B913:;
    /* $B913: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B915:;
    /* $B915: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_B916:;
    /* $B916: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B918:;
    /* $B918: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B91A:;
    /* $B91A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B91C:;
    /* $B91C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B91E:;
    /* $B91E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B91F:;
    /* $B91F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B920:;
    /* $B920: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xA0; g_cpu.C=(g_cpu.X>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_B922:;
    /* $B922: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B924:;
    /* $B924: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B926:;
    /* $B926: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B928:;
    /* $B928: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B92A:;
    /* $B92A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B92C:;
    /* $B92C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B92E:;
    /* $B92E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B92F:;
    /* $B92F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_B931:; /* main_trap_platform */
    /* $B931: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B932:;
    /* $B932: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B933:;
    /* $B933: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B935:;
    /* $B935: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCD01); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B938:;
    /* $B938: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B93A:;
    /* $B93A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B93C:;
    /* $B93C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B93E:;
    /* $B93E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B940:;
    /* $B940: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B942:;
    /* $B942: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B944:;
    /* $B944: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B946:;
    /* $B946: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B948:;
    /* $B948: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B94A:;
    /* $B94A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B94C:;
    /* $B94C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B94D:;
    /* $B94D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B94E:;
    /* $B94E: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B950:;
    /* $B950: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B952:;
    /* $B952: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B954:;
    /* $B954: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B956:;
    /* $B956: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B958:;
    /* $B958: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B95A:;
    /* $B95A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B95C:;
    /* $B95C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B95E:;
    /* $B95E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B960:;
    /* $B960: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B961:;
    /* $B961: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x92; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B963:;
    /* $B963: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B965:;
    /* $B965: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B967:;
    /* $B967: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B968:;
    /* $B968: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B96A:;
    /* $B96A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B96C:;
    /* $B96C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B96E:;
    /* $B96E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B970:;
    /* $B970: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B972:;
    /* $B972: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B974:;
    /* $B974: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B976:;
    /* $B976: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B978:;
    /* $B978: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B97A:;
    /* $B97A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B97B:;
    /* $B97B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B97D:;
    /* $B97D: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B97F:;
    /* $B97F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B982:;
    /* $B982: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B983:;
    /* $B983: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0302 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B986:;
    /* $B986: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02B0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B989:;
    /* $B989: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B98B:;
    /* $B98B: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B98D:;
    /* $B98D: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B98F:;
    /* $B98F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B991:;
    /* $B991: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B993:;
    /* $B993: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B996:;
    /* $B996: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B997:;
    /* $B997: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0342 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B99A:;
    /* $B99A: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02B0); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B99D:;
    /* $B99D: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B99F:;
    /* $B99F: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B9A1:;
    /* $B9A1: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B9A3:;
    /* $B9A3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9A5:;
    /* $B9A5: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9A7:;
    /* $B9A7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x43 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9A9:;
    /* $B9A9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AB:;
    /* $B9AB: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xC3 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AD:;
    /* $B9AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9AF:;
    /* $B9AF: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B1:;
    /* $B9B1: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B3:;
    /* $B9B3: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B5:;
    /* $B9B5: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B7:;
    /* $B9B7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9B9:;
    /* $B9B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BB:;
    /* $B9BB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BD:;
    /* $B9BD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BF:;
    /* $B9BF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9C1:;
    /* $B9C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C3:;
    /* $B9C3: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9C4:;
    /* $B9C4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C6:;
    /* $B9C6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C8:;
    /* $B9C8: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xF9 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CA:;
    /* $B9CA: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CC:;
    /* $B9CC: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03FA); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9CF:;
    /* $B9CF: FA */ maybe_trigger_vblank(2); /* NOP */
label_B9D0:;
    /* $B9D0: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D2:;
    /* $B9D2: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xFA + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9D4:;
    /* $B9D4: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9D6:;
    /* $B9D6: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x43F9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9D9:;
    /* $B9D9: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9DA:;
    /* $B9DA: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9DC:;
    /* $B9DC: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9DE:;
    /* $B9DE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8F + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9E0:;
    /* $B9E0: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x02E7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9E3:;
    /* $B9E3: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9E5:; /* main_spark_falling_platform */
    /* $B9E5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9E6:;
    /* $B9E6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9E7:;
    /* $B9E7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9E9:;
    /* $B9E9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9EB:;
    /* $B9EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9EC:;
    /* $B9EC: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9ED:;
    /* $B9ED: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9EE:;
    /* $B9EE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9EF:;
    /* $B9EF: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F1:;
    /* $B9F1: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9F4:;
    /* $B9F4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9F5:;
    /* $B9F5: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F7:;
    /* $B9F7: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F9:;
    /* $B9F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FB:;
    /* $B9FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FD:;
    /* $B9FD: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA00:;
    /* $BA00: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA01:;
    /* $BA01: 8F */ maybe_trigger_vblank(4); nes_write(0xE75E, g_cpu.A & g_cpu.X); /* SAX */
label_BA04:;
    /* $BA04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA05:;
    /* $BA05: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA07:;
    /* $BA07: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA08:;
    /* $BA08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA09:;
    /* $BA09: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA0B:;
    /* $BA0B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA0D:;
    /* $BA0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA0E:;
    /* $BA0E: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA0F:;
    /* $BA0F: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA10:;
    /* $BA10: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA11:;
    /* $BA11: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA13:;
    /* $BA13: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA15:;
    /* $BA15: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA16:;
    /* $BA16: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA17:;
    /* $BA17: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BA18:;
    /* $BA18: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1A:;
    /* $BA1A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xE6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1C:;
    /* $BA1C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA1D:;
    /* $BA1D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA1F:;
    /* $BA1F: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA22:;
    /* $BA22: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA23:;
    /* $BA23: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x94 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA25:;
    /* $BA25: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA27:;
    /* $BA27: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA29:;
    /* $BA29: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA2B:;
    /* $BA2B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA2D:;
    /* $BA2D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xDA93); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA30:;
    /* $BA30: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA31:;
    /* $BA31: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA34:;
    /* $BA34: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA35:;
    /* $BA35: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDD02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA38:;
    /* $BA38: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA39:;
    /* $BA39: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA3C:;
    /* $BA3C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA3D:;
    /* $BA3D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BA3F:;
    /* $BA3F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA41:;
    /* $BA41: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BA43:;
    /* $BA43: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA45:;
    /* $BA45: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA47:;
    /* $BA47: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA49:;
    /* $BA49: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x95 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4B:;
    /* $BA4B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BA4C:;
    /* $BA4C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4E:;
    /* $BA4E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA50:;
    /* $BA50: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA52:;
    /* $BA52: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA54:;
    /* $BA54: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03DF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA57:;
    /* $BA57: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BA59:;
    /* $BA59: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE083 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA5C:;
    /* $BA5C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BA5E:;
    /* $BA5E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02F8); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA61:;
    /* $BA61: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA62:;
    /* $BA62: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA63:;
    /* $BA63: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA64:;
    /* $BA64: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA66:;
    /* $BA66: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA68:;
    /* $BA68: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA6B:;
    /* $BA6B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEC2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA6E:;
    /* $BA6E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA6F:;
    /* $BA6F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA72:;
    /* $BA72: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA75:;
    /* $BA75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF42 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA78:;
    /* $BA78: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA7A:;
    /* $BA7A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA7C:;
    /* $BA7C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x82FE); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA7F:;
    /* $BA7F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD42 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA82:;
    /* $BA82: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA84:;
    /* $BA84: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA85:;
    /* $BA85: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA87:;
    /* $BA87: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEE03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA8A:;
    /* $BA8A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8C:;
    /* $BA8C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8E:;
    /* $BA8E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA90:;
    /* $BA90: 8E */ maybe_trigger_vblank(4); nes_write(0x00C7, g_cpu.X);
label_BA93:;
    /* $BA93: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA94:;
    /* $BA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA94); return;
label_BA95:; return;
label_BA97:; return;
label_BA98:; return;
label_BA99:; return;
label_BA9B:; return;
label_BA9E:; return;
label_BA9F:; return;
label_BAA2:; return;
label_BAA5:; return;
label_BAA7:; return;
label_BAA8:; return;
label_BAA9:; return;
label_BAAB:; return;
label_BAAE:; return;
label_BAAF:; return;
label_BAB1:; return;
label_BAB3:; return;
label_BAB4:; return;
label_BAB7:; return;
label_BAB9:; return;
label_BABA:; return;
label_BABB:; return;
label_BABC:; return;
label_BABD:; return;
label_BAC0:; return;
label_BAC1:; return;
label_BAC4:; return;
label_BAC5:; return;
label_BAC8:; return;
label_BACA:; return;
label_BACC:; return;
label_BACE:; return;
label_BAD0:; return;
label_BAD2:; return;
label_BAD4:; return;
label_BAD6:; return;
label_BAD8:; return;
label_BADA:; return;
label_BADC:; return;
label_BADE:; return;
label_BAE0:; return;
label_BAE2:; return;
label_BAE4:; return;
label_BAE6:; return;
label_BAE8:; return;
label_BAEA:; return;
label_BAEC:; return;
label_BAED:; return;
label_BAEF:; return;
label_BAF1:; return;
label_BAF3:; return;
label_BAF5:; return;
label_BAF7:; return;
label_BAF9:; return;
label_BAFB:; return;
label_BAFD:; return;
label_BAFF:; return;
label_BB01:; return;
label_BB03:; return;
label_BB05:; return;
label_BB07:; return;
label_BB09:; return;
label_BB0B:; return;
label_BB0D:; return;
label_BB0F:; return;
label_BB11:; return;
label_BB13:; return;
label_BB14:; return;
label_BB15:; return;
label_BB16:; return;
label_BB17:; return;
label_BB19:; return;
label_BB1A:; return;
label_BB1B:; return;
label_BB1D:; return;
label_BB1E:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB23:; return;
label_BB24:; return;
label_BB25:; return;
label_BB27:; return;
label_BB28:; return;
label_BB29:; return;
label_BB2A:; return;
label_BB2B:; return;
label_BB2C:; return;
label_BB2D:; return;
label_BB2E:; return;
label_BB2F:; return;
label_BB31:; return;
label_BB32:; return;
label_BB33:; return;
label_BB34:; return;
label_BB35:; return;
label_BB36:; return;
label_BB37:; return;
label_BB38:; return;
label_BB39:; return;
label_BB3A:; return;
label_BB3B:; return;
label_BB3C:; return;
label_BB3D:; return;
label_BB3E:; return;
label_BB3F:; return;
label_BB40:; return;
label_BB41:; return;
label_BB42:; return;
label_BB43:; return;
label_BB45:; return;
label_BB46:; return;
label_BB47:; return;
label_BB48:; return;
label_BB4A:; return;
label_BB4B:; return;
label_BB4C:; return;
label_BB4D:; return;
label_BB4E:; return;
label_BB4F:; return;
label_BB50:; return;
label_BB51:; return;
label_BB52:; return;
label_BB53:; return;
label_BB55:; return;
label_BB56:; return;
label_BB57:; return;
label_BB59:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5D:; return;
label_BB5E:; return;
label_BB5F:; return;
label_BB60:; return;
label_BB63:; return;
label_BB64:; return;
label_BB66:; return;
label_BB67:; return;
label_BB68:; return;
label_BB69:; return;
label_BB6A:; return;
label_BB6B:; return;
label_BB6C:; return;
label_BB6D:; return;
label_BB6E:; return;
label_BB6F:; return;
label_BB70:; return;
label_BB71:; return;
label_BB73:; return;
label_BB74:; return;
label_BB75:; return;
label_BB76:; return;
label_BB77:; return;
label_BB78:; return;
label_BB79:; return;
label_BB7A:; return;
label_BB7B:; return;
label_BB7C:; return;
label_BB7E:; return;
label_BB7F:; return;
label_BB81:; return;
label_BB82:; return;
label_BB83:; return;
label_BB84:; return;
label_BB85:; return;
label_BB86:; return;
label_BB87:; return;
label_BB88:; return;
label_BB8B:; return;
label_BB8C:; return;
label_BB8D:; return;
label_BB8E:; return;
label_BB8F:; return;
label_BB90:; return;
label_BB91:; return;
label_BB92:; return;
label_BB93:; return;
label_BB94:; return;
label_BB95:; return;
label_BB96:; return;
label_BB97:; return;
label_BB98:; return;
label_BB99:; return;
label_BB9A:; return;
label_BB9B:; return;
label_BB9C:; return;
label_BB9D:; return;
label_BB9E:; return;
label_BBA1:; return;
label_BBA2:; return;
label_BBA3:; return;
label_BBA4:; return;
label_BBA5:; return;
label_BBA7:; return;
label_BBA8:; return;
label_BBA9:; return;
label_BBAB:; return;
label_BBAC:; return;
label_BBAE:; return;
label_BBAF:; return;
label_BBB1:; return;
label_BBB2:; return;
label_BBB3:; return;
label_BBB4:; return;
label_BBB5:; return;
label_BBB6:; return;
label_BBB7:; return;
label_BBB8:; return;
label_BBB9:; return;
label_BBBA:; return;
label_BBBD:; return;
label_BBBE:; return;
label_BBBF:; return;
label_BBC0:; return;
label_BBC1:; return;
label_BBC2:; return;
label_BBC3:; return;
label_BBC4:; return;
label_BBC5:; return;
label_BBC6:; return;
label_BBC7:; return;
label_BBC8:; return;
label_BBC9:; return;
label_BBCB:; return;
label_BBCC:; return;
label_BBCD:; return;
label_BBCE:; return;
label_BBCF:; return;
label_BBD1:; return;
label_BBD2:; return;
label_BBD3:; return;
label_BBD5:; return;
label_BBD6:; return;
label_BBD7:; return;
label_BBD8:; return;
label_BBD9:; return;
label_BBDA:; return;
label_BBDB:; return;
label_BBDC:; return;
label_BBDD:; return;
label_BBDF:; return;
label_BBE0:; return;
label_BBE1:; return;
label_BBE2:; return;
label_BBE3:; return;
label_BBE4:; return;
label_BBE5:; return;
label_BBE6:; return;
label_BBE7:; return;
label_BBE8:; return;
label_BBEB:; return;
label_BBEC:; return;
label_BBEF:; return;
label_BBF0:; return;
label_BBF1:; return;
label_BBF2:; return;
label_BBF5:; return;
label_BBF7:; return;
label_BBF8:; return;
label_BBF9:; return;
label_BBFB:; return;
label_BBFC:; return;
label_BBFD:; return;
label_BBFE:; return;
label_BBFF:; return;
label_BC02:; return;
label_BC03:; return;
label_BC05:; return;
label_BC07:; return;
label_BC08:; return;
label_BC09:; return;
label_BC0A:; return;
label_BC0C:; return;
label_BC0E:; return;
label_BC0F:; return;
label_BC11:; return;
label_BC12:; return;
label_BC13:; return;
label_BC14:; return;
label_BC15:; return;
label_BC17:; return;
label_BC18:; return;
label_BC19:; return;
label_BC1A:; return;
label_BC1B:; return;
label_BC1C:; return;
label_BC1D:; return;
label_BC1F:; return;
label_BC20:; return;
label_BC21:; return;
label_BC22:; return;
label_BC24:; return;
label_BC25:; return;
label_BC26:; return;
label_BC28:; return;
label_BC29:; return;
label_BC2B:; return;
label_BC2D:; return;
label_BC2E:; return;
label_BC2F:; return;
label_BC30:; return;
label_BC31:; return;
label_BC32:; return;
label_BC33:; return;
label_BC35:; return;
label_BC37:; return;
label_BC38:; return;
label_BC39:; return;
label_BC3A:; return;
label_BC3C:; return;
label_BC3D:; return;
label_BC3E:; return;
label_BC3F:; return;
label_BC41:; return;
label_BC42:; return;
label_BC43:; return;
label_BC44:; return;
label_BC45:; return;
label_BC46:; return;
label_BC47:; return;
label_BC49:; return;
label_BC4A:; return;
label_BC4B:; return;
label_BC4C:; return;
label_BC4D:; return;
label_BC4E:; return;
label_BC4F:; return;
label_BC50:; return;
label_BC51:; return;
label_BC53:; return;
label_BC55:; return;
label_BC56:; return;
label_BC58:; return;
label_BC59:; return;
label_BC5A:; return;
label_BC5B:; return;
label_BC5C:; return;
label_BC5E:; return;
label_BC5F:; return;
label_BC60:; return;
label_BC62:; return;
label_BC63:; return;
label_BC65:; return;
label_BC67:; return;
label_BC68:; return;
label_BC6A:; return;
label_BC6D:; return;
label_BC6F:; return;
label_BC71:; return;
label_BC73:; return;
label_BC75:; return;
label_BC77:; return;
label_BC79:; return;
label_BC7B:; return;
label_BC7C:; return;
label_BC7E:; return;
label_BC80:; return;
label_BC81:; return;
label_BC82:; return;
label_BC84:; return;
label_BC85:; return;
label_BC87:; return;
label_BC88:; return;
label_BC89:; return;
label_BC8A:; return;
label_BC8B:; return;
label_BC8C:; return;
label_BC8F:; return;
label_BC90:; return;
label_BC91:; return;
label_BC92:; return;
label_BC93:; return;
label_BC94:; return;
label_BC95:; return;
label_BC96:; return;
label_BC97:; return;
label_BC99:; return;
label_BC9A:; return;
label_BC9B:; return;
label_BC9C:; return;
label_BC9D:; return;
label_BC9F:; return;
label_BCA0:; return;
label_BCA2:; return;
label_BCA3:; return;
label_BCA5:; return;
label_BCA7:; return;
label_BCA8:; return;
label_BCA9:; return;
label_BCAB:; return;
label_BCAD:; return;
label_BCAE:; return;
label_BCAF:; return;
label_BCB1:; return;
label_BCB3:; return;
label_BCB5:; return;
label_BCB6:; return;
label_BCB8:; return;
label_BCB9:; return;
label_BCBA:; return;
label_BCBB:; return;
label_BCBC:; return;
label_BCBD:; return;
label_BCBE:; return;
label_BCC0:; return;
label_BCC1:; return;
label_BCC2:; return;
label_BCC4:; return;
label_BCC5:; return;
label_BCC7:; return;
label_BCC8:; return;
label_BCC9:; return;
label_BCCB:; return;
label_BCCC:; return;
label_BCCE:; return;
label_BCCF:; return;
label_BCD0:; return;
label_BCD1:; return;
label_BCD2:; return;
label_BCD3:; return;
label_BCD4:; return;
label_BCD7:; return;
label_BCD8:; return;
label_BCD9:; return;
label_BCDA:; return;
label_BCDB:; return;
label_BCDC:; return;
label_BCDD:; return;
label_BCDE:; return;
label_BCDF:; return;
label_BCE1:; return;
label_BCE3:; return;
label_BCE4:; return;
label_BCE5:; return;
label_BCE7:; return;
label_BCEA:; return;
label_BCEC:; return;
label_BCEE:; return;
label_BCF0:; return;
label_BCF2:; return;
label_BCF3:; return;
label_BCF5:; return;
label_BCF7:; return;
label_BCF9:; return;
label_BCFB:; return;
label_BCFC:; return;
label_BCFD:; return;
label_BCFF:; return;
label_BD00:; return;
label_BD01:; return;
label_BD02:; return;
label_BD04:; return;
label_BD05:; return;
label_BD07:; return;
label_BD08:; return;
label_BD0B:; return;
label_BD0C:; return;
label_BD0D:; return;
label_BD0E:; return;
label_BD0F:; return;
label_BD11:; return;
label_BD12:; return;
label_BD14:; return;
label_BD15:; return;
label_BD16:; return;
label_BD17:; return;
label_BD18:; return;
label_BD19:; return;
label_BD1A:; return;
label_BD1B:; return;
label_BD1C:; return;
label_BD1D:; return;
label_BD1E:; return;
label_BD1F:; return;
label_BD20:; return;
label_BD21:; return;
label_BD23:; return;
label_BD24:; return;
label_BD25:; return;
label_BD27:; return;
label_BD28:; return;
label_BD29:; return;
label_BD2B:; return;
label_BD2D:; return;
label_BD2E:; return;
label_BD30:; return;
label_BD32:; return;
label_BD34:; return;
label_BD36:; return;
label_BD37:; return;
label_BD38:; return;
label_BD3A:; return;
label_BD3B:; return;
label_BD3C:; return;
label_BD3F:; return;
label_BD40:; return;
label_BD43:; return;
label_BD44:; return;
label_BD45:; return;
label_BD47:; return;
label_BD49:; return;
label_BD4A:; return;
label_BD4B:; return;
label_BD4C:; return;
label_BD4D:; return;
label_BD4E:; return;
label_BD50:; return;
label_BD51:; return;
label_BD52:; return;
label_BD54:; return;
label_BD55:; return;
label_BD56:; return;
label_BD57:; return;
label_BD58:; return;
label_BD59:; return;
label_BD5A:; return;
label_BD5C:; return;
label_BD5D:; return;
label_BD5F:; return;
label_BD60:; return;
label_BD63:; return;
label_BD64:; return;
label_BD67:; return;
label_BD68:; return;
label_BD6A:; return;
label_BD6B:; return;
label_BD6D:; return;
label_BD6F:; return;
label_BD71:; return;
label_BD73:; return;
label_BD75:; return;
label_BD77:; return;
label_BD79:; return;
label_BD7A:; return;
label_BD7B:; return;
label_BD7D:; return;
label_BD7F:; return;
label_BD81:; return;
label_BD82:; return;
label_BD84:; return;
label_BD86:; return;
label_BD88:; return;
label_BD8A:; return;
label_BD8B:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD8F:; return;
label_BD90:; return;
label_BD91:; return;
label_BD92:; return;
label_BD93:; return;
label_BD94:; return;
label_BD96:; return;
label_BD97:; return;
label_BD98:; return;
label_BD99:; return;
label_BD9A:; return;
label_BD9D:; return;
label_BD9E:; return;
label_BD9F:; return;
label_BDA0:; return;
label_BDA2:; return;
label_BDA3:; return;
label_BDA5:; return;
label_BDA7:; return;
label_BDA8:; return;
label_BDAA:; return;
label_BDAB:; return;
label_BDAC:; return;
label_BDAD:; return;
label_BDAE:; return;
label_BDB1:; return;
label_BDB2:; return;
label_BDB4:; return;
label_BDB6:; return;
label_BDB7:; return;
label_BDB8:; return;
label_BDBA:; return;
label_BDBC:; return;
label_BDBE:; return;
label_BDC1:; return;
label_BDC2:; return;
label_BDC3:; return;
label_BDC4:; return;
label_BDC5:; return;
label_BDC6:; return;
label_BDC7:; return;
label_BDC8:; return;
label_BDC9:; return;
label_BDCA:; return;
label_BDCC:; return;
label_BDCF:; return;
label_BDD0:; return;
label_BDD1:; return;
label_BDD2:; return;
label_BDD4:; return;
label_BDD5:; return;
label_BDD6:; return;
label_BDD7:; return;
label_BDD8:; return;
label_BDDA:; return;
label_BDDC:; return;
label_BDDE:; return;
label_BDDF:; return;
label_BDE0:; return;
label_BDE2:; return;
label_BDE3:; return;
label_BDE4:; return;
label_BDE7:; return;
label_BDE9:; return;
label_BDEB:; return;
label_BDEE:; return;
label_BDF1:; return;
label_BDF3:; return;
label_BDF5:; return;
label_BDF7:; return;
label_BDF9:; return;
label_BDFB:; return;
label_BDFD:; return;
label_BDFF:; return;
label_BE00:; return;
label_BE01:; return;
label_BE02:; return;
label_BE03:; return;
label_BE05:; return;
label_BE07:; return;
label_BE09:; return;
label_BE0A:; return;
label_BE0C:; return;
label_BE0D:; return;
label_BE0E:; return;
label_BE0F:; return;
label_BE10:; return;
label_BE11:; return;
label_BE12:; return;
label_BE13:; return;
label_BE14:; return;
label_BE15:; return;
label_BE16:; return;
label_BE17:; return;
label_BE18:; return;
label_BE19:; return;
label_BE1A:; return;
label_BE1B:; return;
label_BE1C:; return;
label_BE1E:; return;
label_BE1F:; return;
label_BE20:; return;
label_BE21:; return;
label_BE22:; return;
label_BE23:; return;
label_BE25:; return;
label_BE27:; return;
label_BE28:; return;
label_BE2B:; return;
label_BE2D:; return;
label_BE2F:; return;
label_BE30:; return;
label_BE31:; return;
label_BE32:; return;
label_BE34:; return;
label_BE35:; return;
label_BE36:; return;
label_BE38:; return;
label_BE39:; return;
label_BE3A:; return;
label_BE3B:; return;
label_BE3D:; return;
label_BE3E:; return;
label_BE3F:; return;
label_BE41:; return;
label_BE42:; return;
label_BE44:; return;
label_BE45:; return;
label_BE47:; return;
label_BE48:; return;
label_BE49:; return;
label_BE4B:; return;
label_BE4C:; return;
label_BE4D:; return;
label_BE4F:; return;
label_BE50:; return;
label_BE52:; return;
label_BE53:; return;
label_BE55:; return;
label_BE57:; return;
label_BE59:; return;
label_BE5A:; return;
label_BE5B:; return;
label_BE5C:; return;
label_BE5D:; return;
label_BE5F:; return;
label_BE60:; return;
label_BE62:; return;
label_BE65:; return;
label_BE66:; return;
label_BE68:; return;
label_BE6A:; return;
label_BE6C:; return;
label_BE6E:; return;
label_BE70:; return;
label_BE72:; return;
label_BE74:; return;
label_BE76:; return;
label_BE78:; return;
label_BE79:; return;
label_BE7A:; return;
label_BE7C:; return;
label_BE7D:; return;
label_BE7F:; return;
label_BE81:; return;
label_BE82:; return;
label_BE85:; return;
label_BE87:; return;
label_BE88:; return;
label_BE89:; return;
label_BE8A:; return;
label_BE8B:; return;
label_BE8D:; return;
label_BE8E:; return;
label_BE8F:; return;
label_BE90:; return;
label_BE91:; return;
label_BE92:; return;
label_BE94:; return;
label_BE97:; return;
label_BE98:; return;
label_BE9B:; return;
label_BE9C:; return;
label_BE9D:; return;
label_BE9E:; return;
label_BE9F:; return;
label_BEA0:; return;
label_BEA2:; return;
label_BEA3:; return;
label_BEA4:; return;
label_BEA5:; return;
label_BEA6:; return;
label_BEA8:; return;
label_BEAA:; return;
label_BEAC:; return;
label_BEAD:; return;
label_BEAE:; return;
label_BEAF:; return;
label_BEB1:; return;
label_BEB3:; return;
label_BEB4:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB8:; return;
label_BEB9:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBE:; return;
label_BEC0:; return;
label_BEC2:; return;
label_BEC3:; return;
label_BEC4:; return;
label_BEC5:; return;
label_BEC6:; return;
label_BEC8:; return;
label_BEC9:; return;
label_BECB:; return;
label_BECD:; return;
label_BECE:; return;
label_BECF:; return;
label_BED0:; return;
label_BED1:; return;
label_BED2:; return;
label_BED3:; return;
label_BED4:; return;
label_BED5:; return;
label_BED6:; return;
label_BED7:; return;
label_BED8:; return;
label_BED9:; return;
label_BEDA:; return;
label_BEDB:; return;
label_BEDC:; return;
label_BEDD:; return;
label_BEDE:; return;
label_BEDF:; return;
label_BEE0:; return;
label_BEE2:; return;
label_BEE3:; return;
label_BEE5:; return;
label_BEE7:; return;
label_BEE9:; return;
label_BEEC:; return;
label_BEEE:; return;
label_BEEF:; return;
label_BEF1:; return;
label_BEF2:; return;
label_BEF4:; return;
label_BEF5:; return;
label_BEF7:; return;
label_BEF8:; return;
label_BEFA:; return;
label_BEFD:; return;
label_BEFF:; return;
label_BF01:; return;
label_BF02:; return;
label_BF04:; return;
label_BF05:; return;
label_BF06:; return;
label_BF08:; return;
label_BF09:; return;
label_BF0A:; return;
label_BF0B:; return;
label_BF0C:; return;
label_BF0D:; return;
label_BF0E:; return;
label_BF0F:; return;
label_BF11:; return;
label_BF12:; return;
label_BF13:; return;
label_BF14:; return;
label_BF15:; return;
label_BF16:; return;
label_BF17:; return;
label_BF18:; return;
label_BF1A:; return;
label_BF1B:; return;
label_BF1C:; return;
label_BF1D:; return;
label_BF1F:; return;
label_BF20:; return;
label_BF21:; return;
label_BF22:; return;
label_BF23:; return;
label_BF24:; return;
label_BF26:; return;
label_BF28:; return;
label_BF2A:; return;
label_BF2B:; return;
label_BF2D:; return;
label_BF2E:; return;
label_BF2F:; return;
label_BF30:; return;
label_BF31:; return;
label_BF33:; return;
label_BF34:; return;
label_BF35:; return;
label_BF36:; return;
label_BF37:; return;
label_BF38:; return;
label_BF3B:; return;
label_BF3C:; return;
label_BF3E:; return;
label_BF3F:; return;
label_BF40:; return;
label_BF41:; return;
label_BF42:; return;
label_BF43:; return;
label_BF44:; return;
label_BF45:; return;
label_BF46:; return;
label_BF47:; return;
label_BF48:; return;
label_BF49:; return;
label_BF4A:; return;
label_BF4C:; return;
label_BF4D:; return;
label_BF4E:; return;
label_BF50:; return;
label_BF51:; return;
label_BF52:; return;
label_BF53:; return;
label_BF54:; return;
label_BF55:; return;
label_BF56:; return;
label_BF58:; return;
label_BF5A:; return;
label_BF5B:; return;
label_BF5C:; return;
label_BF5E:; return;
label_BF60:; return;
label_BF61:; return;
label_BF63:; return;
label_BF65:; return;
label_BF66:; return;
label_BF68:; return;
label_BF6A:; return;
label_BF6C:; return;
label_BF6E:; return;
label_BF71:; return;
label_BF73:; return;
label_BF75:; return;
label_BF77:; return;
label_BF78:; return;
label_BF7A:; return;
label_BF7C:; return;
label_BF7D:; return;
label_BF7F:; return;
label_BF81:; return;
label_BF82:; return;
label_BF83:; return;
label_BF84:; return;
label_BF87:; return;
label_BF89:; return;
label_BF8A:; return;
label_BF8B:; return;
label_BF8C:; return;
label_BF8D:; return;
label_BF8F:; return;
label_BF90:; return;
label_BF91:; return;
label_BF92:; return;
label_BF93:; return;
label_BF94:; return;
label_BF95:; return;
label_BF97:; return;
label_BF99:; return;
label_BF9A:; return;
label_BF9C:; return;
label_BF9D:; return;
label_BF9E:; return;
label_BF9F:; return;
label_BFA0:; return;
label_BFA2:; return;
label_BFA4:; return;
label_BFA6:; return;
label_BFA7:; return;
label_BFA9:; return;
label_BFAB:; return;
label_BFAC:; return;
label_BFAE:; return;
label_BFAF:; return;
label_BFB0:; return;
label_BFB1:; return;
label_BFB2:; return;
label_BFB3:; return;
label_BFB4:; return;
label_BFB6:; return;
label_BFB8:; return;
label_BFBA:; return;
label_BFBB:; return;
label_BFBD:; return;
label_BFBE:; return;
label_BFBF:; return;
label_BFC0:; return;
label_BFC1:; return;
label_BFC3:; return;
label_BFC4:; return;
label_BFC6:; return;
label_BFC7:; return;
label_BFC8:; return;
label_BFC9:; return;
label_BFCA:; return;
label_BFCC:; return;
label_BFCD:; return;
label_BFCF:; return;
label_BFD1:; return;
label_BFD3:; return;
label_BFD4:; return;
label_BFD6:; return;
label_BFD8:; return;
label_BFD9:; return;
label_BFDA:; return;
label_BFDC:; return;
label_BFDE:; return;
label_BFDF:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE9:; return;
label_BFEB:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF2:; return;
label_BFF4:; return;
label_BFF7:; return;
label_BFF8:; return;
label_BFF9:; return;
label_BFFA:; return;
label_BFFC:; return;
label_BFFF:; return;
label_C001:; return;
label_C002:; return;
label_C003:; return;
label_C004:; return;
label_C005:; return;
label_C006:; return;
label_C009:; return;
label_C00B:; return;
label_C00D:; return;
label_C010:; return;
label_C012:; return;
label_C015:; return;
label_C017:; return;
label_C019:; return;
label_C01B:; return;
label_C01D:; return;
label_C01F:; return;
label_C021:; return;
label_C023:; return;
label_C025:; return;
label_C027:; return;
label_C029:; return;
label_C02B:; return;
label_C02D:; return;
label_C02F:; return;
label_C031:; return;
label_C034:; return;
label_C036:; return;
label_C039:; return;
label_C03B:; return;
label_C03D:; return;
label_C040:; return;
label_C042:; return;
label_C044:; return;
label_C046:; return;
label_C048:; return;
label_C04A:; return;
label_C04D:; return;
label_C04F:; return;
label_C051:; return;
label_C054:; return;
label_C056:; return;
label_C058:; return;
label_C05B:; return;
label_C05D:; return;
label_C05F:; return;
label_C061:; return;
label_C063:; return;
label_C066:; return;
label_C068:; return;
label_C06B:; return;
label_C06E:; return;
label_C070:; return;
label_C073:; return;
label_C076:; return;
label_C077:; return;
label_C078:; return;
label_C07A:; return;
label_C07C:; return;
label_C07F:; return;
label_C082:; return;
label_C085:; return;
label_C088:; return;
label_C08A:; return;
label_C08C:; return;
label_C08E:; return;
label_C091:; return;
label_C093:; return;
label_C096:; return;
label_C098:; return;
label_C09B:; return;
label_C09D:; return;
label_C0A0:; return;
label_C0A2:; return;
label_C0A5:; return;
label_C0A7:; return;
label_C0AA:; return;
label_C0AC:; return;
label_C0AF:; return;
label_C0B1:; return;
label_C0B3:; return;
label_C0B5:; return;
label_C0B8:; return;
label_C0BB:; return;
label_C0BD:; return;
label_C0C0:; return;
label_C0C2:; return;
label_C0C5:; return;
label_C0C8:; return;
label_C0CA:; return;
label_C0CD:; return;
label_C0CF:; return;
label_C0D1:; return;
label_C0D3:; return;
label_C0D5:; return;
label_C0D7:; return;
label_C0D9:; return;
label_C0DB:; return;
label_C0DD:; return;
label_C0E0:; return;
label_C0E2:; return;
label_C0E5:; return;
label_C0E7:; return;
label_C0E9:; return;
label_C0EB:; return;
label_C0ED:; return;
label_C0EE:; return;
label_C0F0:; return;
label_C0F2:; return;
label_C0F4:; return;
label_C0F6:; return;
label_C0F8:; return;
label_C0FA:; return;
label_C0FC:; return;
label_C0FE:; return;
label_C0FF:; return;
label_C100:; return;
label_C101:; return;
label_C102:; return;
label_C103:; return;
label_C105:; return;
label_C106:; return;
label_C109:; return;
label_C10B:; return;
label_C10E:; return;
label_C110:; return;
label_C112:; return;
label_C115:; return;
label_C117:; return;
label_C11A:; return;
label_C11B:; return;
label_C11C:; return;
label_C11D:; return;
label_C11E:; return;
label_C11F:; return;
label_C120:; return;
label_C121:; return;
label_C122:; return;
label_C123:; return;
label_C124:; return;
label_C125:; return;
label_C126:; return;
label_C127:; return;
label_C128:; return;
label_C129:; return;
label_C12A:; return;
label_C12B:; return;
label_C12D:; return;
label_C12F:; return;
label_C132:; return;
label_C134:; return;
label_C136:; return;
label_C139:; return;
label_C13C:; return;
label_C13D:; return;
label_C13E:; return;
label_C13F:; return;
label_C140:; return;
label_C141:; return;
label_C142:; return;
label_C143:; return;
label_C144:; return;
label_C145:; return;
label_C146:; return;
label_C147:; return;
label_C148:; return;
label_C149:; return;
label_C14C:; return;
label_C14F:; return;
label_C152:; return;
label_C154:; return;
label_C156:; return;
label_C158:; return;
label_C15B:; return;
label_C15D:; return;
label_C160:; return;
label_C162:; return;
label_C165:; return;
label_C167:; return;
label_C168:; return;
label_C169:; return;
label_C16B:; return;
label_C16D:; return;
label_C170:; return;
label_C172:; return;
label_C175:; return;
label_C178:; return;
label_C17B:; return;
label_C17E:; return;
label_C180:; return;
label_C183:; return;
label_C185:; return;
label_C188:; return;
label_C18A:; return;
label_C18D:; return;
label_C18F:; return;
label_C192:; return;
label_C195:; return;
label_C198:; return;
label_C19B:; return;
label_C19D:; return;
label_C1A0:; return;
label_C1A2:; return;
label_C1A5:; return;
label_C1A7:; return;
label_C1A9:; return;
label_C1AB:; return;
label_C1AC:; return;
label_C1AE:; return;
label_C1B1:; return;
label_C1B4:; return;
label_C1B6:; return;
label_C1B9:; return;
label_C1BB:; return;
label_C1BE:; return;
label_C1C1:; return;
label_C1C4:; return;
label_C1C6:; return;
label_C1C9:; return;
label_C1CB:; return;
label_C1CE:; return;
label_C1D0:; return;
label_C1D2:; return;
label_C1D5:; return;
label_C1D7:; return;
label_C1DA:; return;
label_C1DD:; return;
label_C1DF:; return;
label_C1E0:; return;
label_C1E2:; return;
label_C1E5:; return;
label_C1E7:; return;
label_C1E9:; return;
label_C1EB:; return;
label_C1ED:; return;
label_C1EF:; return;
label_C1F1:; return;
label_C1F3:; return;
label_C1F6:; return;
label_C1F8:; return;
label_C1FB:; return;
label_C1FD:; return;
label_C200:; return;
label_C203:; return;
label_C205:; return;
label_C208:; return;
label_C20A:; return;
label_C20D:; return;
label_C20F:; return;
label_C212:; return;
label_C214:; return;
label_C217:; return;
label_C219:; return;
label_C21C:; return;
label_C21E:; return;
label_C220:; return;
label_C222:; return;
label_C223:; return;
label_C225:; return;
label_C228:; return;
label_C22B:; return;
label_C22D:; return;
label_C230:; return;
label_C232:; return;
label_C235:; return;
label_C238:; return;
label_C23A:; return;
label_C23D:; return;
label_C23F:; return;
label_C240:; return;
label_C241:; return;
label_C242:; return;
label_C244:; return;
label_C246:; return;
label_C249:; return;
label_C24B:; return;
label_C24D:; return;
label_C250:; return;
label_C252:; return;
label_C255:; return;
label_C257:; return;
label_C25A:; return;
label_C25C:; return;
label_C25D:; return;
label_C25F:; return;
label_C262:; return;
label_C265:; return;
label_C267:; return;
label_C26A:; return;
label_C26C:; return;
label_C26F:; return;
label_C272:; return;
label_C274:; return;
label_C277:; return;
label_C279:; return;
label_C27A:; return;
label_C27B:; return;
label_C27C:; return;
label_C27E:; return;
label_C280:; return;
label_C283:; return;
label_C285:; return;
label_C287:; return;
label_C28A:; return;
label_C28C:; return;
label_C28F:; return;
label_C291:; return;
label_C294:; return;
label_C297:; return;
label_C29A:; return;
label_C29C:; return;
label_C29E:; return;
label_C29F:; return;
label_C2A1:; return;
label_C2A3:; return;
label_C2A5:; return;
label_C2A7:; return;
label_C2A9:; return;
label_C2AB:; return;
label_C2AD:; return;
label_C2AF:; return;
label_C2B1:; return;
label_C2B3:; return;
label_C2B6:; return;
label_C2B8:; return;
label_C2BB:; return;
label_C2BD:; return;
label_C2C0:; return;
label_C2C2:; return;
label_C2C5:; return;
label_C2C8:; return;
label_C2CA:; return;
label_C2CD:; return;
label_C2CF:; return;
label_C2D2:; return;
label_C2D5:; return;
label_C2D7:; return;
label_C2D9:; return;
label_C2DA:; return;
label_C2DB:; return;
label_C2DD:; return;
label_C2E0:; return;
label_C2E2:; return;
label_C2E3:; return;
label_C2E4:; return;
label_C2E5:; return;
label_C2E7:; return;
label_C2E9:; return;
label_C2EC:; return;
label_C2EE:; return;
label_C2F0:; return;
label_C2F2:; return;
label_C2F5:; return;
label_C2F7:; return;
label_C2FA:; return;
label_C2FC:; return;
label_C2FF:; return;
label_C302:; return;
label_C305:; return;
label_C307:; return;
label_C309:; return;
label_C30C:; return;
label_C30D:; return;
label_C310:; return;
label_C313:; return;
label_C316:; return;
label_C319:; return;
label_C31B:; return;
label_C31E:; return;
label_C321:; return;
label_C323:; return;
label_C326:; return;
label_C328:; return;
label_C32B:; return;
label_C32E:; return;
label_C330:; return;
label_C332:; return;
label_C335:; return;
label_C338:; return;
label_C33B:; return;
label_C33D:; return;
label_C33F:; return;
label_C341:; return;
label_C343:; return;
label_C345:; return;
label_C348:; return;
label_C34B:; return;
label_C34D:; return;
label_C350:; return;
label_C352:; return;
label_C355:; return;
label_C357:; return;
label_C359:; return;
label_C35B:; return;
label_C35D:; return;
label_C35F:; return;
label_C360:; return;
label_C362:; return;
label_C365:; return;
label_C368:; return;
label_C36A:; return;
label_C36D:; return;
label_C36F:; return;
label_C372:; return;
label_C375:; return;
label_C378:; return;
label_C37A:; return;
label_C37D:; return;
label_C37F:; return;
label_C382:; return;
label_C384:; return;
label_C386:; return;
label_C389:; return;
label_C38B:; return;
label_C38E:; return;
label_C391:; return;
label_C393:; return;
label_C396:; return;
label_C399:; return;
label_C39B:; return;
label_C39E:; return;
label_C3A0:; return;
label_C3A3:; return;
label_C3A6:; return;
label_C3A8:; return;
label_C3AB:; return;
label_C3AD:; return;
label_C3B0:; return;
label_C3B2:; return;
label_C3B4:; return;
label_C3B6:; return;
label_C3B7:; return;
label_C3B9:; return;
label_C3BC:; return;
label_C3BF:; return;
label_C3C1:; return;
label_C3C4:; return;
label_C3C6:; return;
label_C3C9:; return;
label_C3CC:; return;
label_C3CF:; return;
label_C3D1:; return;
label_C3D2:; return;
label_C3D3:; return;
label_C3D5:; return;
label_C3D8:; return;
label_C3DA:; return;
label_C3DB:; return;
label_C3DC:; return;
label_C3DD:; return;
label_C3DF:; return;
label_C3E2:; return;
label_C3E4:; return;
label_C3E7:; return;
label_C3E9:; return;
label_C3EC:; return;
label_C3EE:; return;
label_C3F0:; return;
label_C3F3:; return;
label_C3F5:; return;
label_C3F6:; return;
label_C3F8:; return;
label_C3FB:; return;
label_C3FE:; return;
label_C400:; return;
label_C403:; return;
label_C405:; return;
label_C408:; return;
label_C40A:; return;
label_C40C:; return;
label_C40E:; return;
label_C40F:; return;
label_C411:; return;
label_C412:; return;
label_C414:; return;
label_C417:; return;
label_C41A:; return;
label_C41C:; return;
label_C41F:; return;
label_C421:; return;
label_C424:; return;
label_C426:; return;
label_C428:; return;
label_C42B:; return;
label_C42D:; return;
label_C430:; return;
label_C433:; return;
label_C435:; return;
label_C437:; return;
label_C43A:; return;
label_C43D:; return;
label_C43F:; return;
label_C442:; return;
label_C444:; return;
label_C447:; return;
label_C44A:; return;
label_C44D:; return;
label_C44F:; return;
label_C452:; return;
label_C454:; return;
label_C457:; return;
label_C459:; return;
label_C45C:; return;
label_C45F:; return;
label_C461:; return;
label_C464:; return;
label_C466:; return;
label_C469:; return;
label_C46C:; return;
label_C46E:; return;
label_C471:; return;
label_C473:; return;
label_C476:; return;
label_C478:; return;
label_C47A:; return;
label_C47C:; return;
label_C47F:; return;
label_C481:; return;
label_C483:; return;
label_C485:; return;
label_C487:; return;
label_C48A:; return;
label_C48C:; return;
label_C48F:; return;
label_C491:; return;
label_C493:; return;
label_C495:; return;
label_C497:; return;
label_C499:; return;
label_C49C:; return;
label_C49E:; return;
label_C49F:; return;
label_C4A1:; return;
label_C4A2:; return;
label_C4A4:; return;
label_C4A6:; return;
label_C4A8:; return;
label_C4AA:; return;
label_C4AD:; return;
label_C4AF:; return;
label_C4B2:; return;
label_C4B3:; return;
label_C4B5:; return;
label_C4B6:; return;
label_C4B8:; return;
label_C4BA:; return;
label_C4BD:; return;
label_C4BE:; return;
label_C4BF:; return;
label_C4C0:; return;
label_C4C1:; return;
label_C4C2:; return;
label_C4C3:; return;
label_C4C4:; return;
label_C4C5:; return;
label_C4C6:; return;
label_C4C7:; return;
label_C4C8:; return;
label_C4C9:; return;
label_C4CA:; return;
label_C4CB:; return;
label_C4CD:; return;
label_C4CF:; return;
label_C4D1:; return;
label_C4D2:; return;
label_C4D4:; return;
label_C4D6:; return;
label_C4D7:; return;
label_C4D8:; return;
label_C4DA:; return;
label_C4DC:; return;
label_C4DE:; return;
label_C4E0:; return;
label_C4E2:; return;
label_C4E4:; return;
label_C4E6:; return;
label_C4E8:; return;
label_C4EA:; return;
label_C4EC:; return;
label_C4EF:; return;
label_C4F1:; return;
label_C4F3:; return;
label_C4F4:; return;
label_C4F6:; return;
label_C4F8:; return;
label_C4FA:; return;
label_C4FC:; return;
label_C4FF:; return;
label_C501:; return;
label_C504:; return;
label_C507:; return;
label_C50A:; return;
label_C50D:; return;
label_C510:; return;
label_C513:; return;
label_C514:; return;
label_C515:; return;
label_C517:; return;
label_C518:; return;
label_C519:; return;
label_C51A:; return;
label_C51C:; return;
label_C51D:; return;
label_C51F:; return;
label_C521:; return;
label_C523:; return;
label_C526:; return;
label_C527:; return;
label_C529:; return;
label_C52B:; return;
label_C52D:; return;
label_C530:; return;
label_C531:; return;
label_C533:; return;
label_C535:; return;
label_C537:; return;
label_C53A:; return;
label_C53B:; return;
label_C53D:; return;
label_C53F:; return;
label_C541:; return;
label_C544:; return;
label_C545:; return;
label_C547:; return;
label_C54A:; return;
label_C54B:; return;
label_C54E:; return;
label_C550:; return;
label_C553:; return;
label_C554:; return;
label_C556:; return;
label_C557:; return;
label_C559:; return;
label_C55C:; return;
label_C55D:; return;
label_C55F:; return;
label_C560:; return;
label_C562:; return;
label_C563:; return;
label_C565:; return;
label_C567:; return;
label_C569:; return;
label_C56B:; return;
label_C56D:; return;
label_C56F:; return;
label_C571:; return;
label_C573:; return;
label_C575:; return;
label_C576:; return;
label_C578:; return;
label_C57A:; return;
label_C57C:; return;
label_C57E:; return;
label_C57F:; return;
label_C581:; return;
label_C583:; return;
label_C585:; return;
label_C587:; return;
label_C589:; return;
label_C58B:; return;
label_C58D:; return;
label_C58F:; return;
label_C591:; return;
label_C593:; return;
label_C595:; return;
label_C597:; return;
label_C599:; return;
label_C59A:; return;
label_C59C:; return;
label_C59D:; return;
label_C59F:; return;
label_C5A1:; return;
label_C5A3:; return;
label_C5A6:; return;
label_C5A8:; return;
label_C5AA:; return;
label_C5AD:; return;
label_C5AF:; return;
label_C5B2:; return;
label_C5B4:; return;
label_C5B7:; return;
label_C5B9:; return;
label_C5BB:; return;
label_C5BD:; return;
label_C5BF:; return;
label_C5C1:; return;
label_C5C3:; return;
label_C5C6:; return;
label_C5C7:; return;
label_C5C9:; return;
label_C5CA:; return;
label_C5CC:; return;
label_C5CE:; return;
label_C5D0:; return;
label_C5D2:; return;
label_C5D4:; return;
label_C5D6:; return;
label_C5D9:; return;
label_C5DB:; return;
label_C5DE:; return;
label_C5E0:; return;
label_C5E3:; return;
label_C5E4:; return;
label_C5E6:; return;
label_C5E8:; return;
label_C5E9:; return;
label_C5EB:; return;
label_C5ED:; return;
label_C5EF:; return;
label_C5F1:; return;
label_C5F3:; return;
label_C5F5:; return;
label_C5F7:; return;
label_C5F9:; return;
label_C5FB:; return;
label_C5FD:; return;
label_C600:; return;
label_C602:; return;
label_C604:; return;
label_C606:; return;
label_C608:; return;
label_C60A:; return;
label_C60C:; return;
label_C60F:; return;
label_C610:; return;
label_C611:; return;
label_C612:; return;
label_C613:; return;
label_C615:; return;
label_C617:; return;
label_C619:; return;
label_C61B:; return;
label_C61D:; return;
label_C61F:; return;
label_C621:; return;
label_C623:; return;
label_C625:; return;
label_C627:; return;
label_C628:; return;
label_C62A:; return;
label_C62C:; return;
label_C62F:; return;
label_C631:; return;
label_C634:; return;
label_C635:; return;
label_C637:; return;
label_C639:; return;
label_C63B:; return;
label_C63D:; return;
label_C63E:; return;
label_C640:; return;
label_C642:; return;
label_C644:; return;
label_C647:; return;
label_C64A:; return;
label_C64D:; return;
label_C650:; return;
label_C653:; return;
label_C656:; return;
label_C659:; return;
label_C65C:; return;
label_C65D:; return;
label_C65E:; return;
label_C65F:; return;
label_C660:; return;
label_C662:; return;
label_C664:; return;
label_C666:; return;
label_C668:; return;
label_C669:; return;
label_C66B:; return;
label_C66E:; return;
label_C66F:; return;
label_C671:; return;
label_C674:; return;
label_C675:; return;
label_C676:; return;
label_C677:; return;
label_C678:; return;
label_C67A:; return;
label_C67C:; return;
label_C67E:; return;
label_C680:; return;
label_C682:; return;
label_C685:; return;
label_C686:; return;
label_C688:; return;
label_C68B:; return;
label_C68C:; return;
label_C68D:; return;
label_C68E:; return;
label_C68F:; return;
label_C691:; return;
label_C693:; return;
label_C695:; return;
label_C696:; return;
label_C698:; return;
label_C69A:; return;
label_C69C:; return;
label_C69D:; return;
label_C69F:; return;
label_C6A0:; return;
label_C6A2:; return;
label_C6A4:; return;
label_C6A6:; return;
label_C6A7:; return;
label_C6A8:; return;
label_C6A9:; return;
label_C6AA:; return;
label_C6AB:; return;
label_C6AC:; return;
label_C6AE:; return;
label_C6B1:; return;
label_C6B4:; return;
label_C6B7:; return;
label_C6BA:; return;
label_C6BD:; return;
label_C6C0:; return;
label_C6C3:; return;
label_C6C4:; return;
label_C6C6:; return;
label_C6C9:; return;
label_C6CA:; return;
}

void func_82F2_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F2_b10");
#endif
label_82F2:;
    /* $82F2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82F3:;
    /* $82F3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82F4:;
    /* $82F4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82F5:;
    /* $82F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8F0(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F8:;
    /* $82F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FA; }
label_82FA:;
    /* $82FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8304; }
label_82FC:;
    /* $82FC: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FD:;
    /* $82FD: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FE:;
    /* $82FE: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FF:;
    /* $82FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82FF); return;
label_8300:;
    /* $8300: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8300); return;
label_8301:;
    /* $8301: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8302:;
    /* $8302: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8302); return;
label_8303:;
    /* $8303: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8303); return;
label_8304:;
    /* $8304: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8305:;
    /* $8305: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8306:;
    /* $8306: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8307:;
    /* $8307: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8311; }
label_8309:;
    /* $8309: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_830A:;
    /* $830A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830B:;
    /* $830B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x830B); return;
label_830C:;
    /* $830C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830D:;
    /* $830D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830E:;
    /* $830E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830F:;
    /* $830F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02E1), 10); return; }
label_8311:;
    /* $8311: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02E3), 10); return; }
label_8313:;
    /* $8313: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8314:;
    /* $8314: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F6), 10); return; }
label_8316:;
    /* $8316: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F0), 10); return; }
label_8318:;
    /* $8318: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8319:;
    /* $8319: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82F3;
    }
label_831B:;
    /* $831B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_831C:;
    /* $831C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_831D:;
    /* $831D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_831F:;
    /* $831F: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8320:;
    /* $8320: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_8322:;
    /* $8322: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8324:;
    /* $8324: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8326:;
    /* $8326: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_8328:;
    /* $8328: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8329:;
    /* $8329: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_832A:;
    /* $832A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832B:;
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0315), 10); return; }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8334; }
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8328;
    }
label_8338:;
    /* $8338: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8339:;
    /* $8339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8339); return;
}

void func_82B9_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82B9_b10");
#endif
label_82B9:;
    /* $82B9: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82BA:;
    /* $82BA: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01F0 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82BD:;
    /* $82BD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_82BE:;
    /* $82BE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_82C0:;
    /* $82C0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_82C2:;
    /* $82C2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_82C4:;
    /* $82C4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x10; FLAG_NZ(g_cpu.A);
label_82C6:;
    /* $82C6: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_82C8:;
    /* $82C8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x00; FLAG_NZ(g_cpu.A);
label_82CA:;
    /* $82CA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_82CC:;
    /* $82CC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF0; FLAG_NZ(g_cpu.A);
label_82CE:;
    /* $82CE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xE8; FLAG_NZ(g_cpu.A);
label_82D0:;
    /* $82D0: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82D2:;
    /* $82D2: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF8; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82D4:;
    /* $82D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82DE; }
label_82D6:;
    /* $82D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82E8; }
label_82D8:;
    /* $82D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F2), 10); return; }
label_82DA:;
    /* $82DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FC; }
label_82DC:;
    /* $82DC: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82DD:;
    /* $82DD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_82DE:;
    /* $82DE: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82DF:;
    /* $82DF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82B9;
    }
label_82E1:;
    /* $82E1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82E2:;
    /* $82E2: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82E3:;
    /* $82E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x08E0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82E6:;
    /* $82E6: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_82E8:;
    /* $82E8: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x18; g_cpu.C=(g_cpu.X>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_82EA:;
    /* $82EA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_82EC:;
    /* $82EC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82ED:;
    /* $82ED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82ED); return;
label_82EE:;
    /* $82EE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82EF:;
    /* $82EF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_82F0:;
    /* $82F0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82F1:;
    /* $82F1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x02DB), 10); return; }
label_82F3:;
    /* $82F3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82F4:;
    /* $82F4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82F5:;
    /* $82F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8F0(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F8:;
    /* $82F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FA; }
label_82FA:;
    /* $82FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8304; }
label_82FC:;
    /* $82FC: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FD:;
    /* $82FD: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FE:;
    /* $82FE: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FF:;
    /* $82FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82FF); return;
label_8300:;
    /* $8300: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8300); return;
label_8301:;
    /* $8301: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8302:;
    /* $8302: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8302); return;
label_8303:;
    /* $8303: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8303); return;
label_8304:;
    /* $8304: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8305:;
    /* $8305: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8306:;
    /* $8306: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8307:;
    /* $8307: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8311; }
label_8309:;
    /* $8309: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_830A:;
    /* $830A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830B:;
    /* $830B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x830B); return;
label_830C:;
    /* $830C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830D:;
    /* $830D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830E:;
    /* $830E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830F:;
    /* $830F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82E1;
    }
label_8311:;
    /* $8311: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82E3;
    }
label_8313:;
    /* $8313: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8314:;
    /* $8314: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F6), 10); return; }
label_8316:;
    /* $8316: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82F0;
    }
label_8318:;
    /* $8318: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8319:;
    /* $8319: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82F3;
    }
label_831B:;
    /* $831B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_831C:;
    /* $831C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_831D:;
    /* $831D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_831F:;
    /* $831F: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8320:;
    /* $8320: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_8322:;
    /* $8322: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8324:;
    /* $8324: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8326:;
    /* $8326: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_8328:;
    /* $8328: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8329:;
    /* $8329: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_832A:;
    /* $832A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832B:;
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0315), 10); return; }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8334; }
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8328;
    }
label_8338:;
    /* $8338: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8339:;
    /* $8339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8339); return;
label_833A:; return;
label_833B:; return;
label_833C:; return;
label_833D:; return;
label_833E:; return;
label_833F:; return;
label_8340:; return;
label_8341:; return;
label_8343:; return;
label_8344:; return;
label_8345:; return;
label_8346:; return;
label_8347:; return;
label_8348:; return;
label_8349:; return;
label_834B:; return;
label_834C:; return;
label_834E:; return;
label_8350:; return;
label_8352:; return;
label_8354:; return;
label_8355:; return;
label_8356:; return;
label_8357:; return;
label_8359:; return;
label_835A:; return;
label_835B:; return;
label_835D:; return;
label_835E:; return;
label_8360:; return;
label_8362:; return;
label_8364:; return;
label_8365:; return;
label_8366:; return;
label_8367:; return;
label_8369:; return;
label_836A:; return;
label_836B:; return;
label_836D:; return;
label_836E:; return;
label_8370:; return;
label_8372:; return;
label_8374:; return;
label_8375:; return;
label_8376:; return;
label_8377:; return;
label_8378:; return;
label_8379:; return;
label_837A:; return;
label_837B:; return;
label_837C:; return;
label_837D:; return;
label_837E:; return;
label_837F:; return;
label_8381:; return;
label_8382:; return;
label_8383:; return;
label_8384:; return;
label_8385:; return;
label_8386:; return;
label_8387:; return;
label_8389:; return;
label_838C:; return;
label_838E:; return;
label_8390:; return;
label_8391:; return;
label_8394:; return;
label_8395:; return;
label_8397:; return;
label_8398:; return;
label_839A:; return;
label_839C:; return;
label_839E:; return;
label_83A0:; return;
label_83A1:; return;
label_83A4:; return;
label_83A5:; return;
label_83A7:; return;
label_83A8:; return;
label_83A9:; return;
label_83AA:; return;
label_83AC:; return;
label_83AE:; return;
label_83B0:; return;
label_83B1:; return;
label_83B2:; return;
label_83B3:; return;
label_83B4:; return;
label_83B5:; return;
label_83B6:; return;
label_83B7:; return;
label_83B8:; return;
label_83B9:; return;
label_83BB:; return;
label_83BC:; return;
label_83BD:; return;
label_83BE:; return;
label_83BF:; return;
label_83C0:; return;
label_83C1:; return;
label_83C3:; return;
label_83C4:; return;
label_83C6:; return;
label_83C9:; return;
label_83CB:; return;
label_83CE:; return;
label_83D0:; return;
label_83D3:; return;
label_83D6:; return;
label_83D9:; return;
label_83DB:; return;
label_83DE:; return;
label_83E1:; return;
label_83E4:; return;
label_83E7:; return;
label_83E9:; return;
label_83EB:; return;
label_83ED:; return;
label_83EF:; return;
label_83F1:; return;
label_83F4:; return;
label_83F7:; return;
label_83F9:; return;
label_83FC:; return;
label_83FE:; return;
label_8400:; return;
label_8403:; return;
label_8405:; return;
label_8407:; return;
label_8409:; return;
label_840A:; return;
label_840C:; return;
label_840D:; return;
label_840E:; return;
label_840F:; return;
label_8410:; return;
label_8413:; return;
label_8414:; return;
label_8415:; return;
label_8416:; return;
label_8417:; return;
label_8418:; return;
label_841A:; return;
label_841B:; return;
label_841E:; return;
label_841F:; return;
label_8422:; return;
label_8423:; return;
label_8426:; return;
label_8427:; return;
label_842A:; return;
label_842C:; return;
label_842D:; return;
label_842E:; return;
label_842F:; return;
label_8430:; return;
label_8432:; return;
label_8434:; return;
label_8435:; return;
label_8436:; return;
label_8437:; return;
label_8438:; return;
label_843A:; return;
label_843B:; return;
label_843E:; return;
label_843F:; return;
label_8442:; return;
label_8443:; return;
label_8446:; return;
label_8447:; return;
label_844A:; return;
label_844B:; return;
label_844E:; return;
label_844F:; return;
label_8452:; return;
label_8455:; return;
label_8457:; return;
label_8459:; return;
label_845A:; return;
label_845C:; return;
label_845F:; return;
label_8461:; return;
label_8463:; return;
label_8465:; return;
label_8467:; return;
label_8469:; return;
label_846B:; return;
label_846E:; return;
label_8470:; return;
label_8473:; return;
label_8476:; return;
label_8479:; return;
label_847C:; return;
label_847F:; return;
label_8481:; return;
label_8482:; return;
label_8484:; return;
label_8487:; return;
label_8488:; return;
label_848A:; return;
label_848D:; return;
label_8490:; return;
label_8493:; return;
label_8496:; return;
label_8499:; return;
label_849A:; return;
label_849C:; return;
label_849D:; return;
label_849E:; return;
label_849F:; return;
label_84A0:; return;
label_84A1:; return;
label_84A2:; return;
label_84A3:; return;
label_84A5:; return;
label_84A6:; return;
label_84A7:; return;
label_84A8:; return;
label_84A9:; return;
label_84AA:; return;
label_84AB:; return;
label_84AD:; return;
label_84B0:; return;
label_84B3:; return;
label_84B5:; return;
label_84B6:; return;
label_84B8:; return;
label_84B9:; return;
label_84BA:; return;
label_84BB:; return;
label_84BC:; return;
label_84BD:; return;
label_84BF:; return;
label_84C0:; return;
label_84C1:; return;
label_84C2:; return;
label_84C3:; return;
label_84C4:; return;
label_84C5:; return;
label_84C7:; return;
label_84C9:; return;
label_84CC:; return;
label_84CF:; return;
label_84D0:; return;
label_84D2:; return;
label_84D4:; return;
label_84D6:; return;
label_84D8:; return;
label_84D9:; return;
label_84DB:; return;
label_84DC:; return;
label_84DD:; return;
label_84DE:; return;
label_84DF:; return;
label_84E0:; return;
label_84E1:; return;
label_84E2:; return;
label_84E3:; return;
label_84E4:; return;
label_84E5:; return;
label_84E7:; return;
label_84EA:; return;
label_84EB:; return;
label_84EE:; return;
label_84F0:; return;
label_84F2:; return;
label_84F4:; return;
label_84F5:; return;
label_84F6:; return;
label_84F7:; return;
label_84F8:; return;
label_84F9:; return;
label_84FA:; return;
label_84FB:; return;
label_84FD:; return;
label_84FE:; return;
label_84FF:; return;
label_8500:; return;
label_8501:; return;
label_8503:; return;
label_8506:; return;
label_8507:; return;
label_850A:; return;
label_850C:; return;
label_850F:; return;
label_8510:; return;
label_8513:; return;
label_8514:; return;
label_8516:; return;
label_8518:; return;
label_851A:; return;
label_851C:; return;
label_851E:; return;
label_8520:; return;
label_8523:; return;
label_8524:; return;
label_8526:; return;
label_8529:; return;
label_852B:; return;
label_852C:; return;
label_852E:; return;
label_8530:; return;
label_8532:; return;
label_8535:; return;
label_8536:; return;
label_8539:; return;
label_853B:; return;
label_853D:; return;
label_8540:; return;
label_8542:; return;
label_8544:; return;
label_8546:; return;
label_8549:; return;
label_854B:; return;
label_854C:; return;
label_854F:; return;
label_8550:; return;
label_8552:; return;
label_8554:; return;
label_8555:; return;
label_8557:; return;
label_8558:; return;
label_8559:; return;
label_855A:; return;
label_855B:; return;
label_855C:; return;
label_855D:; return;
label_855F:; return;
label_8560:; return;
label_8561:; return;
label_8562:; return;
label_8563:; return;
label_8564:; return;
label_8565:; return;
label_8566:; return;
label_8567:; return;
label_8568:; return;
label_856A:; return;
label_856C:; return;
label_856F:; return;
label_8570:; return;
label_8572:; return;
label_8573:; return;
label_8574:; return;
label_8575:; return;
label_8576:; return;
label_8577:; return;
label_8578:; return;
label_8579:; return;
label_857B:; return;
label_857C:; return;
label_857D:; return;
label_857E:; return;
label_857F:; return;
label_8580:; return;
label_8581:; return;
label_8583:; return;
label_8584:; return;
label_8585:; return;
label_8586:; return;
label_8588:; return;
label_858A:; return;
label_858D:; return;
label_858E:; return;
label_8590:; return;
label_8591:; return;
label_8592:; return;
label_8593:; return;
label_8594:; return;
label_8595:; return;
label_8597:; return;
label_8598:; return;
label_8599:; return;
label_859A:; return;
label_859B:; return;
label_859C:; return;
label_859D:; return;
label_859F:; return;
label_85A2:; return;
label_85A3:; return;
label_85A5:; return;
label_85A8:; return;
label_85AB:; return;
label_85AC:; return;
label_85AE:; return;
label_85B1:; return;
label_85B3:; return;
label_85B4:; return;
label_85B6:; return;
label_85B7:; return;
label_85B8:; return;
label_85B9:; return;
label_85BA:; return;
label_85BB:; return;
label_85BC:; return;
label_85BD:; return;
label_85BE:; return;
label_85BF:; return;
label_85C0:; return;
label_85C1:; return;
label_85C3:; return;
label_85C5:; return;
label_85C8:; return;
label_85C9:; return;
label_85CB:; return;
label_85CE:; return;
label_85D1:; return;
label_85D3:; return;
label_85D4:; return;
label_85D7:; return;
label_85D8:; return;
label_85DA:; return;
label_85DC:; return;
label_85DE:; return;
label_85E0:; return;
label_85E1:; return;
label_85E4:; return;
label_85E5:; return;
label_85E7:; return;
label_85EA:; return;
label_85EB:; return;
label_85ED:; return;
label_85F0:; return;
label_85F2:; return;
label_85F4:; return;
label_85F7:; return;
label_85FA:; return;
label_85FC:; return;
label_85FD:; return;
label_8600:; return;
label_8601:; return;
label_8604:; return;
label_8605:; return;
label_8607:; return;
label_860A:; return;
label_860B:; return;
label_860D:; return;
label_8610:; return;
label_8613:; return;
label_8616:; return;
label_8618:; return;
label_8619:; return;
label_861C:; return;
label_861D:; return;
label_8620:; return;
label_8621:; return;
label_8624:; return;
label_8625:; return;
label_8628:; return;
label_8629:; return;
label_862C:; return;
label_862E:; return;
label_8631:; return;
label_8633:; return;
label_8636:; return;
label_8637:; return;
label_8639:; return;
label_863C:; return;
label_863D:; return;
label_863F:; return;
label_8641:; return;
label_8644:; return;
label_8645:; return;
label_8648:; return;
label_864A:; return;
label_864D:; return;
label_8650:; return;
label_8653:; return;
label_8655:; return;
label_8658:; return;
label_865A:; return;
label_865C:; return;
label_865E:; return;
label_8660:; return;
label_8663:; return;
label_8665:; return;
label_8668:; return;
label_866B:; return;
label_866E:; return;
label_8671:; return;
label_8673:; return;
label_8674:; return;
label_8676:; return;
label_8678:; return;
label_867B:; return;
label_867C:; return;
label_867E:; return;
label_8680:; return;
label_8683:; return;
label_8685:; return;
label_8688:; return;
label_868B:; return;
label_868E:; return;
label_8690:; return;
label_8692:; return;
label_8694:; return;
label_8697:; return;
label_8699:; return;
label_869C:; return;
label_869F:; return;
label_86A2:; return;
label_86A5:; return;
label_86A6:; return;
label_86A8:; return;
label_86AA:; return;
label_86AC:; return;
label_86AF:; return;
label_86B1:; return;
label_86B3:; return;
label_86B4:; return;
label_86B7:; return;
label_86B8:; return;
label_86BA:; return;
label_86BC:; return;
label_86BF:; return;
label_86C2:; return;
label_86C4:; return;
label_86C6:; return;
label_86C8:; return;
label_86CB:; return;
label_86CD:; return;
label_86D0:; return;
label_86D3:; return;
label_86D4:; return;
label_86D7:; return;
label_86D8:; return;
label_86DA:; return;
label_86DC:; return;
label_86DF:; return;
label_86E2:; return;
label_86E4:; return;
label_86E6:; return;
label_86E8:; return;
label_86EB:; return;
label_86ED:; return;
label_86F0:; return;
label_86F3:; return;
label_86F4:; return;
label_86F7:; return;
label_86F8:; return;
label_86FA:; return;
label_86FC:; return;
label_86FF:; return;
label_8702:; return;
label_8704:; return;
label_8706:; return;
label_8708:; return;
label_870B:; return;
label_870D:; return;
label_8710:; return;
label_8713:; return;
label_8714:; return;
label_8717:; return;
label_8719:; return;
label_871C:; return;
label_871F:; return;
label_8722:; return;
label_8724:; return;
label_8726:; return;
label_8728:; return;
label_872B:; return;
label_872D:; return;
label_8730:; return;
label_8733:; return;
label_8736:; return;
label_8739:; return;
label_873A:; return;
label_873D:; return;
label_873E:; return;
label_8741:; return;
label_8742:; return;
label_8744:; return;
label_8746:; return;
label_8748:; return;
label_874A:; return;
label_874C:; return;
label_874F:; return;
label_8752:; return;
label_8754:; return;
label_8756:; return;
label_8758:; return;
label_875B:; return;
label_875D:; return;
label_8760:; return;
label_8763:; return;
label_8766:; return;
label_8769:; return;
label_876A:; return;
label_876D:; return;
label_876F:; return;
label_8770:; return;
label_8772:; return;
label_8774:; return;
label_8776:; return;
label_8778:; return;
label_877A:; return;
label_877C:; return;
label_877F:; return;
label_8782:; return;
label_8784:; return;
label_8786:; return;
label_8788:; return;
label_878B:; return;
label_878D:; return;
label_8790:; return;
label_8793:; return;
label_8796:; return;
label_8799:; return;
label_879B:; return;
label_879C:; return;
label_879E:; return;
label_87A0:; return;
label_87A3:; return;
label_87A5:; return;
label_87A8:; return;
label_87AB:; return;
label_87AE:; return;
label_87B0:; return;
label_87B2:; return;
label_87B4:; return;
label_87B7:; return;
label_87B9:; return;
label_87BC:; return;
label_87BF:; return;
label_87C2:; return;
label_87C5:; return;
label_87C6:; return;
label_87C8:; return;
label_87CA:; return;
label_87CC:; return;
label_87CF:; return;
label_87D1:; return;
label_87D4:; return;
label_87D7:; return;
label_87DA:; return;
label_87DC:; return;
label_87DE:; return;
label_87E0:; return;
label_87E3:; return;
label_87E5:; return;
label_87E8:; return;
label_87EB:; return;
label_87EE:; return;
label_87F0:; return;
label_87F2:; return;
label_87F4:; return;
label_87F6:; return;
label_87F9:; return;
label_87FB:; return;
label_87FE:; return;
label_8801:; return;
label_8804:; return;
label_8806:; return;
label_8808:; return;
label_880A:; return;
label_880D:; return;
label_880F:; return;
label_8810:; return;
label_8813:; return;
label_8814:; return;
label_8817:; return;
label_881A:; return;
label_881C:; return;
label_881E:; return;
label_8820:; return;
label_8823:; return;
label_8825:; return;
label_8828:; return;
label_882B:; return;
label_882E:; return;
label_8830:; return;
label_8832:; return;
label_8834:; return;
label_8837:; return;
label_8838:; return;
label_883B:; return;
label_883C:; return;
label_883F:; return;
label_8840:; return;
label_8842:; return;
label_8844:; return;
label_8846:; return;
label_8848:; return;
label_8849:; return;
label_884B:; return;
label_884E:; return;
label_884F:; return;
label_8852:; return;
label_8853:; return;
label_8855:; return;
label_8858:; return;
label_8859:; return;
label_885B:; return;
label_885E:; return;
label_885F:; return;
label_8860:; return;
label_8862:; return;
label_8864:; return;
label_8866:; return;
label_8868:; return;
label_8869:; return;
label_886B:; return;
label_886E:; return;
label_886F:; return;
label_8872:; return;
label_8873:; return;
label_8875:; return;
label_8878:; return;
label_8879:; return;
label_887B:; return;
label_887E:; return;
label_887F:; return;
label_8880:; return;
label_8882:; return;
label_8884:; return;
label_8886:; return;
label_8888:; return;
label_888B:; return;
label_888C:; return;
label_888F:; return;
label_8890:; return;
label_8892:; return;
label_8894:; return;
label_8896:; return;
label_8898:; return;
label_889A:; return;
label_889C:; return;
label_889E:; return;
label_88A0:; return;
label_88A3:; return;
label_88A4:; return;
label_88A6:; return;
label_88A8:; return;
label_88AA:; return;
label_88AD:; return;
label_88AE:; return;
label_88B1:; return;
label_88B3:; return;
label_88B4:; return;
label_88B6:; return;
label_88B8:; return;
label_88BA:; return;
label_88BC:; return;
label_88BE:; return;
label_88C0:; return;
label_88C2:; return;
label_88C5:; return;
label_88C7:; return;
label_88C8:; return;
label_88CA:; return;
label_88CC:; return;
label_88CF:; return;
label_88D0:; return;
label_88D3:; return;
label_88D4:; return;
label_88D6:; return;
label_88D8:; return;
label_88DA:; return;
label_88DC:; return;
label_88DE:; return;
label_88E0:; return;
label_88E2:; return;
label_88E4:; return;
label_88E6:; return;
label_88E8:; return;
label_88EA:; return;
label_88EC:; return;
label_88EE:; return;
label_88F1:; return;
label_88F2:; return;
label_88F5:; return;
label_88F7:; return;
label_88F8:; return;
label_88FA:; return;
label_88FC:; return;
label_88FE:; return;
label_8900:; return;
label_8902:; return;
label_8904:; return;
label_8906:; return;
label_8908:; return;
label_890A:; return;
label_890C:; return;
label_890E:; return;
label_8910:; return;
label_8912:; return;
label_8915:; return;
label_8917:; return;
label_891A:; return;
label_891D:; return;
label_8920:; return;
label_8922:; return;
label_8924:; return;
label_8926:; return;
label_8929:; return;
label_892B:; return;
label_892C:; return;
label_892F:; return;
label_8930:; return;
label_8933:; return;
label_8935:; return;
label_8936:; return;
label_8938:; return;
label_893A:; return;
label_893C:; return;
label_893E:; return;
label_8940:; return;
label_8942:; return;
label_8944:; return;
label_8947:; return;
label_8949:; return;
label_894C:; return;
label_894F:; return;
label_8952:; return;
label_8954:; return;
label_8956:; return;
label_8958:; return;
label_895B:; return;
label_895C:; return;
label_895F:; return;
label_8960:; return;
label_8963:; return;
label_8964:; return;
label_8966:; return;
label_8968:; return;
label_896A:; return;
label_896C:; return;
label_896E:; return;
label_8970:; return;
label_8972:; return;
label_8973:; return;
label_8974:; return;
label_8975:; return;
label_8976:; return;
label_8977:; return;
label_8978:; return;
label_8979:; return;
label_897A:; return;
label_897B:; return;
label_897C:; return;
label_897D:; return;
label_897E:; return;
label_897F:; return;
label_8980:; return;
label_8981:; return;
label_8982:; return;
label_8983:; return;
label_8986:; return;
label_8987:; return;
label_8989:; return;
label_898B:; return;
label_898D:; return;
label_8990:; return;
label_8991:; return;
label_8994:; return;
label_8995:; return;
label_8998:; return;
label_8999:; return;
label_899B:; return;
label_899E:; return;
label_899F:; return;
label_89A2:; return;
label_89A3:; return;
label_89A5:; return;
label_89A8:; return;
label_89AA:; return;
label_89AB:; return;
label_89AD:; return;
label_89AE:; return;
label_89B0:; return;
label_89B2:; return;
label_89B4:; return;
label_89B5:; return;
label_89B6:; return;
label_89B7:; return;
label_89B8:; return;
label_89B9:; return;
label_89BA:; return;
label_89BB:; return;
label_89BC:; return;
label_89BD:; return;
label_89BE:; return;
label_89BF:; return;
label_89C0:; return;
label_89C1:; return;
label_89C2:; return;
label_89C3:; return;
label_89C6:; return;
label_89C7:; return;
label_89C9:; return;
label_89CA:; return;
label_89CB:; return;
label_89CC:; return;
label_89CE:; return;
label_89D0:; return;
label_89D2:; return;
label_89D4:; return;
label_89D5:; return;
label_89D8:; return;
label_89D9:; return;
label_89DC:; return;
label_89DD:; return;
label_89DF:; return;
label_89E2:; return;
label_89E3:; return;
label_89E6:; return;
label_89E7:; return;
label_89E8:; return;
label_89E9:; return;
label_89EB:; return;
label_89EC:; return;
label_89ED:; return;
label_89EE:; return;
label_89EF:; return;
label_89F0:; return;
label_89F1:; return;
label_89F3:; return;
label_89F4:; return;
label_89F5:; return;
label_89F6:; return;
label_89F7:; return;
label_89F8:; return;
label_89F9:; return;
label_89FB:; return;
label_89FC:; return;
label_89FD:; return;
label_89FE:; return;
label_89FF:; return;
label_8A00:; return;
label_8A01:; return;
label_8A02:; return;
label_8A03:; return;
label_8A04:; return;
label_8A05:; return;
label_8A06:; return;
label_8A07:; return;
label_8A09:; return;
label_8A0A:; return;
label_8A0B:; return;
label_8A0C:; return;
label_8A0D:; return;
label_8A0E:; return;
label_8A0F:; return;
label_8A11:; return;
label_8A12:; return;
label_8A13:; return;
label_8A14:; return;
label_8A15:; return;
label_8A16:; return;
label_8A17:; return;
label_8A19:; return;
label_8A1A:; return;
label_8A1B:; return;
label_8A1C:; return;
label_8A1D:; return;
label_8A1E:; return;
label_8A1F:; return;
label_8A21:; return;
label_8A22:; return;
label_8A23:; return;
label_8A24:; return;
label_8A25:; return;
label_8A27:; return;
label_8A29:; return;
label_8A2B:; return;
label_8A2C:; return;
label_8A2E:; return;
label_8A31:; return;
label_8A32:; return;
label_8A35:; return;
label_8A36:; return;
label_8A38:; return;
label_8A3A:; return;
label_8A3C:; return;
label_8A3E:; return;
label_8A41:; return;
label_8A42:; return;
label_8A44:; return;
label_8A46:; return;
label_8A49:; return;
label_8A4A:; return;
label_8A4D:; return;
label_8A4F:; return;
label_8A50:; return;
label_8A52:; return;
label_8A54:; return;
label_8A56:; return;
label_8A59:; return;
label_8A5B:; return;
label_8A5C:; return;
label_8A5D:; return;
label_8A5E:; return;
label_8A5F:; return;
label_8A60:; return;
label_8A61:; return;
label_8A63:; return;
label_8A64:; return;
label_8A65:; return;
label_8A66:; return;
label_8A67:; return;
label_8A68:; return;
label_8A69:; return;
label_8A6B:; return;
label_8A6E:; return;
label_8A6F:; return;
label_8A71:; return;
label_8A73:; return;
label_8A74:; return;
label_8A75:; return;
label_8A76:; return;
label_8A77:; return;
label_8A78:; return;
label_8A79:; return;
label_8A7B:; return;
label_8A7C:; return;
label_8A7D:; return;
label_8A7E:; return;
label_8A7F:; return;
label_8A80:; return;
label_8A81:; return;
label_8A83:; return;
label_8A85:; return;
label_8A88:; return;
label_8A89:; return;
label_8A8A:; return;
label_8A8B:; return;
label_8A8D:; return;
label_8A8E:; return;
label_8A8F:; return;
label_8A90:; return;
label_8A91:; return;
label_8A93:; return;
label_8A94:; return;
label_8A95:; return;
label_8A96:; return;
label_8A97:; return;
label_8A98:; return;
label_8A99:; return;
label_8A9A:; return;
label_8A9C:; return;
label_8A9E:; return;
label_8AA0:; return;
label_8AA2:; return;
label_8AA3:; return;
label_8AA5:; return;
label_8AA6:; return;
label_8AA7:; return;
label_8AA8:; return;
label_8AA9:; return;
label_8AAB:; return;
label_8AAC:; return;
label_8AAD:; return;
label_8AAE:; return;
label_8AAF:; return;
label_8AB1:; return;
label_8AB2:; return;
label_8AB3:; return;
label_8AB4:; return;
label_8AB6:; return;
label_8AB7:; return;
label_8AB8:; return;
label_8AB9:; return;
label_8ABA:; return;
label_8ABB:; return;
label_8ABC:; return;
label_8ABD:; return;
label_8ABE:; return;
label_8ABF:; return;
label_8AC0:; return;
label_8AC1:; return;
label_8AC2:; return;
label_8AC3:; return;
label_8AC4:; return;
label_8AC6:; return;
label_8AC8:; return;
label_8ACA:; return;
label_8ACC:; return;
label_8ACD:; return;
label_8ACE:; return;
label_8ACF:; return;
label_8AD1:; return;
label_8AD3:; return;
label_8AD4:; return;
label_8AD5:; return;
label_8AD6:; return;
label_8AD7:; return;
label_8AD9:; return;
label_8ADA:; return;
label_8ADB:; return;
label_8ADC:; return;
label_8ADD:; return;
label_8ADE:; return;
label_8AE0:; return;
label_8AE1:; return;
label_8AE2:; return;
label_8AE4:; return;
label_8AE6:; return;
label_8AE8:; return;
label_8AE9:; return;
label_8AEB:; return;
label_8AEC:; return;
label_8AED:; return;
label_8AEE:; return;
label_8AEF:; return;
label_8AF0:; return;
label_8AF1:; return;
label_8AF3:; return;
label_8AF6:; return;
label_8AF7:; return;
label_8AF9:; return;
label_8AFA:; return;
label_8AFB:; return;
label_8AFC:; return;
label_8AFD:; return;
label_8AFE:; return;
label_8AFF:; return;
label_8B01:; return;
label_8B02:; return;
label_8B03:; return;
label_8B04:; return;
label_8B06:; return;
label_8B07:; return;
label_8B09:; return;
label_8B0A:; return;
label_8B0C:; return;
label_8B0E:; return;
label_8B10:; return;
label_8B11:; return;
label_8B12:; return;
label_8B13:; return;
label_8B14:; return;
label_8B15:; return;
label_8B16:; return;
label_8B17:; return;
label_8B19:; return;
label_8B1B:; return;
label_8B1E:; return;
label_8B1F:; return;
label_8B20:; return;
label_8B21:; return;
label_8B22:; return;
label_8B23:; return;
label_8B24:; return;
label_8B25:; return;
label_8B27:; return;
label_8B28:; return;
label_8B29:; return;
label_8B2A:; return;
label_8B2B:; return;
label_8B2C:; return;
label_8B2E:; return;
label_8B2F:; return;
label_8B32:; return;
label_8B34:; return;
label_8B36:; return;
label_8B38:; return;
label_8B3A:; return;
label_8B3D:; return;
label_8B3E:; return;
label_8B41:; return;
label_8B42:; return;
label_8B44:; return;
label_8B46:; return;
label_8B48:; return;
label_8B4A:; return;
label_8B4C:; return;
label_8B4E:; return;
label_8B50:; return;
label_8B52:; return;
label_8B55:; return;
label_8B56:; return;
label_8B58:; return;
label_8B5A:; return;
label_8B5C:; return;
label_8B5E:; return;
label_8B60:; return;
label_8B62:; return;
label_8B65:; return;
label_8B68:; return;
label_8B6B:; return;
label_8B6D:; return;
label_8B70:; return;
label_8B72:; return;
label_8B74:; return;
label_8B76:; return;
label_8B78:; return;
label_8B7A:; return;
label_8B7D:; return;
label_8B80:; return;
label_8B82:; return;
label_8B84:; return;
label_8B86:; return;
label_8B87:; return;
label_8B89:; return;
label_8B8C:; return;
label_8B8D:; return;
label_8B90:; return;
label_8B91:; return;
label_8B93:; return;
label_8B96:; return;
label_8B97:; return;
label_8B99:; return;
label_8B9C:; return;
label_8B9F:; return;
label_8BA2:; return;
label_8BA4:; return;
label_8BA5:; return;
label_8BA7:; return;
label_8BAA:; return;
label_8BAD:; return;
label_8BAF:; return;
label_8BB1:; return;
label_8BB4:; return;
label_8BB5:; return;
label_8BB7:; return;
label_8BB9:; return;
label_8BBC:; return;
label_8BBD:; return;
label_8BBF:; return;
label_8BC2:; return;
label_8BC3:; return;
label_8BC5:; return;
label_8BC8:; return;
label_8BCB:; return;
label_8BCE:; return;
label_8BD0:; return;
label_8BD1:; return;
label_8BD3:; return;
label_8BD6:; return;
label_8BD9:; return;
label_8BDC:; return;
label_8BDE:; return;
label_8BDF:; return;
label_8BE1:; return;
label_8BE4:; return;
label_8BE5:; return;
label_8BE8:; return;
label_8BE9:; return;
label_8BEC:; return;
label_8BED:; return;
label_8BF0:; return;
label_8BF1:; return;
label_8BF3:; return;
label_8BF6:; return;
label_8BF9:; return;
label_8BFA:; return;
label_8BFC:; return;
label_8BFE:; return;
label_8C00:; return;
label_8C01:; return;
label_8C02:; return;
label_8C03:; return;
label_8C04:; return;
label_8C05:; return;
label_8C06:; return;
label_8C07:; return;
label_8C08:; return;
label_8C09:; return;
label_8C0A:; return;
label_8C0B:; return;
label_8C0C:; return;
label_8C0D:; return;
label_8C0E:; return;
label_8C0F:; return;
label_8C10:; return;
label_8C11:; return;
label_8C12:; return;
label_8C13:; return;
label_8C14:; return;
label_8C15:; return;
label_8C16:; return;
label_8C17:; return;
label_8C18:; return;
label_8C1B:; return;
label_8C1E:; return;
label_8C20:; return;
label_8C21:; return;
label_8C23:; return;
label_8C24:; return;
label_8C25:; return;
label_8C26:; return;
label_8C27:; return;
label_8C28:; return;
label_8C29:; return;
label_8C2B:; return;
label_8C2C:; return;
label_8C2D:; return;
label_8C2E:; return;
label_8C2F:; return;
label_8C30:; return;
label_8C31:; return;
label_8C32:; return;
label_8C33:; return;
label_8C34:; return;
label_8C36:; return;
label_8C38:; return;
label_8C39:; return;
label_8C3B:; return;
label_8C3C:; return;
label_8C3E:; return;
label_8C40:; return;
label_8C42:; return;
label_8C43:; return;
label_8C44:; return;
label_8C45:; return;
label_8C46:; return;
label_8C47:; return;
label_8C48:; return;
label_8C49:; return;
label_8C4B:; return;
label_8C4C:; return;
label_8C4D:; return;
label_8C4E:; return;
label_8C4F:; return;
label_8C50:; return;
label_8C51:; return;
label_8C53:; return;
label_8C54:; return;
label_8C55:; return;
label_8C56:; return;
label_8C58:; return;
label_8C5A:; return;
label_8C5B:; return;
label_8C5C:; return;
label_8C5D:; return;
label_8C5F:; return;
label_8C62:; return;
label_8C64:; return;
label_8C66:; return;
label_8C68:; return;
label_8C6B:; return;
label_8C6C:; return;
label_8C6F:; return;
label_8C70:; return;
label_8C72:; return;
label_8C74:; return;
label_8C76:; return;
label_8C78:; return;
label_8C7A:; return;
label_8C7C:; return;
label_8C7E:; return;
label_8C80:; return;
label_8C81:; return;
label_8C84:; return;
label_8C86:; return;
label_8C88:; return;
label_8C8A:; return;
label_8C8D:; return;
label_8C8E:; return;
label_8C91:; return;
label_8C93:; return;
label_8C94:; return;
label_8C96:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA3:; return;
label_8CA6:; return;
label_8CA8:; return;
label_8CAA:; return;
label_8CAC:; return;
label_8CAD:; return;
label_8CAE:; return;
label_8CAF:; return;
label_8CB1:; return;
label_8CB2:; return;
label_8CB3:; return;
label_8CB4:; return;
label_8CB5:; return;
label_8CB6:; return;
label_8CB7:; return;
label_8CB9:; return;
label_8CBB:; return;
label_8CBC:; return;
label_8CBD:; return;
label_8CBE:; return;
label_8CBF:; return;
label_8CC0:; return;
label_8CC1:; return;
label_8CC3:; return;
label_8CC4:; return;
label_8CC5:; return;
label_8CC6:; return;
label_8CC7:; return;
label_8CC8:; return;
label_8CCA:; return;
label_8CCC:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD3:; return;
label_8CD5:; return;
label_8CD6:; return;
label_8CD7:; return;
label_8CD8:; return;
label_8CD9:; return;
label_8CDA:; return;
label_8CDB:; return;
label_8CDD:; return;
label_8CDE:; return;
label_8CDF:; return;
label_8CE0:; return;
label_8CE1:; return;
label_8CE2:; return;
label_8CE3:; return;
label_8CE4:; return;
label_8CE5:; return;
label_8CE7:; return;
label_8CE8:; return;
label_8CE9:; return;
label_8CEA:; return;
label_8CEB:; return;
label_8CEC:; return;
label_8CED:; return;
label_8CEF:; return;
label_8CF2:; return;
label_8CF4:; return;
label_8CF6:; return;
label_8CF8:; return;
label_8CFA:; return;
label_8CFC:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D02:; return;
label_8D04:; return;
label_8D07:; return;
label_8D08:; return;
label_8D0B:; return;
label_8D0C:; return;
label_8D0E:; return;
label_8D10:; return;
label_8D12:; return;
label_8D14:; return;
label_8D16:; return;
label_8D18:; return;
label_8D1A:; return;
label_8D1C:; return;
label_8D1E:; return;
label_8D20:; return;
label_8D22:; return;
label_8D24:; return;
label_8D26:; return;
label_8D28:; return;
label_8D2A:; return;
label_8D2C:; return;
label_8D2E:; return;
label_8D30:; return;
label_8D32:; return;
label_8D34:; return;
label_8D37:; return;
label_8D38:; return;
label_8D3B:; return;
label_8D3D:; return;
label_8D3E:; return;
label_8D40:; return;
label_8D42:; return;
label_8D44:; return;
label_8D46:; return;
label_8D48:; return;
label_8D4A:; return;
label_8D4C:; return;
label_8D4E:; return;
label_8D50:; return;
label_8D52:; return;
label_8D54:; return;
label_8D56:; return;
label_8D58:; return;
label_8D5A:; return;
label_8D5C:; return;
label_8D5E:; return;
label_8D60:; return;
label_8D62:; return;
label_8D64:; return;
label_8D67:; return;
label_8D6A:; return;
label_8D6D:; return;
label_8D6F:; return;
label_8D72:; return;
label_8D74:; return;
label_8D76:; return;
label_8D78:; return;
label_8D7A:; return;
label_8D7C:; return;
label_8D7E:; return;
label_8D80:; return;
label_8D82:; return;
label_8D84:; return;
label_8D86:; return;
label_8D88:; return;
label_8D8A:; return;
label_8D8C:; return;
label_8D8E:; return;
label_8D90:; return;
label_8D93:; return;
label_8D96:; return;
label_8D99:; return;
label_8D9B:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA2:; return;
label_8DA4:; return;
label_8DA6:; return;
label_8DA8:; return;
label_8DAA:; return;
label_8DAC:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB4:; return;
label_8DB6:; return;
label_8DB8:; return;
label_8DBA:; return;
label_8DBC:; return;
label_8DBE:; return;
label_8DC0:; return;
label_8DC2:; return;
label_8DC4:; return;
label_8DC7:; return;
label_8DC8:; return;
label_8DCA:; return;
label_8DCD:; return;
label_8DCF:; return;
label_8DD2:; return;
label_8DD4:; return;
label_8DD6:; return;
label_8DD8:; return;
label_8DDA:; return;
label_8DDC:; return;
label_8DDE:; return;
label_8DE0:; return;
label_8DE2:; return;
label_8DE5:; return;
label_8DE7:; return;
label_8DEA:; return;
label_8DEB:; return;
label_8DEE:; return;
label_8DEF:; return;
label_8DF1:; return;
label_8DF4:; return;
label_8DF5:; return;
label_8DF7:; return;
label_8DFA:; return;
label_8DFD:; return;
label_8E00:; return;
label_8E02:; return;
label_8E03:; return;
label_8E05:; return;
label_8E08:; return;
label_8E09:; return;
label_8E0B:; return;
label_8E0E:; return;
label_8E0F:; return;
label_8E11:; return;
label_8E14:; return;
label_8E17:; return;
label_8E1A:; return;
label_8E1C:; return;
label_8E1F:; return;
label_8E20:; return;
label_8E23:; return;
label_8E24:; return;
label_8E26:; return;
label_8E28:; return;
label_8E2A:; return;
label_8E2C:; return;
label_8E2E:; return;
label_8E30:; return;
label_8E33:; return;
label_8E34:; return;
label_8E36:; return;
label_8E39:; return;
label_8E3A:; return;
label_8E3D:; return;
label_8E3F:; return;
label_8E41:; return;
label_8E44:; return;
label_8E46:; return;
label_8E48:; return;
label_8E4A:; return;
label_8E4D:; return;
label_8E4F:; return;
label_8E52:; return;
label_8E53:; return;
label_8E55:; return;
label_8E58:; return;
label_8E59:; return;
label_8E5C:; return;
label_8E5D:; return;
label_8E60:; return;
label_8E61:; return;
label_8E64:; return;
label_8E66:; return;
label_8E67:; return;
label_8E69:; return;
label_8E6B:; return;
label_8E6E:; return;
label_8E6F:; return;
label_8E71:; return;
label_8E73:; return;
label_8E76:; return;
label_8E77:; return;
label_8E7A:; return;
label_8E7C:; return;
label_8E7F:; return;
label_8E81:; return;
label_8E84:; return;
label_8E86:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E90:; return;
label_8E93:; return;
label_8E95:; return;
label_8E98:; return;
label_8E9B:; return;
label_8E9E:; return;
label_8EA0:; return;
label_8EA2:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA8:; return;
label_8EAA:; return;
label_8EAD:; return;
label_8EAE:; return;
label_8EB0:; return;
label_8EB3:; return;
label_8EB4:; return;
label_8EB7:; return;
label_8EB9:; return;
label_8EBC:; return;
label_8EBE:; return;
label_8EC0:; return;
label_8EC2:; return;
label_8EC5:; return;
label_8EC8:; return;
label_8ECB:; return;
label_8ECE:; return;
label_8ED0:; return;
label_8ED2:; return;
label_8ED4:; return;
label_8ED6:; return;
label_8ED8:; return;
label_8EDA:; return;
label_8EDD:; return;
label_8EDF:; return;
label_8EE2:; return;
label_8EE3:; return;
label_8EE6:; return;
label_8EE7:; return;
label_8EEA:; return;
label_8EEB:; return;
label_8EED:; return;
label_8EF0:; return;
label_8EF2:; return;
label_8EF4:; return;
label_8EF5:; return;
label_8EF6:; return;
label_8EF7:; return;
label_8EF8:; return;
label_8EF9:; return;
label_8EFB:; return;
label_8EFE:; return;
label_8EFF:; return;
label_8F01:; return;
label_8F04:; return;
label_8F07:; return;
label_8F0A:; return;
label_8F0C:; return;
label_8F0E:; return;
label_8F11:; return;
label_8F13:; return;
label_8F16:; return;
label_8F18:; return;
label_8F1B:; return;
label_8F1E:; return;
label_8F20:; return;
label_8F22:; return;
label_8F25:; return;
label_8F27:; return;
label_8F2A:; return;
label_8F2C:; return;
label_8F2E:; return;
label_8F30:; return;
label_8F31:; return;
label_8F33:; return;
label_8F36:; return;
label_8F37:; return;
label_8F39:; return;
label_8F3B:; return;
label_8F3E:; return;
label_8F3F:; return;
label_8F41:; return;
label_8F44:; return;
label_8F46:; return;
label_8F48:; return;
label_8F49:; return;
label_8F4B:; return;
label_8F4E:; return;
label_8F4F:; return;
label_8F52:; return;
label_8F53:; return;
label_8F56:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5C:; return;
label_8F5E:; return;
label_8F60:; return;
label_8F62:; return;
label_8F65:; return;
label_8F67:; return;
label_8F6A:; return;
label_8F6C:; return;
label_8F6E:; return;
label_8F6F:; return;
label_8F71:; return;
label_8F73:; return;
label_8F76:; return;
label_8F79:; return;
label_8F7B:; return;
label_8F7E:; return;
label_8F80:; return;
label_8F82:; return;
label_8F83:; return;
label_8F85:; return;
label_8F86:; return;
label_8F88:; return;
label_8F8B:; return;
label_8F8C:; return;
label_8F8E:; return;
label_8F90:; return;
label_8F92:; return;
label_8F94:; return;
label_8F96:; return;
label_8F99:; return;
label_8F9A:; return;
label_8F9C:; return;
label_8F9F:; return;
label_8FA0:; return;
label_8FA2:; return;
label_8FA4:; return;
label_8FA6:; return;
label_8FA8:; return;
label_8FAA:; return;
label_8FAD:; return;
label_8FB0:; return;
label_8FB1:; return;
label_8FB3:; return;
label_8FB6:; return;
label_8FB7:; return;
label_8FB9:; return;
label_8FBC:; return;
label_8FBD:; return;
label_8FBF:; return;
label_8FC1:; return;
label_8FC4:; return;
label_8FC7:; return;
label_8FCA:; return;
label_8FCB:; return;
label_8FCD:; return;
label_8FD0:; return;
label_8FD1:; return;
label_8FD3:; return;
label_8FD6:; return;
label_8FD7:; return;
label_8FDA:; return;
label_8FDB:; return;
label_8FDE:; return;
label_8FE1:; return;
label_8FE2:; return;
label_8FE3:; return;
label_8FE4:; return;
label_8FE5:; return;
label_8FE7:; return;
label_8FEA:; return;
label_8FEB:; return;
label_8FED:; return;
label_8FEE:; return;
label_8FEF:; return;
label_8FF0:; return;
label_8FF1:; return;
label_8FF2:; return;
label_8FF4:; return;
label_8FF6:; return;
label_8FF8:; return;
label_8FF9:; return;
label_8FFC:; return;
label_8FFD:; return;
label_8FFF:; return;
label_9002:; return;
label_9003:; return;
label_9004:; return;
label_9005:; return;
label_9006:; return;
label_9007:; return;
label_9008:; return;
label_9009:; return;
label_900B:; return;
label_900C:; return;
label_900E:; return;
label_9010:; return;
label_9012:; return;
label_9014:; return;
label_9017:; return;
label_9018:; return;
label_901B:; return;
label_901C:; return;
label_901E:; return;
label_9020:; return;
label_9022:; return;
label_9024:; return;
label_9026:; return;
label_9029:; return;
label_902C:; return;
label_902F:; return;
label_9032:; return;
label_9035:; return;
label_9038:; return;
label_903A:; return;
label_903C:; return;
label_903E:; return;
label_9041:; return;
label_9043:; return;
label_9046:; return;
label_9049:; return;
label_904B:; return;
label_904E:; return;
label_9050:; return;
label_9052:; return;
label_9054:; return;
label_9056:; return;
label_9058:; return;
label_905B:; return;
label_905D:; return;
label_9060:; return;
label_9063:; return;
label_9065:; return;
label_9068:; return;
label_906A:; return;
label_906C:; return;
label_906E:; return;
label_9070:; return;
label_9072:; return;
label_9075:; return;
label_9078:; return;
label_907A:; return;
label_907B:; return;
label_907E:; return;
label_907F:; return;
label_9082:; return;
label_9083:; return;
label_9085:; return;
label_9088:; return;
label_908B:; return;
label_908C:; return;
label_908E:; return;
label_9090:; return;
label_9091:; return;
label_9094:; return;
label_9095:; return;
label_9098:; return;
label_9099:; return;
label_909B:; return;
label_909E:; return;
label_90A1:; return;
label_90A3:; return;
label_90A6:; return;
label_90A7:; return;
label_90AA:; return;
label_90AB:; return;
label_90AE:; return;
label_90AF:; return;
label_90B1:; return;
label_90B4:; return;
label_90B7:; return;
label_90B9:; return;
label_90BC:; return;
label_90BD:; return;
label_90C0:; return;
label_90C1:; return;
label_90C4:; return;
label_90C5:; return;
label_90C7:; return;
label_90CA:; return;
label_90CD:; return;
label_90D0:; return;
label_90D1:; return;
label_90D4:; return;
label_90D5:; return;
label_90D7:; return;
label_90D9:; return;
label_90DC:; return;
label_90DD:; return;
label_90DF:; return;
label_90E1:; return;
label_90E4:; return;
label_90E5:; return;
label_90E8:; return;
label_90EA:; return;
label_90EC:; return;
label_90ED:; return;
label_90F0:; return;
label_90F1:; return;
label_90F4:; return;
label_90F5:; return;
label_90F8:; return;
label_90F9:; return;
label_90FC:; return;
label_90FD:; return;
label_9100:; return;
label_9101:; return;
label_9102:; return;
label_9103:; return;
label_9104:; return;
label_9105:; return;
label_9107:; return;
label_910A:; return;
label_910B:; return;
label_910E:; return;
label_910F:; return;
label_9112:; return;
label_9113:; return;
label_9116:; return;
label_9117:; return;
label_911A:; return;
label_911B:; return;
label_911C:; return;
label_911D:; return;
label_911E:; return;
label_911F:; return;
label_9120:; return;
label_9121:; return;
label_9123:; return;
label_9126:; return;
label_9127:; return;
label_912A:; return;
label_912C:; return;
label_912E:; return;
label_9130:; return;
label_9131:; return;
label_9132:; return;
label_9133:; return;
label_9134:; return;
label_9135:; return;
label_9137:; return;
label_913A:; return;
label_913B:; return;
label_913E:; return;
label_913F:; return;
label_9142:; return;
label_9143:; return;
label_9146:; return;
label_9147:; return;
label_914A:; return;
label_914C:; return;
label_914E:; return;
label_9150:; return;
label_9151:; return;
label_9154:; return;
label_9156:; return;
label_9158:; return;
}

void func_8353_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8353_b10");
#endif
label_8353:;
    /* $8353: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x032D), 10); return; }
label_8355:;
    /* $8355: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8356:;
    /* $8356: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8357:;
    /* $8357: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_8359:;
    /* $8359: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_835A:;
    /* $835A: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_835B:;
    /* $835B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x033D), 10); return; }
label_835D:;
    /* $835D: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_835E:;
    /* $835E: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8360:;
    /* $8360: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8362:;
    /* $8362: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_8364:;
    /* $8364: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8365:;
    /* $8365: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8366:;
    /* $8366: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8367:;
    /* $8367: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8369:;
    /* $8369: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_836A:;
    /* $836A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_836B:;
    /* $836B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8355;
    }
label_836D:;
    /* $836D: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_836E:;
    /* $836E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8360;
    }
label_8370:;
    /* $8370: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_836A;
    }
label_8372:;
    /* $8372: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8374; }
label_8374:;
    /* $8374: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8375:;
    /* $8375: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8376:;
    /* $8376: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8377:;
    /* $8377: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8377); return;
}

void func_853E_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_853E_b10");
#endif
label_853E:;
    /* $853E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8540:;
    /* $8540: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8542:;
    /* $8542: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8544:;
    /* $8544: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xF4; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8546:;
    /* $8546: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF3FC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8549:;
    /* $8549: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_853E;
    }
label_854B:;
    /* $854B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_854C:;
    /* $854C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFB10 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_854F:;
    /* $854F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8550:;
    /* $8550: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x10 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8552:;
    /* $8552: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8554:;
    /* $8554: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8555:;
    /* $8555: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_854F;
    }
label_8557:;
    /* $8557: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8558:;
    /* $8558: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8559:;
    /* $8559: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8559); return;
}

void func_858B_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_858B_b10");
#endif
label_858B:;
    /* $858B: FC */ maybe_trigger_vblank(4); (void)nes_read((0x00F0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_858E:;
    /* $858E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0588), 10); return; }
label_8590:;
    /* $8590: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8591:;
    /* $8591: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8592:;
    /* $8592: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8593:;
    /* $8593: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8593); return;
}

void func_82E1_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82E1_b10");
#endif
label_82E1:;
    /* $82E1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82E2:;
    /* $82E2: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82E3:;
    /* $82E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x08E0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82E6:;
    /* $82E6: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_82E8:;
    /* $82E8: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x18; g_cpu.C=(g_cpu.X>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_82EA:;
    /* $82EA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_82EC:;
    /* $82EC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82ED:;
    /* $82ED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82ED); return;
}

void func_82E3_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82E3_b10");
#endif
label_82E3:;
    /* $82E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x08E0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82E6:;
    /* $82E6: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_82E8:;
    /* $82E8: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x18; g_cpu.C=(g_cpu.X>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_82EA:;
    /* $82EA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_82EC:;
    /* $82EC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82ED:;
    /* $82ED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82ED); return;
}

void func_82F0_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F0_b10");
#endif
label_82F0:;
    /* $82F0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82F1:;
    /* $82F1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x02DB), 10); return; }
label_82F3:;
    /* $82F3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82F4:;
    /* $82F4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82F5:;
    /* $82F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8F0(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F8:;
    /* $82F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FA; }
label_82FA:;
    /* $82FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8304; }
label_82FC:;
    /* $82FC: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FD:;
    /* $82FD: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FE:;
    /* $82FE: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FF:;
    /* $82FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82FF); return;
label_8300:;
    /* $8300: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8300); return;
label_8301:;
    /* $8301: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8302:;
    /* $8302: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8302); return;
label_8303:;
    /* $8303: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8303); return;
label_8304:;
    /* $8304: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8305:;
    /* $8305: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8306:;
    /* $8306: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8307:;
    /* $8307: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8311; }
label_8309:;
    /* $8309: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_830A:;
    /* $830A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830B:;
    /* $830B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x830B); return;
label_830C:;
    /* $830C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830D:;
    /* $830D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830E:;
    /* $830E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830F:;
    /* $830F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02E1), 10); return; }
label_8311:;
    /* $8311: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02E3), 10); return; }
label_8313:;
    /* $8313: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8314:;
    /* $8314: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F6), 10); return; }
label_8316:;
    /* $8316: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82F0;
    }
label_8318:;
    /* $8318: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8319:;
    /* $8319: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82F3;
    }
label_831B:;
    /* $831B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_831C:;
    /* $831C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_831D:;
    /* $831D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_831F:;
    /* $831F: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8320:;
    /* $8320: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_8322:;
    /* $8322: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8324:;
    /* $8324: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8326:;
    /* $8326: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_8328:;
    /* $8328: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8329:;
    /* $8329: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_832A:;
    /* $832A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832B:;
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0315), 10); return; }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8334; }
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8328;
    }
label_8338:;
    /* $8338: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8339:;
    /* $8339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8339); return;
}

void func_832D_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_832D_b10");
#endif
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8334; }
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0328), 10); return; }
label_8338:;
    /* $8338: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8339:;
    /* $8339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8339); return;
}

void func_833D_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_833D_b10");
#endif
label_833D:;
    /* $833D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x833D); return;
}

void func_8588_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8588_b10");
#endif
label_8588:;
    /* $8588: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0582), 10); return; }
label_858A:;
    /* $858A: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF0FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_858D:;
    /* $858D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x858D); return;
}

void func_82DB_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82DB_b10");
#endif
label_82DB:;
    /* $82DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02DD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x08D8, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82DE:;
    /* $82DE: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82DF:;
    /* $82DF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x02B9), 10); return; }
label_82E1:;
    /* $82E1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82E2:;
    /* $82E2: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82E3:;
    /* $82E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x08E0, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82E6:;
    /* $82E6: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_82E8:;
    /* $82E8: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x18; g_cpu.C=(g_cpu.X>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_82EA:;
    /* $82EA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_82EC:;
    /* $82EC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82ED:;
    /* $82ED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82ED); return;
}

void func_8328_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8328_b10");
#endif
label_8328:;
    /* $8328: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8329:;
    /* $8329: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_832A:;
    /* $832A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832B:;
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0315), 10); return; }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8334; }
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8328;
    }
label_8338:;
    /* $8338: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8339:;
    /* $8339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8339); return;
}

void func_8582_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8582_b10");
#endif
label_8582:;
    /* $8582: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8583:;
    /* $8583: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8583); return;
}

void func_8315_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8315_b10");
#endif
label_8315:;
    /* $8315: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD0; g_cpu.C=(g_cpu.X>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_8317:;
    /* $8317: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8318:;
    /* $8318: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8319:;
    /* $8319: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F3), 10); return; }
label_831B:;
    /* $831B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_831C:;
    /* $831C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_831D:;
    /* $831D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_831F:;
    /* $831F: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8320:;
    /* $8320: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_8322:;
    /* $8322: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8324:;
    /* $8324: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8326:;
    /* $8326: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_8328:;
    /* $8328: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8329:;
    /* $8329: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_832A:;
    /* $832A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832B:;
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8315;
    }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8334; }
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8328;
    }
label_8338:;
    /* $8338: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8339:;
    /* $8339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8339); return;
}

void func_82F3_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82F3_b10");
#endif
label_82F3:;
    /* $82F3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82F4:;
    /* $82F4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_82F5:;
    /* $82F5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02F7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F8F0(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82F5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82F8:;
    /* $82F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_82FA; }
label_82FA:;
    /* $82FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8304; }
label_82FC:;
    /* $82FC: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FD:;
    /* $82FD: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FE:;
    /* $82FE: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_82FF:;
    /* $82FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82FF); return;
label_8300:;
    /* $8300: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8300); return;
label_8301:;
    /* $8301: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8302:;
    /* $8302: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8302); return;
label_8303:;
    /* $8303: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8303); return;
label_8304:;
    /* $8304: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8305:;
    /* $8305: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8306:;
    /* $8306: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8307:;
    /* $8307: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8311; }
label_8309:;
    /* $8309: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_830A:;
    /* $830A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830B:;
    /* $830B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x830B); return;
label_830C:;
    /* $830C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830D:;
    /* $830D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830E:;
    /* $830E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830F:;
    /* $830F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02E1), 10); return; }
label_8311:;
    /* $8311: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02E3), 10); return; }
label_8313:;
    /* $8313: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8314:;
    /* $8314: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F6), 10); return; }
label_8316:;
    /* $8316: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x02F0), 10); return; }
label_8318:;
    /* $8318: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8319:;
    /* $8319: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82F3;
    }
label_831B:;
    /* $831B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_831C:;
    /* $831C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_831D:;
    /* $831D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_831F:;
    /* $831F: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8320:;
    /* $8320: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF0; g_cpu.C=(g_cpu.X>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_8322:;
    /* $8322: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8324:;
    /* $8324: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8326:;
    /* $8326: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xD8; g_cpu.C=(g_cpu.X>=0xD8)?1:0; FLAG_NZ(r&0xFF); }
label_8328:;
    /* $8328: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8329:;
    /* $8329: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_832A:;
    /* $832A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832B:;
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0315), 10); return; }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8334; }
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8328;
    }
label_8338:;
    /* $8338: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8339:;
    /* $8339: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8339); return;
}

void func_9785_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b10");
#endif
label_9785:;
    /* $9785: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9787:;
    /* $9787: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9789:;
    /* $9789: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xEE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_978B:;
    /* $978B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_978D:;
    /* $978D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF5FF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9790:;
    /* $9790: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9793:;
    /* $9793: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9796:;
    /* $9796: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9799:;
    /* $9799: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_979B:;
    /* $979B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x35EF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_979E:;
    /* $979E: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97A1:;
    /* $97A1: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97A3:;
    /* $97A3: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x47BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97A6:;
    /* $97A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97A9:;
    /* $97A9: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97AB:;
    /* $97AB: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97AD:;
    /* $97AD: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97AF:;
    /* $97AF: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_97B1:;
    /* $97B1: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7F + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97B3:;
    /* $97B3: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x75BF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_97B6:;
    /* $97B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF17 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97B9:;
    /* $97B9: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD7D7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97BC:;
    /* $97BC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97BE:;
    /* $97BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97C1:;
    /* $97C1: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97C3:;
    /* $97C3: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97C5:;
    /* $97C5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x51FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97C8:;
    /* $97C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97CB:;
    /* $97CB: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_97CD:;
    /* $97CD: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x37BB + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97D0:;
    /* $97D0: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEE15 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97D3:;
    /* $97D3: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97D5:;
    /* $97D5: FC */ maybe_trigger_vblank(4); (void)nes_read((0x57FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_97D8:;
    /* $97D8: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xDFD4); FLAG_NZ(g_cpu.A);
label_97DB:;
    /* $97DB: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_97DD:;
    /* $97DD: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97DF:;
    /* $97DF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97E1:;
    /* $97E1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97E4:;
    /* $97E4: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFFF1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97E7:;
    /* $97E7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97E9:;
    /* $97E9: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x5FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97EC:;
    /* $97EC: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFF56 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_97EF:;
    /* $97EF: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97F1:;
    /* $97F1: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_97F3:;
    /* $97F3: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_97F5:;
    /* $97F5: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97F7:;
    /* $97F7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_97F9:;
    /* $97F9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x27DF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97FC:;
    /* $97FC: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xFFD5); FLAG_NZ(g_cpu.A);
label_97FF:;
    /* $97FF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0000 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9802:;
    /* $9802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9802); return;
}

void func_99F0_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F0_b10");
#endif
label_99F0:;
    /* $99F0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x99F0); return;
}

void func_B9F0_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F0_b10");
#endif
label_B9F0:;
    /* $B9F0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9F2:;
    /* $B9F2: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xEA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9F4:;
    /* $B9F4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9F5:;
    /* $B9F5: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F7:;
    /* $B9F7: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F9:;
    /* $B9F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FB:;
    /* $B9FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FD:;
    /* $B9FD: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA00:;
    /* $BA00: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA01:;
    /* $BA01: 8F */ maybe_trigger_vblank(4); nes_write(0xE75E, g_cpu.A & g_cpu.X); /* SAX */
label_BA04:;
    /* $BA04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA05:;
    /* $BA05: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA07:;
    /* $BA07: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA08:;
    /* $BA08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA09:;
    /* $BA09: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA0B:;
    /* $BA0B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA0D:;
    /* $BA0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA0E:;
    /* $BA0E: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA0F:;
    /* $BA0F: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA10:;
    /* $BA10: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA11:;
    /* $BA11: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA13:;
    /* $BA13: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA15:;
    /* $BA15: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA16:;
    /* $BA16: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA17:;
    /* $BA17: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BA18:;
    /* $BA18: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1A:;
    /* $BA1A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xE6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1C:;
    /* $BA1C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA1D:;
    /* $BA1D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA1F:;
    /* $BA1F: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA22:;
    /* $BA22: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA23:;
    /* $BA23: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x94 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA25:;
    /* $BA25: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA27:;
    /* $BA27: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA29:;
    /* $BA29: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA2B:;
    /* $BA2B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA2D:;
    /* $BA2D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xDA93); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA30:;
    /* $BA30: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA31:;
    /* $BA31: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA34:;
    /* $BA34: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA35:;
    /* $BA35: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDD02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA38:;
    /* $BA38: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA39:;
    /* $BA39: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA3C:;
    /* $BA3C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA3D:;
    /* $BA3D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BA3F:;
    /* $BA3F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA41:;
    /* $BA41: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BA43:;
    /* $BA43: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA45:;
    /* $BA45: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA47:;
    /* $BA47: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA49:;
    /* $BA49: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x95 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4B:;
    /* $BA4B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BA4C:;
    /* $BA4C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4E:;
    /* $BA4E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA50:;
    /* $BA50: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA52:;
    /* $BA52: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA54:;
    /* $BA54: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03DF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA57:;
    /* $BA57: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BA59:;
    /* $BA59: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE083 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA5C:;
    /* $BA5C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BA5E:;
    /* $BA5E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02F8); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA61:;
    /* $BA61: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA62:;
    /* $BA62: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA63:;
    /* $BA63: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA64:;
    /* $BA64: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA66:;
    /* $BA66: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA68:;
    /* $BA68: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA6B:;
    /* $BA6B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEC2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA6E:;
    /* $BA6E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA6F:;
    /* $BA6F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA72:;
    /* $BA72: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA75:;
    /* $BA75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF42 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA78:;
    /* $BA78: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA7A:;
    /* $BA7A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA7C:;
    /* $BA7C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x82FE); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA7F:;
    /* $BA7F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD42 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA82:;
    /* $BA82: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA84:;
    /* $BA84: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA85:;
    /* $BA85: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA87:;
    /* $BA87: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEE03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA8A:;
    /* $BA8A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8C:;
    /* $BA8C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8E:;
    /* $BA8E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA90:;
    /* $BA90: 8E */ maybe_trigger_vblank(4); nes_write(0x00C7, g_cpu.X);
label_BA93:;
    /* $BA93: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA94:;
    /* $BA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA94); return;
}

void func_99AD_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99AD_b10");
#endif
label_99AD:;
    /* $99AD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x99AD); return;
}

void func_B9AD_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9AD_b10");
#endif
label_B9AD:;
    /* $B9AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9AF:;
    /* $B9AF: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B1:;
    /* $B9B1: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B3:;
    /* $B9B3: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B5:;
    /* $B9B5: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9B7:;
    /* $B9B7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9B9:;
    /* $B9B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BB:;
    /* $B9BB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BD:;
    /* $B9BD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x83 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BF:;
    /* $B9BF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9C1:;
    /* $B9C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C3:;
    /* $B9C3: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9C4:;
    /* $B9C4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C6:;
    /* $B9C6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C8:;
    /* $B9C8: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xF9 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CA:;
    /* $B9CA: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9CC:;
    /* $B9CC: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03FA); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9CF:;
    /* $B9CF: FA */ maybe_trigger_vblank(2); /* NOP */
label_B9D0:;
    /* $B9D0: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D2:;
    /* $B9D2: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xFA + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B9D4:;
    /* $B9D4: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9D6:;
    /* $B9D6: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x43F9); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B9D9:;
    /* $B9D9: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B9DA:;
    /* $B9DA: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9DC:;
    /* $B9DC: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9DE:;
    /* $B9DE: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8F + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9E0:;
    /* $B9E0: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x02E7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9E3:;
    /* $B9E3: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9E5:; /* main_spark_falling_platform */
    /* $B9E5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9E6:;
    /* $B9E6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9E7:;
    /* $B9E7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9E9:;
    /* $B9E9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9EB:;
    /* $B9EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9EC:;
    /* $B9EC: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9ED:;
    /* $B9ED: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9EE:;
    /* $B9EE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9EF:;
    /* $B9EF: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F1:;
    /* $B9F1: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F3:;
    /* $B9F3: EA */ maybe_trigger_vblank(2); /* NOP */
label_B9F4:;
    /* $B9F4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B9F5:;
    /* $B9F5: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F7:;
    /* $B9F7: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x41) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F9:;
    /* $B9F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FB:;
    /* $B9FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FD:;
    /* $B9FD: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA00:;
    /* $BA00: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA01:;
    /* $BA01: 8F */ maybe_trigger_vblank(4); nes_write(0xE75E, g_cpu.A & g_cpu.X); /* SAX */
label_BA04:;
    /* $BA04: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA05:;
    /* $BA05: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA07:;
    /* $BA07: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA08:;
    /* $BA08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA09:;
    /* $BA09: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA0B:;
    /* $BA0B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA0D:;
    /* $BA0D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_BA0E:;
    /* $BA0E: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA0F:;
    /* $BA0F: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA10:;
    /* $BA10: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA11:;
    /* $BA11: EB */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA13:;
    /* $BA13: EB */ maybe_trigger_vblank(2); { uint8_t m=0x41; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA15:;
    /* $BA15: EA */ maybe_trigger_vblank(2); /* NOP */
label_BA16:;
    /* $BA16: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA17:;
    /* $BA17: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BA18:;
    /* $BA18: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1A:;
    /* $BA1A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xE6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1C:;
    /* $BA1C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA1D:;
    /* $BA1D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA1F:;
    /* $BA1F: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA22:;
    /* $BA22: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA23:;
    /* $BA23: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x94 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA25:;
    /* $BA25: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA27:;
    /* $BA27: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA29:;
    /* $BA29: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA2B:;
    /* $BA2B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA2D:;
    /* $BA2D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xDA93); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA30:;
    /* $BA30: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA31:;
    /* $BA31: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA34:;
    /* $BA34: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA35:;
    /* $BA35: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDD02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA38:;
    /* $BA38: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA39:;
    /* $BA39: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA3C:;
    /* $BA3C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA3D:;
    /* $BA3D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_BA3F:;
    /* $BA3F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA41:;
    /* $BA41: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BA43:;
    /* $BA43: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA45:;
    /* $BA45: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA47:;
    /* $BA47: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA49:;
    /* $BA49: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x95 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4B:;
    /* $BA4B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BA4C:;
    /* $BA4C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA4E:;
    /* $BA4E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA50:;
    /* $BA50: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA52:;
    /* $BA52: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA54:;
    /* $BA54: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03DF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA57:;
    /* $BA57: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_BA59:;
    /* $BA59: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE083 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA5C:;
    /* $BA5C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BA5E:;
    /* $BA5E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02F8); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA61:;
    /* $BA61: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA62:;
    /* $BA62: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA63:;
    /* $BA63: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BA64:;
    /* $BA64: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA66:;
    /* $BA66: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA68:;
    /* $BA68: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FD); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA6B:;
    /* $BA6B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEC2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA6E:;
    /* $BA6E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA6F:;
    /* $BA6F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03C2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA72:;
    /* $BA72: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA75:;
    /* $BA75: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF42 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA78:;
    /* $BA78: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA7A:;
    /* $BA7A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA7C:;
    /* $BA7C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x82FE); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BA7F:;
    /* $BA7F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD42 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA82:;
    /* $BA82: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BA84:;
    /* $BA84: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA85:;
    /* $BA85: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA87:;
    /* $BA87: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEE03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA8A:;
    /* $BA8A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8C:;
    /* $BA8C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA8E:;
    /* $BA8E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA90:;
    /* $BA90: 8E */ maybe_trigger_vblank(4); nes_write(0x00C7, g_cpu.X);
label_BA93:;
    /* $BA93: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA94:;
    /* $BA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA94); return;
}

void func_98A9_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A9_b10");
#endif
label_98A9:;
    /* $98A9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98AB:;
    /* $98AB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x98AB); return;
}

void func_A504_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A504_b10");
#endif
label_A504:;
    /* $A504: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A506:;
    /* $A506: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A508:;
    /* $A508: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA508); return;
}

void func_88E8_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E8_b10");
#endif
label_88E8:;
    /* $88E8: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88EA:;
    /* $88EA: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF8) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88EC:;
    /* $88EC: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF0) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88EE:;
    /* $88EE: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFB08 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88F1:;
    /* $88F1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x88F1); return;
}

void func_A904_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b10");
#endif
label_A904:;
    /* $A904: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03EF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A907:;
    /* $A907: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A90C; }
label_A909:;
    /* $A909: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A90B:;
    /* $A90B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_A90C:;
    /* $A90C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A90E:;
    /* $A90E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03F3); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A911:;
    /* $A911: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A913:;
    /* $A913: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A915:;
    /* $A915: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A917:;
    /* $A917: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A919:;
    /* $A919: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A91B:;
    /* $A91B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x43 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A91D:;
    /* $A91D: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xB4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A91F:;
    /* $A91F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A921:;
    /* $A921: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A922:;
    /* $A922: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A924:;
    /* $A924: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A926:;
    /* $A926: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A928:;
    /* $A928: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A92A:;
    /* $A92A: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A92C:;
    /* $A92C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A92E:;
    /* $A92E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A930:;
    /* $A930: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A932:;
    /* $A932: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A934:;
    /* $A934: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A936:;
    /* $A936: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A938:;
    /* $A938: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A93A:;
    /* $A93A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A93C:;
    /* $A93C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A93E:;
    /* $A93E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A940:;
    /* $A940: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A942:;
    /* $A942: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A944:;
    /* $A944: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x03EA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A947:;
    /* $A947: EB */ maybe_trigger_vblank(2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A949:;
    /* $A949: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xED03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A94C:;
    /* $A94C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A94E:;
    /* $A94E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A950:;
    /* $A950: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A952:;
    /* $A952: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A954:;
    /* $A954: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A956:;
    /* $A956: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A958:;
    /* $A958: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A95A:;
    /* $A95A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A95C:;
    /* $A95C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A95E:;
    /* $A95E: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03D5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A961:;
    /* $A961: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A963:;
    /* $A963: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A965:;
    /* $A965: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A966:;
    /* $A966: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A968:;
    /* $A968: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A96A:;
    /* $A96A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A96C:;
    /* $A96C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A96E:;
    /* $A96E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A970:;
    /* $A970: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A972:;
    /* $A972: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A974:;
    /* $A974: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x03DE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A977:;
    /* $A977: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE003 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A97A:;
    /* $A97A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A97C:;
    /* $A97C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A97E:;
    /* $A97E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A980:;
    /* $A980: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A982:;
    /* $A982: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A984:;
    /* $A984: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A986:;
    /* $A986: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A988:;
    /* $A988: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A98A:;
    /* $A98A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98A); return;
}

void func_A2C7_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2C7_b10");
#endif
label_A2C7:;
    /* $A2C7: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2C9:;
    /* $A2C9: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2CB:;
    /* $A2CB: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2CD:;
    /* $A2CD: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2CE:;
    /* $A2CE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2CF:;
    /* $A2CF: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D0:;
    /* $A2D0: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D1:;
    /* $A2D1: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D2:;
    /* $A2D2: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D3:;
    /* $A2D3: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D4:;
    /* $A2D4: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D5:;
    /* $A2D5: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D6:;
    /* $A2D6: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D7:;
    /* $A2D7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D8:;
    /* $A2D8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2D9:;
    /* $A2D9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2DA:;
    /* $A2DA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2DB:;
    /* $A2DB: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2DC:;
    /* $A2DC: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2DD:;
    /* $A2DD: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2DE:;
    /* $A2DE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2DF:;
    /* $A2DF: 99 */ maybe_trigger_vblank(5); nes_write((0x9999 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2E2:;
    /* $A2E2: 99 */ maybe_trigger_vblank(5); nes_write((0x9999 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2E5:;
    /* $A2E5: 99 */ maybe_trigger_vblank(5); nes_write((0x9999 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2E8:;
    /* $A2E8: 99 */ maybe_trigger_vblank(5); nes_write((0x9999 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2EB:;
    /* $A2EB: 99 */ maybe_trigger_vblank(5); nes_write((0x9999 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2EE:;
    /* $A2EE: 99 */ maybe_trigger_vblank(5); nes_write((0x9A9A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A2F1:;
    /* $A2F1: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F2:;
    /* $A2F2: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F3:;
    /* $A2F3: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F4:;
    /* $A2F4: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F5:;
    /* $A2F5: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F6:;
    /* $A2F6: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F7:;
    /* $A2F7: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F8:;
    /* $A2F8: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2F9:;
    /* $A2F9: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2FA:;
    /* $A2FA: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2FB:;
    /* $A2FB: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2FC:;
    /* $A2FC: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2FD:;
    /* $A2FD: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2FE:;
    /* $A2FE: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A2FF:;
    /* $A2FF: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A302:;
    /* $A302: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A304:;
    /* $A304: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A306:;
    /* $A306: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A308:;
    /* $A308: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A30A:;
    /* $A30A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA30A); return;
}
