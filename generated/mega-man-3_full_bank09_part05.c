/* mega-man-3_full_bank09_part05.c — PRG bank 9 function bodies (sub-part 5).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_A551_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A598;
    }
label_A551:;
    /* $A551: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7D7F + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A554:;
    /* $A554: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A557:;
    /* $A557: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x4FBF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A55A:;
    /* $A55A: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A55D:;
    /* $A55D: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A55F:;
    /* $A55F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A562:;
    /* $A562: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A565:;
    /* $A565: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A568:;
    /* $A568: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x5F + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A56A:;
    /* $A56A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A56D:;
    /* $A56D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A56F:;
    /* $A56F: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A571:;
    /* $A571: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A573:;
    /* $A573: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A575:;
    /* $A575: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A578:;
    /* $A578: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A57B:;
    /* $A57B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A57E:;
    /* $A57E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7F7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A581:;
    /* $A581: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A583:;
    /* $A583: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A585:;
    /* $A585: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A587:;
    /* $A587: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A589:;
    /* $A589: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A58C:;
    /* $A58C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFA9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A58F:;
    /* $A58F: 9D */ maybe_trigger_vblank(5); nes_write((0xB5FF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A592:;
    /* $A592: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBD7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A595:;
    /* $A595: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A598:;
    /* $A598: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFB7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A59B:;
    /* $A59B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A59D:;
    /* $A59D: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A59F:;
    /* $A59F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5A2:;
    /* $A5A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFD7B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5A5:;
    /* $A5A5: 9D */ maybe_trigger_vblank(5); nes_write((0xFBFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A5A8:;
    /* $A5A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5AB:;
    /* $A5AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5AE:;
    /* $A5AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5B1:;
    /* $A5B1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5DFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5B4:;
    /* $A5B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5B7:;
    /* $A5B7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7D + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5B9:;
    /* $A5B9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A5BB:;
    /* $A5BB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5BE:;
    /* $A5BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5C1:;
    /* $A5C1: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5C4:;
    /* $A5C4: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x75 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A5C6:;
    /* $A5C6: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3F) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5C8:;
    /* $A5C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBE57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5CB:;
    /* $A5CB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5CE:;
    /* $A5CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5D1:;
    /* $A5D1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5D3:;
    /* $A5D3: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A5D5:;
    /* $A5D5: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5D7:;
    /* $A5D7: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5D9:;
    /* $A5D9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A5DB:;
    /* $A5DB: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5DD:;
    /* $A5DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5E0:;
    /* $A5E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5E3:;
    /* $A5E3: 5C */ maybe_trigger_vblank(4); (void)nes_read((0xFDFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5E6:;
    /* $A5E6: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFD7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5E9:;
    /* $A5E9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5EB:;
    /* $A5EB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD5FD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5EE:;
    /* $A5EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDF75 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5F1:;
    /* $A5F1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5F4:;
    /* $A5F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5F7:;
    /* $A5F7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5FA:;
    /* $A5FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5FD:;
    /* $A5FD: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A600:; /* top_spin_damage_table */
    /* $A600: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x1F + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A602:;
    /* $A602: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A605:;
    /* $A605: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF5FD); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A608:;
    /* $A608: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A60B:;
    /* $A60B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xED); FLAG_NZ(g_cpu.A);
label_A60D:;
    /* $A60D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A60F:;
    /* $A60F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDEF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A612:;
    /* $A612: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDD97 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A615:;
    /* $A615: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A618:;
    /* $A618: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE47 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A61B:;
    /* $A61B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61D:;
    /* $A61D: EF */ maybe_trigger_vblank(6); { uint16_t a=0x7DBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A620:;
    /* $A620: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A623:;
    /* $A623: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x45FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A626:;
    /* $A626: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF59 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A629:;
    /* $A629: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A62C:;
    /* $A62C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A62F:;
    /* $A62F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A632:;
    /* $A632: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A635:;
    /* $A635: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A637:;
    /* $A637: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A639:;
    /* $A639: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A63E:;
    /* $A63E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A641:;
    /* $A641: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A644:;
    /* $A644: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF7D5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A649:;
    /* $A649: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A64B:;
    /* $A64B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A64D:;
    /* $A64D: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A64F:;
    /* $A64F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A650:;
    /* $A650: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A653:;
    /* $A653: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x50FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A656:;
    /* $A656: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xAFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A659:;
    /* $A659: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A65C:;
    /* $A65C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A662:;
    /* $A662: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFCF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A665:;
    /* $A665: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A667:;
    /* $A667: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x6DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A66A:;
    /* $A66A: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A66D:;
    /* $A66D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A670:;
    /* $A670: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A673:;
    /* $A673: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A676:;
    /* $A676: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A679:;
    /* $A679: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A67C:;
    /* $A67C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A682:;
    /* $A682: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x51FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A688:;
    /* $A688: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A68B:;
    /* $A68B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A68D:;
    /* $A68D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A68F:;
    /* $A68F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A692:;
    /* $A692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF97 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A697:;
    /* $A697: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A699:;
    /* $A699: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69C:;
    /* $A69C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5D7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6A1:;
    /* $A6A1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6A4:;
    /* $A6A4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEDD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6A7:;
    /* $A6A7: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A6A9:;
    /* $A6A9: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xBF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6AB:;
    /* $A6AB: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6AE:;
    /* $A6AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B1:;
    /* $A6B1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6B4:;
    /* $A6B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B7:;
    /* $A6B7: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6BA:;
    /* $A6BA: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6BD:;
    /* $A6BD: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6BF:;
    /* $A6BF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C1:;
    /* $A6C1: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C3:;
    /* $A6C3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDCFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6C6:;
    /* $A6C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C9:;
    /* $A6C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6CC:;
    /* $A6CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6CF:;
    /* $A6CF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57DF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6D2:;
    /* $A6D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6D5:;
    /* $A6D5: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A6D7:;
    /* $A6D7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6D9:;
    /* $A6D9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6DC:;
    /* $A6DC: EF */ maybe_trigger_vblank(6); { uint16_t a=0x3FF7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DF:;
    /* $A6DF: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E2:;
    /* $A6E2: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6E5:;
    /* $A6E5: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6E8:;
    /* $A6E8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6EB:;
    /* $A6EB: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A6ED:;
    /* $A6ED: 67 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6EF:;
    /* $A6EF: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F2:;
    /* $A6F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xE777 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F5:;
    /* $A6F5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6F8:;
    /* $A6F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEF75 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6FB:;
    /* $A6FB: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF7FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6FE:;
    /* $A6FE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A701:;
    /* $A701: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A703:;
    /* $A703: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7D7E); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A706:;
    /* $A706: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A709:;
    /* $A709: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A70C:;
    /* $A70C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF47 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A70F:;
    /* $A70F: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A711:;
    /* $A711: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A713:;
    /* $A713: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7CFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A716:;
    /* $A716: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A719:;
    /* $A719: FC */ maybe_trigger_vblank(4); (void)nes_read((0xD7FB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A71C:;
    /* $A71C: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A71F:;
    /* $A71F: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A721:;
    /* $A721: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A723:;
    /* $A723: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A725:;
    /* $A725: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A727:;
    /* $A727: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A729:;
    /* $A729: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A72C:;
    /* $A72C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A72F:;
    /* $A72F: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A731:;
    /* $A731: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A733:;
    /* $A733: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A736:;
    /* $A736: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A739:;
    /* $A739: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A73C:;
    /* $A73C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73F:;
    /* $A73F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A741:;
    /* $A741: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A743:;
    /* $A743: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A745:;
    /* $A745: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A748:;
    /* $A748: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A74B:;
    /* $A74B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A74D:;
    /* $A74D: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A750:;
    /* $A750: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFC1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xCFFD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A756:;
    /* $A756: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7F + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A758:;
    /* $A758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A75B:;
    /* $A75B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A75D:;
    /* $A75D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A75F:;
    /* $A75F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A761:;
    /* $A761: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A763:;
    /* $A763: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A766:;
    /* $A766: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF77 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A769:;
    /* $A769: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5EFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A76C:;
    /* $A76C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF75 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76F:;
    /* $A76F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBE + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A771:;
    /* $A771: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A774:;
    /* $A774: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A777:;
    /* $A777: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A779:;
    /* $A779: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77C:;
    /* $A77C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF27 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77F:;
    /* $A77F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x71FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A782:;
    /* $A782: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF1D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A785:;
    /* $A785: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A787:;
    /* $A787: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A789:;
    /* $A789: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A78B:;
    /* $A78B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A78D:;
    /* $A78D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A78F:;
    /* $A78F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A792:;
    /* $A792: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A795:;
    /* $A795: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A798:;
    /* $A798: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A79D:;
    /* $A79D: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A79F:;
    /* $A79F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7DFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A2:;
    /* $A7A2: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7A5:;
    /* $A7A5: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x75EF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A8:;
    /* $A7A8: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7AB:;
    /* $A7AB: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AE:;
    /* $A7AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B1:;
    /* $A7B1: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B3:;
    /* $A7B3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B6:;
    /* $A7B6: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFED1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B9:;
    /* $A7B9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A7BB:;
    /* $A7BB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BD:;
    /* $A7BD: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7BF:;
    /* $A7BF: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7C1:;
    /* $A7C1: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C7:;
    /* $A7C7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7CA:;
    /* $A7CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CD:;
    /* $A7CD: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7CF:;
    /* $A7CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D2:;
    /* $A7D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D5:;
    /* $A7D5: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7D7:;
    /* $A7D7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77F7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7DA:;
    /* $A7DA: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF7F + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7DD:;
    /* $A7DD: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xFF75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7E3:;
    /* $A7E3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7E6:;
    /* $A7E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E9:;
    /* $A7E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EF:;
    /* $A7EF: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7F1:;
    /* $A7F1: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7F4:;
    /* $A7F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F7:;
    /* $A7F7: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xB7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7FC:;
    /* $A7FC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0800 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
}

void func_A551_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A551_b9");
#endif
    func_A551_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A598_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A598_b9");
#endif
    func_A551_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A597_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A597_b9");
#endif
label_A597:;
    /* $A597: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A599:;
    /* $A599: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FB + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A59C:;
    /* $A59C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A59F:;
    /* $A59F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5A2:;
    /* $A5A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFD7B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5A5:;
    /* $A5A5: 9D */ maybe_trigger_vblank(5); nes_write((0xFBFF + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A5A8:;
    /* $A5A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5AB:;
    /* $A5AB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5AE:;
    /* $A5AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5B1:;
    /* $A5B1: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5DFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5B4:;
    /* $A5B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5B7:;
    /* $A5B7: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7D + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5B9:;
    /* $A5B9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A5BB:;
    /* $A5BB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5BE:;
    /* $A5BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5C1:;
    /* $A5C1: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5C4:;
    /* $A5C4: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x75 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A5C6:;
    /* $A5C6: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3F) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5C8:;
    /* $A5C8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBE57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5CB:;
    /* $A5CB: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5CE:;
    /* $A5CE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5D1:;
    /* $A5D1: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5D3:;
    /* $A5D3: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A5D5:;
    /* $A5D5: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5D7:;
    /* $A5D7: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5D9:;
    /* $A5D9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A5DB:;
    /* $A5DB: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5DD:;
    /* $A5DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x77FD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5E0:;
    /* $A5E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5E3:;
    /* $A5E3: 5C */ maybe_trigger_vblank(4); (void)nes_read((0xFDFF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5E6:;
    /* $A5E6: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFD7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5E9:;
    /* $A5E9: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5EB:;
    /* $A5EB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD5FD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A5EE:;
    /* $A5EE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDF75 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5F1:;
    /* $A5F1: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5F4:;
    /* $A5F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5F7:;
    /* $A5F7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A5FA:;
    /* $A5FA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A5FD:;
    /* $A5FD: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A600:; /* top_spin_damage_table */
    /* $A600: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x1F + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A602:;
    /* $A602: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A605:;
    /* $A605: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF5FD); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A608:;
    /* $A608: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A60B:;
    /* $A60B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xED); FLAG_NZ(g_cpu.A);
label_A60D:;
    /* $A60D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A60F:;
    /* $A60F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDEF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A612:;
    /* $A612: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDD97 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A615:;
    /* $A615: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDDFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A618:;
    /* $A618: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFE47 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A61B:;
    /* $A61B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61D:;
    /* $A61D: EF */ maybe_trigger_vblank(6); { uint16_t a=0x7DBF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A620:;
    /* $A620: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A623:;
    /* $A623: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x45FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A626:;
    /* $A626: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF59 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A629:;
    /* $A629: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A62C:;
    /* $A62C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A62F:;
    /* $A62F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A632:;
    /* $A632: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A635:;
    /* $A635: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A637:;
    /* $A637: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A639:;
    /* $A639: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A63E:;
    /* $A63E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A641:;
    /* $A641: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A644:;
    /* $A644: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF7D5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A649:;
    /* $A649: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A64B:;
    /* $A64B: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A64D:;
    /* $A64D: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A64F:;
    /* $A64F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A650:;
    /* $A650: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A653:;
    /* $A653: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x50FF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A656:;
    /* $A656: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xAFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A659:;
    /* $A659: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A65C:;
    /* $A65C: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A662:;
    /* $A662: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFCF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A665:;
    /* $A665: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xBF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A667:;
    /* $A667: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x6DFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A66A:;
    /* $A66A: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A66D:;
    /* $A66D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A670:;
    /* $A670: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A673:;
    /* $A673: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A676:;
    /* $A676: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A679:;
    /* $A679: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A67C:;
    /* $A67C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A682:;
    /* $A682: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x51FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A688:;
    /* $A688: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A68B:;
    /* $A68B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A68D:;
    /* $A68D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A68F:;
    /* $A68F: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A692:;
    /* $A692: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF97 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A697:;
    /* $A697: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A699:;
    /* $A699: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FD + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69C:;
    /* $A69C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5D7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6A1:;
    /* $A6A1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6A4:;
    /* $A6A4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFEDD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6A7:;
    /* $A6A7: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A6A9:;
    /* $A6A9: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xBF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6AB:;
    /* $A6AB: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6AE:;
    /* $A6AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B1:;
    /* $A6B1: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6B4:;
    /* $A6B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B7:;
    /* $A6B7: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6BA:;
    /* $A6BA: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6BD:;
    /* $A6BD: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6BF:;
    /* $A6BF: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C1:;
    /* $A6C1: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C3:;
    /* $A6C3: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDCFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6C6:;
    /* $A6C6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6C9:;
    /* $A6C9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6CC:;
    /* $A6CC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6CF:;
    /* $A6CF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57DF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6D2:;
    /* $A6D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6D5:;
    /* $A6D5: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A6D7:;
    /* $A6D7: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6D9:;
    /* $A6D9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6DC:;
    /* $A6DC: EF */ maybe_trigger_vblank(6); { uint16_t a=0x3FF7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6DF:;
    /* $A6DF: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E2:;
    /* $A6E2: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6E5:;
    /* $A6E5: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6E8:;
    /* $A6E8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFF7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6EB:;
    /* $A6EB: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A6ED:;
    /* $A6ED: 67 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6EF:;
    /* $A6EF: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x57FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F2:;
    /* $A6F2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xE777 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6F5:;
    /* $A6F5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6F8:;
    /* $A6F8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEF75 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6FB:;
    /* $A6FB: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF7FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6FE:;
    /* $A6FE: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A701:;
    /* $A701: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A703:;
    /* $A703: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7D7E); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A706:;
    /* $A706: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A709:;
    /* $A709: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A70C:;
    /* $A70C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF47 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A70F:;
    /* $A70F: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A711:;
    /* $A711: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A713:;
    /* $A713: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7CFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A716:;
    /* $A716: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A719:;
    /* $A719: FC */ maybe_trigger_vblank(4); (void)nes_read((0xD7FB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A71C:;
    /* $A71C: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A71F:;
    /* $A71F: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A721:;
    /* $A721: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A723:;
    /* $A723: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A725:;
    /* $A725: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A727:;
    /* $A727: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A729:;
    /* $A729: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A72C:;
    /* $A72C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF71 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A72F:;
    /* $A72F: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A731:;
    /* $A731: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A733:;
    /* $A733: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A736:;
    /* $A736: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A739:;
    /* $A739: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF5FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A73C:;
    /* $A73C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73F:;
    /* $A73F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A741:;
    /* $A741: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A743:;
    /* $A743: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A745:;
    /* $A745: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0xD1FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A748:;
    /* $A748: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A74B:;
    /* $A74B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A74D:;
    /* $A74D: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x75FF + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A750:;
    /* $A750: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFC1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xCFFD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A756:;
    /* $A756: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7F + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A758:;
    /* $A758: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A75B:;
    /* $A75B: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A75D:;
    /* $A75D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A75F:;
    /* $A75F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A761:;
    /* $A761: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A763:;
    /* $A763: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A766:;
    /* $A766: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFF77 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A769:;
    /* $A769: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x5EFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A76C:;
    /* $A76C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF75 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A76F:;
    /* $A76F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBE + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A771:;
    /* $A771: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x77FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A774:;
    /* $A774: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A777:;
    /* $A777: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A779:;
    /* $A779: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xD5FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77C:;
    /* $A77C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF27 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A77F:;
    /* $A77F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x71FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A782:;
    /* $A782: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF1D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A785:;
    /* $A785: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A787:;
    /* $A787: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A789:;
    /* $A789: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A78B:;
    /* $A78B: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A78D:;
    /* $A78D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A78F:;
    /* $A78F: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A792:;
    /* $A792: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A795:;
    /* $A795: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A798:;
    /* $A798: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7F55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A79B:;
    /* $A79B: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A79D:;
    /* $A79D: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A79F:;
    /* $A79F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7DFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A2:;
    /* $A7A2: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF55 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7A5:;
    /* $A7A5: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x75EF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A8:;
    /* $A7A8: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7AB:;
    /* $A7AB: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7AE:;
    /* $A7AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B1:;
    /* $A7B1: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B3:;
    /* $A7B3: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEDFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B6:;
    /* $A7B6: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFED1 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7B9:;
    /* $A7B9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A7BB:;
    /* $A7BB: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7BD:;
    /* $A7BD: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7BF:;
    /* $A7BF: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7C1:;
    /* $A7C1: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7C4:;
    /* $A7C4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C7:;
    /* $A7C7: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7CA:;
    /* $A7CA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7CD:;
    /* $A7CD: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xEF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7CF:;
    /* $A7CF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x55FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D2:;
    /* $A7D2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D5:;
    /* $A7D5: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7D7:;
    /* $A7D7: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x77F7 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7DA:;
    /* $A7DA: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF7F + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7DD:;
    /* $A7DD: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7E0:;
    /* $A7E0: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xFF75); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7E3:;
    /* $A7E3: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7E6:;
    /* $A7E6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7E9:;
    /* $A7E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x7FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EC:;
    /* $A7EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF5F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7EF:;
    /* $A7EF: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7F1:;
    /* $A7F1: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7F4:;
    /* $A7F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7F7:;
    /* $A7F7: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7F9:;
    /* $A7F9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xB7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7FC:;
    /* $A7FC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7FF:;
    /* $A7FF: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0800 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A802:;
    /* $A802: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA802); return;
}

void func_A81C_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A81C_b9");
#endif
label_A81C:;
    /* $A81C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81C); return;
}

void func_A843_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A843_b9");
#endif
label_A843:;
    /* $A843: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA843); return;
}

void func_A84D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A84D_b9");
#endif
label_A84D:;
    /* $A84D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A84E:;
    /* $A84E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA84E); return;
}

void func_A861_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A861_b9");
#endif
label_A861:;
    /* $A861: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA861); return;
}

void func_A869_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A869_b9");
#endif
label_A869:;
    /* $A869: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A86B; }
label_A86B:;
    /* $A86B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA86B); return;
}

void func_A876_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A876_b9");
#endif
label_A876:;
    /* $A876: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA876); return;
}

void func_A8B3_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8B3_b9");
#endif
label_A8B3:;
    /* $A8B3: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A8B4:;
    /* $A8B4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8B4); return;
}

void func_A8C3_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8C3_b9");
#endif
label_A8C3:;
    /* $A8C3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8C3); return;
}

void func_A8EC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8EC_b9");
#endif
label_A8EC:;
    /* $A8EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8EC); return;
}

void func_A902_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A902_b9");
#endif
label_A902:;
    /* $A902: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA902); return;
}

void func_A915_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A915_b9");
#endif
label_A915:;
    /* $A915: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA915); return;
}

void func_A925_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A925_b9");
#endif
label_A925:;
    /* $A925: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA925); return;
}

void func_A93E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A93E_b9");
#endif
label_A93E:;
    /* $A93E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93E); return;
}

void func_A977_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A977_b9");
#endif
label_A977:;
    /* $A977: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A979:;
    /* $A979: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA979); return;
}

void func_A99F_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A99F_b9");
#endif
label_A99F:;
    /* $A99F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99F); return;
}

void func_A9E6_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9E6_b9");
#endif
label_A9E6:;
    /* $A9E6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9E6); return;
}

void func_A9FA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9FA_b9");
#endif
label_A9FA:;
    /* $A9FA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9FA); return;
}

void func_AA7B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA7B_b9");
#endif
label_AA7B:;
    /* $AA7B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA7D:;
    /* $AA7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7D); return;
}

void func_AA7E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA7E_b9");
#endif
label_AA7E:;
    /* $AA7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7E); return;
}

void func_AA7F_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA7F_b9");
#endif
label_AA7F:;
    /* $AA7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA7F); return;
}

void func_AA86_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA86_b9");
#endif
label_AA86:;
    /* $AA86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA86); return;
}

void func_AA91_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA91_b9");
#endif
label_AA91:;
    /* $AA91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA91); return;
}

void func_AB03_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB03_b9");
#endif
label_AB03:;
    /* $AB03: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AB05; }
label_AB05:;
    /* $AB05: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB05); return;
}

void func_AB06_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB06_b9");
#endif
label_AB06:;
    /* $AB06: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB06); return;
}

void func_AB29_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB29_b9");
#endif
label_AB29:;
    /* $AB29: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB29); return;
}

void func_AB44_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB44_b9");
#endif
label_AB44:;
    /* $AB44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB44); return;
}

void func_AB5B_b9(void) { /* main_bolton_and_nutton */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB5B_b9");
#endif
label_AB5B:; /* main_bolton_and_nutton */
    /* $AB5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5B); return;
}

void func_AB68_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB68_b9");
#endif
label_AB68:;
    /* $AB68: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB68); return;
}

void func_ABA5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABA5_b9");
#endif
label_ABA5:;
    /* $ABA5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ABA7:;
    /* $ABA7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABA8:;
    /* $ABA8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_ABA9:;
    /* $ABA9: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ABAB:;
    /* $ABAB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAB); return;
}

void func_ABCA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABCA_b9");
#endif
label_ABCA:;
    /* $ABCA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABCA); return;
}

void func_ABD5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABD5_b9");
#endif
label_ABD5:;
    /* $ABD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD5); return;
}

void func_AC07_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC07_b9");
#endif
label_AC07:;
    /* $AC07: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC07); return;
}

void func_AC14_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC14_b9");
#endif
label_AC14:;
    /* $AC14: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC14); return;
}

void func_AC19_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC19_b9");
#endif
label_AC19:;
    /* $AC19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC19); return;
}

void func_AC4B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC4B_b9");
#endif
label_AC4B:;
    /* $AC4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4B); return;
}

void func_AC4E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC4E_b9");
#endif
label_AC4E:;
    /* $AC4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4E); return;
}

void func_AC5D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC5D_b9");
#endif
label_AC5D:;
    /* $AC5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5D); return;
}

void func_AC96_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC96_b9");
#endif
label_AC96:;
    /* $AC96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC96); return;
}

void func_ACA4_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACA4_b9");
#endif
label_ACA4:;
    /* $ACA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA4); return;
}

void func_ACB4_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACB4_b9");
#endif
label_ACB4:;
    /* $ACB4: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACB6:;
    /* $ACB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB6); return;
}

void func_ACC7_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACC7_b9");
#endif
label_ACC7:;
    /* $ACC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC7); return;
}

void func_ACE7_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACE7_b9");
#endif
label_ACE7:;
    /* $ACE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE7); return;
}

void func_ACEE_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACEE_b9");
#endif
label_ACEE:;
    /* $ACEE: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACEE; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD1E_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AD25;
    }
label_AD1E:;
    /* $AD1E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AD20:;
    /* $AD20: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AD22:;
    /* $AD22: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD23:;
    /* $AD23: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD25; }
label_AD25:;
    /* $AD25: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD25); return;
}

void func_AD1E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD1E_b9");
#endif
    func_AD1E_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD25_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD25_b9");
#endif
    func_AD1E_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD24_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD24_b9");
#endif
label_AD24:;
    /* $AD24: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD24); return;
}

void func_AD32_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD32_b9");
#endif
label_AD32:;
    /* $AD32: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD33:;
    /* $AD33: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAD33; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ADE0_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_ADEC;
    }
label_ADE0:;
    /* $ADE0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADE2:;
    /* $ADE2: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_ADE4:;
    /* $ADE4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ADF6; }
label_ADE6:;
    /* $ADE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADE6); return;
label_ADE7:;
    /* $ADE7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADE9:;
    /* $ADE9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xADE9; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ADEA:;
    /* $ADEA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ADEB:;
    /* $ADEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEB); return;
label_ADEC:;
    /* $ADEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEC); return;
label_ADED:;
    /* $ADED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADED); return;
label_ADEE:;
    /* $ADEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEE); return;
label_ADEF:;
    /* $ADEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADEF); return;
label_ADF0:;
    /* $ADF0: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADF2:;
    /* $ADF2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_ADF4:;
    /* $ADF4: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADF6:;
    /* $ADF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADF6); return;
}

void func_ADE0_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADE0_b9");
#endif
    func_ADE0_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADEC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADEC_b9");
#endif
    func_ADE0_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE17_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE17_b9");
#endif
label_AE17:;
    /* $AE17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE17); return;
}

void func_AE26_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE26_b9");
#endif
label_AE26:;
    /* $AE26: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AE27:;
    /* $AE27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE27); return;
}

void func_AE31_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE31_b9");
#endif
label_AE31:;
    /* $AE31: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x80); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE33:;
    /* $AE33: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAE33; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE3C_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE3C_b9");
#endif
label_AE3C:;
    /* $AE3C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AE3E; }
label_AE3E:;
    /* $AE3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3E); return;
}

void func_AE47_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE47_b9");
#endif
label_AE47:;
    /* $AE47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE47); return;
}

void func_AE5B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE5B_b9");
#endif
label_AE5B:;
    /* $AE5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5B); return;
}

void func_AE5F_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE5F_b9");
#endif
label_AE5F:;
    /* $AE5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5F); return;
}

void func_AE7B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE7B_b9");
#endif
label_AE7B:;
    /* $AE7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7B); return;
}

void func_AE95_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE95_b9");
#endif
label_AE95:;
    /* $AE95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE95); return;
}

void func_AEAC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEAC_b9");
#endif
label_AEAC:;
    /* $AEAC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEAE:;
    /* $AEAE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AEB0:;
    /* $AEB0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AEB2; }
label_AEB2:;
    /* $AEB2: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AEB4; }
label_AEB4:; /* bee_spawn_x_offset */
    /* $AEB4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEB6:;
    /* $AEB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB6); return;
}

void func_AEAF_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEAF_b9");
#endif
label_AEAF:;
    /* $AEAF: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x10); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEB1:;
    /* $AEB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB1); return;
}

void func_AEBB_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEBB_b9");
#endif
label_AEBB:;
    /* $AEBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEBB); return;
}

void func_AEE0_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEE0_b9");
#endif
label_AEE0:;
    /* $AEE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEE0); return;
}

void func_AEE3_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AEEB;
    }
label_AEE3:;
    /* $AEE3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEE5:;
    /* $AEE5: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x85) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEE7:;
    /* $AEE7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AEE9; }
label_AEE9:;
    /* $AEE9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEEB:;
    /* $AEEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEEB); return;
}

void func_AEE3_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEE3_b9");
#endif
    func_AEE3_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEEB_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEEB_b9");
#endif
    func_AEE3_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEED_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEED_b9");
#endif
label_AEED:;
    /* $AEED: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x80); FLAG_NZ(g_cpu.A);
label_AEEF:;
    /* $AEEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEEF); return;
}

void func_AEF5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEF5_b9");
#endif
label_AEF5:;
    /* $AEF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF5); return;
}

void func_AEF7_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEF7_b9");
#endif
label_AEF7:;
    /* $AEF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEF7); return;
}

void func_AFCD_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AFCD_b9");
#endif
label_AFCD:;
    /* $AFCD: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AFCE:;
    /* $AFCE: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x5C3A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFD1:;
    /* $AFD1: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5F5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFD4:;
    /* $AFD4: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B02E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B02E_b9");
#endif
label_B02E:;
    /* $B02E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB02E); return;
}

void func_B03B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B03B_b9");
#endif
label_B03B:;
    /* $B03B: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x383C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B03E:;
    /* $B03E: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x693A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B041:;
    /* $B041: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6A); g_cpu.A=r&0xFF; }
label_B043:;
    /* $B043: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B045:;
    /* $B045: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B047:;
    /* $B047: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B049:;
    /* $B049: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x69; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_B04B:;
    /* $B04B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6C); g_cpu.A=r&0xFF; }
label_B04D:;
    /* $B04D: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x696A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B050:;
    /* $B050: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B052:;
    /* $B052: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6D + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6D); g_cpu.A=r&0xFF; }
label_B054:;
    /* $B054: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_B055:;
    /* $B055: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x6D6A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B058:;
    /* $B058: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x6970; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B05B:;
    /* $B05B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x71 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x71); g_cpu.A=r&0xFF; }
label_B05D:;
    /* $B05D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6D + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6D); g_cpu.A=r&0xFF; }
label_B05F:;
    /* $B05F: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6971); nes_trace_indirect_jump(0xB05F, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_B08E_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B091;
        case 2: goto label_B0CC;
        case 3: goto label_B108;
        case 4: goto label_B0DA;
    }
label_B08E:;
    /* $B08E: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x7669; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B091:;
    /* $B091: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B093:;
    /* $B093: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B095:;
    /* $B095: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B097:;
    /* $B097: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x78 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B099:;
    /* $B099: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7B7A + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B09C:;
    /* $B09C: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7E7D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B09F:;
    /* $B09F: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x8180 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B0A2:;
    /* $B0A2: 82 */ maybe_trigger_vblank(2); /* NOP */
label_B0A4:;
    /* $B0A4: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_B0A6:;
    /* $B0A6: 86 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.X);
label_B0A8:;
    /* $B0A8: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B0A9:;
    /* $B0A9: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B0AB:;
    /* $B0AB: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B0AD:;
    /* $B0AD: 8D */ maybe_trigger_vblank(4); nes_write(0x8F8E, g_cpu.A);
label_B0B0:;
    /* $B0B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0B2:;
    /* $B0B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0B4:;
    /* $B0B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0B6:;
    /* $B0B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0B8:;
    /* $B0B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0BA:;
    /* $B0BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0BC:;
    /* $B0BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0BE:;
    /* $B0BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0C0:;
    /* $B0C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0C2:;
    /* $B0C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0C4:;
    /* $B0C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0C6:;
    /* $B0C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0C8:;
    /* $B0C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0CA:;
    /* $B0CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0CC:;
    /* $B0CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0CE:;
    /* $B0CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0D0:;
    /* $B0D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0D2:;
    /* $B0D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0D4:;
    /* $B0D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0D6:;
    /* $B0D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0D8:;
    /* $B0D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0DA:;
    /* $B0DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0DC:;
    /* $B0DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0DE:;
    /* $B0DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0E0:;
    /* $B0E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0E2:;
    /* $B0E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0E4:;
    /* $B0E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0E6:;
    /* $B0E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0E8:;
    /* $B0E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0EA:;
    /* $B0EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0EC:;
    /* $B0EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0EE:;
    /* $B0EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0F0:;
    /* $B0F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0F2:;
    /* $B0F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0F4:;
    /* $B0F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0F6:;
    /* $B0F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0F8:;
    /* $B0F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0FA:;
    /* $B0FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0FC:;
    /* $B0FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B0FE:;
    /* $B0FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B100:;
    /* $B100: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B102:;
    /* $B102: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B104:;
    /* $B104: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B106:;
    /* $B106: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B108:;
    /* $B108: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B10A:;
    /* $B10A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B10C:;
    /* $B10C: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x6969; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B10F:;
    /* $B10F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B111:;
    /* $B111: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_B17C; }
label_B113:;
    /* $B113: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B115:;
    /* $B115: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B117:;
    /* $B117: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x69 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B119:;
    /* $B119: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B11B:;
    /* $B11B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B11D:;
    /* $B11D: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x69) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B11F:;
    /* $B11F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B121:;
    /* $B121: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6969); nes_trace_indirect_jump(0xB121, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_B17C:;
    /* $B17C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B17E:;
    /* $B17E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B180:;
    /* $B180: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B182:;
    /* $B182: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B184:;
    /* $B184: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B186:;
    /* $B186: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B188:;
    /* $B188: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B18A:;
    /* $B18A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B18C:;
    /* $B18C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B18E:;
    /* $B18E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B190:;
    /* $B190: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B192:;
    /* $B192: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B194:;
    /* $B194: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B196:;
    /* $B196: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B198:;
    /* $B198: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B19A:;
    /* $B19A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B19C:;
    /* $B19C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B19E:;
    /* $B19E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A0:;
    /* $B1A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A2:;
    /* $B1A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A4:;
    /* $B1A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A6:;
    /* $B1A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A8:;
    /* $B1A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1AA:;
    /* $B1AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1AC:;
    /* $B1AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1AE:;
    /* $B1AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B0:;
    /* $B1B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B2:;
    /* $B1B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B4:;
    /* $B1B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B6:;
    /* $B1B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B8:;
    /* $B1B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1BA:;
    /* $B1BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1BC:;
    /* $B1BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1BE:;
    /* $B1BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C0:;
    /* $B1C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C2:;
    /* $B1C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C4:;
    /* $B1C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C6:;
    /* $B1C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C8:;
    /* $B1C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1CA:;
    /* $B1CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1CC:;
    /* $B1CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1CE:;
    /* $B1CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D0:;
    /* $B1D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D2:;
    /* $B1D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D4:;
    /* $B1D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D6:;
    /* $B1D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D8:;
    /* $B1D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1DA:;
    /* $B1DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1DC:;
    /* $B1DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1DE:;
    /* $B1DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E0:;
    /* $B1E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E2:;
    /* $B1E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E4:;
    /* $B1E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E6:;
    /* $B1E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E8:;
    /* $B1E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1EA:;
    /* $B1EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1EC:;
    /* $B1EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1EE:;
    /* $B1EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F0:;
    /* $B1F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F2:;
    /* $B1F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F4:;
    /* $B1F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F6:;
    /* $B1F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F8:;
    /* $B1F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1FA:;
    /* $B1FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1FC:;
    /* $B1FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1FE:;
    /* $B1FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B200:;
    /* $B200: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B202:;
    /* $B202: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B204:;
    /* $B204: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B206:;
    /* $B206: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B208:;
    /* $B208: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B20A:;
    /* $B20A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B20C:;
    /* $B20C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B20E:;
    /* $B20E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B210:;
    /* $B210: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B212:;
    /* $B212: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B214:;
    /* $B214: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B216:;
    /* $B216: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B218:;
    /* $B218: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B21A:;
    /* $B21A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B21C:;
    /* $B21C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B21E:;
    /* $B21E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B220:;
    /* $B220: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B222:;
    /* $B222: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B224:;
    /* $B224: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B226:;
    /* $B226: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B228:;
    /* $B228: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B22A:;
    /* $B22A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B22C:;
    /* $B22C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B22E:;
    /* $B22E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B230:;
    /* $B230: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B232:;
    /* $B232: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B234:;
    /* $B234: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B236:;
    /* $B236: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B238:;
    /* $B238: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B23A:;
    /* $B23A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B23C:;
    /* $B23C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B23E:; /* main_top_man_platform */
    /* $B23E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B240:;
    /* $B240: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B242:;
    /* $B242: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B244:;
    /* $B244: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B246:;
    /* $B246: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B248:;
    /* $B248: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B24A:;
    /* $B24A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B24C:;
    /* $B24C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B24E:;
    /* $B24E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B250:;
    /* $B250: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B252:;
    /* $B252: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B254:;
    /* $B254: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B256:;
    /* $B256: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B258:;
    /* $B258: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B25A:;
    /* $B25A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B25C:;
    /* $B25C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B25E:;
    /* $B25E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B260:;
    /* $B260: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B262:;
    /* $B262: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B264:;
    /* $B264: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B266:;
    /* $B266: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B268:;
    /* $B268: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B26A:;
    /* $B26A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B26C:;
    /* $B26C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B26E:;
    /* $B26E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B270:;
    /* $B270: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B272:;
    /* $B272: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B274:;
    /* $B274: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B276:;
    /* $B276: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B278:;
    /* $B278: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B27A:;
    /* $B27A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B27C:;
    /* $B27C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B27E:;
    /* $B27E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B280:;
    /* $B280: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B282:;
    /* $B282: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B284:;
    /* $B284: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B286:;
    /* $B286: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B288:;
    /* $B288: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B28A:;
    /* $B28A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B28C:;
    /* $B28C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B28E:;
    /* $B28E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B290:;
    /* $B290: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B292:;
    /* $B292: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B294:;
    /* $B294: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B296:;
    /* $B296: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B298:;
    /* $B298: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B29A:;
    /* $B29A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B29C:;
    /* $B29C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B29E:;
    /* $B29E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A0:;
    /* $B2A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A2:;
    /* $B2A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A4:;
    /* $B2A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A6:;
    /* $B2A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A8:;
    /* $B2A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2AA:;
    /* $B2AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2AC:;
    /* $B2AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2AE:;
    /* $B2AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B0:;
    /* $B2B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B2:;
    /* $B2B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B4:;
    /* $B2B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B6:;
    /* $B2B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B8:;
    /* $B2B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2BA:;
    /* $B2BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2BC:;
    /* $B2BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2BE:;
    /* $B2BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C0:;
    /* $B2C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C2:;
    /* $B2C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C4:;
    /* $B2C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C6:;
    /* $B2C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2C8:;
    /* $B2C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2CA:;
    /* $B2CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2CC:;
    /* $B2CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2CE:;
    /* $B2CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2D0:;
    /* $B2D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2D2:;
    /* $B2D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2D4:;
    /* $B2D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2D6:;
    /* $B2D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2D8:;
    /* $B2D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2DA:;
    /* $B2DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2DC:;
    /* $B2DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2DE:;
    /* $B2DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2E0:;
    /* $B2E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2E2:;
    /* $B2E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2E4:;
    /* $B2E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2E6:;
    /* $B2E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2E8:;
    /* $B2E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2EA:;
    /* $B2EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2EC:;
    /* $B2EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2EE:;
    /* $B2EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2F0:;
    /* $B2F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2F2:;
    /* $B2F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2F4:;
    /* $B2F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2F6:;
    /* $B2F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2F8:;
    /* $B2F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2FA:;
    /* $B2FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2FC:;
    /* $B2FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2FE:; /* main_needle_press */
    /* $B2FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B300:;
    /* $B300: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB300); return;
}

void func_B08E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B08E_b9");
#endif
    func_B08E_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B091_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B091_b9");
#endif
    func_B08E_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0CC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0CC_b9");
#endif
    func_B08E_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B108_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B108_b9");
#endif
    func_B08E_b9_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B0DA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B0DA_b9");
#endif
    func_B08E_b9_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B128_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B166;
    }
label_B128:;
    /* $B128: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B12A:;
    /* $B12A: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B12C:;
    /* $B12C: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B12E:;
    /* $B12E: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B130:;
    /* $B130: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B132:;
    /* $B132: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B134:;
    /* $B134: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B136:;
    /* $B136: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B138:;
    /* $B138: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B13A:;
    /* $B13A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B13C:;
    /* $B13C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B13E:;
    /* $B13E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B140:;
    /* $B140: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B142:;
    /* $B142: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B144:;
    /* $B144: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B146:;
    /* $B146: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B148:;
    /* $B148: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B14A:;
    /* $B14A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B14C:;
    /* $B14C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B14E:;
    /* $B14E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B150:;
    /* $B150: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B152:;
    /* $B152: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B154:;
    /* $B154: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B156:;
    /* $B156: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B158:;
    /* $B158: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B15A:;
    /* $B15A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B15C:;
    /* $B15C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B15E:;
    /* $B15E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B160:;
    /* $B160: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B162:;
    /* $B162: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B164:;
    /* $B164: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B166:;
    /* $B166: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B168:;
    /* $B168: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B16A:;
    /* $B16A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B16C:;
    /* $B16C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B16E:;
    /* $B16E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B170:;
    /* $B170: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B172:;
    /* $B172: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B174:;
    /* $B174: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B176:;
    /* $B176: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B178:;
    /* $B178: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B17A:;
    /* $B17A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B17C:;
    /* $B17C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B17E:;
    /* $B17E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B180:;
    /* $B180: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B182:;
    /* $B182: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B184:;
    /* $B184: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B186:;
    /* $B186: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B188:;
    /* $B188: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B18A:;
    /* $B18A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B18C:;
    /* $B18C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B18E:;
    /* $B18E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B190:;
    /* $B190: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B192:;
    /* $B192: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B194:;
    /* $B194: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B196:;
    /* $B196: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B198:;
    /* $B198: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B19A:;
    /* $B19A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B19C:;
    /* $B19C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B19E:;
    /* $B19E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A0:;
    /* $B1A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A2:;
    /* $B1A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A4:;
    /* $B1A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A6:;
    /* $B1A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1A8:;
    /* $B1A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1AA:;
    /* $B1AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1AC:;
    /* $B1AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1AE:;
    /* $B1AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B0:;
    /* $B1B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B2:;
    /* $B1B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B4:;
    /* $B1B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B6:;
    /* $B1B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1B8:;
    /* $B1B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1BA:;
    /* $B1BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1BC:;
    /* $B1BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1BE:;
    /* $B1BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C0:;
    /* $B1C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C2:;
    /* $B1C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C4:;
    /* $B1C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C6:;
    /* $B1C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1C8:;
    /* $B1C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1CA:;
    /* $B1CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1CC:;
    /* $B1CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1CE:;
    /* $B1CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D0:;
    /* $B1D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D2:;
    /* $B1D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D4:;
    /* $B1D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D6:;
    /* $B1D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1D8:;
    /* $B1D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1DA:;
    /* $B1DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1DC:;
    /* $B1DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1DE:;
    /* $B1DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E0:;
    /* $B1E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E2:;
    /* $B1E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E4:;
    /* $B1E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E6:;
    /* $B1E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1E8:;
    /* $B1E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1EA:;
    /* $B1EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1EC:;
    /* $B1EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1EE:;
    /* $B1EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F0:;
    /* $B1F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F2:;
    /* $B1F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F4:;
    /* $B1F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F6:;
    /* $B1F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1F8:;
    /* $B1F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1FA:;
    /* $B1FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1FC:;
    /* $B1FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B1FE:;
    /* $B1FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B200:;
    /* $B200: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B202:;
    /* $B202: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B204:;
    /* $B204: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B206:;
    /* $B206: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B208:;
    /* $B208: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B20A:;
    /* $B20A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B20C:;
    /* $B20C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B20E:;
    /* $B20E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B210:;
    /* $B210: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B212:;
    /* $B212: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B214:;
    /* $B214: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B216:;
    /* $B216: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B218:;
    /* $B218: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B21A:;
    /* $B21A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B21C:;
    /* $B21C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B21E:;
    /* $B21E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B220:;
    /* $B220: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B222:;
    /* $B222: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B224:;
    /* $B224: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B226:;
    /* $B226: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B228:;
    /* $B228: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B22A:;
    /* $B22A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B22C:;
    /* $B22C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B22E:;
    /* $B22E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B230:;
    /* $B230: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B232:;
    /* $B232: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B234:;
    /* $B234: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B236:;
    /* $B236: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B238:;
    /* $B238: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B23A:;
    /* $B23A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B23C:;
    /* $B23C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B23E:; /* main_top_man_platform */
    /* $B23E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B240:;
    /* $B240: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B242:;
    /* $B242: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B244:;
    /* $B244: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B246:;
    /* $B246: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B248:;
    /* $B248: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B24A:;
    /* $B24A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B24C:;
    /* $B24C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B24E:;
    /* $B24E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B250:;
    /* $B250: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B252:;
    /* $B252: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B254:;
    /* $B254: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B256:;
    /* $B256: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B258:;
    /* $B258: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B25A:;
    /* $B25A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B25C:;
    /* $B25C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B25E:;
    /* $B25E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B260:;
    /* $B260: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B262:;
    /* $B262: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B264:;
    /* $B264: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B266:;
    /* $B266: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B268:;
    /* $B268: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B26A:;
    /* $B26A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B26C:;
    /* $B26C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B26E:;
    /* $B26E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B270:;
    /* $B270: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B272:;
    /* $B272: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B274:;
    /* $B274: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B276:;
    /* $B276: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B278:;
    /* $B278: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B27A:;
    /* $B27A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B27C:;
    /* $B27C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B27E:;
    /* $B27E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B280:;
    /* $B280: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B282:;
    /* $B282: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B284:;
    /* $B284: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B286:;
    /* $B286: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B288:;
    /* $B288: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B28A:;
    /* $B28A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B28C:;
    /* $B28C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B28E:;
    /* $B28E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B290:;
    /* $B290: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B292:;
    /* $B292: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B294:;
    /* $B294: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B296:;
    /* $B296: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B298:;
    /* $B298: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B29A:;
    /* $B29A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B29C:;
    /* $B29C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B29E:;
    /* $B29E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A0:;
    /* $B2A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A2:;
    /* $B2A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A4:;
    /* $B2A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A6:;
    /* $B2A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2A8:;
    /* $B2A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2AA:;
    /* $B2AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2AC:;
    /* $B2AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2AE:;
    /* $B2AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B0:;
    /* $B2B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B2:;
    /* $B2B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B4:;
    /* $B2B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B6:;
    /* $B2B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2B8:;
    /* $B2B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2BA:;
    /* $B2BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2BC:;
    /* $B2BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2BE:;
    /* $B2BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C0:;
    /* $B2C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C2:;
    /* $B2C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C4:;
    /* $B2C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2C6:;
    /* $B2C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2C8:;
    /* $B2C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2CA:;
    /* $B2CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2CC:;
    /* $B2CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2CE:;
    /* $B2CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2D0:;
    /* $B2D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2D2:;
    /* $B2D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2D4:;
    /* $B2D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2D6:;
    /* $B2D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2D8:;
    /* $B2D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2DA:;
    /* $B2DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2DC:;
    /* $B2DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2DE:;
    /* $B2DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2E0:;
    /* $B2E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2E2:;
    /* $B2E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2E4:;
    /* $B2E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2E6:;
    /* $B2E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2E8:;
    /* $B2E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2EA:;
    /* $B2EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2EC:;
    /* $B2EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2EE:;
    /* $B2EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2F0:;
    /* $B2F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2F2:;
    /* $B2F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2F4:;
    /* $B2F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2F6:;
    /* $B2F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B2F8:;
    /* $B2F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2FA:;
    /* $B2FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2FC:;
    /* $B2FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B2FE:; /* main_needle_press */
    /* $B2FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_B300:;
    /* $B300: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB300); return;
}

void func_B128_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B128_b9");
#endif
    func_B128_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B166_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B166_b9");
#endif
    func_B128_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B307_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B307_b9");
#endif
label_B307:;
    /* $B307: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB307); return;
}

void func_B32B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B32B_b9");
#endif
label_B32B:;
    /* $B32B: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B32E:;
    /* $B32E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB32E); return;
}

void func_B36B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B36B_b9");
#endif
label_B36B:;
    /* $B36B: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x00AD); FLAG_NZ(g_cpu.Y);
label_B36E:;
    /* $B36E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB36E); return;
}

void func_B379_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B379_b9");
#endif
label_B379:;
    /* $B379: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB379); return;
}

void func_B38A_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B39A;
        case 2: goto label_B3A4;
        case 3: goto label_B3DA;
        case 4: goto label_B3F8;
        case 5: goto label_B38E;
    }
label_B38A:;
    /* $B38A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B38C:;
    /* $B38C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B38E:;
    /* $B38E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B390:;
    /* $B390: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B392:;
    /* $B392: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B394:;
    /* $B394: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B396:;
    /* $B396: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B398:;
    /* $B398: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B39A:;
    /* $B39A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B39C:;
    /* $B39C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B39E:;
    /* $B39E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3A0:;
    /* $B3A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3A2:;
    /* $B3A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3A4:;
    /* $B3A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3A6:;
    /* $B3A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3A8:;
    /* $B3A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3AA:;
    /* $B3AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3AC:;
    /* $B3AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3AE:;
    /* $B3AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B0:;
    /* $B3B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B2:;
    /* $B3B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B4:;
    /* $B3B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B6:;
    /* $B3B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B8:;
    /* $B3B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3BA:;
    /* $B3BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3BC:;
    /* $B3BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3BE:;
    /* $B3BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C0:;
    /* $B3C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C2:;
    /* $B3C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C4:;
    /* $B3C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C6:;
    /* $B3C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C8:;
    /* $B3C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3CA:;
    /* $B3CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3CC:;
    /* $B3CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3CE:;
    /* $B3CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D0:;
    /* $B3D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D2:;
    /* $B3D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D4:;
    /* $B3D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D6:;
    /* $B3D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D8:;
    /* $B3D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3DA:;
    /* $B3DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3DC:;
    /* $B3DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3DE:;
    /* $B3DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E0:;
    /* $B3E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E2:;
    /* $B3E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E4:;
    /* $B3E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E6:;
    /* $B3E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E8:;
    /* $B3E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3EA:;
    /* $B3EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3EC:;
    /* $B3EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3EE:;
    /* $B3EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F0:;
    /* $B3F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F2:;
    /* $B3F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F4:;
    /* $B3F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F6:;
    /* $B3F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F8:;
    /* $B3F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3FA:;
    /* $B3FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3FC:;
    /* $B3FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3FE:;
    /* $B3FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B400:;
    /* $B400: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B401:;
    /* $B401: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xB0AF); FLAG_NZ(g_cpu.X);
label_B404:;
    /* $B404: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B406:;
    /* $B406: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x201F); FLAG_NZ(g_cpu.X);
label_B409:;
    /* $B409: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB409); return;
}

void func_B38A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B38A_b9");
#endif
    func_B38A_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B39A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B39A_b9");
#endif
    func_B38A_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3A4_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A4_b9");
#endif
    func_B38A_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3DA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3DA_b9");
#endif
    func_B38A_b9_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3F8_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F8_b9");
#endif
    func_B38A_b9_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B38E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B38E_b9");
#endif
    func_B38A_b9_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B3A7_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3A7_b9");
#endif
label_B3A7:;
    /* $B3A7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3A9:;
    /* $B3A9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3AB:;
    /* $B3AB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3AD:;
    /* $B3AD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3AF:;
    /* $B3AF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B1:;
    /* $B3B1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B3:;
    /* $B3B3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B5:;
    /* $B3B5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B7:;
    /* $B3B7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3B9:;
    /* $B3B9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3BB:;
    /* $B3BB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3BD:;
    /* $B3BD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3BF:;
    /* $B3BF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C1:;
    /* $B3C1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C3:;
    /* $B3C3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C5:;
    /* $B3C5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C7:;
    /* $B3C7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3C9:;
    /* $B3C9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3CB:;
    /* $B3CB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3CD:;
    /* $B3CD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3CF:;
    /* $B3CF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D1:;
    /* $B3D1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D3:;
    /* $B3D3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D5:;
    /* $B3D5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D7:;
    /* $B3D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3D9:;
    /* $B3D9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3DB:;
    /* $B3DB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3DD:;
    /* $B3DD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3DF:;
    /* $B3DF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E1:;
    /* $B3E1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E3:;
    /* $B3E3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E5:;
    /* $B3E5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E7:;
    /* $B3E7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3E9:;
    /* $B3E9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3EB:;
    /* $B3EB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3ED:;
    /* $B3ED: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3EF:;
    /* $B3EF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F1:;
    /* $B3F1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F3:;
    /* $B3F3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F5:;
    /* $B3F5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F7:;
    /* $B3F7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3F9:;
    /* $B3F9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3FB:;
    /* $B3FB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3FD:;
    /* $B3FD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B3FF:;
    /* $B3FF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x1A + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x1A); g_cpu.A=r&0xFF; }
label_B401:;
    /* $B401: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xB0AF); FLAG_NZ(g_cpu.X);
label_B404:;
    /* $B404: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B406:;
    /* $B406: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x201F); FLAG_NZ(g_cpu.X);
label_B409:;
    /* $B409: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB409); return;
}

void func_B418_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B6FC;
        case 2: goto label_B41D;
        case 3: goto label_B427;
        case 4: goto label_B42A;
        case 5: goto label_B44A;
        case 6: goto label_B474;
        case 7: goto label_B49E;
        case 8: goto label_B4E4;
        case 9: goto label_B50A;
        case 10: goto label_B526;
        case 11: goto label_B548;
        case 12: goto label_B55E;
        case 13: goto label_B5FA;
        case 14: goto label_B664;
        case 15: goto label_B682;
        case 16: goto label_B68E;
        case 17: goto label_B6B2;
        case 18: goto label_B6D6;
        case 19: goto label_B6EC;
        case 20: goto label_B71D;
        case 21: goto label_B6B8;
        case 22: goto label_BBB3;
        case 23: goto label_B95D;
        case 24: goto label_BFAC;
        case 25: goto label_BFC5;
        case 26: goto label_B47E;
        case 27: goto label_B5B4;
        case 28: goto label_B5E6;
        case 29: goto label_B64E;
    }
label_B418:;
    /* $B418: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x141A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2200, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB418, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B41B:;
    /* $B41B: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x68; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B41D:;
    /* $B41D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x141F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2200, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB41D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B420:;
    /* $B420: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B421:;
    /* $B421: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B424:;
    /* $B424: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xC0BF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_B427:;
    /* $B427: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0020 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B42A:;
    /* $B42A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B42B:;
    /* $B42B: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x68; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B42D:;
    /* $B42D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x142F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2200, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xB42D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_B430:;
    /* $B430: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC2 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B432:;
    /* $B432: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B434:;
    /* $B434: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC6); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B436:;
    /* $B436: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B438:;
    /* $B438: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_B439:;
    /* $B439: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3B3A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B43C:;
    /* $B43C: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3938 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B43F:;
    /* $B43F: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B440:;
    /* $B440: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B442:;
    /* $B442: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B444:;
    /* $B444: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B446:;
    /* $B446: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B448:;
    /* $B448: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B44A:;
    /* $B44A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B44C:;
    /* $B44C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B44E:;
    /* $B44E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B450:;
    /* $B450: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B452:;
    /* $B452: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B454:;
    /* $B454: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B456:;
    /* $B456: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B458:;
    /* $B458: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B45A:;
    /* $B45A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B45C:;
    /* $B45C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B45E:;
    /* $B45E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B460:;
    /* $B460: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B462:;
    /* $B462: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B464:;
    /* $B464: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B466:;
    /* $B466: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B468:;
    /* $B468: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B46A:;
    /* $B46A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B46C:;
    /* $B46C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B46E:;
    /* $B46E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B470:;
    /* $B470: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B472:;
    /* $B472: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B474:;
    /* $B474: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B476:;
    /* $B476: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B478:;
    /* $B478: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B47A:;
    /* $B47A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B47C:; /* main_peterchy */
    /* $B47C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B47E:;
    /* $B47E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B480:;
    /* $B480: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B482:;
    /* $B482: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B484:;
    /* $B484: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B486:;
    /* $B486: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B488:;
    /* $B488: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B48A:;
    /* $B48A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B48C:;
    /* $B48C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B48E:;
    /* $B48E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B490:;
    /* $B490: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B492:;
    /* $B492: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B494:;
    /* $B494: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B496:;
    /* $B496: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B498:;
    /* $B498: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B49A:;
    /* $B49A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B49C:;
    /* $B49C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B49E:;
    /* $B49E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A0:;
    /* $B4A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A2:;
    /* $B4A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A4:;
    /* $B4A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A6:;
    /* $B4A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A8:;
    /* $B4A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4AA:;
    /* $B4AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4AC:;
    /* $B4AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4AE:;
    /* $B4AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B0:;
    /* $B4B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B2:;
    /* $B4B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B4:;
    /* $B4B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B6:;
    /* $B4B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B8:;
    /* $B4B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4BA:;
    /* $B4BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4BC:;
    /* $B4BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4BE:;
    /* $B4BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C0:;
    /* $B4C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C2:;
    /* $B4C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C4:; /* main_walking_bomb */
    /* $B4C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C6:;
    /* $B4C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C8:;
    /* $B4C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4CA:;
    /* $B4CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4CC:;
    /* $B4CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4CE:;
    /* $B4CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D0:;
    /* $B4D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D2:;
    /* $B4D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D4:;
    /* $B4D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D6:;
    /* $B4D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D8:;
    /* $B4D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4DA:;
    /* $B4DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4DC:;
    /* $B4DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4DE:;
    /* $B4DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E0:;
    /* $B4E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E2:;
    /* $B4E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E4:;
    /* $B4E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E6:;
    /* $B4E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E8:;
    /* $B4E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4EA:;
    /* $B4EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4EC:;
    /* $B4EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4EE:;
    /* $B4EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F0:;
    /* $B4F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F2:;
    /* $B4F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F4:;
    /* $B4F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F6:;
    /* $B4F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F8:;
    /* $B4F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4FA:;
    /* $B4FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4FC:;
    /* $B4FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4FE:;
    /* $B4FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B500:;
    /* $B500: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B502:;
    /* $B502: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B504:;
    /* $B504: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B506:;
    /* $B506: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B508:;
    /* $B508: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B50A:;
    /* $B50A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B50C:;
    /* $B50C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B50E:;
    /* $B50E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B510:;
    /* $B510: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B512:;
    /* $B512: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B514:;
    /* $B514: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B516:;
    /* $B516: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B518:;
    /* $B518: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B51A:;
    /* $B51A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B51C:;
    /* $B51C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B51E:;
    /* $B51E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B520:;
    /* $B520: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B522:;
    /* $B522: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B524:;
    /* $B524: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B526:;
    /* $B526: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B528:;
    /* $B528: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B52A:;
    /* $B52A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B52C:;
    /* $B52C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B52E:;
    /* $B52E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B530:;
    /* $B530: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B532:;
    /* $B532: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B534:;
    /* $B534: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B536:;
    /* $B536: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B538:;
    /* $B538: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B53A:;
    /* $B53A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B53C:;
    /* $B53C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B53E:;
    /* $B53E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B540:; /* main_hologran */
    /* $B540: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B542:;
    /* $B542: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B544:;
    /* $B544: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B546:;
    /* $B546: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B548:;
    /* $B548: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B54A:;
    /* $B54A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B54C:;
    /* $B54C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B54E:;
    /* $B54E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B550:;
    /* $B550: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B552:;
    /* $B552: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B554:;
    /* $B554: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B556:;
    /* $B556: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B558:;
    /* $B558: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B55A:;
    /* $B55A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B55C:;
    /* $B55C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B55E:;
    /* $B55E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B560:;
    /* $B560: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B562:;
    /* $B562: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B564:;
    /* $B564: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B566:;
    /* $B566: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B568:;
    /* $B568: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B56A:;
    /* $B56A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B56C:;
    /* $B56C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B56E:;
    /* $B56E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B570:;
    /* $B570: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B572:;
    /* $B572: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B574:;
    /* $B574: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B576:;
    /* $B576: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B578:;
    /* $B578: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B57A:;
    /* $B57A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B57C:;
    /* $B57C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B57E:;
    /* $B57E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B580:;
    /* $B580: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B582:;
    /* $B582: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B584:;
    /* $B584: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B586:;
    /* $B586: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B588:;
    /* $B588: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B58A:;
    /* $B58A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B58C:;
    /* $B58C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B58E:;
    /* $B58E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B590:;
    /* $B590: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B592:;
    /* $B592: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B594:;
    /* $B594: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B596:;
    /* $B596: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B598:;
    /* $B598: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B59A:;
    /* $B59A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B59C:;
    /* $B59C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B59E:;
    /* $B59E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A0:;
    /* $B5A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A2:;
    /* $B5A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A4:;
    /* $B5A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A6:;
    /* $B5A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A8:;
    /* $B5A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5AA:;
    /* $B5AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5AC:;
    /* $B5AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5AE:;
    /* $B5AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B0:;
    /* $B5B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B2:;
    /* $B5B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B4:;
    /* $B5B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B6:;
    /* $B5B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B8:;
    /* $B5B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5BA:;
    /* $B5BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5BC:;
    /* $B5BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5BE:;
    /* $B5BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C0:;
    /* $B5C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C2:;
    /* $B5C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C4:;
    /* $B5C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C6:;
    /* $B5C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C8:;
    /* $B5C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5CA:;
    /* $B5CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5CC:; /* main_parasyu */
    /* $B5CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5CE:;
    /* $B5CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D0:;
    /* $B5D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D2:;
    /* $B5D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D4:;
    /* $B5D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D6:;
    /* $B5D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D8:;
    /* $B5D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5DA:;
    /* $B5DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5DC:;
    /* $B5DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5DE:;
    /* $B5DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E0:;
    /* $B5E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E2:;
    /* $B5E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E4:;
    /* $B5E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E6:;
    /* $B5E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E8:;
    /* $B5E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5EA:;
    /* $B5EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5EC:;
    /* $B5EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5EE:;
    /* $B5EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F0:;
    /* $B5F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F2:;
    /* $B5F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F4:;
    /* $B5F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F6:;
    /* $B5F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F8:;
    /* $B5F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5FA:;
    /* $B5FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5FC:;
    /* $B5FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5FE:;
    /* $B5FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B600:;
    /* $B600: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B602:;
    /* $B602: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B604:;
    /* $B604: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B606:;
    /* $B606: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B608:;
    /* $B608: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B60A:;
    /* $B60A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B60C:;
    /* $B60C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B60E:;
    /* $B60E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B610:;
    /* $B610: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B612:;
    /* $B612: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B614:;
    /* $B614: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B616:;
    /* $B616: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B618:;
    /* $B618: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B61A:;
    /* $B61A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B61C:;
    /* $B61C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B61E:;
    /* $B61E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B620:;
    /* $B620: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B622:;
    /* $B622: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B624:;
    /* $B624: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B626:;
    /* $B626: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B628:;
    /* $B628: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B62A:;
    /* $B62A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B62C:;
    /* $B62C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B62E:;
    /* $B62E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B630:;
    /* $B630: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B632:;
    /* $B632: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B634:;
    /* $B634: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B636:;
    /* $B636: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B638:;
    /* $B638: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B63A:;
    /* $B63A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B63C:;
    /* $B63C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B63E:;
    /* $B63E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B640:;
    /* $B640: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B642:;
    /* $B642: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B644:;
    /* $B644: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B646:;
    /* $B646: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B648:;
    /* $B648: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B64A:;
    /* $B64A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B64C:;
    /* $B64C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B64E:;
    /* $B64E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B650:;
    /* $B650: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B652:;
    /* $B652: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B654:;
    /* $B654: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B656:;
    /* $B656: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B658:;
    /* $B658: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B65A:;
    /* $B65A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B65C:;
    /* $B65C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B65E:;
    /* $B65E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B660:;
    /* $B660: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B662:;
    /* $B662: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B664:;
    /* $B664: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B666:;
    /* $B666: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B668:;
    /* $B668: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B66A:;
    /* $B66A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B66C:;
    /* $B66C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B66E:;
    /* $B66E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B670:;
    /* $B670: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B672:;
    /* $B672: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B674:;
    /* $B674: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B676:;
    /* $B676: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B678:;
    /* $B678: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B67A:;
    /* $B67A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B67C:;
    /* $B67C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B67E:;
    /* $B67E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B680:;
    /* $B680: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B682:;
    /* $B682: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B684:;
    /* $B684: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B686:;
    /* $B686: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B688:;
    /* $B688: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B68A:;
    /* $B68A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B68C:;
    /* $B68C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B68E:;
    /* $B68E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B690:;
    /* $B690: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B692:;
    /* $B692: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B694:;
    /* $B694: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B696:;
    /* $B696: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B698:;
    /* $B698: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B69A:;
    /* $B69A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B69C:;
    /* $B69C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B69E:;
    /* $B69E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A0:;
    /* $B6A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A2:;
    /* $B6A2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A4:;
    /* $B6A4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A6:;
    /* $B6A6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A8:;
    /* $B6A8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6AA:;
    /* $B6AA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6AC:;
    /* $B6AC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6AE:;
    /* $B6AE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B0:;
    /* $B6B0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B2:;
    /* $B6B2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B4:;
    /* $B6B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B6:;
    /* $B6B6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B8:;
    /* $B6B8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6BA:;
    /* $B6BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6BC:;
    /* $B6BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6BE:;
    /* $B6BE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C0:;
    /* $B6C0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C2:;
    /* $B6C2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C4:;
    /* $B6C4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C6:;
    /* $B6C6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C8:;
    /* $B6C8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6CA:;
    /* $B6CA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6CC:;
    /* $B6CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6CE:;
    /* $B6CE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D0:;
    /* $B6D0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D2:;
    /* $B6D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D4:;
    /* $B6D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D6:;
    /* $B6D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D8:;
    /* $B6D8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6DA:;
    /* $B6DA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6DC:;
    /* $B6DC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6DE:;
    /* $B6DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E0:;
    /* $B6E0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E2:;
    /* $B6E2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E4:;
    /* $B6E4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E6:;
    /* $B6E6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E8:; /* main_doc_robot_intro */
    /* $B6E8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6EA:;
    /* $B6EA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6EC:;
    /* $B6EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6EE:;
    /* $B6EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F0:;
    /* $B6F0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F2:;
    /* $B6F2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F4:;
    /* $B6F4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F6:;
    /* $B6F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F8:;
    /* $B6F8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6FA:;
    /* $B6FA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6FC:;
    /* $B6FC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6FE:;
    /* $B6FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B700:;
    /* $B700: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B701:;
    /* $B701: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B702:;
    /* $B702: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B703:;
    /* $B703: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B704:;
    /* $B704: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B705:;
    /* $B705: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B706:;
    /* $B706: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B707:;
    /* $B707: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x02 + g_cpu.X) & 0xFF), g_cpu.A);
label_B709:;
    /* $B709: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B70A:;
    /* $B70A: 82 */ maybe_trigger_vblank(2); /* NOP */
label_B70C:;
    /* $B70C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B70D:;
    /* $B70D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B70E:;
    /* $B70E: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_B710:;
    /* $B710: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B711:;
    /* $B711: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B712:;
    /* $B712: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_B714:;
    /* $B714: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B715:;
    /* $B715: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B716:;
    /* $B716: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B717:;
    /* $B717: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x88 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B71B:;
    /* $B71B: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8A) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B71D:;
    /* $B71D: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B71F:;
    /* $B71F: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B721:;
    /* $B721: 8D */ maybe_trigger_vblank(4); nes_write(0x9594, g_cpu.A);
label_B724:;
    /* $B724: 8E */ maybe_trigger_vblank(4); nes_write(0x968F, g_cpu.X);
label_B727:;
    /* $B727: 97 */ maybe_trigger_vblank(4); nes_write((0x02 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_B729:;
    /* $B729: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B72A:;
    /* $B72A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_B72C:;
    /* $B72C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B72D:;
    /* $B72D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B72F:;
    /* $B72F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B730:;
    /* $B730: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B731:;
    /* $B731: 99 */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B734:;
    /* $B734: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_B735:;
    /* $B735: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_B738:;
    /* $B738: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B73B:;
    /* $B73B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B73C:;
    /* $B73C: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_B73F:;
    /* $B73F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B740:;
    /* $B740: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B741:;
    /* $B741: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x02; FLAG_NZ(g_cpu.A);
label_B743:;
    /* $B743: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B744:;
    /* $B744: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xB4AD); FLAG_NZ(g_cpu.Y);
label_B747:;
    /* $B747: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B749:;
    /* $B749: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB7B6); FLAG_NZ(g_cpu.A);
label_B74C:;
    /* $B74C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74D:;
    /* $B74D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74E:;
    /* $B74E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74F:;
    /* $B74F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B752:;
    /* $B752: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B754:;
    /* $B754: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B755:;
    /* $B755: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B756:;
    /* $B756: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB8) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B758:;
    /* $B758: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B759:;
    /* $B759: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B75A:;
    /* $B75A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B75D:;
    /* $B75D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B75E:;
    /* $B75E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B75F:;
    /* $B75F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B760:;
    /* $B760: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02D5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B763:;
    /* $B763: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B764:;
    /* $B764: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xCF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B766:;
    /* $B766: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B767:;
    /* $B767: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B768:;
    /* $B768: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B76A:;
    /* $B76A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7340 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B76D:;
    /* $B76D: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x41 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B76F:;
    /* $B76F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B770:;
    /* $B770: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x17E3), 9); return; }
label_B772:;
    /* $B772: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x79 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B774:;
    /* $B774: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B775:;
    /* $B775: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B777:;
    /* $B777: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x74 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B779:;
    /* $B779: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x17BD), 9); return; }
label_B77B:;
    /* $B77B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B77D:;
    /* $B77D: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B77F:;
    /* $B77F: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4871 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B782:;
    /* $B782: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3649 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B785:;
    /* $B785: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B787:;
    /* $B787: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x714B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B78A:;
    /* $B78A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B78B:;
    /* $B78B: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3048 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B78E:;
    /* $B78E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x38; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x4B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B792:;
    /* $B792: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x244A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B795:;
    /* $B795: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B797:;
    /* $B797: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x4471); FLAG_NZ(g_cpu.A);
label_B79A:;
    /* $B79A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4540 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B79D:;
    /* $B79D: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x41; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B79F:;
    /* $B79F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B7A0:;
    /* $B7A0: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x71; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7A2:;
    /* $B7A2: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x79 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7A4:;
    /* $B7A4: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7A6:;
    /* $B7A6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB7A6; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7A7:;
    /* $B7A7: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x46 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B7A9:;
    /* $B7A9: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x42; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7AB:;
    /* $B7AB: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x26 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7AD:;
    /* $B7AD: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x2E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B7AF:;
    /* $B7AF: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x7648; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B7B2:;
    /* $B7B2: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x7E; FLAG_NZ(g_cpu.A);
label_B7B4:;
    /* $B7B4: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x4B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7B6:;
    /* $B7B6: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x344A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7B9:;
    /* $B7B9: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B7BB:;
    /* $B7BB: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x2120 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7BE:;
    /* $B7BE: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_B7BF:;
    /* $B7BF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x48; FLAG_NZ(g_cpu.A);
label_B7C1:;
    /* $B7C1: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B7C2:;
    /* $B7C2: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x3A; FLAG_NZ(g_cpu.A);
label_B7C4:;
    /* $B7C4: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4B) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B7C6:;
    /* $B7C6: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x224A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B7C9:;
    /* $B7C9: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B7CB:;
    /* $B7CB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x71; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B7CD:;
    /* $B7CD: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x79); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7CF:;
    /* $B7CF: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7D0:;
    /* $B7D0: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x46); FLAG_NZ(g_cpu.A);
label_B7D2:;
    /* $B7D2: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x477C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7D5:;
    /* $B7D5: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x78) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7D7:;
    /* $B7D7: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4544 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7DA:;
    /* $B7DA: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7DB:;
    /* $B7DB: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x4746 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7DE:;
    /* $B7DE: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7E1:;
    /* $B7E1: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B7E2:;
    /* $B7E2: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x737A + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7E5:;
    /* $B7E5: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x7B + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7E7:;
    /* $B7E7: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7EA:;
    /* $B7EA: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B7EB:;
    /* $B7EB: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7EE:;
    /* $B7EE: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7EF:;
    /* $B7EF: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7F2:;
    /* $B7F2: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7378 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7F5:;
    /* $B7F5: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7F7:;
    /* $B7F7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x70; g_cpu.C=(g_cpu.Y>=0x70)?1:0; FLAG_NZ(r&0xFF); }
label_B7F9:;
    /* $B7F9: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7FB:; /* doc_robot_master_main_indices */
    /* $B7FB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B7FD:;
    /* $B7FD: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7FF:;
    /* $B7FF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x74); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B801:;
    /* $B801: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x17C8), 9); return; }
label_B803:;
    /* $B803: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B804:;
    /* $B804: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B805:;
    /* $B805: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B7D0;
    }
label_B807:;
    /* $B807: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B808:;
    /* $B808: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD1) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80A:;
    /* $B80A: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80D:;
    /* $B80D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_B80E:;
    /* $B80E: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x71DD + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B811:;
    /* $B811: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B812:;
    /* $B812: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x73EC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B815:;
    /* $B815: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xEC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B817:;
    /* $B817: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B819:;
    /* $B819: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B81A:;
    /* $B81A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B81C:;
    /* $B81C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B81F:;
    /* $B81F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xD9 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B821:;
    /* $B821: DA */ maybe_trigger_vblank(2); /* NOP */
label_B822:;
    /* $B822: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE2 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B824:;
    /* $B824: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xB0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B826:;
    /* $B826: EE */ maybe_trigger_vblank(6); { uint16_t a=0xB0D3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B829:;
    /* $B829: EA */ maybe_trigger_vblank(2); /* NOP */
label_B82A:;
    /* $B82A: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B82C:;
    /* $B82C: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xF5)?1:0; g_cpu.X=(t-0xF5)&0xFF; FLAG_NZ(g_cpu.X); }
label_B82E:;
    /* $B82E: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF6F5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B831:;
    /* $B831: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B833:;
    /* $B833: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B835:;
    /* $B835: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B837:;
    /* $B837: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x71); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B839:;
    /* $B839: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDB79 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B83C:;
    /* $B83C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B81C;
    }
label_B83E:;
    /* $B83E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B826;
    }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
label_B8A5:;
    /* $B8A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A5); return;
label_B8A6:;
    /* $B8A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A6); return;
label_B8A7:;
    /* $B8A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A7); return;
label_B8A8:;
    /* $B8A8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A8); return;
label_B8A9:;
    /* $B8A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A9); return;
label_B8AA:;
    /* $B8AA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8AA); return;
label_B8AB:;
    /* $B8AB: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8AD:;
    /* $B8AD: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B8AF:;
    /* $B8AF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B00 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8B2:;
    /* $B8B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B2); return;
label_B8B3:;
    /* $B8B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B3); return;
label_B8B4:;
    /* $B8B4: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x001A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8B7:;
    /* $B8B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B7); return;
label_B8B8:;
    /* $B8B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B8); return;
label_B8B9:;
    /* $B8B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B9); return;
label_B8BA:;
    /* $B8BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8BA); return;
label_B8BB:;
    /* $B8BB: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0016 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8BE:;
    /* $B8BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8BE); return;
label_B8BF:;
    /* $B8BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8BF); return;
label_B8C0:;
    /* $B8C0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C0); return;
label_B8C1:;
    /* $B8C1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C1); return;
label_B8C2:;
    /* $B8C2: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8C5:;
    /* $B8C5: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x001A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C8); return;
label_B8C9:;
    /* $B8C9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C9); return;
label_B8CA:;
    /* $B8CA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8CA); return;
label_B8CB:;
    /* $B8CB: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8CE:;
    /* $B8CE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8D0:;
    /* $B8D0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D0); return;
label_B8D1:;
    /* $B8D1: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8D4:;
    /* $B8D4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D4); return;
label_B8D5:;
    /* $B8D5: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x001A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8D8:;
    /* $B8D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D8); return;
label_B8D9:;
    /* $B8D9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D9); return;
label_B8DA:;
    /* $B8DA: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8DC:;
    /* $B8DC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B8DD:;
    /* $B8DD: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8DF:;
    /* $B8DF: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8E1:;
    /* $B8E1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8E1); return;
label_B8E2:;
    /* $B8E2: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0008 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8E5:;
    /* $B8E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8E5); return;
label_B8E6:;
    /* $B8E6: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_B8E8:;
    /* $B8E8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8E8); return;
label_B8E9:;
    /* $B8E9: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B8EB:;
    /* $B8EB: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B8EE:;
    /* $B8EE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B8EF:;
    /* $B8EF: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8F1:;
    /* $B8F1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B8F2:;
    /* $B8F2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8F2); return;
label_B8F3:;
    /* $B8F3: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B8F4:;
    /* $B8F4: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B8F6:;
    /* $B8F6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x6B + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B8F8:; /* main_spinning_wheel */
    /* $B8F8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8F8); return;
label_B8F9:;
    /* $B8F9: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x56) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B8FB:;
    /* $B8FB: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x6400 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B8FE:;
    /* $B8FE: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x6C) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B900:;
    /* $B900: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B902:;
    /* $B902: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x1003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B905:;
    /* $B905: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B90A; }
label_B907:;
    /* $B907: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B90A:;
    /* $B90A: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B90B:;
    /* $B90B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x68 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B90D:;
    /* $B90D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x56 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x56); g_cpu.A=r&0xFF; }
label_B90F:;
    /* $B90F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x1E + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x1E); g_cpu.A=r&0xFF; }
label_B911:;
    /* $B911: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B912:;
    /* $B912: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x65); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B914:;
    /* $B914: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6557 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B917:;
    /* $B917: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x5F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B919:;
    /* $B919: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB919); return;
label_B91A:;
    /* $B91A: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x5B08 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B91D:;
    /* $B91D: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0909); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B920:;
    /* $B920: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x6503 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B923:;
    /* $B923: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B925:;
    /* $B925: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1F66 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B928:;
    /* $B928: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B929:;
    /* $B929: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5D5A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B92C:;
    /* $B92C: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x5058 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B92F:;
    /* $B92F: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_B930:;
    /* $B930: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x516D); nes_trace_indirect_jump(0xB930, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_B95D:;
    /* $B95D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B95E:;
    /* $B95E: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x82 + g_cpu.X) & 0xFF), g_cpu.A);
label_B960:;
    /* $B960: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B961:;
    /* $B961: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B962:;
    /* $B962: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x84 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_B964:;
    /* $B964: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B965:;
    /* $B965: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B966:;
    /* $B966: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_B968:;
    /* $B968: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B969:;
    /* $B969: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B96A:;
    /* $B96A: 87 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.A & g_cpu.X); /* SAX */
label_B96C:;
    /* $B96C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B96D:;
    /* $B96D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B96E:;
    /* $B96E: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B970:;
    /* $B970: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x93AD); FLAG_NZ(g_cpu.Y);
label_B973:;
    /* $B973: 94 */ maybe_trigger_vblank(4); nes_write((0xAE + g_cpu.X) & 0xFF, g_cpu.Y);
label_B975:;
    /* $B975: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B976:;
    /* $B976: 95 */ maybe_trigger_vblank(4); nes_write((0x02 + g_cpu.X) & 0xFF, g_cpu.A);
label_B978:;
    /* $B978: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B97A:;
    /* $B97A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B97B:;
    /* $B97B: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B97C:;
    /* $B97C: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B97E:;
    /* $B97E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B981:;
    /* $B981: 8E */ maybe_trigger_vblank(4); nes_write(0x96BD, g_cpu.X);
label_B984:;
    /* $B984: 8F */ maybe_trigger_vblank(4); nes_write(0x9798, g_cpu.A & g_cpu.X); /* SAX */
label_B987:;
    /* $B987: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x9A99 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_B98A:;
    /* $B98A: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x9BB7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B98D:;
    /* $B98D: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B990:;
    /* $B990: 9D */ maybe_trigger_vblank(5); nes_write((0xA502 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B993:;
    /* $B993: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B994:;
    /* $B994: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B995:;
    /* $B995: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B996:;
    /* $B996: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B997:;
    /* $B997: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B998:;
    /* $B998: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B999:;
    /* $B999: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B99A:;
    /* $B99A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B99B:;
    /* $B99B: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_B99E:;
    /* $B99E: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_B9A1:;
    /* $B9A1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A2:;
    /* $B9A2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xAF; FLAG_NZ(g_cpu.Y);
label_B9A4:;
    /* $B9A4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A5:;
    /* $B9A5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A6:;
    /* $B9A6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B9A7:;
    /* $B9A7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A8:;
    /* $B9A8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A9:;
    /* $B9A9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB1A7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9AC:; /* main_breakable_wall */
    /* $B9AC: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB2D5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AF:;
    /* $B9AF: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9B1:;
    /* $B9B1: CF */ maybe_trigger_vblank(6); { uint16_t a=0xB5B4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9B4:;
    /* $B9B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9B5:;
    /* $B9B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9B6:;
    /* $B9B6: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B9B8:;
    /* $B9B8: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x74) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BA:;
    /* $B9BA: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9BC:;
    /* $B9BC: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_BA2F; }
label_B9BE:;
    /* $B9BE: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7218 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9C1:;
    /* $B9C1: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x19) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9C3:;
    /* $B9C3: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B9C4:;
    /* $B9C4: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x70 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9C6:;
    /* $B9C6: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x711C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C9:;
    /* $B9C9: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B9CA:;
    /* $B9CA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x717D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9CD:;
    /* $B9CD: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_BA48; }
label_B9CF:;
    /* $B9CF: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB9CF; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B9D0:;
    /* $B9D0: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x52) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9D2:;
    /* $B9D2: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x5A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9D4:;
    /* $B9D4: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x71) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D6:;
    /* $B9D6: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x4679 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D9:;
    /* $B9D9: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x5A; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_B9DB:;
    /* $B9DB: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x4C71 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9DE:;
    /* $B9DE: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4D40 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9E1:;
    /* $B9E1: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x5A41; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9E4:;
    /* $B9E4: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x5B71; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9E7:;
    /* $B9E7: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5471 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9EA:;
    /* $B9EA: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5540 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9ED:;
    /* $B9ED: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x41 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9EF:;
    /* $B9EF: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B9F0:;
    /* $B9F0: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x71; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_B9F2:;
    /* $B9F2: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x6879 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9F5:;
    /* $B9F5: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7540); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F8:;
    /* $B9F8: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x766B; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FB:;
    /* $B9FB: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x71 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9FD:;
    /* $B9FD: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x4079 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA00:;
    /* $BA00: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x416A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA03:;
    /* $BA03: 5A */ maybe_trigger_vblank(2); /* NOP */
label_BA04:;
    /* $BA04: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x60) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA06:;
    /* $BA06: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x617A + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA09:;
    /* $BA09: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BA0A:;
    /* $BA0A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6358); nes_trace_indirect_jump(0xBA0A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_BA2F:;
    /* $BA2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA2F); return;
label_BA30:;
    /* $BA30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA30); return;
label_BA31:;
    /* $BA31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA31); return;
label_BA32:;
    /* $BA32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA32); return;
label_BA33:;
    /* $BA33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA33); return;
label_BA34:;
    /* $BA34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA34); return;
label_BA35:;
    /* $BA35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA35); return;
label_BA36:;
    /* $BA36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA36); return;
label_BA37:;
    /* $BA37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA37); return;
label_BA38:;
    /* $BA38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA38); return;
label_BA39:;
    /* $BA39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA39); return;
label_BA3A:;
    /* $BA3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3A); return;
label_BA3B:;
    /* $BA3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3B); return;
label_BA3C:;
    /* $BA3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3C); return;
label_BA3D:;
    /* $BA3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3D); return;
label_BA3E:;
    /* $BA3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3E); return;
label_BA3F:;
    /* $BA3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3F); return;
label_BA40:;
    /* $BA40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA40); return;
label_BA41:;
    /* $BA41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA41); return;
label_BA42:;
    /* $BA42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA42); return;
label_BA43:;
    /* $BA43: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA43); return;
label_BA44:;
    /* $BA44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA44); return;
label_BA45:;
    /* $BA45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA45); return;
label_BA46:;
    /* $BA46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA46); return;
label_BA47:;
    /* $BA47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA47); return;
label_BA48:;
    /* $BA48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA48); return;
label_BA49:;
    /* $BA49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA49); return;
label_BA4A:;
    /* $BA4A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA4A); return;
label_BA4B:;
    /* $BA4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA4B); return;
label_BA4C:;
    /* $BA4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA4C); return;
label_BA4D:;
    /* $BA4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA4D); return;
label_BA4E:;
    /* $BA4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA4E); return;
label_BA4F:;
    /* $BA4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA4F); return;
label_BA50:;
    /* $BA50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA50); return;
label_BA51:;
    /* $BA51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA51); return;
label_BA52:;
    /* $BA52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA52); return;
label_BA53:;
    /* $BA53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA53); return;
label_BA54:;
    /* $BA54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA54); return;
label_BA55:;
    /* $BA55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA55); return;
label_BA56:;
    /* $BA56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA56); return;
label_BA57:;
    /* $BA57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA57); return;
label_BA58:;
    /* $BA58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA58); return;
label_BA59:;
    /* $BA59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA59); return;
label_BA5A:;
    /* $BA5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA5A); return;
label_BA5B:;
    /* $BA5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA5B); return;
label_BA5C:;
    /* $BA5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA5C); return;
label_BA5D:;
    /* $BA5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA5D); return;
label_BA5E:;
    /* $BA5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA5E); return;
label_BA5F:;
    /* $BA5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA5F); return;
label_BA60:;
    /* $BA60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA60); return;
label_BA61:;
    /* $BA61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA61); return;
label_BA62:;
    /* $BA62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA62); return;
label_BA63:;
    /* $BA63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA63); return;
label_BA64:;
    /* $BA64: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA64); return;
label_BA65:;
    /* $BA65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA65); return;
label_BA66:;
    /* $BA66: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA66); return;
label_BA67:;
    /* $BA67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA67); return;
label_BA68:;
    /* $BA68: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA68); return;
label_BA69:;
    /* $BA69: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA69); return;
label_BA6A:;
    /* $BA6A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA6A); return;
label_BA6B:;
    /* $BA6B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA6B); return;
label_BA6C:; /* main_big_snakey */
    /* $BA6C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA6C); return;
label_BA6D:;
    /* $BA6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA6D); return;
label_BA6E:;
    /* $BA6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA6E); return;
label_BA6F:;
    /* $BA6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA6F); return;
label_BA70:;
    /* $BA70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA70); return;
label_BA71:;
    /* $BA71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA71); return;
label_BA72:;
    /* $BA72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA72); return;
label_BA73:;
    /* $BA73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA73); return;
label_BA74:;
    /* $BA74: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA74); return;
label_BA75:;
    /* $BA75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA75); return;
label_BA76:;
    /* $BA76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA76); return;
label_BA77:;
    /* $BA77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA77); return;
label_BA78:;
    /* $BA78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA78); return;
label_BA79:;
    /* $BA79: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA79); return;
label_BA7A:;
    /* $BA7A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA7A); return;
label_BA7B:;
    /* $BA7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA7B); return;
label_BA7C:;
    /* $BA7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA7C); return;
label_BA7D:;
    /* $BA7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA7D); return;
label_BA7E:;
    /* $BA7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA7E); return;
label_BA7F:;
    /* $BA7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA7F); return;
label_BA80:;
    /* $BA80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA80); return;
label_BA81:;
    /* $BA81: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA81); return;
label_BA82:;
    /* $BA82: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA82); return;
label_BA83:;
    /* $BA83: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA83); return;
label_BA84:;
    /* $BA84: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA84); return;
label_BA85:;
    /* $BA85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA85); return;
label_BA86:;
    /* $BA86: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA86); return;
label_BA87:;
    /* $BA87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA87); return;
label_BA88:;
    /* $BA88: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA88); return;
label_BA89:;
    /* $BA89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA89); return;
label_BA8A:;
    /* $BA8A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA8A); return;
label_BA8B:;
    /* $BA8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA8B); return;
label_BA8C:;
    /* $BA8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA8C); return;
label_BA8D:;
    /* $BA8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA8D); return;
label_BA8E:;
    /* $BA8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA8E); return;
label_BA8F:;
    /* $BA8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA8F); return;
label_BA90:;
    /* $BA90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA90); return;
label_BA91:;
    /* $BA91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA91); return;
label_BA92:;
    /* $BA92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA92); return;
label_BA93:;
    /* $BA93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA93); return;
label_BA94:;
    /* $BA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA94); return;
label_BA95:;
    /* $BA95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA95); return;
label_BA96:;
    /* $BA96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA96); return;
label_BA97:;
    /* $BA97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA97); return;
label_BA98:;
    /* $BA98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA98); return;
label_BA99:;
    /* $BA99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA99); return;
label_BA9A:;
    /* $BA9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA9A); return;
label_BA9B:;
    /* $BA9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA9B); return;
label_BA9C:;
    /* $BA9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA9C); return;
label_BA9D:;
    /* $BA9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA9D); return;
label_BA9E:;
    /* $BA9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA9E); return;
label_BA9F:;
    /* $BA9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA9F); return;
label_BAA0:;
    /* $BAA0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA0); return;
label_BAA1:;
    /* $BAA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA1); return;
label_BAA2:;
    /* $BAA2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA2); return;
label_BAA3:;
    /* $BAA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA3); return;
label_BAA4:;
    /* $BAA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA4); return;
label_BAA5:;
    /* $BAA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA5); return;
label_BAA6:;
    /* $BAA6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA6); return;
label_BAA7:;
    /* $BAA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA7); return;
label_BAA8:;
    /* $BAA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA8); return;
label_BAA9:;
    /* $BAA9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAA9); return;
label_BAAA:;
    /* $BAAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAAA); return;
label_BAAB:;
    /* $BAAB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAAB); return;
label_BAAC:;
    /* $BAAC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAAC); return;
label_BAAD:;
    /* $BAAD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAAD); return;
label_BAAE:;
    /* $BAAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAAE); return;
label_BAAF:;
    /* $BAAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAAF); return;
label_BAB0:;
    /* $BAB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB0); return;
label_BAB1:;
    /* $BAB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB1); return;
label_BAB2:;
    /* $BAB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB2); return;
label_BAB3:;
    /* $BAB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB3); return;
label_BAB4:;
    /* $BAB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB4); return;
label_BAB5:;
    /* $BAB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB5); return;
label_BAB6:;
    /* $BAB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB6); return;
label_BAB7:;
    /* $BAB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB7); return;
label_BAB8:;
    /* $BAB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB8); return;
label_BAB9:;
    /* $BAB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAB9); return;
label_BABA:;
    /* $BABA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBABA); return;
label_BABB:;
    /* $BABB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBABB); return;
label_BABC:;
    /* $BABC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBABC); return;
label_BABD:;
    /* $BABD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBABD); return;
label_BABE:;
    /* $BABE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBABE); return;
label_BABF:;
    /* $BABF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBABF); return;
label_BAC0:;
    /* $BAC0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC0); return;
label_BAC1:;
    /* $BAC1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC1); return;
label_BAC2:;
    /* $BAC2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC2); return;
label_BAC3:;
    /* $BAC3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC3); return;
label_BAC4:;
    /* $BAC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC4); return;
label_BAC5:;
    /* $BAC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC5); return;
label_BAC6:;
    /* $BAC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC6); return;
label_BAC7:;
    /* $BAC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC7); return;
label_BAC8:;
    /* $BAC8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC8); return;
label_BAC9:;
    /* $BAC9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAC9); return;
label_BACA:;
    /* $BACA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBACA); return;
label_BACB:;
    /* $BACB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBACB); return;
label_BACC:;
    /* $BACC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBACC); return;
label_BACD:;
    /* $BACD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBACD); return;
label_BACE:;
    /* $BACE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBACE); return;
label_BACF:;
    /* $BACF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBACF); return;
label_BAD0:;
    /* $BAD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD0); return;
label_BAD1:;
    /* $BAD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD1); return;
label_BAD2:;
    /* $BAD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD2); return;
label_BAD3:;
    /* $BAD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD3); return;
label_BAD4:;
    /* $BAD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD4); return;
label_BAD5:;
    /* $BAD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD5); return;
label_BAD6:;
    /* $BAD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD6); return;
label_BAD7:;
    /* $BAD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD7); return;
label_BAD8:;
    /* $BAD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD8); return;
label_BAD9:;
    /* $BAD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAD9); return;
label_BADA:;
    /* $BADA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBADA); return;
label_BADB:;
    /* $BADB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBADB); return;
label_BADC:;
    /* $BADC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBADC); return;
label_BADD:;
    /* $BADD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBADD); return;
label_BADE:;
    /* $BADE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBADE); return;
label_BADF:;
    /* $BADF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBADF); return;
label_BAE0:;
    /* $BAE0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE0); return;
label_BAE1:;
    /* $BAE1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE1); return;
label_BAE2:;
    /* $BAE2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE2); return;
label_BAE3:;
    /* $BAE3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE3); return;
label_BAE4:;
    /* $BAE4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE4); return;
label_BAE5:;
    /* $BAE5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE5); return;
label_BAE6:;
    /* $BAE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE6); return;
label_BAE7:;
    /* $BAE7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE7); return;
label_BAE8:;
    /* $BAE8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE8); return;
label_BAE9:;
    /* $BAE9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAE9); return;
label_BAEA:;
    /* $BAEA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAEA); return;
label_BAEB:;
    /* $BAEB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAEB); return;
label_BAEC:;
    /* $BAEC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAEC); return;
label_BAED:;
    /* $BAED: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAED); return;
label_BAEE:;
    /* $BAEE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAEE); return;
label_BAEF:;
    /* $BAEF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAEF); return;
label_BAF0:;
    /* $BAF0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF0); return;
label_BAF1:;
    /* $BAF1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF1); return;
label_BAF2:;
    /* $BAF2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF2); return;
label_BAF3:;
    /* $BAF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF3); return;
label_BAF4:;
    /* $BAF4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF4); return;
label_BAF5:;
    /* $BAF5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF5); return;
label_BAF6:;
    /* $BAF6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF6); return;
label_BAF7:;
    /* $BAF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF7); return;
label_BAF8:;
    /* $BAF8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF8); return;
label_BAF9:;
    /* $BAF9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAF9); return;
label_BAFA:;
    /* $BAFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAFA); return;
label_BAFB:;
    /* $BAFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAFB); return;
label_BAFC:;
    /* $BAFC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAFC); return;
label_BAFD:;
    /* $BAFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAFD); return;
label_BAFE:;
    /* $BAFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAFE); return;
label_BAFF:;
    /* $BAFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBAFF); return;
label_BB00:;
    /* $BB00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB00); return;
label_BB01:;
    /* $BB01: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x24); FLAG_NZ(g_cpu.A);
label_BB03:;
    /* $BB03: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BB05:;
    /* $BB05: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_BB06:;
    /* $BB06: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00CE); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB09:;
    /* $BB09: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC1 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB0B:;
    /* $BB0B: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xE8) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BB0D:;
    /* $BB0D: EA */ maybe_trigger_vblank(2); /* NOP */
label_BB0E:;
    /* $BB0E: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD2EE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB11:;
    /* $BB11: EB */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB13:;
    /* $BB13: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xE0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB15:;
    /* $BB15: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BB17:;
    /* $BB17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB17); return;
label_BB18:;
    /* $BB18: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0000); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB1B:;
    /* $BB1B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xE6E4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB1E:;
    /* $BB1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB1E); return;
label_BB1F:;
    /* $BB1F: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x80 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BB21:;
    /* $BB21: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BB23:;
    /* $BB23: 86 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.X);
label_BB25:;
    /* $BB25: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB26:;
    /* $BB26: 8C */ maybe_trigger_vblank(4); nes_write(0xA08E, g_cpu.Y);
label_BB29:;
    /* $BB29: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA4; FLAG_NZ(g_cpu.X);
label_BB2B:;
    /* $BB2B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.X);
label_BB2D:;
    /* $BB2D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB2E:;
    /* $BB2E: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xC0AE); FLAG_NZ(g_cpu.Y);
label_BB31:;
    /* $BB31: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BB33:;
    /* $BB33: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB35:;
    /* $BB35: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_BB36:;
    /* $BB36: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xE0CE); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB39:;
    /* $BB39: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BB3B:;
    /* $BB3B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xE8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: EA */ maybe_trigger_vblank(2); /* NOP */
label_BB3E:;
    /* $BB3E: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x75EE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB41:;
    /* $BB41: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BB42:;
    /* $BB42: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x25 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BB44:;
    /* $BB44: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BB46:;
    /* $BB46: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_BB47:;
    /* $BB47: 5A */ maybe_trigger_vblank(2); /* NOP */
label_BB48:;
    /* $BB48: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x75); FLAG_NZ(g_cpu.A);
label_BB4A:;
    /* $BB4A: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x51 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB4C:;
    /* $BB4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB4C); return;
label_BB4D:;
    /* $BB4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB4D); return;
label_BB4E:;
    /* $BB4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB4E); return;
label_BB4F:;
    /* $BB4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB4F); return;
label_BB50:;
    /* $BB50: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB52:;
    /* $BB52: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB54:;
    /* $BB54: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB56:;
    /* $BB56: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB58:;
    /* $BB58: DA */ maybe_trigger_vblank(2); /* NOP */
label_BB59:;
    /* $BB59: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD8EF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB5C:;
    /* $BB5C: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD4 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB5E:;
    /* $BB5E: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BB60:;
    /* $BB60: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCB; g_cpu.C=(g_cpu.A>=0xCB)?1:0; FLAG_NZ(r&0xFF); }
label_BB62:;
    /* $BB62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB62); return;
label_BB63:;
    /* $BB63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB63); return;
label_BB64:;
    /* $BB64: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCECE); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB67:;
    /* $BB67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB67); return;
label_BB68:;
    /* $BB68: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDCDA + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB6B:;
    /* $BB6B: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDFDE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BB6E:;
    /* $BB6E: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_BB70; }
label_BB70:;
    /* $BB70: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BB72:;
    /* $BB72: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BB74:;
    /* $BB74: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BB76:;
    /* $BB76: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x254E, -1); return;
label_BBB3:;
    /* $BBB3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BBB5:;
    /* $BBB5: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x767B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BBB8:;
    /* $BBB8: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BBBA:;
    /* $BBBA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BBBC:;
    /* $BBBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBBBC); return;
label_BBBD:;
    /* $BBBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBBBD); return;
label_BBBE:; /* main_tama_A */
    /* $BBBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBBBE); return;
label_BBBF:;
    /* $BBBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBBBF); return;
label_BBC0:;
    /* $BBC0: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BBC2:;
    /* $BBC2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BBC4:;
    /* $BBC4: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BBC6:;
    /* $BBC6: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BBC7:;
    /* $BBC7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BBC9:;
    /* $BBC9: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BBCB:;
    /* $BBCB: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BBCD:;
    /* $BBCD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BBCF:;
    /* $BBCF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x30); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BBD1:;
    /* $BBD1: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_BBD2:;
    /* $BBD2: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BBD4:;
    /* $BBD4: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2524); FLAG_NZ(g_cpu.A);
label_BBD7:;
    /* $BBD7: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x40); FLAG_NZ(g_cpu.A);
label_BBD9:;
    /* $BBD9: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BBDA:;
    /* $BBDA: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x37 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BBDC:;
    /* $BBDC: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3943 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBDF:;
    /* $BBDF: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2C) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BBE1:;
    /* $BBE1: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x242F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BBE4:;
    /* $BBE4: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x39) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBE6:;
    /* $BBE6: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x2525 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBE9:;
    /* $BBE9: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BBEB:;
    /* $BBEB: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x31); FLAG_NZ(g_cpu.A);
label_BBED:;
    /* $BBED: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x2D73 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBF0:;
    /* $BBF0: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BBF1:;
    /* $BBF1: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BBF2:;
    /* $BBF2: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BBF3:;
    /* $BBF3: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BBF4:;
    /* $BBF4: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BBF5:;
    /* $BBF5: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BBF7:;
    /* $BBF7: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x7325 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BBFA:;
    /* $BBFA: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x72 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BBFC:;
    /* $BBFC: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x37 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BBFE:;
    /* $BBFE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_BBFF:;
    /* $BBFF: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x2500 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC02:;
    /* $BC02: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC04:;
    /* $BC04: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCB; g_cpu.C=(g_cpu.A>=0xCB)?1:0; FLAG_NZ(r&0xFF); }
label_BC06:;
    /* $BC06: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xC0CF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC09:;
    /* $BC09: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC2 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC0B:;
    /* $BC0B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xEBE9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC0E:;
    /* $BC0E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD2EF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC11:;
    /* $BC11: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEAE8); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC14:;
    /* $BC14: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE3 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC16:;
    /* $BC16: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0000 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC19:;
    /* $BC19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC19); return;
label_BC1A:;
    /* $BC1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC1A); return;
label_BC1B:;
    /* $BC1B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC1B); return;
label_BC1C:;
    /* $BC1C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC1E:;
    /* $BC1E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD4 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC20:;
    /* $BC20: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A);
label_BC22:;
    /* $BC22: 85 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A);
label_BC24:;
    /* $BC24: 89 */ maybe_trigger_vblank(2); /* NOP */
label_BC26:;
    /* $BC26: 8D */ maybe_trigger_vblank(4); nes_write(0xA18F, g_cpu.A);
label_BC29:;
    /* $BC29: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BC2B:;
    /* $BC2B: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_BC2D:;
    /* $BC2D: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xAD; FLAG_NZ(g_cpu.A);
label_BC2F:;
    /* $BC2F: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xC3C1); FLAG_NZ(g_cpu.A);
label_BC32:;
    /* $BC32: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC34:;
    /* $BC34: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xCB; g_cpu.C=(g_cpu.A>=0xCB)?1:0; FLAG_NZ(r&0xFF); }
label_BC36:;
    /* $BC36: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xE1CF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC39:;
    /* $BC39: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC3B:;
    /* $BC3B: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xE9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC3D:;
    /* $BC3D: EB */ maybe_trigger_vblank(2); { uint8_t m=0xED; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC3F:;
    /* $BC3F: EF */ maybe_trigger_vblank(6); { uint16_t a=0x7325; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC42:;
    /* $BC42: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x72 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC44:;
    /* $BC44: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x58 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_BC46:;
    /* $BC46: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x505B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BC49:;
    /* $BC49: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BC4A:;
    /* $BC4A: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BC4B:;
    /* $BC4B: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BC4D:;
    /* $BC4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC4D); return;
label_BC4E:;
    /* $BC4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC4E); return;
label_BC4F:;
    /* $BC4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC4F); return;
label_BC50:;
    /* $BC50: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC52:;
    /* $BC52: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xD7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC54:;
    /* $BC54: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC56:;
    /* $BC56: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC58:;
    /* $BC58: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC5B:;
    /* $BC5B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BC5C:;
    /* $BC5C: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BC5E:;
    /* $BC5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC5E); return;
label_BC5F:;
    /* $BC5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC5F); return;
label_BC60:;
    /* $BC60: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_BC61:;
    /* $BC61: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0000); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC64:;
    /* $BC64: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCFCE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC67:;
    /* $BC67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC67); return;
label_BC68:;
    /* $BC68: DA */ maybe_trigger_vblank(2); /* NOP */
label_BC69:;
    /* $BC69: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xC5DC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC6C:;
    /* $BC6C: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF70 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC6F:;
    /* $BC6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC6F); return;
label_BC70:;
    /* $BC70: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BC72:;
    /* $BC72: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BC74:;
    /* $BC74: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BC76:;
    /* $BC76: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x724F); FLAG_NZ(g_cpu.A);
label_BC79:;
    /* $BC79: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x25 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BC7B:;
    /* $BC7B: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC7D:;
    /* $BC7D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC7F:;
    /* $BC7F: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x2400; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC82:;
    /* $BC82: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC84:;
    /* $BC84: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC86:;
    /* $BC86: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC88:;
    /* $BC88: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BC8A:;
    /* $BC8A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_BC8C:;
    /* $BC8C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_BC8E:;
    /* $BC8E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC124); FLAG_NZ(g_cpu.A);
label_BC91:;
    /* $BC91: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC93:;
    /* $BC93: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC95:;
    /* $BC95: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC97:;
    /* $BC97: CF */ maybe_trigger_vblank(6); { uint16_t a=0xE3E1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC9A:;
    /* $BC9A: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC9C:;
    /* $BC9C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xEB; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC9E:;
    /* $BC9E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00EF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BCA1:;
    /* $BCA1: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BCA3:;
    /* $BCA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA3); return;
label_BCA4:;
    /* $BCA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA4); return;
label_BCA5:;
    /* $BCA5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCA7:;
    /* $BCA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA7); return;
label_BCA8:; /* main_tama_B */
    /* $BCA8: 85 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.A);
label_BCAA:;
    /* $BCAA: 8F */ maybe_trigger_vblank(4); nes_write(0x2424, g_cpu.A & g_cpu.X); /* SAX */
label_BCAD:;
    /* $BCAD: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_BCAE:;
    /* $BCAE: 7A */ maybe_trigger_vblank(2); /* NOP */
label_BCAF:;
    /* $BCAF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB1:;
    /* $BCB1: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB3:;
    /* $BCB3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xAF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB5:;
    /* $BCB5: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x247B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCB8:;
    /* $BCB8: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCBA:;
    /* $BCBA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCBC:;
    /* $BCBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBC); return;
label_BCBD:;
    /* $BCBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBD); return;
label_BCBE:;
    /* $BCBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBE); return;
label_BCBF:;
    /* $BCBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBF); return;
label_BCC0:;
    /* $BCC0: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCC2:;
    /* $BCC2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCC4:;
    /* $BCC4: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCC6:;
    /* $BCC6: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCC7:;
    /* $BCC7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCC9:;
    /* $BCC9: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCCB:;
    /* $BCCB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F0E); FLAG_NZ(g_cpu.A);
label_BCCE:;
    /* $BCCE: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x24); FLAG_NZ(g_cpu.A);
label_BCD0:;
    /* $BCD0: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCD2:;
    /* $BCD2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_BCD4:;
    /* $BCD4: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2524); FLAG_NZ(g_cpu.A);
label_BCD7:;
    /* $BCD7: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_BCD9:;
    /* $BCD9: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x25 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCDB:;
    /* $BCDB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCDD:;
    /* $BCDD: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BCDE:;
    /* $BCDE: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x30); FLAG_NZ(g_cpu.A);
label_BCE0:;
    /* $BCE0: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x722D); FLAG_NZ(g_cpu.A);
label_BCE3:;
    /* $BCE3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x33); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCE5:;
    /* $BCE5: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BCE6:;
    /* $BCE6: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x37 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BCE8:;
    /* $BCE8: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x39); FLAG_NZ(g_cpu.A);
label_BCEA:;
    /* $BCEA: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3130 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCED:;
    /* $BCED: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_BCEF:;
    /* $BCEF: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x3A3A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BCF2:;
    /* $BCF2: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCF3:;
    /* $BCF3: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCF4:;
    /* $BCF4: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCF5:;
    /* $BCF5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCF7:;
    /* $BCF7: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x72); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x25 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCFB:;
    /* $BCFB: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCFD:;
    /* $BCFD: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCFF:;
    /* $BCFF: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BD01:;
    /* $BD01: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x24); FLAG_NZ(g_cpu.A);
label_BD03:;
    /* $BD03: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BD05:;
    /* $BD05: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD06:;
    /* $BD06: DC */ maybe_trigger_vblank(4); (void)nes_read((0xD0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD09:;
    /* $BD09: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD1) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD0B:;
    /* $BD0B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFAF8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD0E:;
    /* $BD0E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xDDFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD11:;
    /* $BD11: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xF900 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD14:;
    /* $BD14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1D08), 9); return; }
label_BD16:;
    /* $BD16: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00ED); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD19:;
    /* $BD19: EE */ maybe_trigger_vblank(6); { uint16_t a=0x00FE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1C:;
    /* $BD1C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD1E:;
    /* $BD1E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD20:;
    /* $BD20: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x1CB4), 9); return; }
label_BD22:;
    /* $BD22: 94 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.Y);
label_BD24:;
    /* $BD24: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BD25:;
    /* $BD25: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_BD26:;
    /* $BD26: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BD29:;
    /* $BD29: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BD2A:;
    /* $BD2A: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BD2C:;
    /* $BD2C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_BD2D:;
    /* $BD2D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BD2E:;
    /* $BD2E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xD0BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BD31:;
    /* $BD31: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BD32:;
    /* $BD32: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD34:;
    /* $BD34: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BD35:;
    /* $BD35: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD36:;
    /* $BD36: DC */ maybe_trigger_vblank(4); (void)nes_read((0xF0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD39:;
    /* $BD39: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BD3A:;
    /* $BD3A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD3C:;
    /* $BD3C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD3D:;
    /* $BD3D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD3E:;
    /* $BD3E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x45FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD41:;
    /* $BD41: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x48; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BD43:;
    /* $BD43: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BD44:;
    /* $BD44: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD46:;
    /* $BD46: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x25); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD48:;
    /* $BD48: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4A:;
    /* $BD4A: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x61) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4C:;
    /* $BD4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4C); return;
label_BD4D:;
    /* $BD4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4D); return;
label_BD4E:;
    /* $BD4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4E); return;
label_BD4F:;
    /* $BD4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4F); return;
label_BD50:;
    /* $BD50: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD53:;
    /* $BD53: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xDD; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BD55:;
    /* $BD55: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD6DD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD58:;
    /* $BD58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD58); return;
label_BD59:;
    /* $BD59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD59); return;
label_BD5A:;
    /* $BD5A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD5D:;
    /* $BD5D: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD5 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD5F:;
    /* $BD5F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD61:;
    /* $BD61: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD62:;
    /* $BD62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD62); return;
label_BD63:;
    /* $BD63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD63); return;
label_BD64:;
    /* $BD64: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD67:;
    /* $BD67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD67); return;
label_BD68:;
    /* $BD68: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDA + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD6B:;
    /* $BD6B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDEDE + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD6E:;
    /* $BD6E: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x2500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BD71:;
    /* $BD71: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x65 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD73:;
    /* $BD73: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BD74:;
    /* $BD74: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD76:;
    /* $BD76: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x255E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD79:;
    /* $BD79: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BD7A:;
    /* $BD7A: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BD7C:;
    /* $BD7C: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BD7E:;
    /* $BD7E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x0024 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD81:;
    /* $BD81: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_BD82:;
    /* $BD82: 94 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.Y);
label_BD84:;
    /* $BD84: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BD85:;
    /* $BD85: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_BD86:;
    /* $BD86: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BD89:;
    /* $BD89: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BD8A:;
    /* $BD8A: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BD8C:;
    /* $BD8C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_BD8D:;
    /* $BD8D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BD8E:;
    /* $BD8E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xD0BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BD91:;
    /* $BD91: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BD92:;
    /* $BD92: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD94:;
    /* $BD94: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BD95:;
    /* $BD95: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD96:;
    /* $BD96: DC */ maybe_trigger_vblank(4); (void)nes_read((0xF0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD99:;
    /* $BD99: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BD9A:;
    /* $BD9A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD9C:;
    /* $BD9C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD9D:;
    /* $BD9D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD9E:;
    /* $BD9E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x00FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BDA1:;
    /* $BDA1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8B + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BDA3:;
    /* $BDA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA3); return;
label_BDA4:;
    /* $BDA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA4); return;
label_BDA5:;
    /* $BDA5: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x69; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BDA7:;
    /* $BDA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA7); return;
label_BDA8:;
    /* $BDA8: 86 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.X);
label_BDAA:;
    /* $BDAA: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_BDAD:;
    /* $BDAD: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x3E; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_BDAF:;
    /* $BDAF: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BDB1:;
    /* $BDB1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BDB2:;
    /* $BDB2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x241C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BDB5:;
    /* $BDB5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDB7:;
    /* $BDB7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDB9:;
    /* $BDB9: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2424 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDBC:;
    /* $BDBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBC); return;
label_BDBD:;
    /* $BDBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBD); return;
label_BDBE:;
    /* $BDBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBE); return;
label_BDBF:;
    /* $BDBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBF); return;
label_BDC0:;
    /* $BDC0: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDC2:;
    /* $BDC2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDC4:;
    /* $BDC4: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDC6:;
    /* $BDC6: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x2520 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDC9:;
    /* $BDC9: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDCB:;
    /* $BDCB: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDCD:;
    /* $BDCD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDCF:;
    /* $BDCF: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x3837 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BDD2:;
    /* $BDD2: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3130 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDD5:;
    /* $BDD5: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3130 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BDD8:;
    /* $BDD8: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDDA:;
    /* $BDDA: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3937 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDDD:;
    /* $BDDD: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x5239 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDE0:;
    /* $BDE0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_BE14; }
label_BDE2:;
    /* $BDE2: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDE4:;
    /* $BDE4: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x43); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDE6:;
    /* $BDE6: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3163 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDE9:;
    /* $BDE9: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6324); FLAG_NZ(g_cpu.A);
label_BDEC:;
    /* $BDEC: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDEE:;
    /* $BDEE: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BDEF:;
    /* $BDEF: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDF1:;
    /* $BDF1: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BDF2:;
    /* $BDF2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDF4:;
    /* $BDF4: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BDF6:;
    /* $BDF6: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BDF7:;
    /* $BDF7: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BDF9:; /* main_item_pickup */
    /* $BDF9: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3B3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDFC:;
    /* $BDFC: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x2E2C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDFF:;
    /* $BDFF: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x2500; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BE02:;
    /* $BE02: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE04:;
    /* $BE04: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDB + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE07:;
    /* $BE07: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD1D1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE0A:;
    /* $BE0A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xF9EF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE0D:;
    /* $BE0D: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE10:;
    /* $BE10: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF8FC + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE13:;
    /* $BE13: FA */ maybe_trigger_vblank(2); /* NOP */
label_BE14:;
    /* $BE14: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF3) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE16:;
    /* $BE16: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE16); return;
label_BE17:;
    /* $BE17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE17); return;
label_BE18:;
    /* $BE18: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE18); return;
label_BE19:;
    /* $BE19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE19); return;
label_BE1A:;
    /* $BE1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE1A); return;
label_BE1B:;
    /* $BE1B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE1B); return;
label_BE1C:;
    /* $BE1C: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE1E:;
    /* $BE1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE1E); return;
label_BE1F:;
    /* $BE1F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x91 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE21:;
    /* $BE21: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_BE23:;
    /* $BE23: 97 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_BE25:;
    /* $BE25: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_BE28:;
    /* $BE28: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE2A:;
    /* $BE2A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BE2C:;
    /* $BE2C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDBB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE2F:;
    /* $BE2F: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xD3D1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE32:;
    /* $BE32: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE34:;
    /* $BE34: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDB + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE37:;
    /* $BE37: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF3F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE3A:;
    /* $BE3A: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE3C:;
    /* $BE3C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFB + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE3F:;
    /* $BE3F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4846 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE42:;
    /* $BE42: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4B; FLAG_NZ(g_cpu.A);
label_BE44:;
    /* $BE44: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x63); FLAG_NZ(g_cpu.A);
label_BE46:;
    /* $BE46: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE48:;
    /* $BE48: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BE49:;
    /* $BE49: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_BE70; }
label_BE4B:;
    /* $BE4B: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BE4C:;
    /* $BE4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4C); return;
label_BE4D:;
    /* $BE4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4D); return;
label_BE4E:;
    /* $BE4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4E); return;
label_BE4F:;
    /* $BE4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4F); return;
label_BE50:;
    /* $BE50: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEFDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE53:;
    /* $BE53: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BE54:;
    /* $BE54: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00DD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE57:;
    /* $BE57: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE59:;
    /* $BE59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE59); return;
label_BE5A:;
    /* $BE5A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xD5D8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE5D:;
    /* $BE5D: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE5F:;
    /* $BE5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE5F); return;
label_BE60:;
    /* $BE60: DA */ maybe_trigger_vblank(2); /* NOP */
label_BE61:;
    /* $BE61: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE64:;
    /* $BE64: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEFDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE67:;
    /* $BE67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE67); return;
label_BE68:;
    /* $BE68: DA */ maybe_trigger_vblank(2); /* NOP */
label_BE69:;
    /* $BE69: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDDDD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE6C:;
    /* $BE6C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE6F:;
    /* $BE6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE6F); return;
label_BE70:;
    /* $BE70: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BE71:;
    /* $BE71: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x25); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE73:;
    /* $BE73: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x65 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE75:;
    /* $BE75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE75); return;
label_BE76:;
    /* $BE76: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x255F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE79:;
    /* $BE79: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BE7B:;
    /* $BE7B: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BE7C:;
    /* $BE7C: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_BE7E:;
    /* $BE7E: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x7F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE80:;
    /* $BE80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE80); return;
label_BE81:;
    /* $BE81: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_BE83:;
    /* $BE83: 97 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_BE85:;
    /* $BE85: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_BE88:;
    /* $BE88: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE8A:;
    /* $BE8A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BE8C:;
    /* $BE8C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDBB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE8F:;
    /* $BE8F: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xD3D1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE92:;
    /* $BE92: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE94:;
    /* $BE94: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDB + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE97:;
    /* $BE97: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF3F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE9A:;
    /* $BE9A: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE9C:;
    /* $BE9C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFB + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE9F:;
    /* $BE9F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x8400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BEA2:;
    /* $BEA2: 8C */ maybe_trigger_vblank(4); nes_write(0x0000, g_cpu.Y);
label_BEA5:;
    /* $BEA5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BEA6:;
    /* $BEA6: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_BEA7:;
    /* $BEA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEA7); return;
label_BEA8:;
    /* $BEA8: 87 */ maybe_trigger_vblank(3); nes_write(0x91, g_cpu.A & g_cpu.X); /* SAX */
label_BEAA:;
    /* $BEAA: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_BEAD:;
    /* $BEAD: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x243F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEB0:;
    /* $BEB0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB2:;
    /* $BEB2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB4:;
    /* $BEB4: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB6:;
    /* $BEB6: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB8:;
    /* $BEB8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1924 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEBB:;
    /* $BEBB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BEBD; }
label_BEBD:;
    /* $BEBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEBD); return;
label_BEBE:;
    /* $BEBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEBE); return;
label_BEBF:;
    /* $BEBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEBF); return;
label_BEC0:;
    /* $BEC0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEC2:;
    /* $BEC2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEC4:;
    /* $BEC4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BEC6:;
    /* $BEC6: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x0A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEC9:;
    /* $BEC9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_BECB:;
    /* $BECB: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BECD:;
    /* $BECD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BECF:;
    /* $BECF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x2424); FLAG_NZ(g_cpu.A);
label_BED2:; /* main_surprise_box */
    /* $BED2: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BED3:;
    /* $BED3: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BED5:;
    /* $BED5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x31); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BED7:;
    /* $BED7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x24) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BED9:;
    /* $BED9: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEDB:;
    /* $BEDB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEDD:;
    /* $BEDD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x65); FLAG_NZ(g_cpu.A);
label_BEDF:;
    /* $BEDF: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x31 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEE1:;
    /* $BEE1: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEE3:;
    /* $BEE3: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2539); FLAG_NZ(g_cpu.A);
label_BEE6:;
    /* $BEE6: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x37); FLAG_NZ(g_cpu.A);
label_BEE8:;
    /* $BEE8: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEEA:;
    /* $BEEA: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x2437 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEED:;
    /* $BEED: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x53); FLAG_NZ(g_cpu.A);
label_BEEF:;
    /* $BEEF: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BEF1:;
    /* $BEF1: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BEF3:;
    /* $BEF3: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BEF4:;
    /* $BEF4: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_BEF6:;
    /* $BEF6: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEF8:;
    /* $BEF8: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3B3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEFB:;
    /* $BEFB: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x2D3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEFE:;
    /* $BEFE: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0062); FLAG_NZ(g_cpu.A);
label_BF01:;
    /* $BF01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF01); return;
label_BF02:;
    /* $BF02: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF02); return;
label_BF03:;
    /* $BF03: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF03); return;
label_BF04:;
    /* $BF04: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF06:;
    /* $BF06: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF07:;
    /* $BF07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF08:;
    /* $BF08: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF08); return;
label_BF09:;
    /* $BF09: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF09); return;
label_BF0A:;
    /* $BF0A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF0A); return;
label_BF0B:;
    /* $BF0B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF0B); return;
label_BF0C:;
    /* $BF0C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF0E:;
    /* $BF0E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF0F:;
    /* $BF0F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF10:;
    /* $BF10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF10); return;
label_BF11:;
    /* $BF11: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF13:;
    /* $BF13: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF14:;
    /* $BF14: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF15:;
    /* $BF15: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF16:;
    /* $BF16: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF18:;
    /* $BF18: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF1A:;
    /* $BF1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF1A); return;
label_BF1B:;
    /* $BF1B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF1C:;
    /* $BF1C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF1D:;
    /* $BF1D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF1E:;
    /* $BF1E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF20:;
    /* $BF20: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF22:;
    /* $BF22: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF22); return;
label_BF23:;
    /* $BF23: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF23); return;
label_BF24:;
    /* $BF24: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF24); return;
label_BF25:;
    /* $BF25: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF25); return;
label_BF26:;
    /* $BF26: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF26); return;
label_BF27:;
    /* $BF27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF27); return;
label_BF28:;
    /* $BF28: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF2A:;
    /* $BF2A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF2A); return;
label_BF2B:;
    /* $BF2B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF2B); return;
label_BF2C:;
    /* $BF2C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF2C); return;
label_BF2D:;
    /* $BF2D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF2D); return;
label_BF2E:;
    /* $BF2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF2E); return;
label_BF2F:;
    /* $BF2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF2F); return;
label_BF30:;
    /* $BF30: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF32:;
    /* $BF32: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF33:;
    /* $BF33: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF34:;
    /* $BF34: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF35:;
    /* $BF35: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF36:;
    /* $BF36: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF37:;
    /* $BF37: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF38:;
    /* $BF38: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF3A:;
    /* $BF3A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF3B:;
    /* $BF3B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF3C:;
    /* $BF3C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF3D:;
    /* $BF3D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF3E:;
    /* $BF3E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF3F:;
    /* $BF3F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF40:;
    /* $BF40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF40); return;
label_BF41:;
    /* $BF41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF41); return;
label_BF42:;
    /* $BF42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF42); return;
label_BF43:;
    /* $BF43: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF43); return;
label_BF44:;
    /* $BF44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF44); return;
label_BF45:;
    /* $BF45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF45); return;
label_BF46:;
    /* $BF46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF46); return;
label_BF47:;
    /* $BF47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF47); return;
label_BF48:;
    /* $BF48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF48); return;
label_BF49:;
    /* $BF49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF49); return;
label_BF4A:;
    /* $BF4A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF4A); return;
label_BF4B:;
    /* $BF4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF4B); return;
label_BF4C:;
    /* $BF4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF4C); return;
label_BF4D:;
    /* $BF4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF4D); return;
label_BF4E:;
    /* $BF4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF4E); return;
label_BF4F:;
    /* $BF4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF4F); return;
label_BF50:;
    /* $BF50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF50); return;
label_BF51:;
    /* $BF51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF51); return;
label_BF52:;
    /* $BF52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF52); return;
label_BF53:;
    /* $BF53: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF55:;
    /* $BF55: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF57:;
    /* $BF57: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF59:;
    /* $BF59: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF5B:;
    /* $BF5B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF5D:;
    /* $BF5D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF5F:;
    /* $BF5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF61:;
    /* $BF61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF61); return;
label_BF62:;
    /* $BF62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF62); return;
label_BF63:;
    /* $BF63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF63); return;
label_BF64:;
    /* $BF64: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF65:;
    /* $BF65: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF66:;
    /* $BF66: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF67:;
    /* $BF67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF67); return;
label_BF68:;
    /* $BF68: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF68); return;
label_BF69:;
    /* $BF69: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF69); return;
label_BF6A:;
    /* $BF6A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF6A); return;
label_BF6B:;
    /* $BF6B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF6D:;
    /* $BF6D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF6E:;
    /* $BF6E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF6F:;
    /* $BF6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF6F); return;
label_BF70:;
    /* $BF70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF70); return;
label_BF71:;
    /* $BF71: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF71); return;
label_BF72:;
    /* $BF72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF72); return;
label_BF73:;
    /* $BF73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF73); return;
label_BF74:;
    /* $BF74: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF74); return;
label_BF75:;
    /* $BF75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF75); return;
label_BF76:;
    /* $BF76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF76); return;
label_BF77:;
    /* $BF77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF77); return;
label_BF78:;
    /* $BF78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF78); return;
label_BF79:;
    /* $BF79: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF79); return;
label_BF7A:;
    /* $BF7A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF7A); return;
label_BF7B:;
    /* $BF7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF7B); return;
label_BF7C:;
    /* $BF7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF7C); return;
label_BF7D:;
    /* $BF7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF7D); return;
label_BF7E:;
    /* $BF7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF7E); return;
label_BF7F:;
    /* $BF7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF7F); return;
label_BF80:;
    /* $BF80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF80); return;
label_BF81:;
    /* $BF81: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF82:;
    /* $BF82: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF83:;
    /* $BF83: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF84:;
    /* $BF84: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF85:;
    /* $BF85: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF86:;
    /* $BF86: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF87:;
    /* $BF87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF87); return;
label_BF88:;
    /* $BF88: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF8A:;
    /* $BF8A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF8C:;
    /* $BF8C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF8E:;
    /* $BF8E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF90:;
    /* $BF90: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF92:;
    /* $BF92: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF94:;
    /* $BF94: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF96:;
    /* $BF96: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF98:;
    /* $BF98: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF9A:;
    /* $BF9A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF9C:;
    /* $BF9C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF9E:;
    /* $BF9E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BFA0:;
    /* $BFA0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFA0); return;
label_BFA1:;
    /* $BFA1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BFA3:;
    /* $BFA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFA3); return;
label_BFA4:;
    /* $BFA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFA4); return;
label_BFA5:;
    /* $BFA5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFA6:;
    /* $BFA6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFA7:;
    /* $BFA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFA7); return;
label_BFA8:;
    /* $BFA8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BFAA:;
    /* $BFAA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BFAC:;
    /* $BFAC: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFAD:;
    /* $BFAD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFAE:;
    /* $BFAE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFAF:;
    /* $BFAF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFB0:;
    /* $BFB0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BFB2:;
    /* $BFB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFB2); return;
label_BFB3:;
    /* $BFB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFB3); return;
label_BFB4:;
    /* $BFB4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFB5:;
    /* $BFB5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFB6:;
    /* $BFB6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFB7:;
    /* $BFB7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BFB8:;
    /* $BFB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFB8); return;
label_BFB9:;
    /* $BFB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFB9); return;
label_BFBA:;
    /* $BFBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFBA); return;
label_BFBB:;
    /* $BFBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFBB); return;
label_BFBC:;
    /* $BFBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFBC); return;
label_BFBD:;
    /* $BFBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFBD); return;
label_BFBE:;
    /* $BFBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFBE); return;
label_BFBF:;
    /* $BFBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFBF); return;
label_BFC0:;
    /* $BFC0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFC0); return;
label_BFC1:;
    /* $BFC1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFC1); return;
label_BFC2:;
    /* $BFC2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFC2); return;
label_BFC3:;
    /* $BFC3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFC3); return;
label_BFC4:;
    /* $BFC4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFC4); return;
label_BFC5:;
    /* $BFC5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBFC5); return;
label_B933:; return;
label_B934:; return;
label_B937:; return;
label_B93A:; return;
label_B93D:; return;
label_B93F:; return;
label_B941:; return;
label_B942:; return;
label_B943:; return;
label_B944:; return;
label_B945:; return;
label_B946:; return;
label_B947:; return;
label_B948:; return;
label_B949:; return;
label_B94A:; return;
label_B94B:; return;
label_B94D:; return;
label_B94F:; return;
label_B950:; return;
label_B951:; return;
label_B954:; return;
label_B955:; return;
label_B956:; return;
label_B957:; return;
label_B959:; return;
label_B95A:; return;
label_B95B:; return;
label_BB79:; return;
label_BB7B:; return;
label_BB7C:; return;
label_BB7E:; return;
label_BB81:; return;
label_BB83:; return;
label_BB85:; return;
label_BB87:; return;
label_BB88:; return;
label_BB8A:; return;
label_BB8C:; return;
label_BB8D:; return;
label_BB8E:; return;
label_BB91:; return;
label_BB93:; return;
label_BB95:; return;
label_BB96:; return;
label_BB99:; return;
label_BB9B:; return;
label_BB9D:; return;
label_BB9E:; return;
label_BBA1:; return;
label_BBA3:; return;
label_BBA4:; return;
label_BBA5:; return;
label_BBA7:; return;
label_BBA8:; return;
label_BBAA:; return;
label_BBAD:; return;
label_BBAF:; return;
label_BBB1:; return;
label_BFC6:; return;
label_BFC7:; return;
label_BFC8:; return;
label_BFC9:; return;
label_BFCA:; return;
label_BFCB:; return;
label_BFCC:; return;
label_BFCD:; return;
label_BFCE:; return;
label_BFD0:; return;
label_BFD1:; return;
label_BFD2:; return;
label_BFD3:; return;
label_BFD4:; return;
label_BFD5:; return;
label_BFD6:; return;
label_BFD7:; return;
label_BFD8:; return;
label_BFD9:; return;
label_BFDA:; return;
label_BFDB:; return;
label_BFDC:; return;
label_BFDD:; return;
label_BFDE:; return;
label_BFDF:; return;
label_BFE0:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE3:; return;
label_BFE4:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE7:; return;
label_BFE8:; return;
label_BFE9:; return;
label_BFEA:; return;
label_BFEB:; return;
label_BFEC:; return;
label_BFED:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF1:; return;
label_BFF2:; return;
label_BFF3:; return;
label_BFF4:; return;
label_BFF5:; return;
label_BFF6:; return;
label_BFF7:; return;
label_BFF8:; return;
label_BFF9:; return;
label_BFFA:; return;
label_BFFB:; return;
label_BFFC:; return;
label_BFFD:; return;
label_BFFE:; return;
label_BFFF:; return;
label_C000:; return;
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
}

void func_B418_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B418_b9");
#endif
    func_B418_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6FC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6FC_b9");
#endif
    func_B418_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B41D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B41D_b9");
#endif
    func_B418_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B427_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B427_b9");
#endif
    func_B418_b9_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B42A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B42A_b9");
#endif
    func_B418_b9_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B44A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B44A_b9");
#endif
    func_B418_b9_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B474_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B474_b9");
#endif
    func_B418_b9_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B49E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B49E_b9");
#endif
    func_B418_b9_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4E4_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4E4_b9");
#endif
    func_B418_b9_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B50A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B50A_b9");
#endif
    func_B418_b9_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B526_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B526_b9");
#endif
    func_B418_b9_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B548_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B548_b9");
#endif
    func_B418_b9_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B55E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B55E_b9");
#endif
    func_B418_b9_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5FA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FA_b9");
#endif
    func_B418_b9_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B664_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B664_b9");
#endif
    func_B418_b9_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B682_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B682_b9");
#endif
    func_B418_b9_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B68E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B68E_b9");
#endif
    func_B418_b9_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6B2_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6B2_b9");
#endif
    func_B418_b9_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6D6_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6D6_b9");
#endif
    func_B418_b9_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6EC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6EC_b9");
#endif
    func_B418_b9_body(19);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B71D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B71D_b9");
#endif
    func_B418_b9_body(20);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6B8_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6B8_b9");
#endif
    func_B418_b9_body(21);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BBB3_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBB3_b9");
#endif
    func_B418_b9_body(22);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B95D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B95D_b9");
#endif
    func_B418_b9_body(23);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BFAC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BFAC_b9");
#endif
    func_B418_b9_body(24);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BFC5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BFC5_b9");
#endif
    func_B418_b9_body(25);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B47E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B47E_b9");
#endif
    func_B418_b9_body(26);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5B4_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5B4_b9");
#endif
    func_B418_b9_body(27);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5E6_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5E6_b9");
#endif
    func_B418_b9_body(28);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B64E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B64E_b9");
#endif
    func_B418_b9_body(29);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B457_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B5FB;
        case 2: goto label_B595;
        case 3: goto label_B5A1;
        case 4: goto label_B6DB;
        case 5: goto label_B46B;
        case 6: goto label_B4D9;
        case 7: goto label_B4E5;
        case 8: goto label_B507;
        case 9: goto label_B56B;
        case 10: goto label_B573;
        case 11: goto label_B58D;
        case 12: goto label_B5A5;
        case 13: goto label_B6C7;
        case 14: goto label_B6E5;
        case 15: goto label_B6E9;
        case 16: goto label_B6ED;
        case 17: goto label_B6F7;
        case 18: goto label_B5AD;
    }
label_B457:;
    /* $B457: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B459:;
    /* $B459: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B45B:;
    /* $B45B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B45D:;
    /* $B45D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B45F:;
    /* $B45F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B461:;
    /* $B461: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B463:;
    /* $B463: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B465:;
    /* $B465: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B467:;
    /* $B467: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B469:;
    /* $B469: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B46B:;
    /* $B46B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B46D:;
    /* $B46D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B46F:;
    /* $B46F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B471:;
    /* $B471: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B473:;
    /* $B473: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B475:;
    /* $B475: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B477:;
    /* $B477: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B479:;
    /* $B479: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B47B:;
    /* $B47B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B47D:;
    /* $B47D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B47F:;
    /* $B47F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B481:;
    /* $B481: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B483:;
    /* $B483: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B485:;
    /* $B485: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B487:;
    /* $B487: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B489:;
    /* $B489: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B48B:;
    /* $B48B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B48D:;
    /* $B48D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B48F:;
    /* $B48F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B491:;
    /* $B491: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B493:;
    /* $B493: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B495:;
    /* $B495: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B497:;
    /* $B497: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B499:;
    /* $B499: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B49B:;
    /* $B49B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B49D:;
    /* $B49D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B49F:;
    /* $B49F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A1:;
    /* $B4A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A3:;
    /* $B4A3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A5:;
    /* $B4A5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A7:;
    /* $B4A7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4A9:;
    /* $B4A9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4AB:;
    /* $B4AB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4AD:;
    /* $B4AD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4AF:;
    /* $B4AF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B1:;
    /* $B4B1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B3:;
    /* $B4B3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B5:;
    /* $B4B5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B7:;
    /* $B4B7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4B9:;
    /* $B4B9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4BB:;
    /* $B4BB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4BD:;
    /* $B4BD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4BF:;
    /* $B4BF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C1:;
    /* $B4C1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C3:;
    /* $B4C3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C5:;
    /* $B4C5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C7:;
    /* $B4C7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4C9:;
    /* $B4C9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4CB:;
    /* $B4CB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4CD:;
    /* $B4CD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4CF:;
    /* $B4CF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D1:;
    /* $B4D1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D3:;
    /* $B4D3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D5:;
    /* $B4D5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D7:;
    /* $B4D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4D9:;
    /* $B4D9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4DB:;
    /* $B4DB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4DD:;
    /* $B4DD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4DF:;
    /* $B4DF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E1:;
    /* $B4E1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E3:;
    /* $B4E3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E5:;
    /* $B4E5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E7:;
    /* $B4E7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4E9:;
    /* $B4E9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4EB:;
    /* $B4EB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4ED:;
    /* $B4ED: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4EF:;
    /* $B4EF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F1:;
    /* $B4F1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F3:;
    /* $B4F3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F5:;
    /* $B4F5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F7:;
    /* $B4F7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4F9:;
    /* $B4F9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4FB:;
    /* $B4FB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4FD:;
    /* $B4FD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B4FF:;
    /* $B4FF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B501:;
    /* $B501: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B503:;
    /* $B503: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B505:;
    /* $B505: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B507:;
    /* $B507: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B509:;
    /* $B509: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B50B:;
    /* $B50B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B50D:;
    /* $B50D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B50F:;
    /* $B50F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B511:;
    /* $B511: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B513:;
    /* $B513: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B515:;
    /* $B515: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B517:;
    /* $B517: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B519:;
    /* $B519: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B51B:;
    /* $B51B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B51D:;
    /* $B51D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B51F:;
    /* $B51F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B521:;
    /* $B521: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B523:;
    /* $B523: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B525:;
    /* $B525: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B527:;
    /* $B527: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B529:;
    /* $B529: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B52B:;
    /* $B52B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B52D:;
    /* $B52D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B52F:;
    /* $B52F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B531:;
    /* $B531: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B533:;
    /* $B533: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B535:;
    /* $B535: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B537:;
    /* $B537: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B539:;
    /* $B539: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B53B:;
    /* $B53B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B53D:;
    /* $B53D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B53F:;
    /* $B53F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B541:;
    /* $B541: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B543:;
    /* $B543: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B545:;
    /* $B545: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B547:;
    /* $B547: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B549:;
    /* $B549: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B54B:;
    /* $B54B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B54D:;
    /* $B54D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B54F:;
    /* $B54F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B551:;
    /* $B551: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B553:;
    /* $B553: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B555:;
    /* $B555: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B557:;
    /* $B557: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B559:;
    /* $B559: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B55B:;
    /* $B55B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B55D:;
    /* $B55D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B55F:;
    /* $B55F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B561:;
    /* $B561: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B563:;
    /* $B563: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B565:;
    /* $B565: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B567:;
    /* $B567: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B569:;
    /* $B569: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B56B:;
    /* $B56B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B56D:;
    /* $B56D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B56F:;
    /* $B56F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B571:;
    /* $B571: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B573:;
    /* $B573: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B575:;
    /* $B575: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B577:;
    /* $B577: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B579:;
    /* $B579: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B57B:;
    /* $B57B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B57D:;
    /* $B57D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B57F:;
    /* $B57F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B581:;
    /* $B581: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B583:;
    /* $B583: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B585:;
    /* $B585: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B587:;
    /* $B587: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B589:;
    /* $B589: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B58B:;
    /* $B58B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B58D:;
    /* $B58D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B58F:;
    /* $B58F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B591:;
    /* $B591: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B593:;
    /* $B593: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B595:;
    /* $B595: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B597:;
    /* $B597: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B599:;
    /* $B599: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B59B:;
    /* $B59B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B59D:;
    /* $B59D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B59F:;
    /* $B59F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A1:;
    /* $B5A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A3:;
    /* $B5A3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A5:;
    /* $B5A5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A7:;
    /* $B5A7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5A9:;
    /* $B5A9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5AB:;
    /* $B5AB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5AD:;
    /* $B5AD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5AF:;
    /* $B5AF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B1:;
    /* $B5B1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B3:;
    /* $B5B3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B5:;
    /* $B5B5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B7:;
    /* $B5B7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5B9:;
    /* $B5B9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5BB:;
    /* $B5BB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5BD:;
    /* $B5BD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5BF:;
    /* $B5BF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C1:;
    /* $B5C1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C3:;
    /* $B5C3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C5:;
    /* $B5C5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C7:;
    /* $B5C7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5C9:;
    /* $B5C9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5CB:;
    /* $B5CB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5CD:;
    /* $B5CD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5CF:;
    /* $B5CF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D1:;
    /* $B5D1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D3:;
    /* $B5D3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D5:;
    /* $B5D5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D7:;
    /* $B5D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5D9:;
    /* $B5D9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5DB:;
    /* $B5DB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5DD:;
    /* $B5DD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5DF:;
    /* $B5DF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E1:;
    /* $B5E1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E3:;
    /* $B5E3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E5:;
    /* $B5E5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E7:;
    /* $B5E7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5E9:;
    /* $B5E9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5EB:;
    /* $B5EB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5ED:;
    /* $B5ED: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5EF:;
    /* $B5EF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F1:;
    /* $B5F1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F3:;
    /* $B5F3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F5:;
    /* $B5F5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F7:;
    /* $B5F7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5F9:;
    /* $B5F9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5FB:;
    /* $B5FB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5FD:;
    /* $B5FD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B5FF:;
    /* $B5FF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B601:;
    /* $B601: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B603:;
    /* $B603: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B605:;
    /* $B605: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B607:;
    /* $B607: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B609:;
    /* $B609: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B60B:;
    /* $B60B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B60D:;
    /* $B60D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B60F:;
    /* $B60F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B611:;
    /* $B611: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B613:;
    /* $B613: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B615:;
    /* $B615: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B617:;
    /* $B617: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B619:;
    /* $B619: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B61B:;
    /* $B61B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B61D:;
    /* $B61D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B61F:;
    /* $B61F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B621:;
    /* $B621: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B623:;
    /* $B623: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B625:;
    /* $B625: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B627:;
    /* $B627: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B629:;
    /* $B629: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B62B:;
    /* $B62B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B62D:;
    /* $B62D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B62F:;
    /* $B62F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B631:;
    /* $B631: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B633:;
    /* $B633: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B635:;
    /* $B635: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B637:;
    /* $B637: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B639:;
    /* $B639: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B63B:;
    /* $B63B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B63D:;
    /* $B63D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B63F:;
    /* $B63F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B641:;
    /* $B641: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B643:;
    /* $B643: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B645:;
    /* $B645: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B647:;
    /* $B647: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B649:;
    /* $B649: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B64B:;
    /* $B64B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B64D:;
    /* $B64D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B64F:;
    /* $B64F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B651:;
    /* $B651: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B653:;
    /* $B653: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B655:;
    /* $B655: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B657:;
    /* $B657: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B659:;
    /* $B659: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B65B:;
    /* $B65B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B65D:;
    /* $B65D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B65F:;
    /* $B65F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B661:;
    /* $B661: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B663:;
    /* $B663: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B665:;
    /* $B665: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B667:;
    /* $B667: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B669:;
    /* $B669: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B66B:;
    /* $B66B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B66D:;
    /* $B66D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B66F:;
    /* $B66F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B671:;
    /* $B671: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B673:;
    /* $B673: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B675:;
    /* $B675: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B677:;
    /* $B677: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B679:;
    /* $B679: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B67B:;
    /* $B67B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B67D:;
    /* $B67D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B67F:;
    /* $B67F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B681:;
    /* $B681: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B683:;
    /* $B683: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B685:;
    /* $B685: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B687:;
    /* $B687: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B689:;
    /* $B689: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B68B:;
    /* $B68B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B68D:;
    /* $B68D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B68F:;
    /* $B68F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B691:;
    /* $B691: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B693:;
    /* $B693: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B695:;
    /* $B695: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B697:;
    /* $B697: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B699:;
    /* $B699: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B69B:;
    /* $B69B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B69D:;
    /* $B69D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B69F:;
    /* $B69F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A1:;
    /* $B6A1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A3:;
    /* $B6A3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A5:;
    /* $B6A5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A7:;
    /* $B6A7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6A9:;
    /* $B6A9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6AB:;
    /* $B6AB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6AD:;
    /* $B6AD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6AF:;
    /* $B6AF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B1:;
    /* $B6B1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B3:;
    /* $B6B3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B5:;
    /* $B6B5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B7:;
    /* $B6B7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6B9:;
    /* $B6B9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6BB:;
    /* $B6BB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6BD:;
    /* $B6BD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6BF:;
    /* $B6BF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C1:;
    /* $B6C1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C3:;
    /* $B6C3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C5:;
    /* $B6C5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C7:;
    /* $B6C7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6C9:;
    /* $B6C9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6CB:;
    /* $B6CB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6CD:;
    /* $B6CD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6CF:;
    /* $B6CF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D1:;
    /* $B6D1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D3:;
    /* $B6D3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D5:;
    /* $B6D5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D7:;
    /* $B6D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6D9:;
    /* $B6D9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6DB:;
    /* $B6DB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6DD:;
    /* $B6DD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6DF:;
    /* $B6DF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E1:;
    /* $B6E1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E3:;
    /* $B6E3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E5:;
    /* $B6E5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E7:;
    /* $B6E7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6E9:;
    /* $B6E9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6EB:;
    /* $B6EB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6ED:;
    /* $B6ED: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6EF:;
    /* $B6EF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F1:;
    /* $B6F1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F3:;
    /* $B6F3: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F5:;
    /* $B6F5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F7:;
    /* $B6F7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6F9:;
    /* $B6F9: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6FB:;
    /* $B6FB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6FD:;
    /* $B6FD: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x69 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x69); g_cpu.A=r&0xFF; }
label_B6FF:;
    /* $B6FF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_B701:;
    /* $B701: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B702:;
    /* $B702: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B703:;
    /* $B703: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B704:;
    /* $B704: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B705:;
    /* $B705: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B706:;
    /* $B706: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B707:;
    /* $B707: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x02 + g_cpu.X) & 0xFF), g_cpu.A);
label_B709:;
    /* $B709: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B70A:;
    /* $B70A: 82 */ maybe_trigger_vblank(2); /* NOP */
label_B70C:;
    /* $B70C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B70D:;
    /* $B70D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B70E:;
    /* $B70E: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_B710:;
    /* $B710: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B711:;
    /* $B711: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B712:;
    /* $B712: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_B714:;
    /* $B714: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B715:;
    /* $B715: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B716:;
    /* $B716: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B717:;
    /* $B717: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x88 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B719:;
    /* $B719: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B71B:;
    /* $B71B: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8A) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B71D:;
    /* $B71D: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B71F:;
    /* $B71F: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B721:;
    /* $B721: 8D */ maybe_trigger_vblank(4); nes_write(0x9594, g_cpu.A);
label_B724:;
    /* $B724: 8E */ maybe_trigger_vblank(4); nes_write(0x968F, g_cpu.X);
label_B727:;
    /* $B727: 97 */ maybe_trigger_vblank(4); nes_write((0x02 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_B729:;
    /* $B729: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B72A:;
    /* $B72A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_B72C:;
    /* $B72C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B72D:;
    /* $B72D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B72F:;
    /* $B72F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B730:;
    /* $B730: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B731:;
    /* $B731: 99 */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B734:;
    /* $B734: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_B735:;
    /* $B735: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_B738:;
    /* $B738: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B73B:;
    /* $B73B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B73C:;
    /* $B73C: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_B73F:;
    /* $B73F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B740:;
    /* $B740: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B741:;
    /* $B741: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x02; FLAG_NZ(g_cpu.A);
label_B743:;
    /* $B743: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B744:;
    /* $B744: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xB4AD); FLAG_NZ(g_cpu.Y);
label_B747:;
    /* $B747: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B749:;
    /* $B749: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB7B6); FLAG_NZ(g_cpu.A);
label_B74C:;
    /* $B74C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74D:;
    /* $B74D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74E:;
    /* $B74E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74F:;
    /* $B74F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B752:;
    /* $B752: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B754:;
    /* $B754: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B755:;
    /* $B755: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B756:;
    /* $B756: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB8) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B758:;
    /* $B758: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B759:;
    /* $B759: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B75A:;
    /* $B75A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B75D:;
    /* $B75D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B75E:;
    /* $B75E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B75F:;
    /* $B75F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B760:;
    /* $B760: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02D5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B763:;
    /* $B763: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B764:;
    /* $B764: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xCF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B766:;
    /* $B766: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B767:;
    /* $B767: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B768:;
    /* $B768: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B76A:;
    /* $B76A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7340 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B76D:;
    /* $B76D: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x41 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B76F:;
    /* $B76F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B770:;
    /* $B770: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x17E3), 9); return; }
label_B772:;
    /* $B772: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x79 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B774:;
    /* $B774: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B775:;
    /* $B775: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B777:;
    /* $B777: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x74 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B779:;
    /* $B779: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x17BD), 9); return; }
label_B77B:;
    /* $B77B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B77D:;
    /* $B77D: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B77F:;
    /* $B77F: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4871 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B782:;
    /* $B782: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3649 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B785:;
    /* $B785: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B787:;
    /* $B787: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x714B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B78A:;
    /* $B78A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B78B:;
    /* $B78B: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3048 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B78E:;
    /* $B78E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x38; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x4B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B792:;
    /* $B792: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x244A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B795:;
    /* $B795: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B797:;
    /* $B797: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x4471); FLAG_NZ(g_cpu.A);
label_B79A:;
    /* $B79A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4540 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B79D:;
    /* $B79D: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x41; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B79F:;
    /* $B79F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B7A0:;
    /* $B7A0: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x71; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7A2:;
    /* $B7A2: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x79 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7A4:;
    /* $B7A4: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7A6:;
    /* $B7A6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB7A6; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7A7:; return;
label_B7A9:; return;
label_B7AB:; return;
label_B7AD:; return;
label_B7AF:; return;
label_B7B2:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BB:; return;
label_B7BE:; return;
label_B7BF:; return;
label_B7C1:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C9:; return;
label_B7CB:; return;
label_B7CD:; return;
label_B7CF:; return;
label_B7D0:; return;
label_B7D2:; return;
label_B7D5:; return;
label_B7D7:; return;
label_B7DA:; return;
label_B7DB:; return;
label_B7DE:; return;
label_B7E1:; return;
label_B7E2:; return;
label_B7E5:; return;
label_B7E7:; return;
label_B7EA:; return;
label_B7EB:; return;
label_B7EE:; return;
label_B7EF:; return;
label_B7F2:; return;
label_B7F5:; return;
label_B7F7:; return;
label_B7F9:; return;
label_B7FB:; return;
label_B7FD:; return;
label_B7FF:; return;
label_B801:; return;
label_B803:; return;
label_B804:; return;
label_B805:; return;
label_B807:; return;
label_B808:; return;
label_B80A:; return;
label_B80D:; return;
label_B80E:; return;
label_B811:; return;
label_B812:; return;
label_B815:; return;
label_B817:; return;
label_B819:; return;
label_B81A:; return;
label_B81C:; return;
label_B81F:; return;
label_B821:; return;
label_B822:; return;
label_B824:; return;
label_B826:; return;
label_B829:; return;
label_B82A:; return;
label_B82C:; return;
label_B82E:; return;
label_B831:; return;
label_B833:; return;
label_B835:; return;
label_B837:; return;
label_B839:; return;
label_B83C:; return;
label_B83E:; return;
label_B840:; return;
label_B843:; return;
label_B846:; return;
label_B847:; return;
label_B84A:; return;
label_B84B:; return;
label_B84E:; return;
label_B851:; return;
label_B854:; return;
label_B856:; return;
label_B859:; return;
label_B85B:; return;
label_B85D:; return;
label_B85F:; return;
label_B861:; return;
label_B862:; return;
label_B864:; return;
label_B867:; return;
label_B869:; return;
label_B86B:; return;
label_B86D:; return;
label_B86E:; return;
label_B870:; return;
label_B872:; return;
label_B875:; return;
label_B877:; return;
label_B87A:; return;
label_B87B:; return;
label_B87E:; return;
label_B87F:; return;
label_B882:; return;
label_B885:; return;
label_B888:; return;
label_B88B:; return;
label_B88C:; return;
label_B88F:; return;
label_B891:; return;
label_B894:; return;
label_B897:; return;
label_B899:; return;
label_B89C:; return;
label_B89D:; return;
label_B89E:; return;
label_B8A0:; return;
label_B8A1:; return;
label_B8A3:; return;
label_B8A4:; return;
label_B8A5:; return;
label_B8A6:; return;
label_B8A7:; return;
label_B8A8:; return;
label_B8A9:; return;
label_B8AA:; return;
label_B8AB:; return;
label_B8AD:; return;
label_B8AF:; return;
label_B8B2:; return;
label_B8B3:; return;
label_B8B4:; return;
label_B8B7:; return;
label_B8B8:; return;
label_B8B9:; return;
label_B8BA:; return;
label_B8BB:; return;
label_B8BE:; return;
label_B8BF:; return;
label_B8C0:; return;
label_B8C1:; return;
label_B8C2:; return;
label_B8C5:; return;
label_B8C8:; return;
label_B8C9:; return;
label_B8CA:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D1:; return;
label_B8D4:; return;
label_B8D5:; return;
label_B8D8:; return;
label_B8D9:; return;
label_B8DA:; return;
label_B8DC:; return;
label_B8DD:; return;
label_B8DF:; return;
label_B8E1:; return;
label_B8E2:; return;
label_B8E5:; return;
label_B8E6:; return;
label_B8E8:; return;
label_B8E9:; return;
label_B8EB:; return;
label_B8EE:; return;
label_B8EF:; return;
label_B8F1:; return;
label_B8F2:; return;
label_B8F3:; return;
label_B8F4:; return;
label_B8F6:; return;
label_B8F8:; return;
label_B8F9:; return;
label_B8FB:; return;
label_B8FE:; return;
label_B900:; return;
label_B902:; return;
label_B905:; return;
label_B907:; return;
label_B90A:; return;
label_B90B:; return;
label_B90D:; return;
label_B90F:; return;
label_B911:; return;
label_B912:; return;
label_B914:; return;
label_B917:; return;
label_B919:; return;
label_B91A:; return;
label_B91D:; return;
label_B920:; return;
label_B923:; return;
label_B925:; return;
label_B928:; return;
label_B929:; return;
label_B92C:; return;
label_B92F:; return;
label_B930:; return;
label_B933:; return;
label_B934:; return;
label_B937:; return;
label_B93A:; return;
label_B93D:; return;
label_B93F:; return;
label_B941:; return;
label_B942:; return;
label_B943:; return;
label_B944:; return;
label_B945:; return;
label_B946:; return;
label_B947:; return;
label_B948:; return;
label_B949:; return;
label_B94A:; return;
label_B94B:; return;
label_B94D:; return;
label_B94F:; return;
label_B950:; return;
label_B951:; return;
label_B954:; return;
label_B955:; return;
label_B956:; return;
label_B957:; return;
label_B959:; return;
label_B95A:; return;
label_B95B:; return;
label_B95D:; return;
label_B95E:; return;
label_B960:; return;
label_B961:; return;
label_B962:; return;
label_B964:; return;
label_B965:; return;
label_B966:; return;
label_B968:; return;
label_B969:; return;
label_B96A:; return;
label_B96C:; return;
label_B96D:; return;
label_B96E:; return;
label_B970:; return;
label_B973:; return;
label_B975:; return;
label_B976:; return;
label_B978:; return;
label_B97A:; return;
label_B97B:; return;
label_B97C:; return;
label_B97E:; return;
label_B981:; return;
label_B984:; return;
label_B987:; return;
label_B98A:; return;
label_B98D:; return;
label_B990:; return;
label_B993:; return;
label_B994:; return;
label_B995:; return;
label_B996:; return;
label_B997:; return;
label_B998:; return;
label_B999:; return;
label_B99A:; return;
label_B99B:; return;
label_B99E:; return;
label_B9A1:; return;
label_B9A2:; return;
label_B9A4:; return;
label_B9A5:; return;
label_B9A6:; return;
label_B9A7:; return;
label_B9A8:; return;
label_B9A9:; return;
label_B9AC:; return;
label_B9AF:; return;
label_B9B1:; return;
label_B9B4:; return;
label_B9B5:; return;
label_B9B6:; return;
label_B9B8:; return;
label_B9BA:; return;
label_B9BC:; return;
label_B9BE:; return;
label_B9C1:; return;
label_B9C3:; return;
label_B9C4:; return;
label_B9C6:; return;
label_B9C9:; return;
label_B9CA:; return;
label_B9CD:; return;
label_B9CF:; return;
label_B9D0:; return;
label_B9D2:; return;
label_B9D4:; return;
label_B9D6:; return;
label_B9D9:; return;
label_B9DB:; return;
label_B9DE:; return;
label_B9E1:; return;
label_B9E4:; return;
label_B9E7:; return;
label_B9EA:; return;
label_B9ED:; return;
label_B9EF:; return;
label_B9F0:; return;
label_B9F2:; return;
label_B9F5:; return;
label_B9F8:; return;
label_B9FB:; return;
label_B9FD:; return;
label_BA00:; return;
label_BA03:; return;
label_BA04:; return;
label_BA06:; return;
label_BA09:; return;
label_BA0A:; return;
label_BA2F:; return;
label_BA30:; return;
label_BA31:; return;
label_BA32:; return;
label_BA33:; return;
label_BA34:; return;
label_BA35:; return;
label_BA36:; return;
label_BA37:; return;
label_BA38:; return;
label_BA39:; return;
label_BA3A:; return;
label_BA3B:; return;
label_BA3C:; return;
label_BA3D:; return;
label_BA3E:; return;
label_BA3F:; return;
label_BA40:; return;
label_BA41:; return;
label_BA42:; return;
label_BA43:; return;
label_BA44:; return;
label_BA45:; return;
label_BA46:; return;
label_BA47:; return;
label_BA48:; return;
label_BA49:; return;
label_BA4A:; return;
label_BA4B:; return;
label_BA4C:; return;
label_BA4D:; return;
label_BA4E:; return;
label_BA4F:; return;
label_BA50:; return;
label_BA51:; return;
label_BA52:; return;
label_BA53:; return;
label_BA54:; return;
label_BA55:; return;
label_BA56:; return;
label_BA57:; return;
label_BA58:; return;
label_BA59:; return;
label_BA5A:; return;
label_BA5B:; return;
label_BA5C:; return;
label_BA5D:; return;
label_BA5E:; return;
label_BA5F:; return;
label_BA60:; return;
label_BA61:; return;
label_BA62:; return;
label_BA63:; return;
label_BA64:; return;
label_BA65:; return;
label_BA66:; return;
label_BA67:; return;
label_BA68:; return;
label_BA69:; return;
label_BA6A:; return;
label_BA6B:; return;
label_BA6C:; return;
label_BA6D:; return;
label_BA6E:; return;
label_BA6F:; return;
label_BA70:; return;
label_BA71:; return;
label_BA72:; return;
label_BA73:; return;
label_BA74:; return;
label_BA75:; return;
label_BA76:; return;
label_BA77:; return;
label_BA78:; return;
label_BA79:; return;
label_BA7A:; return;
label_BA7B:; return;
label_BA7C:; return;
label_BA7D:; return;
label_BA7E:; return;
label_BA7F:; return;
label_BA80:; return;
label_BA81:; return;
label_BA82:; return;
label_BA83:; return;
label_BA84:; return;
label_BA85:; return;
label_BA86:; return;
label_BA87:; return;
label_BA88:; return;
label_BA89:; return;
label_BA8A:; return;
label_BA8B:; return;
label_BA8C:; return;
label_BA8D:; return;
label_BA8E:; return;
label_BA8F:; return;
label_BA90:; return;
label_BA91:; return;
label_BA92:; return;
label_BA93:; return;
label_BA94:; return;
label_BA95:; return;
label_BA96:; return;
label_BA97:; return;
label_BA98:; return;
label_BA99:; return;
label_BA9A:; return;
label_BA9B:; return;
label_BA9C:; return;
label_BA9D:; return;
label_BA9E:; return;
label_BA9F:; return;
label_BAA0:; return;
label_BAA1:; return;
label_BAA2:; return;
label_BAA3:; return;
label_BAA4:; return;
label_BAA5:; return;
label_BAA6:; return;
label_BAA7:; return;
label_BAA8:; return;
label_BAA9:; return;
label_BAAA:; return;
label_BAAB:; return;
label_BAAC:; return;
label_BAAD:; return;
label_BAAE:; return;
label_BAAF:; return;
label_BAB0:; return;
label_BAB1:; return;
label_BAB2:; return;
label_BAB3:; return;
label_BAB4:; return;
label_BAB5:; return;
label_BAB6:; return;
label_BAB7:; return;
label_BAB8:; return;
label_BAB9:; return;
label_BABA:; return;
label_BABB:; return;
label_BABC:; return;
label_BABD:; return;
label_BABE:; return;
label_BABF:; return;
label_BAC0:; return;
label_BAC1:; return;
label_BAC2:; return;
label_BAC3:; return;
label_BAC4:; return;
label_BAC5:; return;
label_BAC6:; return;
label_BAC7:; return;
label_BAC8:; return;
label_BAC9:; return;
label_BACA:; return;
label_BACB:; return;
label_BACC:; return;
label_BACD:; return;
label_BACE:; return;
label_BACF:; return;
label_BAD0:; return;
label_BAD1:; return;
label_BAD2:; return;
label_BAD3:; return;
label_BAD4:; return;
label_BAD5:; return;
label_BAD6:; return;
label_BAD7:; return;
label_BAD8:; return;
label_BAD9:; return;
label_BADA:; return;
label_BADB:; return;
label_BADC:; return;
label_BADD:; return;
label_BADE:; return;
label_BADF:; return;
label_BAE0:; return;
label_BAE1:; return;
label_BAE2:; return;
label_BAE3:; return;
label_BAE4:; return;
label_BAE5:; return;
label_BAE6:; return;
label_BAE7:; return;
label_BAE8:; return;
label_BAE9:; return;
label_BAEA:; return;
label_BAEB:; return;
label_BAEC:; return;
label_BAED:; return;
label_BAEE:; return;
label_BAEF:; return;
label_BAF0:; return;
label_BAF1:; return;
label_BAF2:; return;
label_BAF3:; return;
label_BAF4:; return;
label_BAF5:; return;
label_BAF6:; return;
label_BAF7:; return;
label_BAF8:; return;
label_BAF9:; return;
label_BAFA:; return;
label_BAFB:; return;
label_BAFC:; return;
label_BAFD:; return;
label_BAFE:; return;
label_BAFF:; return;
label_BB00:; return;
label_BB01:; return;
label_BB03:; return;
label_BB05:; return;
label_BB06:; return;
label_BB09:; return;
label_BB0B:; return;
label_BB0D:; return;
label_BB0E:; return;
label_BB11:; return;
label_BB13:; return;
label_BB15:; return;
label_BB17:; return;
label_BB18:; return;
label_BB1B:; return;
label_BB1E:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB23:; return;
label_BB25:; return;
label_BB26:; return;
label_BB29:; return;
label_BB2B:; return;
label_BB2D:; return;
label_BB2E:; return;
label_BB31:; return;
label_BB33:; return;
label_BB35:; return;
label_BB36:; return;
label_BB39:; return;
label_BB3B:; return;
label_BB3D:; return;
label_BB3E:; return;
label_BB41:; return;
label_BB42:; return;
label_BB44:; return;
label_BB46:; return;
label_BB47:; return;
label_BB48:; return;
label_BB4A:; return;
label_BB4C:; return;
label_BB4D:; return;
label_BB4E:; return;
label_BB4F:; return;
label_BB50:; return;
label_BB52:; return;
label_BB54:; return;
label_BB56:; return;
label_BB58:; return;
label_BB59:; return;
label_BB5C:; return;
label_BB5E:; return;
label_BB60:; return;
label_BB62:; return;
label_BB63:; return;
label_BB64:; return;
label_BB67:; return;
label_BB68:; return;
label_BB6B:; return;
label_BB6E:; return;
label_BB70:; return;
label_BB72:; return;
label_BB74:; return;
label_BB76:; return;
label_BB79:; return;
label_BB7B:; return;
label_BB7C:; return;
label_BB7E:; return;
label_BB81:; return;
label_BB83:; return;
label_BB85:; return;
label_BB87:; return;
label_BB88:; return;
label_BB8A:; return;
label_BB8C:; return;
label_BB8D:; return;
label_BB8E:; return;
label_BB91:; return;
label_BB93:; return;
label_BB95:; return;
label_BB96:; return;
label_BB99:; return;
label_BB9B:; return;
label_BB9D:; return;
label_BB9E:; return;
label_BBA1:; return;
label_BBA3:; return;
label_BBA4:; return;
label_BBA5:; return;
label_BBA7:; return;
label_BBA8:; return;
label_BBAA:; return;
label_BBAD:; return;
label_BBAF:; return;
label_BBB1:; return;
label_BBB3:; return;
label_BBB5:; return;
label_BBB8:; return;
label_BBBA:; return;
label_BBBC:; return;
label_BBBD:; return;
label_BBBE:; return;
label_BBBF:; return;
label_BBC0:; return;
label_BBC2:; return;
label_BBC4:; return;
label_BBC6:; return;
label_BBC7:; return;
label_BBC9:; return;
label_BBCB:; return;
label_BBCD:; return;
label_BBCF:; return;
label_BBD1:; return;
label_BBD2:; return;
label_BBD4:; return;
label_BBD7:; return;
label_BBD9:; return;
label_BBDA:; return;
label_BBDC:; return;
label_BBDF:; return;
label_BBE1:; return;
label_BBE4:; return;
label_BBE6:; return;
label_BBE9:; return;
label_BBEB:; return;
label_BBED:; return;
label_BBF0:; return;
label_BBF1:; return;
label_BBF2:; return;
label_BBF3:; return;
label_BBF4:; return;
label_BBF5:; return;
label_BBF7:; return;
label_BBFA:; return;
label_BBFC:; return;
label_BBFE:; return;
label_BBFF:; return;
label_BC02:; return;
label_BC04:; return;
label_BC06:; return;
label_BC09:; return;
label_BC0B:; return;
label_BC0E:; return;
label_BC11:; return;
label_BC14:; return;
label_BC16:; return;
label_BC19:; return;
label_BC1A:; return;
label_BC1B:; return;
label_BC1C:; return;
label_BC1E:; return;
label_BC20:; return;
label_BC22:; return;
label_BC24:; return;
label_BC26:; return;
label_BC29:; return;
label_BC2B:; return;
label_BC2D:; return;
label_BC2F:; return;
label_BC32:; return;
label_BC34:; return;
label_BC36:; return;
label_BC39:; return;
label_BC3B:; return;
label_BC3D:; return;
label_BC3F:; return;
label_BC42:; return;
label_BC44:; return;
label_BC46:; return;
label_BC49:; return;
label_BC4A:; return;
label_BC4B:; return;
label_BC4D:; return;
label_BC4E:; return;
label_BC4F:; return;
label_BC50:; return;
label_BC52:; return;
label_BC54:; return;
label_BC56:; return;
label_BC58:; return;
label_BC5B:; return;
label_BC5C:; return;
label_BC5E:; return;
label_BC5F:; return;
label_BC60:; return;
label_BC61:; return;
label_BC64:; return;
label_BC67:; return;
label_BC68:; return;
label_BC69:; return;
label_BC6C:; return;
label_BC6F:; return;
label_BC70:; return;
label_BC72:; return;
label_BC74:; return;
label_BC76:; return;
label_BC79:; return;
label_BC7B:; return;
label_BC7D:; return;
label_BC7F:; return;
label_BC82:; return;
label_BC84:; return;
label_BC86:; return;
label_BC88:; return;
label_BC8A:; return;
label_BC8C:; return;
label_BC8E:; return;
label_BC91:; return;
label_BC93:; return;
label_BC95:; return;
label_BC97:; return;
label_BC9A:; return;
label_BC9C:; return;
label_BC9E:; return;
label_BCA1:; return;
label_BCA3:; return;
label_BCA4:; return;
label_BCA5:; return;
label_BCA7:; return;
label_BCA8:; return;
label_BCAA:; return;
label_BCAD:; return;
label_BCAE:; return;
label_BCAF:; return;
label_BCB1:; return;
label_BCB3:; return;
label_BCB5:; return;
label_BCB8:; return;
label_BCBA:; return;
label_BCBC:; return;
label_BCBD:; return;
label_BCBE:; return;
label_BCBF:; return;
label_BCC0:; return;
label_BCC2:; return;
label_BCC4:; return;
label_BCC6:; return;
label_BCC7:; return;
label_BCC9:; return;
label_BCCB:; return;
label_BCCE:; return;
label_BCD0:; return;
label_BCD2:; return;
label_BCD4:; return;
label_BCD7:; return;
label_BCD9:; return;
label_BCDB:; return;
label_BCDD:; return;
label_BCDE:; return;
label_BCE0:; return;
label_BCE3:; return;
label_BCE5:; return;
label_BCE6:; return;
label_BCE8:; return;
label_BCEA:; return;
label_BCED:; return;
label_BCEF:; return;
label_BCF2:; return;
label_BCF3:; return;
label_BCF4:; return;
label_BCF5:; return;
label_BCF7:; return;
label_BCF9:; return;
label_BCFB:; return;
label_BCFD:; return;
label_BCFF:; return;
label_BD01:; return;
label_BD03:; return;
label_BD05:; return;
label_BD06:; return;
label_BD09:; return;
label_BD0B:; return;
label_BD0E:; return;
label_BD11:; return;
label_BD14:; return;
label_BD16:; return;
label_BD19:; return;
label_BD1C:; return;
label_BD1E:; return;
label_BD20:; return;
label_BD22:; return;
label_BD24:; return;
label_BD25:; return;
label_BD26:; return;
label_BD29:; return;
label_BD2A:; return;
label_BD2C:; return;
label_BD2D:; return;
label_BD2E:; return;
label_BD31:; return;
label_BD32:; return;
label_BD34:; return;
label_BD35:; return;
label_BD36:; return;
label_BD39:; return;
label_BD3A:; return;
label_BD3C:; return;
label_BD3D:; return;
label_BD3E:; return;
label_BD41:; return;
label_BD43:; return;
label_BD44:; return;
label_BD46:; return;
label_BD48:; return;
label_BD4A:; return;
label_BD4C:; return;
label_BD4D:; return;
label_BD4E:; return;
label_BD4F:; return;
label_BD50:; return;
label_BD53:; return;
label_BD55:; return;
label_BD58:; return;
label_BD59:; return;
label_BD5A:; return;
label_BD5D:; return;
label_BD5F:; return;
label_BD61:; return;
label_BD62:; return;
label_BD63:; return;
label_BD64:; return;
label_BD67:; return;
label_BD68:; return;
label_BD6B:; return;
label_BD6E:; return;
label_BD71:; return;
label_BD73:; return;
label_BD74:; return;
label_BD76:; return;
label_BD79:; return;
label_BD7A:; return;
label_BD7C:; return;
label_BD7E:; return;
label_BD81:; return;
label_BD82:; return;
label_BD84:; return;
label_BD85:; return;
label_BD86:; return;
label_BD89:; return;
label_BD8A:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD91:; return;
label_BD92:; return;
label_BD94:; return;
label_BD95:; return;
label_BD96:; return;
label_BD99:; return;
label_BD9A:; return;
label_BD9C:; return;
label_BD9D:; return;
label_BD9E:; return;
label_BDA1:; return;
label_BDA3:; return;
label_BDA4:; return;
label_BDA5:; return;
label_BDA7:; return;
label_BDA8:; return;
label_BDAA:; return;
label_BDAD:; return;
label_BDAF:; return;
label_BDB1:; return;
label_BDB2:; return;
label_BDB5:; return;
label_BDB7:; return;
label_BDB9:; return;
label_BDBC:; return;
label_BDBD:; return;
label_BDBE:; return;
label_BDBF:; return;
label_BDC0:; return;
label_BDC2:; return;
label_BDC4:; return;
label_BDC6:; return;
label_BDC9:; return;
label_BDCB:; return;
label_BDCD:; return;
label_BDCF:; return;
label_BDD2:; return;
label_BDD5:; return;
label_BDD8:; return;
label_BDDA:; return;
label_BDDD:; return;
label_BDE0:; return;
label_BDE2:; return;
label_BDE4:; return;
label_BDE6:; return;
label_BDE9:; return;
label_BDEC:; return;
label_BDEE:; return;
label_BDEF:; return;
label_BDF1:; return;
label_BDF2:; return;
label_BDF4:; return;
label_BDF6:; return;
label_BDF7:; return;
label_BDF9:; return;
label_BDFC:; return;
label_BDFF:; return;
label_BE02:; return;
label_BE04:; return;
label_BE07:; return;
label_BE0A:; return;
label_BE0D:; return;
label_BE10:; return;
label_BE13:; return;
label_BE14:; return;
label_BE16:; return;
label_BE17:; return;
label_BE18:; return;
label_BE19:; return;
label_BE1A:; return;
label_BE1B:; return;
label_BE1C:; return;
label_BE1E:; return;
label_BE1F:; return;
label_BE21:; return;
label_BE23:; return;
label_BE25:; return;
label_BE28:; return;
label_BE2A:; return;
label_BE2C:; return;
label_BE2F:; return;
label_BE32:; return;
label_BE34:; return;
label_BE37:; return;
label_BE3A:; return;
label_BE3C:; return;
label_BE3F:; return;
label_BE42:; return;
label_BE44:; return;
label_BE46:; return;
label_BE48:; return;
label_BE49:; return;
label_BE4B:; return;
label_BE4C:; return;
label_BE4D:; return;
label_BE4E:; return;
label_BE4F:; return;
label_BE50:; return;
label_BE53:; return;
label_BE54:; return;
label_BE57:; return;
label_BE59:; return;
label_BE5A:; return;
label_BE5D:; return;
label_BE5F:; return;
label_BE60:; return;
label_BE61:; return;
label_BE64:; return;
label_BE67:; return;
label_BE68:; return;
label_BE69:; return;
label_BE6C:; return;
label_BE6F:; return;
label_BE70:; return;
label_BE71:; return;
label_BE73:; return;
label_BE75:; return;
label_BE76:; return;
label_BE79:; return;
label_BE7B:; return;
label_BE7C:; return;
label_BE7E:; return;
label_BE80:; return;
label_BE81:; return;
label_BE83:; return;
label_BE85:; return;
label_BE88:; return;
label_BE8A:; return;
label_BE8C:; return;
label_BE8F:; return;
label_BE92:; return;
label_BE94:; return;
label_BE97:; return;
label_BE9A:; return;
label_BE9C:; return;
label_BE9F:; return;
label_BEA2:; return;
label_BEA5:; return;
label_BEA6:; return;
label_BEA7:; return;
label_BEA8:; return;
label_BEAA:; return;
label_BEAD:; return;
label_BEB0:; return;
label_BEB2:; return;
label_BEB4:; return;
label_BEB6:; return;
label_BEB8:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBE:; return;
label_BEBF:; return;
label_BEC0:; return;
label_BEC2:; return;
label_BEC4:; return;
label_BEC6:; return;
label_BEC9:; return;
label_BECB:; return;
label_BECD:; return;
label_BECF:; return;
label_BED2:; return;
label_BED3:; return;
label_BED5:; return;
label_BED7:; return;
label_BED9:; return;
label_BEDB:; return;
label_BEDD:; return;
label_BEDF:; return;
label_BEE1:; return;
label_BEE3:; return;
label_BEE6:; return;
label_BEE8:; return;
label_BEEA:; return;
label_BEED:; return;
label_BEEF:; return;
label_BEF1:; return;
label_BEF3:; return;
label_BEF4:; return;
label_BEF6:; return;
label_BEF8:; return;
label_BEFB:; return;
label_BEFE:; return;
label_BF01:; return;
label_BF02:; return;
label_BF03:; return;
label_BF04:; return;
label_BF06:; return;
label_BF07:; return;
label_BF08:; return;
label_BF09:; return;
label_BF0A:; return;
label_BF0B:; return;
label_BF0C:; return;
label_BF0E:; return;
label_BF0F:; return;
label_BF10:; return;
label_BF11:; return;
label_BF13:; return;
label_BF14:; return;
label_BF15:; return;
label_BF16:; return;
label_BF18:; return;
label_BF1A:; return;
label_BF1B:; return;
label_BF1C:; return;
label_BF1D:; return;
label_BF1E:; return;
label_BF20:; return;
label_BF22:; return;
label_BF23:; return;
label_BF24:; return;
label_BF25:; return;
label_BF26:; return;
label_BF27:; return;
label_BF28:; return;
label_BF2A:; return;
label_BF2B:; return;
label_BF2C:; return;
label_BF2D:; return;
label_BF2E:; return;
label_BF2F:; return;
label_BF30:; return;
label_BF32:; return;
label_BF33:; return;
label_BF34:; return;
label_BF35:; return;
label_BF36:; return;
label_BF37:; return;
label_BF38:; return;
label_BF3A:; return;
label_BF3B:; return;
label_BF3C:; return;
label_BF3D:; return;
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
label_BF4B:; return;
label_BF4C:; return;
label_BF4D:; return;
label_BF4E:; return;
label_BF4F:; return;
label_BF50:; return;
label_BF51:; return;
label_BF52:; return;
label_BF53:; return;
label_BF55:; return;
label_BF57:; return;
label_BF59:; return;
label_BF5B:; return;
label_BF5D:; return;
label_BF5F:; return;
label_BF61:; return;
label_BF62:; return;
label_BF63:; return;
label_BF64:; return;
label_BF65:; return;
label_BF66:; return;
label_BF67:; return;
label_BF68:; return;
label_BF69:; return;
label_BF6A:; return;
label_BF6B:; return;
label_BF6D:; return;
label_BF6E:; return;
label_BF6F:; return;
label_BF70:; return;
label_BF71:; return;
label_BF72:; return;
label_BF73:; return;
label_BF74:; return;
label_BF75:; return;
label_BF76:; return;
label_BF77:; return;
label_BF78:; return;
label_BF79:; return;
label_BF7A:; return;
label_BF7B:; return;
label_BF7C:; return;
label_BF7D:; return;
label_BF7E:; return;
label_BF7F:; return;
label_BF80:; return;
label_BF81:; return;
label_BF82:; return;
label_BF83:; return;
label_BF84:; return;
label_BF85:; return;
label_BF86:; return;
label_BF87:; return;
label_BF88:; return;
label_BF8A:; return;
label_BF8C:; return;
label_BF8E:; return;
label_BF90:; return;
label_BF92:; return;
label_BF94:; return;
label_BF96:; return;
label_BF98:; return;
label_BF9A:; return;
label_BF9C:; return;
label_BF9E:; return;
label_BFA0:; return;
label_BFA1:; return;
label_BFA3:; return;
label_BFA4:; return;
label_BFA5:; return;
label_BFA6:; return;
label_BFA7:; return;
label_BFA8:; return;
label_BFAA:; return;
label_BFAC:; return;
label_BFAD:; return;
label_BFAE:; return;
label_BFAF:; return;
label_BFB0:; return;
label_BFB2:; return;
label_BFB3:; return;
label_BFB4:; return;
label_BFB5:; return;
label_BFB6:; return;
label_BFB7:; return;
label_BFB8:; return;
label_BFB9:; return;
label_BFBA:; return;
label_BFBB:; return;
label_BFBC:; return;
label_BFBD:; return;
label_BFBE:; return;
label_BFBF:; return;
label_BFC0:; return;
label_BFC1:; return;
label_BFC2:; return;
label_BFC3:; return;
label_BFC4:; return;
label_BFC5:; return;
label_BFC6:; return;
label_BFC7:; return;
label_BFC8:; return;
label_BFC9:; return;
label_BFCA:; return;
label_BFCB:; return;
label_BFCC:; return;
label_BFCD:; return;
label_BFCE:; return;
label_BFD0:; return;
label_BFD1:; return;
label_BFD2:; return;
label_BFD3:; return;
label_BFD4:; return;
label_BFD5:; return;
label_BFD6:; return;
label_BFD7:; return;
label_BFD8:; return;
label_BFD9:; return;
label_BFDA:; return;
label_BFDB:; return;
label_BFDC:; return;
label_BFDD:; return;
label_BFDE:; return;
label_BFDF:; return;
label_BFE0:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE3:; return;
label_BFE4:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE7:; return;
label_BFE8:; return;
label_BFE9:; return;
label_BFEA:; return;
label_BFEB:; return;
label_BFEC:; return;
label_BFED:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF1:; return;
label_BFF2:; return;
label_BFF3:; return;
label_BFF4:; return;
label_BFF5:; return;
label_BFF6:; return;
label_BFF7:; return;
label_BFF8:; return;
label_BFF9:; return;
label_BFFA:; return;
label_BFFB:; return;
label_BFFC:; return;
label_BFFD:; return;
label_BFFE:; return;
label_BFFF:; return;
label_C000:; return;
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
}

void func_B457_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B457_b9");
#endif
    func_B457_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5FB_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5FB_b9");
#endif
    func_B457_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B595_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B595_b9");
#endif
    func_B457_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5A1_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A1_b9");
#endif
    func_B457_b9_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6DB_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6DB_b9");
#endif
    func_B457_b9_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B46B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B46B_b9");
#endif
    func_B457_b9_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4D9_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4D9_b9");
#endif
    func_B457_b9_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B4E5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B4E5_b9");
#endif
    func_B457_b9_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B507_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B507_b9");
#endif
    func_B457_b9_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B56B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B56B_b9");
#endif
    func_B457_b9_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B573_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B573_b9");
#endif
    func_B457_b9_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B58D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B58D_b9");
#endif
    func_B457_b9_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5A5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5A5_b9");
#endif
    func_B457_b9_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6C7_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6C7_b9");
#endif
    func_B457_b9_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6E5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E5_b9");
#endif
    func_B457_b9_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6E9_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6E9_b9");
#endif
    func_B457_b9_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6ED_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6ED_b9");
#endif
    func_B457_b9_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B6F7_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B6F7_b9");
#endif
    func_B457_b9_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B5AD_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B5AD_b9");
#endif
    func_B457_b9_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B726_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B726_b9");
#endif
label_B726:;
    /* $B726: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_B728:;
    /* $B728: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B729:;
    /* $B729: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B72A:;
    /* $B72A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_B72C:;
    /* $B72C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B72D:;
    /* $B72D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_B72F:;
    /* $B72F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B730:;
    /* $B730: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B731:;
    /* $B731: 99 */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_B734:;
    /* $B734: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_B735:;
    /* $B735: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_B738:;
    /* $B738: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B73B:;
    /* $B73B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B73C:;
    /* $B73C: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_B73F:;
    /* $B73F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B740:;
    /* $B740: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B741:;
    /* $B741: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x02; FLAG_NZ(g_cpu.A);
label_B743:;
    /* $B743: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B744:;
    /* $B744: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xB4AD); FLAG_NZ(g_cpu.Y);
label_B747:;
    /* $B747: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B749:;
    /* $B749: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB7B6); FLAG_NZ(g_cpu.A);
label_B74C:;
    /* $B74C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74D:;
    /* $B74D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74E:;
    /* $B74E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B74F:;
    /* $B74F: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B752:;
    /* $B752: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B754:;
    /* $B754: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B755:;
    /* $B755: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B756:;
    /* $B756: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB8) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B758:;
    /* $B758: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B759:;
    /* $B759: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B75A:;
    /* $B75A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0202 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B75D:;
    /* $B75D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B75E:;
    /* $B75E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B75F:;
    /* $B75F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B760:;
    /* $B760: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02D5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B763:;
    /* $B763: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B764:;
    /* $B764: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xCF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B766:;
    /* $B766: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B767:;
    /* $B767: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B768:;
    /* $B768: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B76A:;
    /* $B76A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7340 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B76D:;
    /* $B76D: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x41 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B76F:;
    /* $B76F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B770:;
    /* $B770: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x17E3), 9); return; }
label_B772:;
    /* $B772: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x79 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B774:;
    /* $B774: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B775:;
    /* $B775: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B777:;
    /* $B777: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x74 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B779:;
    /* $B779: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x17BD), 9); return; }
label_B77B:;
    /* $B77B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B77D:;
    /* $B77D: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B77F:;
    /* $B77F: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4871 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B782:;
    /* $B782: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3649 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B785:;
    /* $B785: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x3E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B787:;
    /* $B787: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x714B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B78A:;
    /* $B78A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B78B:;
    /* $B78B: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x3048 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B78E:;
    /* $B78E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x38; FLAG_NZ(g_cpu.A);
label_B790:;
    /* $B790: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x4B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B792:;
    /* $B792: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x244A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B795:;
    /* $B795: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_B797:;
    /* $B797: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x4471); FLAG_NZ(g_cpu.A);
label_B79A:;
    /* $B79A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4540 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B79D:;
    /* $B79D: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x41; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B79F:;
    /* $B79F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_B7A0:;
    /* $B7A0: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x71; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7A2:;
    /* $B7A2: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x79 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B7A4:;
    /* $B7A4: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7A6:;
    /* $B7A6: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB7A6; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B7A7:; return;
label_B7A9:; return;
label_B7AB:; return;
label_B7AD:; return;
label_B7AF:; return;
label_B7B2:; return;
label_B7B4:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BB:; return;
label_B7BE:; return;
label_B7BF:; return;
label_B7C1:; return;
label_B7C2:; return;
label_B7C4:; return;
label_B7C6:; return;
label_B7C9:; return;
label_B7CB:; return;
label_B7CD:; return;
label_B7CF:; return;
label_B7D0:; return;
label_B7D2:; return;
label_B7D5:; return;
label_B7D7:; return;
label_B7DA:; return;
label_B7DB:; return;
label_B7DE:; return;
label_B7E1:; return;
label_B7E2:; return;
label_B7E5:; return;
label_B7E7:; return;
label_B7EA:; return;
label_B7EB:; return;
label_B7EE:; return;
label_B7EF:; return;
label_B7F2:; return;
label_B7F5:; return;
label_B7F7:; return;
label_B7F9:; return;
label_B7FB:; return;
label_B7FD:; return;
label_B7FF:; return;
label_B801:; return;
label_B803:; return;
label_B804:; return;
label_B805:; return;
label_B807:; return;
label_B808:; return;
label_B80A:; return;
label_B80D:; return;
label_B80E:; return;
label_B811:; return;
label_B812:; return;
label_B815:; return;
label_B817:; return;
label_B819:; return;
label_B81A:; return;
label_B81C:; return;
label_B81F:; return;
label_B821:; return;
label_B822:; return;
label_B824:; return;
label_B826:; return;
label_B829:; return;
label_B82A:; return;
label_B82C:; return;
label_B82E:; return;
label_B831:; return;
label_B833:; return;
label_B835:; return;
label_B837:; return;
label_B839:; return;
label_B83C:; return;
label_B83E:; return;
label_B840:; return;
label_B843:; return;
label_B846:; return;
label_B847:; return;
label_B84A:; return;
label_B84B:; return;
label_B84E:; return;
label_B851:; return;
label_B854:; return;
label_B856:; return;
label_B859:; return;
label_B85B:; return;
label_B85D:; return;
label_B85F:; return;
label_B861:; return;
label_B862:; return;
label_B864:; return;
label_B867:; return;
label_B869:; return;
label_B86B:; return;
label_B86D:; return;
label_B86E:; return;
label_B870:; return;
label_B872:; return;
label_B875:; return;
label_B877:; return;
label_B87A:; return;
label_B87B:; return;
label_B87E:; return;
label_B87F:; return;
label_B882:; return;
label_B885:; return;
label_B888:; return;
label_B88B:; return;
label_B88C:; return;
label_B88F:; return;
label_B891:; return;
label_B894:; return;
label_B897:; return;
label_B899:; return;
label_B89C:; return;
label_B89D:; return;
label_B89E:; return;
label_B8A0:; return;
label_B8A1:; return;
label_B8A3:; return;
label_B8A4:; return;
label_B8A5:; return;
label_B8A6:; return;
label_B8A7:; return;
label_B8A8:; return;
label_B8A9:; return;
label_B8AA:; return;
label_B8AB:; return;
label_B8AD:; return;
label_B8AF:; return;
label_B8B2:; return;
label_B8B3:; return;
label_B8B4:; return;
label_B8B7:; return;
label_B8B8:; return;
label_B8B9:; return;
label_B8BA:; return;
label_B8BB:; return;
label_B8BE:; return;
label_B8BF:; return;
label_B8C0:; return;
label_B8C1:; return;
label_B8C2:; return;
label_B8C5:; return;
label_B8C8:; return;
label_B8C9:; return;
label_B8CA:; return;
label_B8CB:; return;
label_B8CE:; return;
label_B8D0:; return;
label_B8D1:; return;
label_B8D4:; return;
label_B8D5:; return;
label_B8D8:; return;
label_B8D9:; return;
label_B8DA:; return;
label_B8DC:; return;
label_B8DD:; return;
label_B8DF:; return;
label_B8E1:; return;
label_B8E2:; return;
label_B8E5:; return;
label_B8E6:; return;
label_B8E8:; return;
label_B8E9:; return;
label_B8EB:; return;
label_B8EE:; return;
label_B8EF:; return;
label_B8F1:; return;
label_B8F2:; return;
label_B8F3:; return;
label_B8F4:; return;
label_B8F6:; return;
label_B8F8:; return;
label_B8F9:; return;
label_B8FB:; return;
label_B8FE:; return;
label_B900:; return;
label_B902:; return;
label_B905:; return;
label_B907:; return;
label_B90A:; return;
label_B90B:; return;
label_B90D:; return;
label_B90F:; return;
label_B911:; return;
label_B912:; return;
label_B914:; return;
label_B917:; return;
label_B919:; return;
label_B91A:; return;
label_B91D:; return;
label_B920:; return;
label_B923:; return;
label_B925:; return;
label_B928:; return;
label_B929:; return;
label_B92C:; return;
label_B92F:; return;
label_B930:; return;
label_B933:; return;
label_B934:; return;
label_B937:; return;
label_B93A:; return;
label_B93D:; return;
label_B93F:; return;
label_B941:; return;
label_B942:; return;
label_B943:; return;
label_B944:; return;
label_B945:; return;
label_B946:; return;
label_B947:; return;
label_B948:; return;
label_B949:; return;
label_B94A:; return;
label_B94B:; return;
label_B94D:; return;
label_B94F:; return;
label_B950:; return;
label_B951:; return;
label_B954:; return;
label_B955:; return;
label_B956:; return;
label_B957:; return;
label_B959:; return;
label_B95A:; return;
label_B95B:; return;
label_B95D:; return;
label_B95E:; return;
label_B960:; return;
label_B961:; return;
label_B962:; return;
label_B964:; return;
label_B965:; return;
label_B966:; return;
label_B968:; return;
label_B969:; return;
label_B96A:; return;
label_B96C:; return;
label_B96D:; return;
label_B96E:; return;
label_B970:; return;
label_B973:; return;
label_B975:; return;
label_B976:; return;
label_B978:; return;
label_B97A:; return;
label_B97B:; return;
label_B97C:; return;
label_B97E:; return;
label_B981:; return;
label_B984:; return;
label_B987:; return;
label_B98A:; return;
label_B98D:; return;
label_B990:; return;
label_B993:; return;
label_B994:; return;
label_B995:; return;
label_B996:; return;
label_B997:; return;
label_B998:; return;
label_B999:; return;
label_B99A:; return;
label_B99B:; return;
label_B99E:; return;
label_B9A1:; return;
label_B9A2:; return;
label_B9A4:; return;
label_B9A5:; return;
label_B9A6:; return;
label_B9A7:; return;
label_B9A8:; return;
label_B9A9:; return;
label_B9AC:; return;
label_B9AF:; return;
label_B9B1:; return;
label_B9B4:; return;
label_B9B5:; return;
label_B9B6:; return;
label_B9B8:; return;
label_B9BA:; return;
label_B9BC:; return;
label_B9BE:; return;
label_B9C1:; return;
label_B9C3:; return;
label_B9C4:; return;
label_B9C6:; return;
label_B9C9:; return;
label_B9CA:; return;
label_B9CD:; return;
label_B9CF:; return;
label_B9D0:; return;
label_B9D2:; return;
label_B9D4:; return;
label_B9D6:; return;
label_B9D9:; return;
label_B9DB:; return;
label_B9DE:; return;
label_B9E1:; return;
label_B9E4:; return;
label_B9E7:; return;
label_B9EA:; return;
label_B9ED:; return;
label_B9EF:; return;
label_B9F0:; return;
label_B9F2:; return;
label_B9F5:; return;
label_B9F8:; return;
label_B9FB:; return;
label_B9FD:; return;
label_BA00:; return;
label_BA03:; return;
label_BA04:; return;
label_BA06:; return;
label_BA09:; return;
label_BA0A:; return;
label_BA2F:; return;
label_BA30:; return;
label_BA31:; return;
label_BA32:; return;
label_BA33:; return;
label_BA34:; return;
label_BA35:; return;
label_BA36:; return;
label_BA37:; return;
label_BA38:; return;
label_BA39:; return;
label_BA3A:; return;
label_BA3B:; return;
label_BA3C:; return;
label_BA3D:; return;
label_BA3E:; return;
label_BA3F:; return;
label_BA40:; return;
label_BA41:; return;
label_BA42:; return;
label_BA43:; return;
label_BA44:; return;
label_BA45:; return;
label_BA46:; return;
label_BA47:; return;
label_BA48:; return;
label_BA49:; return;
label_BA4A:; return;
label_BA4B:; return;
label_BA4C:; return;
label_BA4D:; return;
label_BA4E:; return;
label_BA4F:; return;
label_BA50:; return;
label_BA51:; return;
label_BA52:; return;
label_BA53:; return;
label_BA54:; return;
label_BA55:; return;
label_BA56:; return;
label_BA57:; return;
label_BA58:; return;
label_BA59:; return;
label_BA5A:; return;
label_BA5B:; return;
label_BA5C:; return;
label_BA5D:; return;
label_BA5E:; return;
label_BA5F:; return;
label_BA60:; return;
label_BA61:; return;
label_BA62:; return;
label_BA63:; return;
label_BA64:; return;
label_BA65:; return;
label_BA66:; return;
label_BA67:; return;
label_BA68:; return;
label_BA69:; return;
label_BA6A:; return;
label_BA6B:; return;
label_BA6C:; return;
label_BA6D:; return;
label_BA6E:; return;
label_BA6F:; return;
label_BA70:; return;
label_BA71:; return;
label_BA72:; return;
label_BA73:; return;
label_BA74:; return;
label_BA75:; return;
label_BA76:; return;
label_BA77:; return;
label_BA78:; return;
label_BA79:; return;
label_BA7A:; return;
label_BA7B:; return;
label_BA7C:; return;
label_BA7D:; return;
label_BA7E:; return;
label_BA7F:; return;
label_BA80:; return;
label_BA81:; return;
label_BA82:; return;
label_BA83:; return;
label_BA84:; return;
label_BA85:; return;
label_BA86:; return;
label_BA87:; return;
label_BA88:; return;
label_BA89:; return;
label_BA8A:; return;
label_BA8B:; return;
label_BA8C:; return;
label_BA8D:; return;
label_BA8E:; return;
label_BA8F:; return;
label_BA90:; return;
label_BA91:; return;
label_BA92:; return;
label_BA93:; return;
label_BA94:; return;
label_BA95:; return;
label_BA96:; return;
label_BA97:; return;
label_BA98:; return;
label_BA99:; return;
label_BA9A:; return;
label_BA9B:; return;
label_BA9C:; return;
label_BA9D:; return;
label_BA9E:; return;
label_BA9F:; return;
label_BAA0:; return;
label_BAA1:; return;
label_BAA2:; return;
label_BAA3:; return;
label_BAA4:; return;
label_BAA5:; return;
label_BAA6:; return;
label_BAA7:; return;
label_BAA8:; return;
label_BAA9:; return;
label_BAAA:; return;
label_BAAB:; return;
label_BAAC:; return;
label_BAAD:; return;
label_BAAE:; return;
label_BAAF:; return;
label_BAB0:; return;
label_BAB1:; return;
label_BAB2:; return;
label_BAB3:; return;
label_BAB4:; return;
label_BAB5:; return;
label_BAB6:; return;
label_BAB7:; return;
label_BAB8:; return;
label_BAB9:; return;
label_BABA:; return;
label_BABB:; return;
label_BABC:; return;
label_BABD:; return;
label_BABE:; return;
label_BABF:; return;
label_BAC0:; return;
label_BAC1:; return;
label_BAC2:; return;
label_BAC3:; return;
label_BAC4:; return;
label_BAC5:; return;
label_BAC6:; return;
label_BAC7:; return;
label_BAC8:; return;
label_BAC9:; return;
label_BACA:; return;
label_BACB:; return;
label_BACC:; return;
label_BACD:; return;
label_BACE:; return;
label_BACF:; return;
label_BAD0:; return;
label_BAD1:; return;
label_BAD2:; return;
label_BAD3:; return;
label_BAD4:; return;
label_BAD5:; return;
label_BAD6:; return;
label_BAD7:; return;
label_BAD8:; return;
label_BAD9:; return;
label_BADA:; return;
label_BADB:; return;
label_BADC:; return;
label_BADD:; return;
label_BADE:; return;
label_BADF:; return;
label_BAE0:; return;
label_BAE1:; return;
label_BAE2:; return;
label_BAE3:; return;
label_BAE4:; return;
label_BAE5:; return;
label_BAE6:; return;
label_BAE7:; return;
label_BAE8:; return;
label_BAE9:; return;
label_BAEA:; return;
label_BAEB:; return;
label_BAEC:; return;
label_BAED:; return;
label_BAEE:; return;
label_BAEF:; return;
label_BAF0:; return;
label_BAF1:; return;
label_BAF2:; return;
label_BAF3:; return;
label_BAF4:; return;
label_BAF5:; return;
label_BAF6:; return;
label_BAF7:; return;
label_BAF8:; return;
label_BAF9:; return;
label_BAFA:; return;
label_BAFB:; return;
label_BAFC:; return;
label_BAFD:; return;
label_BAFE:; return;
label_BAFF:; return;
label_BB00:; return;
label_BB01:; return;
label_BB03:; return;
label_BB05:; return;
label_BB06:; return;
label_BB09:; return;
label_BB0B:; return;
label_BB0D:; return;
label_BB0E:; return;
label_BB11:; return;
label_BB13:; return;
label_BB15:; return;
label_BB17:; return;
label_BB18:; return;
label_BB1B:; return;
label_BB1E:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB23:; return;
label_BB25:; return;
label_BB26:; return;
label_BB29:; return;
label_BB2B:; return;
label_BB2D:; return;
label_BB2E:; return;
label_BB31:; return;
label_BB33:; return;
label_BB35:; return;
label_BB36:; return;
label_BB39:; return;
label_BB3B:; return;
label_BB3D:; return;
label_BB3E:; return;
label_BB41:; return;
label_BB42:; return;
label_BB44:; return;
label_BB46:; return;
label_BB47:; return;
label_BB48:; return;
label_BB4A:; return;
label_BB4C:; return;
label_BB4D:; return;
label_BB4E:; return;
label_BB4F:; return;
label_BB50:; return;
label_BB52:; return;
label_BB54:; return;
label_BB56:; return;
label_BB58:; return;
label_BB59:; return;
label_BB5C:; return;
label_BB5E:; return;
label_BB60:; return;
label_BB62:; return;
label_BB63:; return;
label_BB64:; return;
label_BB67:; return;
label_BB68:; return;
label_BB6B:; return;
label_BB6E:; return;
label_BB70:; return;
label_BB72:; return;
label_BB74:; return;
label_BB76:; return;
label_BB79:; return;
label_BB7B:; return;
label_BB7C:; return;
label_BB7E:; return;
label_BB81:; return;
label_BB83:; return;
label_BB85:; return;
label_BB87:; return;
label_BB88:; return;
label_BB8A:; return;
label_BB8C:; return;
label_BB8D:; return;
label_BB8E:; return;
label_BB91:; return;
label_BB93:; return;
label_BB95:; return;
label_BB96:; return;
label_BB99:; return;
label_BB9B:; return;
label_BB9D:; return;
label_BB9E:; return;
label_BBA1:; return;
label_BBA3:; return;
label_BBA4:; return;
label_BBA5:; return;
label_BBA7:; return;
label_BBA8:; return;
label_BBAA:; return;
label_BBAD:; return;
label_BBAF:; return;
label_BBB1:; return;
label_BBB3:; return;
label_BBB5:; return;
label_BBB8:; return;
label_BBBA:; return;
label_BBBC:; return;
label_BBBD:; return;
label_BBBE:; return;
label_BBBF:; return;
label_BBC0:; return;
label_BBC2:; return;
label_BBC4:; return;
label_BBC6:; return;
label_BBC7:; return;
label_BBC9:; return;
label_BBCB:; return;
label_BBCD:; return;
label_BBCF:; return;
label_BBD1:; return;
label_BBD2:; return;
label_BBD4:; return;
label_BBD7:; return;
label_BBD9:; return;
label_BBDA:; return;
label_BBDC:; return;
label_BBDF:; return;
label_BBE1:; return;
label_BBE4:; return;
label_BBE6:; return;
label_BBE9:; return;
label_BBEB:; return;
label_BBED:; return;
label_BBF0:; return;
label_BBF1:; return;
label_BBF2:; return;
label_BBF3:; return;
label_BBF4:; return;
label_BBF5:; return;
label_BBF7:; return;
label_BBFA:; return;
label_BBFC:; return;
label_BBFE:; return;
label_BBFF:; return;
label_BC02:; return;
label_BC04:; return;
label_BC06:; return;
label_BC09:; return;
label_BC0B:; return;
label_BC0E:; return;
label_BC11:; return;
label_BC14:; return;
label_BC16:; return;
label_BC19:; return;
label_BC1A:; return;
label_BC1B:; return;
label_BC1C:; return;
label_BC1E:; return;
label_BC20:; return;
label_BC22:; return;
label_BC24:; return;
label_BC26:; return;
label_BC29:; return;
label_BC2B:; return;
label_BC2D:; return;
label_BC2F:; return;
label_BC32:; return;
label_BC34:; return;
label_BC36:; return;
label_BC39:; return;
label_BC3B:; return;
label_BC3D:; return;
label_BC3F:; return;
label_BC42:; return;
label_BC44:; return;
label_BC46:; return;
label_BC49:; return;
label_BC4A:; return;
label_BC4B:; return;
label_BC4D:; return;
label_BC4E:; return;
label_BC4F:; return;
label_BC50:; return;
label_BC52:; return;
label_BC54:; return;
label_BC56:; return;
label_BC58:; return;
label_BC5B:; return;
label_BC5C:; return;
label_BC5E:; return;
label_BC5F:; return;
label_BC60:; return;
label_BC61:; return;
label_BC64:; return;
label_BC67:; return;
label_BC68:; return;
label_BC69:; return;
label_BC6C:; return;
label_BC6F:; return;
label_BC70:; return;
label_BC72:; return;
label_BC74:; return;
label_BC76:; return;
label_BC79:; return;
label_BC7B:; return;
label_BC7D:; return;
label_BC7F:; return;
label_BC82:; return;
label_BC84:; return;
label_BC86:; return;
label_BC88:; return;
label_BC8A:; return;
label_BC8C:; return;
label_BC8E:; return;
label_BC91:; return;
label_BC93:; return;
label_BC95:; return;
label_BC97:; return;
label_BC9A:; return;
label_BC9C:; return;
label_BC9E:; return;
label_BCA1:; return;
label_BCA3:; return;
label_BCA4:; return;
label_BCA5:; return;
label_BCA7:; return;
label_BCA8:; return;
label_BCAA:; return;
label_BCAD:; return;
label_BCAE:; return;
label_BCAF:; return;
label_BCB1:; return;
label_BCB3:; return;
label_BCB5:; return;
label_BCB8:; return;
label_BCBA:; return;
label_BCBC:; return;
label_BCBD:; return;
label_BCBE:; return;
label_BCBF:; return;
label_BCC0:; return;
label_BCC2:; return;
label_BCC4:; return;
label_BCC6:; return;
label_BCC7:; return;
label_BCC9:; return;
label_BCCB:; return;
label_BCCE:; return;
label_BCD0:; return;
label_BCD2:; return;
label_BCD4:; return;
label_BCD7:; return;
label_BCD9:; return;
label_BCDB:; return;
label_BCDD:; return;
label_BCDE:; return;
label_BCE0:; return;
label_BCE3:; return;
label_BCE5:; return;
label_BCE6:; return;
label_BCE8:; return;
label_BCEA:; return;
label_BCED:; return;
label_BCEF:; return;
label_BCF2:; return;
label_BCF3:; return;
label_BCF4:; return;
label_BCF5:; return;
label_BCF7:; return;
label_BCF9:; return;
label_BCFB:; return;
label_BCFD:; return;
label_BCFF:; return;
label_BD01:; return;
label_BD03:; return;
label_BD05:; return;
label_BD06:; return;
label_BD09:; return;
label_BD0B:; return;
label_BD0E:; return;
label_BD11:; return;
label_BD14:; return;
label_BD16:; return;
label_BD19:; return;
label_BD1C:; return;
label_BD1E:; return;
label_BD20:; return;
label_BD22:; return;
label_BD24:; return;
label_BD25:; return;
label_BD26:; return;
label_BD29:; return;
label_BD2A:; return;
label_BD2C:; return;
label_BD2D:; return;
label_BD2E:; return;
label_BD31:; return;
label_BD32:; return;
label_BD34:; return;
label_BD35:; return;
label_BD36:; return;
label_BD39:; return;
label_BD3A:; return;
label_BD3C:; return;
label_BD3D:; return;
label_BD3E:; return;
label_BD41:; return;
label_BD43:; return;
label_BD44:; return;
label_BD46:; return;
label_BD48:; return;
label_BD4A:; return;
label_BD4C:; return;
label_BD4D:; return;
label_BD4E:; return;
label_BD4F:; return;
label_BD50:; return;
label_BD53:; return;
label_BD55:; return;
label_BD58:; return;
label_BD59:; return;
label_BD5A:; return;
label_BD5D:; return;
label_BD5F:; return;
label_BD61:; return;
label_BD62:; return;
label_BD63:; return;
label_BD64:; return;
label_BD67:; return;
label_BD68:; return;
label_BD6B:; return;
label_BD6E:; return;
label_BD71:; return;
label_BD73:; return;
label_BD74:; return;
label_BD76:; return;
label_BD79:; return;
label_BD7A:; return;
label_BD7C:; return;
label_BD7E:; return;
label_BD81:; return;
label_BD82:; return;
label_BD84:; return;
label_BD85:; return;
label_BD86:; return;
label_BD89:; return;
label_BD8A:; return;
label_BD8C:; return;
label_BD8D:; return;
label_BD8E:; return;
label_BD91:; return;
label_BD92:; return;
label_BD94:; return;
label_BD95:; return;
label_BD96:; return;
label_BD99:; return;
label_BD9A:; return;
label_BD9C:; return;
label_BD9D:; return;
label_BD9E:; return;
label_BDA1:; return;
label_BDA3:; return;
label_BDA4:; return;
label_BDA5:; return;
label_BDA7:; return;
label_BDA8:; return;
label_BDAA:; return;
label_BDAD:; return;
label_BDAF:; return;
label_BDB1:; return;
label_BDB2:; return;
label_BDB5:; return;
label_BDB7:; return;
label_BDB9:; return;
label_BDBC:; return;
label_BDBD:; return;
label_BDBE:; return;
label_BDBF:; return;
label_BDC0:; return;
label_BDC2:; return;
label_BDC4:; return;
label_BDC6:; return;
label_BDC9:; return;
label_BDCB:; return;
label_BDCD:; return;
label_BDCF:; return;
label_BDD2:; return;
label_BDD5:; return;
label_BDD8:; return;
label_BDDA:; return;
label_BDDD:; return;
label_BDE0:; return;
label_BDE2:; return;
label_BDE4:; return;
label_BDE6:; return;
label_BDE9:; return;
label_BDEC:; return;
label_BDEE:; return;
label_BDEF:; return;
label_BDF1:; return;
label_BDF2:; return;
label_BDF4:; return;
label_BDF6:; return;
label_BDF7:; return;
label_BDF9:; return;
label_BDFC:; return;
label_BDFF:; return;
label_BE02:; return;
label_BE04:; return;
label_BE07:; return;
label_BE0A:; return;
label_BE0D:; return;
label_BE10:; return;
label_BE13:; return;
label_BE14:; return;
label_BE16:; return;
label_BE17:; return;
label_BE18:; return;
label_BE19:; return;
label_BE1A:; return;
label_BE1B:; return;
label_BE1C:; return;
label_BE1E:; return;
label_BE1F:; return;
label_BE21:; return;
label_BE23:; return;
label_BE25:; return;
label_BE28:; return;
label_BE2A:; return;
label_BE2C:; return;
label_BE2F:; return;
label_BE32:; return;
label_BE34:; return;
label_BE37:; return;
label_BE3A:; return;
label_BE3C:; return;
label_BE3F:; return;
label_BE42:; return;
label_BE44:; return;
label_BE46:; return;
label_BE48:; return;
label_BE49:; return;
label_BE4B:; return;
label_BE4C:; return;
label_BE4D:; return;
label_BE4E:; return;
label_BE4F:; return;
label_BE50:; return;
label_BE53:; return;
label_BE54:; return;
label_BE57:; return;
label_BE59:; return;
label_BE5A:; return;
label_BE5D:; return;
label_BE5F:; return;
label_BE60:; return;
label_BE61:; return;
label_BE64:; return;
label_BE67:; return;
label_BE68:; return;
label_BE69:; return;
label_BE6C:; return;
label_BE6F:; return;
label_BE70:; return;
label_BE71:; return;
label_BE73:; return;
label_BE75:; return;
label_BE76:; return;
label_BE79:; return;
label_BE7B:; return;
label_BE7C:; return;
label_BE7E:; return;
label_BE80:; return;
label_BE81:; return;
label_BE83:; return;
label_BE85:; return;
label_BE88:; return;
label_BE8A:; return;
label_BE8C:; return;
label_BE8F:; return;
label_BE92:; return;
label_BE94:; return;
label_BE97:; return;
label_BE9A:; return;
label_BE9C:; return;
label_BE9F:; return;
label_BEA2:; return;
label_BEA5:; return;
label_BEA6:; return;
label_BEA7:; return;
label_BEA8:; return;
label_BEAA:; return;
label_BEAD:; return;
label_BEB0:; return;
label_BEB2:; return;
label_BEB4:; return;
label_BEB6:; return;
label_BEB8:; return;
label_BEBB:; return;
label_BEBD:; return;
label_BEBE:; return;
label_BEBF:; return;
label_BEC0:; return;
label_BEC2:; return;
label_BEC4:; return;
label_BEC6:; return;
label_BEC9:; return;
label_BECB:; return;
label_BECD:; return;
label_BECF:; return;
label_BED2:; return;
label_BED3:; return;
label_BED5:; return;
label_BED7:; return;
label_BED9:; return;
label_BEDB:; return;
label_BEDD:; return;
label_BEDF:; return;
label_BEE1:; return;
label_BEE3:; return;
label_BEE6:; return;
label_BEE8:; return;
label_BEEA:; return;
label_BEED:; return;
label_BEEF:; return;
label_BEF1:; return;
label_BEF3:; return;
label_BEF4:; return;
label_BEF6:; return;
label_BEF8:; return;
label_BEFB:; return;
label_BEFE:; return;
label_BF01:; return;
label_BF02:; return;
label_BF03:; return;
label_BF04:; return;
label_BF06:; return;
label_BF07:; return;
label_BF08:; return;
label_BF09:; return;
label_BF0A:; return;
label_BF0B:; return;
label_BF0C:; return;
label_BF0E:; return;
label_BF0F:; return;
label_BF10:; return;
label_BF11:; return;
label_BF13:; return;
label_BF14:; return;
label_BF15:; return;
label_BF16:; return;
label_BF18:; return;
label_BF1A:; return;
label_BF1B:; return;
label_BF1C:; return;
label_BF1D:; return;
label_BF1E:; return;
label_BF20:; return;
label_BF22:; return;
label_BF23:; return;
label_BF24:; return;
label_BF25:; return;
label_BF26:; return;
label_BF27:; return;
label_BF28:; return;
label_BF2A:; return;
label_BF2B:; return;
label_BF2C:; return;
label_BF2D:; return;
label_BF2E:; return;
label_BF2F:; return;
label_BF30:; return;
label_BF32:; return;
label_BF33:; return;
label_BF34:; return;
label_BF35:; return;
label_BF36:; return;
label_BF37:; return;
label_BF38:; return;
label_BF3A:; return;
label_BF3B:; return;
label_BF3C:; return;
label_BF3D:; return;
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
label_BF4B:; return;
label_BF4C:; return;
label_BF4D:; return;
label_BF4E:; return;
label_BF4F:; return;
label_BF50:; return;
label_BF51:; return;
label_BF52:; return;
label_BF53:; return;
label_BF55:; return;
label_BF57:; return;
label_BF59:; return;
label_BF5B:; return;
label_BF5D:; return;
label_BF5F:; return;
label_BF61:; return;
label_BF62:; return;
label_BF63:; return;
label_BF64:; return;
label_BF65:; return;
label_BF66:; return;
label_BF67:; return;
label_BF68:; return;
label_BF69:; return;
label_BF6A:; return;
label_BF6B:; return;
label_BF6D:; return;
label_BF6E:; return;
label_BF6F:; return;
label_BF70:; return;
label_BF71:; return;
label_BF72:; return;
label_BF73:; return;
label_BF74:; return;
label_BF75:; return;
label_BF76:; return;
label_BF77:; return;
label_BF78:; return;
label_BF79:; return;
label_BF7A:; return;
label_BF7B:; return;
label_BF7C:; return;
label_BF7D:; return;
label_BF7E:; return;
label_BF7F:; return;
label_BF80:; return;
label_BF81:; return;
label_BF82:; return;
label_BF83:; return;
label_BF84:; return;
label_BF85:; return;
label_BF86:; return;
label_BF87:; return;
label_BF88:; return;
label_BF8A:; return;
label_BF8C:; return;
label_BF8E:; return;
label_BF90:; return;
label_BF92:; return;
label_BF94:; return;
label_BF96:; return;
label_BF98:; return;
label_BF9A:; return;
label_BF9C:; return;
label_BF9E:; return;
label_BFA0:; return;
label_BFA1:; return;
label_BFA3:; return;
label_BFA4:; return;
label_BFA5:; return;
label_BFA6:; return;
label_BFA7:; return;
label_BFA8:; return;
label_BFAA:; return;
label_BFAC:; return;
label_BFAD:; return;
label_BFAE:; return;
label_BFAF:; return;
label_BFB0:; return;
label_BFB2:; return;
label_BFB3:; return;
label_BFB4:; return;
label_BFB5:; return;
label_BFB6:; return;
label_BFB7:; return;
label_BFB8:; return;
label_BFB9:; return;
label_BFBA:; return;
label_BFBB:; return;
label_BFBC:; return;
label_BFBD:; return;
label_BFBE:; return;
label_BFBF:; return;
label_BFC0:; return;
label_BFC1:; return;
label_BFC2:; return;
label_BFC3:; return;
label_BFC4:; return;
label_BFC5:; return;
label_BFC6:; return;
label_BFC7:; return;
label_BFC8:; return;
label_BFC9:; return;
label_BFCA:; return;
label_BFCB:; return;
label_BFCC:; return;
label_BFCD:; return;
label_BFCE:; return;
label_BFD0:; return;
label_BFD1:; return;
label_BFD2:; return;
label_BFD3:; return;
label_BFD4:; return;
label_BFD5:; return;
label_BFD6:; return;
label_BFD7:; return;
label_BFD8:; return;
label_BFD9:; return;
label_BFDA:; return;
label_BFDB:; return;
label_BFDC:; return;
label_BFDD:; return;
label_BFDE:; return;
label_BFDF:; return;
label_BFE0:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE3:; return;
label_BFE4:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE7:; return;
label_BFE8:; return;
label_BFE9:; return;
label_BFEA:; return;
label_BFEB:; return;
label_BFEC:; return;
label_BFED:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF1:; return;
label_BFF2:; return;
label_BFF3:; return;
label_BFF4:; return;
label_BFF5:; return;
label_BFF6:; return;
label_BFF7:; return;
label_BFF8:; return;
label_BFF9:; return;
label_BFFA:; return;
label_BFFB:; return;
label_BFFC:; return;
label_BFFD:; return;
label_BFFE:; return;
label_BFFF:; return;
label_C000:; return;
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
}

void func_B7C5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7C5_b9");
#endif
label_B7C5:;
    /* $B7C5: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x3B; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B7C7:;
    /* $B7C7: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B7C8:;
    /* $B7C8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_B7C9:;
    /* $B7C9: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B7CB:;
    /* $B7CB: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x71; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B7CD:;
    /* $B7CD: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x79); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7CF:;
    /* $B7CF: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7D0:;
    /* $B7D0: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x46); FLAG_NZ(g_cpu.A);
label_B7D2:;
    /* $B7D2: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x477C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7D5:;
    /* $B7D5: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x78) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7D7:;
    /* $B7D7: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4544 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7DA:;
    /* $B7DA: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7DB:;
    /* $B7DB: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x4746 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7DE:;
    /* $B7DE: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7E1:;
    /* $B7E1: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B7E2:;
    /* $B7E2: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x737A + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7E5:;
    /* $B7E5: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x7B + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7E7:;
    /* $B7E7: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7EA:;
    /* $B7EA: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B7EB:;
    /* $B7EB: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7EE:;
    /* $B7EE: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7EF:;
    /* $B7EF: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7F2:;
    /* $B7F2: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7378 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7F5:;
    /* $B7F5: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7F7:;
    /* $B7F7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x70; g_cpu.C=(g_cpu.Y>=0x70)?1:0; FLAG_NZ(r&0xFF); }
label_B7F9:;
    /* $B7F9: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7FB:; /* doc_robot_master_main_indices */
    /* $B7FB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B7FD:;
    /* $B7FD: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7FF:;
    /* $B7FF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x74); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B801:;
    /* $B801: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B7C8;
    }
label_B803:;
    /* $B803: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B804:;
    /* $B804: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B805:;
    /* $B805: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B7D0;
    }
label_B807:;
    /* $B807: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B808:;
    /* $B808: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD1) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80A:;
    /* $B80A: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80D:;
    /* $B80D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_B80E:;
    /* $B80E: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x71DD + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B811:;
    /* $B811: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B812:;
    /* $B812: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x73EC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B815:;
    /* $B815: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xEC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B817:;
    /* $B817: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B819:;
    /* $B819: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B81A:;
    /* $B81A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B81C:;
    /* $B81C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B81F:;
    /* $B81F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xD9 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B821:;
    /* $B821: DA */ maybe_trigger_vblank(2); /* NOP */
label_B822:;
    /* $B822: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE2 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B824:;
    /* $B824: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xB0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B826:;
    /* $B826: EE */ maybe_trigger_vblank(6); { uint16_t a=0xB0D3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B829:;
    /* $B829: EA */ maybe_trigger_vblank(2); /* NOP */
label_B82A:;
    /* $B82A: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B82C:;
    /* $B82C: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xF5)?1:0; g_cpu.X=(t-0xF5)&0xFF; FLAG_NZ(g_cpu.X); }
label_B82E:;
    /* $B82E: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF6F5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B831:;
    /* $B831: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B833:;
    /* $B833: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B835:;
    /* $B835: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B837:;
    /* $B837: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x71); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B839:;
    /* $B839: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDB79 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B83C:;
    /* $B83C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B81C;
    }
label_B83E:;
    /* $B83E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B826;
    }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B7D8_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B7EA;
    }
label_B7D8:;
    /* $B7D8: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x45); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7DA:;
    /* $B7DA: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7DB:;
    /* $B7DB: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x4746 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7DE:;
    /* $B7DE: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7E1:;
    /* $B7E1: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B7E2:;
    /* $B7E2: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x737A + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7E5:;
    /* $B7E5: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x7B + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7E7:;
    /* $B7E7: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7EA:;
    /* $B7EA: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B7EB:;
    /* $B7EB: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7EE:;
    /* $B7EE: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B7EF:;
    /* $B7EF: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7F2:;
    /* $B7F2: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7378 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7F5:;
    /* $B7F5: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7F7:;
    /* $B7F7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x70; g_cpu.C=(g_cpu.Y>=0x70)?1:0; FLAG_NZ(r&0xFF); }
label_B7F9:;
    /* $B7F9: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC1) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7FB:; /* doc_robot_master_main_indices */
    /* $B7FB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B7FD:;
    /* $B7FD: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7FF:;
    /* $B7FF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x74); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B801:;
    /* $B801: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x17C8), 9); return; }
label_B803:;
    /* $B803: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B804:;
    /* $B804: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B805:;
    /* $B805: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x17D0), 9); return; }
label_B807:;
    /* $B807: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B808:;
    /* $B808: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD1) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80A:;
    /* $B80A: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80D:;
    /* $B80D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_B80E:;
    /* $B80E: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x71DD + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B811:;
    /* $B811: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B812:;
    /* $B812: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x73EC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B815:;
    /* $B815: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xEC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B817:;
    /* $B817: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B819:;
    /* $B819: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B81A:;
    /* $B81A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B81C:;
    /* $B81C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B81F:;
    /* $B81F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xD9 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B821:;
    /* $B821: DA */ maybe_trigger_vblank(2); /* NOP */
label_B822:;
    /* $B822: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE2 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B824:;
    /* $B824: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xB0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B826:;
    /* $B826: EE */ maybe_trigger_vblank(6); { uint16_t a=0xB0D3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B829:;
    /* $B829: EA */ maybe_trigger_vblank(2); /* NOP */
label_B82A:;
    /* $B82A: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B82C:;
    /* $B82C: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xF5)?1:0; g_cpu.X=(t-0xF5)&0xFF; FLAG_NZ(g_cpu.X); }
label_B82E:;
    /* $B82E: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF6F5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B831:;
    /* $B831: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B833:;
    /* $B833: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B835:;
    /* $B835: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B837:;
    /* $B837: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x71); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B839:;
    /* $B839: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDB79 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B83C:;
    /* $B83C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B81C;
    }
label_B83E:;
    /* $B83E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B826;
    }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B7D8_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D8_b9");
#endif
    func_B7D8_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7EA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7EA_b9");
#endif
    func_B7D8_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B7F4_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B80A;
    }
label_B7F4:;
    /* $B7F4: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x74) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7F6:;
    /* $B7F6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B7F8:;
    /* $B7F8: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_B86B; }
label_B7FA:;
    /* $B7FA: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC2 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7FC:;
    /* $B7FC: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B7FD:;
    /* $B7FD: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7FF:;
    /* $B7FF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x74); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B801:;
    /* $B801: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x17C8), 9); return; }
label_B803:;
    /* $B803: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B804:;
    /* $B804: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B805:;
    /* $B805: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x17D0), 9); return; }
label_B807:;
    /* $B807: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B808:;
    /* $B808: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD1) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80A:;
    /* $B80A: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B80D:;
    /* $B80D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_B80E:;
    /* $B80E: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x71DD + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B811:;
    /* $B811: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B812:;
    /* $B812: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x73EC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B815:;
    /* $B815: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xEC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B817:;
    /* $B817: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B819:;
    /* $B819: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_B81A:;
    /* $B81A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B81C:;
    /* $B81C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE1D9 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B81F:;
    /* $B81F: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xD9 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B821:;
    /* $B821: DA */ maybe_trigger_vblank(2); /* NOP */
label_B822:;
    /* $B822: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE2 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B824:;
    /* $B824: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xB0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B826:;
    /* $B826: EE */ maybe_trigger_vblank(6); { uint16_t a=0xB0D3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B829:;
    /* $B829: EA */ maybe_trigger_vblank(2); /* NOP */
label_B82A:;
    /* $B82A: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B82C:;
    /* $B82C: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xF5)?1:0; g_cpu.X=(t-0xF5)&0xFF; FLAG_NZ(g_cpu.X); }
label_B82E:;
    /* $B82E: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF6F5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B831:;
    /* $B831: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B833:;
    /* $B833: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B835:;
    /* $B835: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B837:;
    /* $B837: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x71); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B839:;
    /* $B839: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDB79 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B83C:;
    /* $B83C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B81C;
    }
label_B83E:;
    /* $B83E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B826;
    }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B7F4_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7F4_b9");
#endif
    func_B7F4_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B80A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B80A_b9");
#endif
    func_B7F4_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B82B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B82B_b9");
#endif
label_B82B:;
    /* $B82B: EF */ maybe_trigger_vblank(6); { uint16_t a=0xF5CB; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B82E:;
    /* $B82E: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF6F5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B831:;
    /* $B831: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B833:;
    /* $B833: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B835:;
    /* $B835: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B837:;
    /* $B837: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x71); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B839:;
    /* $B839: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDB79 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B83C:;
    /* $B83C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x181C), 9); return; }
label_B83E:;
    /* $B83E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1826), 9); return; }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B86A_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B87B;
    }
label_B86A:;
    /* $B86A: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86C:;
    /* $B86C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1858), 9); return; }
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B86A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B86A_b9");
#endif
    func_B86A_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B87B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B87B_b9");
#endif
    func_B86A_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B883_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B883_b9");
#endif
label_B883:;
    /* $B883: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B884:;
    /* $B884: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B887:;
    /* $B887: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88A:;
    /* $B88A: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF2) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B88E_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B898;
        case 2: goto label_B890;
        case 3: goto label_B8D5;
        case 4: goto label_B893;
    }
label_B88E:;
    /* $B88E: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF4) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B890:;
    /* $B890: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B893:;
    /* $B893: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B895:;
    /* $B895: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3F2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B898:;
    /* $B898: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF4CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89B:;
    /* $B89B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_B8E5; }
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
label_B8A5:;
    /* $B8A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A5); return;
label_B8A6:;
    /* $B8A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A6); return;
label_B8A7:;
    /* $B8A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A7); return;
label_B8A8:;
    /* $B8A8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A8); return;
label_B8A9:;
    /* $B8A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A9); return;
label_B8AA:;
    /* $B8AA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8AA); return;
label_B8AB:;
    /* $B8AB: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8AD:;
    /* $B8AD: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B8AF:;
    /* $B8AF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B00 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8B2:;
    /* $B8B2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B2); return;
label_B8B3:;
    /* $B8B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B3); return;
label_B8B4:;
    /* $B8B4: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x001A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8B7:;
    /* $B8B7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B7); return;
label_B8B8:;
    /* $B8B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B8); return;
label_B8B9:;
    /* $B8B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8B9); return;
label_B8BA:;
    /* $B8BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8BA); return;
label_B8BB:;
    /* $B8BB: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0016 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8BE:;
    /* $B8BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8BE); return;
label_B8BF:;
    /* $B8BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8BF); return;
label_B8C0:;
    /* $B8C0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C0); return;
label_B8C1:;
    /* $B8C1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C1); return;
label_B8C2:;
    /* $B8C2: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8C5:;
    /* $B8C5: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x001A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8C8:;
    /* $B8C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C8); return;
label_B8C9:;
    /* $B8C9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C9); return;
label_B8CA:;
    /* $B8CA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8CA); return;
label_B8CB:;
    /* $B8CB: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8CE:;
    /* $B8CE: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8D0:;
    /* $B8D0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D0); return;
label_B8D1:;
    /* $B8D1: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8D4:;
    /* $B8D4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D4); return;
label_B8D5:;
    /* $B8D5: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x001A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8D8:;
    /* $B8D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D8); return;
label_B8D9:;
    /* $B8D9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8D9); return;
label_B8DA:;
    /* $B8DA: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8DC:;
    /* $B8DC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_B8DD:;
    /* $B8DD: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B8DF:;
    /* $B8DF: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B8E1:;
    /* $B8E1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8E1); return;
label_B8E2:;
    /* $B8E2: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0008 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B8E5:;
    /* $B8E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8E5); return;
}

void func_B88E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B88E_b9");
#endif
    func_B88E_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B898_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B898_b9");
#endif
    func_B88E_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B890_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B890_b9");
#endif
    func_B88E_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8D5_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8D5_b9");
#endif
    func_B88E_b9_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B893_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B893_b9");
#endif
    func_B88E_b9_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8A2_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B8A3;
    }
label_B8A2:;
    /* $B8A2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B8A2_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A2_b9");
#endif
    func_B8A2_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8A3_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8A3_b9");
#endif
    func_B8A2_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B8C7_b9(void) { /* robot_master_main_indices */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8C7_b9");
#endif
label_B8C7:; /* robot_master_main_indices */
    /* $B8C7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8C7); return;
}

void func_B8EC_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B8EC_b9");
#endif
label_B8EC:;
    /* $B8EC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8EC); return;
}

void func_B931_b9(void) { /* main_trap_platform */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B931_b9");
#endif
label_B931:; /* main_trap_platform */
    /* $B931: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x6A51); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B934:;
    /* $B934: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x526E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B937:;
    /* $B937: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x105F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B93A:;
    /* $B93A: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x1003 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B93D:;
    /* $B93D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_B942; }
label_B93F:;
    /* $B93F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B941:;
    /* $B941: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB941); return;
label_B942:;
    /* $B942: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B943:;
    /* $B943: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB943); return;
}

void func_B972_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B972_b9");
#endif
label_B972:;
    /* $B972: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_B974:;
    /* $B974: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x9502); FLAG_NZ(g_cpu.X);
label_B977:;
    /* $B977: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B978:;
    /* $B978: 89 */ maybe_trigger_vblank(2); /* NOP */
label_B97A:;
    /* $B97A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B97B:;
    /* $B97B: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_B97C:;
    /* $B97C: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B97E:;
    /* $B97E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_B981:;
    /* $B981: 8E */ maybe_trigger_vblank(4); nes_write(0x96BD, g_cpu.X);
label_B984:;
    /* $B984: 8F */ maybe_trigger_vblank(4); nes_write(0x9798, g_cpu.A & g_cpu.X); /* SAX */
label_B987:;
    /* $B987: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x9A99 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_B98A:;
    /* $B98A: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x9BB7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B98D:;
    /* $B98D: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B990:;
    /* $B990: 9D */ maybe_trigger_vblank(5); nes_write((0xA502 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B993:;
    /* $B993: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B994:;
    /* $B994: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B995:;
    /* $B995: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B996:;
    /* $B996: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B997:;
    /* $B997: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B998:;
    /* $B998: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B999:;
    /* $B999: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B99A:;
    /* $B99A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B99B:;
    /* $B99B: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_B99E:;
    /* $B99E: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_B9A1:;
    /* $B9A1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A2:;
    /* $B9A2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xAF; FLAG_NZ(g_cpu.Y);
label_B9A4:;
    /* $B9A4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A5:;
    /* $B9A5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A6:;
    /* $B9A6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_B9A7:;
    /* $B9A7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A8:;
    /* $B9A8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9A9:;
    /* $B9A9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB1A7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9AC:; /* main_breakable_wall */
    /* $B9AC: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB2D5 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9AF:;
    /* $B9AF: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9B1:;
    /* $B9B1: CF */ maybe_trigger_vblank(6); { uint16_t a=0xB5B4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9B4:;
    /* $B9B4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9B5:;
    /* $B9B5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B9B6:;
    /* $B9B6: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_B9B8:;
    /* $B9B8: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x74) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9BA:;
    /* $B9BA: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x76 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9BC:;
    /* $B9BC: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(2); goto label_BA2F; }
label_B9BE:;
    /* $B9BE: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7218 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9C1:;
    /* $B9C1: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x19) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9C3:;
    /* $B9C3: 1A */ maybe_trigger_vblank(2); /* NOP */
label_B9C4:;
    /* $B9C4: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x70 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9C6:;
    /* $B9C6: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x711C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9C9:;
    /* $B9C9: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B9CA:;
    /* $B9CA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x717D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9CD:;
    /* $B9CD: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(2); goto label_BA48; }
label_B9CF:;
    /* $B9CF: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xB9CF; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_B9D0:;
    /* $B9D0: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x52) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9D2:;
    /* $B9D2: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x5A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9D4:;
    /* $B9D4: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x71) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D6:;
    /* $B9D6: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x4679 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9D9:;
    /* $B9D9: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x5A; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_B9DB:;
    /* $B9DB: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x4C71 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9DE:;
    /* $B9DE: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4D40 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9E1:;
    /* $B9E1: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x5A41; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9E4:;
    /* $B9E4: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x5B71; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9E7:;
    /* $B9E7: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5471 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9EA:;
    /* $B9EA: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5540 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9ED:;
    /* $B9ED: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x41 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B9EF:;
    /* $B9EF: 5A */ maybe_trigger_vblank(2); /* NOP */
label_B9F0:;
    /* $B9F0: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x71; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_B9F2:;
    /* $B9F2: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x6879 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9F5:;
    /* $B9F5: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7540); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9F8:;
    /* $B9F8: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x766B; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B9FB:;
    /* $B9FB: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x71 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9FD:;
    /* $B9FD: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x4079 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA00:;
    /* $BA00: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x416A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA03:;
    /* $BA03: 5A */ maybe_trigger_vblank(2); /* NOP */
label_BA04:;
    /* $BA04: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x60) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA06:;
    /* $BA06: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x617A + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BA09:;
    /* $BA09: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BA0A:;
    /* $BA0A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6358); nes_trace_indirect_jump(0xBA0A, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_BA2F:;
    /* $BA2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA2F); return;
label_BA30:;
    /* $BA30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA30); return;
label_BA31:;
    /* $BA31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA31); return;
label_BA32:;
    /* $BA32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA32); return;
label_BA33:;
    /* $BA33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA33); return;
label_BA34:;
    /* $BA34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA34); return;
label_BA35:;
    /* $BA35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA35); return;
label_BA36:;
    /* $BA36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA36); return;
label_BA37:;
    /* $BA37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA37); return;
label_BA38:;
    /* $BA38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA38); return;
label_BA39:;
    /* $BA39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA39); return;
label_BA3A:;
    /* $BA3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3A); return;
label_BA3B:;
    /* $BA3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3B); return;
label_BA3C:;
    /* $BA3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3C); return;
label_BA3D:;
    /* $BA3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3D); return;
label_BA3E:;
    /* $BA3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3E); return;
label_BA3F:;
    /* $BA3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA3F); return;
label_BA40:;
    /* $BA40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA40); return;
label_BA41:;
    /* $BA41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA41); return;
label_BA42:;
    /* $BA42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA42); return;
label_BA43:;
    /* $BA43: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA43); return;
label_BA44:;
    /* $BA44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA44); return;
label_BA45:;
    /* $BA45: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA45); return;
label_BA46:;
    /* $BA46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA46); return;
label_BA47:;
    /* $BA47: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA47); return;
label_BA48:;
    /* $BA48: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA48); return;
}

void func_BA2E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA2E_b9");
#endif
label_BA2E:;
    /* $BA2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA2E); return;
}

void func_BB10_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB10_b9");
#endif
label_BB10:;
    /* $BB10: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BB11:;
    /* $BB11: EB */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB13:;
    /* $BB13: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xE0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB15:;
    /* $BB15: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BB17:;
    /* $BB17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB17); return;
}

void func_BB24_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BB25;
    }
label_BB24:;
    /* $BB24: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BB25:;
    /* $BB25: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_BB26:;
    /* $BB26: 8C */ maybe_trigger_vblank(4); nes_write(0xA08E, g_cpu.Y);
label_BB29:;
    /* $BB29: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA4; FLAG_NZ(g_cpu.X);
label_BB2B:;
    /* $BB2B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA8); FLAG_NZ(g_cpu.X);
label_BB2D:;
    /* $BB2D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_BB2E:;
    /* $BB2E: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xC0AE); FLAG_NZ(g_cpu.Y);
label_BB31:;
    /* $BB31: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BB33:;
    /* $BB33: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB35:;
    /* $BB35: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_BB36:;
    /* $BB36: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xE0CE); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB39:;
    /* $BB39: E2 */ maybe_trigger_vblank(2); /* NOP */
label_BB3B:;
    /* $BB3B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xE8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BB3D:;
    /* $BB3D: EA */ maybe_trigger_vblank(2); /* NOP */
label_BB3E:;
    /* $BB3E: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x75EE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BB41:;
    /* $BB41: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BB42:;
    /* $BB42: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x25 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BB44:;
    /* $BB44: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BB46:;
    /* $BB46: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_BB47:;
    /* $BB47: 5A */ maybe_trigger_vblank(2); /* NOP */
label_BB48:;
    /* $BB48: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x75); FLAG_NZ(g_cpu.A);
label_BB4A:;
    /* $BB4A: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x51 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BB4C:;
    /* $BB4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB4C); return;
}

void func_BB24_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB24_b9");
#endif
    func_BB24_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB25_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB25_b9");
#endif
    func_BB24_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BB53_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BB53_b9");
#endif
label_BB53:;
    /* $BB53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBB53); return;
}

void func_BBD8_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BBD8_b9");
#endif
label_BBD8:;
    /* $BBD8: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xBBD8; g_rti_bank = 9; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BC07_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BC0A;
    }
label_BC07:;
    /* $BC07: CF */ maybe_trigger_vblank(6); { uint16_t a=0xC1C0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC0A:;
    /* $BC0A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BC0C:;
    /* $BC0C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xEB; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC0E:;
    /* $BC0E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD2EF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC11:;
    /* $BC11: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEAE8); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC14:;
    /* $BC14: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE3 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC16:;
    /* $BC16: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0000 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC19:;
    /* $BC19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC19); return;
}

void func_BC07_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC07_b9");
#endif
    func_BC07_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC0A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC0A_b9");
#endif
    func_BC07_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC48_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BC5E;
        case 2: goto label_BC69;
    }
label_BC48:;
    /* $BC48: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_BCAA; }
label_BC4A:;
    /* $BC4A: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BC4B:;
    /* $BC4B: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BC4D:;
    /* $BC4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC4D); return;
label_BC4E:;
    /* $BC4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC4E); return;
label_BC4F:;
    /* $BC4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC4F); return;
label_BC50:;
    /* $BC50: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC52:;
    /* $BC52: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xD7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC54:;
    /* $BC54: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC5); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC56:;
    /* $BC56: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC58:;
    /* $BC58: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC5B:;
    /* $BC5B: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BC5C:;
    /* $BC5C: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BC5E:;
    /* $BC5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC5E); return;
label_BC5F:;
    /* $BC5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC5F); return;
label_BC60:;
    /* $BC60: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_BC61:;
    /* $BC61: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0000); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC64:;
    /* $BC64: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCFCE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC67:;
    /* $BC67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC67); return;
label_BC68:;
    /* $BC68: DA */ maybe_trigger_vblank(2); /* NOP */
label_BC69:;
    /* $BC69: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xC5DC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC6C:;
    /* $BC6C: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF70 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC6F:;
    /* $BC6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC6F); return;
label_BC70:;
    /* $BC70: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BC72:;
    /* $BC72: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BC74:;
    /* $BC74: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BC76:;
    /* $BC76: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x724F); FLAG_NZ(g_cpu.A);
label_BC79:;
    /* $BC79: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x25 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BC7B:;
    /* $BC7B: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC7D:;
    /* $BC7D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC7F:;
    /* $BC7F: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x2400; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC82:;
    /* $BC82: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC84:;
    /* $BC84: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC86:;
    /* $BC86: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC88:;
    /* $BC88: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BC8A:;
    /* $BC8A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_BC8C:;
    /* $BC8C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_BC8E:;
    /* $BC8E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC124); FLAG_NZ(g_cpu.A);
label_BC91:;
    /* $BC91: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC93:;
    /* $BC93: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC95:;
    /* $BC95: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC97:;
    /* $BC97: CF */ maybe_trigger_vblank(6); { uint16_t a=0xE3E1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC9A:;
    /* $BC9A: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC9C:;
    /* $BC9C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xEB; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC9E:;
    /* $BC9E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00EF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BCA1:;
    /* $BCA1: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BCA3:;
    /* $BCA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA3); return;
label_BCA4:;
    /* $BCA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA4); return;
label_BCA5:;
    /* $BCA5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCA7:;
    /* $BCA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA7); return;
label_BCA8:; /* main_tama_B */
    /* $BCA8: 85 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.A);
label_BCAA:;
    /* $BCAA: 8F */ maybe_trigger_vblank(4); nes_write(0x2424, g_cpu.A & g_cpu.X); /* SAX */
label_BCAD:;
    /* $BCAD: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_BCAE:;
    /* $BCAE: 7A */ maybe_trigger_vblank(2); /* NOP */
label_BCAF:;
    /* $BCAF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB1:;
    /* $BCB1: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB3:;
    /* $BCB3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xAF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB5:;
    /* $BCB5: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x247B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCB8:;
    /* $BCB8: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCBA:;
    /* $BCBA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCBC:;
    /* $BCBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBC); return;
}

void func_BC48_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC48_b9");
#endif
    func_BC48_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC5E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC5E_b9");
#endif
    func_BC48_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC69_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC69_b9");
#endif
    func_BC48_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC6B_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BDE2;
        case 2: goto label_BD82;
        case 3: goto label_BEB8;
        case 4: goto label_BE6C;
        case 5: goto label_BC7D;
        case 6: goto label_BCC2;
        case 7: goto label_BCD2;
        case 8: goto label_BCE6;
        case 9: goto label_BCFB;
        case 10: goto label_BD50;
        case 11: goto label_BD81;
        case 12: goto label_BDB2;
        case 13: goto label_BE4B;
        case 14: goto label_BE9A;
        case 15: goto label_BF14;
    }
label_BC6B:;
    /* $BC6B: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC6D:;
    /* $BC6D: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1C6E), 9); return; }
label_BC6F:;
    /* $BC6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC6F); return;
label_BC70:;
    /* $BC70: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BC72:;
    /* $BC72: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BC74:;
    /* $BC74: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BC76:;
    /* $BC76: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x724F); FLAG_NZ(g_cpu.A);
label_BC79:;
    /* $BC79: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x25 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BC7B:;
    /* $BC7B: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC7D:;
    /* $BC7D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC7F:;
    /* $BC7F: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x2400; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC82:;
    /* $BC82: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC84:;
    /* $BC84: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC86:;
    /* $BC86: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC88:;
    /* $BC88: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BC8A:;
    /* $BC8A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA7); FLAG_NZ(g_cpu.A);
label_BC8C:;
    /* $BC8C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAB; FLAG_NZ(g_cpu.A);
label_BC8E:;
    /* $BC8E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC124); FLAG_NZ(g_cpu.A);
label_BC91:;
    /* $BC91: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC93:;
    /* $BC93: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC95:;
    /* $BC95: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCD); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BC97:;
    /* $BC97: CF */ maybe_trigger_vblank(6); { uint16_t a=0xE3E1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BC9A:;
    /* $BC9A: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xE7); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC9C:;
    /* $BC9C: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xEB; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC9E:;
    /* $BC9E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00EF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BCA1:;
    /* $BCA1: 82 */ maybe_trigger_vblank(2); /* NOP */
label_BCA3:;
    /* $BCA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA3); return;
label_BCA4:;
    /* $BCA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA4); return;
label_BCA5:;
    /* $BCA5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCA7:;
    /* $BCA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA7); return;
label_BCA8:; /* main_tama_B */
    /* $BCA8: 85 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.A);
label_BCAA:;
    /* $BCAA: 8F */ maybe_trigger_vblank(4); nes_write(0x2424, g_cpu.A & g_cpu.X); /* SAX */
label_BCAD:;
    /* $BCAD: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_BCAE:;
    /* $BCAE: 7A */ maybe_trigger_vblank(2); /* NOP */
label_BCAF:;
    /* $BCAF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB1:;
    /* $BCB1: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB3:;
    /* $BCB3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xAF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCB5:;
    /* $BCB5: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x247B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCB8:;
    /* $BCB8: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCBA:;
    /* $BCBA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCBC:;
    /* $BCBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBC); return;
label_BCBD:;
    /* $BCBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBD); return;
label_BCBE:;
    /* $BCBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBE); return;
label_BCBF:;
    /* $BCBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCBF); return;
label_BCC0:;
    /* $BCC0: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCC2:;
    /* $BCC2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCC4:;
    /* $BCC4: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCC6:;
    /* $BCC6: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCC7:;
    /* $BCC7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCC9:;
    /* $BCC9: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BCCB:;
    /* $BCCB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F0E); FLAG_NZ(g_cpu.A);
label_BCCE:;
    /* $BCCE: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x24); FLAG_NZ(g_cpu.A);
label_BCD0:;
    /* $BCD0: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCD2:;
    /* $BCD2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_BCD4:;
    /* $BCD4: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2524); FLAG_NZ(g_cpu.A);
label_BCD7:;
    /* $BCD7: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_BCD9:;
    /* $BCD9: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x25 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BCDB:;
    /* $BCDB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCDD:;
    /* $BCDD: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BCDE:;
    /* $BCDE: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x30); FLAG_NZ(g_cpu.A);
label_BCE0:;
    /* $BCE0: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x722D); FLAG_NZ(g_cpu.A);
label_BCE3:;
    /* $BCE3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x33); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCE5:;
    /* $BCE5: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_BCE6:;
    /* $BCE6: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x37 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BCE8:;
    /* $BCE8: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x39); FLAG_NZ(g_cpu.A);
label_BCEA:;
    /* $BCEA: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3130 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BCED:;
    /* $BCED: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_BCEF:;
    /* $BCEF: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x3A3A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BCF2:;
    /* $BCF2: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCF3:;
    /* $BCF3: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCF4:;
    /* $BCF4: 3A */ maybe_trigger_vblank(2); /* NOP */
label_BCF5:;
    /* $BCF5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCF7:;
    /* $BCF7: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x72); FLAG_NZ(g_cpu.A);
label_BCF9:;
    /* $BCF9: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x25 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BCFB:;
    /* $BCFB: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCFD:;
    /* $BCFD: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCFF:;
    /* $BCFF: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_BD01:;
    /* $BD01: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x24); FLAG_NZ(g_cpu.A);
label_BD03:;
    /* $BD03: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BD05:;
    /* $BD05: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD06:;
    /* $BD06: DC */ maybe_trigger_vblank(4); (void)nes_read((0xD0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD09:;
    /* $BD09: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD1) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD0B:;
    /* $BD0B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFAF8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD0E:;
    /* $BD0E: FC */ maybe_trigger_vblank(4); (void)nes_read((0xDDFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD11:;
    /* $BD11: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xF900 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD14:;
    /* $BD14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1D08), 9); return; }
label_BD16:;
    /* $BD16: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00ED); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD19:;
    /* $BD19: EE */ maybe_trigger_vblank(6); { uint16_t a=0x00FE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1C:;
    /* $BD1C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD1E:;
    /* $BD1E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD20:;
    /* $BD20: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x1CB4), 9); return; }
label_BD22:;
    /* $BD22: 94 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.Y);
label_BD24:;
    /* $BD24: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BD25:;
    /* $BD25: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_BD26:;
    /* $BD26: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BD29:;
    /* $BD29: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BD2A:;
    /* $BD2A: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BD2C:;
    /* $BD2C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_BD2D:;
    /* $BD2D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BD2E:;
    /* $BD2E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xD0BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BD31:;
    /* $BD31: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BD32:;
    /* $BD32: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD34:;
    /* $BD34: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BD35:;
    /* $BD35: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD36:;
    /* $BD36: DC */ maybe_trigger_vblank(4); (void)nes_read((0xF0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD39:;
    /* $BD39: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BD3A:;
    /* $BD3A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD3C:;
    /* $BD3C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD3D:;
    /* $BD3D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD3E:;
    /* $BD3E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x45FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD41:;
    /* $BD41: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x48; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BD43:;
    /* $BD43: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BD44:;
    /* $BD44: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD46:;
    /* $BD46: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x25); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD48:;
    /* $BD48: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4A:;
    /* $BD4A: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x61) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4C:;
    /* $BD4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4C); return;
label_BD4D:;
    /* $BD4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4D); return;
label_BD4E:;
    /* $BD4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4E); return;
label_BD4F:;
    /* $BD4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4F); return;
label_BD50:;
    /* $BD50: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD53:;
    /* $BD53: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xDD; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BD55:;
    /* $BD55: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD6DD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD58:;
    /* $BD58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD58); return;
label_BD59:;
    /* $BD59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD59); return;
label_BD5A:;
    /* $BD5A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD5D:;
    /* $BD5D: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD5 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD5F:;
    /* $BD5F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD61:;
    /* $BD61: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD62:;
    /* $BD62: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD62); return;
label_BD63:;
    /* $BD63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD63); return;
label_BD64:;
    /* $BD64: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD67:;
    /* $BD67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD67); return;
label_BD68:;
    /* $BD68: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDA + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD6B:;
    /* $BD6B: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDEDE + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD6E:;
    /* $BD6E: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x2500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BD71:;
    /* $BD71: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x65 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD73:;
    /* $BD73: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BD74:;
    /* $BD74: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD76:;
    /* $BD76: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x255E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD79:;
    /* $BD79: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BD7A:;
    /* $BD7A: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BD7C:;
    /* $BD7C: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BD7E:;
    /* $BD7E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x0024 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD81:;
    /* $BD81: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_BD82:;
    /* $BD82: 94 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.Y);
label_BD84:;
    /* $BD84: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BD85:;
    /* $BD85: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_BD86:;
    /* $BD86: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BD89:;
    /* $BD89: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BD8A:;
    /* $BD8A: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BD8C:;
    /* $BD8C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_BD8D:;
    /* $BD8D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BD8E:;
    /* $BD8E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xD0BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BD91:;
    /* $BD91: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BD92:;
    /* $BD92: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD94:;
    /* $BD94: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BD95:;
    /* $BD95: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD96:;
    /* $BD96: DC */ maybe_trigger_vblank(4); (void)nes_read((0xF0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD99:;
    /* $BD99: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BD9A:;
    /* $BD9A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD9C:;
    /* $BD9C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD9D:;
    /* $BD9D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD9E:;
    /* $BD9E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x00FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BDA1:;
    /* $BDA1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8B + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BDA3:;
    /* $BDA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA3); return;
label_BDA4:;
    /* $BDA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA4); return;
label_BDA5:;
    /* $BDA5: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x69; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BDA7:;
    /* $BDA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA7); return;
label_BDA8:;
    /* $BDA8: 86 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.X);
label_BDAA:;
    /* $BDAA: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_BDAD:;
    /* $BDAD: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x3E; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_BDAF:;
    /* $BDAF: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BDB1:;
    /* $BDB1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_BDB2:;
    /* $BDB2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x241C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BDB5:;
    /* $BDB5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDB7:;
    /* $BDB7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDB9:;
    /* $BDB9: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2424 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDBC:;
    /* $BDBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBC); return;
label_BDBD:;
    /* $BDBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBD); return;
label_BDBE:;
    /* $BDBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBE); return;
label_BDBF:;
    /* $BDBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDBF); return;
label_BDC0:;
    /* $BDC0: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDC2:;
    /* $BDC2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDC4:;
    /* $BDC4: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDC6:;
    /* $BDC6: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x2520 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDC9:;
    /* $BDC9: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDCB:;
    /* $BDCB: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDCD:;
    /* $BDCD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDCF:;
    /* $BDCF: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x3837 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BDD2:;
    /* $BDD2: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3130 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDD5:;
    /* $BDD5: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x3130 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BDD8:;
    /* $BDD8: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x38 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDDA:;
    /* $BDDA: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3937 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDDD:;
    /* $BDDD: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x5239 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDE0:;
    /* $BDE0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_BE14; }
label_BDE2:;
    /* $BDE2: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDE4:;
    /* $BDE4: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x43); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDE6:;
    /* $BDE6: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3163 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BDE9:;
    /* $BDE9: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x6324); FLAG_NZ(g_cpu.A);
label_BDEC:;
    /* $BDEC: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BDEE:;
    /* $BDEE: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BDEF:;
    /* $BDEF: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDF1:;
    /* $BDF1: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BDF2:;
    /* $BDF2: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BDF4:;
    /* $BDF4: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BDF6:;
    /* $BDF6: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BDF7:;
    /* $BDF7: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BDF9:; /* main_item_pickup */
    /* $BDF9: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3B3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDFC:;
    /* $BDFC: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x2E2C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BDFF:;
    /* $BDFF: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x2500; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BE02:;
    /* $BE02: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC3); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE04:;
    /* $BE04: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDB + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE07:;
    /* $BE07: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD1D1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE0A:;
    /* $BE0A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xF9EF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE0D:;
    /* $BE0D: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE10:;
    /* $BE10: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF8FC + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE13:;
    /* $BE13: FA */ maybe_trigger_vblank(2); /* NOP */
label_BE14:;
    /* $BE14: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF3) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE16:;
    /* $BE16: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE16); return;
label_BE17:;
    /* $BE17: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE17); return;
label_BE18:;
    /* $BE18: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE18); return;
label_BE19:;
    /* $BE19: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE19); return;
label_BE1A:;
    /* $BE1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE1A); return;
label_BE1B:;
    /* $BE1B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE1B); return;
label_BE1C:;
    /* $BE1C: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE1E:;
    /* $BE1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE1E); return;
label_BE1F:;
    /* $BE1F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x91 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE21:;
    /* $BE21: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_BE23:;
    /* $BE23: 97 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_BE25:;
    /* $BE25: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_BE28:;
    /* $BE28: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE2A:;
    /* $BE2A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BE2C:;
    /* $BE2C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDBB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE2F:;
    /* $BE2F: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xD3D1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE32:;
    /* $BE32: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE34:;
    /* $BE34: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDB + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE37:;
    /* $BE37: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF3F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE3A:;
    /* $BE3A: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE3C:;
    /* $BE3C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFB + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE3F:;
    /* $BE3F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4846 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE42:;
    /* $BE42: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4B; FLAG_NZ(g_cpu.A);
label_BE44:;
    /* $BE44: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x63); FLAG_NZ(g_cpu.A);
label_BE46:;
    /* $BE46: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE48:;
    /* $BE48: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_BE49:;
    /* $BE49: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_BE70; }
label_BE4B:;
    /* $BE4B: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BE4C:;
    /* $BE4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4C); return;
label_BE4D:;
    /* $BE4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4D); return;
label_BE4E:;
    /* $BE4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4E); return;
label_BE4F:;
    /* $BE4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE4F); return;
label_BE50:;
    /* $BE50: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEFDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE53:;
    /* $BE53: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BE54:;
    /* $BE54: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00DD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE57:;
    /* $BE57: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE59:;
    /* $BE59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE59); return;
label_BE5A:;
    /* $BE5A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xD5D8; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE5D:;
    /* $BE5D: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE5F:;
    /* $BE5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE5F); return;
label_BE60:;
    /* $BE60: DA */ maybe_trigger_vblank(2); /* NOP */
label_BE61:;
    /* $BE61: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE64:;
    /* $BE64: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEFDD + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE67:;
    /* $BE67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE67); return;
label_BE68:;
    /* $BE68: DA */ maybe_trigger_vblank(2); /* NOP */
label_BE69:;
    /* $BE69: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDDDD + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE6C:;
    /* $BE6C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xEFDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BE6F:;
    /* $BE6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE6F); return;
label_BE70:;
    /* $BE70: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BE71:;
    /* $BE71: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x25); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BE73:;
    /* $BE73: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x65 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BE75:;
    /* $BE75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE75); return;
label_BE76:;
    /* $BE76: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x255F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE79:;
    /* $BE79: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BE7B:;
    /* $BE7B: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BE7C:;
    /* $BE7C: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_BE7E:;
    /* $BE7E: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x7F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BE80:;
    /* $BE80: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE80); return;
label_BE81:;
    /* $BE81: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_BE83:;
    /* $BE83: 97 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_BE85:;
    /* $BE85: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_BE88:;
    /* $BE88: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE8A:;
    /* $BE8A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BE8C:;
    /* $BE8C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBDBB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE8F:;
    /* $BE8F: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xD3D1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BE92:;
    /* $BE92: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD7 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE94:;
    /* $BE94: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDDB + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BE97:;
    /* $BE97: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xF3F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BE9A:;
    /* $BE9A: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF7 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE9C:;
    /* $BE9C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFDFB + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BE9F:;
    /* $BE9F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x8400 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BEA2:;
    /* $BEA2: 8C */ maybe_trigger_vblank(4); nes_write(0x0000, g_cpu.Y);
label_BEA5:;
    /* $BEA5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_BEA6:;
    /* $BEA6: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_BEA7:;
    /* $BEA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEA7); return;
label_BEA8:;
    /* $BEA8: 87 */ maybe_trigger_vblank(3); nes_write(0x91, g_cpu.A & g_cpu.X); /* SAX */
label_BEAA:;
    /* $BEAA: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_BEAD:;
    /* $BEAD: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x243F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEB0:;
    /* $BEB0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB2:;
    /* $BEB2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB4:;
    /* $BEB4: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB6:;
    /* $BEB6: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEB8:;
    /* $BEB8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1924 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEBB:;
    /* $BEBB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_BEBD; }
label_BEBD:;
    /* $BEBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEBD); return;
label_BEBE:;
    /* $BEBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEBE); return;
label_BEBF:;
    /* $BEBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEBF); return;
label_BEC0:;
    /* $BEC0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEC2:;
    /* $BEC2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BEC4:;
    /* $BEC4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_BEC6:;
    /* $BEC6: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x0A18 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEC9:;
    /* $BEC9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_BECB:;
    /* $BECB: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BECD:;
    /* $BECD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BECF:;
    /* $BECF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x2424); FLAG_NZ(g_cpu.A);
label_BED2:; /* main_surprise_box */
    /* $BED2: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BED3:;
    /* $BED3: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BED5:;
    /* $BED5: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x31); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BED7:;
    /* $BED7: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x24) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BED9:;
    /* $BED9: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEDB:;
    /* $BEDB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BEDD:;
    /* $BEDD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x65); FLAG_NZ(g_cpu.A);
label_BEDF:;
    /* $BEDF: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x31 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEE1:;
    /* $BEE1: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEE3:;
    /* $BEE3: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2539); FLAG_NZ(g_cpu.A);
label_BEE6:;
    /* $BEE6: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x37); FLAG_NZ(g_cpu.A);
label_BEE8:;
    /* $BEE8: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEEA:;
    /* $BEEA: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x2437 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEED:;
    /* $BEED: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x53); FLAG_NZ(g_cpu.A);
label_BEEF:;
    /* $BEEF: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_BEF1:;
    /* $BEF1: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x25) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BEF3:;
    /* $BEF3: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_BEF4:;
    /* $BEF4: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_BEF6:;
    /* $BEF6: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BEF8:;
    /* $BEF8: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3B3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEFB:;
    /* $BEFB: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x2D3B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BEFE:;
    /* $BEFE: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0062); FLAG_NZ(g_cpu.A);
label_BF01:;
    /* $BF01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF01); return;
label_BF02:;
    /* $BF02: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF02); return;
label_BF03:;
    /* $BF03: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF03); return;
label_BF04:;
    /* $BF04: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF06:;
    /* $BF06: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF07:;
    /* $BF07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF08:;
    /* $BF08: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF08); return;
label_BF09:;
    /* $BF09: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF09); return;
label_BF0A:;
    /* $BF0A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF0A); return;
label_BF0B:;
    /* $BF0B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF0B); return;
label_BF0C:;
    /* $BF0C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF0E:;
    /* $BF0E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF0F:;
    /* $BF0F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF10:;
    /* $BF10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF10); return;
label_BF11:;
    /* $BF11: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF13:;
    /* $BF13: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF14:;
    /* $BF14: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF15:;
    /* $BF15: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_BF16:;
    /* $BF16: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BF18:;
    /* $BF18: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BF1A:;
    /* $BF1A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBF1A); return;
label_BF1B:; return;
label_BF1C:; return;
label_BF1D:; return;
label_BF1E:; return;
label_BF20:; return;
label_BF22:; return;
label_BF23:; return;
label_BF24:; return;
label_BF25:; return;
label_BF26:; return;
label_BF27:; return;
label_BF28:; return;
label_BF2A:; return;
label_BF2B:; return;
label_BF2C:; return;
label_BF2D:; return;
label_BF2E:; return;
label_BF2F:; return;
label_BF30:; return;
label_BF32:; return;
label_BF33:; return;
label_BF34:; return;
label_BF35:; return;
label_BF36:; return;
label_BF37:; return;
label_BF38:; return;
label_BF3A:; return;
label_BF3B:; return;
label_BF3C:; return;
label_BF3D:; return;
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
label_BF4B:; return;
label_BF4C:; return;
label_BF4D:; return;
label_BF4E:; return;
label_BF4F:; return;
label_BF50:; return;
label_BF51:; return;
label_BF52:; return;
label_BF53:; return;
label_BF55:; return;
label_BF57:; return;
label_BF59:; return;
label_BF5B:; return;
label_BF5D:; return;
label_BF5F:; return;
label_BF61:; return;
label_BF62:; return;
label_BF63:; return;
label_BF64:; return;
label_BF65:; return;
label_BF66:; return;
label_BF67:; return;
label_BF68:; return;
label_BF69:; return;
label_BF6A:; return;
label_BF6B:; return;
label_BF6D:; return;
label_BF6E:; return;
label_BF6F:; return;
label_BF70:; return;
label_BF71:; return;
label_BF72:; return;
label_BF73:; return;
label_BF74:; return;
label_BF75:; return;
label_BF76:; return;
label_BF77:; return;
label_BF78:; return;
label_BF79:; return;
label_BF7A:; return;
label_BF7B:; return;
label_BF7C:; return;
label_BF7D:; return;
label_BF7E:; return;
label_BF7F:; return;
label_BF80:; return;
label_BF81:; return;
label_BF82:; return;
label_BF83:; return;
label_BF84:; return;
label_BF85:; return;
label_BF86:; return;
label_BF87:; return;
label_BF88:; return;
label_BF8A:; return;
label_BF8C:; return;
label_BF8E:; return;
label_BF90:; return;
label_BF92:; return;
label_BF94:; return;
label_BF96:; return;
label_BF98:; return;
label_BF9A:; return;
label_BF9C:; return;
label_BF9E:; return;
label_BFA0:; return;
label_BFA1:; return;
label_BFA3:; return;
label_BFA4:; return;
label_BFA5:; return;
label_BFA6:; return;
label_BFA7:; return;
label_BFA8:; return;
label_BFAA:; return;
label_BFAC:; return;
label_BFAD:; return;
label_BFAE:; return;
label_BFAF:; return;
label_BFB0:; return;
label_BFB2:; return;
label_BFB3:; return;
label_BFB4:; return;
label_BFB5:; return;
label_BFB6:; return;
label_BFB7:; return;
label_BFB8:; return;
label_BFB9:; return;
label_BFBA:; return;
label_BFBB:; return;
label_BFBC:; return;
label_BFBD:; return;
label_BFBE:; return;
label_BFBF:; return;
label_BFC0:; return;
label_BFC1:; return;
label_BFC2:; return;
label_BFC3:; return;
label_BFC4:; return;
label_BFC5:; return;
label_BFC6:; return;
label_BFC7:; return;
label_BFC8:; return;
label_BFC9:; return;
label_BFCA:; return;
label_BFCB:; return;
label_BFCC:; return;
label_BFCD:; return;
label_BFCE:; return;
label_BFD0:; return;
label_BFD1:; return;
label_BFD2:; return;
label_BFD3:; return;
label_BFD4:; return;
label_BFD5:; return;
label_BFD6:; return;
label_BFD7:; return;
label_BFD8:; return;
label_BFD9:; return;
label_BFDA:; return;
label_BFDB:; return;
label_BFDC:; return;
label_BFDD:; return;
label_BFDE:; return;
label_BFDF:; return;
label_BFE0:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE3:; return;
label_BFE4:; return;
label_BFE5:; return;
label_BFE6:; return;
label_BFE7:; return;
label_BFE8:; return;
label_BFE9:; return;
label_BFEA:; return;
label_BFEB:; return;
label_BFEC:; return;
label_BFED:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF1:; return;
label_BFF2:; return;
label_BFF3:; return;
label_BFF4:; return;
label_BFF5:; return;
label_BFF6:; return;
label_BFF7:; return;
label_BFF8:; return;
label_BFF9:; return;
label_BFFA:; return;
label_BFFB:; return;
label_BFFC:; return;
label_BFFD:; return;
label_BFFE:; return;
label_BFFF:; return;
label_C000:; return;
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
label_C6CB:; return;
label_C6CC:; return;
label_C6CD:; return;
label_C6CE:; return;
label_C6CF:; return;
label_C6D0:; return;
label_C6D1:; return;
label_C6D3:; return;
label_C6D5:; return;
label_C6D7:; return;
label_C6D8:; return;
label_C6D9:; return;
label_C6DB:; return;
label_C6DC:; return;
label_C6DE:; return;
label_C6DF:; return;
label_C6E0:; return;
label_C6E1:; return;
label_C6E3:; return;
label_C6E5:; return;
label_C6E7:; return;
label_C6E9:; return;
label_C6EB:; return;
label_C6ED:; return;
label_C6EF:; return;
label_C6F1:; return;
label_C6F2:; return;
label_C6F3:; return;
label_C6F5:; return;
label_C6F6:; return;
label_C6F7:; return;
label_C6F8:; return;
label_C6FA:; return;
label_C6FB:; return;
label_C6FC:; return;
label_C6FD:; return;
label_C6FE:; return;
label_C6FF:; return;
label_C701:; return;
label_C702:; return;
label_C703:; return;
label_C704:; return;
label_C705:; return;
label_C706:; return;
label_C707:; return;
label_C708:; return;
label_C70A:; return;
label_C70C:; return;
label_C70D:; return;
label_C70F:; return;
label_C712:; return;
label_C714:; return;
label_C715:; return;
label_C717:; return;
label_C718:; return;
label_C71A:; return;
label_C71C:; return;
label_C71E:; return;
label_C720:; return;
label_C721:; return;
label_C723:; return;
label_C725:; return;
label_C727:; return;
label_C729:; return;
label_C72B:; return;
label_C72D:; return;
label_C72F:; return;
label_C730:; return;
label_C731:; return;
label_C733:; return;
label_C734:; return;
label_C735:; return;
label_C737:; return;
label_C739:; return;
label_C73B:; return;
label_C73D:; return;
label_C73F:; return;
label_C740:; return;
label_C742:; return;
label_C744:; return;
label_C746:; return;
label_C748:; return;
label_C749:; return;
label_C74A:; return;
label_C74B:; return;
label_C74C:; return;
label_C74E:; return;
label_C750:; return;
label_C752:; return;
label_C754:; return;
label_C755:; return;
label_C757:; return;
label_C759:; return;
label_C75B:; return;
label_C75D:; return;
label_C75F:; return;
label_C762:; return;
label_C765:; return;
label_C766:; return;
label_C768:; return;
label_C76A:; return;
label_C76D:; return;
label_C76E:; return;
label_C770:; return;
label_C772:; return;
label_C774:; return;
label_C777:; return;
label_C778:; return;
label_C77A:; return;
label_C77C:; return;
label_C77E:; return;
label_C77F:; return;
label_C782:; return;
label_C783:; return;
label_C784:; return;
label_C786:; return;
label_C788:; return;
label_C78A:; return;
label_C78B:; return;
label_C78D:; return;
label_C78F:; return;
label_C791:; return;
label_C793:; return;
label_C795:; return;
label_C797:; return;
label_C798:; return;
label_C79A:; return;
label_C79C:; return;
label_C79E:; return;
label_C7A0:; return;
label_C7A2:; return;
label_C7A4:; return;
label_C7A7:; return;
label_C7AA:; return;
label_C7AB:; return;
label_C7AD:; return;
label_C7AF:; return;
label_C7B2:; return;
label_C7B3:; return;
label_C7B5:; return;
label_C7B7:; return;
label_C7B9:; return;
label_C7BC:; return;
label_C7BD:; return;
label_C7BF:; return;
label_C7C1:; return;
label_C7C3:; return;
label_C7C4:; return;
label_C7C6:; return;
label_C7C8:; return;
label_C7CA:; return;
label_C7CC:; return;
label_C7CE:; return;
label_C7D0:; return;
label_C7D2:; return;
label_C7D4:; return;
label_C7D6:; return;
label_C7D8:; return;
label_C7DA:; return;
label_C7DC:; return;
label_C7DD:; return;
label_C7DF:; return;
label_C7E1:; return;
label_C7E2:; return;
label_C7E3:; return;
label_C7E4:; return;
label_C7E5:; return;
label_C7E7:; return;
label_C7E8:; return;
label_C7EA:; return;
label_C7EC:; return;
label_C7ED:; return;
label_C7EE:; return;
label_C7F0:; return;
label_C7F2:; return;
label_C7F4:; return;
label_C7F6:; return;
label_C7F8:; return;
label_C7FB:; return;
label_C7FD:; return;
label_C7FF:; return;
label_C801:; return;
label_C803:; return;
label_C805:; return;
label_C807:; return;
label_C809:; return;
label_C80B:; return;
label_C80C:; return;
label_C80E:; return;
label_C80F:; return;
label_C811:; return;
label_C812:; return;
label_C813:; return;
label_C815:; return;
label_C816:; return;
label_C818:; return;
label_C81A:; return;
label_C81D:; return;
label_C820:; return;
label_C822:; return;
label_C825:; return;
label_C827:; return;
label_C829:; return;
label_C82C:; return;
label_C82F:; return;
label_C832:; return;
label_C833:; return;
label_C835:; return;
label_C837:; return;
label_C839:; return;
label_C83B:; return;
label_C83D:; return;
label_C83F:; return;
label_C840:; return;
label_C841:; return;
label_C844:; return;
label_C845:; return;
label_C848:; return;
label_C849:; return;
label_C84A:; return;
label_C84C:; return;
label_C84D:; return;
label_C84E:; return;
label_C850:; return;
label_C851:; return;
label_C853:; return;
label_C856:; return;
label_C859:; return;
label_C85C:; return;
label_C85D:; return;
label_C85E:; return;
label_C860:; return;
label_C862:; return;
label_C864:; return;
label_C867:; return;
label_C868:; return;
label_C86A:; return;
label_C86D:; return;
label_C86E:; return;
label_C870:; return;
label_C873:; return;
label_C875:; return;
label_C878:; return;
label_C87B:; return;
label_C87C:; return;
label_C87D:; return;
label_C87F:; return;
label_C881:; return;
label_C884:; return;
label_C887:; return;
label_C88A:; return;
label_C88C:; return;
label_C88E:; return;
label_C891:; return;
label_C892:; return;
label_C895:; return;
label_C898:; return;
label_C89B:; return;
label_C89D:; return;
label_C8A0:; return;
label_C8A1:; return;
label_C8A2:; return;
label_C8A3:; return;
label_C8A4:; return;
label_C8A6:; return;
label_C8A8:; return;
label_C8AA:; return;
label_C8AC:; return;
label_C8AF:; return;
label_C8B1:; return;
label_C8B4:; return;
label_C8B5:; return;
label_C8B6:; return;
label_C8B7:; return;
label_C8B8:; return;
label_C8B9:; return;
label_C8BA:; return;
label_C8BC:; return;
label_C8BE:; return;
label_C8C0:; return;
label_C8C2:; return;
label_C8C4:; return;
label_C8C6:; return;
label_C8C9:; return;
label_C8CC:; return;
label_C8CE:; return;
label_C8D1:; return;
label_C8D4:; return;
label_C8D7:; return;
label_C8DA:; return;
label_C8DD:; return;
label_C8DF:; return;
label_C8E0:; return;
label_C8E2:; return;
label_C8E4:; return;
label_C8E6:; return;
label_C8E9:; return;
label_C8EB:; return;
label_C8ED:; return;
label_C8EF:; return;
label_C8F1:; return;
label_C8F4:; return;
label_C8F7:; return;
label_C8F9:; return;
label_C8FB:; return;
label_C8FD:; return;
label_C8FF:; return;
label_C901:; return;
label_C903:; return;
label_C906:; return;
label_C907:; return;
label_C909:; return;
label_C90B:; return;
label_C90D:; return;
label_C910:; return;
label_C912:; return;
label_C914:; return;
label_C917:; return;
label_C91A:; return;
label_C91D:; return;
label_C91F:; return;
label_C922:; return;
label_C924:; return;
label_C926:; return;
label_C929:; return;
label_C92B:; return;
label_C92D:; return;
label_C92F:; return;
label_C931:; return;
label_C933:; return;
label_C935:; return;
label_C937:; return;
label_C93A:; return;
label_C93D:; return;
label_C93F:; return;
label_C941:; return;
label_C943:; return;
label_C945:; return;
label_C947:; return;
label_C949:; return;
label_C94B:; return;
label_C94D:; return;
label_C94F:; return;
label_C951:; return;
label_C953:; return;
label_C956:; return;
label_C959:; return;
label_C95B:; return;
label_C95D:; return;
label_C95F:; return;
label_C961:; return;
label_C963:; return;
label_C965:; return;
label_C967:; return;
label_C969:; return;
label_C96B:; return;
label_C96D:; return;
label_C970:; return;
label_C973:; return;
label_C975:; return;
label_C977:; return;
label_C979:; return;
label_C97B:; return;
label_C97E:; return;
label_C981:; return;
label_C982:; return;
label_C984:; return;
label_C986:; return;
label_C988:; return;
label_C98A:; return;
label_C98C:; return;
label_C98E:; return;
label_C98F:; return;
label_C991:; return;
label_C994:; return;
label_C996:; return;
label_C997:; return;
label_C999:; return;
label_C99B:; return;
label_C99D:; return;
label_C99F:; return;
label_C9A1:; return;
label_C9A4:; return;
label_C9A6:; return;
label_C9A8:; return;
label_C9AB:; return;
label_C9AE:; return;
label_C9B0:; return;
label_C9B3:; return;
label_C9B5:; return;
label_C9B7:; return;
label_C9B9:; return;
label_C9BB:; return;
label_C9BD:; return;
label_C9BF:; return;
label_C9C1:; return;
label_C9C3:; return;
label_C9C5:; return;
label_C9C7:; return;
label_C9C9:; return;
label_C9CB:; return;
label_C9CD:; return;
label_C9CF:; return;
label_C9D1:; return;
label_C9D3:; return;
label_C9D5:; return;
label_C9D7:; return;
label_C9D9:; return;
label_C9DB:; return;
label_C9DE:; return;
label_C9E0:; return;
label_C9E3:; return;
label_C9E5:; return;
label_C9E7:; return;
label_C9E8:; return;
label_C9EA:; return;
label_C9EC:; return;
label_C9EE:; return;
label_C9F0:; return;
label_C9F3:; return;
label_C9F6:; return;
label_C9F9:; return;
label_C9FC:; return;
label_C9FF:; return;
label_CA02:; return;
label_CA05:; return;
label_CA08:; return;
label_CA09:; return;
label_CA0A:; return;
label_CA0B:; return;
label_CA0C:; return;
label_CA0E:; return;
label_CA10:; return;
label_CA12:; return;
label_CA13:; return;
label_CA15:; return;
label_CA18:; return;
label_CA19:; return;
label_CA1A:; return;
label_CA1B:; return;
label_CA1C:; return;
label_CA1E:; return;
label_CA20:; return;
label_CA22:; return;
label_CA25:; return;
label_CA27:; return;
label_CA29:; return;
label_CA2A:; return;
label_CA2B:; return;
label_CA2D:; return;
label_CA2F:; return;
label_CA31:; return;
label_CA34:; return;
label_CA36:; return;
label_CA38:; return;
label_CA3A:; return;
label_CA3C:; return;
label_CA3E:; return;
label_CA41:; return;
label_CA43:; return;
label_CA46:; return;
label_CA48:; return;
label_CA4B:; return;
label_CA4D:; return;
label_CA50:; return;
label_CA52:; return;
label_CA55:; return;
label_CA57:; return;
label_CA5A:; return;
label_CA5C:; return;
label_CA5F:; return;
label_CA61:; return;
label_CA64:; return;
label_CA66:; return;
label_CA68:; return;
label_CA6B:; return;
label_CA6D:; return;
label_CA6F:; return;
label_CA71:; return;
label_CA73:; return;
label_CA75:; return;
label_CA77:; return;
label_CA79:; return;
label_CA7B:; return;
label_CA7D:; return;
label_CA7F:; return;
label_CA81:; return;
label_CA83:; return;
label_CA85:; return;
label_CA87:; return;
label_CA89:; return;
label_CA8A:; return;
label_CA8C:; return;
label_CA8E:; return;
label_CA90:; return;
label_CA92:; return;
label_CA94:; return;
label_CA97:; return;
label_CA99:; return;
label_CA9C:; return;
label_CA9F:; return;
label_CAA2:; return;
label_CAA4:; return;
label_CAA6:; return;
label_CAA9:; return;
label_CAAB:; return;
label_CAAD:; return;
label_CAAF:; return;
label_CAB2:; return;
label_CAB5:; return;
label_CAB7:; return;
label_CAB9:; return;
label_CABC:; return;
label_CABF:; return;
label_CAC1:; return;
label_CAC3:; return;
label_CAC5:; return;
label_CAC7:; return;
label_CAC9:; return;
label_CACB:; return;
label_CACE:; return;
label_CAD0:; return;
label_CAD3:; return;
label_CAD5:; return;
label_CAD7:; return;
label_CADA:; return;
label_CADC:; return;
label_CADE:; return;
label_CAE0:; return;
label_CAE2:; return;
label_CAE4:; return;
label_CAE6:; return;
label_CAE8:; return;
label_CAE9:; return;
label_CAEB:; return;
label_CAEC:; return;
label_CAEE:; return;
label_CAF0:; return;
label_CAF2:; return;
label_CAF5:; return;
label_CAF7:; return;
label_CAF9:; return;
label_CAFB:; return;
label_CAFE:; return;
label_CB00:; return;
label_CB02:; return;
label_CB04:; return;
label_CB05:; return;
label_CB07:; return;
label_CB0A:; return;
label_CB0D:; return;
label_CB0F:; return;
label_CB11:; return;
label_CB13:; return;
label_CB15:; return;
label_CB18:; return;
label_CB1B:; return;
label_CB1D:; return;
label_CB1F:; return;
label_CB22:; return;
label_CB25:; return;
label_CB28:; return;
label_CB2B:; return;
label_CB2E:; return;
label_CB31:; return;
label_CB34:; return;
label_CB37:; return;
label_CB3A:; return;
label_CB3D:; return;
label_CB3F:; return;
label_CB41:; return;
label_CB43:; return;
label_CB45:; return;
label_CB47:; return;
label_CB49:; return;
label_CB4C:; return;
label_CB4E:; return;
label_CB50:; return;
label_CB52:; return;
label_CB54:; return;
label_CB56:; return;
label_CB58:; return;
label_CB5B:; return;
label_CB5D:; return;
label_CB5F:; return;
label_CB61:; return;
label_CB63:; return;
label_CB65:; return;
label_CB67:; return;
label_CB69:; return;
label_CB6B:; return;
label_CB6D:; return;
label_CB6F:; return;
label_CB72:; return;
label_CB75:; return;
label_CB78:; return;
label_CB7A:; return;
label_CB7C:; return;
label_CB7E:; return;
label_CB80:; return;
label_CB81:; return;
label_CB83:; return;
label_CB85:; return;
label_CB87:; return;
label_CB89:; return;
label_CB8B:; return;
label_CB8D:; return;
label_CB8F:; return;
label_CB90:; return;
label_CB92:; return;
label_CB94:; return;
label_CB96:; return;
label_CB98:; return;
label_CB9A:; return;
label_CB9C:; return;
label_CB9E:; return;
label_CBA0:; return;
label_CBA2:; return;
label_CBA4:; return;
label_CBA7:; return;
label_CBA9:; return;
label_CBAB:; return;
label_CBAE:; return;
label_CBB1:; return;
label_CBB3:; return;
label_CBB5:; return;
label_CBB7:; return;
label_CBB9:; return;
label_CBBB:; return;
label_CBBD:; return;
label_CBBF:; return;
label_CBC1:; return;
label_CBC3:; return;
label_CBC5:; return;
label_CBC8:; return;
label_CBCB:; return;
label_CBCE:; return;
label_CBCF:; return;
label_CBD1:; return;
label_CBD3:; return;
label_CBD5:; return;
label_CBD7:; return;
label_CBD9:; return;
label_CBDB:; return;
label_CBDD:; return;
label_CBDF:; return;
label_CBE1:; return;
label_CBE3:; return;
label_CBE5:; return;
label_CBE7:; return;
label_CBE9:; return;
label_CBEC:; return;
label_CBED:; return;
label_CBEF:; return;
label_CBF1:; return;
label_CBF4:; return;
label_CBF7:; return;
label_CBF9:; return;
label_CBFB:; return;
label_CBFD:; return;
label_CC00:; return;
label_CC03:; return;
label_CC05:; return;
label_CC07:; return;
label_CC09:; return;
label_CC0B:; return;
label_CC0E:; return;
label_CC10:; return;
}

void func_BC6B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC6B_b9");
#endif
    func_BC6B_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDE2_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDE2_b9");
#endif
    func_BC6B_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD82_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD82_b9");
#endif
    func_BC6B_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BEB8_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEB8_b9");
#endif
    func_BC6B_b9_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE6C_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE6C_b9");
#endif
    func_BC6B_b9_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC7D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC7D_b9");
#endif
    func_BC6B_b9_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCC2_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCC2_b9");
#endif
    func_BC6B_b9_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCD2_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCD2_b9");
#endif
    func_BC6B_b9_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCE6_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCE6_b9");
#endif
    func_BC6B_b9_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BCFB_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCFB_b9");
#endif
    func_BC6B_b9_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD50_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD50_b9");
#endif
    func_BC6B_b9_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD81_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD81_b9");
#endif
    func_BC6B_b9_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BDB2_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BDB2_b9");
#endif
    func_BC6B_b9_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE4B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE4B_b9");
#endif
    func_BC6B_b9_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BE9A_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE9A_b9");
#endif
    func_BC6B_b9_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BF14_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BF14_b9");
#endif
    func_BC6B_b9_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BC75_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC75_b9");
#endif
label_BC75:;
    /* $BC75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC75); return;
}

void func_BC7C_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC7C_b9");
#endif
label_BC7C:;
    /* $BC7C: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x24 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC7E:;
    /* $BC7E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x006F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC81:;
    /* $BC81: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC83:;
    /* $BC83: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC85:;
    /* $BC85: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x24); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BC87:;
    /* $BC87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBC87); return;
}

void func_BC99_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC99_b9");
#endif
label_BC99:;
    /* $BC99: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC9B:;
    /* $BC9B: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xE9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BC9D:;
    /* $BC9D: EB */ maybe_trigger_vblank(2); { uint8_t m=0xED; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BC9F:;
    /* $BC9F: EF */ maybe_trigger_vblank(6); { uint16_t a=0x8200; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BCA2:;
    /* $BCA2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BCA4:;
    /* $BCA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBCA4); return;
}

void func_BCFA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BCFA_b9");
#endif
label_BCFA:;
    /* $BCFA: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x73); FLAG_NZ(g_cpu.A);
label_BCFC:;
    /* $BCFC: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x24 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BCFE:;
    /* $BCFE: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_BD00:;
    /* $BD00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD00); return;
}

void func_BD10_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD10_b9");
#endif
label_BD10:;
    /* $BD10: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x00FB + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BD13:;
    /* $BD13: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF2F0 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD16:;
    /* $BD16: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00ED); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD19:;
    /* $BD19: EE */ maybe_trigger_vblank(6); { uint16_t a=0x00FE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD1C:;
    /* $BD1C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD1E:;
    /* $BD1E: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BD20:;
    /* $BD20: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x1CB4), 9); return; }
label_BD22:;
    /* $BD22: 94 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.Y);
label_BD24:;
    /* $BD24: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_BD25:;
    /* $BD25: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_BD26:;
    /* $BD26: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BD29:;
    /* $BD29: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_BD2A:;
    /* $BD2A: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB6 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BD2C:;
    /* $BD2C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_BD2D:;
    /* $BD2D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BD2E:;
    /* $BD2E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xD0BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BD31:;
    /* $BD31: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BD32:;
    /* $BD32: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD34:;
    /* $BD34: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BD35:;
    /* $BD35: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD36:;
    /* $BD36: DC */ maybe_trigger_vblank(4); (void)nes_read((0xF0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD39:;
    /* $BD39: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BD3A:;
    /* $BD3A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD3C:;
    /* $BD3C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD3D:;
    /* $BD3D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD3E:;
    /* $BD3E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x45FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD41:;
    /* $BD41: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x48; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BD43:;
    /* $BD43: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BD44:;
    /* $BD44: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD46:;
    /* $BD46: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x25); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD48:;
    /* $BD48: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4A:;
    /* $BD4A: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x61) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4C:;
    /* $BD4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4C); return;
}

void func_BD30_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD30_b9");
#endif
label_BD30:;
    /* $BD30: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1D04), 9); return; }
label_BD32:;
    /* $BD32: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD34:;
    /* $BD34: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BD35:;
    /* $BD35: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD36:;
    /* $BD36: DC */ maybe_trigger_vblank(4); (void)nes_read((0xF0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD39:;
    /* $BD39: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BD3A:;
    /* $BD3A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD3C:;
    /* $BD3C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD3D:;
    /* $BD3D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD3E:;
    /* $BD3E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x45FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD41:;
    /* $BD41: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x48; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BD43:;
    /* $BD43: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_BD44:;
    /* $BD44: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x62); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD46:;
    /* $BD46: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x25); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD48:;
    /* $BD48: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x25); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4A:;
    /* $BD4A: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x61) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_BD4C:;
    /* $BD4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD4C); return;
}

void func_BD6C_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD6C_b9");
#endif
label_BD6C:;
    /* $BD6C: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDFDE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BD6F:;
    /* $BD6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBD6F); return;
}

void func_BD98_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD98_b9");
#endif
label_BD98:;
    /* $BD98: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1D8C), 9); return; }
label_BD9A:;
    /* $BD9A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD9C:;
    /* $BD9C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD9D:;
    /* $BD9D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD9E:;
    /* $BD9E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x00FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BDA1:;
    /* $BDA1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8B + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BDA3:;
    /* $BDA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA3); return;
}

void func_903B_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_90DA;
        case 2: goto label_9103;
        case 3: goto label_9135;
        case 4: goto label_90C1;
    }
label_903B:;
    /* $903B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0500 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_903E:;
    /* $903E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_908E; }
label_9040:;
    /* $9040: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1042); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9040, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9043:;
    /* $9043: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9091; }
label_9045:;
    /* $9045: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x77; FLAG_NZ(g_cpu.A);
label_9047:;
    /* $9047: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1049); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9047, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_904A:;
    /* $904A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0360 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_904D:;
    /* $904D: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9050:;
    /* $9050: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9053:;
    /* $9053: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9056:;
    /* $9056: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9059:;
    /* $9059: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_905A:;
    /* $905A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x38 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x38); g_cpu.A=r&0xFF; }
label_905C:;
    /* $905C: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_905F:;
    /* $905F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9061:;
    /* $9061: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9064:;
    /* $9064: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_9066:;
    /* $9066: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9069:;
    /* $9069: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_906B:;
    /* $906B: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_906E:;
    /* $906E: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9070:;
    /* $9070: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9072:;
    /* $9072: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9075:;
    /* $9075: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9077:;
    /* $9077: 84 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.Y);
label_9079:;
    /* $9079: 86 */ maybe_trigger_vblank(3); nes_write(0x0E, g_cpu.X);
label_907B:;
    /* $907B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_907D:;
    /* $907D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x107F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC63(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x907D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9080:;
    /* $9080: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x0F); FLAG_NZ(g_cpu.Y);
label_9082:;
    /* $9082: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0E); FLAG_NZ(g_cpu.X);
label_9084:;
    /* $9084: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0C); FLAG_NZ(g_cpu.A);
label_9086:;
    /* $9086: 99 */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9089:;
    /* $9089: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_908B:;
    /* $908B: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_908E:;
    /* $908E: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0500 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9091:;
    /* $9091: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9094:;
    /* $9094: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9108; }
label_9096:; /* main_unknown_14 */
    /* $9096: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0540 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9099:;
    /* $9099: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_909B:;
    /* $909B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_90E1; }
label_909D:;
    /* $909D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x69); FLAG_NZ(g_cpu.A);
label_909F:;
    /* $909F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_90A0:;
    /* $90A0: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0400 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_90A3:;
    /* $90A3: 85 */ maybe_trigger_vblank(3); nes_write(0x69, g_cpu.A);
label_90A5:;
    /* $90A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6A); FLAG_NZ(g_cpu.A);
label_90A7:;
    /* $90A7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0420 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_90AA:;
    /* $90AA: 85 */ maybe_trigger_vblank(3); nes_write(0x6A, g_cpu.A);
label_90AC:;
    /* $90AC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_90AE:;
    /* $90AE: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_90CC; }
label_90B0:;
    /* $90B0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0400 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90B3:;
    /* $90B3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_90B4:;
    /* $90B4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_90B6:;
    /* $90B6: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90B9:;
    /* $90B9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0420 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90BC:;
    /* $90BC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_90BE:;
    /* $90BE: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90C1:;
    /* $90C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_90C3:;
    /* $90C3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_910B; }
label_90C5:;
    /* $90C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90C7:;
    /* $90C7: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90CA:;
    /* $90CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_910B; }
label_90CC:;
    /* $90CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA0; FLAG_NZ(g_cpu.A);
label_90CE:;
    /* $90CE: 85 */ maybe_trigger_vblank(3); nes_write(0x6A, g_cpu.A);
label_90D0:;
    /* $90D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_90D2:;
    /* $90D2: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90D5:;
    /* $90D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_90D7:;
    /* $90D7: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90DA:;
    /* $90DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_90DC:;
    /* $90DC: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90DF:;
    /* $90DF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_910B; }
label_90E1:;
    /* $90E1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x69); FLAG_NZ(g_cpu.A);
label_90E3:;
    /* $90E3: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_90E4:;
    /* $90E4: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0400 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_90E7:;
    /* $90E7: 85 */ maybe_trigger_vblank(3); nes_write(0x69, g_cpu.A);
label_90E9:;
    /* $90E9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6A); FLAG_NZ(g_cpu.A);
label_90EB:;
    /* $90EB: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0420 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_90EE:;
    /* $90EE: 85 */ maybe_trigger_vblank(3); nes_write(0x6A, g_cpu.A);
label_90F0:;
    /* $90F0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_910B; }
label_90F2:;
    /* $90F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90F4:;
    /* $90F4: 85 */ maybe_trigger_vblank(3); nes_write(0x69, g_cpu.A);
label_90F6:;
    /* $90F6: 85 */ maybe_trigger_vblank(3); nes_write(0x6A, g_cpu.A);
label_90F8:;
    /* $90F8: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90FB:;
    /* $90FB: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90FE:;
    /* $90FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF1; FLAG_NZ(g_cpu.A);
label_9100:;
    /* $9100: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9103:;
    /* $9103: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9105:;
    /* $9105: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9108:;
    /* $9108: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_910B:;
    /* $910B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x110D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, 9)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x910B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_910E:;
    /* $910E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04E0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9111:;
    /* $9111: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9166; }
label_9113:;
    /* $9113: 85 */ maybe_trigger_vblank(3); nes_write(0x6A, g_cpu.A);
label_9115:;
    /* $9115: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_9117:;
    /* $9117: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_9119:;
    /* $9119: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_911B:;
    /* $911B: 99 */ maybe_trigger_vblank(5); nes_write((0x0604 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_911E:;
    /* $911E: 99 */ maybe_trigger_vblank(5); nes_write((0x0624 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9121:;
    /* $9121: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9122:;
    /* $9122: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_911B;
    }
label_9124:;
    /* $9124: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9126:;
    /* $9126: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9128:;
    /* $9128: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB167 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_912B:;
    /* $912B: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_912E:;
    /* $912E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_9130:;
    /* $9130: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9135; }
label_9132:;
    /* $9132: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9133:;
    /* $9133: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9128;
    }
label_9135:;
    /* $9135: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_9137:;
    /* $9137: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9139:;
    /* $9139: 8D */ maybe_trigger_vblank(4); nes_write(0x0310, g_cpu.A);
label_913C:;
    /* $913C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_913E:;
    /* $913E: 8D */ maybe_trigger_vblank(4); nes_write(0x0590, g_cpu.A);
label_9141:;
    /* $9141: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6D; FLAG_NZ(g_cpu.A);
label_9143:;
    /* $9143: 8D */ maybe_trigger_vblank(4); nes_write(0x05D0, g_cpu.A);
label_9146:;
    /* $9146: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9148:;
    /* $9148: 8D */ maybe_trigger_vblank(4); nes_write(0x05F0, g_cpu.A);
label_914B:;
    /* $914B: 8D */ maybe_trigger_vblank(4); nes_write(0x05B0, g_cpu.A);
label_914E:;
    /* $914E: 8D */ maybe_trigger_vblank(4); nes_write(0x0490, g_cpu.A);
label_9151:;
    /* $9151: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEF; FLAG_NZ(g_cpu.A);
label_9153:;
    /* $9153: 8D */ maybe_trigger_vblank(4); nes_write(0x0330, g_cpu.A);
label_9156:;
    /* $9156: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA3; FLAG_NZ(g_cpu.A);
label_9158:;
    /* $9158: 8D */ maybe_trigger_vblank(4); nes_write(0x0450, g_cpu.A);
label_915B:;
    /* $915B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_915D:;
    /* $915D: 8D */ maybe_trigger_vblank(4); nes_write(0x0470, g_cpu.A);
label_9160:;
    /* $9160: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9162:;
    /* $9162: 85 */ maybe_trigger_vblank(3); nes_write(0x6A, g_cpu.A);
label_9164:;
    /* $9164: 85 */ maybe_trigger_vblank(3); nes_write(0x6B, g_cpu.A);
label_9166:;
    /* $9166: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_903B_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_903B_b9");
#endif
    func_903B_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90DA_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90DA_b9");
#endif
    func_903B_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9103_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9103_b9");
#endif
    func_903B_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9135_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9135_b9");
#endif
    func_903B_b9_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90C1_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90C1_b9");
#endif
    func_903B_b9_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82C4_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82C4_b9");
#endif
label_82C4:;
    /* $82C4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02C6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x82C4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_82C7:;
    /* $82C7: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_8324; }
label_82C9:;
    /* $82C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x71; FLAG_NZ(g_cpu.A);
label_82CB:;
    /* $82CB: 99 */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82CE:;
    /* $82CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_82D0:;
    /* $82D0: 99 */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82D3:;
    /* $82D3: 99 */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82D6:;
    /* $82D6: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82D9:;
    /* $82D9: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82DC:;
    /* $82DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_82DE:;
    /* $82DE: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82E1:;
    /* $82E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_82E3:;
    /* $82E3: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82E6:;
    /* $82E6: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82E9:;
    /* $82E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_82EB:;
    /* $82EB: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82EE:;
    /* $82EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE2; FLAG_NZ(g_cpu.A);
label_82F0:;
    /* $82F0: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82F3:;
    /* $82F3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_82F5:;
    /* $82F5: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82F8:;
    /* $82F8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_82FA:;
    /* $82FA: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82FD:;
    /* $82FD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_82FF:;
    /* $82FF: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8302:;
    /* $8302: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_8304:;
    /* $8304: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8307:;
    /* $8307: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8308:;
    /* $8308: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_830A:;
    /* $830A: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_830C:;
    /* $830C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x88; g_cpu.C=(g_cpu.A>=0x88)?1:0; FLAG_NZ(r&0xFF); }
label_830E:;
    /* $830E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_831E; }
label_8310:;
    /* $8310: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x04); FLAG_NZ(g_cpu.X);
label_8312:;
    /* $8312: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA700 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8315:;
    /* $8315: 99 */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8318:;
    /* $8318: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA705 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_831B:;
    /* $831B: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_831E:;
    /* $831E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8320:;
    /* $8320: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x48; g_cpu.C=(g_cpu.A>=0x48)?1:0; FLAG_NZ(r&0xFF); }
label_8322:;
    /* $8322: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_82C4;
    }
label_8324:;
    /* $8324: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_8326:;
    /* $8326: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_8328:;
    /* $8328: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_832B:;
    /* $832B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0520 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_832E:;
    /* $832E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0520 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8331:;
    /* $8331: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_8333:;
    /* $8333: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8359; }
label_8335:;
    /* $8335: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x04A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8338:;
    /* $8338: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x03; FLAG_NZ(g_cpu.A);
label_833A:;
    /* $833A: 9D */ maybe_trigger_vblank(5); nes_write((0x04A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_833D:;
    /* $833D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_833F:;
    /* $833F: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8342:;
    /* $8342: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC8; FLAG_NZ(g_cpu.A);
label_8344:;
    /* $8344: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8347:;
    /* $8347: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_8349:;
    /* $8349: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_834C:;
    /* $834C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_834E:;
    /* $834E: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8351:;
    /* $8351: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8353:;
    /* $8353: 9D */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8356:;
    /* $8356: 9D */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8359:;
    /* $8359: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B826_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B826_b9");
#endif
label_B826:;
    /* $B826: EE */ maybe_trigger_vblank(6); { uint16_t a=0xB0D3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B829:;
    /* $B829: EA */ maybe_trigger_vblank(2); /* NOP */
label_B82A:;
    /* $B82A: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B82C:;
    /* $B82C: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xF5)?1:0; g_cpu.X=(t-0xF5)&0xFF; FLAG_NZ(g_cpu.X); }
label_B82E:;
    /* $B82E: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF6F5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B831:;
    /* $B831: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B833:;
    /* $B833: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B835:;
    /* $B835: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B837:;
    /* $B837: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x71); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B839:;
    /* $B839: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDB79 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B83C:;
    /* $B83C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x181C), 9); return; }
label_B83E:;
    /* $B83E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B826;
    }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B834_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B834_b9");
#endif
label_B834:;
    /* $B834: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B836:;
    /* $B836: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE5 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B838:;
    /* $B838: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xDB) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B83A:;
    /* $B83A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB0DB + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B83D:;
    /* $B83D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xE6B0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B834;
    }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B838;
    }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B838_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B847;
    }
label_B838:;
    /* $B838: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xDB) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B83A:;
    /* $B83A: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB0DB + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B83D:;
    /* $B83D: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xE6B0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B840:;
    /* $B840: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7BFD); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B843:;
    /* $B843: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xFEFE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B846:;
    /* $B846: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_B847:;
    /* $B847: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFEFE + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B84A:;
    /* $B84A: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B84B:;
    /* $B84B: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B838;
    }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B838_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B838_b9");
#endif
    func_B838_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B847_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B847_b9");
#endif
    func_B838_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B84E_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B84E_b9");
#endif
label_B84E:;
    /* $B84E: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x7178 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B851:;
    /* $B851: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7A79 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B854:;
    /* $B854: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B856:;
    /* $B856: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xD67C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B859:;
    /* $B859: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xDB + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85B:;
    /* $B85B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1834), 9); return; }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_B84E;
    }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B858_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B85D;
        case 2: goto label_B85F;
    }
label_B858:;
    /* $B858: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B85A:;
    /* $B85A: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xD7B0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85D:;
    /* $B85D: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xB0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B85F:;
    /* $B85F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1838), 9); return; }
label_B861:;
    /* $B861: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_B862:;
    /* $B862: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x184E), 9); return; }
label_B864:;
    /* $B864: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xFDB0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B867:;
    /* $B867: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B869:;
    /* $B869: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x184E), 9); return; }
label_B86B:;
    /* $B86B: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B86D:;
    /* $B86D: EA */ maybe_trigger_vblank(2); /* NOP */
label_B86E:;
    /* $B86E: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B870:;
    /* $B870: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x72) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B872:;
    /* $B872: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B875:;
    /* $B875: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B877:;
    /* $B877: FC */ maybe_trigger_vblank(4); (void)nes_read((0x7170 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B87A:;
    /* $B87A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_B87B:;
    /* $B87B: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7372 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B87E:;
    /* $B87E: FA */ maybe_trigger_vblank(2); /* NOP */
label_B87F:;
    /* $B87F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x7074 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B882:;
    /* $B882: FC */ maybe_trigger_vblank(4); (void)nes_read((0xCEF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCECE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B888:;
    /* $B888: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88B:;
    /* $B88B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_B88C:;
    /* $B88C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF3CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B88F:;
    /* $B88F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xCE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF1F0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B894:;
    /* $B894: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF2CE; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B897:;
    /* $B897: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xCE) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B899:;
    /* $B899: CE */ maybe_trigger_vblank(6); { uint16_t a=0xF0F4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B89C:;
    /* $B89C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B89D:;
    /* $B89D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B89E:;
    /* $B89E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_B8A0:;
    /* $B8A0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_B8A1:;
    /* $B8A1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B8A3:;
    /* $B8A3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B8A4:;
    /* $B8A4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB8A4); return;
}

void func_B858_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B858_b9");
#endif
    func_B858_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B85D_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B85D_b9");
#endif
    func_B858_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B85F_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B85F_b9");
#endif
    func_B858_b9_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD8C_b9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_BD99;
    }
label_BD8C:;
    /* $BD8C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_BD8D:;
    /* $BD8D: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_BD8E:;
    /* $BD8E: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xD0BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_BD91:;
    /* $BD91: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BD92:;
    /* $BD92: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD94:;
    /* $BD94: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_BD95:;
    /* $BD95: DA */ maybe_trigger_vblank(2); /* NOP */
label_BD96:;
    /* $BD96: DC */ maybe_trigger_vblank(4); (void)nes_read((0xF0DE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD99:;
    /* $BD99: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_BD9A:;
    /* $BD9A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BD9C:;
    /* $BD9C: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_BD9D:;
    /* $BD9D: FA */ maybe_trigger_vblank(2); /* NOP */
label_BD9E:;
    /* $BD9E: FC */ maybe_trigger_vblank(4); (void)nes_read((0x00FE + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BDA1:;
    /* $BDA1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8B + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_BDA3:;
    /* $BDA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBDA3); return;
}

void func_BD8C_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD8C_b9");
#endif
    func_BD8C_b9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BD99_b9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BD99_b9");
#endif
    func_BD8C_b9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}
