/* mega-man-3_full_bank04_part05.c — PRG bank 4 function bodies (sub-part 5).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_BB3A_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB3A_b4");
#endif
label_BB3A:;
    /* $BB3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB3A); return;
}

void func_81BD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81BD_b4");
#endif
label_81BD:;
    /* $81BD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81C0:;
    /* $81C0: EE */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C3:;
    /* $81C3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81C6:;
    /* $81C6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C9:;
    /* $81C9: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFEB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81CC:;
    /* $81CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81CF:;
    /* $81CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81D2:;
    /* $81D2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81D5:;
    /* $81D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81D8:;
    /* $81D8: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xBADF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_81DB:;
    /* $81DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81DE:;
    /* $81DE: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81E1:;
    /* $81E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFBA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81E4:;
    /* $81E4: 7A */ maybe_trigger_vblank(2); /* NOP */
label_81E5:;
    /* $81E5: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xF2 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81E7:;
    /* $81E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81EA:;
    /* $81EA: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFBFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_81ED:;
    /* $81ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81F0:;
    /* $81F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81F3:;
    /* $81F3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFAB + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81F6:;
    /* $81F6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81F9:;
    /* $81F9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBA + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81FC:;
    /* $81FC: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xABFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81FF:;
    /* $81FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8202:;
    /* $8202: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8205:;
    /* $8205: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8208:;
    /* $8208: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_820B:;
    /* $820B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_820E:;
    /* $820E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8211:;
    /* $8211: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8214:;
    /* $8214: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8217:;
    /* $8217: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_821A:;
    /* $821A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_821D:;
    /* $821D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8220:;
    /* $8220: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xFFF7); FLAG_NZ(g_cpu.A);
label_8223:;
    /* $8223: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8226:;
    /* $8226: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBF7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8229:;
    /* $8229: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_822C:;
    /* $822C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_822F:;
    /* $822F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8232:;
    /* $8232: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8235:;
    /* $8235: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8238:;
    /* $8238: EE */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_823B:;
    /* $823B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_823E:;
    /* $823E: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8241:;
    /* $8241: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8244:;
    /* $8244: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8247:;
    /* $8247: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_824A:;
    /* $824A: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_824C:;
    /* $824C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_824F:;
    /* $824F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8252:;
    /* $8252: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8255:;
    /* $8255: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8258:;
    /* $8258: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_825B:;
    /* $825B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_825E:;
    /* $825E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8261:;
    /* $8261: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFAF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8264:;
    /* $8264: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8267:;
    /* $8267: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xEF + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8269:;
    /* $8269: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_826C:;
    /* $826C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_826F:;
    /* $826F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8272:;
    /* $8272: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8275:;
    /* $8275: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8278:;
    /* $8278: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_827B:;
    /* $827B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_827E:;
    /* $827E: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8281:;
    /* $8281: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8284:;
    /* $8284: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8287:;
    /* $8287: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_828A:;
    /* $828A: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_828C:;
    /* $828C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_828F:;
    /* $828F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFB7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8292:;
    /* $8292: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8294:;
    /* $8294: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8297:;
    /* $8297: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_829A:;
    /* $829A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_829D:;
    /* $829D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82A0:;
    /* $82A0: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xEFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82A3:;
    /* $82A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82A6:;
    /* $82A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82A9:;
    /* $82A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82AC:;
    /* $82AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82AF:;
    /* $82AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82B2:;
    /* $82B2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xAFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82B5:;
    /* $82B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82B8:;
    /* $82B8: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82BB:;
    /* $82BB: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_82BE:;
    /* $82BE: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_82BF:;
    /* $82BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82C2:;
    /* $82C2: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xEFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82C5:;
    /* $82C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82C8:;
    /* $82C8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82CB:;
    /* $82CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82CE:;
    /* $82CE: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D1:;
    /* $82D1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D4:;
    /* $82D4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D7:;
    /* $82D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82DA:;
    /* $82DA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFEFF); FLAG_NZ(g_cpu.X);
label_82DD:;
    /* $82DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82E0:;
    /* $82E0: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFAFF); FLAG_NZ(g_cpu.X);
label_82E3:;
    /* $82E3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_82E6:;
    /* $82E6: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xE6FB + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82E9:;
    /* $82E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF3A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82EC:;
    /* $82EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82EF:;
    /* $82EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82F2:;
    /* $82F2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82F5:;
    /* $82F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82F8:;
    /* $82F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82FB:;
    /* $82FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82FE:;
    /* $82FE: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_82FF:;
    /* $82FF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8301:;
    /* $8301: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8304:;
    /* $8304: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8307:;
    /* $8307: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_830A:;
    /* $830A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xAFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_830D:;
    /* $830D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8310:;
    /* $8310: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8313:;
    /* $8313: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8316:;
    /* $8316: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8319:;
    /* $8319: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_831C:;
    /* $831C: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_831F:;
    /* $831F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8322:;
    /* $8322: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFF; FLAG_NZ(g_cpu.A);
label_8324:;
    /* $8324: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFAEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8327:;
    /* $8327: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8329:;
    /* $8329: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_832C:;
    /* $832C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_832F:;
    /* $832F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFBB + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8332:;
    /* $8332: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBBFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8335:;
    /* $8335: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8338:;
    /* $8338: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_833B:;
    /* $833B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_833E:;
    /* $833E: FA */ maybe_trigger_vblank(2); /* NOP */
