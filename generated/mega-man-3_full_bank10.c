/* mega-man-3_full_bank10.c — PRG bank 10 function bodies.
 * Generated part of mega-man-3_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_8003_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b10");
#endif
label_8003:;
    /* $8003: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8003); return;
}

void func_8000_b10(void) { /* process_sprites_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b10");
#endif
label_8000:; /* process_sprites_j */
    /* $8000: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8002:;
    /* $8002: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8004:;
    /* $8004: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8007:;
    /* $8007: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8008:;
    /* $8008: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFC00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_800B:;
    /* $800B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_800C:; /* process_sprites */
    /* $800C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_800E:;
    /* $800E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8010:;
    /* $8010: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8012:;
    /* $8012: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8014:;
    /* $8014: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
}

void func_A003_b10(void) { /* main_doc_heat_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A003_b10");
#endif
label_A003:; /* main_doc_heat_j */
    /* $A003: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A004:;
    /* $A004: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1610); FLAG_NZ(g_cpu.A);
label_A007:;
    /* $A007: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A008:;
    /* $A008: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2722 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A00B:;
    /* $A00B: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A00C:; /* main_snake_man_j */
    /* $A00C: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x4541 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A00F:; /* main_wily_machine_B */
    /* $A00F: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4D; FLAG_NZ(g_cpu.A);
label_A011:;
    /* $A011: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A012:; /* main_gemini_man_j */
    /* $A012: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A014:;
    /* $A014: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x6461 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A017:;
    /* $A017: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x6A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A019:;
    /* $A019: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7370); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A01C:; /* main_needle_man */
    /* $A01C: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x7C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A01E:; /* main_gamma_F */
    /* $A01E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A020:;
    /* $A020: 8F */ maybe_trigger_vblank(4); nes_write(0x9692, g_cpu.A & g_cpu.X); /* SAX */
label_A023:;
    /* $A023: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A026:;
    /* $A026: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xB2; FLAG_NZ(g_cpu.A);
label_A028:;
    /* $A028: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A02A:;
    /* $A02A: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xC7; g_cpu.C=(g_cpu.Y>=0xC7)?1:0; FLAG_NZ(r&0xFF); }
label_A02C:;
    /* $A02C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A00C;
    }
label_A02E:;
    /* $A02E: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE4 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A030:; /* main_kamegoro_maker */
    /* $A030: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A031:;
    /* $A031: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF7 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A033:;
    /* $A033: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A036:;
    /* $A036: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1D19; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A039:; /* needle_man_init */
    /* $A039: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x35); FLAG_NZ(g_cpu.A);
label_A03B:;
    /* $A03B: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x413D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x47); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A040:;
    /* $A040: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x5A51); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x67 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A045:;
    /* $A045: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A046:;
    /* $A046: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7B75; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A049:;
    /* $A049: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8B + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A04B:;
    /* $A04B: 8E */ maybe_trigger_vblank(4); nes_write(0x9491, g_cpu.X);