label_833F:;
    /* $833F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8342:;
    /* $8342: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8345:;
    /* $8345: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8348:;
    /* $8348: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_834B:;
    /* $834B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_834E:;
    /* $834E: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8351:;
    /* $8351: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8354:;
    /* $8354: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8357:;
    /* $8357: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_835A:;
    /* $835A: EF */ maybe_trigger_vblank(6); { uint16_t a=0x7FFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_835D:;
    /* $835D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8360:;
    /* $8360: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFB7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8363:;
    /* $8363: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8366:;
    /* $8366: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8369:;
    /* $8369: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_836C:;
    /* $836C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_836F:;
    /* $836F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8372:;
    /* $8372: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8375:;
    /* $8375: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8378:;
    /* $8378: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFF; FLAG_NZ(g_cpu.A);
label_837A:;
    /* $837A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_837D:;
    /* $837D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8380:;
    /* $8380: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8383:;
    /* $8383: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8386:;
    /* $8386: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8389:;
    /* $8389: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_838C:;
    /* $838C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_838F:;
    /* $838F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8392:;
    /* $8392: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8395:;
    /* $8395: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8398:;
    /* $8398: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_839B:;
    /* $839B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_839E:;
    /* $839E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A0:;
    /* $83A0: FA */ maybe_trigger_vblank(2); /* NOP */
label_83A1:;
    /* $83A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A4:;
    /* $83A4: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEFEF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83A7:;
    /* $83A7: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A9:;
    /* $83A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83AC:;
    /* $83AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83AF:; /* weapon_damage_ptr_lo */
    /* $83AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B2:;
    /* $83B2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x7FFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83B5:;
    /* $83B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B8:;
    /* $83B8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83BB:; /* weapon_damage_ptr_hi */
    /* $83BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83BE:;
    /* $83BE: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xAEFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83C4:;
    /* $83C4: FA */ maybe_trigger_vblank(2); /* NOP */
label_83C5:;
    /* $83C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83C8:;
    /* $83C8: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83CB:;
    /* $83CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83CE:;
    /* $83CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D1:;
    /* $83D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D4:;
    /* $83D4: EA */ maybe_trigger_vblank(2); /* NOP */
label_83D5:;
    /* $83D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D8:;
    /* $83D8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83DB:;
    /* $83DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83DE:;
    /* $83DE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83E1:;
    /* $83E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83E4:;
    /* $83E4: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xBEFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83E7:;
    /* $83E7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83EA:;
    /* $83EA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83ED:;
    /* $83ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F0:;
    /* $83F0: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F2:;
    /* $83F2: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F5:;
    /* $83F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F8:;
    /* $83F8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83FB:;
    /* $83FB: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83FE:;
    /* $83FE: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x577F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8401:;
    /* $8401: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8404:;
    /* $8404: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8407:;
    /* $8407: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8409:;
    /* $8409: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_840C:;
    /* $840C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_840F:;
    /* $840F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8412:;
    /* $8412: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8415:;
    /* $8415: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8417:;
    /* $8417: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8419:;
    /* $8419: CF */ maybe_trigger_vblank(6); { uint16_t a=0x55FF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_841C:;
    /* $841C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFCD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_841F:;
    /* $841F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8421:;
    /* $8421: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5FFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8424:;
    /* $8424: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8427:;
    /* $8427: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_842A:;
    /* $842A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6FF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_842D:;
    /* $842D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8430:;
    /* $8430: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8433:;
    /* $8433: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8435:;
    /* $8435: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8438:;
    /* $8438: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_843B:;
    /* $843B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_843E:;
    /* $843E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8441:;
    /* $8441: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xB7DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8444:;
    /* $8444: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8447:;
    /* $8447: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8449:;
    /* $8449: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844C:;
    /* $844C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844F:;
    /* $844F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xEFEF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8452:;
    /* $8452: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8455:;
    /* $8455: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8457:;
    /* $8457: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_845A:;
    /* $845A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_845D:;
    /* $845D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_845F:;
    /* $845F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8462:;
    /* $8462: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8465:;
    /* $8465: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8468:;
    /* $8468: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_846B:;
    /* $846B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_846D:;
    /* $846D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8470:;
    /* $8470: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8473:;
    /* $8473: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8475:;
    /* $8475: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8478:;
    /* $8478: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_847B:;
    /* $847B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_847E:;
    /* $847E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8481:;
    /* $8481: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8484:;
    /* $8484: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8487:;
    /* $8487: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_848A:;
    /* $848A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_848D:;
    /* $848D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8490:;
    /* $8490: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8493:;
    /* $8493: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8496:;
    /* $8496: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8499:;
    /* $8499: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_849C:;
    /* $849C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_849F:;
    /* $849F: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A1:;
    /* $84A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A4:;
    /* $84A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A7:;
    /* $84A7: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84A9:;
    /* $84A9: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84AC:;
    /* $84AC: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84AF:;
    /* $84AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7DF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B2:;
    /* $84B2: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B5:;
    /* $84B5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xCFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B8:;
    /* $84B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84BB:;
    /* $84BB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84BE:;
    /* $84BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84C1:;
    /* $84C1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84C3:;
    /* $84C3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84C6:;
    /* $84C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84C9:;
    /* $84C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84CC:;
    /* $84CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84CF:;
    /* $84CF: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFC + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84D1:;
    /* $84D1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84D4:;
    /* $84D4: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84D6:;
    /* $84D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFED5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84D9:;
    /* $84D9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_84DC:;
    /* $84DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84DF:;
    /* $84DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E2:;
    /* $84E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E5:;
    /* $84E5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E8:;
    /* $84E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84EB:;
    /* $84EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84EE:;
    /* $84EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F1:;
    /* $84F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F4:;
    /* $84F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F7:;
    /* $84F7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84FA:;
    /* $84FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84FD:;
    /* $84FD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8500:;
    /* $8500: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF7D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8503:;
    /* $8503: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8506:;
    /* $8506: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8509:;
    /* $8509: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850C:;
    /* $850C: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850E:;
    /* $850E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8511:;
    /* $8511: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8513:;
    /* $8513: 9D */ maybe_trigger_vblank(5); nes_write((0x55BF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8516:;
    /* $8516: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8519:;
    /* $8519: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_851B:;
    /* $851B: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_851D:;
    /* $851D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_851F:;
    /* $851F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8522:;
    /* $8522: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8525:;
    /* $8525: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8528:;
    /* $8528: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_852B:;
    /* $852B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_852E:;
    /* $852E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8531:;
    /* $8531: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8534:;
    /* $8534: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8537:;
    /* $8537: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_853A:;
    /* $853A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8540:;
    /* $8540: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8543:;
    /* $8543: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFDFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8546:;
    /* $8546: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8549:;
    /* $8549: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_854D:;
    /* $854D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854F:;
    /* $854F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8552:;
    /* $8552: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF3D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8555:;
    /* $8555: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7F7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8558:;
    /* $8558: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855B:;
    /* $855B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF77F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855E:;
    /* $855E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8561:;
    /* $8561: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8564:;
    /* $8564: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8566:;
    /* $8566: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8569:;
    /* $8569: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_856C:;
    /* $856C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_856F:;
    /* $856F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8572:;
    /* $8572: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8575:;
    /* $8575: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8578:;
    /* $8578: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_857B:;
    /* $857B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_857E:;
    /* $857E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8581:;
    /* $8581: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8584:;
    /* $8584: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8587:;
    /* $8587: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8589:;
    /* $8589: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDBF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_858C:;
    /* $858C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_858F:;
    /* $858F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8592:;
    /* $8592: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8595:;
    /* $8595: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8597:;
    /* $8597: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859A:;
    /* $859A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7EF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859D:;
    /* $859D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_859F:;
    /* $859F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_85A2:;
    /* $85A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A5:;
    /* $85A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A8:;
    /* $85A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AB:;
    /* $85AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AD:;
    /* $85AD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B0:;
    /* $85B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B3:;
    /* $85B3: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85B5:;
    /* $85B5: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B7:;
    /* $85B7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85BA:;
    /* $85BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85BD:;
    /* $85BD: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C0:;
    /* $85C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85C3:;
    /* $85C3: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85C5:;
    /* $85C5: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:; /* main_ret_A */
    /* $85C7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C9:; /* main_unknown_1B */
    /* $85C9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CB:;
    /* $85CB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CE:;
    /* $85CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D1:;
    /* $85D1: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85D4:;
    /* $85D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D7:;
    /* $85D7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DA:;
    /* $85DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DD:;
    /* $85DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E0:;
    /* $85E0: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85E6:;
    /* $85E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E9:;
    /* $85E9: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85EC:;
    /* $85EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85EF:;
    /* $85EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F2:;
    /* $85F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F5:;
    /* $85F5: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85F7:;
    /* $85F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FA:;
    /* $85FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FD:;
    /* $85FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8600:;
    /* $8600: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8603:;
    /* $8603: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8606:;
    /* $8606: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8609:;
    /* $8609: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_860C:;
    /* $860C: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_860F:;
    /* $860F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8611:;
    /* $8611: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8613:;
    /* $8613: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8615:;
    /* $8615: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8617:;
    /* $8617: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8619:;
    /* $8619: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_861B:;
    /* $861B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_861D:;
    /* $861D: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF9) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_861F:;
    /* $861F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD7FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8622:;
    /* $8622: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8625:;
    /* $8625: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8628:;
    /* $8628: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862B:;
    /* $862B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862E:;
    /* $862E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8631:;
    /* $8631: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8633:;
    /* $8633: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5F7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8636:;
    /* $8636: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8639:;
    /* $8639: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863C:;
    /* $863C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863F:;
    /* $863F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8642:;
    /* $8642: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8645:;
    /* $8645: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8647:;
    /* $8647: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8649:;
    /* $8649: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_864C:;
    /* $864C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_864F:;
    /* $864F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8652:;
    /* $8652: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8655:;
    /* $8655: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8657:;
    /* $8657: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865A:;
    /* $865A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865D:;
    /* $865D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865F:;
    /* $865F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8662:;
    /* $8662: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8665:;
    /* $8665: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8668:;
    /* $8668: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866B:;
    /* $866B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_866D:;
    /* $866D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866F:;
    /* $866F: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8672:;
    /* $8672: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8675:;
    /* $8675: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x777F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8678:;
    /* $8678: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867B:;
    /* $867B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867E:;
    /* $867E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8680:;
    /* $8680: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8683:;
    /* $8683: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8685:;
    /* $8685: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8688:;
    /* $8688: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868B:;
    /* $868B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_868D:;
    /* $868D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868F:;
    /* $868F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xCFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8692:;
    /* $8692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDF5B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8695:;
    /* $8695: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8698:;
    /* $8698: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_869B:;
    /* $869B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_869E:;
    /* $869E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A1:;
    /* $86A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A4:;
    /* $86A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A7:;
    /* $86A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AA:;
    /* $86AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AD:;
    /* $86AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B0:;
    /* $86B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B3:;
    /* $86B3: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B5:;
    /* $86B5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_86B8:;
    /* $86B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86BB:;
    /* $86BB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86BE:;
    /* $86BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C1:;
    /* $86C1: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C3:;
    /* $86C3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C6:;
    /* $86C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C9:;
    /* $86C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEEFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86CC:;
    /* $86CC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86CE:;
    /* $86CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D1:;
    /* $86D1: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86D4:;
    /* $86D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D7:;
    /* $86D7: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86DA:;
    /* $86DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86DD:;
    /* $86DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E0:;
    /* $86E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E3:;
    /* $86E3: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86E5:;
    /* $86E5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E8:;
    /* $86E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86EB:;
    /* $86EB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86EE:;
    /* $86EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F1:;
    /* $86F1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F4:;
    /* $86F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F7:;
    /* $86F7: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F9:;
    /* $86F9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FB:;
    /* $86FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FE:;
    /* $86FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8701:;
    /* $8701: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8703:;
    /* $8703: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x75DF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8706:;
    /* $8706: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8709:;
    /* $8709: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_870B:;
    /* $870B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_870E:;
    /* $870E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8711:;
    /* $8711: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8714:;
    /* $8714: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8717:;
    /* $8717: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_871A:;
    /* $871A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FD7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_871D:;
    /* $871D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0716), 4); return; }
label_871F:;
    /* $871F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8721:;
    /* $8721: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8724:;
    /* $8724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8727:;
    /* $8727: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x5FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_872A:;
    /* $872A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_872D:;
    /* $872D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8730:;
    /* $8730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8733:;
    /* $8733: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8736:;
    /* $8736: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8739:;
    /* $8739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873C:;
    /* $873C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873F:;
    /* $873F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8741:;
    /* $8741: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x37FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8744:;
    /* $8744: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8747:;
    /* $8747: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_874A:;
    /* $874A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFDF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_874D:;
    /* $874D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8750:;
    /* $8750: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8753:;
    /* $8753: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8755:;
    /* $8755: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8758:;
    /* $8758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875B:;
    /* $875B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875D:;
    /* $875D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_875F:;
    /* $875F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8762:;
    /* $8762: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8765:;
    /* $8765: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8767:;
    /* $8767: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8769:;
    /* $8769: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_876C:;
    /* $876C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_876F:;
    /* $876F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8771:;
    /* $8771: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8774:;
    /* $8774: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8777:;
    /* $8777: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_877A:;
    /* $877A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_877D:;
    /* $877D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8780:;
    /* $8780: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8783:;
    /* $8783: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8786:;
    /* $8786: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8789:;
    /* $8789: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_878B:;
    /* $878B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_878E:;
    /* $878E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8791:;
    /* $8791: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8794:;
    /* $8794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8797:;
    /* $8797: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8799:;
    /* $8799: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_879B:;
    /* $879B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_879D:;
    /* $879D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A0:;
    /* $87A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A3:;
    /* $87A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A6:;
    /* $87A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A9:;
    /* $87A9: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87AC:;
    /* $87AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87AF:;
    /* $87AF: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFDFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87B2:;
    /* $87B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87B5:;
    /* $87B5: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87B8:;
    /* $87B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BB:;
    /* $87BB: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BE:;
    /* $87BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C1:;
    /* $87C1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87C4:;
    /* $87C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C7:;
    /* $87C7: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF7FF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87CA:;
    /* $87CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87CD:;
    /* $87CD: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87CF:;
    /* $87CF: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87D2:;
    /* $87D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87D5:;
    /* $87D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87D8:;
    /* $87D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87DB:;
    /* $87DB: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87DD:; /* main_magnet_missile */
    /* $87DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E0:;
    /* $87E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF76F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E3:;
    /* $87E3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E6:;
    /* $87E6: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF5D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87E9:;
    /* $87E9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87EC:;
    /* $87EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87EF:;
    /* $87EF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F1:;
    /* $87F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F4:;
    /* $87F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F7:;
    /* $87F7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87FA:;
    /* $87FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87FD:;
    /* $87FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8800:;
    /* $8800: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8800); return;
}

void func_82BC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82BC_b4");
#endif
label_82BC:;
    /* $82BC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF2FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82BF:;
    /* $82BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82C2:;
    /* $82C2: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xEFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82C5:;
    /* $82C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82C8:;
    /* $82C8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82CB:;
    /* $82CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82CE:;
    /* $82CE: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D1:;
    /* $82D1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D4:;
    /* $82D4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D7:;
    /* $82D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82DA:;
    /* $82DA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFEFF); FLAG_NZ(g_cpu.X);
label_82DD:;
    /* $82DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82E0:;
    /* $82E0: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFAFF); FLAG_NZ(g_cpu.X);
label_82E3:;
    /* $82E3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_82E6:;
    /* $82E6: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xE6FB + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82E9:;
    /* $82E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF3A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82EC:;
    /* $82EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82EF:;
    /* $82EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82F2:;
    /* $82F2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82F5:;
    /* $82F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82F8:;
    /* $82F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82FB:;
    /* $82FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82FE:;
    /* $82FE: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_82FF:;
    /* $82FF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8301:;
    /* $8301: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8304:;
    /* $8304: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8307:;
    /* $8307: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_830A:;
    /* $830A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xAFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_830D:;
    /* $830D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8310:;
    /* $8310: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8313:;
    /* $8313: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8316:;
    /* $8316: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8319:;
    /* $8319: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_831C:;
    /* $831C: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_831F:;
    /* $831F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8322:;
    /* $8322: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFF; FLAG_NZ(g_cpu.A);
label_8324:;
    /* $8324: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFAEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8327:;
    /* $8327: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8329:;
    /* $8329: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_832C:;
    /* $832C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_832F:;
    /* $832F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFBB + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8332:;
    /* $8332: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBBFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8335:;
    /* $8335: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8338:;
    /* $8338: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_833B:;
    /* $833B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_833E:;
    /* $833E: FA */ maybe_trigger_vblank(2); /* NOP */
label_833F:;
    /* $833F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8342:;
    /* $8342: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8345:;
    /* $8345: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8348:;
    /* $8348: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_834B:;
    /* $834B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_834E:;
    /* $834E: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8351:;
    /* $8351: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8354:;
    /* $8354: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8357:;
    /* $8357: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_835A:;
    /* $835A: EF */ maybe_trigger_vblank(6); { uint16_t a=0x7FFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_835D:;
    /* $835D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8360:;
    /* $8360: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFB7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8363:;
    /* $8363: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8366:;
    /* $8366: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8369:;
    /* $8369: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_836C:;
    /* $836C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_836F:;
    /* $836F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8372:;
    /* $8372: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8375:;
    /* $8375: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8378:;
    /* $8378: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFF; FLAG_NZ(g_cpu.A);
label_837A:;
    /* $837A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_837D:;
    /* $837D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8380:;
    /* $8380: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8383:;
    /* $8383: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8386:;
    /* $8386: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8389:;
    /* $8389: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_838C:;
    /* $838C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_838F:;
    /* $838F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8392:;
    /* $8392: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8395:;
    /* $8395: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8398:;
    /* $8398: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_839B:;
    /* $839B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_839E:;
    /* $839E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A0:;
    /* $83A0: FA */ maybe_trigger_vblank(2); /* NOP */
label_83A1:;
    /* $83A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A4:;
    /* $83A4: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEFEF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83A7:;
    /* $83A7: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A9:;
    /* $83A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83AC:;
    /* $83AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83AF:; /* weapon_damage_ptr_lo */
    /* $83AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B2:;
    /* $83B2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x7FFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83B5:;
    /* $83B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B8:;
    /* $83B8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83BB:; /* weapon_damage_ptr_hi */
    /* $83BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83BE:;
    /* $83BE: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xAEFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83C4:;
    /* $83C4: FA */ maybe_trigger_vblank(2); /* NOP */
label_83C5:;
    /* $83C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83C8:;
    /* $83C8: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83CB:;
    /* $83CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83CE:;
    /* $83CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D1:;
    /* $83D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D4:;
    /* $83D4: EA */ maybe_trigger_vblank(2); /* NOP */
label_83D5:;
    /* $83D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D8:;
    /* $83D8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83DB:;
    /* $83DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83DE:;
    /* $83DE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83E1:;
    /* $83E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83E4:;
    /* $83E4: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xBEFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83E7:;
    /* $83E7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83EA:;
    /* $83EA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83ED:;
    /* $83ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F0:;
    /* $83F0: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F2:;
    /* $83F2: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F5:;
    /* $83F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F8:;
    /* $83F8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83FB:;
    /* $83FB: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83FE:;
    /* $83FE: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x577F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8401:;
    /* $8401: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8404:;
    /* $8404: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8407:;
    /* $8407: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8409:;
    /* $8409: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_840C:;
    /* $840C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_840F:;
    /* $840F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8412:;
    /* $8412: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8415:;
    /* $8415: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8417:;
    /* $8417: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8419:;
    /* $8419: CF */ maybe_trigger_vblank(6); { uint16_t a=0x55FF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_841C:;
    /* $841C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFCD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_841F:;
    /* $841F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8421:;
    /* $8421: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5FFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8424:;
    /* $8424: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8427:;
    /* $8427: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_842A:;
    /* $842A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6FF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_842D:;
    /* $842D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8430:;
    /* $8430: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8433:;
    /* $8433: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8435:;
    /* $8435: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8438:;
    /* $8438: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_843B:;
    /* $843B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_843E:;
    /* $843E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8441:;
    /* $8441: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xB7DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8444:;
    /* $8444: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8447:;
    /* $8447: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8449:;
    /* $8449: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844C:;
    /* $844C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844F:;
    /* $844F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xEFEF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8452:;
    /* $8452: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8455:;
    /* $8455: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8457:;
    /* $8457: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_845A:;
    /* $845A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_845D:;
    /* $845D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_845F:;
    /* $845F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8462:;
    /* $8462: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8465:;
    /* $8465: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8468:;
    /* $8468: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_846B:;
    /* $846B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_846D:;
    /* $846D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8470:;
    /* $8470: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8473:;
    /* $8473: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8475:;
    /* $8475: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8478:;
    /* $8478: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_847B:;
    /* $847B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_847E:;
    /* $847E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8481:;
    /* $8481: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8484:;
    /* $8484: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8487:;
    /* $8487: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_848A:;
    /* $848A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_848D:;
    /* $848D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8490:;
    /* $8490: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8493:;
    /* $8493: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8496:;
    /* $8496: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8499:;
    /* $8499: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_849C:;
    /* $849C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_849F:;
    /* $849F: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A1:;
    /* $84A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A4:;
    /* $84A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A7:;
    /* $84A7: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84A9:;
    /* $84A9: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84AC:;
    /* $84AC: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84AF:;
    /* $84AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7DF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B2:;
    /* $84B2: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B5:;
    /* $84B5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xCFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B8:;
    /* $84B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84BB:;
    /* $84BB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84BE:;
    /* $84BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84C1:;
    /* $84C1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84C3:;
    /* $84C3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84C6:;
    /* $84C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84C9:;
    /* $84C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84CC:;
    /* $84CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84CF:;
    /* $84CF: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFC + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84D1:;
    /* $84D1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84D4:;
    /* $84D4: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84D6:;
    /* $84D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFED5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84D9:;
    /* $84D9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_84DC:;
    /* $84DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84DF:;
    /* $84DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E2:;
    /* $84E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E5:;
    /* $84E5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E8:;
    /* $84E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84EB:;
    /* $84EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84EE:;
    /* $84EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F1:;
    /* $84F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F4:;
    /* $84F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F7:;
    /* $84F7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84FA:;
    /* $84FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84FD:;
    /* $84FD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8500:;
    /* $8500: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF7D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8503:;
    /* $8503: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8506:;
    /* $8506: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8509:;
    /* $8509: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850C:;
    /* $850C: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850E:;
    /* $850E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8511:;
    /* $8511: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8513:;
    /* $8513: 9D */ maybe_trigger_vblank(5); nes_write((0x55BF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8516:;
    /* $8516: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8519:;
    /* $8519: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_851B:;
    /* $851B: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_851D:;
    /* $851D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_851F:;
    /* $851F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8522:;
    /* $8522: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8525:;
    /* $8525: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8528:;
    /* $8528: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_852B:;
    /* $852B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_852E:;
    /* $852E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8531:;
    /* $8531: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8534:;
    /* $8534: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8537:;
    /* $8537: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_853A:;
    /* $853A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8540:;
    /* $8540: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8543:;
    /* $8543: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFDFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8546:;
    /* $8546: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8549:;
    /* $8549: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_854D:;
    /* $854D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854F:;
    /* $854F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8552:;
    /* $8552: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF3D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8555:;
    /* $8555: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7F7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8558:;
    /* $8558: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855B:;
    /* $855B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF77F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855E:;
    /* $855E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8561:;
    /* $8561: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8564:;
    /* $8564: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8566:;
    /* $8566: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8569:;
    /* $8569: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_856C:;
    /* $856C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_856F:;
    /* $856F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8572:;
    /* $8572: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8575:;
    /* $8575: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8578:;
    /* $8578: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_857B:;
    /* $857B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_857E:;
    /* $857E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8581:;
    /* $8581: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8584:;
    /* $8584: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8587:;
    /* $8587: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8589:;
    /* $8589: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDBF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_858C:;
    /* $858C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_858F:;
    /* $858F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8592:;
    /* $8592: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8595:;
    /* $8595: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8597:;
    /* $8597: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859A:;
    /* $859A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7EF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859D:;
    /* $859D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_859F:;
    /* $859F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_85A2:;
    /* $85A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A5:;
    /* $85A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A8:;
    /* $85A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AB:;
    /* $85AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AD:;
    /* $85AD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B0:;
    /* $85B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B3:;
    /* $85B3: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85B5:;
    /* $85B5: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B7:;
    /* $85B7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85BA:;
    /* $85BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85BD:;
    /* $85BD: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C0:;
    /* $85C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85C3:;
    /* $85C3: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85C5:;
    /* $85C5: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:; /* main_ret_A */
    /* $85C7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C9:; /* main_unknown_1B */
    /* $85C9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CB:;
    /* $85CB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CE:;
    /* $85CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D1:;
    /* $85D1: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85D4:;
    /* $85D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D7:;
    /* $85D7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DA:;
    /* $85DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DD:;
    /* $85DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E0:;
    /* $85E0: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85E6:;
    /* $85E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E9:;
    /* $85E9: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85EC:;
    /* $85EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85EF:;
    /* $85EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F2:;
    /* $85F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F5:;
    /* $85F5: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85F7:;
    /* $85F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FA:;
    /* $85FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FD:;
    /* $85FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8600:;
    /* $8600: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8603:;
    /* $8603: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8606:;
    /* $8606: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8609:;
    /* $8609: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_860C:;
    /* $860C: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_860F:;
    /* $860F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8611:;
    /* $8611: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8613:;
    /* $8613: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8615:;
    /* $8615: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8617:;
    /* $8617: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8619:;
    /* $8619: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_861B:;
    /* $861B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_861D:;
    /* $861D: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF9) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_861F:;
    /* $861F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD7FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8622:;
    /* $8622: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8625:;
    /* $8625: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8628:;
    /* $8628: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862B:;
    /* $862B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862E:;
    /* $862E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8631:;
    /* $8631: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8633:;
    /* $8633: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5F7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8636:;
    /* $8636: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8639:;
    /* $8639: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863C:;
    /* $863C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863F:;
    /* $863F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8642:;
    /* $8642: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8645:;
    /* $8645: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8647:;
    /* $8647: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8649:;
    /* $8649: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_864C:;
    /* $864C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_864F:;
    /* $864F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8652:;
    /* $8652: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8655:;
    /* $8655: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8657:;
    /* $8657: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865A:;
    /* $865A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865D:;
    /* $865D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865F:;
    /* $865F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8662:;
    /* $8662: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8665:;
    /* $8665: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8668:;
    /* $8668: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866B:;
    /* $866B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_866D:;
    /* $866D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866F:;
    /* $866F: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8672:;
    /* $8672: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8675:;
    /* $8675: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x777F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8678:;
    /* $8678: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867B:;
    /* $867B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867E:;
    /* $867E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8680:;
    /* $8680: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8683:;
    /* $8683: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8685:;
    /* $8685: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8688:;
    /* $8688: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868B:;
    /* $868B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_868D:;
    /* $868D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868F:;
    /* $868F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xCFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8692:;
    /* $8692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDF5B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8695:;
    /* $8695: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8698:;
    /* $8698: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_869B:;
    /* $869B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_869E:;
    /* $869E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A1:;
    /* $86A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A4:;
    /* $86A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A7:;
    /* $86A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AA:;
    /* $86AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AD:;
    /* $86AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B0:;
    /* $86B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B3:;
    /* $86B3: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B5:;
    /* $86B5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_86B8:;
    /* $86B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86BB:;
    /* $86BB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86BE:;
    /* $86BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C1:;
    /* $86C1: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C3:;
    /* $86C3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C6:;
    /* $86C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C9:;
    /* $86C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEEFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86CC:;
    /* $86CC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86CE:;
    /* $86CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D1:;
    /* $86D1: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86D4:;
    /* $86D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D7:;
    /* $86D7: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86DA:;
    /* $86DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86DD:;
    /* $86DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E0:;
    /* $86E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E3:;
    /* $86E3: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86E5:;
    /* $86E5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E8:;
    /* $86E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86EB:;
    /* $86EB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86EE:;
    /* $86EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F1:;
    /* $86F1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F4:;
    /* $86F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F7:;
    /* $86F7: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F9:;
    /* $86F9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FB:;
    /* $86FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FE:;
    /* $86FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8701:;
    /* $8701: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8703:;
    /* $8703: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x75DF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8706:;
    /* $8706: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8709:;
    /* $8709: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_870B:;
    /* $870B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_870E:;
    /* $870E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8711:;
    /* $8711: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8714:;
    /* $8714: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8717:;
    /* $8717: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_871A:;
    /* $871A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FD7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_871D:;
    /* $871D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0716), 4); return; }
label_871F:;
    /* $871F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8721:;
    /* $8721: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8724:;
    /* $8724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8727:;
    /* $8727: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x5FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_872A:;
    /* $872A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_872D:;
    /* $872D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8730:;
    /* $8730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8733:;
    /* $8733: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8736:;
    /* $8736: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8739:;
    /* $8739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873C:;
    /* $873C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873F:;
    /* $873F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8741:;
    /* $8741: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x37FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8744:;
    /* $8744: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8747:;
    /* $8747: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_874A:;
    /* $874A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFDF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_874D:;
    /* $874D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8750:;
    /* $8750: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8753:;
    /* $8753: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8755:;
    /* $8755: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8758:;
    /* $8758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875B:;
    /* $875B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875D:;
    /* $875D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_875F:;
    /* $875F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8762:;
    /* $8762: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8765:;
    /* $8765: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8767:;
    /* $8767: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8769:;
    /* $8769: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_876C:;
    /* $876C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_876F:;
    /* $876F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8771:;
    /* $8771: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8774:;
    /* $8774: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8777:;
    /* $8777: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_877A:;
    /* $877A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_877D:;
    /* $877D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8780:;
    /* $8780: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8783:;
    /* $8783: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8786:;
    /* $8786: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8789:;
    /* $8789: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_878B:;
    /* $878B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_878E:;
    /* $878E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8791:;
    /* $8791: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8794:;
    /* $8794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8797:;
    /* $8797: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8799:;
    /* $8799: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_879B:;
    /* $879B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_879D:;
    /* $879D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A0:;
    /* $87A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A3:;
    /* $87A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A6:;
    /* $87A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A9:;
    /* $87A9: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87AC:;
    /* $87AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87AF:;
    /* $87AF: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFDFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87B2:;
    /* $87B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87B5:;
    /* $87B5: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87B8:;
    /* $87B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BB:;
    /* $87BB: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BE:;
    /* $87BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C1:;
    /* $87C1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87C4:;
    /* $87C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C7:;
    /* $87C7: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF7FF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87CA:;
    /* $87CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87CD:;
    /* $87CD: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87CF:;
    /* $87CF: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87D2:;
    /* $87D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87D5:;
    /* $87D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87D8:;
    /* $87D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87DB:;
    /* $87DB: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87DD:; /* main_magnet_missile */
    /* $87DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E0:;
    /* $87E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF76F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E3:;
    /* $87E3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E6:;
    /* $87E6: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF5D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87E9:;
    /* $87E9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87EC:;
    /* $87EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87EF:;
    /* $87EF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F1:;
    /* $87F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F4:;
    /* $87F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F7:;
    /* $87F7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87FA:;
    /* $87FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87FD:;
    /* $87FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8800:;
    /* $8800: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8800); return;
}

void func_B9A5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A5_b4");
#endif
label_B9A5:;
    /* $B9A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9A5); return;
}

void func_968D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_968D_b4");
#endif
label_968D:;
    /* $968D: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x24 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_968F:;
    /* $968F: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9691:;
    /* $9691: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_9692:;
    /* $9692: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9694:;
    /* $9694: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_9695:;
    /* $9695: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9697:;
    /* $9697: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD4) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9699:;
    /* $9699: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2928); FLAG_NZ(g_cpu.A);
label_969C:;
    /* $969C: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_969E:;
    /* $969E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xD5; FLAG_NZ(g_cpu.A);
label_96A0:;
    /* $96A0: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x2827 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_96A3:;
    /* $96A3: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_96A5:;
    /* $96A5: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_96A6:;
    /* $96A6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xD5; FLAG_NZ(g_cpu.A);
label_96A8:;
    /* $96A8: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x282D + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_96AB:;
    /* $96AB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x27; FLAG_NZ(g_cpu.A);
label_96AD:;
    /* $96AD: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_96AE:;
    /* $96AE: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0xD6; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_96B0:;
    /* $96B0: 3C */ maybe_trigger_vblank(4); (void)nes_read((0xC63C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_96B3:;
    /* $96B3: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC6; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96B5:;
    /* $96B5: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x3C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_96B7:;
    /* $96B7: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3E3E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_96BA:;
    /* $96BA: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3D3E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96BD:;
    /* $96BD: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x3E3E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_96C0:;
    /* $96C0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_96C2; }
label_96C2:;
    /* $96C2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x96C2); return;
}

void func_8504_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b4");
#endif
label_8504:;
    /* $8504: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8507:;
    /* $8507: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_850A:;
    /* $850A: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xF77F + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850D:;
    /* $850D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_850F:;
    /* $850F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8512:;
    /* $8512: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBF9D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8515:;
    /* $8515: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8517:;
    /* $8517: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x76FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_851A:;
    /* $851A: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_851D:;
    /* $851D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_851F:;
    /* $851F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8522:;
    /* $8522: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8525:;
    /* $8525: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8528:;
    /* $8528: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_852B:;
    /* $852B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_852E:;
    /* $852E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8531:;
    /* $8531: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8534:;
    /* $8534: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8537:;
    /* $8537: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_853A:;
    /* $853A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8540:;
    /* $8540: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8543:;
    /* $8543: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFDFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8546:;
    /* $8546: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8549:;
    /* $8549: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_854D:;
    /* $854D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854F:;
    /* $854F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8552:;
    /* $8552: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF3D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8555:;
    /* $8555: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7F7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8558:;
    /* $8558: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855B:;
    /* $855B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF77F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855E:;
    /* $855E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8561:;
    /* $8561: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8564:;
    /* $8564: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8566:;
    /* $8566: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8569:;
    /* $8569: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_856C:;
    /* $856C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_856F:;
    /* $856F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8572:;
    /* $8572: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8575:;
    /* $8575: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8578:;
    /* $8578: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_857B:;
    /* $857B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_857E:;
    /* $857E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8581:;
    /* $8581: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8584:;
    /* $8584: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8587:;
    /* $8587: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8589:;
    /* $8589: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDBF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_858C:;
    /* $858C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_858F:;
    /* $858F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8592:;
    /* $8592: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8595:;
    /* $8595: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8597:;
    /* $8597: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859A:;
    /* $859A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7EF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859D:;
    /* $859D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_859F:;
    /* $859F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_85A2:;
    /* $85A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A5:;
    /* $85A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A8:;
    /* $85A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AB:;
    /* $85AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AD:;
    /* $85AD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B0:;
    /* $85B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B3:;
    /* $85B3: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85B5:;
    /* $85B5: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B7:;
    /* $85B7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85BA:;
    /* $85BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85BD:;
    /* $85BD: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C0:;
    /* $85C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85C3:;
    /* $85C3: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85C5:;
    /* $85C5: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:; /* main_ret_A */
    /* $85C7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C9:; /* main_unknown_1B */
    /* $85C9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CB:;
    /* $85CB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CE:;
    /* $85CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D1:;
    /* $85D1: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85D4:;
    /* $85D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D7:;
    /* $85D7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DA:;
    /* $85DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DD:;
    /* $85DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E0:;
    /* $85E0: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85E6:;
    /* $85E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E9:;
    /* $85E9: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85EC:;
    /* $85EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85EF:;
    /* $85EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F2:;
    /* $85F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F5:;
    /* $85F5: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85F7:;
    /* $85F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FA:;
    /* $85FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FD:;
    /* $85FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8600:;
    /* $8600: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8603:;
    /* $8603: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8606:;
    /* $8606: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8609:;
    /* $8609: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_860C:;
    /* $860C: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_860F:;
    /* $860F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8611:;
    /* $8611: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8613:;
    /* $8613: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8615:;
    /* $8615: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8617:;
    /* $8617: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8619:;
    /* $8619: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_861B:;
    /* $861B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_861D:;
    /* $861D: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF9) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_861F:;
    /* $861F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD7FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8622:;
    /* $8622: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8625:;
    /* $8625: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8628:;
    /* $8628: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862B:;
    /* $862B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862E:;
    /* $862E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8631:;
    /* $8631: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8633:;
    /* $8633: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5F7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8636:;
    /* $8636: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8639:;
    /* $8639: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863C:;
    /* $863C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863F:;
    /* $863F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8642:;
    /* $8642: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8645:;
    /* $8645: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8647:;
    /* $8647: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8649:;
    /* $8649: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_864C:;
    /* $864C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_864F:;
    /* $864F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8652:;
    /* $8652: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8655:;
    /* $8655: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8657:;
    /* $8657: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865A:;
    /* $865A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865D:;
    /* $865D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865F:;
    /* $865F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8662:;
    /* $8662: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8665:;
    /* $8665: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8668:;
    /* $8668: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866B:;
    /* $866B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_866D:;
    /* $866D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866F:;
    /* $866F: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8672:;
    /* $8672: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8675:;
    /* $8675: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x777F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8678:;
    /* $8678: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867B:;
    /* $867B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867E:;
    /* $867E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8680:;
    /* $8680: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8683:;
    /* $8683: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8685:;
    /* $8685: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8688:;
    /* $8688: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868B:;
    /* $868B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_868D:;
    /* $868D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868F:;
    /* $868F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xCFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8692:;
    /* $8692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDF5B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8695:;
    /* $8695: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8698:;
    /* $8698: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_869B:;
    /* $869B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_869E:;
    /* $869E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A1:;
    /* $86A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A4:;
    /* $86A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A7:;
    /* $86A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AA:;
    /* $86AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AD:;
    /* $86AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B0:;
    /* $86B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B3:;
    /* $86B3: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B5:;
    /* $86B5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_86B8:;
    /* $86B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86BB:;
    /* $86BB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86BE:;
    /* $86BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C1:;
    /* $86C1: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C3:;
    /* $86C3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C6:;
    /* $86C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C9:;
    /* $86C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEEFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86CC:;
    /* $86CC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86CE:;
    /* $86CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D1:;
    /* $86D1: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86D4:;
    /* $86D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D7:;
    /* $86D7: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86DA:;
    /* $86DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86DD:;
    /* $86DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E0:;
    /* $86E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E3:;
    /* $86E3: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86E5:;
    /* $86E5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E8:;
    /* $86E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86EB:;
    /* $86EB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86EE:;
    /* $86EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F1:;
    /* $86F1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F4:;
    /* $86F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F7:;
    /* $86F7: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F9:;
    /* $86F9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FB:;
    /* $86FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FE:;
    /* $86FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8701:;
    /* $8701: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8703:;
    /* $8703: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x75DF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8706:;
    /* $8706: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8709:;
    /* $8709: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_870B:;
    /* $870B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_870E:;
    /* $870E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8711:;
    /* $8711: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8714:;
    /* $8714: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8717:;
    /* $8717: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_871A:;
    /* $871A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FD7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_871D:;
    /* $871D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0716), 4); return; }
label_871F:;
    /* $871F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8721:;
    /* $8721: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8724:;
    /* $8724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8727:;
    /* $8727: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x5FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_872A:;
    /* $872A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_872D:;
    /* $872D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8730:;
    /* $8730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8733:;
    /* $8733: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8736:;
    /* $8736: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8739:;
    /* $8739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873C:;
    /* $873C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873F:;
    /* $873F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8741:;
    /* $8741: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x37FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8744:;
    /* $8744: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8747:;
    /* $8747: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_874A:;
    /* $874A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFDF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_874D:;
    /* $874D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8750:;
    /* $8750: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8753:;
    /* $8753: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8755:;
    /* $8755: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8758:;
    /* $8758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875B:;
    /* $875B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875D:;
    /* $875D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_875F:;
    /* $875F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8762:;
    /* $8762: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8765:;
    /* $8765: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8767:;
    /* $8767: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8769:;
    /* $8769: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_876C:;
    /* $876C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_876F:;
    /* $876F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8771:;
    /* $8771: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8774:;
    /* $8774: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8777:;
    /* $8777: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_877A:;
    /* $877A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_877D:;
    /* $877D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8780:;
    /* $8780: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8783:;
    /* $8783: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8786:;
    /* $8786: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8789:;
    /* $8789: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_878B:;
    /* $878B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_878E:;
    /* $878E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8791:;
    /* $8791: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8794:;
    /* $8794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8797:;
    /* $8797: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8799:;
    /* $8799: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_879B:;
    /* $879B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_879D:;
    /* $879D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A0:;
    /* $87A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A3:;
    /* $87A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A6:;
    /* $87A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A9:;
    /* $87A9: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87AC:;
    /* $87AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87AF:;
    /* $87AF: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFDFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87B2:;
    /* $87B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87B5:;
    /* $87B5: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87B8:;
    /* $87B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BB:;
    /* $87BB: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BE:;
    /* $87BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C1:;
    /* $87C1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87C4:;
    /* $87C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C7:;
    /* $87C7: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF7FF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87CA:;
    /* $87CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87CD:;
    /* $87CD: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87CF:;
    /* $87CF: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87D2:;
    /* $87D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87D5:;
    /* $87D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87D8:;
    /* $87D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87DB:;
    /* $87DB: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87DD:; /* main_magnet_missile */
    /* $87DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E0:;
    /* $87E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF76F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E3:;
    /* $87E3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E6:;
    /* $87E6: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF5D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87E9:;
    /* $87E9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87EC:;
    /* $87EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87EF:;
    /* $87EF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F1:;
    /* $87F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F4:;
    /* $87F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F7:;
    /* $87F7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87FA:;
    /* $87FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87FD:;
    /* $87FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8800:;
    /* $8800: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8800); return;
}

void func_809D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_809D_b4");
#endif
label_809D:;
    /* $809D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFAF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80A0:;
    /* $80A0: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80A3:;
    /* $80A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80A6:;
    /* $80A6: 9D */ maybe_trigger_vblank(5); nes_write((0xEBF7 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80A9:;
    /* $80A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFB6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80AC:;
    /* $80AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80AF:;
    /* $80AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80B2:;
    /* $80B2: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_80B5:;
    /* $80B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80B8:;
    /* $80B8: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFEFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_80BB:;
    /* $80BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80BE:;
    /* $80BE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFAFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80C1:;
    /* $80C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80C4:;
    /* $80C4: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xBFFF); FLAG_NZ(g_cpu.A);
label_80C7:;
    /* $80C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80CA:;
    /* $80CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80CD:;
    /* $80CD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80D0:;
    /* $80D0: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFEFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80D3:;
    /* $80D3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80D6:;
    /* $80D6: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80D8:;
    /* $80D8: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_80DB:;
    /* $80DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80DE:;
    /* $80DE: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_80E1:;
    /* $80E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFAE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80E4:;
    /* $80E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_80E5:;
    /* $80E5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80E8:;
    /* $80E8: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80EA:;
    /* $80EA: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80EC:;
    /* $80EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80EF:;
    /* $80EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80F2:;
    /* $80F2: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFF; FLAG_NZ(g_cpu.A);
label_80F4:;
    /* $80F4: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xFEFF); FLAG_NZ(g_cpu.A);
label_80F7:;
    /* $80F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80FA:;
    /* $80FA: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80FC:;
    /* $80FC: EF */ maybe_trigger_vblank(6); { uint16_t a=0xAAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80FF:;
    /* $80FF: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8102:; /* check_weapon_hit */
    /* $8102: 3A */ maybe_trigger_vblank(2); /* NOP */
label_8103:;
    /* $8103: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8106:; /* play_sound_ID */
    /* $8106: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8109:;
    /* $8109: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_810C:;
    /* $810C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_810F:;
    /* $810F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8112:;
    /* $8112: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8115:;
    /* $8115: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8118:;
    /* $8118: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFEFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_811B:;
    /* $811B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_811E:;
    /* $811E: FA */ maybe_trigger_vblank(2); /* NOP */
label_811F:;
    /* $811F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8122:;
    /* $8122: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFAFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8125:;
    /* $8125: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF5A + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8128:;
    /* $8128: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_812B:;
    /* $812B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF9B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_812E:;
    /* $812E: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8131:;
    /* $8131: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8134:;
    /* $8134: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8137:;
    /* $8137: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_813A:;
    /* $813A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEDF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_813D:;
    /* $813D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8140:;
    /* $8140: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xFEFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8143:;
    /* $8143: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8146:;
    /* $8146: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8149:;
    /* $8149: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_814C:;
    /* $814C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_814F:;
    /* $814F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8152:;
    /* $8152: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8155:;
    /* $8155: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8158:;
    /* $8158: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_815B:;
    /* $815B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_815E:;
    /* $815E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x7FFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8161:;
    /* $8161: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8164:;
    /* $8164: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8167:;
    /* $8167: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_816A:;
    /* $816A: FA */ maybe_trigger_vblank(2); /* NOP */
label_816B:;
    /* $816B: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF9B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_816E:;
    /* $816E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xF3FF); FLAG_NZ(g_cpu.X);
label_8171:;
    /* $8171: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFFFE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8174:;
    /* $8174: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xBFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8177:;
    /* $8177: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_817A:;
    /* $817A: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xBAFF); FLAG_NZ(g_cpu.A);
label_817D:;
    /* $817D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8180:;
    /* $8180: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8183:;
    /* $8183: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7BB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8186:;
    /* $8186: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8189:;
    /* $8189: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_818C:;
    /* $818C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_818F:;
    /* $818F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8192:;
    /* $8192: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xAEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8195:;
    /* $8195: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8198:;
    /* $8198: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEEEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_819B:;
    /* $819B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDBA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_819E:;
    /* $819E: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xBFFF); FLAG_NZ(g_cpu.A);
label_81A1:;
    /* $81A1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81A4:;
    /* $81A4: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xBBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_81A7:;
    /* $81A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81AA:;
    /* $81AA: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xBEFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_81AD:;
    /* $81AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81B0:;
    /* $81B0: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_81B3:;
    /* $81B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81B6:;
    /* $81B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81B9:;
    /* $81B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81BC:;
    /* $81BC: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81BF:;
    /* $81BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81C2:;
    /* $81C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81C5:;
    /* $81C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81C8:;
    /* $81C8: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEBEF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81CB:;
    /* $81CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81CE:;
    /* $81CE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81D1:;
    /* $81D1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81D4:;
    /* $81D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81D7:;
    /* $81D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81DA:;
    /* $81DA: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_81DB:;
    /* $81DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81DE:;
    /* $81DE: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81E1:;
    /* $81E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFBA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81E4:;
    /* $81E4: 7A */ maybe_trigger_vblank(2); /* NOP */
label_81E5:;
    /* $81E5: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xF2 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81E7:;
    /* $81E7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81EA:;
    /* $81EA: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFBFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_81ED:;
    /* $81ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81F0:;
    /* $81F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81F3:;
    /* $81F3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFAB + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81F6:;
    /* $81F6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81F9:;
    /* $81F9: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBA + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81FC:;
    /* $81FC: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xABFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81FF:;
    /* $81FF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8202:;
    /* $8202: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8205:;
    /* $8205: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8208:;
    /* $8208: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_820B:;
    /* $820B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_820E:;
    /* $820E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8211:;
    /* $8211: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8214:;
    /* $8214: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8217:;
    /* $8217: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_821A:;
    /* $821A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_821D:;
    /* $821D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8220:;
    /* $8220: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xFFF7); FLAG_NZ(g_cpu.A);
label_8223:;
    /* $8223: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8226:;
    /* $8226: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBF7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8229:;
    /* $8229: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_822C:;
    /* $822C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_822F:;
    /* $822F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8232:;
    /* $8232: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8235:;
    /* $8235: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8238:;
    /* $8238: EE */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_823B:;
    /* $823B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_823E:;
    /* $823E: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8241:;
    /* $8241: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8244:;
    /* $8244: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8247:;
    /* $8247: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_824A:;
    /* $824A: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_824C:;
    /* $824C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_824F:;
    /* $824F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8252:;
    /* $8252: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8255:;
    /* $8255: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8258:;
    /* $8258: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_825B:;
    /* $825B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_825E:;
    /* $825E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8261:;
    /* $8261: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFAF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8264:;
    /* $8264: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8267:;
    /* $8267: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xEF + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8269:;
    /* $8269: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_826C:;
    /* $826C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_826F:;
    /* $826F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8272:;
    /* $8272: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8275:;
    /* $8275: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8278:;
    /* $8278: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_827B:;
    /* $827B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_827E:;
    /* $827E: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8281:;
    /* $8281: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8284:;
    /* $8284: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8287:;
    /* $8287: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_828A:;
    /* $828A: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_828C:;
    /* $828C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_828F:;
    /* $828F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFB7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8292:;
    /* $8292: EB */ maybe_trigger_vblank(2); { uint8_t m=0xFF; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8294:;
    /* $8294: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8297:;
    /* $8297: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_829A:;
    /* $829A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_829D:;
    /* $829D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82A0:;
    /* $82A0: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xEFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82A3:;
    /* $82A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82A6:;
    /* $82A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82A9:;
    /* $82A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82AC:;
    /* $82AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82AF:;
    /* $82AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82B2:;
    /* $82B2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xAFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82B5:;
    /* $82B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82B8:;
    /* $82B8: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82BB:;
    /* $82BB: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_82BE:;
    /* $82BE: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_82BF:;
    /* $82BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82C2:;
    /* $82C2: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xEFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82C5:;
    /* $82C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82C8:;
    /* $82C8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82CB:;
    /* $82CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82CE:;
    /* $82CE: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBBFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D1:;
    /* $82D1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D4:;
    /* $82D4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82D7:;
    /* $82D7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82DA:;
    /* $82DA: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFEFF); FLAG_NZ(g_cpu.X);
label_82DD:;
    /* $82DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82E0:;
    /* $82E0: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFAFF); FLAG_NZ(g_cpu.X);
label_82E3:;
    /* $82E3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFBB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_82E6:;
    /* $82E6: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xE6FB + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82E9:;
    /* $82E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF3A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82EC:;
    /* $82EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82EF:;
    /* $82EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82F2:;
    /* $82F2: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82F5:;
    /* $82F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82F8:;
    /* $82F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82FB:;
    /* $82FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_82FE:;
    /* $82FE: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_82FF:;
    /* $82FF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8301:;
    /* $8301: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8304:;
    /* $8304: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFAFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8307:;
    /* $8307: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_830A:;
    /* $830A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xAFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_830D:;
    /* $830D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8310:;
    /* $8310: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8313:;
    /* $8313: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8316:;
    /* $8316: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8319:;
    /* $8319: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_831C:;
    /* $831C: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEEFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_831F:;
    /* $831F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8322:;
    /* $8322: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFF; FLAG_NZ(g_cpu.A);
label_8324:;
    /* $8324: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFAEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8327:;
    /* $8327: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8329:;
    /* $8329: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_832C:;
    /* $832C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_832F:;
    /* $832F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFBB + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8332:;
    /* $8332: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBBFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8335:;
    /* $8335: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8338:;
    /* $8338: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_833B:;
    /* $833B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_833E:;
    /* $833E: FA */ maybe_trigger_vblank(2); /* NOP */
label_833F:;
    /* $833F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8342:;
    /* $8342: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8345:;
    /* $8345: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8348:;
    /* $8348: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_834B:;
    /* $834B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_834E:;
    /* $834E: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8351:;
    /* $8351: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8354:;
    /* $8354: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8357:;
    /* $8357: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_835A:;
    /* $835A: EF */ maybe_trigger_vblank(6); { uint16_t a=0x7FFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_835D:;
    /* $835D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8360:;
    /* $8360: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFB7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8363:;
    /* $8363: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8366:;
    /* $8366: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8369:;
    /* $8369: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_836C:;
    /* $836C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_836F:;
    /* $836F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8372:;
    /* $8372: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xFFFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8375:;
    /* $8375: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8378:;
    /* $8378: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xFF; FLAG_NZ(g_cpu.A);
label_837A:;
    /* $837A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEAFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_837D:;
    /* $837D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8380:;
    /* $8380: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8383:;
    /* $8383: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8386:;
    /* $8386: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8389:;
    /* $8389: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_838C:;
    /* $838C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_838F:;
    /* $838F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8392:;
    /* $8392: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8395:;
    /* $8395: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8398:;
    /* $8398: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_839B:;
    /* $839B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_839E:;
    /* $839E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A0:;
    /* $83A0: FA */ maybe_trigger_vblank(2); /* NOP */
label_83A1:;
    /* $83A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A4:;
    /* $83A4: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEFEF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83A7:;
    /* $83A7: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83A9:;
    /* $83A9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83AC:;
    /* $83AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83AF:; /* weapon_damage_ptr_lo */
    /* $83AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B2:;
    /* $83B2: EE */ maybe_trigger_vblank(6); { uint16_t a=0x7FFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83B5:;
    /* $83B5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B8:;
    /* $83B8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83BB:; /* weapon_damage_ptr_hi */
    /* $83BB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83BE:;
    /* $83BE: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xAEFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_83C1:;
    /* $83C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83C4:;
    /* $83C4: FA */ maybe_trigger_vblank(2); /* NOP */
label_83C5:;
    /* $83C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFA + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83C8:;
    /* $83C8: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83CB:;
    /* $83CB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83CE:;
    /* $83CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D1:;
    /* $83D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D4:;
    /* $83D4: EA */ maybe_trigger_vblank(2); /* NOP */
label_83D5:;
    /* $83D5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83D8:;
    /* $83D8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83DB:;
    /* $83DB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83DE:;
    /* $83DE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83E1:;
    /* $83E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83E4:;
    /* $83E4: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xBEFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83E7:;
    /* $83E7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83EA:;
    /* $83EA: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83ED:;
    /* $83ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F0:;
    /* $83F0: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F2:;
    /* $83F2: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F5:;
    /* $83F5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83F8:;
    /* $83F8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83FB:;
    /* $83FB: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83FE:;
    /* $83FE: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x577F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8401:;
    /* $8401: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x9DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8404:;
    /* $8404: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8407:;
    /* $8407: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8409:;
    /* $8409: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x3FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_840C:;
    /* $840C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_840F:;
    /* $840F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8412:;
    /* $8412: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8415:;
    /* $8415: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8417:;
    /* $8417: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8419:;
    /* $8419: CF */ maybe_trigger_vblank(6); { uint16_t a=0x55FF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_841C:;
    /* $841C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFCD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_841F:;
    /* $841F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8421:;
    /* $8421: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5FFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8424:;
    /* $8424: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8427:;
    /* $8427: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_842A:;
    /* $842A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6FF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_842D:;
    /* $842D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8430:;
    /* $8430: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8433:;
    /* $8433: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8435:;
    /* $8435: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8438:;
    /* $8438: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_843B:;
    /* $843B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_843E:;
    /* $843E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8441:;
    /* $8441: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xB7DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8444:;
    /* $8444: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8447:;
    /* $8447: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8449:;
    /* $8449: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844C:;
    /* $844C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_844F:;
    /* $844F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xEFEF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8452:;
    /* $8452: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8455:;
    /* $8455: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8457:;
    /* $8457: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_845A:;
    /* $845A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_845D:;
    /* $845D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_845F:;
    /* $845F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8462:;
    /* $8462: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8465:;
    /* $8465: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8468:;
    /* $8468: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_846B:;
    /* $846B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_846D:;
    /* $846D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8470:;
    /* $8470: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8473:;
    /* $8473: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8475:;
    /* $8475: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8478:;
    /* $8478: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_847B:;
    /* $847B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_847E:;
    /* $847E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8481:;
    /* $8481: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8484:;
    /* $8484: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8487:;
    /* $8487: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_848A:;
    /* $848A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_848D:;
    /* $848D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8490:;
    /* $8490: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8493:;
    /* $8493: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8496:;
    /* $8496: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8499:;
    /* $8499: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_849C:;
    /* $849C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_849F:;
    /* $849F: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A1:;
    /* $84A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A4:;
    /* $84A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84A7:;
    /* $84A7: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84A9:;
    /* $84A9: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84AC:;
    /* $84AC: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84AF:;
    /* $84AF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7DF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B2:;
    /* $84B2: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B5:;
    /* $84B5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xCFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84B8:;
    /* $84B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84BB:;
    /* $84BB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84BE:;
    /* $84BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84C1:;
    /* $84C1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84C3:;
    /* $84C3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84C6:;
    /* $84C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84C9:;
    /* $84C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84CC:;
    /* $84CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84CF:;
    /* $84CF: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFC + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84D1:;
    /* $84D1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_84D4:;
    /* $84D4: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84D6:;
    /* $84D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFED5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84D9:;
    /* $84D9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_84DC:;
    /* $84DC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84DF:;
    /* $84DF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E2:;
    /* $84E2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E5:;
    /* $84E5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84E8:;
    /* $84E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84EB:;
    /* $84EB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84EE:;
    /* $84EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F1:;
    /* $84F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F4:;
    /* $84F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F7:;
    /* $84F7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84FA:;
    /* $84FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84FD:;
    /* $84FD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8500:;
    /* $8500: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF7D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8503:;
    /* $8503: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8506:;
    /* $8506: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8509:;
    /* $8509: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850C:;
    /* $850C: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_850E:;
    /* $850E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8511:;
    /* $8511: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8513:;
    /* $8513: 9D */ maybe_trigger_vblank(5); nes_write((0x55BF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8516:;
    /* $8516: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8519:;
    /* $8519: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_851B:;
    /* $851B: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_851D:;
    /* $851D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_851F:;
    /* $851F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8522:;
    /* $8522: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8525:;
    /* $8525: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8528:;
    /* $8528: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_852B:;
    /* $852B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_852E:;
    /* $852E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8531:;
    /* $8531: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8534:;
    /* $8534: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8537:;
    /* $8537: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_853A:;
    /* $853A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_853D:;
    /* $853D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8540:;
    /* $8540: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8543:;
    /* $8543: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFDFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8546:;
    /* $8546: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8549:;
    /* $8549: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854B:;
    /* $854B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_854D:;
    /* $854D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_854F:;
    /* $854F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8552:;
    /* $8552: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF3D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8555:;
    /* $8555: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7F7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8558:;
    /* $8558: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855B:;
    /* $855B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF77F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_855E:;
    /* $855E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8561:;
    /* $8561: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8564:;
    /* $8564: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8566:;
    /* $8566: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8569:;
    /* $8569: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_856C:;
    /* $856C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_856F:;
    /* $856F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8572:;
    /* $8572: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8575:;
    /* $8575: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8578:;
    /* $8578: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_857B:;
    /* $857B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_857E:;
    /* $857E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8581:;
    /* $8581: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8584:;
    /* $8584: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8587:;
    /* $8587: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8589:;
    /* $8589: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDBF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_858C:;
    /* $858C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_858F:;
    /* $858F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8592:;
    /* $8592: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF6; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8595:;
    /* $8595: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8597:;
    /* $8597: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859A:;
    /* $859A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7EF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859D:;
    /* $859D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_859F:;
    /* $859F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_85A2:;
    /* $85A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A5:;
    /* $85A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A8:;
    /* $85A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AB:;
    /* $85AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AD:;
    /* $85AD: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B0:;
    /* $85B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B3:;
    /* $85B3: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85B5:;
    /* $85B5: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B7:;
    /* $85B7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85BA:;
    /* $85BA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85BD:;
    /* $85BD: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C0:;
    /* $85C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85C3:;
    /* $85C3: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85C5:;
    /* $85C5: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85C7:; /* main_ret_A */
    /* $85C7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85C9:; /* main_unknown_1B */
    /* $85C9: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CB:;
    /* $85CB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85CE:;
    /* $85CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D1:;
    /* $85D1: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85D4:;
    /* $85D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D7:;
    /* $85D7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DA:;
    /* $85DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DD:;
    /* $85DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E0:;
    /* $85E0: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_85E6:;
    /* $85E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E9:;
    /* $85E9: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85EC:;
    /* $85EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85EF:;
    /* $85EF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F2:;
    /* $85F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F5:;
    /* $85F5: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85F7:;
    /* $85F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FA:;
    /* $85FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85FD:;
    /* $85FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8600:;
    /* $8600: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8603:;
    /* $8603: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8606:;
    /* $8606: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8609:;
    /* $8609: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_860C:;
    /* $860C: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_860F:;
    /* $860F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8611:;
    /* $8611: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8613:;
    /* $8613: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8615:;
    /* $8615: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8617:;
    /* $8617: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8619:;
    /* $8619: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_861B:;
    /* $861B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_861D:;
    /* $861D: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF9) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_861F:;
    /* $861F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD7FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8622:;
    /* $8622: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8625:;
    /* $8625: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8628:;
    /* $8628: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862B:;
    /* $862B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862E:;
    /* $862E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8631:;
    /* $8631: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8633:;
    /* $8633: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5F7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8636:;
    /* $8636: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8639:;
    /* $8639: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863C:;
    /* $863C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_863F:;
    /* $863F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8642:;
    /* $8642: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8645:;
    /* $8645: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8647:;
    /* $8647: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8649:;
    /* $8649: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_864C:;
    /* $864C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_864F:;
    /* $864F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8652:;
    /* $8652: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8655:;
    /* $8655: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8657:;
    /* $8657: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865A:;
    /* $865A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865D:;
    /* $865D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_865F:;
    /* $865F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8662:;
    /* $8662: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8665:;
    /* $8665: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8668:;
    /* $8668: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866B:;
    /* $866B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_866D:;
    /* $866D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_866F:;
    /* $866F: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8672:;
    /* $8672: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8675:;
    /* $8675: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x777F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8678:;
    /* $8678: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867B:;
    /* $867B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_867E:;
    /* $867E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8680:;
    /* $8680: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8683:;
    /* $8683: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8685:;
    /* $8685: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8688:;
    /* $8688: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868B:;
    /* $868B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_868D:;
    /* $868D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_868F:;
    /* $868F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xCFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8692:;
    /* $8692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDF5B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8695:;
    /* $8695: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8698:;
    /* $8698: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_869B:;
    /* $869B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_869E:;
    /* $869E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A1:;
    /* $86A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A4:;
    /* $86A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86A7:;
    /* $86A7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AA:;
    /* $86AA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86AD:;
    /* $86AD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B0:;
    /* $86B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B3:;
    /* $86B3: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86B5:;
    /* $86B5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_86B8:;
    /* $86B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86BB:;
    /* $86BB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86BE:;
    /* $86BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C1:;
    /* $86C1: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C3:;
    /* $86C3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C6:;
    /* $86C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86C9:;
    /* $86C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEEFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86CC:;
    /* $86CC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86CE:;
    /* $86CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D1:;
    /* $86D1: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86D4:;
    /* $86D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86D7:;
    /* $86D7: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFF5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86DA:;
    /* $86DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86DD:;
    /* $86DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E0:;
    /* $86E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E3:;
    /* $86E3: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_86E5:;
    /* $86E5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86E8:;
    /* $86E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86EB:;
    /* $86EB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86EE:;
    /* $86EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F1:;
    /* $86F1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F4:;
    /* $86F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F7:;
    /* $86F7: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86F9:;
    /* $86F9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FB:;
    /* $86FB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86FE:;
    /* $86FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8701:;
    /* $8701: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8703:;
    /* $8703: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x75DF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8706:;
    /* $8706: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFF5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8709:;
    /* $8709: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_870B:;
    /* $870B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_870E:;
    /* $870E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8711:;
    /* $8711: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8714:;
    /* $8714: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8717:;
    /* $8717: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_871A:;
    /* $871A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FD7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_871D:;
    /* $871D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0716), 4); return; }
label_871F:;
    /* $871F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8721:;
    /* $8721: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8724:;
    /* $8724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8727:;
    /* $8727: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x5FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_872A:;
    /* $872A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_872D:;
    /* $872D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8730:;
    /* $8730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8733:;
    /* $8733: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8736:;
    /* $8736: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8739:;
    /* $8739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873C:;
    /* $873C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_873F:;
    /* $873F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8741:;
    /* $8741: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x37FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8744:;
    /* $8744: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8747:;
    /* $8747: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_874A:;
    /* $874A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFDF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_874D:;
    /* $874D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8750:;
    /* $8750: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8753:;
    /* $8753: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8755:;
    /* $8755: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8758:;
    /* $8758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875B:;
    /* $875B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_875D:;
    /* $875D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_875F:;
    /* $875F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8762:;
    /* $8762: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8765:;
    /* $8765: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8767:;
    /* $8767: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8769:;
    /* $8769: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_876C:;
    /* $876C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_876F:;
    /* $876F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8771:;
    /* $8771: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8774:;
    /* $8774: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8777:;
    /* $8777: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_877A:;
    /* $877A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_877D:;
    /* $877D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8780:;
    /* $8780: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8783:;
    /* $8783: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8786:;
    /* $8786: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8789:;
    /* $8789: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_878B:;
    /* $878B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_878E:;
    /* $878E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8791:;
    /* $8791: CF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8794:;
    /* $8794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8797:;
    /* $8797: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8799:;
    /* $8799: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_879B:;
    /* $879B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_879D:;
    /* $879D: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A0:;
    /* $87A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A3:;
    /* $87A3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A6:;
    /* $87A6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87A9:;
    /* $87A9: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87AC:;
    /* $87AC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87AF:;
    /* $87AF: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFDFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_87B2:;
    /* $87B2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87B5:;
    /* $87B5: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87B8:;
    /* $87B8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BB:;
    /* $87BB: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87BE:;
    /* $87BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C1:;
    /* $87C1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87C4:;
    /* $87C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87C7:;
    /* $87C7: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF7FF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87CA:;
    /* $87CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87CD:;
    /* $87CD: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87CF:;
    /* $87CF: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87D2:;
    /* $87D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87D5:;
    /* $87D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87D8:;
    /* $87D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87DB:;
    /* $87DB: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_87DD:; /* main_magnet_missile */
    /* $87DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E0:;
    /* $87E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF76F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E3:;
    /* $87E3: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87E6:;
    /* $87E6: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF5D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87E9:;
    /* $87E9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_87EC:;
    /* $87EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87EF:;
    /* $87EF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F1:;
    /* $87F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F4:;
    /* $87F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87F7:;
    /* $87F7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_87FA:;
    /* $87FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_87FD:;
    /* $87FD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8800:;
    /* $8800: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8800); return;
}

void func_9893_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9893_b4");
#endif
label_9893:;
    /* $9893: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9893; g_rti_bank = 4; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B893_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B893_b4");
#endif
label_B893:;
    /* $B893: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B895:;
    /* $B895: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B897:;
    /* $B897: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x17; FLAG_NZ(g_cpu.A);
label_B899:;
    /* $B899: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B89B:;
    /* $B89B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB89B); return;
}

void func_98BD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98BD_b4");
#endif
label_98BD:;
    /* $98BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_98BE:;
    /* $98BE: 89 */ maybe_trigger_vblank(2); /* NOP */
label_98C0:;
    /* $98C0: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x74) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98C2:;
    /* $98C2: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x42 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98C4:;
    /* $98C4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_98C5:;
    /* $98C5: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5D40 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98C8:;
    /* $98C8: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_98C9:;
    /* $98C9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x6889, -1); return;
}

void func_B8BD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8BD_b4");
#endif
label_B8BD:;
    /* $B8BD: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B8BF:;
    /* $B8BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8BF); return;
}

void func_9785_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b4");
#endif
label_9785:;
    /* $9785: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9787:;
    /* $9787: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x68 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9789:;
    /* $9789: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_978B:;
    /* $978B: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7476 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_978E:;
    /* $978E: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4A; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_9790:;
    /* $9790: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9791:;
    /* $9791: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9792:;
    /* $9792: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9792; g_rti_bank = 4; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99F0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F0_b4");
#endif
label_99F0:;
    /* $99F0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_99F1:;
    /* $99F1: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_99F3:;
    /* $99F3: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_99F5:;
    /* $99F5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x99F5); return;
}

void func_B9F0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9F0_b4");
#endif
label_B9F0:;
    /* $B9F0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B9F1:;
    /* $B9F1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x38; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F3:;
    /* $B9F3: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x85; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9F5:;
    /* $B9F5: 87 */ maybe_trigger_vblank(3); nes_write(0x8D, g_cpu.A & g_cpu.X); /* SAX */
label_B9F7:;
    /* $B9F7: 8F */ maybe_trigger_vblank(4); nes_write(0x8786, g_cpu.A & g_cpu.X); /* SAX */
label_B9FA:;
    /* $B9FA: 8E */ maybe_trigger_vblank(4); nes_write(0x868F, g_cpu.X);
label_B9FD:;
    /* $B9FD: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x8E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FF:;
    /* $B9FF: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA01:;
    /* $BA01: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0217 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA04:;
    /* $BA04: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x39; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA06:;
    /* $BA06: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA07:;
    /* $BA07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA08:;
    /* $BA08: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x1F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA0A:;
    /* $BA0A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BA0B:;
    /* $BA0B: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0104 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA0E:;
    /* $BA0E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA10:;
    /* $BA10: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA12:;
    /* $BA12: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA14:;
    /* $BA14: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x12 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA16:;
    /* $BA16: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA18:;
    /* $BA18: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA1A:;
    /* $BA1A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA1C:;
    /* $BA1C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA1E:;
    /* $BA1E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x1F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA20:;
    /* $BA20: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA22:;
    /* $BA22: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1701 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA25:;
    /* $BA25: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA27:;
    /* $BA27: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA29:;
    /* $BA29: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA29); return;
}

void func_99AD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99AD_b4");
#endif
label_99AD:;
    /* $99AD: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_99AE:;
    /* $99AE: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1948), 4); return; }
label_99B0:;
    /* $99B0: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x6619 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99B3:;
    /* $99B3: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_99B5:;
    /* $99B5: 1A */ maybe_trigger_vblank(2); /* NOP */
label_99B6:;
    /* $99B6: 97 */ maybe_trigger_vblank(4); nes_write((0x71 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_99B8:;
    /* $99B8: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_99B9:;
    /* $99B9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x19 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_99BB:;
    /* $99BB: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x6261 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_99BE:;
    /* $99BE: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x111B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_99C1:;
    /* $99C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x92 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_99C3:; /* main_metall_dx */
    /* $99C3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x19D6), 4); return; }
label_99C5:;
    /* $99C5: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1B91 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_99C8:;
    /* $99C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x99C8); return;
label_99C9:; return;
label_99CB:; return;
label_99CE:; return;
label_99CF:; return;
label_99D1:; return;
label_99D2:; return;
label_99D3:; return;
label_99D4:; return;
label_99D7:; return;
label_99D8:; return;
label_99DB:; return;
label_99DC:; return;
label_99DF:; return;
label_99E0:; return;
label_99E2:; return;
label_99E5:; return;
label_99E6:; return;
label_99E7:; return;
label_99E9:; return;
label_99EC:; return;
label_99EE:; return;
label_99F0:; return;
label_99F1:; return;
label_99F3:; return;
label_99F5:; return;
label_99F6:; return;
label_99F7:; return;
label_99F9:; return;
label_99FB:; return;
label_99FD:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A05:; return;
label_9A06:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0E:; return;
label_9A10:; return;
label_9A13:; return;
label_9A16:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A21:; return;
label_9A23:; return;
label_9A25:; return;
label_9A27:; return;
label_9A29:; return;
label_9A2B:; return;
label_9A2D:; return;
label_9A2F:; return;
label_9A30:; return;
label_9A32:; return;
label_9A34:; return;
label_9A36:; return;
label_9A38:; return;
label_9A3A:; return;
label_9A3C:; return;
label_9A3E:; return;
label_9A40:; return;
label_9A41:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4C:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A51:; return;
label_9A52:; return;
label_9A54:; return;
label_9A7E:; return;
label_9A81:; return;
label_9A83:; return;
label_9A86:; return;
label_9A89:; return;
label_9A8A:; return;
label_9A8D:; return;
label_9A8E:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A91:; return;
label_9A93:; return;
label_9A94:; return;
label_9A95:; return;
label_9A96:; return;
label_9A98:; return;
label_9A99:; return;
label_9A9B:; return;
label_9A9C:; return;
label_9A9E:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA3:; return;
label_9AA6:; return;
label_9AA8:; return;
label_9AA9:; return;
label_9AAA:; return;
label_9AAC:; return;
label_9AAD:; return;
label_9AAE:; return;
label_9AB0:; return;
label_9AB3:; return;
label_9AB5:; return;
label_9AB8:; return;
label_9ABB:; return;
label_9ABD:; return;
label_9ABF:; return;
label_9AC0:; return;
label_9AC2:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9ACB:; return;
label_9ACD:; return;
label_9ACE:; return;
label_9AD0:; return;
label_9AD3:; return;
label_9AD4:; return;
label_9AD7:; return;
label_9AD8:; return;
label_9ADB:; return;
label_9ADC:; return;
label_9ADF:; return;
label_9AE0:; return;
label_9AE1:; return;
label_9AE2:; return;
label_9AE3:; return;
label_9AE4:; return;
label_9AE5:; return;
label_9AE6:; return;
label_9AE7:; return;
label_9AE8:; return;
label_9AE9:; return;
label_9AEA:; return;
label_9AEB:; return;
label_9AEC:; return;
label_9AED:; return;
label_9AEE:; return;
label_9AEF:; return;
label_9AF0:; return;
label_9AF1:; return;
label_9AF2:; return;
label_9AF3:; return;
label_9AF4:; return;
label_9AF5:; return;
label_9AF6:; return;
label_9AF7:; return;
label_9AF8:; return;
label_9AF9:; return;
label_9AFA:; return;
label_9AFB:; return;
label_9AFC:; return;
label_9AFD:; return;
label_9AFE:; return;
label_9AFF:; return;
label_9B00:; return;
label_9B01:; return;
label_9B04:; return;
label_9B07:; return;
label_9B0A:; return;
label_9B0B:; return;
label_9B0C:; return;
label_9B0F:; return;
label_9B12:; return;
label_9B15:; return;
label_9B18:; return;
label_9B1B:; return;
label_9B1E:; return;
label_9B21:; return;
label_9B23:; return;
label_9B26:; return;
label_9B28:; return;
label_9B2A:; return;
label_9B2C:; return;
label_9B2F:; return;
label_9B32:; return;
label_9B35:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3E:; return;
label_9B41:; return;
label_9B42:; return;
label_9B44:; return;
label_9B46:; return;
label_9B49:; return;
label_9B4A:; return;
label_9B4C:; return;
label_9B4D:; return;
label_9B4F:; return;
label_9B52:; return;
label_9B55:; return;
label_9B58:; return;
label_9B5A:; return;
label_9B5B:; return;
label_9B5D:; return;
label_9B60:; return;
label_9B63:; return;
label_9B66:; return;
label_9B68:; return;
label_9B69:; return;
label_9B6B:; return;
label_9B6E:; return;
label_9B71:; return;
label_9B73:; return;
label_9B75:; return;
label_9B76:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7B:; return;
label_9B7C:; return;
label_9B7F:; return;
label_9B80:; return;
label_9B82:; return;
label_9B83:; return;
label_9B84:; return;
label_9B86:; return;
label_9B87:; return;
label_9B89:; return;
label_9B8B:; return;
label_9B8D:; return;
label_9B8E:; return;
label_9B8F:; return;
label_9B90:; return;
label_9B93:; return;
label_9B96:; return;
label_9B99:; return;
label_9B9B:; return;
label_9B9C:; return;
label_9B9D:; return;
label_9B9E:; return;
label_9B9F:; return;
label_9BA0:; return;
label_9BA1:; return;
label_9BA2:; return;
label_9BA3:; return;
label_9BA4:; return;
label_9BA5:; return;
label_9BA6:; return;
label_9BA7:; return;
label_9BA8:; return;
label_9BA9:; return;
label_9BAA:; return;
label_9BAB:; return;
label_9BAC:; return;
label_9BAD:; return;
label_9BAE:; return;
label_9BAF:; return;
label_9BB0:; return;
label_9BB1:; return;
label_9BB2:; return;
label_9BB3:; return;
label_9BB4:; return;
label_9BB5:; return;
label_9BB6:; return;
label_9BB7:; return;
label_9BB8:; return;
label_9BB9:; return;
label_9BBA:; return;
label_9BBB:; return;
label_9BBC:; return;
label_9BBD:; return;
label_9BBE:; return;
label_9BBF:; return;
label_9BC0:; return;
label_9BC1:; return;
label_9BC2:; return;
label_9BC3:; return;
label_9BC4:; return;
label_9BC5:; return;
label_9BC6:; return;
label_9BC7:; return;
label_9BC8:; return;
label_9BC9:; return;
label_9BCA:; return;
label_9BCB:; return;
label_9BCC:; return;
label_9BCD:; return;
label_9BCE:; return;
label_9BCF:; return;
label_9BD0:; return;
label_9BD1:; return;
label_9BD2:; return;
label_9BD3:; return;
label_9BD4:; return;
label_9BD6:; return;
label_9BD8:; return;
label_9BD9:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDD:; return;
label_9BDF:; return;
label_9BE1:; return;
label_9BE2:; return;
label_9BE3:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BE8:; return;
label_9BE9:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BEF:; return;
label_9BF0:; return;
label_9BF1:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF7:; return;
label_9BF8:; return;
label_9BF9:; return;
label_9BFA:; return;
label_9BFC:; return;
label_9BFE:; return;
label_9BFF:; return;
label_9C00:; return;
label_9C01:; return;
label_9C04:; return;
label_9C07:; return;
label_9C09:; return;
label_9C0A:; return;
label_9C0B:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C12:; return;
label_9C14:; return;
label_9C15:; return;
label_9C18:; return;
label_9C1B:; return;
label_9C1E:; return;
label_9C21:; return;
label_9C23:; return;
label_9C26:; return;
label_9C29:; return;
label_9C2B:; return;
label_9C6C:; return;
label_9C6E:; return;
label_9C71:; return;
label_9C73:; return;
label_9C74:; return;
label_9C76:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7B:; return;
label_9C7C:; return;
label_9C7D:; return;
label_9C7F:; return;
label_9C80:; return;
label_9C81:; return;
label_9C82:; return;
label_9C84:; return;
label_9C85:; return;
label_9C87:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C8E:; return;
label_9C8F:; return;
label_9C90:; return;
label_9C92:; return;
label_9C95:; return;
label_9C98:; return;
label_9C99:; return;
label_9C9B:; return;
label_9C9C:; return;
label_9C9D:; return;
label_9C9E:; return;
label_9C9F:; return;
label_9CA0:; return;
label_9CA1:; return;
label_9CA2:; return;
label_9CA3:; return;
label_9CA4:; return;
label_9CA5:; return;
label_9CA6:; return;
label_9CA7:; return;
label_9CA8:; return;
label_9CA9:; return;
label_9CAA:; return;
label_9CAB:; return;
label_9CAC:; return;
label_9CAD:; return;
label_9CAE:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB1:; return;
label_9CB2:; return;
label_9CB3:; return;
label_9CB4:; return;
label_9CB5:; return;
label_9CB6:; return;
label_9CB7:; return;
label_9CB8:; return;
label_9CB9:; return;
label_9CBA:; return;
label_9CBB:; return;
label_9CBC:; return;
label_9CBD:; return;
label_9CBE:; return;
label_9CBF:; return;
label_9CC0:; return;
label_9CC1:; return;
label_9CC2:; return;
label_9CC3:; return;
label_9CC4:; return;
label_9CC5:; return;
label_9CC6:; return;
label_9CC7:; return;
label_9CC8:; return;
label_9CC9:; return;
label_9CCA:; return;
label_9CCB:; return;
label_9CCC:; return;
label_9CCD:; return;
label_9CCE:; return;
label_9CCF:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD2:; return;
label_9CD3:; return;
label_9CD5:; return;
label_9CD8:; return;
label_9CD9:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE1:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CE9:; return;
label_9CEA:; return;
label_9CEC:; return;
label_9CEE:; return;
label_9CF0:; return;
label_9CF1:; return;
label_9CF2:; return;
label_9CF4:; return;
label_9CF6:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D01:; return;
label_9D03:; return;
label_9D06:; return;
label_9D08:; return;
label_9D0A:; return;
label_9D0B:; return;
label_9D0C:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D12:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1B:; return;
label_9D1C:; return;
label_9D1E:; return;
label_9D20:; return;
label_9D22:; return;
label_9D24:; return;
label_9D27:; return;
label_9D2A:; return;
label_9D2C:; return;
label_9D2F:; return;
label_9D32:; return;
label_9D35:; return;
label_9D38:; return;
label_9D3B:; return;
label_9D3E:; return;
label_9D41:; return;
label_9D42:; return;
label_9D44:; return;
label_9D46:; return;
label_9D49:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D4F:; return;
label_9D52:; return;
label_9D54:; return;
label_9D57:; return;
label_9D5A:; return;
label_9D5C:; return;
label_9D5E:; return;
label_9D61:; return;
label_9D63:; return;
label_9D66:; return;
label_9D68:; return;
label_9D69:; return;
label_9D6B:; return;
label_9D6D:; return;
label_9D70:; return;
label_9D72:; return;
label_9D73:; return;
label_9D74:; return;
label_9D76:; return;
label_9D78:; return;
label_9D7A:; return;
label_9D7B:; return;
label_9D7E:; return;
label_9D80:; return;
label_9D81:; return;
label_9D82:; return;
label_9D83:; return;
label_9D84:; return;
label_9D85:; return;
label_9D86:; return;
label_9D88:; return;
label_9D8A:; return;
label_9D8C:; return;
label_9D8E:; return;
label_9D8F:; return;
label_9D90:; return;
label_9D91:; return;
label_9D92:; return;
label_9D95:; return;
label_9D98:; return;
label_9D9A:; return;
label_9D9B:; return;
label_9D9C:; return;
label_9D9D:; return;
label_9D9E:; return;
label_9D9F:; return;
label_9DA0:; return;
label_9DA1:; return;
label_9DA2:; return;
label_9DA3:; return;
label_9DA4:; return;
label_9DA5:; return;
label_9DA6:; return;
label_9DA7:; return;
label_9DA8:; return;
label_9DA9:; return;
label_9DAA:; return;
label_9DAB:; return;
label_9DAC:; return;
label_9DAD:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB0:; return;
label_9DB1:; return;
label_9DB2:; return;
label_9DB3:; return;
label_9DB4:; return;
label_9DB5:; return;
label_9DB6:; return;
label_9DB7:; return;
label_9DB8:; return;
label_9DB9:; return;
label_9DBA:; return;
label_9DBB:; return;
label_9DBC:; return;
label_9DBD:; return;
label_9DBE:; return;
label_9DBF:; return;
label_9DC0:; return;
label_9DC1:; return;
label_9DC2:; return;
label_9DC3:; return;
label_9DC4:; return;
label_9DC5:; return;
label_9DC6:; return;
label_9DC7:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCA:; return;
label_9DCB:; return;
label_9DCC:; return;
label_9DCD:; return;
label_9DCE:; return;
label_9DCF:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD3:; return;
label_9DD5:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DD9:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDD:; return;
label_9DDF:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE7:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEA:; return;
label_9DEC:; return;
label_9DEE:; return;
label_9DF0:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF6:; return;
label_9DF7:; return;
label_9DF8:; return;
label_9DF9:; return;
label_9DFA:; return;
label_9DFB:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9DFF:; return;
label_9E00:; return;
label_9E01:; return;
label_9E03:; return;
label_9E06:; return;
label_9E08:; return;
label_9E0A:; return;
label_9E0B:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E13:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1B:; return;
label_9E1D:; return;
label_9E20:; return;
label_9E21:; return;
label_9E23:; return;
label_9E26:; return;
label_9E29:; return;
label_9E2B:; return;
label_9E5A:; return;
label_9E5C:; return;
label_9E5E:; return;
label_9E61:; return;
label_9E62:; return;
label_9E64:; return;
label_9E67:; return;
label_9E69:; return;
label_9E6C:; return;
label_9E6F:; return;
label_9E71:; return;
label_9E73:; return;
label_9E75:; return;
label_9E76:; return;
label_9E78:; return;
label_9E7A:; return;
label_9E7C:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E82:; return;
label_9E83:; return;
label_9E85:; return;
label_9E86:; return;
label_9E88:; return;
label_9E89:; return;
label_9E8A:; return;
label_9E8B:; return;
label_9ECB:; return;
label_9ECC:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ECF:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED5:; return;
label_9ED8:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE1:; return;
label_9EE2:; return;
label_9EE4:; return;
label_9EE6:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEC:; return;
label_9EEE:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF4:; return;
label_9EF6:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFC:; return;
label_9EFE:; return;
label_9F01:; return;
label_9F02:; return;
label_9F03:; return;
label_9F04:; return;
label_9F06:; return;
label_9F07:; return;
label_9F08:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0E:; return;
label_9F10:; return;
label_9F12:; return;
label_9F14:; return;
label_9F16:; return;
label_9F18:; return;
label_9F1A:; return;
label_9F1C:; return;
label_9F1E:; return;
label_9F20:; return;
label_9F22:; return;
label_9F24:; return;
label_9F26:; return;
label_9F28:; return;
label_9F2A:; return;
label_9F2C:; return;
label_9F2E:; return;
label_9F30:; return;
label_9F32:; return;
label_9F34:; return;
label_9F36:; return;
label_9F38:; return;
label_9F3A:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F42:; return;
label_9F44:; return;
label_9F46:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4C:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F52:; return;
label_9F54:; return;
label_9F56:; return;
label_9F58:; return;
label_9F5A:; return;
label_9F5C:; return;
label_9F5E:; return;
label_9F60:; return;
label_9F62:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F68:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6D:; return;
label_9F6E:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F75:; return;
label_9F77:; return;
label_9F79:; return;
label_9F7A:; return;
label_9F7D:; return;
label_9F7F:; return;
label_9F81:; return;
label_9F82:; return;
label_9F84:; return;
label_9F86:; return;
label_9F87:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8C:; return;
label_9F8E:; return;
label_9F8F:; return;
label_9F90:; return;
label_9F92:; return;
label_9F94:; return;
label_9F96:; return;
label_9F98:; return;
label_9F99:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9D:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA3:; return;
label_9FA4:; return;
label_9FA5:; return;
label_9FA6:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
label_9FAB:; return;
label_9FAC:; return;
label_9FAD:; return;
label_9FAE:; return;
label_9FAF:; return;
label_9FB0:; return;
label_9FB1:; return;
label_9FB2:; return;
label_9FB3:; return;
label_9FB4:; return;
label_9FB5:; return;
label_9FB6:; return;
label_9FB7:; return;
label_9FB8:; return;
label_9FB9:; return;
label_9FBA:; return;
label_9FBB:; return;
label_9FBC:; return;
label_9FBD:; return;
label_9FBE:; return;
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
label_9FC2:; return;
label_9FC3:; return;
label_9FC4:; return;
label_9FC5:; return;
label_9FC6:; return;
label_9FC7:; return;
label_9FC8:; return;
label_9FC9:; return;
label_9FCA:; return;
label_9FCB:; return;
label_9FCC:; return;
label_9FCD:; return;
label_9FCE:; return;
label_9FCF:; return;
label_9FD0:; return;
label_9FD1:; return;
label_9FD2:; return;
label_9FD4:; return;
label_9FD6:; return;
label_9FD8:; return;
label_9FD9:; return;
label_9FDA:; return;
label_9FDC:; return;
label_9FDE:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEC:; return;
label_9FEE:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF4:; return;
label_9FF6:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFC:; return;
label_9FFE:; return;
label_A000:; return;
label_A003:; return;
label_A006:; return;
label_A009:; return;
label_A00C:; return;
label_A00F:; return;
label_A012:; return;
label_A015:; return;
label_A018:; return;
label_A01B:; return;
label_A01D:; return;
label_A01F:; return;
label_A021:; return;
label_A023:; return;
label_A025:; return;
label_A027:; return;
label_A029:; return;
label_A02B:; return;
label_A02D:; return;
label_A02F:; return;
label_A031:; return;
label_A033:; return;
label_A034:; return;
label_A036:; return;
label_A039:; return;
label_A03B:; return;
label_A03D:; return;
label_A040:; return;
label_A042:; return;
label_A044:; return;
label_A046:; return;
label_A048:; return;
label_A04A:; return;
label_A04C:; return;
label_A04E:; return;
label_A050:; return;
label_A052:; return;
label_A054:; return;
label_A057:; return;
label_A058:; return;
label_A05A:; return;
label_A05D:; return;
label_A05E:; return;
label_A05F:; return;
label_A061:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A068:; return;
label_A06A:; return;
label_A06C:; return;
label_A06F:; return;
label_A071:; return;
label_A072:; return;
label_A074:; return;
label_A076:; return;
label_A079:; return;
label_A07C:; return;
label_A07F:; return;
label_A080:; return;
label_A082:; return;
label_A085:; return;
label_A087:; return;
label_A08A:; return;
label_A08B:; return;
label_A08C:; return;
label_A08E:; return;
label_A08F:; return;
label_A090:; return;
label_A092:; return;
label_A094:; return;
label_A096:; return;
label_A098:; return;
label_A09A:; return;
label_A09C:; return;
label_A09D:; return;
label_A09F:; return;
label_A0A2:; return;
label_A0A3:; return;
label_A0A6:; return;
label_A0A8:; return;
label_A0AB:; return;
label_A0AD:; return;
label_A0AF:; return;
label_A0B1:; return;
label_A0B4:; return;
label_A0B5:; return;
label_A0B8:; return;
label_A0BB:; return;
label_A0BE:; return;
label_A0C1:; return;
label_A0C4:; return;
label_A0C7:; return;
label_A0CA:; return;
label_A0CD:; return;
label_A0CF:; return;
label_A0D0:; return;
label_A0D1:; return;
label_A0D3:; return;
label_A0D4:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0DA:; return;
label_A0DC:; return;
label_A0DE:; return;
label_A0E0:; return;
label_A0E2:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E9:; return;
label_A0EC:; return;
label_A0ED:; return;
label_A0EF:; return;
label_A0F1:; return;
label_A0F3:; return;
label_A0F5:; return;
label_A0F6:; return;
label_A0F7:; return;
label_A0F8:; return;
label_A0FB:; return;
label_A0FE:; return;
label_A0FF:; return;
label_A100:; return;
label_A102:; return;
label_A104:; return;
label_A105:; return;
label_A107:; return;
label_A109:; return;
label_A10B:; return;
label_A10D:; return;
label_A10F:; return;
label_A111:; return;
label_A113:; return;
label_A115:; return;
label_A117:; return;
label_A119:; return;
label_A11B:; return;
label_A11D:; return;
label_A11F:; return;
label_A121:; return;
label_A123:; return;
label_A125:; return;
label_A127:; return;
label_A129:; return;
label_A12B:; return;
label_A12D:; return;
label_A12F:; return;
label_A131:; return;
label_A133:; return;
label_A135:; return;
label_A136:; return;
label_A139:; return;
label_A13A:; return;
label_A13C:; return;
label_A13E:; return;
label_A13F:; return;
label_A141:; return;
label_A143:; return;
label_A144:; return;
label_A145:; return;
label_A146:; return;
label_A147:; return;
label_A14A:; return;
label_A14D:; return;
label_A14E:; return;
label_A150:; return;
label_A152:; return;
label_A153:; return;
label_A155:; return;
label_A156:; return;
label_A158:; return;
label_A15A:; return;
label_A15B:; return;
label_A15D:; return;
label_A15F:; return;
label_A161:; return;
label_A163:; return;
label_A165:; return;
label_A166:; return;
label_A169:; return;
label_A16B:; return;
label_A16D:; return;
label_A16F:; return;
label_A171:; return;
label_A174:; return;
label_A176:; return;
label_A179:; return;
label_A17B:; return;
label_A17D:; return;
label_A180:; return;
label_A182:; return;
label_A185:; return;
label_A187:; return;
label_A18A:; return;
label_A18D:; return;
label_A190:; return;
label_A193:; return;
label_A195:; return;
label_A197:; return;
label_A198:; return;
label_A19B:; return;
label_A19E:; return;
label_A1A1:; return;
label_A1A4:; return;
label_A1A6:; return;
label_A1A8:; return;
label_A1AA:; return;
label_A1AC:; return;
label_A1AF:; return;
label_A1B1:; return;
label_A1B2:; return;
label_A1B4:; return;
label_A1B6:; return;
label_A1B9:; return;
label_A1BC:; return;
label_A1BE:; return;
label_A1C0:; return;
label_A1C2:; return;
label_A1C4:; return;
label_A1C6:; return;
label_A1C8:; return;
label_A1CA:; return;
label_A1CC:; return;
label_A1CE:; return;
label_A1D0:; return;
label_A1D2:; return;
label_A1D3:; return;
label_A1D6:; return;
label_A1D7:; return;
label_A1DA:; return;
label_A1DC:; return;
label_A1DE:; return;
label_A1E0:; return;
label_A1E3:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E7:; return;
label_A1E9:; return;
label_A1EB:; return;
label_A1EE:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F5:; return;
label_A1F7:; return;
label_A1F9:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A201:; return;
label_A203:; return;
label_A206:; return;
label_A208:; return;
label_A20B:; return;
label_A20D:; return;
label_A210:; return;
label_A213:; return;
label_A216:; return;
label_A218:; return;
label_A21B:; return;
label_A21E:; return;
label_A221:; return;
label_A224:; return;
label_A227:; return;
label_A229:; return;
label_A22C:; return;
label_A22E:; return;
label_A230:; return;
label_A232:; return;
label_A234:; return;
label_A236:; return;
label_A238:; return;
label_A23A:; return;
label_A23C:; return;
label_A23F:; return;
label_A241:; return;
label_A244:; return;
label_A247:; return;
label_A24A:; return;
label_A24B:; return;
label_A24D:; return;
label_A24F:; return;
label_A251:; return;
label_A253:; return;
label_A256:; return;
label_A257:; return;
label_A259:; return;
label_A25C:; return;
label_A25D:; return;
label_A25F:; return;
label_A262:; return;
label_A264:; return;
label_A267:; return;
label_A26A:; return;
label_A26B:; return;
label_A26C:; return;
label_A26E:; return;
label_A270:; return;
label_A271:; return;
label_A274:; return;
label_A276:; return;
label_A279:; return;
label_A27B:; return;
label_A27E:; return;
label_A280:; return;
label_A282:; return;
label_A284:; return;
label_A287:; return;
label_A28A:; return;
label_A28B:; return;
label_A28C:; return;
label_A28D:; return;
label_A28E:; return;
label_A291:; return;
label_A294:; return;
label_A296:; return;
label_A298:; return;
label_A29B:; return;
label_A29D:; return;
label_A2A0:; return;
label_A2A2:; return;
label_A2A5:; return;
label_A2A7:; return;
label_A2AA:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B3:; return;
label_A2B6:; return;
label_A2B8:; return;
label_A2BA:; return;
label_A2BD:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C9:; return;
label_A2CC:; return;
label_A2CE:; return;
label_A2CF:; return;
label_A2D0:; return;
label_A2D3:; return;
label_A2D5:; return;
label_A2D7:; return;
label_A2D9:; return;
label_A2DB:; return;
label_A2DD:; return;
label_A2DF:; return;
label_A2E1:; return;
label_A2E3:; return;
label_A2E5:; return;
label_A2E7:; return;
label_A2E9:; return;
label_A2EB:; return;
label_A2ED:; return;
label_A2EF:; return;
label_A2F1:; return;
label_A2F3:; return;
label_A2F5:; return;
label_A2F6:; return;
label_A2F8:; return;
label_A2F9:; return;
label_A2FB:; return;
label_A2FD:; return;
label_A2FF:; return;
label_A301:; return;
label_A303:; return;
label_A305:; return;
label_A307:; return;
label_A309:; return;
label_A30B:; return;
label_A30D:; return;
label_A30F:; return;
label_A312:; return;
label_A314:; return;
label_A316:; return;
label_A318:; return;
label_A31A:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A326:; return;
label_A329:; return;
label_A32B:; return;
label_A32D:; return;
label_A32F:; return;
label_A331:; return;
label_A332:; return;
label_A334:; return;
label_A336:; return;
label_A338:; return;
label_A33A:; return;
label_A33C:; return;
label_A33F:; return;
label_A341:; return;
label_A343:; return;
label_A345:; return;
label_A348:; return;
label_A349:; return;
label_A34C:; return;
label_A34F:; return;
label_A352:; return;
label_A354:; return;
label_A355:; return;
label_A357:; return;
label_A359:; return;
label_A35A:; return;
label_A35C:; return;
label_A35E:; return;
label_A360:; return;
label_A362:; return;
label_A364:; return;
label_A366:; return;
label_A367:; return;
label_A369:; return;
label_A36B:; return;
label_A36D:; return;
label_A36F:; return;
label_A371:; return;
label_A373:; return;
label_A375:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37D:; return;
label_A380:; return;
label_A382:; return;
label_A384:; return;
label_A386:; return;
label_A388:; return;
label_A38B:; return;
label_A38D:; return;
label_A38F:; return;
label_A392:; return;
label_A394:; return;
label_A397:; return;
label_A399:; return;
label_A39C:; return;
label_A39E:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A6:; return;
label_A3A9:; return;
label_A3AB:; return;
label_A3AE:; return;
label_A3B0:; return;
label_A3B3:; return;
label_A3B6:; return;
label_A3B9:; return;
label_A3BC:; return;
label_A3BF:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C6:; return;
label_A3C8:; return;
label_A3CA:; return;
label_A3CD:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D3:; return;
label_A3D5:; return;
label_A3D7:; return;
label_A3DA:; return;
label_A3DC:; return;
label_A3DE:; return;
label_A3E0:; return;
label_A3E3:; return;
label_A3E5:; return;
label_A3E6:; return;
label_A3E8:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3EE:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F7:; return;
label_A3F8:; return;
label_A3FA:; return;
label_A3FB:; return;
label_A3FC:; return;
label_A3FD:; return;
label_A3FE:; return;
label_A3FF:; return;
label_A400:; return;
label_A401:; return;
label_A403:; return;
label_A405:; return;
label_A406:; return;
label_A408:; return;
label_A409:; return;
label_A40A:; return;
label_A40B:; return;
label_A40C:; return;
label_A40D:; return;
label_A40E:; return;
label_A40F:; return;
label_A410:; return;
label_A411:; return;
label_A412:; return;
label_A413:; return;
label_A414:; return;
label_A415:; return;
label_A416:; return;
label_A417:; return;
label_A418:; return;
label_A419:; return;
label_A41A:; return;
label_A41B:; return;
label_A41C:; return;
label_A41D:; return;
label_A41E:; return;
label_A41F:; return;
label_A420:; return;
label_A421:; return;
label_A422:; return;
label_A423:; return;
label_A424:; return;
label_A425:; return;
label_A426:; return;
label_A427:; return;
label_A428:; return;
label_A429:; return;
label_A42A:; return;
label_A42B:; return;
label_A42C:; return;
label_A42D:; return;
label_A42E:; return;
label_A42F:; return;
label_A430:; return;
label_A432:; return;
label_A435:; return;
label_A436:; return;
label_A439:; return;
label_A43B:; return;
label_A43E:; return;
label_A441:; return;
label_A444:; return;
label_A445:; return;
label_A448:; return;
label_A449:; return;
label_A44C:; return;
label_A44D:; return;
label_A450:; return;
label_A451:; return;
label_A454:; return;
label_A455:; return;
label_A458:; return;
label_A459:; return;
label_A45C:; return;
label_A45D:; return;
label_A460:; return;
label_A461:; return;
label_A464:; return;
label_A465:; return;
label_A468:; return;
label_A46A:; return;
label_A46B:; return;
label_A46C:; return;
label_A46D:; return;
label_A46E:; return;
label_A46F:; return;
label_A470:; return;
label_A472:; return;
label_A473:; return;
label_A475:; return;
label_A476:; return;
label_A477:; return;
label_A479:; return;
label_A47A:; return;
label_A47B:; return;
label_A47C:; return;
label_A47D:; return;
label_A47E:; return;
label_A47F:; return;
label_A480:; return;
label_A481:; return;
label_A482:; return;
label_A483:; return;
label_A484:; return;
label_A485:; return;
label_A486:; return;
label_A487:; return;
label_A488:; return;
label_A489:; return;
label_A48A:; return;
label_A48B:; return;
label_A48C:; return;
label_A48D:; return;
label_A48E:; return;
label_A48F:; return;
label_A490:; return;
label_A491:; return;
label_A492:; return;
label_A493:; return;
label_A494:; return;
label_A495:; return;
label_A496:; return;
label_A497:; return;
label_A49A:; return;
label_A49B:; return;
label_A49C:; return;
label_A49D:; return;
label_A49E:; return;
label_A49F:; return;
label_A4A0:; return;
label_A4A2:; return;
label_A4A4:; return;
label_A4A6:; return;
label_A4A8:; return;
label_A4AA:; return;
label_A4AC:; return;
label_A4AF:; return;
label_A4B1:; return;
label_A4B3:; return;
label_A4B5:; return;
label_A4B7:; return;
label_A4B9:; return;
label_A4BB:; return;
label_A4BD:; return;
label_A4BF:; return;
label_A4C1:; return;
label_A4C3:; return;
label_A4C6:; return;
label_A4C8:; return;
label_A4CB:; return;
label_A4CD:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D5:; return;
label_A4D7:; return;
label_A4DA:; return;
label_A4DD:; return;
label_A4E0:; return;
label_A4E2:; return;
label_A4E5:; return;
label_A4E7:; return;
label_A4EA:; return;
label_A4ED:; return;
label_A4F0:; return;
label_A4F3:; return;
label_A4F6:; return;
label_A4F9:; return;
label_A4FC:; return;
label_A4FD:; return;
label_A4FF:; return;
label_A500:; return;
label_A502:; return;
label_A504:; return;
label_A506:; return;
label_A508:; return;
label_A50A:; return;
label_A50C:; return;
label_A50E:; return;
label_A510:; return;
label_A511:; return;
label_A513:; return;
label_A515:; return;
label_A517:; return;
label_A51A:; return;
label_A51C:; return;
label_A51E:; return;
label_A520:; return;
label_A522:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52E:; return;
label_A531:; return;
label_A533:; return;
label_A536:; return;
label_A538:; return;
label_A53A:; return;
label_A53C:; return;
label_A53E:; return;
label_A53F:; return;
label_A542:; return;
label_A545:; return;
label_A546:; return;
label_A549:; return;
label_A54C:; return;
label_A54F:; return;
label_A551:; return;
label_A553:; return;
label_A556:; return;
label_A559:; return;
label_A55C:; return;
label_A55F:; return;
label_A561:; return;
label_A563:; return;
label_A566:; return;
label_A567:; return;
label_A568:; return;
label_A56B:; return;
label_A56C:; return;
label_A56F:; return;
label_A570:; return;
label_A573:; return;
label_A574:; return;
label_A577:; return;
label_A578:; return;
label_A57A:; return;
label_A57C:; return;
label_A57F:; return;
label_A582:; return;
label_A585:; return;
label_A586:; return;
label_A587:; return;
label_A589:; return;
label_A58B:; return;
label_A58D:; return;
label_A58E:; return;
label_A591:; return;
label_A594:; return;
label_A595:; return;
label_A596:; return;
label_A597:; return;
label_A599:; return;
label_A59A:; return;
label_A59D:; return;
label_A5A0:; return;
label_A5A2:; return;
label_A5A4:; return;
label_A5A6:; return;
label_A5A8:; return;
label_A5AA:; return;
label_A5AC:; return;
label_A5AF:; return;
label_A5B1:; return;
label_A5B2:; return;
label_A5B4:; return;
label_A5B5:; return;
label_A5B7:; return;
label_A5B8:; return;
label_A5BA:; return;
label_A5BC:; return;
label_A5BE:; return;
label_A5C0:; return;
label_A5C2:; return;
label_A5C3:; return;
label_A5C4:; return;
label_A5C5:; return;
label_A5C6:; return;
label_A5C7:; return;
label_A5C8:; return;
label_A5C9:; return;
label_A5CA:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5CF:; return;
label_A5D1:; return;
label_A5D2:; return;
label_A5D5:; return;
label_A5D8:; return;
label_A5DB:; return;
label_A5DD:; return;
label_A5DF:; return;
label_A5E1:; return;
label_A5E3:; return;
label_A5E5:; return;
label_A5E7:; return;
label_A5E9:; return;
label_A5EC:; return;
label_A5EE:; return;
label_A5F1:; return;
label_A5F3:; return;
label_A5F5:; return;
label_A5F7:; return;
label_A5F9:; return;
label_A5FB:; return;
label_A5FD:; return;
label_A5FF:; return;
label_A601:; return;
label_A603:; return;
label_A605:; return;
label_A608:; return;
label_A60B:; return;
label_A60E:; return;
label_A610:; return;
label_A613:; return;
label_A615:; return;
label_A618:; return;
label_A61A:; return;
label_A61C:; return;
label_A61E:; return;
label_A620:; return;
label_A621:; return;
label_A623:; return;
label_A625:; return;
label_A627:; return;
label_A629:; return;
label_A62B:; return;
label_A62E:; return;
label_A630:; return;
label_A633:; return;
label_A635:; return;
label_A637:; return;
label_A639:; return;
label_A63A:; return;
label_A63C:; return;
label_A63E:; return;
label_A63F:; return;
label_A641:; return;
label_A643:; return;
label_A645:; return;
label_A647:; return;
label_A648:; return;
label_A649:; return;
label_A64B:; return;
label_A64C:; return;
label_A64F:; return;
label_A652:; return;
label_A655:; return;
label_A656:; return;
label_A658:; return;
label_A65B:; return;
label_A65D:; return;
label_A65F:; return;
label_A661:; return;
label_A664:; return;
label_A667:; return;
label_A66A:; return;
label_A66D:; return;
label_A66F:; return;
label_A672:; return;
label_A675:; return;
label_A677:; return;
label_A67A:; return;
label_A67D:; return;
label_A680:; return;
label_A683:; return;
label_A686:; return;
label_A689:; return;
label_A68C:; return;
label_A68F:; return;
label_A692:; return;
label_A695:; return;
label_A697:; return;
label_A699:; return;
label_A69C:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A6:; return;
label_A6A9:; return;
label_A6AB:; return;
label_A6AE:; return;
label_A6B1:; return;
label_A6B4:; return;
label_A6B7:; return;
label_A6BA:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C5:; return;
label_A6C8:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6D0:; return;
label_A6D3:; return;
label_A6D6:; return;
label_A6D9:; return;
label_A6DB:; return;
label_A6DD:; return;
label_A6E0:; return;
label_A6E3:; return;
label_A6E6:; return;
label_A6E9:; return;
label_A6EC:; return;
label_A6EF:; return;
label_A6F2:; return;
label_A6F5:; return;
label_A6F8:; return;
label_A6FB:; return;
label_A6FE:; return;
label_A701:; return;
label_A704:; return;
label_A707:; return;
label_A709:; return;
label_A70B:; return;
label_A70E:; return;
label_A711:; return;
label_A713:; return;
label_A715:; return;
label_A718:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A724:; return;
label_A727:; return;
label_A72A:; return;
label_A72D:; return;
label_A730:; return;
label_A733:; return;
label_A736:; return;
label_A739:; return;
label_A73C:; return;
label_A73F:; return;
label_A741:; return;
label_A743:; return;
label_A745:; return;
label_A748:; return;
label_A74B:; return;
label_A74E:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75D:; return;
label_A760:; return;
label_A763:; return;
label_A766:; return;
label_A769:; return;
label_A76B:; return;
label_A76E:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A77A:; return;
label_A77D:; return;
label_A77F:; return;
label_A781:; return;
label_A784:; return;
label_A787:; return;
label_A78A:; return;
label_A78D:; return;
label_A790:; return;
label_A793:; return;
label_A795:; return;
label_A798:; return;
label_A79B:; return;
label_A79D:; return;
label_A7A0:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A8:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7B0:; return;
label_A7B3:; return;
label_A7B6:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C4:; return;
label_A7C7:; return;
label_A7CA:; return;
label_A7CD:; return;
label_A7D0:; return;
label_A7D3:; return;
label_A7D5:; return;
label_A7D8:; return;
label_A7DB:; return;
label_A7DE:; return;
label_A7E1:; return;
label_A7E4:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EC:; return;
label_A7EF:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7FA:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A802:; return;
label_A803:; return;
label_A804:; return;
label_A805:; return;
label_A806:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A811:; return;
label_A812:; return;
label_A813:; return;
label_A814:; return;
label_A815:; return;
label_A816:; return;
label_A817:; return;
label_A818:; return;
label_A819:; return;
label_A81A:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A820:; return;
label_A821:; return;
label_A822:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A82A:; return;
label_A82B:; return;
label_A82D:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A832:; return;
label_A833:; return;
label_A834:; return;
label_A835:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A841:; return;
label_A843:; return;
label_A844:; return;
label_A845:; return;
label_A846:; return;
label_A847:; return;
label_A848:; return;
label_A849:; return;
label_A84A:; return;
label_A84B:; return;
label_A84C:; return;
label_A84D:; return;
label_A84E:; return;
label_A84F:; return;
label_A850:; return;
label_A851:; return;
label_A852:; return;
label_A853:; return;
label_A854:; return;
label_A855:; return;
label_A856:; return;
label_A857:; return;
label_A858:; return;
label_A859:; return;
label_A85A:; return;
label_A85B:; return;
label_A85C:; return;
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
label_A86A:; return;
label_A86B:; return;
label_A86C:; return;
label_A86D:; return;
label_A86E:; return;
label_A86F:; return;
label_A870:; return;
label_A871:; return;
label_A872:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
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
label_A88F:; return;
label_A890:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A1:; return;
label_A8A2:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8A8:; return;
label_A8A9:; return;
label_A8AA:; return;
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
label_A8B9:; return;
label_A8BA:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C0:; return;
label_A8C1:; return;
label_A8C2:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C7:; return;
label_A8C8:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CE:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D1:; return;
label_A8D2:; return;
label_A8D3:; return;
label_A8D5:; return;
label_A8D6:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DA:; return;
label_A8DB:; return;
label_A8DC:; return;
}

void func_B9AD_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9AD_b4");
#endif
label_B9AD:;
    /* $B9AD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9AD); return;
}

void func_98A9_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A9_b4");
#endif
label_98A9:;
    /* $98A9: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_98AA:;
    /* $98AA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x98AA); return;
}

void func_A504_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A504_b4");
#endif
label_A504:;
    /* $A504: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04D6), 4); return; }
label_A506:;
    /* $A506: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04D8), 4); return; }
label_A508:;
    /* $A508: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A57A; }
label_A50A:;
    /* $A50A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04BC), 4); return; }
label_A50C:;
    /* $A50C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A53E; }
label_A50E:;
    /* $A50E: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04C0), 4); return; }
label_A510:;
    /* $A510: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A511:;
    /* $A511: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A513:;
    /* $A513: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A515:;
    /* $A515: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A517:;
    /* $A517: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x72A5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A51A:;
    /* $A51A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_A51C:;
    /* $A51C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A53E; }
label_A51E:;
    /* $A51E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A520:;
    /* $A520: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A522:;
    /* $A522: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A524:;
    /* $A524: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A526:;
    /* $A526: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_A528:;
    /* $A528: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A52A:;
    /* $A52A: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_A52C:;
    /* $A52C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x10); FLAG_NZ(g_cpu.X);
label_A52E:;
    /* $A52E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0100 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A531:;
    /* $A531: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A536; }
label_A533:;
    /* $A533: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0535); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x853F, 4)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA533, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A536:;
    /* $A536: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A538:;
    /* $A538: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A52C;
    }
label_A53A:;
    /* $A53A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A53C:;
    /* $A53C: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_A53E:;
    /* $A53E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A53F:;
    /* $A53F: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0108 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A542:;
    /* $A542: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A545:;
    /* $A545: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A546:;
    /* $A546: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x010C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A549:;
    /* $A549: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x010C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54C:;
    /* $A54C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x860F + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A54F:;
    /* $A54F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A58D; }
label_A551:;
    /* $A551: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 9D */ maybe_trigger_vblank(5); nes_write((0x010C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A556:;
    /* $A556: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0104 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0104 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A55C:;
    /* $A55C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x860E + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A55F:;
    /* $A55F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A566; }
label_A561:;
    /* $A561: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A563:;
    /* $A563: 9D */ maybe_trigger_vblank(5); nes_write((0x0104 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A566:;
    /* $A566: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A567:;
    /* $A567: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A568:;
    /* $A568: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0104 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A56B:;
    /* $A56B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A56C:;
    /* $A56C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8611 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A56F:;
    /* $A56F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8611 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A573:;
    /* $A573: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A574:;
    /* $A574: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8610 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A577:;
    /* $A577: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A578:;
    /* $A578: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A57A:;
    /* $A57A: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A57C:;
    /* $A57C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x858E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A57F:;
    /* $A57F: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A582:;
    /* $A582: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A585:;
    /* $A585: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A586:;
    /* $A586: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A587:;
    /* $A587: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A589:;
    /* $A589: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A57C;
    }
label_A58B:;
    /* $A58B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58D:;
    /* $A58D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88E8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E8_b4");
#endif
label_88E8:;
    /* $88E8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x88E8); return;
}

void func_9948_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9948_b4");
#endif
label_9948:;
    /* $9948: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9948); return;
}

void func_997E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_997E_b4");
#endif
label_997E:;
    /* $997E: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3900 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9981:;
    /* $9981: 3A */ maybe_trigger_vblank(2); /* NOP */
label_9982:;
    /* $9982: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3C3A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9985:;
    /* $9985: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9985); return;
}

void func_A4D6_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4D6_b4");
#endif
label_A4D6:;
    /* $A4D6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4D6); return;
}

void func_A4D8_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4D8_b4");
#endif
label_A4D8:;
    /* $A4D8: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A4D9:;
    /* $A4D9: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x99); FLAG_NZ(g_cpu.A);
label_A4DB:;
    /* $A4DB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A4DC:;
    /* $A4DC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x99); FLAG_NZ(g_cpu.A);
label_A4DE:;
    /* $A4DE: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A4DF:;
    /* $A4DF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4E1:;
    /* $A4E1: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x99; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4E3:;
    /* $A4E3: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A4E4:;
    /* $A4E4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E6:;
    /* $A4E6: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9899 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A4E9:;
    /* $A4E9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4EB:;
    /* $A4EB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4EB); return;
}

void func_A4BC_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4BC_b4");
#endif
label_A4BC:;
    /* $A4BC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA4BC); return;
}

void func_A4C0_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A4EA;
    }
label_A4C0:;
    /* $A4C0: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x80A9 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A4C3:;
    /* $A4C3: 99 */ maybe_trigger_vblank(5); nes_write((0x0318 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4C6:;
    /* $A4C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A4C8:;
    /* $A4C8: 99 */ maybe_trigger_vblank(5); nes_write((0x0598 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4CB:;
    /* $A4CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEB; FLAG_NZ(g_cpu.A);
label_A4CD:;
    /* $A4CD: 99 */ maybe_trigger_vblank(5); nes_write((0x0338 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4D0:;
    /* $A4D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x67; FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 99 */ maybe_trigger_vblank(5); nes_write((0x05D8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4D5:;
    /* $A4D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4D7:;
    /* $A4D7: 99 */ maybe_trigger_vblank(5); nes_write((0x05F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4DA:;
    /* $A4DA: 99 */ maybe_trigger_vblank(5); nes_write((0x05B8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4DD:;
    /* $A4DD: 99 */ maybe_trigger_vblank(5); nes_write((0x03F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4E0:;
    /* $A4E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_A4E2:;
    /* $A4E2: 99 */ maybe_trigger_vblank(5); nes_write((0x0498 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4E5:;
    /* $A4E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A4E7:;
    /* $A4E7: 99 */ maybe_trigger_vblank(5); nes_write((0x0398 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4EA:;
    /* $A4EA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8500 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4ED:;
    /* $A4ED: 99 */ maybe_trigger_vblank(5); nes_write((0x0378 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4F0:;
    /* $A4F0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8508 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4F3:;
    /* $A4F3: 99 */ maybe_trigger_vblank(5); nes_write((0x03D8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4F6:;
    /* $A4F6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8510 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4F9:;
    /* $A4F9: 99 */ maybe_trigger_vblank(5); nes_write((0x04D8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4FC:;
    /* $A4FC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A4FD:;
    /* $A4FD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x04BD), 4); return; }
label_A4FF:;
    /* $A4FF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4C0_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4C0_b4");
#endif
    func_A4C0_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4EA_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4EA_b4");
#endif
    func_A4C0_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2C7_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A3FB;
        case 2: goto label_A44D;
        case 3: goto label_A465;
        case 4: goto label_A484;
        case 5: goto label_A49A;
        case 6: goto label_A599;
        case 7: goto label_A59D;
    }
label_A2C7:;
    /* $A2C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A2C8:;
    /* $A2C8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A2C9:;
    /* $A2C9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x8868 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A2CC:;
    /* $A2CC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0346), 4); return; }
label_A2CE:;
    /* $A2CE: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A2CF:;
    /* $A2CF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A2D0:;
    /* $A2D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF8A5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A2D3:;
    /* $A2D3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_A2D5:;
    /* $A2D5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F6; }
label_A2D7:;
    /* $A2D7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A2D9:;
    /* $A2D9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A2DB:;
    /* $A2DB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F8; }
label_A2DD:;
    /* $A2DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A2DF:;
    /* $A2DF: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_A2E1:;
    /* $A2E1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2E7; }
label_A2E3:;
    /* $A2E3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A2E5:;
    /* $A2E5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2F8; }
label_A2E7:;
    /* $A2E7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A2E9:;
    /* $A2E9: 85 */ maybe_trigger_vblank(3); nes_write(0x69, g_cpu.A);
label_A2EB:;
    /* $A2EB: 85 */ maybe_trigger_vblank(3); nes_write(0x73, g_cpu.A);
label_A2ED:;
    /* $A2ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_A2EF:;
    /* $A2EF: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A2F1:;
    /* $A2F1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2F; FLAG_NZ(g_cpu.A);
label_A2F3:;
    /* $A2F3: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_A2F5:;
    /* $A2F5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A2F6:;
    /* $A2F6: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x69; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2F8:;
    /* $A2F8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A2F9:;
    /* $A2F9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A2FB:;
    /* $A2FB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A2FD:;
    /* $A2FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A331; }
label_A2FF:;
    /* $A2FF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A301:;
    /* $A301: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_A303:;
    /* $A303: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A309; }
label_A305:;
    /* $A305: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A307:;
    /* $A307: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A331; }
label_A309:;
    /* $A309: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF8); FLAG_NZ(g_cpu.A);
label_A30B:;
    /* $A30B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A30D:;
    /* $A30D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A331; }
label_A30F:;
    /* $A30F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033F); FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFC; g_cpu.C=(g_cpu.A>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_A314:;
    /* $A314: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A331; }
label_A316:;
    /* $A316: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A318:;
    /* $A318: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A31A:;
    /* $A31A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x031C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA31A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A31D:;
    /* $A31D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_A31F:;
    /* $A31F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0321); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA31F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A322:;
    /* $A322: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A324:;
    /* $A324: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A326:;
    /* $A326: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0328); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA326, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A329:;
    /* $A329: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A32B:;
    /* $A32B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A331; }
label_A32D:;
    /* $A32D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A32F:;
    /* $A32F: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A331:;
    /* $A331: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A332:;
    /* $A332: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A334:;
    /* $A334: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_A336:;
    /* $A336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A367; }
label_A338:;
    /* $A338: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A33A:;
    /* $A33A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A35A; }
label_A33C:;
    /* $A33C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A33F:;
    /* $A33F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_A341:;
    /* $A341: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A35A; }
label_A343:;
    /* $A343: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A345:;
    /* $A345: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A348:;
    /* $A348: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A349:;
    /* $A349: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83E6 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A34C:;
    /* $A34C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A34F:;
    /* $A34F: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83EA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A352:;
    /* $A352: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A36F; }
label_A354:;
    /* $A354: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A355:;
    /* $A355: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A357:;
    /* $A357: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A345;
    }
label_A359:;
    /* $A359: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A35A:;
    /* $A35A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A35C:;
    /* $A35C: 85 */ maybe_trigger_vblank(3); nes_write(0x65, g_cpu.A);
label_A35E:;
    /* $A35E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A360:;
    /* $A360: 85 */ maybe_trigger_vblank(3); nes_write(0x64, g_cpu.A);
label_A362:;
    /* $A362: 85 */ maybe_trigger_vblank(3); nes_write(0x67, g_cpu.A);
label_A364:;
    /* $A364: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_A366:;
    /* $A366: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A367:;
    /* $A367: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A369:;
    /* $A369: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0D; g_cpu.C=(g_cpu.A>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_A36B:;
    /* $A36B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A35A;
    }
label_A36D:;
    /* $A36D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_A36F:;
    /* $A36F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x64); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A371:;
    /* $A371: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A382; }
label_A373:;
    /* $A373: 84 */ maybe_trigger_vblank(3); nes_write(0x64, g_cpu.Y);
label_A375:;
    /* $A375: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 85 */ maybe_trigger_vblank(3); nes_write(0x65, g_cpu.A);
label_A379:;
    /* $A379: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A37B:;
    /* $A37B: 85 */ maybe_trigger_vblank(3); nes_write(0x67, g_cpu.A);
label_A37D:;
    /* $A37D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x83F3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A380:;
    /* $A380: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_A382:;
    /* $A382: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x65; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A384:;
    /* $A384: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3E5; }
label_A386:;
    /* $A386: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x66); FLAG_NZ(g_cpu.Y);
label_A388:;
    /* $A388: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x83F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A38B:;
    /* $A38B: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A38D:;
    /* $A38D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A38F:;
    /* $A38F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0391); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC43(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA38F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A392:;
    /* $A392: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2C; FLAG_NZ(g_cpu.A);
label_A394:;
    /* $A394: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0396); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA394, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A397:;
    /* $A397: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A399:;
    /* $A399: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A39C:;
    /* $A39C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9A; FLAG_NZ(g_cpu.A);
label_A39E:;
    /* $A39E: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3A1:;
    /* $A3A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A3A3:;
    /* $A3A3: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3A6:;
    /* $A3A6: 9D */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3A9:;
    /* $A3A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_A3AB:;
    /* $A3AB: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3AE:;
    /* $A3AE: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x66); FLAG_NZ(g_cpu.Y);
label_A3B0:;
    /* $A3B0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x83F8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3B3:;
    /* $A3B3: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3B6:;
    /* $A3B6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8430 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3B9:;
    /* $A3B9: 9D */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3BC:;
    /* $A3BC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8468 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3BF:;
    /* $A3BF: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3C2:;
    /* $A3C2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3C4:;
    /* $A3C4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3C6:;
    /* $A3C6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A38F;
    }
label_A3C8:;
    /* $A3C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_A3CA:;
    /* $A3CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03CC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA3CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A3CD:;
    /* $A3CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A3CF:;
    /* $A3CF: 85 */ maybe_trigger_vblank(3); nes_write(0x65, g_cpu.A);
label_A3D1:;
    /* $A3D1: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x64); FLAG_NZ(g_cpu.Y);
label_A3D3:;
    /* $A3D3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x67; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3D5:;
    /* $A3D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x67); FLAG_NZ(g_cpu.A);
label_A3D7:;
    /* $A3D7: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83EE + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A3DA:;
    /* $A3DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A3E5; }
label_A3DC:;
    /* $A3DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A3DE:;
    /* $A3DE: 85 */ maybe_trigger_vblank(3); nes_write(0x67, g_cpu.A);
label_A3E0:;
    /* $A3E0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x83F3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3E3:;
    /* $A3E3: 85 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.A);
label_A3E5:;
    /* $A3E5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A3E6:;
    /* $A3E6: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x80; g_cpu.C=(g_cpu.X>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A3E8:;
    /* $A3E8: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA3E8; g_rti_bank = 4; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A3E9:;
    /* $A3E9: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0C; g_cpu.C=(g_cpu.Y>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_A3EB:;
    /* $A3EB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F0E); FLAG_NZ(g_cpu.A);
label_A3EE:;
    /* $A3EE: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3F0:;
    /* $A3F0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3F2:;
    /* $A3F2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F4:;
    /* $A3F4: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x221A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F7:;
    /* $A3F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A3F8:;
    /* $A3F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x48 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A3FA:;
    /* $A3FA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A3FB:;
    /* $A3FB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3FB); return;
label_A3FC:;
    /* $A3FC: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A3FD:;
    /* $A3FD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3FD); return;
label_A3FE:;
    /* $A3FE: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A3FF:;
    /* $A3FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3FF); return;
label_A400:; /* enemy_health_g */
    /* $A400: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A401:;
    /* $A401: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x38 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A403:;
    /* $A403: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A405:;
    /* $A405: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A406:;
    /* $A406: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A408:;
    /* $A408: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A409:;
    /* $A409: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A40A:;
    /* $A40A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA40A); return;
label_A40B:;
    /* $A40B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A40C:;
    /* $A40C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA40C); return;
label_A40D:;
    /* $A40D: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A40E:;
    /* $A40E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA40E); return;
label_A40F:;
    /* $A40F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A410:;
    /* $A410: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA410); return;
label_A411:;
    /* $A411: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A412:;
    /* $A412: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA412); return;
label_A413:;
    /* $A413: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A414:;
    /* $A414: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA414); return;
label_A415:;
    /* $A415: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A416:;
    /* $A416: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA416); return;
label_A417:;
    /* $A417: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A418:;
    /* $A418: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA418); return;
label_A419:;
    /* $A419: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A41A:;
    /* $A41A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA41A); return;
label_A41B:;
    /* $A41B: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A41C:;
    /* $A41C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA41C); return;
label_A41D:;
    /* $A41D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A41E:;
    /* $A41E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA41E); return;
label_A41F:;
    /* $A41F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A420:;
    /* $A420: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA420); return;
label_A421:;
    /* $A421: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A422:;
    /* $A422: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA422); return;
label_A423:;
    /* $A423: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A424:;
    /* $A424: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA424); return;
label_A425:;
    /* $A425: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A426:;
    /* $A426: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA426); return;
label_A427:;
    /* $A427: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A428:;
    /* $A428: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA428); return;
label_A429:;
    /* $A429: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A42A:;
    /* $A42A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA42A); return;
label_A42B:;
    /* $A42B: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A42C:;
    /* $A42C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA42C); return;
label_A42D:;
    /* $A42D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A42E:;
    /* $A42E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA42E); return;
label_A42F:;
    /* $A42F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A430:;
    /* $A430: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A432:;
    /* $A432: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0C00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A435:;
    /* $A435: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA435); return;
label_A436:;
    /* $A436: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0C00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A439:;
    /* $A439: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A43B:;
    /* $A43B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0C01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A43E:;
    /* $A43E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0D01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A441:;
    /* $A441: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D00); FLAG_NZ(g_cpu.A);
label_A444:;
    /* $A444: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA444); return;
label_A445:;
    /* $A445: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D00); FLAG_NZ(g_cpu.A);
label_A448:;
    /* $A448: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA448); return;
label_A449:;
    /* $A449: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D00); FLAG_NZ(g_cpu.A);
label_A44C:;
    /* $A44C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA44C); return;
label_A44D:;
    /* $A44D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0D00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A450:;
    /* $A450: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA450); return;
label_A451:;
    /* $A451: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0E00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A454:;
    /* $A454: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA454); return;
label_A455:;
    /* $A455: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0F00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A458:;
    /* $A458: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA458); return;
label_A459:;
    /* $A459: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0D00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A45C:;
    /* $A45C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA45C); return;
label_A45D:;
    /* $A45D: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D00); FLAG_NZ(g_cpu.A);
label_A460:;
    /* $A460: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA460); return;
label_A461:;
    /* $A461: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D00); FLAG_NZ(g_cpu.A);
label_A464:;
    /* $A464: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA464); return;
label_A465:;
    /* $A465: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D00); FLAG_NZ(g_cpu.A);
label_A468:;
    /* $A468: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A46A:;
    /* $A46A: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA46A; g_rti_bank = 4; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A46B:;
    /* $A46B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA46B); return;
label_A46C:;
    /* $A46C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A46D:;
    /* $A46D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA46D); return;
label_A46E:;
    /* $A46E: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A46F:;
    /* $A46F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA46F); return;
label_A470:;
    /* $A470: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_A473; }
label_A472:;
    /* $A472: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A473:;
    /* $A473: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A476; }
label_A475:;
    /* $A475: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A476:;
    /* $A476: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A477:;
    /* $A477: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A479:;
    /* $A479: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A47A:;
    /* $A47A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA47A); return;
label_A47B:;
    /* $A47B: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A47C:;
    /* $A47C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA47C); return;
label_A47D:;
    /* $A47D: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A47E:;
    /* $A47E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA47E); return;
label_A47F:;
    /* $A47F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A480:;
    /* $A480: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA480); return;
label_A481:;
    /* $A481: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A482:;
    /* $A482: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA482); return;
label_A483:;
    /* $A483: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A484:;
    /* $A484: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA484); return;
label_A485:;
    /* $A485: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A486:;
    /* $A486: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA486); return;
label_A487:;
    /* $A487: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A488:;
    /* $A488: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA488); return;
label_A489:;
    /* $A489: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A48A:;
    /* $A48A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA48A); return;
label_A48B:;
    /* $A48B: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A48C:;
    /* $A48C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA48C); return;
label_A48D:;
    /* $A48D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A48E:;
    /* $A48E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA48E); return;
label_A48F:;
    /* $A48F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A490:;
    /* $A490: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA490); return;
label_A491:;
    /* $A491: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A492:;
    /* $A492: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA492); return;
label_A493:;
    /* $A493: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A494:;
    /* $A494: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA494); return;
label_A495:;
    /* $A495: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A496:;
    /* $A496: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA496); return;
label_A497:;
    /* $A497: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9800 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A49A:;
    /* $A49A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA49A); return;
label_A49B:;
    /* $A49B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A49C:;
    /* $A49C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA49C); return;
label_A49D:;
    /* $A49D: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A49E:;
    /* $A49E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA49E); return;
label_A49F:;
    /* $A49F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A4A0:;
    /* $A4A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A4A2:;
    /* $A4A2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_A4A4:;
    /* $A4A4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4FF; }
label_A4A6:;
    /* $A4A6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A4A8:;
    /* $A4A8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A4AA:;
    /* $A4AA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4FF; }
label_A4AC:;
    /* $A4AC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031F); FLAG_NZ(g_cpu.A);
label_A4AF:;
    /* $A4AF: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A4FF; }
label_A4B1:;
    /* $A4B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A4B3:;
    /* $A4B3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A4B5:;
    /* $A4B5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A4FF; }
label_A4B7:;
    /* $A4B7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_A4B9:;
    /* $A4B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6E); FLAG_NZ(g_cpu.A);
label_A4BB:;
    /* $A4BB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A4BD:;
    /* $A4BD: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4BF:;
    /* $A4BF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A4FC; }
label_A4C1:;
    /* $A4C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A4C3:;
    /* $A4C3: 99 */ maybe_trigger_vblank(5); nes_write((0x0318 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4C6:;
    /* $A4C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A4C8:;
    /* $A4C8: 99 */ maybe_trigger_vblank(5); nes_write((0x0598 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4CB:;
    /* $A4CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEB; FLAG_NZ(g_cpu.A);
label_A4CD:;
    /* $A4CD: 99 */ maybe_trigger_vblank(5); nes_write((0x0338 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4D0:;
    /* $A4D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x67; FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 99 */ maybe_trigger_vblank(5); nes_write((0x05D8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4D5:;
    /* $A4D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4D7:;
    /* $A4D7: 99 */ maybe_trigger_vblank(5); nes_write((0x05F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4DA:;
    /* $A4DA: 99 */ maybe_trigger_vblank(5); nes_write((0x05B8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4DD:;
    /* $A4DD: 99 */ maybe_trigger_vblank(5); nes_write((0x03F8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4E0:;
    /* $A4E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_A4E2:;
    /* $A4E2: 99 */ maybe_trigger_vblank(5); nes_write((0x0498 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4E5:;
    /* $A4E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A4E7:;
    /* $A4E7: 99 */ maybe_trigger_vblank(5); nes_write((0x0398 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4EA:;
    /* $A4EA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8500 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4ED:;
    /* $A4ED: 99 */ maybe_trigger_vblank(5); nes_write((0x0378 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4F0:;
    /* $A4F0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8508 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4F3:;
    /* $A4F3: 99 */ maybe_trigger_vblank(5); nes_write((0x03D8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4F6:;
    /* $A4F6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8510 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4F9:;
    /* $A4F9: 99 */ maybe_trigger_vblank(5); nes_write((0x04D8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4FC:;
    /* $A4FC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A4FD:;
    /* $A4FD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A4BD;
    }
label_A4FF:;
    /* $A4FF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A500:; /* enemy_speed_ID_g */
    /* $A500: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0532), 4); return; }
label_A502:;
    /* $A502: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A574; }
label_A504:;
    /* $A504: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04D6), 4); return; }
label_A506:;
    /* $A506: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04D8), 4); return; }
label_A508:;
    /* $A508: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A57A; }
label_A50A:;
    /* $A50A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04BC), 4); return; }
label_A50C:;
    /* $A50C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A53E; }
label_A50E:;
    /* $A50E: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x04C0), 4); return; }
label_A510:;
    /* $A510: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A511:;
    /* $A511: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A513:;
    /* $A513: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x16 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A515:;
    /* $A515: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A517:;
    /* $A517: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x72A5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A51A:;
    /* $A51A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_A51C:;
    /* $A51C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A53E; }
label_A51E:;
    /* $A51E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A520:;
    /* $A520: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A522:;
    /* $A522: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x18); FLAG_NZ(g_cpu.A);
label_A524:;
    /* $A524: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A526:;
    /* $A526: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_A528:;
    /* $A528: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A52A:;
    /* $A52A: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_A52C:;
    /* $A52C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x10); FLAG_NZ(g_cpu.X);
label_A52E:;
    /* $A52E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0100 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A531:;
    /* $A531: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A536; }
label_A533:;
    /* $A533: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0535); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x853F, 4)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA533, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A536:;
    /* $A536: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A538:;
    /* $A538: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A52C;
    }
label_A53A:;
    /* $A53A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A53C:;
    /* $A53C: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_A53E:;
    /* $A53E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A53F:;
    /* $A53F: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0108 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A542:;
    /* $A542: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A545:;
    /* $A545: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A546:;
    /* $A546: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x010C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A549:;
    /* $A549: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x010C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54C:;
    /* $A54C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x860F + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A54F:;
    /* $A54F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A58D; }
label_A551:;
    /* $A551: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 9D */ maybe_trigger_vblank(5); nes_write((0x010C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A556:;
    /* $A556: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0104 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0104 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A55C:;
    /* $A55C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x860E + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A55F:;
    /* $A55F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A566; }
label_A561:;
    /* $A561: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A563:;
    /* $A563: 9D */ maybe_trigger_vblank(5); nes_write((0x0104 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A566:;
    /* $A566: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A567:;
    /* $A567: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A568:;
    /* $A568: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0104 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A56B:;
    /* $A56B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A56C:;
    /* $A56C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8611 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A56F:;
    /* $A56F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8611 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A573:;
    /* $A573: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A574:;
    /* $A574: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8610 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A577:;
    /* $A577: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A578:;
    /* $A578: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A57A:;
    /* $A57A: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A57C:;
    /* $A57C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x858E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A57F:;
    /* $A57F: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A582:;
    /* $A582: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A585:;
    /* $A585: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A586:;
    /* $A586: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A587:;
    /* $A587: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A589:;
    /* $A589: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A57C;
    }
label_A58B:;
    /* $A58B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58D:;
    /* $A58D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A58E:;
    /* $A58E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0590); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2131, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA58E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A591:;
    /* $A591: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0593); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2121, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA591, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A594:;
    /* $A594: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA594); return;
label_A595:;
    /* $A595: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_A596:;
    /* $A596: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A597:;
    /* $A597: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A599:;
    /* $A599: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A59A:;
    /* $A59A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1833; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A59D:;
    /* $A59D: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0F07 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5A0:;
    /* $A5A0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A5A2; }
label_A5A2:;
    /* $A5A2: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5A4:;
    /* $A5A4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CD), 4); return; }
label_A5A6:;
    /* $A5A6: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x27 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A8:;
    /* $A5A8: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5AA:;
    /* $A5AA: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x27 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AC:;
    /* $A5AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x05AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x3620, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA5AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A5AF:;
    /* $A5AF: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5B1:;
    /* $A5B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA5B1); return;
label_A5B2:; return;
label_A5B4:; return;
label_A5B5:; return;
label_A5B7:; return;
label_A5B8:; return;
label_A5BA:; return;
label_A5BC:; return;
label_A5BE:; return;
label_A5C0:; return;
label_A5C2:; return;
label_A5C3:; return;
label_A5C4:; return;
label_A5C5:; return;
label_A5C6:; return;
label_A5C7:; return;
label_A5C8:; return;
label_A5C9:; return;
label_A5CA:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5CF:; return;
label_A5D1:; return;
label_A5D2:; return;
label_A5D5:; return;
label_A5D8:; return;
label_A5DB:; return;
label_A5DD:; return;
label_A5DF:; return;
label_A5E1:; return;
label_A5E3:; return;
label_A5E5:; return;
label_A5E7:; return;
label_A5E9:; return;
label_A5EC:; return;
label_A5EE:; return;
label_A5F1:; return;
label_A5F3:; return;
label_A5F5:; return;
label_A5F7:; return;
label_A5F9:; return;
label_A5FB:; return;
label_A5FD:; return;
label_A5FF:; return;
label_A601:; return;
label_A603:; return;
label_A605:; return;
label_A608:; return;
label_A60B:; return;
label_A60E:; return;
label_A610:; return;
label_A613:; return;
label_A615:; return;
label_A618:; return;
label_A61A:; return;
label_A61C:; return;
label_A61E:; return;
label_A620:; return;
label_A621:; return;
label_A623:; return;
label_A625:; return;
label_A627:; return;
label_A629:; return;
label_A62B:; return;
label_A62E:; return;
label_A630:; return;
label_A633:; return;
label_A635:; return;
label_A637:; return;
label_A639:; return;
label_A63A:; return;
label_A63C:; return;
label_A63E:; return;
label_A63F:; return;
label_A641:; return;
label_A643:; return;
label_A645:; return;
label_A647:; return;
label_A648:; return;
label_A649:; return;
label_A64B:; return;
label_A64C:; return;
label_A64F:; return;
label_A652:; return;
label_A655:; return;
label_A656:; return;
label_A658:; return;
label_A65B:; return;
label_A65D:; return;
label_A65F:; return;
label_A661:; return;
label_A664:; return;
label_A667:; return;
label_A66A:; return;
label_A66D:; return;
label_A66F:; return;
label_A672:; return;
label_A675:; return;
label_A677:; return;
label_A67A:; return;
label_A67D:; return;
label_A680:; return;
label_A683:; return;
label_A686:; return;
label_A689:; return;
label_A68C:; return;
label_A68F:; return;
label_A692:; return;
label_A695:; return;
label_A697:; return;
label_A699:; return;
label_A69C:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A6:; return;
label_A6A9:; return;
label_A6AB:; return;
label_A6AE:; return;
label_A6B1:; return;
label_A6B4:; return;
label_A6B7:; return;
label_A6BA:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C5:; return;
label_A6C8:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6D0:; return;
label_A6D3:; return;
label_A6D6:; return;
label_A6D9:; return;
label_A6DB:; return;
label_A6DD:; return;
label_A6E0:; return;
label_A6E3:; return;
label_A6E6:; return;
label_A6E9:; return;
label_A6EC:; return;
label_A6EF:; return;
label_A6F2:; return;
label_A6F5:; return;
label_A6F8:; return;
label_A6FB:; return;
label_A6FE:; return;
label_A701:; return;
label_A704:; return;
label_A707:; return;
label_A709:; return;
label_A70B:; return;
label_A70E:; return;
label_A711:; return;
label_A713:; return;
label_A715:; return;
label_A718:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A724:; return;
label_A727:; return;
label_A72A:; return;
label_A72D:; return;
label_A730:; return;
label_A733:; return;
label_A736:; return;
label_A739:; return;
label_A73C:; return;
label_A73F:; return;
label_A741:; return;
label_A743:; return;
label_A745:; return;
label_A748:; return;
label_A74B:; return;
label_A74E:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75D:; return;
label_A760:; return;
label_A763:; return;
label_A766:; return;
label_A769:; return;
label_A76B:; return;
label_A76E:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A77A:; return;
label_A77D:; return;
label_A77F:; return;
label_A781:; return;
label_A784:; return;
label_A787:; return;
label_A78A:; return;
label_A78D:; return;
label_A790:; return;
label_A793:; return;
label_A795:; return;
label_A798:; return;
label_A79B:; return;
label_A79D:; return;
label_A7A0:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A8:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7B0:; return;
label_A7B3:; return;
label_A7B6:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C4:; return;
label_A7C7:; return;
label_A7CA:; return;
label_A7CD:; return;
label_A7D0:; return;
label_A7D3:; return;
label_A7D5:; return;
label_A7D8:; return;
label_A7DB:; return;
label_A7DE:; return;
label_A7E1:; return;
label_A7E4:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EC:; return;
label_A7EF:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7FA:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A802:; return;
label_A803:; return;
label_A804:; return;
label_A805:; return;
label_A806:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A811:; return;
label_A812:; return;
label_A813:; return;
label_A814:; return;
label_A815:; return;
label_A816:; return;
label_A817:; return;
label_A818:; return;
label_A819:; return;
label_A81A:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A820:; return;
label_A821:; return;
label_A822:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A82A:; return;
label_A82B:; return;
label_A82D:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A832:; return;
label_A833:; return;
label_A834:; return;
label_A835:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A841:; return;
label_A843:; return;
label_A844:; return;
label_A845:; return;
label_A846:; return;
label_A847:; return;
label_A848:; return;
label_A849:; return;
label_A84A:; return;
label_A84B:; return;
label_A84C:; return;
label_A84D:; return;
label_A84E:; return;
label_A84F:; return;
label_A850:; return;
label_A851:; return;
label_A852:; return;
label_A853:; return;
label_A854:; return;
label_A855:; return;
label_A856:; return;
label_A857:; return;
label_A858:; return;
label_A859:; return;
label_A85A:; return;
label_A85B:; return;
label_A85C:; return;
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
label_A86A:; return;
label_A86B:; return;
label_A86C:; return;
label_A86D:; return;
label_A86E:; return;
label_A86F:; return;
label_A870:; return;
label_A871:; return;
label_A872:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
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
label_A88F:; return;
label_A890:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A1:; return;
label_A8A2:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8A8:; return;
label_A8A9:; return;
label_A8AA:; return;
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
label_A8B9:; return;
label_A8BA:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C0:; return;
label_A8C1:; return;
label_A8C2:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C7:; return;
label_A8C8:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CE:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D1:; return;
label_A8D2:; return;
label_A8D3:; return;
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
label_A8E2:; return;
label_A8E3:; return;
label_A8E4:; return;
label_A8E5:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EC:; return;
label_A8ED:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F0:; return;
label_A8F1:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F4:; return;
label_A8F5:; return;
label_A8F6:; return;
label_A8F9:; return;
label_A8FA:; return;
label_A8FB:; return;
label_A8FC:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A901:; return;
label_A902:; return;
label_A903:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90A:; return;
label_A90B:; return;
label_A90C:; return;
label_A90D:; return;
label_A90F:; return;
label_A910:; return;
label_A911:; return;
label_A913:; return;
label_A915:; return;
label_A917:; return;
label_A918:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A924:; return;
label_A925:; return;
label_A928:; return;
label_A929:; return;
label_A92A:; return;
label_A92B:; return;
label_A92C:; return;
label_A92D:; return;
label_A92E:; return;
label_A92F:; return;
label_A931:; return;
label_A932:; return;
label_A933:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93C:; return;
label_A93D:; return;
label_A93F:; return;
label_A940:; return;
label_A943:; return;
label_A945:; return;
label_A947:; return;
label_A948:; return;
label_A949:; return;
label_A94A:; return;
label_A94B:; return;
label_A94C:; return;
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
label_A95A:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95F:; return;
label_A960:; return;
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
label_A976:; return;
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
label_A988:; return;
label_A989:; return;
label_A98A:; return;
label_A98B:; return;
label_A98C:; return;
label_A98D:; return;
label_A98E:; return;
label_A990:; return;
label_A991:; return;
label_A992:; return;
label_A993:; return;
label_A994:; return;
label_A995:; return;
label_A996:; return;
label_A997:; return;
label_A998:; return;
label_A999:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A1:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A4:; return;
label_A9A5:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A8:; return;
label_A9A9:; return;
label_A9AA:; return;
label_A9AB:; return;
label_A9AC:; return;
label_A9AD:; return;
label_A9AE:; return;
label_A9AF:; return;
label_A9B0:; return;
label_A9B1:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B6:; return;
label_A9B7:; return;
label_A9B8:; return;
label_A9B9:; return;
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
label_A9C7:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CB:; return;
label_A9CC:; return;
label_A9CD:; return;
label_A9CE:; return;
label_A9CF:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D3:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D6:; return;
label_A9D7:; return;
label_A9D8:; return;
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
label_A9E5:; return;
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
label_A9F3:; return;
label_A9F4:; return;
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
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA22:; return;
label_AA23:; return;
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
label_AA36:; return;
label_AA37:; return;
label_AA38:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA44:; return;
label_AA47:; return;
label_AA48:; return;
label_AA4B:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA51:; return;
label_AA52:; return;
label_AA53:; return;
label_AA54:; return;
label_AA55:; return;
label_AA56:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA63:; return;
label_AA65:; return;
label_AA67:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6D:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA80:; return;
label_AA83:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8B:; return;
label_AA8C:; return;
label_AA8D:; return;
label_AA8E:; return;
label_AA91:; return;
label_AA93:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA0:; return;
label_AAA1:; return;
label_AAA2:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAD:; return;
label_AAAE:; return;
label_AAB1:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB9:; return;
label_AABB:; return;
label_AABD:; return;
label_AABE:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC5:; return;
label_AAC7:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACA:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD5:; return;
label_AAD6:; return;
label_AAD9:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AAE1:; return;
label_AAE3:; return;
label_AAE5:; return;
label_AAE6:; return;
label_AAE7:; return;
label_AAE8:; return;
label_AAE9:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAED:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF3:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFC:; return;
label_AAFD:; return;
label_AAFE:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB06:; return;
label_AB08:; return;
label_AB0A:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB17:; return;
label_AB18:; return;
label_AB19:; return;
label_AB1A:; return;
label_AB1B:; return;
label_AB1C:; return;
label_AB1E:; return;
label_AB20:; return;
label_AB23:; return;
label_AB25:; return;
label_AB27:; return;
label_AB29:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB31:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3E:; return;
label_AB41:; return;
label_AB42:; return;
label_AB43:; return;
label_AB44:; return;
label_AB45:; return;
label_AB46:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB52:; return;
label_AB53:; return;
label_AB54:; return;
label_AB55:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB61:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6A:; return;
label_AB6B:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB6E:; return;
label_AB6F:; return;
label_AB70:; return;
label_AB71:; return;
label_AB72:; return;
label_AB73:; return;
label_AB74:; return;
label_AB75:; return;
label_AB77:; return;
label_AB78:; return;
label_AB79:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7C:; return;
label_AB7D:; return;
label_AB7E:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB84:; return;
label_AB85:; return;
label_AB86:; return;
label_AB89:; return;
label_AB8A:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8D:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB91:; return;
label_AB92:; return;
label_AB93:; return;
label_AB94:; return;
label_AB95:; return;
label_AB96:; return;
label_AB97:; return;
label_AB98:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9B:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9E:; return;
label_AB9F:; return;
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
label_ABAC:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB2:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB5:; return;
label_ABB6:; return;
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
label_ABC6:; return;
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
label_ABD2:; return;
label_ABD3:; return;
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
label_ABE4:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEA:; return;
label_ABEB:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEE:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF1:; return;
label_ABF2:; return;
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
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC05:; return;
label_AC06:; return;
label_AC07:; return;
label_AC08:; return;
label_AC09:; return;
label_AC0A:; return;
label_AC0B:; return;
label_AC0C:; return;
label_AC0D:; return;
label_AC0E:; return;
label_AC0F:; return;
label_AC10:; return;
label_AC11:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1B:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC20:; return;
label_AC21:; return;
label_AC22:; return;
label_AC23:; return;
label_AC25:; return;
label_AC26:; return;
label_AC28:; return;
label_AC29:; return;
label_AC2A:; return;
label_AC2B:; return;
label_AC2C:; return;
label_AC2D:; return;
label_AC2E:; return;
label_AC2F:; return;
label_AC30:; return;
label_AC31:; return;
label_AC32:; return;
label_AC33:; return;
label_AC34:; return;
label_AC35:; return;
label_AC36:; return;
label_AC37:; return;
label_AC38:; return;
label_AC39:; return;
label_AC3A:; return;
label_AC3B:; return;
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC41:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC46:; return;
label_AC47:; return;
label_AC48:; return;
label_AC4A:; return;
label_AC4B:; return;
label_AC4C:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC55:; return;
label_AC56:; return;
label_AC57:; return;
label_AC59:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC61:; return;
label_AC62:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC74:; return;
label_AC75:; return;
label_AC76:; return;
label_AC77:; return;
label_AC78:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC81:; return;
label_AC82:; return;
label_AC83:; return;
label_AC84:; return;
label_AC85:; return;
label_AC87:; return;
label_AC88:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8D:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC91:; return;
label_AC92:; return;
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC97:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB2:; return;
label_ACB3:; return;
label_ACB4:; return;
label_ACB5:; return;
label_ACB6:; return;
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
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC7:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDA:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE5:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACE9:; return;
label_ACEB:; return;
label_ACEC:; return;
label_ACED:; return;
label_ACEE:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF2:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF5:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFD:; return;
label_ACFF:; return;
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
label_AD0B:; return;
label_AD0C:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD11:; return;
label_AD12:; return;
label_AD13:; return;
label_AD14:; return;
label_AD15:; return;
label_AD16:; return;
label_AD17:; return;
label_AD18:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1B:; return;
label_AD1D:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD25:; return;
label_AD26:; return;
label_AD27:; return;
label_AD28:; return;
label_AD29:; return;
label_AD2A:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2D:; return;
label_AD2E:; return;
label_AD2F:; return;
label_AD30:; return;
label_AD31:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD38:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD41:; return;
label_AD42:; return;
label_AD45:; return;
label_AD46:; return;
label_AD47:; return;
label_AD48:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4D:; return;
label_AD4E:; return;
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
label_AD5E:; return;
label_AD5F:; return;
label_AD61:; return;
label_AD62:; return;
label_AD63:; return;
label_AD64:; return;
label_AD65:; return;
label_AD67:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6C:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
label_AD73:; return;
label_AD74:; return;
label_AD76:; return;
label_AD77:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7A:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD81:; return;
label_AD83:; return;
label_AD84:; return;
label_AD85:; return;
label_AD86:; return;
label_AD87:; return;
label_AD88:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8D:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD91:; return;
label_AD92:; return;
label_AD93:; return;
label_AD94:; return;
label_AD95:; return;
label_AD96:; return;
label_AD97:; return;
label_AD98:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA1:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADA9:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAD:; return;
label_ADAE:; return;
label_ADB0:; return;
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
label_ADBD:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC0:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC5:; return;
label_ADC6:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCD:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD8:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE1:; return;
label_ADE2:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE5:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADEE:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF4:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF7:; return;
label_ADF8:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_AE00:; return;
label_AE03:; return;
label_AE06:; return;
label_AE07:; return;
label_AE0A:; return;
label_AE0D:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE15:; return;
label_AE18:; return;
label_AE19:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE20:; return;
label_AE22:; return;
label_AE24:; return;
label_AE26:; return;
label_AE29:; return;
label_AE2B:; return;
label_AE2E:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE36:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE41:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE48:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4B:; return;
label_AE4D:; return;
label_AE4E:; return;
label_AE4F:; return;
label_AE50:; return;
label_AE51:; return;
label_AE52:; return;
label_AE53:; return;
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
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE63:; return;
label_AE64:; return;
label_AE66:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE70:; return;
label_AE71:; return;
label_AE72:; return;
label_AE74:; return;
label_AE75:; return;
label_AE76:; return;
label_AE78:; return;
label_AE79:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE80:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE85:; return;
label_AE86:; return;
label_AE87:; return;
label_AE88:; return;
label_AE89:; return;
label_AE8A:; return;
label_AE8B:; return;
label_AE8C:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE90:; return;
label_AE91:; return;
label_AE92:; return;
label_AE94:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE9B:; return;
label_AE9C:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA5:; return;
label_AEA6:; return;
label_AEA7:; return;
label_AEA8:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAC:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB8:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC1:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC7:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED2:; return;
label_AED5:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEDF:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE3:; return;
label_AEE4:; return;
label_AEE6:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEB:; return;
label_AEED:; return;
}

void func_A2C7_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2C7_b4");
#endif
    func_A2C7_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3FB_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3FB_b4");
#endif
    func_A2C7_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A44D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A44D_b4");
#endif
    func_A2C7_b4_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A465_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A465_b4");
#endif
    func_A2C7_b4_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A484_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A484_b4");
#endif
    func_A2C7_b4_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A49A_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A49A_b4");
#endif
    func_A2C7_b4_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A599_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A599_b4");
#endif
    func_A2C7_b4_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A59D_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A59D_b4");
#endif
    func_A2C7_b4_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A716_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A716_b4");
#endif
label_A716:;
    /* $A716: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A719:;
    /* $A719: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x5FFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A71C:;
    /* $A71C: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x7F + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A71E:;
    /* $A71E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A721:;
    /* $A721: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A724:;
    /* $A724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A727:;
    /* $A727: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A72A:;
    /* $A72A: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A72D:;
    /* $A72D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A730:;
    /* $A730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A733:;
    /* $A733: FC */ maybe_trigger_vblank(4); (void)nes_read((0x5FFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A736:;
    /* $A736: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A739:;
    /* $A739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73C:;
    /* $A73C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73F:;
    /* $A73F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A741:;
    /* $A741: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A743:;
    /* $A743: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A745:;
    /* $A745: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF6FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A748:;
    /* $A748: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7F7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A74B:;
    /* $A74B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74E:;
    /* $A74E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A751:;
    /* $A751: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A756:;
    /* $A756: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A759:;
    /* $A759: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A75B:;
    /* $A75B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A75D:;
    /* $A75D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A760:;
    /* $A760: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A763:;
    /* $A763: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A766:;
    /* $A766: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A769:;
    /* $A769: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A76B:;
    /* $A76B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76E:;
    /* $A76E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFE5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A771:;
    /* $A771: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A773:;
    /* $A773: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A775:;
    /* $A775: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A777:;
    /* $A777: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77A:;
    /* $A77A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77D:;
    /* $A77D: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77F:;
    /* $A77F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A781:;
    /* $A781: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF27 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A787:;
    /* $A787: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A78A:;
    /* $A78A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A78D:;
    /* $A78D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A790:;
    /* $A790: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A793:;
    /* $A793: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A795:;
    /* $A795: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A798:;
    /* $A798: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A0:;
    /* $A7A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A3:;
    /* $A7A3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A5:;
    /* $A7A5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A8:;
    /* $A7A8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AB:;
    /* $A7AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AD:;
    /* $A7AD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B0:;
    /* $A7B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B3:;
    /* $A7B3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7B6:;
    /* $A7B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B9:;
    /* $A7B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BB:;
    /* $A7BB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BE:;
    /* $A7BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C1:;
    /* $A7C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x75FB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C7:;
    /* $A7C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CA:;
    /* $A7CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CD:;
    /* $A7CD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7D0:;
    /* $A7D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D3:;
    /* $A7D3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D5:;
    /* $A7D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A7D8:;
    /* $A7D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7DB:;
    /* $A7DB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7DE:;
    /* $A7DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E1:;
    /* $A7E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E4:;
    /* $A7E4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E7:;
    /* $A7E7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7E9:;
    /* $A7E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EF:;
    /* $A7EF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F2:;
    /* $A7F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F5:;
    /* $A7F5: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7F7:;
    /* $A7F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FA:;
    /* $A7FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FD:;
    /* $A7FD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FF:;
    /* $A7FF: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
}

void func_A01E_b4(void) { /* main_gamma_F */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A01E_b4");
#endif
label_A01E:; /* main_gamma_F */
    /* $A01E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xD0); FLAG_NZ(g_cpu.A);
label_A020:;
    /* $A020: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A021:; /* main_teleporter */
    /* $A021: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xF9); FLAG_NZ(g_cpu.Y);
label_A023:;
    /* $A023: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x05; g_cpu.C=(g_cpu.Y>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A025:;
    /* $A025: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A034; }
label_A027:; /* main_wily_machine_C */
    /* $A027: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0E; g_cpu.C=(g_cpu.Y>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A029:;
    /* $A029: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A034; }
label_A02B:;
    /* $A02B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A02D:;
    /* $A02D: 85 */ maybe_trigger_vblank(3); nes_write(0x56, g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: 85 */ maybe_trigger_vblank(3); nes_write(0x57, g_cpu.A);
label_A031:;
    /* $A031: 85 */ maybe_trigger_vblank(3); nes_write(0x55, g_cpu.A);
label_A033:;
    /* $A033: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A034:; /* needle_man_state_ptr_hi */
    /* $A034: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A036:;
    /* $A036: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0038); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA036, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A039:; /* needle_man_init */
    /* $A039: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_A03B:;
    /* $A03B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A040; }
label_A03D:;
    /* $A03D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x815D, 4); return;
label_A040:;
    /* $A040: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A042:;
    /* $A042: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x56; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A044:;
    /* $A044: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A046:;
    /* $A046: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x00; g_cpu.C=(g_cpu.A>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A048:;
    /* $A048: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A072; }
label_A04A:;
    /* $A04A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A04C:;
    /* $A04C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A071; }
label_A04E:;
    /* $A04E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A050:;
    /* $A050: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_A052:;
    /* $A052: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A054:; /* main_giant_met */
    /* $A054: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0781 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A057:;
    /* $A057: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A058:;
    /* $A058: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_A05A:;
    /* $A05A: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A05D:;
    /* $A05D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A05E:;
    /* $A05E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A05F:;
    /* $A05F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0B); g_cpu.A=r&0xFF; }
label_A061:;
    /* $A061: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A062:;
    /* $A062: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A064:;
    /* $A064: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A054;
    }
label_A066:;
    /* $A066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A068:; /* needle_man_throw */
    /* $A068: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_A06A:;
    /* $A06A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x18; FLAG_NZ(g_cpu.X);
label_A06C:;
    /* $A06C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x006E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80ED, 4)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A06F:;
    /* $A06F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x57; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A071:;
    /* $A071: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A072:;
    /* $A072: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A074:;
    /* $A074: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A076:;
    /* $A076: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8141 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A07C:;
    /* $A07C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8147 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A080:;
    /* $A080: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A082:;
    /* $A082: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A085:;
    /* $A085: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A087:;
    /* $A087: 9D */ maybe_trigger_vblank(5); nes_write((0x0782 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A08A:;
    /* $A08A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A08C:;
    /* $A08C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0B); g_cpu.A=r&0xFF; }
label_A08E:;
    /* $A08E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A08F:;
    /* $A08F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A090:;
    /* $A090: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x06; g_cpu.C=(g_cpu.Y>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A092:;
    /* $A092: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A076;
    }
label_A094:;
    /* $A094: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A096:;
    /* $A096: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A098:;
    /* $A098: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x57); FLAG_NZ(g_cpu.A);
label_A09A:;
    /* $A09A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A09C:;
    /* $A09C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A09D:;
    /* $A09D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A09F:;
    /* $A09F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8135 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0A2:;
    /* $A0A2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0A3:;
    /* $A0A3: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8139 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A0A6:;
    /* $A0A6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A0A8:;
    /* $A0A8: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x813D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A0AB:;
    /* $A0AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A0AD:;
    /* $A0AD: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A0AF:;
    /* $A0AF: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_A0B1:;
    /* $A0B1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8105 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B4:;
    /* $A0B4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0B5:;
    /* $A0B5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBB00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBC00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BE:;
    /* $A0BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0784 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C1:;
    /* $A0C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C4:;
    /* $A0C4: 9D */ maybe_trigger_vblank(5); nes_write((0x078E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C7:;
    /* $A0C7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CA:;
    /* $A0CA: 9D */ maybe_trigger_vblank(5); nes_write((0x078F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CD:;
    /* $A0CD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0CF:;
    /* $A0CF: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A0D0:;
    /* $A0D0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D1:;
    /* $A0D1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x16 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x16); g_cpu.A=r&0xFF; }
label_A0D3:;
    /* $A0D3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0D4:;
    /* $A0D4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0D6:;
    /* $A0D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0AF;
    }
label_A0D8:;
    /* $A0D8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0DA:;
    /* $A0DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A0DC:;
    /* $A0DC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A0DE:;
    /* $A0DE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A098;
    }
label_A0E0:;
    /* $A0E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A0E2:;
    /* $A0E2: 8D */ maybe_trigger_vblank(4); nes_write(0x07C2, g_cpu.A);
label_A0E5:;
    /* $A0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_A0E7:;
    /* $A0E7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_A0E9:;
    /* $A0E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80ED, 4)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0EC:;
    /* $A0EC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A030_b4(void) { /* main_kamegoro_maker */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A030_b4");
#endif
label_A030:; /* main_kamegoro_maker */
    /* $A030: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x85 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A032:;
    /* $A032: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x60 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A034:; /* needle_man_state_ptr_hi */
    /* $A034: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A036:;
    /* $A036: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0038); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA036, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A039:; /* needle_man_init */
    /* $A039: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_A03B:;
    /* $A03B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A040; }
label_A03D:;
    /* $A03D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x815D, 4); return;
label_A040:;
    /* $A040: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x56); FLAG_NZ(g_cpu.A);
label_A042:;
    /* $A042: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x56; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A044:;
    /* $A044: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A046:;
    /* $A046: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x00; g_cpu.C=(g_cpu.A>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A048:;
    /* $A048: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A072; }
label_A04A:;
    /* $A04A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_A04C:;
    /* $A04C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A071; }
label_A04E:;
    /* $A04E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A050:;
    /* $A050: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_A052:;
    /* $A052: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A054:; /* main_giant_met */
    /* $A054: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0781 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A057:;
    /* $A057: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A058:;
    /* $A058: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_A05A:;
    /* $A05A: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A05D:;
    /* $A05D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A05E:;
    /* $A05E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A05F:;
    /* $A05F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0B); g_cpu.A=r&0xFF; }
label_A061:;
    /* $A061: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A062:;
    /* $A062: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A064:;
    /* $A064: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A054;
    }
label_A066:;
    /* $A066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A068:; /* needle_man_throw */
    /* $A068: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_A06A:;
    /* $A06A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x18; FLAG_NZ(g_cpu.X);
label_A06C:;
    /* $A06C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x006E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80ED, 4)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA06C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A06F:;
    /* $A06F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x57; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A071:;
    /* $A071: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A072:;
    /* $A072: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A074:;
    /* $A074: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A076:;
    /* $A076: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8141 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A07C:;
    /* $A07C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8147 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A080:;
    /* $A080: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A082:;
    /* $A082: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A085:;
    /* $A085: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A087:;
    /* $A087: 9D */ maybe_trigger_vblank(5); nes_write((0x0782 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A08A:;
    /* $A08A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A08C:;
    /* $A08C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0B); g_cpu.A=r&0xFF; }
label_A08E:;
    /* $A08E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A08F:;
    /* $A08F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A090:;
    /* $A090: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x06; g_cpu.C=(g_cpu.Y>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A092:;
    /* $A092: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A076;
    }
label_A094:;
    /* $A094: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A096:;
    /* $A096: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A098:;
    /* $A098: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x57); FLAG_NZ(g_cpu.A);
label_A09A:;
    /* $A09A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A09C:;
    /* $A09C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A09D:;
    /* $A09D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A09F:;
    /* $A09F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8135 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0A2:;
    /* $A0A2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0A3:;
    /* $A0A3: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8139 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A0A6:;
    /* $A0A6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A0A8:;
    /* $A0A8: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x813D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A0AB:;
    /* $A0AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A0AD:;
    /* $A0AD: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A0AF:;
    /* $A0AF: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_A0B1:;
    /* $A0B1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8105 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B4:;
    /* $A0B4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0B5:;
    /* $A0B5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBB00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBC00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BE:;
    /* $A0BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0784 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C1:;
    /* $A0C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C4:;
    /* $A0C4: 9D */ maybe_trigger_vblank(5); nes_write((0x078E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C7:;
    /* $A0C7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CA:;
    /* $A0CA: 9D */ maybe_trigger_vblank(5); nes_write((0x078F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CD:;
    /* $A0CD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0CF:;
    /* $A0CF: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A0D0:;
    /* $A0D0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D1:;
    /* $A0D1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x16 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x16); g_cpu.A=r&0xFF; }
label_A0D3:;
    /* $A0D3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0D4:;
    /* $A0D4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0D6:;
    /* $A0D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0AF;
    }
label_A0D8:;
    /* $A0D8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0DA:;
    /* $A0DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A0DC:;
    /* $A0DC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A0DE:;
    /* $A0DE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A098;
    }
label_A0E0:;
    /* $A0E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A0E2:;
    /* $A0E2: 8D */ maybe_trigger_vblank(4); nes_write(0x07C2, g_cpu.A);
label_A0E5:;
    /* $A0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_A0E7:;
    /* $A0E7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_A0E9:;
    /* $A0E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80ED, 4)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0EC:;
    /* $A0EC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A06E_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A06E_b4");
#endif
label_A06E:;
    /* $A06E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A070:;
    /* $A070: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x60 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A072:;
    /* $A072: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A074:;
    /* $A074: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A076:;
    /* $A076: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8141 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A079:;
    /* $A079: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A07C:;
    /* $A07C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8147 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A080:;
    /* $A080: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A082:;
    /* $A082: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A085:;
    /* $A085: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_A087:;
    /* $A087: 9D */ maybe_trigger_vblank(5); nes_write((0x0782 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A08A:;
    /* $A08A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A08B:;
    /* $A08B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A08C:;
    /* $A08C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0B); g_cpu.A=r&0xFF; }
label_A08E:;
    /* $A08E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A08F:;
    /* $A08F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A090:;
    /* $A090: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x06; g_cpu.C=(g_cpu.Y>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A092:;
    /* $A092: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A076;
    }
label_A094:;
    /* $A094: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A096:;
    /* $A096: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A098:;
    /* $A098: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x57); FLAG_NZ(g_cpu.A);
label_A09A:;
    /* $A09A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A09C:;
    /* $A09C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A09D:;
    /* $A09D: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A09F:;
    /* $A09F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8135 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0A2:;
    /* $A0A2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0A3:;
    /* $A0A3: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8139 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A0A6:;
    /* $A0A6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A0A8:;
    /* $A0A8: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x813D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_A0AB:;
    /* $A0AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_A0AD:;
    /* $A0AD: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A0AF:;
    /* $A0AF: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_A0B1:;
    /* $A0B1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8105 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B4:;
    /* $A0B4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A0B5:;
    /* $A0B5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBB00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0B8:;
    /* $A0B8: 9D */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0BB:;
    /* $A0BB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBC00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0BE:;
    /* $A0BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0784 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C1:;
    /* $A0C1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0C4:;
    /* $A0C4: 9D */ maybe_trigger_vblank(5); nes_write((0x078E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0C7:;
    /* $A0C7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A0CA:;
    /* $A0CA: 9D */ maybe_trigger_vblank(5); nes_write((0x078F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0CD:;
    /* $A0CD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0CF:;
    /* $A0CF: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A0D0:;
    /* $A0D0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A0D1:;
    /* $A0D1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x16 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x16); g_cpu.A=r&0xFF; }
label_A0D3:;
    /* $A0D3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0D4:;
    /* $A0D4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0D6:;
    /* $A0D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0AF;
    }
label_A0D8:;
    /* $A0D8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0DA:;
    /* $A0DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A0DC:;
    /* $A0DC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A0DE:;
    /* $A0DE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A098;
    }
label_A0E0:;
    /* $A0E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A0E2:;
    /* $A0E2: 8D */ maybe_trigger_vblank(4); nes_write(0x07C2, g_cpu.A);
label_A0E5:;
    /* $A0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_A0E7:;
    /* $A0E7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_A0E9:;
    /* $A0E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80ED, 4)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0EC:;
    /* $A0EC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A250_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A250_b4");
#endif
label_A250:;
    /* $A250: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA250); return;
}

void func_A3C1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3C1_b4");
#endif
label_A3C1:;
    /* $A3C1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3C3:;
    /* $A3C3: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC6; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3C5:;
    /* $A3C5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA3C5); return;
}

void func_A5C1_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5C1_b4");
#endif
label_A5C1:;
    /* $A5C1: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A5C2:;
    /* $A5C2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5C3:;
    /* $A5C3: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5C4:;
    /* $A5C4: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5C5:;
    /* $A5C5: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A5C6:;
    /* $A5C6: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5C7:;
    /* $A5C7: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5C8:;
    /* $A5C8: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5C9:;
    /* $A5C9: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A5CA:;
    /* $A5CA: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A5CC; }
label_A5CC:;
    /* $A5CC: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x20 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5CE:;
    /* $A5CE: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_A5CF:;
    /* $A5CF: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x20; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5D1:;
    /* $A5D1: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_A5D2:;
    /* $A5D2: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1B1B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D5:;
    /* $A5D5: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0F1B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D8:;
    /* $A5D8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1626 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DB:;
    /* $A5DB: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5DD:;
    /* $A5DD: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5DF:;
    /* $A5DF: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x26; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E1:;
    /* $A5E1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x31 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x21) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E5:;
    /* $A5E5: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x36) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E7:;
    /* $A5E7: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x31 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0F21 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05F0), 4); return; }
label_A5EE:;
    /* $A5EE: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1002; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F1:;
    /* $A5F1: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x30) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F3:;
    /* $A5F3: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x14 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A5F5:;
    /* $A5F5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x14); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5F9:;
    /* $A5F9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5FB:;
    /* $A5FB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x14); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FD:;
    /* $A5FD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5FF:;
    /* $A5FF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A601:;
    /* $A601: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x0A); FLAG_NZ(g_cpu.A);
label_A603:;
    /* $A603: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A605:;
    /* $A605: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2A24 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A608:;
    /* $A608: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x3934; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A60B:;
    /* $A60B: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4B46 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A610:;
    /* $A610: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0100); FLAG_NZ(g_cpu.A);
label_A613:;
    /* $A613: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A615:;
    /* $A615: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0403); FLAG_NZ(g_cpu.A);
label_A618:;
    /* $A618: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A61A:;
    /* $A61A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_A61C:;
    /* $A61C: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A61E:;
    /* $A61E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A620:;
    /* $A620: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A621:;
    /* $A621: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A623:;
    /* $A623: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_A625:;
    /* $A625: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_A627:;
    /* $A627: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x062A), 4); return; }
label_A629:;
    /* $A629: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A62B:;
    /* $A62B: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1002); FLAG_NZ(g_cpu.A);
label_A62E:;
    /* $A62E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_A630:;
    /* $A630: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0210; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A633:;
    /* $A633: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A63E; }
label_A635:;
    /* $A635: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A639:;
    /* $A639: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63A:; /* main_unknown_27 */
    /* $A63A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x15); FLAG_NZ(g_cpu.A);
label_A63C:;
    /* $A63C: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A63E:;
    /* $A63E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A63F:;
    /* $A63F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x16; FLAG_NZ(g_cpu.A);
label_A641:;
    /* $A641: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A643:;
    /* $A643: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A645:;
    /* $A645: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A647:;
    /* $A647: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A648:;
    /* $A648: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A649:;
    /* $A649: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x19); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A64C:;
    /* $A64C: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0403 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A64F:;
    /* $A64F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1D1C); FLAG_NZ(g_cpu.A);
label_A652:;
    /* $A652: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0121 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A655:;
    /* $A655: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A656:;
    /* $A656: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1F); FLAG_NZ(g_cpu.A);
label_A658:;
    /* $A658: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x065A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0203, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA658, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A65B:;
    /* $A65B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A65D:;
    /* $A65D: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x24 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A65F:;
    /* $A65F: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A661:;
    /* $A661: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A664:;
    /* $A664: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A667:;
    /* $A667: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A66A:;
    /* $A66A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A66D:;
    /* $A66D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A66F:;
    /* $A66F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A672:;
    /* $A672: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A675:;
    /* $A675: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A677:;
    /* $A677: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A67A:;
    /* $A67A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7DD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A67D:;
    /* $A67D: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A680:;
    /* $A680: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A683:;
    /* $A683: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A686:;
    /* $A686: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A68C:;
    /* $A68C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A68F:;
    /* $A68F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A692:;
    /* $A692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A697:;
    /* $A697: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A699:;
    /* $A699: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69C:;
    /* $A69C: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF7F + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6A3:;
    /* $A6A3: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xC7EF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6A6:;
    /* $A6A6: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEFF5 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6A9:;
    /* $A6A9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6AB:;
    /* $A6AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6AE:;
    /* $A6AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B1:;
    /* $A6B1: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xF7FE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6B4:;
    /* $A6B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B7:;
    /* $A6B7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6BA:;
    /* $A6BA: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFFFD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6BD:;
    /* $A6BD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6BF:;
    /* $A6BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C2:;
    /* $A6C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C5:;
    /* $A6C5: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x57F7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6C8:;
    /* $A6C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6CB:;
    /* $A6CB: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A6CD:;
    /* $A6CD: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D0:;
    /* $A6D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6D3:;
    /* $A6D3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D6:;
    /* $A6D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6D9:;
    /* $A6D9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DB:;
    /* $A6DB: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DD:;
    /* $A6DD: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6E0:;
    /* $A6E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E3:;
    /* $A6E3: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6E6:;
    /* $A6E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E9:;
    /* $A6E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6EC:;
    /* $A6EC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6EF:;
    /* $A6EF: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6F2:;
    /* $A6F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F5:;
    /* $A6F5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F8:;
    /* $A6F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6FB:;
    /* $A6FB: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6FE:;
    /* $A6FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A701:;
    /* $A701: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x57FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A704:;
    /* $A704: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A707:;
    /* $A707: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A709:;
    /* $A709: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A70B:;
    /* $A70B: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70E:;
    /* $A70E: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFDC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A711:;
    /* $A711: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A713:;
    /* $A713: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A718:;
    /* $A718: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A71B:;
    /* $A71B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FD7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A71E:;
    /* $A71E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A721:;
    /* $A721: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A724:;
    /* $A724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A727:;
    /* $A727: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A72A:;
    /* $A72A: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A72D:;
    /* $A72D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A730:;
    /* $A730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A733:;
    /* $A733: FC */ maybe_trigger_vblank(4); (void)nes_read((0x5FFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A736:;
    /* $A736: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A739:;
    /* $A739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73C:;
    /* $A73C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73F:;
    /* $A73F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A741:;
    /* $A741: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A743:;
    /* $A743: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A745:;
    /* $A745: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF6FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A748:;
    /* $A748: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7F7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A74B:;
    /* $A74B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74E:;
    /* $A74E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A751:;
    /* $A751: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A756:;
    /* $A756: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A759:;
    /* $A759: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A75B:;
    /* $A75B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A75D:;
    /* $A75D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A760:;
    /* $A760: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A763:;
    /* $A763: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A766:;
    /* $A766: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A769:;
    /* $A769: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A76B:;
    /* $A76B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76E:;
    /* $A76E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFE5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A771:;
    /* $A771: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A773:;
    /* $A773: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A775:;
    /* $A775: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A777:;
    /* $A777: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77A:;
    /* $A77A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77D:;
    /* $A77D: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77F:;
    /* $A77F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A781:;
    /* $A781: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF27 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A787:;
    /* $A787: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A78A:;
    /* $A78A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A78D:;
    /* $A78D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A790:;
    /* $A790: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A793:;
    /* $A793: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A795:;
    /* $A795: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A798:;
    /* $A798: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A0:;
    /* $A7A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A3:;
    /* $A7A3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A5:;
    /* $A7A5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A8:;
    /* $A7A8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AB:;
    /* $A7AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AD:;
    /* $A7AD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B0:;
    /* $A7B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B3:;
    /* $A7B3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7B6:;
    /* $A7B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B9:;
    /* $A7B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BB:;
    /* $A7BB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BE:;
    /* $A7BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C1:;
    /* $A7C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x75FB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C7:;
    /* $A7C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CA:;
    /* $A7CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CD:;
    /* $A7CD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7D0:;
    /* $A7D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D3:;
    /* $A7D3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D5:;
    /* $A7D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A7D8:;
    /* $A7D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7DB:;
    /* $A7DB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7DE:;
    /* $A7DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E1:;
    /* $A7E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E4:;
    /* $A7E4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E7:;
    /* $A7E7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7E9:;
    /* $A7E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EF:;
    /* $A7EF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F2:;
    /* $A7F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F5:;
    /* $A7F5: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7F7:;
    /* $A7F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FA:;
    /* $A7FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FD:;
    /* $A7FD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FF:;
    /* $A7FF: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
label_A803:; return;
label_A804:; return;
label_A805:; return;
label_A806:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A811:; return;
label_A812:; return;
label_A813:; return;
label_A814:; return;
label_A815:; return;
label_A816:; return;
label_A817:; return;
label_A818:; return;
label_A819:; return;
label_A81A:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A820:; return;
label_A821:; return;
label_A822:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A82A:; return;
label_A82B:; return;
label_A82D:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A832:; return;
label_A833:; return;
label_A834:; return;
label_A835:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A841:; return;
label_A843:; return;
label_A844:; return;
label_A845:; return;
label_A846:; return;
label_A847:; return;
label_A848:; return;
label_A849:; return;
label_A84A:; return;
label_A84B:; return;
label_A84C:; return;
label_A84D:; return;
label_A84E:; return;
label_A84F:; return;
label_A850:; return;
label_A851:; return;
label_A852:; return;
label_A853:; return;
label_A854:; return;
label_A855:; return;
label_A856:; return;
label_A857:; return;
label_A858:; return;
label_A859:; return;
label_A85A:; return;
label_A85B:; return;
label_A85C:; return;
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
label_A86A:; return;
label_A86B:; return;
label_A86C:; return;
label_A86D:; return;
label_A86E:; return;
label_A86F:; return;
label_A870:; return;
label_A871:; return;
label_A872:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
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
label_A88F:; return;
label_A890:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A8A0:; return;
label_A8A1:; return;
label_A8A2:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8A8:; return;
label_A8A9:; return;
label_A8AA:; return;
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
label_A8B9:; return;
label_A8BA:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C0:; return;
label_A8C1:; return;
label_A8C2:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C7:; return;
label_A8C8:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CE:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D1:; return;
label_A8D2:; return;
label_A8D3:; return;
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
label_A8E2:; return;
label_A8E3:; return;
label_A8E4:; return;
label_A8E5:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EC:; return;
label_A8ED:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F0:; return;
label_A8F1:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F4:; return;
label_A8F5:; return;
label_A8F6:; return;
label_A8F9:; return;
label_A8FA:; return;
label_A8FB:; return;
label_A8FC:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A901:; return;
label_A902:; return;
label_A903:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90A:; return;
label_A90B:; return;
label_A90C:; return;
label_A90D:; return;
label_A90F:; return;
label_A910:; return;
label_A911:; return;
label_A913:; return;
label_A915:; return;
label_A917:; return;
label_A918:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A924:; return;
label_A925:; return;
label_A928:; return;
label_A929:; return;
label_A92A:; return;
label_A92B:; return;
label_A92C:; return;
label_A92D:; return;
label_A92E:; return;
label_A92F:; return;
label_A931:; return;
label_A932:; return;
label_A933:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93C:; return;
label_A93D:; return;
label_A93F:; return;
label_A940:; return;
label_A943:; return;
label_A945:; return;
label_A947:; return;
label_A948:; return;
label_A949:; return;
label_A94A:; return;
label_A94B:; return;
label_A94C:; return;
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
label_A95A:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95F:; return;
label_A960:; return;
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
label_A976:; return;
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
label_A988:; return;
label_A989:; return;
label_A98A:; return;
label_A98B:; return;
label_A98C:; return;
label_A98D:; return;
label_A98E:; return;
label_A990:; return;
label_A991:; return;
label_A992:; return;
label_A993:; return;
label_A994:; return;
label_A995:; return;
label_A996:; return;
label_A997:; return;
label_A998:; return;
label_A999:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A1:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A4:; return;
label_A9A5:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A8:; return;
label_A9A9:; return;
label_A9AA:; return;
label_A9AB:; return;
label_A9AC:; return;
label_A9AD:; return;
label_A9AE:; return;
label_A9AF:; return;
label_A9B0:; return;
label_A9B1:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B6:; return;
label_A9B7:; return;
label_A9B8:; return;
label_A9B9:; return;
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
label_A9C7:; return;
label_A9C8:; return;
label_A9C9:; return;
label_A9CA:; return;
label_A9CB:; return;
label_A9CC:; return;
label_A9CD:; return;
label_A9CE:; return;
label_A9CF:; return;
label_A9D1:; return;
label_A9D2:; return;
label_A9D3:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D6:; return;
label_A9D7:; return;
label_A9D8:; return;
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
label_A9E5:; return;
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
label_A9F3:; return;
label_A9F4:; return;
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
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA22:; return;
label_AA23:; return;
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
label_AA36:; return;
label_AA37:; return;
label_AA38:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA44:; return;
label_AA47:; return;
label_AA48:; return;
label_AA4B:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA51:; return;
label_AA52:; return;
label_AA53:; return;
label_AA54:; return;
label_AA55:; return;
label_AA56:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA63:; return;
label_AA65:; return;
label_AA67:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6D:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA80:; return;
label_AA83:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8B:; return;
label_AA8C:; return;
label_AA8D:; return;
label_AA8E:; return;
label_AA91:; return;
label_AA93:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA0:; return;
label_AAA1:; return;
label_AAA2:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAD:; return;
label_AAAE:; return;
label_AAB1:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB9:; return;
label_AABB:; return;
label_AABD:; return;
label_AABE:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC5:; return;
label_AAC7:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACA:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD5:; return;
label_AAD6:; return;
label_AAD9:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AAE1:; return;
label_AAE3:; return;
label_AAE5:; return;
label_AAE6:; return;
label_AAE7:; return;
label_AAE8:; return;
label_AAE9:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAED:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF3:; return;
label_AAF4:; return;
label_AAF5:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFC:; return;
label_AAFD:; return;
label_AAFE:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB06:; return;
label_AB08:; return;
label_AB0A:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB17:; return;
label_AB18:; return;
label_AB19:; return;
label_AB1A:; return;
label_AB1B:; return;
label_AB1C:; return;
label_AB1E:; return;
label_AB20:; return;
label_AB23:; return;
label_AB25:; return;
label_AB27:; return;
label_AB29:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB31:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3E:; return;
label_AB41:; return;
label_AB42:; return;
label_AB43:; return;
label_AB44:; return;
label_AB45:; return;
label_AB46:; return;
label_AB48:; return;
label_AB49:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB52:; return;
label_AB53:; return;
label_AB54:; return;
label_AB55:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB61:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6A:; return;
label_AB6B:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB6E:; return;
label_AB6F:; return;
label_AB70:; return;
label_AB71:; return;
label_AB72:; return;
label_AB73:; return;
label_AB74:; return;
label_AB75:; return;
label_AB77:; return;
label_AB78:; return;
label_AB79:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7C:; return;
label_AB7D:; return;
label_AB7E:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB84:; return;
label_AB85:; return;
label_AB86:; return;
label_AB89:; return;
label_AB8A:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8D:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB91:; return;
label_AB92:; return;
label_AB93:; return;
label_AB94:; return;
label_AB95:; return;
label_AB96:; return;
label_AB97:; return;
label_AB98:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9B:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9E:; return;
label_AB9F:; return;
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
label_ABAC:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB2:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB5:; return;
label_ABB6:; return;
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
label_ABC6:; return;
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
label_ABD2:; return;
label_ABD3:; return;
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
label_ABE4:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEA:; return;
label_ABEB:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABEE:; return;
label_ABEF:; return;
label_ABF0:; return;
label_ABF1:; return;
label_ABF2:; return;
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
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC05:; return;
label_AC06:; return;
label_AC07:; return;
label_AC08:; return;
label_AC09:; return;
label_AC0A:; return;
label_AC0B:; return;
label_AC0C:; return;
label_AC0D:; return;
label_AC0E:; return;
label_AC0F:; return;
label_AC10:; return;
label_AC11:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1B:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC20:; return;
label_AC21:; return;
label_AC22:; return;
label_AC23:; return;
label_AC25:; return;
label_AC26:; return;
label_AC28:; return;
label_AC29:; return;
label_AC2A:; return;
label_AC2B:; return;
label_AC2C:; return;
label_AC2D:; return;
label_AC2E:; return;
label_AC2F:; return;
label_AC30:; return;
label_AC31:; return;
label_AC32:; return;
label_AC33:; return;
label_AC34:; return;
label_AC35:; return;
label_AC36:; return;
label_AC37:; return;
label_AC38:; return;
label_AC39:; return;
label_AC3A:; return;
label_AC3B:; return;
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC41:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC46:; return;
label_AC47:; return;
label_AC48:; return;
label_AC4A:; return;
label_AC4B:; return;
label_AC4C:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC55:; return;
label_AC56:; return;
label_AC57:; return;
label_AC59:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC61:; return;
label_AC62:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6C:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC74:; return;
label_AC75:; return;
label_AC76:; return;
label_AC77:; return;
label_AC78:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC81:; return;
label_AC82:; return;
label_AC83:; return;
label_AC84:; return;
label_AC85:; return;
label_AC87:; return;
label_AC88:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8D:; return;
label_AC8F:; return;
label_AC90:; return;
label_AC91:; return;
label_AC92:; return;
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC97:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA7:; return;
label_ACA8:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB2:; return;
label_ACB3:; return;
label_ACB4:; return;
label_ACB5:; return;
label_ACB6:; return;
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
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC7:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDA:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE5:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACE9:; return;
label_ACEB:; return;
label_ACEC:; return;
label_ACED:; return;
label_ACEE:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF2:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF5:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFD:; return;
label_ACFF:; return;
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
label_AD0B:; return;
label_AD0C:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD11:; return;
label_AD12:; return;
label_AD13:; return;
label_AD14:; return;
label_AD15:; return;
label_AD16:; return;
label_AD17:; return;
label_AD18:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1B:; return;
label_AD1D:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD25:; return;
label_AD26:; return;
label_AD27:; return;
label_AD28:; return;
label_AD29:; return;
label_AD2A:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2D:; return;
label_AD2E:; return;
label_AD2F:; return;
label_AD30:; return;
label_AD31:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD38:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD41:; return;
label_AD42:; return;
label_AD45:; return;
label_AD46:; return;
label_AD47:; return;
label_AD48:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4D:; return;
label_AD4E:; return;
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
label_AD5E:; return;
label_AD5F:; return;
label_AD61:; return;
label_AD62:; return;
label_AD63:; return;
label_AD64:; return;
label_AD65:; return;
label_AD67:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6C:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
label_AD73:; return;
label_AD74:; return;
label_AD76:; return;
label_AD77:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7A:; return;
label_AD7B:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD7F:; return;
label_AD80:; return;
label_AD81:; return;
label_AD83:; return;
label_AD84:; return;
label_AD85:; return;
label_AD86:; return;
label_AD87:; return;
label_AD88:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8D:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD91:; return;
label_AD92:; return;
label_AD93:; return;
label_AD94:; return;
label_AD95:; return;
label_AD96:; return;
label_AD97:; return;
label_AD98:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA1:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADA9:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAD:; return;
label_ADAE:; return;
label_ADB0:; return;
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
label_ADBD:; return;
label_ADBE:; return;
label_ADBF:; return;
label_ADC0:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC5:; return;
label_ADC6:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCD:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD8:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE1:; return;
label_ADE2:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE5:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADEE:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF4:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF7:; return;
label_ADF8:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_AE00:; return;
label_AE03:; return;
label_AE06:; return;
label_AE07:; return;
label_AE0A:; return;
label_AE0D:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE15:; return;
label_AE18:; return;
label_AE19:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE20:; return;
label_AE22:; return;
label_AE24:; return;
label_AE26:; return;
label_AE29:; return;
label_AE2B:; return;
label_AE2E:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE36:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE41:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE48:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4B:; return;
label_AE4D:; return;
label_AE4E:; return;
label_AE4F:; return;
label_AE50:; return;
label_AE51:; return;
label_AE52:; return;
label_AE53:; return;
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
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE63:; return;
label_AE64:; return;
label_AE66:; return;
label_AE67:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE70:; return;
label_AE71:; return;
label_AE72:; return;
label_AE74:; return;
label_AE75:; return;
label_AE76:; return;
label_AE78:; return;
label_AE79:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE80:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE85:; return;
label_AE86:; return;
label_AE87:; return;
label_AE88:; return;
label_AE89:; return;
label_AE8A:; return;
label_AE8B:; return;
label_AE8C:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE90:; return;
label_AE91:; return;
label_AE92:; return;
label_AE94:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE9B:; return;
label_AE9C:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA5:; return;
label_AEA6:; return;
label_AEA7:; return;
label_AEA8:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAC:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB0:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB8:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC1:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC7:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED2:; return;
label_AED5:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEDF:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE3:; return;
label_AEE4:; return;
label_AEE6:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEB:; return;
label_AEED:; return;
label_AEEE:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF1:; return;
label_AEF2:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF6:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFB:; return;
label_AEFD:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF04:; return;
label_AF05:; return;
label_AF07:; return;
label_AF08:; return;
label_AF09:; return;
label_AF0B:; return;
label_AF0D:; return;
label_AF0E:; return;
label_AF0F:; return;
label_AF10:; return;
label_AF12:; return;
label_AF14:; return;
label_AF15:; return;
label_AF16:; return;
label_AF17:; return;
label_AF18:; return;
label_AF19:; return;
label_AF1A:; return;
label_AF1C:; return;
label_AF1D:; return;
label_AF1F:; return;
label_AF20:; return;
label_AF22:; return;
label_AF23:; return;
label_AF24:; return;
label_AF25:; return;
label_AF26:; return;
label_AF27:; return;
label_AF28:; return;
label_AF29:; return;
label_AF2A:; return;
label_AF2B:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF2E:; return;
label_AF2F:; return;
label_AF30:; return;
label_AF32:; return;
label_AF33:; return;
label_AF35:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF42:; return;
label_AF43:; return;
label_AF44:; return;
label_AF45:; return;
label_AF46:; return;
label_AF48:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF52:; return;
label_AF53:; return;
label_AF56:; return;
label_AF58:; return;
label_AF59:; return;
label_AF5B:; return;
label_AF5E:; return;
label_AF5F:; return;
label_AF60:; return;
label_AF62:; return;
label_AF64:; return;
label_AF65:; return;
label_AF67:; return;
label_AF68:; return;
label_AF69:; return;
label_AF6A:; return;
label_AF6D:; return;
label_AF70:; return;
label_AF71:; return;
label_AF72:; return;
label_AF74:; return;
label_AF76:; return;
label_AF77:; return;
label_AF79:; return;
label_AF7B:; return;
label_AF7D:; return;
label_AF80:; return;
label_AF81:; return;
label_AF82:; return;
label_AF83:; return;
label_AF84:; return;
label_AF86:; return;
label_AF87:; return;
label_AF88:; return;
label_AF8A:; return;
label_AF8C:; return;
label_AF8D:; return;
label_AF8F:; return;
label_AF90:; return;
label_AF92:; return;
label_AF93:; return;
label_AF95:; return;
label_AF96:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9C:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA0:; return;
label_AFA1:; return;
label_AFA2:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA6:; return;
label_AFA7:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAA:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFAF:; return;
label_AFB0:; return;
label_AFB3:; return;
label_AFB5:; return;
label_AFB7:; return;
label_AFB8:; return;
label_AFBB:; return;
label_AFBD:; return;
label_AFBF:; return;
label_AFC2:; return;
label_AFC3:; return;
label_AFC4:; return;
label_AFC5:; return;
label_AFC6:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFC9:; return;
label_AFCA:; return;
label_AFCB:; return;
label_AFCC:; return;
label_AFCD:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD1:; return;
label_AFD2:; return;
label_AFD3:; return;
label_AFD4:; return;
label_AFD5:; return;
label_AFD6:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFD9:; return;
label_AFDA:; return;
label_AFDB:; return;
label_AFDC:; return;
label_AFDD:; return;
label_AFDE:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE1:; return;
label_AFE2:; return;
label_AFE3:; return;
label_AFE4:; return;
label_AFE5:; return;
label_AFE6:; return;
label_AFE7:; return;
label_AFE8:; return;
label_AFE9:; return;
label_AFEA:; return;
label_AFEB:; return;
label_AFEC:; return;
label_AFED:; return;
label_AFEE:; return;
label_AFEF:; return;
label_AFF0:; return;
label_AFF1:; return;
label_AFF4:; return;
label_AFF7:; return;
label_AFFA:; return;
label_AFFD:; return;
label_B000:; return;
label_B001:; return;
label_B002:; return;
label_B003:; return;
label_B004:; return;
label_B005:; return;
label_B006:; return;
label_B007:; return;
label_B008:; return;
label_B009:; return;
label_B00A:; return;
label_B00B:; return;
label_B00C:; return;
label_B00D:; return;
label_B00E:; return;
label_B00F:; return;
label_B010:; return;
label_B011:; return;
label_B012:; return;
label_B013:; return;
label_B014:; return;
label_B015:; return;
label_B016:; return;
label_B017:; return;
label_B018:; return;
label_B019:; return;
label_B01A:; return;
label_B01B:; return;
label_B01C:; return;
label_B01D:; return;
label_B01E:; return;
label_B01F:; return;
label_B020:; return;
label_B021:; return;
label_B022:; return;
label_B023:; return;
label_B024:; return;
label_B025:; return;
label_B026:; return;
label_B027:; return;
label_B028:; return;
label_B029:; return;
label_B02A:; return;
label_B02B:; return;
label_B02C:; return;
label_B02D:; return;
label_B02E:; return;
label_B030:; return;
label_B031:; return;
label_B033:; return;
label_B035:; return;
label_B037:; return;
label_B03A:; return;
label_B03B:; return;
label_B03C:; return;
label_B03F:; return;
label_B042:; return;
label_B043:; return;
label_B044:; return;
label_B045:; return;
label_B046:; return;
label_B047:; return;
label_B048:; return;
label_B049:; return;
label_B04A:; return;
label_B04B:; return;
label_B04C:; return;
label_B04D:; return;
label_B04E:; return;
label_B04F:; return;
label_B050:; return;
label_B051:; return;
label_B052:; return;
label_B053:; return;
label_B054:; return;
label_B055:; return;
label_B056:; return;
label_B057:; return;
label_B058:; return;
label_B059:; return;
label_B05A:; return;
label_B05B:; return;
label_B05C:; return;
label_B05D:; return;
label_B05E:; return;
label_B05F:; return;
label_B060:; return;
label_B061:; return;
label_B062:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B066:; return;
label_B067:; return;
label_B068:; return;
label_B069:; return;
label_B06A:; return;
label_B06B:; return;
label_B06C:; return;
label_B06D:; return;
label_B06E:; return;
label_B06F:; return;
label_B070:; return;
label_B072:; return;
label_B075:; return;
label_B077:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07F:; return;
label_B081:; return;
label_B082:; return;
label_B083:; return;
label_B084:; return;
label_B085:; return;
label_B086:; return;
label_B087:; return;
label_B088:; return;
label_B089:; return;
label_B08A:; return;
label_B08B:; return;
label_B08C:; return;
label_B08D:; return;
label_B08E:; return;
label_B08F:; return;
label_B090:; return;
label_B091:; return;
label_B092:; return;
label_B093:; return;
label_B094:; return;
label_B095:; return;
label_B096:; return;
label_B097:; return;
label_B098:; return;
label_B099:; return;
label_B09A:; return;
label_B09B:; return;
label_B09C:; return;
label_B09D:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A0:; return;
label_B0A1:; return;
label_B0A2:; return;
label_B0A3:; return;
label_B0A4:; return;
label_B0A5:; return;
label_B0A6:; return;
label_B0A7:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AB:; return;
label_B0AC:; return;
label_B0AD:; return;
label_B0AE:; return;
label_B0B1:; return;
label_B0B3:; return;
label_B0B6:; return;
label_B0B8:; return;
label_B0BA:; return;
label_B0BB:; return;
label_B0BE:; return;
label_B0BF:; return;
label_B0C2:; return;
label_B0C3:; return;
label_B0C4:; return;
label_B0C5:; return;
label_B0C6:; return;
label_B0C7:; return;
label_B0C8:; return;
label_B0C9:; return;
label_B0CA:; return;
label_B0CB:; return;
label_B0CC:; return;
label_B0CD:; return;
label_B0CE:; return;
label_B0CF:; return;
label_B0D0:; return;
label_B0D1:; return;
label_B0D2:; return;
label_B0D3:; return;
label_B0D4:; return;
label_B0D5:; return;
label_B0D6:; return;
label_B0D7:; return;
label_B0D8:; return;
label_B0D9:; return;
label_B0DA:; return;
label_B0DB:; return;
label_B0DC:; return;
label_B0DD:; return;
label_B0DE:; return;
label_B0DF:; return;
label_B0E0:; return;
label_B0E1:; return;
label_B0E2:; return;
label_B0E3:; return;
label_B0E4:; return;
label_B0E5:; return;
label_B0E6:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0EA:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F0:; return;
label_B0F1:; return;
label_B0F4:; return;
label_B0F5:; return;
label_B0F8:; return;
}

void func_A6AF_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A6AF_b4");
#endif
label_A6AF:;
    /* $A6AF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B1:;
    /* $A6B1: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xF7FE + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6B4:;
    /* $A6B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B7:;
    /* $A6B7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6BA:;
    /* $A6BA: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFFFD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6BD:;
    /* $A6BD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6BF:;
    /* $A6BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C2:;
    /* $A6C2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C5:;
    /* $A6C5: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x57F7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6C8:;
    /* $A6C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6CB:;
    /* $A6CB: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A6CD:;
    /* $A6CD: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D0:;
    /* $A6D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6D3:;
    /* $A6D3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D6:;
    /* $A6D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6D9:;
    /* $A6D9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DB:;
    /* $A6DB: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DD:;
    /* $A6DD: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6E0:;
    /* $A6E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E3:;
    /* $A6E3: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6E6:;
    /* $A6E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E9:;
    /* $A6E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6EC:;
    /* $A6EC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6EF:;
    /* $A6EF: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6F2:;
    /* $A6F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F5:;
    /* $A6F5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F8:;
    /* $A6F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6FB:;
    /* $A6FB: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6FE:;
    /* $A6FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A701:;
    /* $A701: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x57FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A704:;
    /* $A704: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A707:;
    /* $A707: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A709:;
    /* $A709: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A70B:;
    /* $A70B: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70E:;
    /* $A70E: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFDC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A711:;
    /* $A711: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A713:;
    /* $A713: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A718:;
    /* $A718: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A71B:;
    /* $A71B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FD7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A71E:;
    /* $A71E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A721:;
    /* $A721: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A724:;
    /* $A724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A727:;
    /* $A727: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A72A:;
    /* $A72A: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A72D:;
    /* $A72D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A730:;
    /* $A730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A733:;
    /* $A733: FC */ maybe_trigger_vblank(4); (void)nes_read((0x5FFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A736:;
    /* $A736: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A739:;
    /* $A739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73C:;
    /* $A73C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73F:;
    /* $A73F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A741:;
    /* $A741: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A743:;
    /* $A743: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A745:;
    /* $A745: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF6FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A748:;
    /* $A748: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7F7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A74B:;
    /* $A74B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74E:;
    /* $A74E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A751:;
    /* $A751: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A756:;
    /* $A756: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A759:;
    /* $A759: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A75B:;
    /* $A75B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A75D:;
    /* $A75D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A760:;
    /* $A760: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A763:;
    /* $A763: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A766:;
    /* $A766: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A769:;
    /* $A769: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A76B:;
    /* $A76B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76E:;
    /* $A76E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFE5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A771:;
    /* $A771: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A773:;
    /* $A773: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A775:;
    /* $A775: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A777:;
    /* $A777: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77A:;
    /* $A77A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77D:;
    /* $A77D: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77F:;
    /* $A77F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A781:;
    /* $A781: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF27 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A787:;
    /* $A787: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A78A:;
    /* $A78A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A78D:;
    /* $A78D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A790:;
    /* $A790: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A793:;
    /* $A793: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A795:;
    /* $A795: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A798:;
    /* $A798: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A0:;
    /* $A7A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A3:;
    /* $A7A3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A5:;
    /* $A7A5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A8:;
    /* $A7A8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AB:;
    /* $A7AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AD:;
    /* $A7AD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B0:;
    /* $A7B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B3:;
    /* $A7B3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7B6:;
    /* $A7B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B9:;
    /* $A7B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BB:;
    /* $A7BB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BE:;
    /* $A7BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C1:;
    /* $A7C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x75FB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C7:;
    /* $A7C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CA:;
    /* $A7CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CD:;
    /* $A7CD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7D0:;
    /* $A7D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D3:;
    /* $A7D3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D5:;
    /* $A7D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A7D8:;
    /* $A7D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7DB:;
    /* $A7DB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7DE:;
    /* $A7DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E1:;
    /* $A7E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E4:;
    /* $A7E4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E7:;
    /* $A7E7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7E9:;
    /* $A7E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EF:;
    /* $A7EF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F2:;
    /* $A7F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F5:;
    /* $A7F5: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7F7:;
    /* $A7F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FA:;
    /* $A7FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FD:;
    /* $A7FD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FF:;
    /* $A7FF: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
}

void func_A6E5_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A6E5_b4");
#endif
label_A6E5:;
    /* $A6E5: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6E8:;
    /* $A6E8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6EB:;
    /* $A6EB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6EE:;
    /* $A6EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F1:;
    /* $A6F1: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6F3:;
    /* $A6F3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F5:;
    /* $A6F5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x5FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F8:;
    /* $A6F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6FB:;
    /* $A6FB: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6FE:;
    /* $A6FE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A701:;
    /* $A701: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x57FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A704:;
    /* $A704: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A707:;
    /* $A707: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A709:;
    /* $A709: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A70B:;
    /* $A70B: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A70E:;
    /* $A70E: EF */ maybe_trigger_vblank(6); { uint16_t a=0xBFDC; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A711:;
    /* $A711: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A713:;
    /* $A713: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A715:;
    /* $A715: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A718:;
    /* $A718: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A71B:;
    /* $A71B: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FD7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A71E:;
    /* $A71E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A721:;
    /* $A721: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A724:;
    /* $A724: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A727:;
    /* $A727: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A72A:;
    /* $A72A: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A72D:;
    /* $A72D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A730:;
    /* $A730: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A733:;
    /* $A733: FC */ maybe_trigger_vblank(4); (void)nes_read((0x5FFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A736:;
    /* $A736: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A739:;
    /* $A739: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73C:;
    /* $A73C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73F:;
    /* $A73F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A741:;
    /* $A741: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A743:;
    /* $A743: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A745:;
    /* $A745: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF6FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A748:;
    /* $A748: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7F7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A74B:;
    /* $A74B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74E:;
    /* $A74E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A751:;
    /* $A751: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A756:;
    /* $A756: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A759:;
    /* $A759: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A75B:;
    /* $A75B: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A75D:;
    /* $A75D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A760:;
    /* $A760: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A763:;
    /* $A763: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A766:;
    /* $A766: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A769:;
    /* $A769: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A76B:;
    /* $A76B: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76E:;
    /* $A76E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFE5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A771:;
    /* $A771: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A773:;
    /* $A773: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A775:;
    /* $A775: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A777:;
    /* $A777: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77A:;
    /* $A77A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77D:;
    /* $A77D: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77F:;
    /* $A77F: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A781:;
    /* $A781: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF27 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A787:;
    /* $A787: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A78A:;
    /* $A78A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A78D:;
    /* $A78D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A790:;
    /* $A790: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A793:;
    /* $A793: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A795:;
    /* $A795: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A798:;
    /* $A798: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A0:;
    /* $A7A0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A3:;
    /* $A7A3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7A5:;
    /* $A7A5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A8:;
    /* $A7A8: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF7E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AB:;
    /* $A7AB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AD:;
    /* $A7AD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B0:;
    /* $A7B0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B3:;
    /* $A7B3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7B6:;
    /* $A7B6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B9:;
    /* $A7B9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BB:;
    /* $A7BB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BE:;
    /* $A7BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C1:;
    /* $A7C1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x75FB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C7:;
    /* $A7C7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CA:;
    /* $A7CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CD:;
    /* $A7CD: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7FFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7D0:;
    /* $A7D0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D3:;
    /* $A7D3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D5:;
    /* $A7D5: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A7D8:;
    /* $A7D8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7DB:;
    /* $A7DB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7DE:;
    /* $A7DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E1:;
    /* $A7E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E4:;
    /* $A7E4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E7:;
    /* $A7E7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7E9:;
    /* $A7E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7BFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EF:;
    /* $A7EF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7F2:;
    /* $A7F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F5:;
    /* $A7F5: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7F7:;
    /* $A7F7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FA:;
    /* $A7FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FD:;
    /* $A7FD: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7FF:;
    /* $A7FF: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
}

void func_A81F_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A81F_b4");
#endif
label_A81F:;
    /* $A81F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A821; }
label_A821:;
    /* $A821: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A822:;
    /* $A822: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA822); return;
}

void func_A194_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A194_b4");
#endif
label_A194:;
    /* $A194: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x29 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A196:;
    /* $A196: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A198:;
    /* $A198: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x81BA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A19E:; /* needle_man_throw_vel_y_sub */
    /* $A19E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x81C2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1A4:;
    /* $A1A4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_A1A6:;
    /* $A1A6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A1A8:;
    /* $A1A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AF; }
label_A1AA:;
    /* $A1AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_A1AC:;
    /* $A1AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1AF:;
    /* $A1AF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x55; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A1B1:;
    /* $A1B1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A176_b4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A197;
    }
label_A176:;
    /* $A176: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0178); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA176, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A179:;
    /* $A179: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A1AF; }
label_A17B:;
    /* $A17B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x017F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA17D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A180:;
    /* $A180: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x19; FLAG_NZ(g_cpu.A);
label_A182:;
    /* $A182: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A185:;
    /* $A185: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A187:;
    /* $A187: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A18A:;
    /* $A18A: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A18D:;
    /* $A18D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A190:;
    /* $A190: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A193:;
    /* $A193: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A197:;
    /* $A197: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A198:;
    /* $A198: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x81BA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A19B:;
    /* $A19B: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A19E:; /* needle_man_throw_vel_y_sub */
    /* $A19E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x81C2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1A4:;
    /* $A1A4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x55); FLAG_NZ(g_cpu.A);
label_A1A6:;
    /* $A1A6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A1A8:;
    /* $A1A8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A1AF; }
label_A1AA:;
    /* $A1AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_A1AC:;
    /* $A1AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x01AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA1AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A1AF:;
    /* $A1AF: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x55; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A1B1:;
    /* $A1B1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A176_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A176_b4");
#endif
    func_A176_b4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A197_b4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A197_b4");
#endif
    func_A176_b4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}