label_A04E:;
    /* $A04E: 97 */ maybe_trigger_vblank(4); nes_write((0x9A + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A050:;
    /* $A050: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A053:;
    /* $A053: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAD; FLAG_NZ(g_cpu.A);
label_A055:;
    /* $A055: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A057:;
    /* $A057: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A058:;
    /* $A058: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A05B:;
    /* $A05B: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD9D3); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A05E:;
    /* $A05E: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xECE2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A061:;
    /* $A061: EF */ maybe_trigger_vblank(6); { uint16_t a=0xF6F3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A064:;
    /* $A064: FA */ maybe_trigger_vblank(2); /* NOP */
label_A065:;
    /* $A065: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0300 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A068:; /* needle_man_throw */
    /* $A068: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_A06A:;
    /* $A06A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1612; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A06D:;
    /* $A06D: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A06E:;
    /* $A06E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2823 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A071:;
    /* $A071: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x3632); FLAG_NZ(g_cpu.A);
label_A074:;
    /* $A074: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3F3C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A077:;
    /* $A077: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4845 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A07A:;
    /* $A07A: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4E; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x54) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x8361 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A081:;
    /* $A081: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A083:;
    /* $A083: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A085:;
    /* $A085: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A087:;
    /* $A087: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A089:;
    /* $A089: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A08B:;
    /* $A08B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A08D:;
    /* $A08D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A08F:;
    /* $A08F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A091:;
    /* $A091: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A093:;
    /* $A093: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A095:;
    /* $A095: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A097:;
    /* $A097: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A099:;
    /* $A099: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A09B:;
    /* $A09B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A09D:;
    /* $A09D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A09F:;
    /* $A09F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A1:;
    /* $A0A1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A3:;
    /* $A0A3: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A5:;
    /* $A0A5: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A7:;
    /* $A0A7: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A9:;
    /* $A0A9: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0AB:;
    /* $A0AB: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0AD:;
    /* $A0AD: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0AF:;
    /* $A0AF: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0B1:;
    /* $A0B1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0B3:;
    /* $A0B3: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x84 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0B5:;
    /* $A0B5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0B7:;
    /* $A0B7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0B9:;
    /* $A0B9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0BB:;
    /* $A0BB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0BD:;
    /* $A0BD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0BF:;
    /* $A0BF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C1:;
    /* $A0C1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C3:;
    /* $A0C3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C5:;
    /* $A0C5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C7:;
    /* $A0C7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C9:;
    /* $A0C9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0CB:;
    /* $A0CB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0CD:;
    /* $A0CD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0CF:;
    /* $A0CF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D1:;
    /* $A0D1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D3:;
    /* $A0D3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D5:;
    /* $A0D5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D7:;
    /* $A0D7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D9:;
    /* $A0D9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0DB:;
    /* $A0DB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0DD:;
    /* $A0DD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0DF:;
    /* $A0DF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0E1:;
    /* $A0E1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0E3:;
    /* $A0E3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0E5:;
    /* $A0E5: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_A0E7:;
    /* $A0E7: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E9:;
    /* $A0E9: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0EB:;
    /* $A0EB: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0ED:;
    /* $A0ED: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0EF:;
    /* $A0EF: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F1:;
    /* $A0F1: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F3:;
    /* $A0F3: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F5:;
    /* $A0F5: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F7:;
    /* $A0F7: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F9:;
    /* $A0F9: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0FB:;
    /* $A0FB: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0FD:;
    /* $A0FD: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0FF:;
    /* $A0FF: 85 */ maybe_trigger_vblank(3); nes_write(0x67, g_cpu.A);
label_A101:;
    /* $A101: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x89; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A103:;
    /* $A103: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xD5; FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A107:;
    /* $A107: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD83 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10A:;
    /* $A10A: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF7) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A10C:;
    /* $A10C: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x7349 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A10F:;
    /* $A10F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD7); FLAG_NZ(g_cpu.A);
label_A111:;
    /* $A111: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0B) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A113:;
    /* $A113: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x3F); FLAG_NZ(g_cpu.A);
label_A115:;
    /* $A115: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x635D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A118:;
    /* $A118: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x75; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A11A:;
    /* $A11A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_A11C:;
    /* $A11C: 99 */ maybe_trigger_vblank(5); nes_write((0xABA3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A11F:;
    /* $A11F: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A121:;
    /* $A121: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A124:;
    /* $A124: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD7) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A126:;
    /* $A126: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xEFE5 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A129:;
    /* $A129: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0D03 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A12C:;
    /* $A12C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x1D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A12E:;
    /* $A12E: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A130:;
    /* $A130: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x89) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A132:;
    /* $A132: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xC7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A134:;
    /* $A134: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBF3 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A137:;
    /* $A137: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x693F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A13A:;
    /* $A13A: 95 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.X) & 0xFF, g_cpu.A);
label_A13C:;
    /* $A13C: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A13E:;
    /* $A13E: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A140:;
    /* $A140: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x936B); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A146:;
    /* $A146: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x33 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A148:;
    /* $A148: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x83 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A14A:;
    /* $A14A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_A14C:;
    /* $A14C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5D27 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A14F:;
    /* $A14F: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x67 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A151:;
    /* $A151: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A153:;
    /* $A153: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xE5; g_cpu.C=(g_cpu.A>=0xE5)?1:0; FLAG_NZ(r&0xFF); }
label_A155:;
    /* $A155: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_A157:;
    /* $A157: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x6D; FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xC1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3B17); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A15E:;
    /* $A15E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x8B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x8B); g_cpu.A=r&0xFF; }
label_A160:;
    /* $A160: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xF5D1); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x613D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A166:;
    /* $A166: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A168:;
    /* $A168: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x17; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A16A:;
    /* $A16A: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x41 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A16C:;
    /* $A16C: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x5F; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A16E:;
    /* $A16E: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x95) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A170:;
    /* $A170: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xE7CB); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A175:;
    /* $A175: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x53 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A177:;
    /* $A177: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x9D87); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A17A:;
    /* $A17A: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xCD) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A17C:;
    /* $A17C: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A17E:;
    /* $A17E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x3B31); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x8961 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A184:;
    /* $A184: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A186:;
    /* $A186: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A188:; /* needle_man_setup_throw */
    /* $A188: CF */ maybe_trigger_vblank(6); { uint16_t a=0xDBD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A18B:;
    /* $A18B: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE5 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A18D:;
    /* $A18D: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x05; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A18F:;
    /* $A18F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x593F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A192:;
    /* $A192: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x91 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A194:;
    /* $A194: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_A196:;
    /* $A196: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE9E3 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A199:;
    /* $A199: EF */ maybe_trigger_vblank(6); { uint16_t a=0x01F5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A19C:;
    /* $A19C: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x33 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A19E:; /* needle_man_throw_vel_y_sub */
    /* $A19E: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x5147 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xA389; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1A4:;
    /* $A1A4: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFBDF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x5537 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1AA:;
    /* $A1AA: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x77) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1AC:;
    /* $A1AC: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x997F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1AF:;
    /* $A1AF: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xDF)?1:0; g_cpu.X=(t-0xDF)&0xFF; FLAG_NZ(g_cpu.X); }
label_A1B3:;
    /* $A1B3: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF3; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1B5:;
    /* $A1B5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1B8:;
    /* $A1B8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0D; FLAG_NZ(g_cpu.A);
label_A1BA:;
    /* $A1BA: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1BC:;
    /* $A1BC: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1BE:;
    /* $A1BE: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x47 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A1C0:;
    /* $A1C0: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A1C2:;
    /* $A1C2: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x77; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A1C4:;
    /* $A1C4: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8F + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A1C6:;
    /* $A1C6: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A1C9:;
    /* $A1C9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xDD; g_cpu.C=(g_cpu.A>=0xDD)?1:0; FLAG_NZ(r&0xFF); }
label_A1CB:;
    /* $A1CB: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xFD; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1CD:;
    /* $A1CD: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1B; FLAG_NZ(g_cpu.A);
label_A1CF:;
    /* $A1CF: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x39; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A1D1:;
    /* $A1D1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x59; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A1D3:;
    /* $A1D3: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1D5:;
    /* $A1D5: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1D7:;
    /* $A1D7: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A1DA:;
    /* $A1DA: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A1DC:;
    /* $A1DC: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1DE:;
    /* $A1DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1F0F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1E1:;
    /* $A1E1: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4D) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A1E3:;
    /* $A1E3: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x7B + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1E5:;
    /* $A1E5: 85 */ maybe_trigger_vblank(3); nes_write(0x8F, g_cpu.A);
label_A1E7:;
    /* $A1E7: 99 */ maybe_trigger_vblank(5); nes_write((0xADA3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1EA:;
    /* $A1EA: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1EC:;
    /* $A1EC: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xD5)?1:0; g_cpu.X=(t-0xD5)&0xFF; FLAG_NZ(g_cpu.X); }
label_A1EE:;
    /* $A1EE: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x2301 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A1F1:;
    /* $A1F1: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x5349); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7167 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F7:;
    /* $A1F7: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x8F85 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1FA:;
    /* $A1FA: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xB3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1FC:;
    /* $A1FC: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xE9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A1FE:;
    /* $A1FE: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A200:; /* enemy_shape_g */
    /* $A200: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A202:;
    /* $A202: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A204:;
    /* $A204: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_A206:;
    /* $A206: 86 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.X);
label_A208:;
    /* $A208: 86 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.X);
label_A20A:;
    /* $A20A: 86 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.X);
label_A20C:;
    /* $A20C: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_A20E:;
    /* $A20E: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_A210:;
    /* $A210: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_A212:;
    /* $A212: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A213:;
    /* $A213: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A214:;
    /* $A214: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A215:;
    /* $A215: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A216:;
    /* $A216: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A217:;
    /* $A217: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A218:;
    /* $A218: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A219:;
    /* $A219: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21A:;
    /* $A21A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21B:;
    /* $A21B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21C:;
    /* $A21C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21D:;
    /* $A21D: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21E:;
    /* $A21E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21F:;
    /* $A21F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A220:;
    /* $A220: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A221:;
    /* $A221: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A222:;
    /* $A222: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A223:;
    /* $A223: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A224:;
    /* $A224: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A225:;
    /* $A225: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A226:;
    /* $A226: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A227:;
    /* $A227: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A228:;
    /* $A228: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A229:;
    /* $A229: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A22A:;
    /* $A22A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A22C:;
    /* $A22C: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A22E:;
    /* $A22E: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A230:;
    /* $A230: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A232:;
    /* $A232: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A234:;
    /* $A234: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A236:;
    /* $A236: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A238:;
    /* $A238: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A239:;
    /* $A239: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23A:;
    /* $A23A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23B:;
    /* $A23B: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23C:;
    /* $A23C: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23D:;
    /* $A23D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23E:;
    /* $A23E: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A240:;
    /* $A240: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A242:;
    /* $A242: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A244:;
    /* $A244: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A246:;
    /* $A246: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8C, g_cpu.Y);
label_A249:;
    /* $A249: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8C, g_cpu.Y);
label_A24C:;
    /* $A24C: 8C */ maybe_trigger_vblank(4); nes_write(0x8D8D, g_cpu.Y);
label_A24F:;
    /* $A24F: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8D, g_cpu.A);
label_A252:;
    /* $A252: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8D, g_cpu.A);
label_A255:;
    /* $A255: 8E */ maybe_trigger_vblank(4); nes_write(0x8E8E, g_cpu.X);
label_A258:;
    /* $A258: 8E */ maybe_trigger_vblank(4); nes_write(0x8E8E, g_cpu.X);
label_A25B:;
    /* $A25B: 8E */ maybe_trigger_vblank(4); nes_write(0x8F8F, g_cpu.X);
label_A25E:;
    /* $A25E: 8F */ maybe_trigger_vblank(4); nes_write(0x8F8F, g_cpu.A & g_cpu.X); /* SAX */
label_A261:;
    /* $A261: 8F */ maybe_trigger_vblank(4); nes_write(0x908F, g_cpu.A & g_cpu.X); /* SAX */
label_A264:;
    /* $A264: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01F6), 10); return; }
label_A266:;
    /* $A266: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01F8), 10); return; }
label_A268:;
    /* $A268: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01FB), 10); return; }
label_A26A:;
    /* $A26A: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A26C:;
    /* $A26C: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A26E:;
    /* $A26E: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A270:;
    /* $A270: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A272:;
    /* $A272: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A274:;
    /* $A274: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A275:;
    /* $A275: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A276:;
    /* $A276: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A277:;
    /* $A277: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A278:;
    /* $A278: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A279:;
    /* $A279: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27A:;
    /* $A27A: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27B:;
    /* $A27B: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27C:;
    /* $A27C: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27D:;
    /* $A27D: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A27F:;
    /* $A27F: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A281:;
    /* $A281: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A283:;
    /* $A283: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A285:;
    /* $A285: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A287:;
    /* $A287: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A289:;
    /* $A289: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A28B:;
    /* $A28B: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A28D:;
    /* $A28D: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A28F:;
    /* $A28F: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A291:;
    /* $A291: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A293:;
    /* $A293: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A295:;
    /* $A295: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A297:;
    /* $A297: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A299:;
    /* $A299: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A29B:;
    /* $A29B: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A29D:;
    /* $A29D: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A29F:;
    /* $A29F: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A1:;
    /* $A2A1: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A3:;
    /* $A2A3: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A5:;
    /* $A2A5: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A7:;
    /* $A2A7: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2A9:;
    /* $A2A9: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2AB:;
    /* $A2AB: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2AD:;
    /* $A2AD: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2AF:;
    /* $A2AF: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B1:;
    /* $A2B1: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B3:;
    /* $A2B3: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B5:;
    /* $A2B5: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B7:;
    /* $A2B7: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2B9:;
    /* $A2B9: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2BB:;
    /* $A2BB: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2BD:;
    /* $A2BD: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2BF:;
    /* $A2BF: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2C1:;
    /* $A2C1: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2C3:;
    /* $A2C3: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2C5:;
    /* $A2C5: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
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

void func_9C00_b10(void) { /* check_new_enemies */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C00_b10");
#endif
label_9C00:; /* check_new_enemies */
    /* $9C00: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8006_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b10");
#endif
label_8006:;
    /* $8006: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8009:;
    /* $8009: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8009); return;
}

void func_800F_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800F_b10");
#endif
label_800F:;
    /* $800F: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8010:;
    /* $8010: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8012:;
    /* $8012: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8014:;
    /* $8014: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
}

void func_8009_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b10");
#endif
label_8009:;
    /* $8009: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8009); return;
}

void func_800C_b10(void) { /* process_sprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800C_b10");
#endif
label_800C:; /* process_sprites */
    /* $800C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_800E:;
    /* $800E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8010:;
    /* $8010: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8012:;
    /* $8012: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8014:;
    /* $8014: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
}

void func_8012_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8012_b10");
#endif
label_8012:;
    /* $8012: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8014:;
    /* $8014: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
}

void func_9000_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9000_b10");
#endif
label_9000:;
    /* $9000: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9000); return;
}

void func_9006_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9006_b10");
#endif
label_9006:;
    /* $9006: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9007:;
    /* $9007: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_9008:;
    /* $9008: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9009:;
    /* $9009: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_901B;
label_900B:;
    /* $900B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_900C:;
    /* $900C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_900E;
label_900E:;
    /* $900E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9010:;
    /* $9010: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF9) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9012:;
    /* $9012: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9014:;
    /* $9014: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9F2 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9017:;
    /* $9017: FA */ maybe_trigger_vblank(2); /* NOP */
label_9018:;
    /* $9018: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF902 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_901B:;
    /* $901B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_901C:;
    /* $901C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_901E:;
    /* $901E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9020:;
    /* $9020: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF6; FLAG_NZ(g_cpu.A);
label_9022:;
    /* $9022: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFE; FLAG_NZ(g_cpu.A);
label_9024:;
    /* $9024: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x06; FLAG_NZ(g_cpu.A);
label_9026:;
    /* $9026: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF1FC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9029:;
    /* $9029: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_902C:;
    /* $902C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF906 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_902F:;
    /* $902F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF6F9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9032:;
    /* $9032: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01EE + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9035:;
    /* $9035: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF601 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9038:;
    /* $9038: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_903A:;
    /* $903A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFA; FLAG_NZ(g_cpu.A);
label_903C:;
    /* $903C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF2; FLAG_NZ(g_cpu.A);
label_903E:;
    /* $903E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF1FC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9041:;
    /* $9041: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9043:;
    /* $9043: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4F9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9046:;
    /* $9046: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FC + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9049:;
    /* $9049: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_904B:;
    /* $904B: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF401); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_904E:;
    /* $904E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9050:;
    /* $9050: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xEC; FLAG_NZ(g_cpu.A);
label_9052:;
    /* $9052: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF4; FLAG_NZ(g_cpu.A);
label_9054:;
    /* $9054: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFC; FLAG_NZ(g_cpu.A);
label_9056:;
    /* $9056: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_9058:;
    /* $9058: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF1F7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_905B:;
    /* $905B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_905D:;
    /* $905D: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04F9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9060:;
    /* $9060: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FC + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9063:;
    /* $9063: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9065:;
    /* $9065: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0401); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9068:;
    /* $9068: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_906A:;
    /* $906A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_906C:;
    /* $906C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_906E:;
    /* $906E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFC; FLAG_NZ(g_cpu.A);
label_9070:;
    /* $9070: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF4; FLAG_NZ(g_cpu.A);
label_9072:;
    /* $9072: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE801 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9075:;
    /* $9075: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFBF0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9078:;
    /* $9078: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x107D), 10); return; }
label_907A:;
    /* $907A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_907B:;
    /* $907B: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04F8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_907E:;
    /* $907E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x907E); return;
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
label_915B:; return;
label_915E:; return;
label_9160:; return;
label_9162:; return;
label_9164:; return;
label_9167:; return;
label_916A:; return;
label_916C:; return;
label_916E:; return;
label_9170:; return;
label_9172:; return;
label_9175:; return;
label_9176:; return;
label_9178:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9181:; return;
label_9182:; return;
label_9185:; return;
label_9186:; return;
label_9188:; return;
label_918A:; return;
label_918C:; return;
label_918F:; return;
label_9190:; return;
label_9192:; return;
label_9194:; return;
label_9196:; return;
label_9198:; return;
label_919B:; return;
label_919C:; return;
label_919F:; return;
label_91A1:; return;
label_91A2:; return;
label_91A4:; return;
label_91A6:; return;
label_91A9:; return;
label_91AC:; return;
label_91AE:; return;
label_91B0:; return;
label_91B2:; return;
label_91B5:; return;
label_91B6:; return;
label_91B9:; return;
label_91BA:; return;
label_91BC:; return;
label_91BE:; return;
label_91C0:; return;
label_91C2:; return;
label_91C5:; return;
label_91C6:; return;
label_91C9:; return;
label_91CA:; return;
label_91CC:; return;
label_91CE:; return;
label_91D0:; return;
label_91D3:; return;
label_91D4:; return;
label_91D7:; return;
label_91D9:; return;
label_91DB:; return;
label_91DE:; return;
label_91E0:; return;
label_91E3:; return;
label_91E5:; return;
label_91E8:; return;
label_91E9:; return;
label_91EB:; return;
label_91EE:; return;
label_91EF:; return;
label_91F2:; return;
label_91F3:; return;
label_91F6:; return;
label_91F7:; return;
label_91FA:; return;
label_91FD:; return;
label_91FE:; return;
label_9200:; return;
label_9202:; return;
label_9204:; return;
label_9205:; return;
label_9207:; return;
label_920A:; return;
label_920B:; return;
label_920D:; return;
label_920F:; return;
label_9212:; return;
label_9213:; return;
label_9216:; return;
label_9219:; return;
label_921C:; return;
label_921F:; return;
label_9221:; return;
label_9224:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922E:; return;
label_9230:; return;
label_9233:; return;
label_9236:; return;
label_9238:; return;
label_923A:; return;
label_923C:; return;
label_923F:; return;
label_9242:; return;
label_9244:; return;
label_9246:; return;
label_9248:; return;
label_924B:; return;
label_924C:; return;
label_924F:; return;
label_9251:; return;
label_9254:; return;
label_9257:; return;
label_925A:; return;
label_925C:; return;
label_925E:; return;
label_9260:; return;
label_9263:; return;
label_9265:; return;
label_9266:; return;
label_9268:; return;
label_926A:; return;
label_926B:; return;
label_926C:; return;
label_926E:; return;
label_9270:; return;
label_9271:; return;
label_9273:; return;
label_9275:; return;
label_9278:; return;
label_9279:; return;
label_927B:; return;
label_927E:; return;
label_9280:; return;
label_9282:; return;
label_9284:; return;
label_9286:; return;
label_9289:; return;
label_928B:; return;
label_928E:; return;
label_9290:; return;
label_9293:; return;
label_9295:; return;
label_9298:; return;
label_929A:; return;
label_929C:; return;
label_929E:; return;
label_92A0:; return;
label_92A2:; return;
label_92A4:; return;
label_92A7:; return;
label_92A9:; return;
label_92AC:; return;
label_92AE:; return;
label_92B0:; return;
label_92B2:; return;
label_92B4:; return;
label_92B6:; return;
label_92B9:; return;
label_92BC:; return;
label_92BE:; return;
label_92C0:; return;
label_92C2:; return;
label_92C5:; return;
label_92C8:; return;
label_92CA:; return;
label_92CD:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D6:; return;
label_92D9:; return;
label_92DC:; return;
label_92DE:; return;
label_92E1:; return;
label_92E4:; return;
label_92E6:; return;
label_92E8:; return;
label_92EA:; return;
label_92ED:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F7:; return;
label_92F8:; return;
label_92FA:; return;
label_92FD:; return;
label_92FF:; return;
label_9302:; return;
label_9305:; return;
label_9307:; return;
label_9309:; return;
label_930A:; return;
label_930C:; return;
label_930E:; return;
label_9311:; return;
label_9312:; return;
label_9315:; return;
label_9316:; return;
label_9318:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_9320:; return;
label_9322:; return;
label_9324:; return;
label_9326:; return;
label_9329:; return;
label_932A:; return;
label_932C:; return;
label_932E:; return;
label_9330:; return;
label_9333:; return;
label_9334:; return;
label_9337:; return;
label_9339:; return;
label_933A:; return;
label_933C:; return;
label_933E:; return;
label_9340:; return;
label_9342:; return;
label_9344:; return;
label_9346:; return;
label_9348:; return;
label_934B:; return;
label_934E:; return;
label_9351:; return;
label_9354:; return;
label_9357:; return;
label_935A:; return;
label_935B:; return;
label_935E:; return;
label_9361:; return;
label_9364:; return;
label_9367:; return;
label_9368:; return;
label_936B:; return;
label_936E:; return;
label_9370:; return;
label_9371:; return;
label_9374:; return;
label_9376:; return;
label_9379:; return;
label_937C:; return;
label_937D:; return;
label_9380:; return;
label_9381:; return;
label_9384:; return;
label_9386:; return;
label_9387:; return;
label_938A:; return;
label_938C:; return;
label_938D:; return;
label_9390:; return;
label_9393:; return;
label_9396:; return;
label_9399:; return;
label_939C:; return;
label_939D:; return;
label_93A0:; return;
label_93A1:; return;
label_93A4:; return;
label_93A5:; return;
label_93A8:; return;
label_93AB:; return;
label_93AD:; return;
label_93B0:; return;
label_93B3:; return;
label_93B6:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93C0:; return;
label_93C1:; return;
label_93C3:; return;
label_93C6:; return;
label_93C9:; return;
label_93CC:; return;
label_93CD:; return;
label_93CF:; return;
label_93D1:; return;
label_93D4:; return;
label_93D7:; return;
label_93DA:; return;
label_93DD:; return;
label_93E0:; return;
label_93E3:; return;
label_93E5:; return;
label_93E8:; return;
label_93E9:; return;
label_93EC:; return;
label_93EF:; return;
label_93F2:; return;
label_93F5:; return;
label_93F8:; return;
label_93FA:; return;
label_93FC:; return;
label_93FF:; return;
label_9402:; return;
label_9405:; return;
label_9408:; return;
label_940B:; return;
label_940D:; return;
label_940F:; return;
label_9411:; return;
label_9413:; return;
label_9416:; return;
label_9418:; return;
label_941B:; return;
label_941D:; return;
label_941F:; return;
label_9421:; return;
label_9424:; return;
label_9427:; return;
label_942A:; return;
label_942D:; return;
label_942F:; return;
label_9431:; return;
label_9433:; return;
label_9435:; return;
label_9436:; return;
label_9439:; return;
label_943B:; return;
label_943D:; return;
label_943F:; return;
label_9441:; return;
label_9444:; return;
label_9447:; return;
label_944A:; return;
label_944D:; return;
label_944F:; return;
label_9451:; return;
label_9453:; return;
label_9456:; return;
label_9459:; return;
label_945C:; return;
label_945F:; return;
label_9462:; return;
label_9464:; return;
label_9465:; return;
label_9467:; return;
label_946A:; return;
label_946C:; return;
label_946F:; return;
label_9472:; return;
label_9475:; return;
label_9477:; return;
label_947A:; return;
label_947D:; return;
label_947F:; return;
label_9482:; return;
label_9485:; return;
label_9487:; return;
label_9489:; return;
label_948B:; return;
label_948D:; return;
label_948F:; return;
label_9491:; return;
label_9493:; return;
label_9495:; return;
label_9497:; return;
label_9499:; return;
label_949B:; return;
label_949D:; return;
label_94A0:; return;
label_94A3:; return;
label_94A5:; return;
label_94A7:; return;
label_94A9:; return;
label_94AB:; return;
label_94AD:; return;
label_94AF:; return;
label_94B1:; return;
label_94B4:; return;
label_94B7:; return;
label_94B9:; return;
label_94BC:; return;
label_94BE:; return;
label_94C0:; return;
label_94C3:; return;
label_94C5:; return;
label_94C8:; return;
label_94CB:; return;
label_94CD:; return;
label_94CE:; return;
label_94D1:; return;
label_94D3:; return;
label_94D6:; return;
label_94D9:; return;
label_94DC:; return;
label_94DF:; return;
label_94E1:; return;
label_94E4:; return;
label_94E7:; return;
label_94EA:; return;
label_94EC:; return;
label_94EF:; return;
label_94F1:; return;
label_94F4:; return;
label_94F7:; return;
label_94F9:; return;
label_94FB:; return;
label_94FE:; return;
label_9501:; return;
label_9503:; return;
label_9505:; return;
label_9507:; return;
label_9509:; return;
label_950B:; return;
label_950D:; return;
label_9510:; return;
label_9513:; return;
label_9516:; return;
label_9519:; return;
label_951B:; return;
label_951D:; return;
label_951F:; return;
label_9521:; return;
label_9523:; return;
label_9526:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9531:; return;
label_9534:; return;
label_9537:; return;
label_953A:; return;
label_953D:; return;
label_953F:; return;
label_9542:; return;
label_9545:; return;
label_9547:; return;
label_9549:; return;
label_954B:; return;
label_954D:; return;
label_954F:; return;
label_9551:; return;
label_9553:; return;
label_9555:; return;
label_9558:; return;
label_955A:; return;
label_955D:; return;
label_955F:; return;
label_9561:; return;
label_9564:; return;
label_9567:; return;
label_9568:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957E:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_9589:; return;
label_958B:; return;
label_958D:; return;
label_958F:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959D:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A5:; return;
label_95A8:; return;
label_95AB:; return;
label_95AE:; return;
label_95B1:; return;
label_95B3:; return;
label_95B5:; return;
label_95B7:; return;
label_95B9:; return;
label_95BC:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C3:; return;
label_95C6:; return;
label_95C9:; return;
label_95CB:; return;
label_95CE:; return;
label_95D0:; return;
label_95D3:; return;
label_95D6:; return;
label_95D9:; return;
label_95DC:; return;
label_95DF:; return;
label_95E2:; return;
label_95E5:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F3:; return;
label_95F5:; return;
label_95F7:; return;
label_95FA:; return;
label_95FD:; return;
label_95FF:; return;
label_9602:; return;
label_9605:; return;
label_9608:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9611:; return;
label_9613:; return;
label_9615:; return;
label_9618:; return;
label_961A:; return;
label_961C:; return;
label_961E:; return;
label_9620:; return;
label_9623:; return;
label_9625:; return;
label_9627:; return;
label_962A:; return;
label_962D:; return;
label_9630:; return;
label_9633:; return;
label_9636:; return;
label_9639:; return;
label_963C:; return;
label_963F:; return;
label_9642:; return;
label_9644:; return;
label_9647:; return;
label_9649:; return;
label_964B:; return;
label_964D:; return;
label_964F:; return;
label_9651:; return;
label_9653:; return;
label_9655:; return;
label_9658:; return;
label_965B:; return;
label_965E:; return;
label_9661:; return;
label_9664:; return;
label_9667:; return;
label_9669:; return;
label_966C:; return;
label_966F:; return;
label_9672:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967C:; return;
label_967F:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968C:; return;
label_968F:; return;
label_9692:; return;
label_9695:; return;
label_9696:; return;
label_9699:; return;
label_969B:; return;
label_969D:; return;
label_96A0:; return;
label_96A3:; return;
label_96A6:; return;
label_96A9:; return;
label_96AB:; return;
label_96AD:; return;
label_96AF:; return;
label_96B1:; return;
label_96B4:; return;
label_96B7:; return;
label_96B9:; return;
label_96BB:; return;
label_96BE:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C7:; return;
label_96C9:; return;
label_96CC:; return;
label_96CF:; return;
label_96D1:; return;
label_96D4:; return;
label_96D7:; return;
label_96D9:; return;
label_96DB:; return;
label_96DD:; return;
label_96DF:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E8:; return;
label_96E9:; return;
label_96EC:; return;
label_96ED:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F5:; return;
label_96F7:; return;
label_96F9:; return;
label_96FB:; return;
label_96FE:; return;
label_96FF:; return;
label_9701:; return;
label_9703:; return;
label_9706:; return;
label_9709:; return;
label_970B:; return;
label_970D:; return;
label_970F:; return;
label_9711:; return;
label_9713:; return;
label_9716:; return;
label_9719:; return;
label_971C:; return;
label_971F:; return;
label_9721:; return;
label_9724:; return;
label_9727:; return;
label_972A:; return;
label_972D:; return;
label_9730:; return;
label_9733:; return;
label_9736:; return;
label_9739:; return;
label_973B:; return;
label_973D:; return;
label_973F:; return;
label_9742:; return;
label_9745:; return;
label_9748:; return;
label_974B:; return;
label_974D:; return;
label_974F:; return;
label_9751:; return;
label_9753:; return;
label_9755:; return;
label_9758:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9761:; return;
label_9763:; return;
label_9765:; return;
label_9767:; return;
label_9769:; return;
label_976B:; return;
label_976D:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9778:; return;
label_977B:; return;
label_977D:; return;
label_977F:; return;
label_9781:; return;
label_9783:; return;
label_9785:; return;
label_9787:; return;
label_9789:; return;
label_978B:; return;
label_978D:; return;
label_9790:; return;
label_9793:; return;
label_9796:; return;
label_9799:; return;
label_979B:; return;
label_979E:; return;
label_97A1:; return;
label_97A3:; return;
label_97A6:; return;
label_97A9:; return;
label_97AB:; return;
label_97AD:; return;
label_97AF:; return;
label_97B1:; return;
label_97B3:; return;
label_97B6:; return;
label_97B9:; return;
label_97BC:; return;
label_97BE:; return;
label_97C1:; return;
label_97C3:; return;
label_97C5:; return;
label_97C8:; return;
label_97CB:; return;
label_97CD:; return;
label_97D0:; return;
label_97D3:; return;
label_97D5:; return;
label_97D8:; return;
label_97DB:; return;
label_97DD:; return;
label_97DF:; return;
label_97E1:; return;
label_97E4:; return;
label_97E7:; return;
label_97E9:; return;
label_97EC:; return;
label_97EF:; return;
label_97F1:; return;
label_97F3:; return;
label_97F5:; return;
label_97F7:; return;
label_97F9:; return;
label_97FC:; return;
label_97FF:; return;
label_9802:; return;
label_9803:; return;
label_9804:; return;
label_9805:; return;
label_9806:; return;
label_9807:; return;
label_9808:; return;
label_980A:; return;
label_980C:; return;
label_980D:; return;
label_980F:; return;
label_9810:; return;
label_9811:; return;
label_9812:; return;
label_9813:; return;
label_9814:; return;
label_9816:; return;
label_9817:; return;
label_9818:; return;
label_9819:; return;
label_981B:; return;
label_981D:; return;
label_981E:; return;
label_9820:; return;
label_9821:; return;
label_9822:; return;
label_9823:; return;
label_9824:; return;
label_9825:; return;
label_9826:; return;
label_9827:; return;
label_9828:; return;
label_9829:; return;
label_982C:; return;
label_982D:; return;
label_982E:; return;
label_982F:; return;
label_9830:; return;
label_9831:; return;
label_9832:; return;
label_9833:; return;
label_9834:; return;
label_9835:; return;
label_9836:; return;
label_9837:; return;
label_9838:; return;
label_9839:; return;
label_983A:; return;
label_983B:; return;
label_983D:; return;
label_983E:; return;
label_983F:; return;
label_9840:; return;
label_9841:; return;
label_9843:; return;
label_9844:; return;
label_9845:; return;
label_9846:; return;
label_9849:; return;
label_984A:; return;
label_984B:; return;
label_984D:; return;
label_984E:; return;
label_984F:; return;
label_9851:; return;
label_9852:; return;
label_9853:; return;
label_9854:; return;
label_9855:; return;
label_9856:; return;
label_9857:; return;
label_9858:; return;
label_9859:; return;
label_985A:; return;
label_985B:; return;
label_985C:; return;
label_985D:; return;
label_985F:; return;
label_9860:; return;
label_9861:; return;
label_9862:; return;
label_9863:; return;
label_9864:; return;
label_9865:; return;
label_9866:; return;
label_9867:; return;
label_9868:; return;
label_9869:; return;
label_986A:; return;
label_986B:; return;
label_986C:; return;
label_986E:; return;
label_986F:; return;
label_9870:; return;
label_9871:; return;
label_9872:; return;
label_9873:; return;
label_9874:; return;
label_9875:; return;
label_9876:; return;
label_9877:; return;
label_9878:; return;
label_9879:; return;
label_987A:; return;
label_987B:; return;
label_987C:; return;
label_987D:; return;
label_987E:; return;
label_9880:; return;
label_9881:; return;
label_9882:; return;
label_9885:; return;
label_9886:; return;
label_9887:; return;
label_9888:; return;
label_9889:; return;
label_988B:; return;
label_988C:; return;
label_988D:; return;
label_988E:; return;
label_988F:; return;
label_9890:; return;
label_9891:; return;
label_9892:; return;
label_9893:; return;
label_9894:; return;
label_9896:; return;
label_9897:; return;
label_9898:; return;
label_9899:; return;
label_989B:; return;
label_989C:; return;
label_989D:; return;
label_989E:; return;
label_989F:; return;
label_98A0:; return;
label_98A1:; return;
label_98A2:; return;
label_98A3:; return;
label_98A4:; return;
label_98A7:; return;
label_98A8:; return;
label_98A9:; return;
label_98AB:; return;
label_98AC:; return;
label_98AD:; return;
label_98AE:; return;
label_98AF:; return;
label_98B0:; return;
label_98B1:; return;
label_98B3:; return;
label_98B4:; return;
label_98B6:; return;
label_98B7:; return;
label_98B8:; return;
label_98B9:; return;
label_98BA:; return;
label_98BB:; return;
label_98BC:; return;
label_98BD:; return;
label_98BE:; return;
label_98BF:; return;
label_98C0:; return;
label_98C1:; return;
label_98C2:; return;
label_98C3:; return;
label_98C5:; return;
label_98C6:; return;
label_98C7:; return;
label_98C8:; return;
label_98C9:; return;
label_98CA:; return;
label_98CB:; return;
label_98CC:; return;
label_98CD:; return;
label_98CE:; return;
label_98CF:; return;
label_98D1:; return;
label_98D2:; return;
label_98D4:; return;
label_98D5:; return;
label_98D6:; return;
label_98D7:; return;
label_98D8:; return;
label_98D9:; return;
label_98DB:; return;
label_98DC:; return;
label_98DD:; return;
label_98DE:; return;
label_98DF:; return;
label_98E1:; return;
label_98E2:; return;
label_98E3:; return;
label_98E4:; return;
label_98E5:; return;
label_98E8:; return;
label_98E9:; return;
label_98EB:; return;
label_98ED:; return;
label_98EF:; return;
label_98F0:; return;
label_98F2:; return;
label_98F5:; return;
label_98F6:; return;
label_98F7:; return;
label_98F9:; return;
label_98FA:; return;
label_98FB:; return;
label_98FD:; return;
label_98FE:; return;
label_98FF:; return;
label_9900:; return;
label_9901:; return;
label_9903:; return;
label_9906:; return;
label_9907:; return;
label_9908:; return;
label_9909:; return;
label_990A:; return;
label_990B:; return;
label_990C:; return;
label_990D:; return;
label_990E:; return;
label_990F:; return;
label_9911:; return;
label_9912:; return;
label_9913:; return;
label_9914:; return;
label_9915:; return;
label_9917:; return;
label_9918:; return;
label_9919:; return;
label_991B:; return;
label_991D:; return;
label_991F:; return;
label_9920:; return;
label_9921:; return;
label_9922:; return;
label_9924:; return;
label_9925:; return;
label_9926:; return;
label_9927:; return;
label_9928:; return;
label_9929:; return;
label_992A:; return;
label_992B:; return;
label_992C:; return;
label_992D:; return;
label_992E:; return;
label_992F:; return;
label_9930:; return;
label_9931:; return;
label_9932:; return;
label_9933:; return;
label_9934:; return;
label_9935:; return;
label_9937:; return;
label_9938:; return;
label_9939:; return;
label_993A:; return;
label_993B:; return;
label_993C:; return;
label_993D:; return;
label_993E:; return;
label_993F:; return;
label_9940:; return;
label_9941:; return;
label_9944:; return;
label_9945:; return;
label_9946:; return;
label_9947:; return;
label_9948:; return;
label_9949:; return;
label_994A:; return;
label_994B:; return;
label_994C:; return;
label_994D:; return;
label_994E:; return;
label_994F:; return;
label_9950:; return;
label_9952:; return;
label_9953:; return;
label_9954:; return;
label_9955:; return;
label_9958:; return;
label_9959:; return;
label_995A:; return;
label_995B:; return;
label_995C:; return;
label_995D:; return;
label_995E:; return;
label_995F:; return;
label_9960:; return;
label_9961:; return;
label_9962:; return;
label_9963:; return;
label_9964:; return;
label_9965:; return;
label_9966:; return;
label_9969:; return;
label_996A:; return;
label_996C:; return;
label_996D:; return;
label_996E:; return;
label_996F:; return;
label_9971:; return;
label_9973:; return;
label_9974:; return;
label_9975:; return;
label_9976:; return;
label_9977:; return;
label_9978:; return;
label_997A:; return;
label_997B:; return;
label_997D:; return;
label_997F:; return;
label_9980:; return;
label_9981:; return;
label_9982:; return;
label_9983:; return;
label_9984:; return;
label_9985:; return;
label_9987:; return;
label_9989:; return;
label_998A:; return;
label_998B:; return;
label_998C:; return;
label_998D:; return;
label_998E:; return;
label_998F:; return;
label_9990:; return;
label_9991:; return;
label_9993:; return;
label_9994:; return;
label_9995:; return;
label_9996:; return;
label_9997:; return;
label_9998:; return;
label_9999:; return;
label_999A:; return;
label_999B:; return;
label_999C:; return;
label_999D:; return;
label_999F:; return;
label_99A0:; return;
label_99A1:; return;
label_99A2:; return;
label_99A3:; return;
label_99A4:; return;
label_99A5:; return;
label_99A6:; return;
label_99A7:; return;
label_99A8:; return;
label_99A9:; return;
label_99AA:; return;
label_99AB:; return;
label_99AC:; return;
label_99AD:; return;
label_99AE:; return;
label_99AF:; return;
label_99B0:; return;
label_99B1:; return;
label_99B2:; return;
label_99B3:; return;
label_99B4:; return;
label_99B5:; return;
label_99B6:; return;
label_99B7:; return;
label_99B8:; return;
label_99B9:; return;
label_99BA:; return;
label_99BB:; return;
label_99BC:; return;
label_99BD:; return;
label_99BF:; return;
label_99C0:; return;
label_99C1:; return;
label_99C2:; return;
label_99C3:; return;
label_99C5:; return;
label_99C6:; return;
label_99C7:; return;
label_99C8:; return;
label_99C9:; return;
label_99CA:; return;
label_99CB:; return;
label_99CC:; return;
label_99CD:; return;
label_99CE:; return;
label_99CF:; return;
label_99D0:; return;
label_99D1:; return;
label_99D2:; return;
label_99D3:; return;
label_99D4:; return;
label_99D5:; return;
label_99D6:; return;
label_99D7:; return;
label_99D8:; return;
label_99D9:; return;
label_99DA:; return;
label_99DB:; return;
label_99DD:; return;
label_99DE:; return;
label_99E1:; return;
label_99E2:; return;
label_99E3:; return;
label_99E5:; return;
label_99E6:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99EC:; return;
label_99ED:; return;
label_99EE:; return;
label_99EF:; return;
label_99F1:; return;
label_99F2:; return;
label_99F3:; return;
label_99F6:; return;
label_99F7:; return;
label_99F8:; return;
label_99F9:; return;
label_99FA:; return;
label_99FB:; return;
label_99FD:; return;
label_99FE:; return;
label_99FF:; return;
label_9A00:; return;
label_9A02:; return;
label_9A03:; return;
label_9A04:; return;
label_9A05:; return;
label_9A06:; return;
label_9A07:; return;
label_9A08:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A0E:; return;
label_9A0F:; return;
label_9A10:; return;
label_9A11:; return;
label_9A12:; return;
label_9A13:; return;
label_9A14:; return;
label_9A16:; return;
label_9A17:; return;
label_9A18:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1C:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A21:; return;
label_9A22:; return;
label_9A23:; return;
label_9A25:; return;
label_9A26:; return;
label_9A29:; return;
label_9A2B:; return;
label_9A2C:; return;
label_9A2D:; return;
label_9A2F:; return;
label_9A30:; return;
label_9A31:; return;
label_9A32:; return;
label_9A33:; return;
label_9A35:; return;
label_9A36:; return;
label_9A37:; return;
label_9A38:; return;
label_9A39:; return;
label_9A3A:; return;
label_9A3B:; return;
label_9A3E:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A43:; return;
label_9A44:; return;
label_9A45:; return;
label_9A46:; return;
label_9A47:; return;
label_9A48:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4B:; return;
label_9A4C:; return;
label_9A4D:; return;
label_9A4E:; return;
label_9A4F:; return;
label_9A50:; return;
label_9A51:; return;
label_9A52:; return;
label_9A53:; return;
label_9A55:; return;
label_9A56:; return;
label_9A57:; return;
label_9A58:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5C:; return;
label_9A5D:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A61:; return;
label_9A62:; return;
label_9A63:; return;
label_9A64:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6A:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A6F:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A74:; return;
label_9A75:; return;
label_9A76:; return;
label_9A77:; return;
label_9A78:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7C:; return;
label_9A7F:; return;
label_9A80:; return;
label_9A81:; return;
label_9A82:; return;
label_9A83:; return;
label_9A84:; return;
label_9A85:; return;
label_9A86:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8C:; return;
label_9A8D:; return;
label_9A8E:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A91:; return;
label_9A92:; return;
label_9A93:; return;
label_9A94:; return;
label_9A95:; return;
label_9A96:; return;
label_9A97:; return;
label_9A98:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9B:; return;
label_9A9C:; return;
label_9A9E:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAC:; return;
label_9AAD:; return;
label_9AAE:; return;
label_9AAF:; return;
label_9AB0:; return;
label_9AB1:; return;
label_9AB2:; return;
label_9AB3:; return;
label_9AB5:; return;
label_9AB6:; return;
label_9AB7:; return;
label_9AB8:; return;
label_9AB9:; return;
label_9ABA:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9ABF:; return;
label_9AC0:; return;
label_9AC1:; return;
label_9AC2:; return;
label_9AC3:; return;
label_9AC5:; return;
label_9AC6:; return;
label_9AC7:; return;
label_9AC8:; return;
label_9AC9:; return;
label_9ACA:; return;
label_9ACB:; return;
label_9ACD:; return;
label_9ACE:; return;
label_9ACF:; return;
label_9AD0:; return;
label_9AD1:; return;
label_9AD2:; return;
label_9AD3:; return;
label_9AD4:; return;
label_9AD5:; return;
label_9AD6:; return;
label_9AD7:; return;
label_9AD9:; return;
label_9ADA:; return;
label_9ADD:; return;
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
label_9AEB:; return;
label_9AED:; return;
label_9AEF:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF4:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF8:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFC:; return;
label_9AFD:; return;
label_9AFE:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B02:; return;
label_9B04:; return;
label_9B05:; return;
label_9B06:; return;
label_9B07:; return;
label_9B08:; return;
label_9B09:; return;
label_9B0A:; return;
label_9B0B:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B10:; return;
label_9B11:; return;
label_9B12:; return;
label_9B14:; return;
label_9B15:; return;
label_9B16:; return;
label_9B17:; return;
label_9B18:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1E:; return;
label_9B21:; return;
label_9B22:; return;
label_9B23:; return;
label_9B24:; return;
label_9B25:; return;
label_9B26:; return;
label_9B27:; return;
label_9B28:; return;
label_9B29:; return;
label_9B2A:; return;
label_9B2B:; return;
label_9B2C:; return;
label_9B2D:; return;
label_9B2E:; return;
label_9B2F:; return;
label_9B30:; return;
label_9B31:; return;
label_9B32:; return;
label_9B33:; return;
label_9B34:; return;
label_9B35:; return;
label_9B36:; return;
label_9B37:; return;
label_9B38:; return;
label_9B39:; return;
label_9B3A:; return;
label_9B3B:; return;
label_9B3C:; return;
label_9B3D:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B42:; return;
label_9B44:; return;
label_9B45:; return;
label_9B46:; return;
label_9B47:; return;
label_9B48:; return;
label_9B49:; return;
label_9B4A:; return;
label_9B4B:; return;
label_9B4D:; return;
label_9B4E:; return;
label_9B4F:; return;
label_9B50:; return;
label_9B51:; return;
label_9B52:; return;
label_9B53:; return;
label_9B56:; return;
label_9B57:; return;
label_9B58:; return;
label_9B59:; return;
label_9B5A:; return;
label_9B5B:; return;
label_9B5C:; return;
label_9B5D:; return;
label_9B5E:; return;
label_9B61:; return;
label_9B63:; return;
label_9B64:; return;
label_9B65:; return;
label_9B67:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6B:; return;
label_9B6C:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B73:; return;
label_9B74:; return;
label_9B75:; return;
label_9B76:; return;
label_9B77:; return;
label_9B78:; return;
label_9B79:; return;
label_9B7A:; return;
label_9B7B:; return;
label_9B7D:; return;
label_9B7E:; return;
label_9B80:; return;
label_9B82:; return;
label_9B83:; return;
label_9B84:; return;
label_9B85:; return;
label_9B86:; return;
label_9B87:; return;
label_9B88:; return;
label_9B8B:; return;
label_9B8E:; return;
label_9B8F:; return;
label_9B90:; return;
label_9B92:; return;
label_9B93:; return;
label_9B94:; return;
label_9B95:; return;
label_9B96:; return;
label_9B97:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9D:; return;
label_9B9F:; return;
label_9BA1:; return;
label_9BA2:; return;
label_9BA3:; return;
label_9BA5:; return;
label_9BA6:; return;
label_9BA7:; return;
label_9BA8:; return;
label_9BA9:; return;
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
label_9BC3:; return;
label_9BC5:; return;
label_9BC6:; return;
label_9BC7:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCB:; return;
label_9BCC:; return;
label_9BCD:; return;
label_9BCE:; return;
label_9BCF:; return;
label_9BD2:; return;
label_9BD3:; return;
label_9BD4:; return;
label_9BD5:; return;
label_9BD6:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDC:; return;
label_9BDD:; return;
label_9BDE:; return;
label_9BE0:; return;
label_9BE1:; return;
label_9BE2:; return;
label_9BE4:; return;
label_9BE5:; return;
label_9BE6:; return;
label_9BE7:; return;
label_9BE8:; return;
label_9BE9:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BED:; return;
label_9BEE:; return;
label_9BEF:; return;
label_9BF0:; return;
label_9BF1:; return;
label_9BF2:; return;
label_9BF3:; return;
label_9BF4:; return;
label_9BF5:; return;
label_9BF7:; return;
label_9BFA:; return;
label_9BFB:; return;
label_9BFD:; return;
label_9BFE:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C02:; return;
label_9C04:; return;
label_9C06:; return;
label_9C07:; return;
label_9C08:; return;
label_9C0A:; return;
label_9C0B:; return;
label_9C0C:; return;
label_9C0D:; return;
label_9C0E:; return;
label_9C0F:; return;
label_9C10:; return;
label_9C11:; return;
label_9C12:; return;
label_9C14:; return;
label_9C15:; return;
label_9C16:; return;
label_9C17:; return;
label_9C18:; return;
label_9C19:; return;
label_9C1A:; return;
label_9C1B:; return;
label_9C1C:; return;
label_9C1D:; return;
label_9C1E:; return;
label_9C1F:; return;
label_9C21:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2B:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C2F:; return;
label_9C30:; return;
label_9C33:; return;
label_9C34:; return;
label_9C35:; return;
label_9C36:; return;
label_9C39:; return;
label_9C3A:; return;
label_9C3B:; return;
label_9C3C:; return;
label_9C3D:; return;
label_9C3E:; return;
label_9C41:; return;
label_9C42:; return;
label_9C44:; return;
label_9C46:; return;
label_9C47:; return;
label_9C49:; return;
label_9C4A:; return;
label_9C4B:; return;
label_9C4C:; return;
label_9C4E:; return;
label_9C50:; return;
label_9C51:; return;
label_9C53:; return;
label_9C54:; return;
label_9C55:; return;
label_9C56:; return;
label_9C57:; return;
label_9C58:; return;
label_9C5A:; return;
label_9C5B:; return;
label_9C5C:; return;
label_9C5D:; return;
label_9C5E:; return;
label_9C5F:; return;
label_9C60:; return;
label_9C61:; return;
label_9C63:; return;
label_9C65:; return;
label_9C66:; return;
label_9C68:; return;
label_9C69:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C70:; return;
label_9C71:; return;
label_9C73:; return;
label_9C74:; return;
label_9C76:; return;
label_9C77:; return;
label_9C78:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C81:; return;
label_9C83:; return;
label_9C84:; return;
label_9C85:; return;
label_9C87:; return;
label_9C88:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8C:; return;
label_9C8D:; return;
label_9C8E:; return;
label_9C8F:; return;
label_9C90:; return;
label_9C92:; return;
label_9C95:; return;
label_9C96:; return;
label_9C97:; return;
label_9C98:; return;
label_9C99:; return;
label_9C9A:; return;
label_9C9B:; return;
label_9C9C:; return;
label_9C9D:; return;
label_9C9E:; return;
label_9C9F:; return;
label_9CA0:; return;
label_9CA3:; return;
label_9CA4:; return;
label_9CA5:; return;
label_9CA6:; return;
label_9CA7:; return;
label_9CA8:; return;
label_9CA9:; return;
label_9CAA:; return;
label_9CAB:; return;
label_9CAD:; return;
label_9CAE:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB3:; return;
label_9CB4:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBB:; return;
label_9CBD:; return;
label_9CBE:; return;
label_9CBF:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC3:; return;
label_9CC5:; return;
label_9CC6:; return;
label_9CC7:; return;
label_9CC8:; return;
label_9CC9:; return;
label_9CCB:; return;
label_9CCD:; return;
label_9CCE:; return;
label_9CCF:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD3:; return;
label_9CD4:; return;
label_9CD5:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CD9:; return;
label_9CDA:; return;
label_9CDB:; return;
label_9CDD:; return;
label_9CDF:; return;
label_9CE1:; return;
label_9CE3:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEB:; return;
label_9CEC:; return;
label_9CED:; return;
label_9CEE:; return;
label_9CF0:; return;
label_9CF2:; return;
label_9CF4:; return;
label_9CF6:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9CFF:; return;
label_9D01:; return;
label_9D02:; return;
label_9D05:; return;
label_9D07:; return;
label_9D08:; return;
label_9D0A:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0F:; return;
label_9D10:; return;
label_9D11:; return;
label_9D12:; return;
label_9D13:; return;
label_9D15:; return;
label_9D16:; return;
label_9D17:; return;
label_9D18:; return;
label_9D19:; return;
label_9D1A:; return;
label_9D1C:; return;
label_9D1D:; return;
label_9D1E:; return;
label_9D1F:; return;
label_9D20:; return;
label_9D23:; return;
label_9D24:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2A:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2E:; return;
label_9D2F:; return;
label_9D30:; return;
label_9D32:; return;
label_9D34:; return;
label_9D35:; return;
label_9D36:; return;
label_9D37:; return;
label_9D38:; return;
label_9D39:; return;
label_9D3A:; return;
label_9D3C:; return;
label_9D3D:; return;
label_9D3E:; return;
label_9D3F:; return;
label_9D40:; return;
label_9D41:; return;
label_9D42:; return;
label_9D45:; return;
label_9D46:; return;
label_9D47:; return;
label_9D48:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4F:; return;
label_9D51:; return;
label_9D52:; return;
label_9D54:; return;
label_9D56:; return;
label_9D57:; return;
label_9D58:; return;
label_9D59:; return;
label_9D5A:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D61:; return;
label_9D63:; return;
label_9D64:; return;
label_9D66:; return;
label_9D69:; return;
label_9D6B:; return;
label_9D6E:; return;
label_9D6F:; return;
label_9D70:; return;
label_9D72:; return;
label_9D75:; return;
label_9D76:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7D:; return;
label_9D7F:; return;
label_9D81:; return;
label_9D82:; return;
label_9D85:; return;
label_9D86:; return;
label_9D88:; return;
label_9D89:; return;
label_9D8A:; return;
label_9D8B:; return;
label_9D8C:; return;
label_9D8E:; return;
label_9D8F:; return;
label_9D91:; return;
label_9D92:; return;
label_9D93:; return;
label_9D95:; return;
label_9D96:; return;
label_9D98:; return;
label_9D99:; return;
label_9D9B:; return;
label_9D9D:; return;
label_9D9E:; return;
label_9D9F:; return;
label_9DA0:; return;
label_9DA2:; return;
label_9DA3:; return;
label_9DA4:; return;
label_9DA5:; return;
label_9DA7:; return;
label_9DA9:; return;
label_9DAA:; return;
label_9DAC:; return;
label_9DAE:; return;
label_9DB0:; return;
label_9DB1:; return;
label_9DB2:; return;
label_9DB3:; return;
label_9DB4:; return;
}

void func_9003_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9003_b10");
#endif
label_9003:;
    /* $9003: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9004:;
    /* $9004: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9005:;
    /* $9005: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9005); return;
}

void func_A000_b10(void) { /* main_needle_man_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A000_b10");
#endif
label_A000:; /* main_needle_man_j */
    /* $A000: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA000); return;
}

void func_8110_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8110_b10");
#endif
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

void func_A006_b10(void) { /* main_doc_quick_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A006_b10");
#endif
label_A006:; /* main_doc_quick_j */
    /* $A006: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A008:;
    /* $A008: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2722 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A00B:;
    /* $A00B: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A00C:; /* main_snake_man_j */
    /* $A00C: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x4541 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A00F:; /* main_wily_machine_B */
    /* $A00F: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4D; FLAG_NZ(g_cpu.A);
label_A011:;
    /* $A011: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A012:; /* main_gemini_man_j */
    /* $A012: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A014:;
    /* $A014: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x6461 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A017:;
    /* $A017: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x6A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A019:;
    /* $A019: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7370); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A01C:; /* main_needle_man */
    /* $A01C: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x7C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A01E:; /* main_gamma_F */
    /* $A01E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A020:;
    /* $A020: 8F */ maybe_trigger_vblank(4); nes_write(0x9692, g_cpu.A & g_cpu.X); /* SAX */
label_A023:;
    /* $A023: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A026:;
    /* $A026: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xB2; FLAG_NZ(g_cpu.A);
label_A028:;
    /* $A028: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A02A:;
    /* $A02A: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xC7; g_cpu.C=(g_cpu.Y>=0xC7)?1:0; FLAG_NZ(r&0xFF); }
label_A02C:;
    /* $A02C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A00C;
    }
label_A02E:;
    /* $A02E: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE4 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A030:; /* main_kamegoro_maker */
    /* $A030: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A031:;
    /* $A031: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF7 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A033:;
    /* $A033: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0803 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A036:;
    /* $A036: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1D19; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A039:; /* needle_man_init */
    /* $A039: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x35); FLAG_NZ(g_cpu.A);
label_A03B:;
    /* $A03B: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x413D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03E:;
    /* $A03E: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x47); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A040:;
    /* $A040: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x5A51); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x67 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A045:;
    /* $A045: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A046:;
    /* $A046: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7B75; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A049:;
    /* $A049: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8B + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A04B:;
    /* $A04B: 8E */ maybe_trigger_vblank(4); nes_write(0x9491, g_cpu.X);
label_A04E:;
    /* $A04E: 97 */ maybe_trigger_vblank(4); nes_write((0x9A + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A050:;
    /* $A050: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A053:;
    /* $A053: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAD; FLAG_NZ(g_cpu.A);
label_A055:;
    /* $A055: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xB5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A057:;
    /* $A057: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A058:;
    /* $A058: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A05B:;
    /* $A05B: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD9D3); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A05E:;
    /* $A05E: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xECE2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A061:;
    /* $A061: EF */ maybe_trigger_vblank(6); { uint16_t a=0xF6F3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A064:;
    /* $A064: FA */ maybe_trigger_vblank(2); /* NOP */
label_A065:;
    /* $A065: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0300 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A068:; /* needle_man_throw */
    /* $A068: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_A06A:;
    /* $A06A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1612; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A06D:;
    /* $A06D: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A06E:;
    /* $A06E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2823 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A071:;
    /* $A071: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x3632); FLAG_NZ(g_cpu.A);
label_A074:;
    /* $A074: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3F3C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A077:;
    /* $A077: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4845 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A07A:;
    /* $A07A: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4E; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A07C:;
    /* $A07C: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x54) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07E:;
    /* $A07E: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x8361 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A081:;
    /* $A081: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A083:;
    /* $A083: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A085:;
    /* $A085: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A087:;
    /* $A087: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A089:;
    /* $A089: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A08B:;
    /* $A08B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A08D:;
    /* $A08D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A08F:;
    /* $A08F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A091:;
    /* $A091: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A093:;
    /* $A093: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A095:;
    /* $A095: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A097:;
    /* $A097: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A099:;
    /* $A099: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A09B:;
    /* $A09B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A09D:;
    /* $A09D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A09F:;
    /* $A09F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A1:;
    /* $A0A1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A3:;
    /* $A0A3: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A5:;
    /* $A0A5: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A7:;
    /* $A0A7: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0A9:;
    /* $A0A9: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0AB:;
    /* $A0AB: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0AD:;
    /* $A0AD: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0AF:;
    /* $A0AF: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0B1:;
    /* $A0B1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0B3:;
    /* $A0B3: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x84 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A0B5:;
    /* $A0B5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0B7:;
    /* $A0B7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0B9:;
    /* $A0B9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0BB:;
    /* $A0BB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0BD:;
    /* $A0BD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0BF:;
    /* $A0BF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C1:;
    /* $A0C1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C3:;
    /* $A0C3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C5:;
    /* $A0C5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C7:;
    /* $A0C7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0C9:;
    /* $A0C9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0CB:;
    /* $A0CB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0CD:;
    /* $A0CD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0CF:;
    /* $A0CF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D1:;
    /* $A0D1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D3:;
    /* $A0D3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D5:;
    /* $A0D5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D7:;
    /* $A0D7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0D9:;
    /* $A0D9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0DB:;
    /* $A0DB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0DD:;
    /* $A0DD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0DF:;
    /* $A0DF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0E1:;
    /* $A0E1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0E3:;
    /* $A0E3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_A0E5:;
    /* $A0E5: 84 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.Y);
label_A0E7:;
    /* $A0E7: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E9:;
    /* $A0E9: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0EB:;
    /* $A0EB: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0ED:;
    /* $A0ED: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0EF:;
    /* $A0EF: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F1:;
    /* $A0F1: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F3:;
    /* $A0F3: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F5:;
    /* $A0F5: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F7:;
    /* $A0F7: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0F9:;
    /* $A0F9: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0FB:;
    /* $A0FB: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0FD:;
    /* $A0FD: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0FF:;
    /* $A0FF: 85 */ maybe_trigger_vblank(3); nes_write(0x67, g_cpu.A);
label_A101:;
    /* $A101: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x89; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A103:;
    /* $A103: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xD5; FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A107:;
    /* $A107: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD83 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10A:;
    /* $A10A: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF7) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A10C:;
    /* $A10C: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x7349 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A10F:;
    /* $A10F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xD7); FLAG_NZ(g_cpu.A);
label_A111:;
    /* $A111: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0B) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A113:;
    /* $A113: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x3F); FLAG_NZ(g_cpu.A);
label_A115:;
    /* $A115: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x635D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A118:;
    /* $A118: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x75; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A11A:;
    /* $A11A: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8D + g_cpu.X) & 0xFF), g_cpu.A);
label_A11C:;
    /* $A11C: 99 */ maybe_trigger_vblank(5); nes_write((0xABA3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A11F:;
    /* $A11F: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xB7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A121:;
    /* $A121: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A124:;
    /* $A124: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD7) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A126:;
    /* $A126: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xEFE5 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A129:;
    /* $A129: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0D03 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A12C:;
    /* $A12C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x1D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A12E:;
    /* $A12E: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A130:;
    /* $A130: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x89) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A132:;
    /* $A132: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xC7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A134:;
    /* $A134: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBF3 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A137:;
    /* $A137: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x693F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A13A:;
    /* $A13A: 95 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.X) & 0xFF, g_cpu.A);
label_A13C:;
    /* $A13C: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A13E:;
    /* $A13E: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x31) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A140:;
    /* $A140: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x936B); FLAG_NZ(g_cpu.A);
label_A143:;
    /* $A143: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A146:;
    /* $A146: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x33 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A148:;
    /* $A148: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x83 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A14A:;
    /* $A14A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xC7); FLAG_NZ(g_cpu.A);
label_A14C:;
    /* $A14C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5D27 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A14F:;
    /* $A14F: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x67 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A151:;
    /* $A151: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A153:;
    /* $A153: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xE5; g_cpu.C=(g_cpu.A>=0xE5)?1:0; FLAG_NZ(r&0xFF); }
label_A155:;
    /* $A155: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x25); FLAG_NZ(g_cpu.A);
label_A157:;
    /* $A157: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x6D; FLAG_NZ(g_cpu.A);
label_A159:;
    /* $A159: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xC1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A15B:;
    /* $A15B: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3B17); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A15E:;
    /* $A15E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x8B + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x8B); g_cpu.A=r&0xFF; }
label_A160:;
    /* $A160: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xF5D1); FLAG_NZ(g_cpu.A);
label_A163:;
    /* $A163: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x613D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A166:;
    /* $A166: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A168:;
    /* $A168: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x17; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A16A:;
    /* $A16A: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x41 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A16C:;
    /* $A16C: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x5F; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A16E:;
    /* $A16E: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x95) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A170:;
    /* $A170: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xE7CB); FLAG_NZ(g_cpu.A);
label_A173:;
    /* $A173: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A175:;
    /* $A175: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x53 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A177:;
    /* $A177: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x9D87); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A17A:;
    /* $A17A: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xCD) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A17C:;
    /* $A17C: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A17E:;
    /* $A17E: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x3B31); FLAG_NZ(g_cpu.A);
label_A181:;
    /* $A181: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x8961 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A184:;
    /* $A184: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A186:;
    /* $A186: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A188:; /* needle_man_setup_throw */
    /* $A188: CF */ maybe_trigger_vblank(6); { uint16_t a=0xDBD5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A18B:;
    /* $A18B: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE5 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A18D:;
    /* $A18D: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x05; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A18F:;
    /* $A18F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x593F + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A192:;
    /* $A192: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x91 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A194:;
    /* $A194: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_A196:;
    /* $A196: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE9E3 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A199:;
    /* $A199: EF */ maybe_trigger_vblank(6); { uint16_t a=0x01F5; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A19C:;
    /* $A19C: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x33 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A19E:; /* needle_man_throw_vel_y_sub */
    /* $A19E: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x5147 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1A1:;
    /* $A1A1: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xA389; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1A4:;
    /* $A1A4: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xFBDF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1A7:;
    /* $A1A7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x5537 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1AA:;
    /* $A1AA: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x77) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1AC:;
    /* $A1AC: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x997F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1AF:;
    /* $A1AF: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xC7) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1B1:;
    /* $A1B1: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xDF)?1:0; g_cpu.X=(t-0xDF)&0xFF; FLAG_NZ(g_cpu.X); }
label_A1B3:;
    /* $A1B3: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF3; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1B5:;
    /* $A1B5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0501 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1B8:;
    /* $A1B8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0D; FLAG_NZ(g_cpu.A);
label_A1BA:;
    /* $A1BA: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1BC:;
    /* $A1BC: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1BE:;
    /* $A1BE: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x47 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A1C0:;
    /* $A1C0: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5F) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A1C2:;
    /* $A1C2: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x77; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A1C4:;
    /* $A1C4: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x8F + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_A1C6:;
    /* $A1C6: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A1C9:;
    /* $A1C9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xDD; g_cpu.C=(g_cpu.A>=0xDD)?1:0; FLAG_NZ(r&0xFF); }
label_A1CB:;
    /* $A1CB: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xFD; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1CD:;
    /* $A1CD: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x1B; FLAG_NZ(g_cpu.A);
label_A1CF:;
    /* $A1CF: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x39; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A1D1:;
    /* $A1D1: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x59; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A1D3:;
    /* $A1D3: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1D5:;
    /* $A1D5: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1D7:;
    /* $A1D7: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A1DA:;
    /* $A1DA: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A1DC:;
    /* $A1DC: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1DE:;
    /* $A1DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1F0F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1E1:;
    /* $A1E1: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4D) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A1E3:;
    /* $A1E3: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x7B + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1E5:;
    /* $A1E5: 85 */ maybe_trigger_vblank(3); nes_write(0x8F, g_cpu.A);
label_A1E7:;
    /* $A1E7: 99 */ maybe_trigger_vblank(5); nes_write((0xADA3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A1EA:;
    /* $A1EA: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC1 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1EC:;
    /* $A1EC: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xD5)?1:0; g_cpu.X=(t-0xD5)&0xFF; FLAG_NZ(g_cpu.X); }
label_A1EE:;
    /* $A1EE: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x2301 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A1F1:;
    /* $A1F1: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x5349); FLAG_NZ(g_cpu.A);
label_A1F4:;
    /* $A1F4: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7167 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F7:;
    /* $A1F7: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x8F85 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1FA:;
    /* $A1FA: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xB3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A1FC:;
    /* $A1FC: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xE9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A1FE:;
    /* $A1FE: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A200:; /* enemy_shape_g */
    /* $A200: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A202:;
    /* $A202: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A204:;
    /* $A204: 85 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.A);
label_A206:;
    /* $A206: 86 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.X);
label_A208:;
    /* $A208: 86 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.X);
label_A20A:;
    /* $A20A: 86 */ maybe_trigger_vblank(3); nes_write(0x86, g_cpu.X);
label_A20C:;
    /* $A20C: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_A20E:;
    /* $A20E: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_A210:;
    /* $A210: 87 */ maybe_trigger_vblank(3); nes_write(0x87, g_cpu.A & g_cpu.X); /* SAX */
label_A212:;
    /* $A212: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A213:;
    /* $A213: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A214:;
    /* $A214: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A215:;
    /* $A215: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A216:;
    /* $A216: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A217:;
    /* $A217: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A218:;
    /* $A218: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A219:;
    /* $A219: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21A:;
    /* $A21A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21B:;
    /* $A21B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21C:;
    /* $A21C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21D:;
    /* $A21D: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21E:;
    /* $A21E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A21F:;
    /* $A21F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A220:;
    /* $A220: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A221:;
    /* $A221: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A222:;
    /* $A222: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A223:;
    /* $A223: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A224:;
    /* $A224: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A225:;
    /* $A225: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A226:;
    /* $A226: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A227:;
    /* $A227: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A228:;
    /* $A228: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A229:;
    /* $A229: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A22A:;
    /* $A22A: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A22C:;
    /* $A22C: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A22E:;
    /* $A22E: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A230:;
    /* $A230: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A232:;
    /* $A232: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A234:;
    /* $A234: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A236:;
    /* $A236: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A238:;
    /* $A238: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A239:;
    /* $A239: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23A:;
    /* $A23A: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23B:;
    /* $A23B: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23C:;
    /* $A23C: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23D:;
    /* $A23D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A23E:;
    /* $A23E: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A240:;
    /* $A240: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A242:;
    /* $A242: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A244:;
    /* $A244: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_A246:;
    /* $A246: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8C, g_cpu.Y);
label_A249:;
    /* $A249: 8C */ maybe_trigger_vblank(4); nes_write(0x8C8C, g_cpu.Y);
label_A24C:;
    /* $A24C: 8C */ maybe_trigger_vblank(4); nes_write(0x8D8D, g_cpu.Y);
label_A24F:;
    /* $A24F: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8D, g_cpu.A);
label_A252:;
    /* $A252: 8D */ maybe_trigger_vblank(4); nes_write(0x8D8D, g_cpu.A);
label_A255:;
    /* $A255: 8E */ maybe_trigger_vblank(4); nes_write(0x8E8E, g_cpu.X);
label_A258:;
    /* $A258: 8E */ maybe_trigger_vblank(4); nes_write(0x8E8E, g_cpu.X);
label_A25B:;
    /* $A25B: 8E */ maybe_trigger_vblank(4); nes_write(0x8F8F, g_cpu.X);
label_A25E:;
    /* $A25E: 8F */ maybe_trigger_vblank(4); nes_write(0x8F8F, g_cpu.A & g_cpu.X); /* SAX */
label_A261:;
    /* $A261: 8F */ maybe_trigger_vblank(4); nes_write(0x908F, g_cpu.A & g_cpu.X); /* SAX */
label_A264:;
    /* $A264: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01F6), 10); return; }
label_A266:;
    /* $A266: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01F8), 10); return; }
label_A268:;
    /* $A268: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01FB), 10); return; }
label_A26A:;
    /* $A26A: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A26C:;
    /* $A26C: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A26E:;
    /* $A26E: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A270:;
    /* $A270: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x91) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A272:;
    /* $A272: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A274:;
    /* $A274: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A275:;
    /* $A275: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A276:;
    /* $A276: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A277:;
    /* $A277: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A278:;
    /* $A278: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A279:;
    /* $A279: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27A:;
    /* $A27A: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27B:;
    /* $A27B: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27C:;
    /* $A27C: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A27D:;
    /* $A27D: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A27F:;
    /* $A27F: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A281:;
    /* $A281: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A283:;
    /* $A283: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A285:;
    /* $A285: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A287:;
    /* $A287: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A289:;
    /* $A289: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A28B:;
    /* $A28B: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A28D:;
    /* $A28D: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A28F:;
    /* $A28F: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A291:;
    /* $A291: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A293:;
    /* $A293: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A295:;
    /* $A295: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A297:;
    /* $A297: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A299:;
    /* $A299: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_A29B:;
    /* $A29B: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A29D:;
    /* $A29D: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A29F:;
    /* $A29F: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A1:;
    /* $A2A1: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A3:;
    /* $A2A3: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A5:;
    /* $A2A5: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_A2A7:;
    /* $A2A7: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2A9:;
    /* $A2A9: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2AB:;
    /* $A2AB: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2AD:;
    /* $A2AD: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2AF:;
    /* $A2AF: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B1:;
    /* $A2B1: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B3:;
    /* $A2B3: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B5:;
    /* $A2B5: 96 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A2B7:;
    /* $A2B7: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2B9:;
    /* $A2B9: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2BB:;
    /* $A2BB: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2BD:;
    /* $A2BD: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2BF:;
    /* $A2BF: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2C1:;
    /* $A2C1: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2C3:;
    /* $A2C3: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_A2C5:;
    /* $A2C5: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
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

void func_81BD_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81BD_b10");
#endif
label_81BD:;
    /* $81BD: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81BF:;
    /* $81BF: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0404 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81C2:;
    /* $81C2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81C4:;
    /* $81C4: FA */ maybe_trigger_vblank(2); /* NOP */
label_81C5:;
    /* $81C5: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xEF04 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_81C8:;
    /* $81C8: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0410 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81CB:;
    /* $81CB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01C9), 10); return; }
label_81CD:;
    /* $81CD: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0C0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81D0:;
    /* $81D0: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81D2:;
    /* $81D2: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xFC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81D4:;
    /* $81D4: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81D6:;
    /* $81D6: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFC0C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81D9:;
    /* $81D9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81DB:;
    /* $81DB: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81DE:;
    /* $81DE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81E0:;
    /* $81E0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81E2:;
    /* $81E2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81E4:;
    /* $81E4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81E6:;
    /* $81E6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xEC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81E8:;
    /* $81E8: FA */ maybe_trigger_vblank(2); /* NOP */
label_81E9:;
    /* $81E9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0904 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81EC:;
    /* $81EC: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04E8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81EF:;
    /* $81EF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_81F0:;
    /* $81F0: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0CEC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81F3:;
    /* $81F3: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF4F8); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_81F6:;
    /* $81F6: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_81F7:;
    /* $81F7: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04F8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81FA:;
    /* $81FA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81FA); return;
}

void func_9009_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9009_b10");
#endif
label_9009:;
    /* $9009: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_901B;
label_900B:;
    /* $900B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_900C:;
    /* $900C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_900E;
label_900E:;
    /* $900E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9010:;
    /* $9010: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF9) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9012:;
    /* $9012: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9014:;
    /* $9014: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9F2 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9017:;
    /* $9017: FA */ maybe_trigger_vblank(2); /* NOP */
label_9018:;
    /* $9018: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF902 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_901B:;
    /* $901B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_901C:;
    /* $901C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_901E:;
    /* $901E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9020:;
    /* $9020: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF6; FLAG_NZ(g_cpu.A);
label_9022:;
    /* $9022: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFE; FLAG_NZ(g_cpu.A);
label_9024:;
    /* $9024: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x06; FLAG_NZ(g_cpu.A);
label_9026:;
    /* $9026: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF1FC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9029:;
    /* $9029: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF7F1 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_902C:;
    /* $902C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF906 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_902F:;
    /* $902F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF6F9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9032:;
    /* $9032: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01EE + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9035:;
    /* $9035: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xF601 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9038:;
    /* $9038: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_903A:;
    /* $903A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFA; FLAG_NZ(g_cpu.A);
label_903C:;
    /* $903C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF2; FLAG_NZ(g_cpu.A);
label_903E:;
    /* $903E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF1FC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9041:;
    /* $9041: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9043:;
    /* $9043: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4F9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9046:;
    /* $9046: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FC + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9049:;
    /* $9049: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_904B:;
    /* $904B: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF401); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_904E:;
    /* $904E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9050:;
    /* $9050: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xEC; FLAG_NZ(g_cpu.A);
label_9052:;
    /* $9052: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF4; FLAG_NZ(g_cpu.A);
label_9054:;
    /* $9054: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFC; FLAG_NZ(g_cpu.A);
label_9056:;
    /* $9056: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_9058:;
    /* $9058: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF1F7 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_905B:;
    /* $905B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_905D:;
    /* $905D: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04F9 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9060:;
    /* $9060: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9FC + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9063:;
    /* $9063: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9065:;
    /* $9065: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0401); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9068:;
    /* $9068: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_906A:;
    /* $906A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_906C:;
    /* $906C: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_906E:;
    /* $906E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xFC; FLAG_NZ(g_cpu.A);
label_9070:;
    /* $9070: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF4; FLAG_NZ(g_cpu.A);
label_9072:;
    /* $9072: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE801 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9075:;
    /* $9075: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFBF0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9078:;
    /* $9078: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x107D), 10); return; }
label_907A:;
    /* $907A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_907B:;
    /* $907B: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04F8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_907E:;
    /* $907E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x907E); return;
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
label_915B:; return;
label_915E:; return;
label_9160:; return;
label_9162:; return;
label_9164:; return;
label_9167:; return;
label_916A:; return;
label_916C:; return;
label_916E:; return;
label_9170:; return;
label_9172:; return;
label_9175:; return;
label_9176:; return;
label_9178:; return;
label_917A:; return;
label_917C:; return;
label_917E:; return;
label_9181:; return;
label_9182:; return;
label_9185:; return;
label_9186:; return;
label_9188:; return;
label_918A:; return;
label_918C:; return;
label_918F:; return;
label_9190:; return;
label_9192:; return;
label_9194:; return;
label_9196:; return;
label_9198:; return;
label_919B:; return;
label_919C:; return;
label_919F:; return;
label_91A1:; return;
label_91A2:; return;
label_91A4:; return;
label_91A6:; return;
label_91A9:; return;
label_91AC:; return;
label_91AE:; return;
label_91B0:; return;
label_91B2:; return;
label_91B5:; return;
label_91B6:; return;
label_91B9:; return;
label_91BA:; return;
label_91BC:; return;
label_91BE:; return;
label_91C0:; return;
label_91C2:; return;
label_91C5:; return;
label_91C6:; return;
label_91C9:; return;
label_91CA:; return;
label_91CC:; return;
label_91CE:; return;
label_91D0:; return;
label_91D3:; return;
label_91D4:; return;
label_91D7:; return;
label_91D9:; return;
label_91DB:; return;
label_91DE:; return;
label_91E0:; return;
label_91E3:; return;
label_91E5:; return;
label_91E8:; return;
label_91E9:; return;
label_91EB:; return;
label_91EE:; return;
label_91EF:; return;
label_91F2:; return;
label_91F3:; return;
label_91F6:; return;
label_91F7:; return;
label_91FA:; return;
label_91FD:; return;
label_91FE:; return;
label_9200:; return;
label_9202:; return;
label_9204:; return;
label_9205:; return;
label_9207:; return;
label_920A:; return;
label_920B:; return;
label_920D:; return;
label_920F:; return;
label_9212:; return;
label_9213:; return;
label_9216:; return;
label_9219:; return;
label_921C:; return;
label_921F:; return;
label_9221:; return;
label_9224:; return;
label_9227:; return;
label_922A:; return;
label_922C:; return;
label_922E:; return;
label_9230:; return;
label_9233:; return;
label_9236:; return;
label_9238:; return;
label_923A:; return;
label_923C:; return;
label_923F:; return;
label_9242:; return;
label_9244:; return;
label_9246:; return;
label_9248:; return;
label_924B:; return;
label_924C:; return;
label_924F:; return;
label_9251:; return;
label_9254:; return;
label_9257:; return;
label_925A:; return;
label_925C:; return;
label_925E:; return;
label_9260:; return;
label_9263:; return;
label_9265:; return;
label_9266:; return;
label_9268:; return;
label_926A:; return;
label_926B:; return;
label_926C:; return;
label_926E:; return;
label_9270:; return;
label_9271:; return;
label_9273:; return;
label_9275:; return;
label_9278:; return;
label_9279:; return;
label_927B:; return;
label_927E:; return;
label_9280:; return;
label_9282:; return;
label_9284:; return;
label_9286:; return;
label_9289:; return;
label_928B:; return;
label_928E:; return;
label_9290:; return;
label_9293:; return;
label_9295:; return;
label_9298:; return;
label_929A:; return;
label_929C:; return;
label_929E:; return;
label_92A0:; return;
label_92A2:; return;
label_92A4:; return;
label_92A7:; return;
label_92A9:; return;
label_92AC:; return;
label_92AE:; return;
label_92B0:; return;
label_92B2:; return;
label_92B4:; return;
label_92B6:; return;
label_92B9:; return;
label_92BC:; return;
label_92BE:; return;
label_92C0:; return;
label_92C2:; return;
label_92C5:; return;
label_92C8:; return;
label_92CA:; return;
label_92CD:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D6:; return;
label_92D9:; return;
label_92DC:; return;
label_92DE:; return;
label_92E1:; return;
label_92E4:; return;
label_92E6:; return;
label_92E8:; return;
label_92EA:; return;
label_92ED:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F7:; return;
label_92F8:; return;
label_92FA:; return;
label_92FD:; return;
label_92FF:; return;
label_9302:; return;
label_9305:; return;
label_9307:; return;
label_9309:; return;
label_930A:; return;
label_930C:; return;
label_930E:; return;
label_9311:; return;
label_9312:; return;
label_9315:; return;
label_9316:; return;
label_9318:; return;
label_931A:; return;
label_931C:; return;
label_931E:; return;
label_9320:; return;
label_9322:; return;
label_9324:; return;
label_9326:; return;
label_9329:; return;
label_932A:; return;
label_932C:; return;
label_932E:; return;
label_9330:; return;
label_9333:; return;
label_9334:; return;
label_9337:; return;
label_9339:; return;
label_933A:; return;
label_933C:; return;
label_933E:; return;
label_9340:; return;
label_9342:; return;
label_9344:; return;
label_9346:; return;
label_9348:; return;
label_934B:; return;
label_934E:; return;
label_9351:; return;
label_9354:; return;
label_9357:; return;
label_935A:; return;
label_935B:; return;
label_935E:; return;
label_9361:; return;
label_9364:; return;
label_9367:; return;
label_9368:; return;
label_936B:; return;
label_936E:; return;
label_9370:; return;
label_9371:; return;
label_9374:; return;
label_9376:; return;
label_9379:; return;
label_937C:; return;
label_937D:; return;
label_9380:; return;
label_9381:; return;
label_9384:; return;
label_9386:; return;
label_9387:; return;
label_938A:; return;
label_938C:; return;
label_938D:; return;
label_9390:; return;
label_9393:; return;
label_9396:; return;
label_9399:; return;
label_939C:; return;
label_939D:; return;
label_93A0:; return;
label_93A1:; return;
label_93A4:; return;
label_93A5:; return;
label_93A8:; return;
label_93AB:; return;
label_93AD:; return;
label_93B0:; return;
label_93B3:; return;
label_93B6:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93C0:; return;
label_93C1:; return;
label_93C3:; return;
label_93C6:; return;
label_93C9:; return;
label_93CC:; return;
label_93CD:; return;
label_93CF:; return;
label_93D1:; return;
label_93D4:; return;
label_93D7:; return;
label_93DA:; return;
label_93DD:; return;
label_93E0:; return;
label_93E3:; return;
label_93E5:; return;
label_93E8:; return;
label_93E9:; return;
label_93EC:; return;
label_93EF:; return;
label_93F2:; return;
label_93F5:; return;
label_93F8:; return;
label_93FA:; return;
label_93FC:; return;
label_93FF:; return;
label_9402:; return;
label_9405:; return;
label_9408:; return;
label_940B:; return;
label_940D:; return;
label_940F:; return;
label_9411:; return;
label_9413:; return;
label_9416:; return;
label_9418:; return;
label_941B:; return;
label_941D:; return;
label_941F:; return;
label_9421:; return;
label_9424:; return;
label_9427:; return;
label_942A:; return;
label_942D:; return;
label_942F:; return;
label_9431:; return;
label_9433:; return;
label_9435:; return;
label_9436:; return;
label_9439:; return;
label_943B:; return;
label_943D:; return;
label_943F:; return;
label_9441:; return;
label_9444:; return;
label_9447:; return;
label_944A:; return;
label_944D:; return;
label_944F:; return;
label_9451:; return;
label_9453:; return;
label_9456:; return;
label_9459:; return;
label_945C:; return;
label_945F:; return;
label_9462:; return;
label_9464:; return;
label_9465:; return;
label_9467:; return;
label_946A:; return;
label_946C:; return;
label_946F:; return;
label_9472:; return;
label_9475:; return;
label_9477:; return;
label_947A:; return;
label_947D:; return;
label_947F:; return;
label_9482:; return;
label_9485:; return;
label_9487:; return;
label_9489:; return;
label_948B:; return;
label_948D:; return;
label_948F:; return;
label_9491:; return;
label_9493:; return;
label_9495:; return;
label_9497:; return;
label_9499:; return;
label_949B:; return;
label_949D:; return;
label_94A0:; return;
label_94A3:; return;
label_94A5:; return;
label_94A7:; return;
label_94A9:; return;
label_94AB:; return;
label_94AD:; return;
label_94AF:; return;
label_94B1:; return;
label_94B4:; return;
label_94B7:; return;
label_94B9:; return;
label_94BC:; return;
label_94BE:; return;
label_94C0:; return;
label_94C3:; return;
label_94C5:; return;
label_94C8:; return;
label_94CB:; return;
label_94CD:; return;
label_94CE:; return;
label_94D1:; return;
label_94D3:; return;
label_94D6:; return;
label_94D9:; return;
label_94DC:; return;
label_94DF:; return;
label_94E1:; return;
label_94E4:; return;
label_94E7:; return;
label_94EA:; return;
label_94EC:; return;
label_94EF:; return;
label_94F1:; return;
label_94F4:; return;
label_94F7:; return;
label_94F9:; return;
label_94FB:; return;
label_94FE:; return;
label_9501:; return;
label_9503:; return;
label_9505:; return;
label_9507:; return;
label_9509:; return;
label_950B:; return;
label_950D:; return;
label_9510:; return;
label_9513:; return;
label_9516:; return;
label_9519:; return;
label_951B:; return;
label_951D:; return;
label_951F:; return;
label_9521:; return;
label_9523:; return;
label_9526:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9531:; return;
label_9534:; return;
label_9537:; return;
label_953A:; return;
label_953D:; return;
label_953F:; return;
label_9542:; return;
label_9545:; return;
label_9547:; return;
label_9549:; return;
label_954B:; return;
label_954D:; return;
label_954F:; return;
label_9551:; return;
label_9553:; return;
label_9555:; return;
label_9558:; return;
label_955A:; return;
label_955D:; return;
label_955F:; return;
label_9561:; return;
label_9564:; return;
label_9567:; return;
label_9568:; return;
label_956B:; return;
label_956D:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957E:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_9589:; return;
label_958B:; return;
label_958D:; return;
label_958F:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959D:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A5:; return;
label_95A8:; return;
label_95AB:; return;
label_95AE:; return;
label_95B1:; return;
label_95B3:; return;
label_95B5:; return;
label_95B7:; return;
label_95B9:; return;
label_95BC:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C3:; return;
label_95C6:; return;
label_95C9:; return;
label_95CB:; return;
label_95CE:; return;
label_95D0:; return;
label_95D3:; return;
label_95D6:; return;
label_95D9:; return;
label_95DC:; return;
label_95DF:; return;
label_95E2:; return;
label_95E5:; return;
label_95E7:; return;
label_95E9:; return;
label_95EB:; return;
label_95ED:; return;
label_95F0:; return;
label_95F3:; return;
label_95F5:; return;
label_95F7:; return;
label_95FA:; return;
label_95FD:; return;
label_95FF:; return;
label_9602:; return;
label_9605:; return;
label_9608:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9611:; return;
label_9613:; return;
label_9615:; return;
label_9618:; return;
label_961A:; return;
label_961C:; return;
label_961E:; return;
label_9620:; return;
label_9623:; return;
label_9625:; return;
label_9627:; return;
label_962A:; return;
label_962D:; return;
label_9630:; return;
label_9633:; return;
label_9636:; return;
label_9639:; return;
label_963C:; return;
label_963F:; return;
label_9642:; return;
label_9644:; return;
label_9647:; return;
label_9649:; return;
label_964B:; return;
label_964D:; return;
label_964F:; return;
label_9651:; return;
label_9653:; return;
label_9655:; return;
label_9658:; return;
label_965B:; return;
label_965E:; return;
label_9661:; return;
label_9664:; return;
label_9667:; return;
label_9669:; return;
label_966C:; return;
label_966F:; return;
label_9672:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967C:; return;
label_967F:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968C:; return;
label_968F:; return;
label_9692:; return;
label_9695:; return;
label_9696:; return;
label_9699:; return;
label_969B:; return;
label_969D:; return;
label_96A0:; return;
label_96A3:; return;
label_96A6:; return;
label_96A9:; return;
label_96AB:; return;
label_96AD:; return;
label_96AF:; return;
label_96B1:; return;
label_96B4:; return;
label_96B7:; return;
label_96B9:; return;
label_96BB:; return;
label_96BE:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C7:; return;
label_96C9:; return;
label_96CC:; return;
label_96CF:; return;
label_96D1:; return;
label_96D4:; return;
label_96D7:; return;
label_96D9:; return;
label_96DB:; return;
label_96DD:; return;
label_96DF:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E8:; return;
label_96E9:; return;
label_96EC:; return;
label_96ED:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F5:; return;
label_96F7:; return;
label_96F9:; return;
label_96FB:; return;
label_96FE:; return;
label_96FF:; return;
label_9701:; return;
label_9703:; return;
label_9706:; return;
label_9709:; return;
label_970B:; return;
label_970D:; return;
label_970F:; return;
label_9711:; return;
label_9713:; return;
label_9716:; return;
label_9719:; return;
label_971C:; return;
label_971F:; return;
label_9721:; return;
label_9724:; return;
label_9727:; return;
label_972A:; return;
label_972D:; return;
label_9730:; return;
label_9733:; return;
label_9736:; return;
label_9739:; return;
label_973B:; return;
label_973D:; return;
label_973F:; return;
label_9742:; return;
label_9745:; return;
label_9748:; return;
label_974B:; return;
label_974D:; return;
label_974F:; return;
label_9751:; return;
label_9753:; return;
label_9755:; return;
label_9758:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9761:; return;
label_9763:; return;
label_9765:; return;
label_9767:; return;
label_9769:; return;
label_976B:; return;
label_976D:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9778:; return;
label_977B:; return;
label_977D:; return;
label_977F:; return;
label_9781:; return;
label_9783:; return;
label_9785:; return;
label_9787:; return;
label_9789:; return;
label_978B:; return;
label_978D:; return;
label_9790:; return;
label_9793:; return;
label_9796:; return;
label_9799:; return;
label_979B:; return;
label_979E:; return;
label_97A1:; return;
label_97A3:; return;
label_97A6:; return;
label_97A9:; return;
label_97AB:; return;
label_97AD:; return;
label_97AF:; return;
label_97B1:; return;
label_97B3:; return;
label_97B6:; return;
label_97B9:; return;
label_97BC:; return;
label_97BE:; return;
label_97C1:; return;
label_97C3:; return;
label_97C5:; return;
label_97C8:; return;
label_97CB:; return;
label_97CD:; return;
label_97D0:; return;
label_97D3:; return;
label_97D5:; return;
label_97D8:; return;
label_97DB:; return;
label_97DD:; return;
label_97DF:; return;
label_97E1:; return;
label_97E4:; return;
label_97E7:; return;
label_97E9:; return;
label_97EC:; return;
label_97EF:; return;
label_97F1:; return;
label_97F3:; return;
label_97F5:; return;
label_97F7:; return;
label_97F9:; return;
label_97FC:; return;
label_97FF:; return;
label_9802:; return;
label_9803:; return;
label_9804:; return;
label_9805:; return;
label_9806:; return;
label_9807:; return;
label_9808:; return;
label_980A:; return;
label_980C:; return;
label_980D:; return;
label_980F:; return;
label_9810:; return;
label_9811:; return;
label_9812:; return;
label_9813:; return;
label_9814:; return;
label_9816:; return;
label_9817:; return;
label_9818:; return;
label_9819:; return;
label_981B:; return;
label_981D:; return;
label_981E:; return;
label_9820:; return;
label_9821:; return;
label_9822:; return;
label_9823:; return;
label_9824:; return;
label_9825:; return;
label_9826:; return;
label_9827:; return;
label_9828:; return;
label_9829:; return;
label_982C:; return;
label_982D:; return;
label_982E:; return;
label_982F:; return;
label_9830:; return;
label_9831:; return;
label_9832:; return;
label_9833:; return;
label_9834:; return;
label_9835:; return;
label_9836:; return;
label_9837:; return;
label_9838:; return;
label_9839:; return;
label_983A:; return;
label_983B:; return;
label_983D:; return;
label_983E:; return;
label_983F:; return;
label_9840:; return;
label_9841:; return;
label_9843:; return;
label_9844:; return;
label_9845:; return;
label_9846:; return;
label_9849:; return;
label_984A:; return;
label_984B:; return;
label_984D:; return;
label_984E:; return;
label_984F:; return;
label_9851:; return;
label_9852:; return;
label_9853:; return;
label_9854:; return;
label_9855:; return;
label_9856:; return;
label_9857:; return;
label_9858:; return;
label_9859:; return;
label_985A:; return;
label_985B:; return;
label_985C:; return;
label_985D:; return;
label_985F:; return;
label_9860:; return;
label_9861:; return;
label_9862:; return;
label_9863:; return;
label_9864:; return;
label_9865:; return;
label_9866:; return;
label_9867:; return;
label_9868:; return;
label_9869:; return;
label_986A:; return;
label_986B:; return;
label_986C:; return;
label_986E:; return;
label_986F:; return;
label_9870:; return;
label_9871:; return;
label_9872:; return;
label_9873:; return;
label_9874:; return;
label_9875:; return;
label_9876:; return;
label_9877:; return;
label_9878:; return;
label_9879:; return;
label_987A:; return;
label_987B:; return;
label_987C:; return;
label_987D:; return;
label_987E:; return;
label_9880:; return;
label_9881:; return;
label_9882:; return;
label_9885:; return;
label_9886:; return;
label_9887:; return;
label_9888:; return;
label_9889:; return;
label_988B:; return;
label_988C:; return;
label_988D:; return;
label_988E:; return;
label_988F:; return;
label_9890:; return;
label_9891:; return;
label_9892:; return;
label_9893:; return;
label_9894:; return;
label_9896:; return;
label_9897:; return;
label_9898:; return;
label_9899:; return;
label_989B:; return;
label_989C:; return;
label_989D:; return;
label_989E:; return;
label_989F:; return;
label_98A0:; return;
label_98A1:; return;
label_98A2:; return;
label_98A3:; return;
label_98A4:; return;
label_98A7:; return;
label_98A8:; return;
label_98A9:; return;
label_98AB:; return;
label_98AC:; return;
label_98AD:; return;
label_98AE:; return;
label_98AF:; return;
label_98B0:; return;
label_98B1:; return;
label_98B3:; return;
label_98B4:; return;
label_98B6:; return;
label_98B7:; return;
label_98B8:; return;
label_98B9:; return;
label_98BA:; return;
label_98BB:; return;
label_98BC:; return;
label_98BD:; return;
label_98BE:; return;
label_98BF:; return;
label_98C0:; return;
label_98C1:; return;
label_98C2:; return;
label_98C3:; return;
label_98C5:; return;
label_98C6:; return;
label_98C7:; return;
label_98C8:; return;
label_98C9:; return;
label_98CA:; return;
label_98CB:; return;
label_98CC:; return;
label_98CD:; return;
label_98CE:; return;
label_98CF:; return;
label_98D1:; return;
label_98D2:; return;
label_98D4:; return;
label_98D5:; return;
label_98D6:; return;
label_98D7:; return;
label_98D8:; return;
label_98D9:; return;
label_98DB:; return;
label_98DC:; return;
label_98DD:; return;
label_98DE:; return;
label_98DF:; return;
label_98E1:; return;
label_98E2:; return;
label_98E3:; return;
label_98E4:; return;
label_98E5:; return;
label_98E8:; return;
label_98E9:; return;
label_98EB:; return;
label_98ED:; return;
label_98EF:; return;
label_98F0:; return;
label_98F2:; return;
label_98F5:; return;
label_98F6:; return;
label_98F7:; return;
label_98F9:; return;
label_98FA:; return;
label_98FB:; return;
label_98FD:; return;
label_98FE:; return;
label_98FF:; return;
label_9900:; return;
label_9901:; return;
label_9903:; return;
label_9906:; return;
label_9907:; return;
label_9908:; return;
label_9909:; return;
label_990A:; return;
label_990B:; return;
label_990C:; return;
label_990D:; return;
label_990E:; return;
label_990F:; return;
label_9911:; return;
label_9912:; return;
label_9913:; return;
label_9914:; return;
label_9915:; return;
label_9917:; return;
label_9918:; return;
label_9919:; return;
label_991B:; return;
label_991D:; return;
label_991F:; return;
label_9920:; return;
label_9921:; return;
label_9922:; return;
label_9924:; return;
label_9925:; return;
label_9926:; return;
label_9927:; return;
label_9928:; return;
label_9929:; return;
label_992A:; return;
label_992B:; return;
label_992C:; return;
label_992D:; return;
label_992E:; return;
label_992F:; return;
label_9930:; return;
label_9931:; return;
label_9932:; return;
label_9933:; return;
label_9934:; return;
label_9935:; return;
label_9937:; return;
label_9938:; return;
label_9939:; return;
label_993A:; return;
label_993B:; return;
label_993C:; return;
label_993D:; return;
label_993E:; return;
label_993F:; return;
label_9940:; return;
label_9941:; return;
label_9944:; return;
label_9945:; return;
label_9946:; return;
label_9947:; return;
label_9948:; return;
label_9949:; return;
label_994A:; return;
label_994B:; return;
label_994C:; return;
label_994D:; return;
label_994E:; return;
label_994F:; return;
label_9950:; return;
label_9952:; return;
label_9953:; return;
label_9954:; return;
label_9955:; return;
label_9958:; return;
label_9959:; return;
label_995A:; return;
label_995B:; return;
label_995C:; return;
label_995D:; return;
label_995E:; return;
label_995F:; return;
label_9960:; return;
label_9961:; return;
label_9962:; return;
label_9963:; return;
label_9964:; return;
label_9965:; return;
label_9966:; return;
label_9969:; return;
label_996A:; return;
label_996C:; return;
label_996D:; return;
label_996E:; return;
label_996F:; return;
label_9971:; return;
label_9973:; return;
label_9974:; return;
label_9975:; return;
label_9976:; return;
label_9977:; return;
label_9978:; return;
label_997A:; return;
label_997B:; return;
label_997D:; return;
label_997F:; return;
label_9980:; return;
label_9981:; return;
label_9982:; return;
label_9983:; return;
label_9984:; return;
label_9985:; return;
label_9987:; return;
label_9989:; return;
label_998A:; return;
label_998B:; return;
label_998C:; return;
label_998D:; return;
label_998E:; return;
label_998F:; return;
label_9990:; return;
label_9991:; return;
label_9993:; return;
label_9994:; return;
label_9995:; return;
label_9996:; return;
label_9997:; return;
label_9998:; return;
label_9999:; return;
label_999A:; return;
label_999B:; return;
label_999C:; return;
label_999D:; return;
label_999F:; return;
label_99A0:; return;
label_99A1:; return;
label_99A2:; return;
label_99A3:; return;
label_99A4:; return;
label_99A5:; return;
label_99A6:; return;
label_99A7:; return;
label_99A8:; return;
label_99A9:; return;
label_99AA:; return;
label_99AB:; return;
label_99AC:; return;
label_99AD:; return;
label_99AE:; return;
label_99AF:; return;
label_99B0:; return;
label_99B1:; return;
label_99B2:; return;
label_99B3:; return;
label_99B4:; return;
label_99B5:; return;
label_99B6:; return;
label_99B7:; return;
label_99B8:; return;
label_99B9:; return;
label_99BA:; return;
label_99BB:; return;
label_99BC:; return;
label_99BD:; return;
label_99BF:; return;
label_99C0:; return;
label_99C1:; return;
label_99C2:; return;
label_99C3:; return;
label_99C5:; return;
label_99C6:; return;
label_99C7:; return;
label_99C8:; return;
label_99C9:; return;
label_99CA:; return;
label_99CB:; return;
label_99CC:; return;
label_99CD:; return;
label_99CE:; return;
label_99CF:; return;
label_99D0:; return;
label_99D1:; return;
label_99D2:; return;
label_99D3:; return;
label_99D4:; return;
label_99D5:; return;
label_99D6:; return;
label_99D7:; return;
label_99D8:; return;
label_99D9:; return;
label_99DA:; return;
label_99DB:; return;
label_99DD:; return;
label_99DE:; return;
label_99E1:; return;
label_99E2:; return;
label_99E3:; return;
label_99E5:; return;
label_99E6:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99EC:; return;
label_99ED:; return;
label_99EE:; return;
label_99EF:; return;
label_99F1:; return;
label_99F2:; return;
label_99F3:; return;
label_99F6:; return;
label_99F7:; return;
label_99F8:; return;
label_99F9:; return;
label_99FA:; return;
label_99FB:; return;
label_99FD:; return;
label_99FE:; return;
label_99FF:; return;
label_9A00:; return;
label_9A02:; return;
label_9A03:; return;
label_9A04:; return;
label_9A05:; return;
label_9A06:; return;
label_9A07:; return;
label_9A08:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A0E:; return;
label_9A0F:; return;
label_9A10:; return;
label_9A11:; return;
label_9A12:; return;
label_9A13:; return;
label_9A14:; return;
label_9A16:; return;
label_9A17:; return;
label_9A18:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1C:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A21:; return;
label_9A22:; return;
label_9A23:; return;
label_9A25:; return;
label_9A26:; return;
label_9A29:; return;
label_9A2B:; return;
label_9A2C:; return;
label_9A2D:; return;
label_9A2F:; return;
label_9A30:; return;
label_9A31:; return;
label_9A32:; return;
label_9A33:; return;
label_9A35:; return;
label_9A36:; return;
label_9A37:; return;
label_9A38:; return;
label_9A39:; return;
label_9A3A:; return;
label_9A3B:; return;
label_9A3E:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A43:; return;
label_9A44:; return;
label_9A45:; return;
label_9A46:; return;
label_9A47:; return;
label_9A48:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4B:; return;
label_9A4C:; return;
label_9A4D:; return;
label_9A4E:; return;
label_9A4F:; return;
label_9A50:; return;
label_9A51:; return;
label_9A52:; return;
label_9A53:; return;
label_9A55:; return;
label_9A56:; return;
label_9A57:; return;
label_9A58:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5C:; return;
label_9A5D:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A61:; return;
label_9A62:; return;
label_9A63:; return;
label_9A64:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6A:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A6F:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A74:; return;
label_9A75:; return;
label_9A76:; return;
label_9A77:; return;
label_9A78:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7C:; return;
label_9A7F:; return;
label_9A80:; return;
label_9A81:; return;
label_9A82:; return;
label_9A83:; return;
label_9A84:; return;
label_9A85:; return;
label_9A86:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8C:; return;
label_9A8D:; return;
label_9A8E:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A91:; return;
label_9A92:; return;
label_9A93:; return;
label_9A94:; return;
label_9A95:; return;
label_9A96:; return;
label_9A97:; return;
label_9A98:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9B:; return;
label_9A9C:; return;
label_9A9E:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAC:; return;
label_9AAD:; return;
label_9AAE:; return;
label_9AAF:; return;
label_9AB0:; return;
label_9AB1:; return;
label_9AB2:; return;
label_9AB3:; return;
label_9AB5:; return;
label_9AB6:; return;
label_9AB7:; return;
label_9AB8:; return;
label_9AB9:; return;
label_9ABA:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9ABF:; return;
label_9AC0:; return;
label_9AC1:; return;
label_9AC2:; return;
label_9AC3:; return;
label_9AC5:; return;
label_9AC6:; return;
label_9AC7:; return;
label_9AC8:; return;
label_9AC9:; return;
label_9ACA:; return;
label_9ACB:; return;
label_9ACD:; return;
label_9ACE:; return;
label_9ACF:; return;
label_9AD0:; return;
label_9AD1:; return;
label_9AD2:; return;
label_9AD3:; return;
label_9AD4:; return;
label_9AD5:; return;
label_9AD6:; return;
label_9AD7:; return;
label_9AD9:; return;
label_9ADA:; return;
label_9ADD:; return;
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
label_9AEB:; return;
label_9AED:; return;
label_9AEF:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF4:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF8:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFC:; return;
label_9AFD:; return;
label_9AFE:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B02:; return;
label_9B04:; return;
label_9B05:; return;
label_9B06:; return;
label_9B07:; return;
label_9B08:; return;
label_9B09:; return;
label_9B0A:; return;
label_9B0B:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B10:; return;
label_9B11:; return;
label_9B12:; return;
label_9B14:; return;
label_9B15:; return;
label_9B16:; return;
label_9B17:; return;
label_9B18:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1E:; return;
label_9B21:; return;
label_9B22:; return;
label_9B23:; return;
label_9B24:; return;
label_9B25:; return;
label_9B26:; return;
label_9B27:; return;
label_9B28:; return;
label_9B29:; return;
label_9B2A:; return;
label_9B2B:; return;
label_9B2C:; return;
label_9B2D:; return;
label_9B2E:; return;
label_9B2F:; return;
label_9B30:; return;
label_9B31:; return;
label_9B32:; return;
label_9B33:; return;
label_9B34:; return;
label_9B35:; return;
label_9B36:; return;
label_9B37:; return;
label_9B38:; return;
label_9B39:; return;
label_9B3A:; return;
label_9B3B:; return;
label_9B3C:; return;
label_9B3D:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B42:; return;
label_9B44:; return;
label_9B45:; return;
label_9B46:; return;
label_9B47:; return;
label_9B48:; return;
label_9B49:; return;
label_9B4A:; return;
label_9B4B:; return;
label_9B4D:; return;
label_9B4E:; return;
label_9B4F:; return;
label_9B50:; return;
label_9B51:; return;
label_9B52:; return;
label_9B53:; return;
label_9B56:; return;
label_9B57:; return;
label_9B58:; return;
label_9B59:; return;
label_9B5A:; return;
label_9B5B:; return;
label_9B5C:; return;
label_9B5D:; return;
label_9B5E:; return;
label_9B61:; return;
label_9B63:; return;
label_9B64:; return;
label_9B65:; return;
label_9B67:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6B:; return;
label_9B6C:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B73:; return;
label_9B74:; return;
label_9B75:; return;
label_9B76:; return;
label_9B77:; return;
label_9B78:; return;
label_9B79:; return;
label_9B7A:; return;
label_9B7B:; return;
label_9B7D:; return;
label_9B7E:; return;
label_9B80:; return;
label_9B82:; return;
label_9B83:; return;
label_9B84:; return;
label_9B85:; return;
label_9B86:; return;
label_9B87:; return;
label_9B88:; return;
label_9B8B:; return;
label_9B8E:; return;
label_9B8F:; return;
label_9B90:; return;
label_9B92:; return;
label_9B93:; return;
label_9B94:; return;
label_9B95:; return;
label_9B96:; return;
label_9B97:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9D:; return;
label_9B9F:; return;
label_9BA1:; return;
label_9BA2:; return;
label_9BA3:; return;
label_9BA5:; return;
label_9BA6:; return;
label_9BA7:; return;
label_9BA8:; return;
label_9BA9:; return;
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
label_9BC3:; return;
label_9BC5:; return;
label_9BC6:; return;
label_9BC7:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCB:; return;
label_9BCC:; return;
label_9BCD:; return;
label_9BCE:; return;
label_9BCF:; return;
label_9BD2:; return;
label_9BD3:; return;
label_9BD4:; return;
label_9BD5:; return;
label_9BD6:; return;
label_9BD7:; return;
label_9BD9:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDC:; return;
label_9BDD:; return;
label_9BDE:; return;
label_9BE0:; return;
label_9BE1:; return;
label_9BE2:; return;
label_9BE4:; return;
label_9BE5:; return;
label_9BE6:; return;
label_9BE7:; return;
label_9BE8:; return;
label_9BE9:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BED:; return;
label_9BEE:; return;
label_9BEF:; return;
label_9BF0:; return;
label_9BF1:; return;
label_9BF2:; return;
label_9BF3:; return;
label_9BF4:; return;
label_9BF5:; return;
label_9BF7:; return;
label_9BFA:; return;
label_9BFB:; return;
label_9BFD:; return;
label_9BFE:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C02:; return;
label_9C04:; return;
label_9C06:; return;
label_9C07:; return;
label_9C08:; return;
label_9C0A:; return;
label_9C0B:; return;
label_9C0C:; return;
label_9C0D:; return;
label_9C0E:; return;
label_9C0F:; return;
label_9C10:; return;
label_9C11:; return;
label_9C12:; return;
label_9C14:; return;
label_9C15:; return;
label_9C16:; return;
label_9C17:; return;
label_9C18:; return;
label_9C19:; return;
label_9C1A:; return;
label_9C1B:; return;
label_9C1C:; return;
label_9C1D:; return;
label_9C1E:; return;
label_9C1F:; return;
label_9C21:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2B:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C2F:; return;
label_9C30:; return;
label_9C33:; return;
label_9C34:; return;
label_9C35:; return;
label_9C36:; return;
label_9C39:; return;
label_9C3A:; return;
label_9C3B:; return;
label_9C3C:; return;
label_9C3D:; return;
label_9C3E:; return;
label_9C41:; return;
label_9C42:; return;
label_9C44:; return;
label_9C46:; return;
label_9C47:; return;
label_9C49:; return;
label_9C4A:; return;
label_9C4B:; return;
label_9C4C:; return;
label_9C4E:; return;
label_9C50:; return;
label_9C51:; return;
label_9C53:; return;
label_9C54:; return;
label_9C55:; return;
label_9C56:; return;
label_9C57:; return;
label_9C58:; return;
label_9C5A:; return;
label_9C5B:; return;
label_9C5C:; return;
label_9C5D:; return;
label_9C5E:; return;
label_9C5F:; return;
label_9C60:; return;
label_9C61:; return;
label_9C63:; return;
label_9C65:; return;
label_9C66:; return;
label_9C68:; return;
label_9C69:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C70:; return;
label_9C71:; return;
label_9C73:; return;
label_9C74:; return;
label_9C76:; return;
label_9C77:; return;
label_9C78:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C81:; return;
label_9C83:; return;
label_9C84:; return;
label_9C85:; return;
label_9C87:; return;
label_9C88:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8C:; return;
label_9C8D:; return;
label_9C8E:; return;
label_9C8F:; return;
label_9C90:; return;
label_9C92:; return;
label_9C95:; return;
label_9C96:; return;
label_9C97:; return;
label_9C98:; return;
label_9C99:; return;
label_9C9A:; return;
label_9C9B:; return;
label_9C9C:; return;
label_9C9D:; return;
label_9C9E:; return;
label_9C9F:; return;
label_9CA0:; return;
label_9CA3:; return;
label_9CA4:; return;
label_9CA5:; return;
label_9CA6:; return;
label_9CA7:; return;
label_9CA8:; return;
label_9CA9:; return;
label_9CAA:; return;
label_9CAB:; return;
label_9CAD:; return;
label_9CAE:; return;
label_9CAF:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB3:; return;
label_9CB4:; return;
label_9CB5:; return;
label_9CB7:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBB:; return;
label_9CBD:; return;
label_9CBE:; return;
label_9CBF:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC3:; return;
label_9CC5:; return;
label_9CC6:; return;
label_9CC7:; return;
label_9CC8:; return;
label_9CC9:; return;
label_9CCB:; return;
label_9CCD:; return;
label_9CCE:; return;
label_9CCF:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD3:; return;
label_9CD4:; return;
label_9CD5:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CD9:; return;
label_9CDA:; return;
label_9CDB:; return;
label_9CDD:; return;
label_9CDF:; return;
label_9CE1:; return;
label_9CE3:; return;
label_9CE5:; return;
label_9CE7:; return;
label_9CE9:; return;
label_9CEB:; return;
label_9CEC:; return;
label_9CED:; return;
label_9CEE:; return;
label_9CF0:; return;
label_9CF2:; return;
label_9CF4:; return;
label_9CF6:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9CFF:; return;
label_9D01:; return;
label_9D02:; return;
label_9D05:; return;
label_9D07:; return;
label_9D08:; return;
label_9D0A:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0F:; return;
label_9D10:; return;
label_9D11:; return;
label_9D12:; return;
label_9D13:; return;
label_9D15:; return;
label_9D16:; return;
label_9D17:; return;
label_9D18:; return;
label_9D19:; return;
label_9D1A:; return;
label_9D1C:; return;
label_9D1D:; return;
label_9D1E:; return;
label_9D1F:; return;
label_9D20:; return;
label_9D23:; return;
label_9D24:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2A:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2E:; return;
label_9D2F:; return;
label_9D30:; return;
label_9D32:; return;
label_9D34:; return;
label_9D35:; return;
label_9D36:; return;
label_9D37:; return;
label_9D38:; return;
label_9D39:; return;
label_9D3A:; return;
label_9D3C:; return;
label_9D3D:; return;
label_9D3E:; return;
label_9D3F:; return;
label_9D40:; return;
label_9D41:; return;
label_9D42:; return;
label_9D45:; return;
label_9D46:; return;
label_9D47:; return;
label_9D48:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4F:; return;
label_9D51:; return;
label_9D52:; return;
label_9D54:; return;
label_9D56:; return;
label_9D57:; return;
label_9D58:; return;
label_9D59:; return;
label_9D5A:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D61:; return;
label_9D63:; return;
label_9D64:; return;
label_9D66:; return;
label_9D69:; return;
label_9D6B:; return;
label_9D6E:; return;
label_9D6F:; return;
label_9D70:; return;
label_9D72:; return;
label_9D75:; return;
label_9D76:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7D:; return;
label_9D7F:; return;
label_9D81:; return;
label_9D82:; return;
label_9D85:; return;
label_9D86:; return;
label_9D88:; return;
label_9D89:; return;
label_9D8A:; return;
label_9D8B:; return;
label_9D8C:; return;
label_9D8E:; return;
label_9D8F:; return;
label_9D91:; return;
label_9D92:; return;
label_9D93:; return;
label_9D95:; return;
label_9D96:; return;
label_9D98:; return;
label_9D99:; return;
label_9D9B:; return;
label_9D9D:; return;
label_9D9E:; return;
label_9D9F:; return;
label_9DA0:; return;
label_9DA2:; return;
label_9DA3:; return;
label_9DA4:; return;
label_9DA5:; return;
label_9DA7:; return;
label_9DA9:; return;
label_9DAA:; return;
label_9DAC:; return;
label_9DAE:; return;
label_9DB0:; return;
label_9DB1:; return;
label_9DB2:; return;
label_9DB3:; return;
label_9DB4:; return;
label_9DB6:; return;
label_9DB9:; return;
label_9DBB:; return;
}

void func_82BC_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82BC_b10");
#endif
label_82BC:;
    /* $82BC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
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
    /* $82D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82DE;
label_82D6:;
    /* $82D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82E8;
label_82D8:;
    /* $82D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x02F2), 10); return; }
label_82DA:;
    /* $82DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82FC;
label_82DC:;
    /* $82DC: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82DD:;
    /* $82DD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_82DE:;
    /* $82DE: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82DF:;
    /* $82DF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x02B9), 10); return; }
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
    /* $82F1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x02DB), 10); return; }
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
    /* $82F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82FA;
label_82FA:;
    /* $82FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8304;
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
    /* $8307: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8311;
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
    /* $8314: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x02F6), 10); return; }
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
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0315), 10); return; }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8334;
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
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
label_915B:; return;
label_915E:; return;
}

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

void func_AD05_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD05_b10");
#endif
label_AD05:;
    /* $AD05: C2 */ maybe_trigger_vblank(2); /* NOP */
label_AD07:;
    /* $AD07: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AD08:;
    /* $AD08: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD0A:;
    /* $AD0A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD0C:;
    /* $AD0C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD0E:;
    /* $AD0E: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD10:;
    /* $AD10: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD12:;
    /* $AD12: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD14:;
    /* $AD14: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD16:;
    /* $AD16: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD18:;
    /* $AD18: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD1A:;
    /* $AD1A: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD1C:;
    /* $AD1C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD1E:;
    /* $AD1E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD20:;
    /* $AD20: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD22:;
    /* $AD22: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD24:;
    /* $AD24: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD26:;
    /* $AD26: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x99 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD28:;
    /* $AD28: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xE9 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD2A:;
    /* $AD2A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD2C:;
    /* $AD2C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD2E:;
    /* $AD2E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD30:;
    /* $AD30: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD32:;
    /* $AD32: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD34:;
    /* $AD34: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD36:;
    /* $AD36: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD38:;
    /* $AD38: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD3A:;
    /* $AD3A: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD3C:;
    /* $AD3C: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD3E:;
    /* $AD3E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD40:;
    /* $AD40: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD42:;
    /* $AD42: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD44:;
    /* $AD44: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD46:;
    /* $AD46: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD48:;
    /* $AD48: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD4A:;
    /* $AD4A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD4C:;
    /* $AD4C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD4E:;
    /* $AD4E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD50:;
    /* $AD50: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD52:;
    /* $AD52: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD54:;
    /* $AD54: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD56:;
    /* $AD56: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD58:;
    /* $AD58: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD5A:;
    /* $AD5A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD5C:;
    /* $AD5C: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AD5E:;
    /* $AD5E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x03B2 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD61:;
    /* $AD61: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD63:;
    /* $AD63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD63); return;
}

void func_9905_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9905_b10");
#endif
label_9905:;
    /* $9905: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9906:;
    /* $9906: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9906); return;
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
    /* $8529: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_852E;
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
    /* $82D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82DE;
label_82D6:;
    /* $82D6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82E8;
label_82D8:;
    /* $82D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x02F2), 10); return; }
label_82DA:;
    /* $82DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_82FC;
label_82DC:;
    /* $82DC: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82DD:;
    /* $82DD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_82DE:;
    /* $82DE: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_82DF:;
    /* $82DF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
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
    /* $82F1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x02DB), 10); return; }
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
    /* $82F8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_82FA;
label_82FA:;
    /* $82FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8304;
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
    /* $8307: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8311;
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
    /* $8314: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x02F6), 10); return; }
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
    /* $832B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0315), 10); return; }
label_832D:;
    /* $832D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832E:;
    /* $832E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_832F:;
    /* $832F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE8; g_cpu.C=(g_cpu.X>=0xE8)?1:0; FLAG_NZ(r&0xFF); }
label_8331:;
    /* $8331: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8332:;
    /* $8332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_8334;
label_8334:;
    /* $8334: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_832E;
    }
label_8336:;
    /* $8336: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
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

void func_98A9_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A9_b10");
#endif
label_98A9:;
    /* $98A9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98AB:;
    /* $98AB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x98AB); return;
}

void func_8D05_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D05_b10");
#endif
label_8D05:;
    /* $8D05: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0D00), 10); return; }
label_8D07:;
    /* $8D07: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8D08:;
    /* $8D08: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF900 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D0B:;
    /* $8D0B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8D0C:;
    /* $8D0C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D0E:;
    /* $8D0E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D10:;
    /* $8D10: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D12:;
    /* $8D12: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D14:;
    /* $8D14: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF0; FLAG_NZ(g_cpu.A);
label_8D16:;
    /* $8D16: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_8D18:;
    /* $8D18: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x00; FLAG_NZ(g_cpu.A);
label_8D1A:;
    /* $8D1A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_8D1C:;
    /* $8D1C: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D1E:;
    /* $8D1E: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D20:;
    /* $8D20: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D22:;
    /* $8D22: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xF8 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D24:;
    /* $8D24: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D26:;
    /* $8D26: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D28:;
    /* $8D28: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF8; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D2A:;
    /* $8D2A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D2C:;
    /* $8D2C: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D2E:;
    /* $8D2E: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D30:;
    /* $8D30: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF8) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D32:;
    /* $8D32: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF0) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D34:;
    /* $8D34: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF908 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D37:;
    /* $8D37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D37); return;
}

void func_A904_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b10");
#endif
label_A904:;
    /* $A904: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03EF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A907:;
    /* $A907: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A90C;
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

void func_8D00_b10(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D00_b10");
#endif
label_8D00:;
    /* $8D00: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D02:;
    /* $8D02: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D04:;
    /* $8D04: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF9F0 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D07:;
    /* $8D07: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8D08:;
    /* $8D08: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF900 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D0B:;
    /* $8D0B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8D0C:;
    /* $8D0C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D0E:;
    /* $8D0E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D10:;
    /* $8D10: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D12:;
    /* $8D12: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D14:;
    /* $8D14: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF0; FLAG_NZ(g_cpu.A);
label_8D16:;
    /* $8D16: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xF8; FLAG_NZ(g_cpu.A);
label_8D18:;
    /* $8D18: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x00; FLAG_NZ(g_cpu.A);
label_8D1A:;
    /* $8D1A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_8D1C:;
    /* $8D1C: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D1E:;
    /* $8D1E: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D20:;
    /* $8D20: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D22:;
    /* $8D22: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xF8 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D24:;
    /* $8D24: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D26:;
    /* $8D26: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D28:;
    /* $8D28: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF8; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D2A:;
    /* $8D2A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D2C:;
    /* $8D2C: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D2E:;
    /* $8D2E: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D30:;
    /* $8D30: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF8) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D32:;
    /* $8D32: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xF0) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D34:;
    /* $8D34: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF908 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D37:;
    /* $8D37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D37); return;
}

