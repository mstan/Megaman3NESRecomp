/* mega-man-3_full_bank13.c — PRG bank 13 function bodies.
 * Generated part of mega-man-3_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_8003_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b13");
#endif
label_8003:;
    /* $8003: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8018;
label_8005:;
    /* $8005: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1F10 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8008:;
    /* $8008: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_8009:;
    /* $8009: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x28); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x322F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_800E:;
    /* $800E: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8010:;
    /* $8010: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4D41 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8013:;
    /* $8013: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8015:;
    /* $8015: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5D2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8018:;
    /* $8018: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801A:;
    /* $801A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6C); g_cpu.A=r&0xFF; }
label_801C:;
    /* $801C: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7A74; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801F:;
    /* $801F: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8021:;
    /* $8021: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8023:; /* jump_local_ptr */
    /* $8023: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8025:;
    /* $8025: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA4; FLAG_NZ(g_cpu.Y);
label_8027:;
    /* $8027: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8028:;
    /* $8028: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802A:;
    /* $802A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD6D0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802D:;
    /* $802D: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEA); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_802F:;
    /* $802F: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8030:;
    /* $8030: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8032:;
    /* $8032: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8034:;
    /* $8034: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_8036:;
    /* $8036: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1713; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8039:;
    /* $8039: 1A */ maybe_trigger_vblank(2); /* NOP */
label_803A:; /* read_ptr */
    /* $803A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2522 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_803D:;
    /* $803D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_803E:;
    /* $803E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8040:;
    /* $8040: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8041:;
    /* $8041: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x39 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8043:;
    /* $8043: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4943 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8046:;
    /* $8046: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x554F, -1); return;
}

void func_8000_b13(void) { /* process_sprites_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b13");
#endif
label_8000:; /* process_sprites_j */
    /* $8000: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8000); return;
}

void func_A003_b13(void) { /* main_doc_heat_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A003_b13");
#endif
label_A003:; /* main_doc_heat_j */
    /* $A003: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x2822 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A006:; /* main_doc_quick_j */
    /* $A006: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3B2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A009:; /* main_shadow_man_j */
    /* $A009: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4B47 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A00C:; /* main_snake_man_j */
    /* $A00C: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x5B55; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A00F:; /* main_wily_machine_B */
    /* $A00F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x6E62 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A012:; /* main_gemini_man_j */
    /* $A012: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x77) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A014:;
    /* $A014: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x887E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A017:;
    /* $A017: 8E */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.X);
label_A01A:;
    /* $A01A: 9D */ maybe_trigger_vblank(5); nes_write((0xA3A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A01D:;
    /* $A01D: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xAB); FLAG_NZ(g_cpu.A);
label_A01F:;
    /* $A01F: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB5B2); FLAG_NZ(g_cpu.A);
label_A022:;
    /* $A022: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A023:;
    /* $A023: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A026:;
    /* $A026: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD4D0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A029:;
    /* $A029: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDFDC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A02C:;
    /* $A02C: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A02E:;
    /* $A02E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: EB */ maybe_trigger_vblank(2); { uint8_t m=0xEE; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A031:;
    /* $A031: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A033:;
    /* $A033: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A035:;
    /* $A035: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0047), 13); return; }
label_A037:;
    /* $A037: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0049), 13); return; }
label_A039:; /* needle_man_init */
    /* $A039: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x22 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A03B:;
    /* $A03B: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A03C:;
    /* $A03C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3330); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A03F:; /* main_holograph */
    /* $A03F: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x39 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A041:;
    /* $A041: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x453F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A044:;
    /* $A044: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4F; FLAG_NZ(g_cpu.A);
label_A046:;
    /* $A046: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A048:;
    /* $A048: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8481 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A04B:;
    /* $A04B: 87 */ maybe_trigger_vblank(3); nes_write(0x8D, g_cpu.A & g_cpu.X); /* SAX */
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 8D */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.A);
label_A050:;
    /* $A050: 99 */ maybe_trigger_vblank(5); nes_write((0xAB9D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A053:;
    /* $A053: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xBCAE); FLAG_NZ(g_cpu.X);
label_A056:;
    /* $A056: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC7C3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A059:;
    /* $A059: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xCE)?1:0; g_cpu.X=(t-0xCE)&0xFF; FLAG_NZ(g_cpu.X); }
label_A05B:;
    /* $A05B: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A05D:;
    /* $A05D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0073), 13); return; }
label_A05F:;
    /* $A05F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x1B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A061:;
    /* $A061: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A063:;
    /* $A063: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A066:;
    /* $A066: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06C:;
    /* $A06C: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06F:;
    /* $A06F: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A072:;
    /* $A072: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A075:;
    /* $A075: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A078:;
    /* $A078: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3D39 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07B:;
    /* $A07B: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A07D:;
    /* $A07D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4D; FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0004), 13); return; }
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
    /* $A0B3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
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
    /* $A0DD: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0DF:;
    /* $A0DF: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E1:;
    /* $A0E1: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E3:;
    /* $A0E3: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E5:;
    /* $A0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
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
    /* $A0FF: 85 */ maybe_trigger_vblank(3); nes_write(0x54, g_cpu.A);
label_A101:;
    /* $A101: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x58 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A103:;
    /* $A103: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x7066 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A106:;
    /* $A106: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x9488 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A109:;
    /* $A109: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A10A:;
    /* $A10A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A10B:;
    /* $A10B: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A10D:;
    /* $A10D: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xEA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A10F:;
    /* $A10F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x2E16 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A112:;
    /* $A112: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A113:;
    /* $A113: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A115:;
    /* $A115: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAE); FLAG_NZ(g_cpu.Y);
label_A117:;
    /* $A117: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A118:;
    /* $A118: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A11A:;
    /* $A11A: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A11C:;
    /* $A11C: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A11E:;
    /* $A11E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0146), 13); return; }
label_A120:;
    /* $A120: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x6A52 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A123:;
    /* $A123: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A125:;
    /* $A125: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xCE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A129:;
    /* $A129: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x014F), 13); return; }
label_A12B:;
    /* $A12B: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A12C:;
    /* $A12C: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A12D:;
    /* $A12D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A12E:;
    /* $A12E: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xAA94 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A131:;
    /* $A131: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xD6; g_cpu.C=(g_cpu.Y>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A133:;
    /* $A133: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1A02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A136:;
    /* $A136: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A182;
label_A138:;
    /* $A138: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x7E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A13A:;
    /* $A13A: 96 */ maybe_trigger_vblank(4); nes_write((0xAA + g_cpu.Y) & 0xFF, g_cpu.X);
label_A13C:;
    /* $A13C: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A13E:;
    /* $A13E: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A140:;
    /* $A140: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A11C;
    }
label_A142:;
    /* $A142: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xECE2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A145:;
    /* $A145: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A147:;
    /* $A147: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A148:;
    /* $A148: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x382A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A14B:;
    /* $A14B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x4C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A14D:;
    /* $A14D: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A14E:;
    /* $A14E: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x72; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A150:; /* needle_man_headbutt */
    /* $A150: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A152:;
    /* $A152: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A153:;
    /* $A153: 96 */ maybe_trigger_vblank(4); nes_write((0xB0 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A155:;
    /* $A155: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A156:;
    /* $A156: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDA); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A158:;
    /* $A158: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A15A:;
    /* $A15A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A15B:;
    /* $A15B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A15C:;
    /* $A15C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x3420); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A15F:;
    /* $A15F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4C48 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A162:;
    /* $A162: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01B8), 13); return; }
label_A164:;
    /* $A164: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A165:;
    /* $A165: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0ED;
    }
label_A167:;
    /* $A167: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A16A:;
    /* $A16A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xBAB4); FLAG_NZ(g_cpu.X);
label_A16D:;
    /* $A16D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xCA; g_cpu.C=(g_cpu.Y>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_A16F:;
    /* $A16F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xE8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A171:;
    /* $A171: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A174:;
    /* $A174: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2622); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A177:;
    /* $A177: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x48 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A179:;
    /* $A179: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A17A:;
    /* $A17A: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x7C6E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A17D:;
    /* $A17D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A17E:;
    /* $A17E: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A17F:;
    /* $A17F: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A182:;
    /* $A182: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A184:;
    /* $A184: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A186:;
    /* $A186: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A187:;
    /* $A187: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A188:; /* needle_man_setup_throw */
    /* $A188: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x7460, -1); return;
label_A18B:; return;
label_A18C:; return;
label_A18F:; return;
label_A192:; return;
label_A195:; return;
label_A197:; return;
label_A199:; return;
label_A19A:; return;
label_A19B:; return;
label_A19C:; return;
label_A19E:; return;
label_A19F:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1AF:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B5:; return;
label_A1B7:; return;
label_A1BA:; return;
label_A1BD:; return;
label_A1BF:; return;
label_A1C1:; return;
label_A1C3:; return;
label_A1C5:; return;
label_A1C8:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CB:; return;
label_A1CC:; return;
label_A1CD:; return;
label_A1CE:; return;
label_A1CF:; return;
label_A1D0:; return;
label_A1D2:; return;
label_A1D3:; return;
label_A1D4:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DB:; return;
label_A1DE:; return;
label_A1DF:; return;
label_A1E1:; return;
label_A1E3:; return;
label_A1E4:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E7:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F3:; return;
label_A1F4:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F7:; return;
label_A1F8:; return;
label_A1F9:; return;
label_A1FA:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FD:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20E:; return;
label_A210:; return;
label_A212:; return;
label_A214:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A220:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22B:; return;
label_A22C:; return;
label_A22D:; return;
label_A22E:; return;
label_A22F:; return;
label_A230:; return;
label_A231:; return;
label_A232:; return;
label_A233:; return;
label_A234:; return;
label_A236:; return;
label_A238:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A247:; return;
label_A248:; return;
label_A249:; return;
label_A24A:; return;
label_A24B:; return;
label_A24C:; return;
label_A24D:; return;
label_A24E:; return;
label_A24F:; return;
label_A250:; return;
label_A251:; return;
label_A252:; return;
label_A253:; return;
label_A254:; return;
label_A255:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A259:; return;
label_A25A:; return;
label_A25B:; return;
label_A25D:; return;
label_A25F:; return;
label_A261:; return;
label_A263:; return;
label_A265:; return;
label_A267:; return;
label_A269:; return;
label_A26B:; return;
label_A26D:; return;
label_A26F:; return;
label_A271:; return;
label_A273:; return;
label_A276:; return;
label_A279:; return;
label_A27C:; return;
label_A27F:; return;
label_A282:; return;
label_A285:; return;
label_A288:; return;
label_A28B:; return;
label_A28E:; return;
label_A291:; return;
label_A294:; return;
label_A297:; return;
label_A29A:; return;
label_A29D:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A6:; return;
label_A2A9:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B4:; return;
label_A2B6:; return;
label_A2B8:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2C9:; return;
label_A2CA:; return;
label_A2CB:; return;
label_A2CC:; return;
label_A2CD:; return;
label_A2CE:; return;
label_A2CF:; return;
label_A2D0:; return;
label_A2D1:; return;
label_A2D2:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D6:; return;
label_A2D7:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DC:; return;
label_A2DE:; return;
label_A2E0:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E6:; return;
label_A2E8:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F4:; return;
label_A2F6:; return;
label_A2F8:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A302:; return;
label_A304:; return;
label_A306:; return;
label_A308:; return;
label_A30A:; return;
label_A30C:; return;
label_A30E:; return;
label_A310:; return;
label_A311:; return;
label_A313:; return;
label_A314:; return;
label_A315:; return;
label_A318:; return;
label_A319:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A327:; return;
label_A328:; return;
label_A32A:; return;
label_A32C:; return;
label_A32D:; return;
label_A32E:; return;
label_A330:; return;
label_A331:; return;
label_A333:; return;
label_A334:; return;
label_A336:; return;
label_A337:; return;
label_A339:; return;
label_A33A:; return;
label_A33C:; return;
label_A33E:; return;
label_A340:; return;
label_A342:; return;
label_A344:; return;
label_A346:; return;
label_A348:; return;
label_A34A:; return;
label_A34D:; return;
label_A34E:; return;
label_A350:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35C:; return;
label_A35E:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A364:; return;
label_A367:; return;
label_A36A:; return;
label_A36D:; return;
label_A370:; return;
label_A372:; return;
label_A374:; return;
label_A375:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37C:; return;
label_A37D:; return;
label_A37F:; return;
label_A380:; return;
label_A382:; return;
label_A384:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38C:; return;
label_A38E:; return;
label_A38F:; return;
label_A390:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A397:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A39F:; return;
label_A3A1:; return;
label_A3A2:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A9:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B2:; return;
label_A3B3:; return;
label_A3B4:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3B9:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3C0:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C7:; return;
label_A3CA:; return;
label_A3CC:; return;
label_A3CE:; return;
label_A3D0:; return;
label_A3D2:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D9:; return;
label_A3DC:; return;
label_A3DD:; return;
label_A3DE:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E6:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EA:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3ED:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F9:; return;
label_A3FA:; return;
label_A3FD:; return;
label_A3FE:; return;
label_A401:; return;
label_A403:; return;
label_A405:; return;
label_A407:; return;
label_A409:; return;
label_A40C:; return;
label_A40D:; return;
label_A40F:; return;
label_A412:; return;
label_A414:; return;
label_A416:; return;
label_A418:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A422:; return;
label_A424:; return;
label_A425:; return;
label_A428:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A430:; return;
label_A431:; return;
label_A432:; return;
label_A434:; return;
label_A435:; return;
label_A438:; return;
label_A43B:; return;
label_A43E:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A447:; return;
label_A448:; return;
label_A44B:; return;
label_A44C:; return;
label_A44F:; return;
label_A452:; return;
label_A455:; return;
label_A458:; return;
label_A45B:; return;
label_A45E:; return;
label_A461:; return;
label_A463:; return;
label_A465:; return;
label_A467:; return;
label_A469:; return;
label_A46B:; return;
label_A46D:; return;
label_A46F:; return;
label_A471:; return;
label_A473:; return;
label_A475:; return;
label_A477:; return;
label_A479:; return;
label_A47B:; return;
label_A47D:; return;
label_A47F:; return;
label_A481:; return;
label_A482:; return;
label_A483:; return;
label_A485:; return;
label_A486:; return;
label_A488:; return;
label_A489:; return;
label_A48B:; return;
label_A48C:; return;
label_A48E:; return;
label_A48F:; return;
label_A492:; return;
label_A493:; return;
label_A496:; return;
label_A497:; return;
label_A498:; return;
label_A49A:; return;
label_A49B:; return;
label_A49D:; return;
label_A49F:; return;
label_A4A2:; return;
label_A4A5:; return;
label_A4A8:; return;
label_A4AB:; return;
label_A4AC:; return;
label_A4AD:; return;
label_A4AF:; return;
label_A4B0:; return;
label_A4B1:; return;
label_A4B2:; return;
label_A4B3:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B7:; return;
label_A4B8:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BB:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C4:; return;
label_A4C6:; return;
label_A4C9:; return;
label_A4CC:; return;
label_A4CD:; return;
label_A4CF:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D4:; return;
label_A4D7:; return;
label_A4DA:; return;
label_A4DB:; return;
label_A4DE:; return;
label_A4DF:; return;
label_A4E2:; return;
label_A4E3:; return;
label_A4E6:; return;
label_A4E7:; return;
label_A4EA:; return;
label_A4EB:; return;
label_A4EE:; return;
label_A4EF:; return;
label_A4F2:; return;
label_A4F5:; return;
label_A4F8:; return;
label_A4FB:; return;
label_A4FE:; return;
label_A501:; return;
label_A504:; return;
label_A507:; return;
label_A50A:; return;
label_A50D:; return;
label_A510:; return;
label_A512:; return;
label_A515:; return;
label_A516:; return;
label_A518:; return;
label_A519:; return;
label_A51C:; return;
label_A51E:; return;
label_A521:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52E:; return;
label_A530:; return;
label_A532:; return;
label_A534:; return;
label_A535:; return;
label_A537:; return;
label_A538:; return;
label_A53A:; return;
label_A53C:; return;
label_A53F:; return;
label_A542:; return;
label_A544:; return;
label_A545:; return;
label_A547:; return;
label_A549:; return;
label_A54B:; return;
label_A54D:; return;
label_A54E:; return;
label_A54F:; return;
label_A551:; return;
label_A552:; return;
label_A554:; return;
label_A555:; return;
label_A558:; return;
label_A55A:; return;
label_A55D:; return;
label_A55E:; return;
label_A55F:; return;
label_A561:; return;
label_A562:; return;
label_A565:; return;
label_A566:; return;
label_A568:; return;
label_A56B:; return;
label_A56C:; return;
label_A56F:; return;
label_A570:; return;
label_A572:; return;
label_A575:; return;
label_A576:; return;
label_A579:; return;
label_A57A:; return;
label_A57D:; return;
label_A57F:; return;
label_A580:; return;
label_A583:; return;
label_A584:; return;
label_A587:; return;
label_A588:; return;
label_A58A:; return;
label_A58D:; return;
label_A58E:; return;
label_A591:; return;
label_A592:; return;
label_A595:; return;
label_A596:; return;
label_A598:; return;
label_A59A:; return;
label_A59C:; return;
label_A59D:; return;
label_A59F:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A5:; return;
label_A5A7:; return;
label_A5A9:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B1:; return;
label_A5B3:; return;
label_A5B5:; return;
label_A5B7:; return;
label_A5B9:; return;
label_A5BB:; return;
label_A5BD:; return;
label_A5BF:; return;
label_A5C1:; return;
label_A5C3:; return;
label_A5C6:; return;
label_A5C8:; return;
label_A5CA:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5D1:; return;
label_A5D3:; return;
label_A5D5:; return;
label_A5D7:; return;
label_A5D9:; return;
label_A5DA:; return;
label_A5DC:; return;
label_A5DD:; return;
label_A5DE:; return;
label_A5E0:; return;
label_A5E2:; return;
label_A5E4:; return;
label_A5E6:; return;
label_A5E8:; return;
label_A5EB:; return;
label_A5ED:; return;
label_A5EE:; return;
label_A5F0:; return;
label_A5F1:; return;
label_A5F2:; return;
label_A5F4:; return;
label_A5F6:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FD:; return;
label_A5FF:; return;
label_A600:; return;
label_A602:; return;
label_A604:; return;
label_A605:; return;
label_A606:; return;
label_A608:; return;
label_A60A:; return;
label_A60C:; return;
label_A60E:; return;
label_A610:; return;
label_A611:; return;
label_A612:; return;
label_A615:; return;
label_A617:; return;
label_A618:; return;
label_A61A:; return;
label_A61D:; return;
label_A61E:; return;
label_A620:; return;
label_A623:; return;
label_A624:; return;
label_A626:; return;
label_A628:; return;
label_A629:; return;
label_A62A:; return;
label_A62D:; return;
label_A62F:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A637:; return;
label_A639:; return;
label_A63B:; return;
label_A63D:; return;
label_A63F:; return;
label_A641:; return;
label_A643:; return;
label_A645:; return;
label_A647:; return;
label_A649:; return;
label_A64B:; return;
label_A64D:; return;
label_A64F:; return;
label_A651:; return;
label_A653:; return;
label_A655:; return;
label_A656:; return;
label_A658:; return;
label_A65A:; return;
label_A65C:; return;
label_A65E:; return;
label_A660:; return;
label_A662:; return;
label_A664:; return;
label_A666:; return;
label_A668:; return;
label_A66A:; return;
label_A66B:; return;
label_A66D:; return;
label_A66F:; return;
label_A671:; return;
label_A673:; return;
label_A675:; return;
label_A677:; return;
label_A679:; return;
label_A67B:; return;
label_A67D:; return;
label_A67F:; return;
label_A680:; return;
label_A682:; return;
label_A683:; return;
label_A685:; return;
label_A687:; return;
label_A689:; return;
label_A68B:; return;
label_A68D:; return;
label_A68F:; return;
label_A691:; return;
label_A693:; return;
label_A695:; return;
label_A697:; return;
label_A69A:; return;
label_A69B:; return;
label_A69D:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A5:; return;
label_A6A8:; return;
label_A6AB:; return;
label_A6AC:; return;
label_A6AE:; return;
label_A6B0:; return;
label_A6B1:; return;
label_A6B2:; return;
label_A6B5:; return;
label_A6B6:; return;
label_A6B8:; return;
label_A6BA:; return;
label_A6BC:; return;
label_A6BE:; return;
label_A6C0:; return;
label_A6C1:; return;
label_A6C2:; return;
label_A6C4:; return;
label_A6C6:; return;
label_A6C8:; return;
label_A6CA:; return;
label_A6CC:; return;
label_A6CE:; return;
label_A6CF:; return;
label_A6D0:; return;
label_A6D1:; return;
label_A6D2:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D7:; return;
label_A6DA:; return;
label_A6DC:; return;
label_A6DE:; return;
label_A6E0:; return;
label_A6E1:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6E9:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EF:; return;
label_A6F0:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F6:; return;
label_A6F8:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FE:; return;
label_A700:; return;
label_A702:; return;
label_A704:; return;
label_A706:; return;
label_A707:; return;
label_A708:; return;
label_A70A:; return;
label_A70C:; return;
label_A70F:; return;
label_A711:; return;
label_A712:; return;
label_A714:; return;
label_A716:; return;
label_A718:; return;
label_A71B:; return;
label_A71C:; return;
label_A71F:; return;
label_A720:; return;
label_A723:; return;
label_A724:; return;
label_A726:; return;
label_A728:; return;
label_A72A:; return;
label_A72C:; return;
label_A72E:; return;
label_A730:; return;
label_A732:; return;
label_A733:; return;
label_A734:; return;
label_A736:; return;
label_A738:; return;
label_A739:; return;
label_A73A:; return;
label_A73D:; return;
label_A73F:; return;
label_A740:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A74A:; return;
label_A74C:; return;
label_A74E:; return;
label_A750:; return;
label_A752:; return;
label_A753:; return;
label_A755:; return;
label_A756:; return;
label_A758:; return;
label_A75A:; return;
label_A75C:; return;
label_A75E:; return;
label_A760:; return;
label_A762:; return;
label_A764:; return;
label_A766:; return;
label_A768:; return;
label_A76A:; return;
label_A76C:; return;
label_A76E:; return;
label_A770:; return;
label_A772:; return;
label_A774:; return;
label_A776:; return;
label_A777:; return;
label_A778:; return;
label_A77A:; return;
label_A77C:; return;
label_A77E:; return;
label_A780:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78A:; return;
label_A78C:; return;
label_A78E:; return;
label_A791:; return;
label_A792:; return;
label_A795:; return;
label_A797:; return;
label_A799:; return;
label_A79A:; return;
label_A79C:; return;
label_A79E:; return;
label_A7A0:; return;
label_A7A2:; return;
label_A7A4:; return;
label_A7A6:; return;
label_A7A7:; return;
label_A7A8:; return;
label_A7A9:; return;
label_A7AA:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B3:; return;
label_A7B4:; return;
label_A7B6:; return;
label_A7B8:; return;
label_A7BA:; return;
label_A7BD:; return;
label_A7BE:; return;
label_A7BF:; return;
label_A7C0:; return;
label_A7C2:; return;
label_A7C5:; return;
label_A7C6:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CC:; return;
label_A7CF:; return;
label_A7D2:; return;
label_A7D4:; return;
label_A7D6:; return;
label_A7D8:; return;
label_A7DA:; return;
label_A7DB:; return;
label_A7DC:; return;
label_A7DE:; return;
label_A7E0:; return;
label_A7E2:; return;
label_A7E5:; return;
label_A7E8:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7F0:; return;
label_A7F2:; return;
label_A7F4:; return;
label_A7F6:; return;
label_A7F8:; return;
label_A7FB:; return;
label_A7FE:; return;
label_A801:; return;
label_A802:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A80A:; return;
label_A80C:; return;
label_A80E:; return;
label_A811:; return;
label_A814:; return;
label_A817:; return;
label_A818:; return;
label_A81A:; return;
label_A81D:; return;
label_A81E:; return;
label_A820:; return;
label_A822:; return;
label_A824:; return;
label_A826:; return;
label_A828:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A830:; return;
label_A831:; return;
label_A832:; return;
label_A834:; return;
label_A836:; return;
label_A838:; return;
label_A83A:; return;
label_A83B:; return;
label_A83E:; return;
label_A840:; return;
label_A841:; return;
label_A842:; return;
label_A844:; return;
label_A847:; return;
label_A848:; return;
label_A84A:; return;
label_A84C:; return;
label_A84E:; return;
label_A851:; return;
label_A853:; return;
label_A855:; return;
label_A856:; return;
label_A858:; return;
label_A85A:; return;
label_A85C:; return;
label_A85F:; return;
label_A860:; return;
label_A862:; return;
label_A864:; return;
label_A866:; return;
label_A868:; return;
label_A86A:; return;
label_A86C:; return;
label_A86D:; return;
label_A86E:; return;
label_A870:; return;
label_A872:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
label_A876:; return;
label_A878:; return;
label_A87A:; return;
label_A87C:; return;
label_A87E:; return;
label_A880:; return;
label_A882:; return;
label_A883:; return;
label_A884:; return;
label_A886:; return;
label_A888:; return;
label_A889:; return;
label_A88A:; return;
label_A88C:; return;
label_A88E:; return;
label_A890:; return;
label_A892:; return;
label_A894:; return;
label_A896:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89C:; return;
label_A89F:; return;
label_A8A0:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A8:; return;
label_A8AB:; return;
label_A8AD:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B0:; return;
label_A8B2:; return;
label_A8B4:; return;
label_A8B6:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C2:; return;
label_A8C4:; return;
label_A8C5:; return;
label_A8C6:; return;
label_A8C8:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D3:; return;
label_A8D4:; return;
label_A8D6:; return;
label_A8D8:; return;
label_A8DA:; return;
label_A8DB:; return;
label_A8DC:; return;
label_A8DE:; return;
label_A8E0:; return;
label_A8E2:; return;
label_A8E3:; return;
label_A8E4:; return;
label_A8E6:; return;
label_A8E8:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EC:; return;
label_A8EE:; return;
label_A8F0:; return;
label_A8F1:; return;
label_A8F2:; return;
label_A8F4:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FC:; return;
label_A8FE:; return;
label_A900:; return;
label_A902:; return;
label_A903:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A90A:; return;
label_A90C:; return;
label_A90E:; return;
label_A910:; return;
label_A912:; return;
label_A914:; return;
label_A916:; return;
label_A918:; return;
label_A91A:; return;
label_A91C:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A922:; return;
label_A924:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92C:; return;
label_A92E:; return;
label_A930:; return;
label_A932:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A938:; return;
label_A93A:; return;
label_A93C:; return;
label_A93E:; return;
label_A941:; return;
label_A942:; return;
label_A945:; return;
label_A947:; return;
label_A949:; return;
label_A94A:; return;
label_A94C:; return;
label_A94E:; return;
label_A94F:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95A:; return;
label_A95D:; return;
label_A95E:; return;
label_A960:; return;
label_A963:; return;
label_A964:; return;
label_A966:; return;
label_A968:; return;
label_A969:; return;
label_A96A:; return;
label_A96D:; return;
label_A96E:; return;
label_A96F:; return;
label_A970:; return;
label_A972:; return;
label_A975:; return;
label_A976:; return;
label_A979:; return;
label_A97B:; return;
label_A97C:; return;
label_A97F:; return;
label_A982:; return;
label_A984:; return;
label_A986:; return;
label_A989:; return;
label_A98A:; return;
label_A98D:; return;
label_A98E:; return;
label_A991:; return;
label_A992:; return;
label_A994:; return;
label_A996:; return;
label_A997:; return;
label_A99A:; return;
label_A99D:; return;
label_A99F:; return;
label_A9A1:; return;
label_A9A3:; return;
label_A9A5:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AE:; return;
label_A9B0:; return;
label_A9B2:; return;
label_A9B4:; return;
label_A9B6:; return;
label_A9B8:; return;
label_A9BA:; return;
label_A9BC:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C2:; return;
label_A9C3:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CA:; return;
label_A9CC:; return;
label_A9CE:; return;
label_A9D0:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D6:; return;
label_A9D8:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DE:; return;
label_A9DF:; return;
label_A9E2:; return;
label_A9E4:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E9:; return;
label_A9EB:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F7:; return;
label_A9F8:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0C:; return;
label_AA0E:; return;
label_AA10:; return;
label_AA11:; return;
label_AA13:; return;
label_AA15:; return;
label_AA17:; return;
label_AA19:; return;
label_AA1B:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA20:; return;
label_AA23:; return;
label_AA25:; return;
label_AA27:; return;
label_AA29:; return;
label_AA2A:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA33:; return;
label_AA34:; return;
label_AA37:; return;
label_AA39:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA45:; return;
label_AA47:; return;
label_AA48:; return;
label_AA4A:; return;
label_AA4B:; return;
label_AA4D:; return;
label_AA4E:; return;
label_AA51:; return;
label_AA52:; return;
label_AA54:; return;
label_AA57:; return;
label_AA59:; return;
label_AA5B:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA61:; return;
label_AA62:; return;
label_AA65:; return;
label_AA67:; return;
label_AA68:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA70:; return;
label_AA72:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7C:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA80:; return;
label_AA82:; return;
label_AA84:; return;
label_AA86:; return;
label_AA88:; return;
label_AA8A:; return;
label_AA8B:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA91:; return;
label_AA93:; return;
label_AA95:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAB:; return;
label_AAAD:; return;
label_AAAF:; return;
label_AAB1:; return;
label_AAB4:; return;
label_AAB6:; return;
label_AAB8:; return;
label_AABA:; return;
label_AABC:; return;
label_AABE:; return;
label_AAC0:; return;
label_AAC2:; return;
label_AAC4:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AACA:; return;
label_AACC:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD8:; return;
label_AADA:; return;
label_AADC:; return;
label_AADE:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE4:; return;
label_AAE6:; return;
label_AAE8:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAF0:; return;
label_AAF3:; return;
label_AAF5:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFC:; return;
label_AAFE:; return;
label_AB00:; return;
label_AB02:; return;
label_AB04:; return;
label_AB05:; return;
label_AB06:; return;
label_AB08:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0D:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB17:; return;
label_AB18:; return;
label_AB1B:; return;
label_AB1C:; return;
label_AB1D:; return;
label_AB1E:; return;
label_AB21:; return;
label_AB22:; return;
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
label_AB3B:; return;
label_AB3D:; return;
label_AB3F:; return;
label_AB42:; return;
label_AB45:; return;
label_AB47:; return;
label_AB49:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB56:; return;
label_AB58:; return;
label_AB5A:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB60:; return;
label_AB62:; return;
label_AB64:; return;
label_AB66:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6A:; return;
label_AB6D:; return;
label_AB6E:; return;
label_AB71:; return;
label_AB74:; return;
label_AB77:; return;
label_AB78:; return;
label_AB7B:; return;
label_AB7C:; return;
label_AB7E:; return;
label_AB80:; return;
label_AB82:; return;
label_AB84:; return;
label_AB85:; return;
label_AB86:; return;
label_AB88:; return;
label_AB89:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB90:; return;
label_AB92:; return;
label_AB94:; return;
label_AB95:; return;
label_AB96:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9D:; return;
label_ABA0:; return;
label_ABA3:; return;
label_ABA4:; return;
label_ABA5:; return;
label_ABA6:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABB0:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB6:; return;
label_ABB9:; return;
label_ABBB:; return;
label_ABBC:; return;
label_ABBF:; return;
label_ABC1:; return;
label_ABC2:; return;
label_ABC5:; return;
label_ABC7:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD6:; return;
label_ABD7:; return;
label_ABD9:; return;
label_ABDA:; return;
label_ABDD:; return;
label_ABDE:; return;
label_ABE0:; return;
label_ABE2:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABEE:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF9:; return;
label_ABFA:; return;
label_ABFD:; return;
label_ABFF:; return;
label_AC02:; return;
label_AC04:; return;
label_AC05:; return;
label_AC06:; return;
label_AC09:; return;
label_AC0A:; return;
label_AC0D:; return;
label_AC0F:; return;
label_AC11:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC17:; return;
label_AC18:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC20:; return;
label_AC21:; return;
label_AC22:; return;
label_AC23:; return;
label_AC26:; return;
label_AC28:; return;
label_AC2A:; return;
label_AC2C:; return;
label_AC2E:; return;
label_AC30:; return;
label_AC33:; return;
label_AC34:; return;
label_AC36:; return;
label_AC38:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC41:; return;
label_AC43:; return;
label_AC45:; return;
label_AC46:; return;
label_AC48:; return;
label_AC4A:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC51:; return;
label_AC53:; return;
label_AC54:; return;
label_AC56:; return;
label_AC59:; return;
label_AC5B:; return;
label_AC5E:; return;
label_AC61:; return;
label_AC63:; return;
label_AC65:; return;
label_AC67:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC72:; return;
label_AC75:; return;
label_AC76:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8E:; return;
label_AC90:; return;
label_AC92:; return;
label_AC94:; return;
label_AC96:; return;
label_AC98:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9E:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA6:; return;
label_ACA8:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBE:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDC:; return;
label_ACDE:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE7:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD00:; return;
label_AD02:; return;
label_AD04:; return;
label_AD06:; return;
label_AD08:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0C:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD11:; return;
label_AD13:; return;
label_AD15:; return;
label_AD17:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD20:; return;
label_AD22:; return;
label_AD24:; return;
label_AD26:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD34:; return;
label_AD36:; return;
label_AD38:; return;
label_AD39:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3E:; return;
label_AD40:; return;
label_AD42:; return;
label_AD43:; return;
label_AD45:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4B:; return;
label_AD4D:; return;
label_AD4F:; return;
label_AD50:; return;
label_AD52:; return;
label_AD54:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5B:; return;
label_AD5D:; return;
label_AD5F:; return;
label_AD61:; return;
label_AD63:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD73:; return;
label_AD75:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD82:; return;
label_AD85:; return;
label_AD87:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD95:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9F:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB8:; return;
label_ADBB:; return;
label_ADBD:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADDF:; return;
label_ADE1:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFC:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE03:; return;
label_AE05:; return;
label_AE06:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE15:; return;
label_AE17:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE21:; return;
label_AE23:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE40:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE51:; return;
label_AE52:; return;
label_AE54:; return;
label_AE55:; return;
label_AE57:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5E:; return;
label_AE61:; return;
label_AE63:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE72:; return;
label_AE74:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE82:; return;
label_AE85:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE93:; return;
label_AE94:; return;
label_AE95:; return;
label_AE96:; return;
label_AE98:; return;
label_AE9A:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBC:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECD:; return;
label_AECF:; return;
label_AED1:; return;
label_AED3:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFD:; return;
label_AF00:; return;
label_AF02:; return;
label_AF04:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0B:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF10:; return;
label_AF13:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
}

static void func_9C00_b13_body(int _entry) { /* check_new_enemies */
    switch (_entry) {
        case 1: goto label_9C7F;
    }
label_9C00:; /* check_new_enemies */
    /* $9C00: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9C01:;
    /* $9C01: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9C03:;
    /* $9C03: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9C05:;
    /* $9C05: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xFF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xFF); g_cpu.A=r&0xFF; }
label_9C07:;
    /* $9C07: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_9C09:;
    /* $9C09: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_9C0B:;
    /* $9C0B: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9C0D:;
    /* $9C0D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_9C0F:;
    /* $9C0F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_9C11:;
    /* $9C11: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2E); FLAG_NZ(g_cpu.A);
label_9C13:;
    /* $9C13: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9C15:;
    /* $9C15: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C4F;
label_9C17:;
    /* $9C17: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x9F); FLAG_NZ(g_cpu.Y);
label_9C19:; /* main_unknown_24 */
    /* $9C19: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C33;
label_9C1B:;
    /* $9C1B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAAFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C1E:;
    /* $9C1E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C20:;
    /* $9C20: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C33;
label_9C22:;
    /* $9C22: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C2B;
label_9C24:;
    /* $9C24: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xABFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C27:;
    /* $9C27: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C29:;
    /* $9C29: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C33;
label_9C2B:;
    /* $9C2B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C2C:;
    /* $9C2C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C2E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9C80, 13)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C2C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C2F:;
    /* $9C2F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x9F; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C31:;
    /* $9C31: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C17;
    }
label_9C33:;
    /* $9C33: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x9E); FLAG_NZ(g_cpu.Y);
label_9C35:;
    /* $9C35: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9C4A;
label_9C37:;
    /* $9C37: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAAFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C3A:;
    /* $9C3A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C3C:;
    /* $9C3C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C4A;
label_9C3E:;
    /* $9C3E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C47;
label_9C40:;
    /* $9C40: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xABFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C43:;
    /* $9C43: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C45:;
    /* $9C45: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C4A;
label_9C47:;
    /* $9C47: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C48:;
    /* $9C48: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C37;
    }
label_9C4A:;
    /* $9C4A: 84 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.Y);
label_9C4C:;
    /* $9C4C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9C7F, 13); return;
label_9C4F:;
    /* $9C4F: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x9E); FLAG_NZ(g_cpu.Y);
label_9C51:;
    /* $9C51: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_9C53:;
    /* $9C53: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAB00 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C56:; /* main_pickelman_bull */
    /* $9C56: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C68;
label_9C58:;
    /* $9C58: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C61;
label_9C5A:;
    /* $9C5A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_9C5C:;
    /* $9C5C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAC00 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C5F:;
    /* $9C5F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C68;
label_9C61:;
    /* $9C61: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C63); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9C80, 13)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C61, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C64:;
    /* $9C64: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x9E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9C66:;
    /* $9C66: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C4F;
    }
label_9C68:;
    /* $9C68: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x9F); FLAG_NZ(g_cpu.Y);
label_9C6A:;
    /* $9C6A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_9C6C:;
    /* $9C6C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAB00 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C6F:;
    /* $9C6F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C7D;
label_9C71:;
    /* $9C71: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9C7A;
label_9C73:;
    /* $9C73: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_9C75:;
    /* $9C75: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAC00 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C78:;
    /* $9C78: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9C7D;
label_9C7A:;
    /* $9C7A: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9C7B:;
    /* $9C7B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C6A;
    }
label_9C7D:;
    /* $9C7D: 84 */ maybe_trigger_vblank(3); nes_write(0x9F, g_cpu.Y);
label_9C7F:;
    /* $9C7F: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9C00_b13(void) { /* check_new_enemies */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C00_b13");
#endif
    func_9C00_b13_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C7F_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C7F_b13");
#endif
    func_9C00_b13_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8006_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b13");
#endif
label_8006:;
    /* $8006: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8027;
label_8008:;
    /* $8008: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_8009:;
    /* $8009: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x28); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x322F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_800E:;
    /* $800E: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8010:;
    /* $8010: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4D41 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8013:;
    /* $8013: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8015:;
    /* $8015: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5D2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8018:;
    /* $8018: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801A:;
    /* $801A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6C); g_cpu.A=r&0xFF; }
label_801C:;
    /* $801C: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7A74; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801F:;
    /* $801F: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8021:;
    /* $8021: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8023:; /* jump_local_ptr */
    /* $8023: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8025:;
    /* $8025: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA4; FLAG_NZ(g_cpu.Y);
label_8027:;
    /* $8027: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8028:;
    /* $8028: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802A:;
    /* $802A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD6D0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802D:;
    /* $802D: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEA); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_802F:;
    /* $802F: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8030:;
    /* $8030: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8032:;
    /* $8032: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8034:;
    /* $8034: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_8036:;
    /* $8036: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1713; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8039:;
    /* $8039: 1A */ maybe_trigger_vblank(2); /* NOP */
label_803A:; /* read_ptr */
    /* $803A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2522 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_803D:;
    /* $803D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_803E:;
    /* $803E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8040:;
    /* $8040: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8041:;
    /* $8041: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x39 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8043:;
    /* $8043: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4943 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8046:;
    /* $8046: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x554F, -1); return;
}

void func_800F_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800F_b13");
#endif
label_800F:;
    /* $800F: 3A */ maybe_trigger_vblank(2); /* NOP */
label_8010:;
    /* $8010: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4D41 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8013:;
    /* $8013: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8015:;
    /* $8015: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5D2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8018:;
    /* $8018: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801A:;
    /* $801A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6C); g_cpu.A=r&0xFF; }
label_801C:;
    /* $801C: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7A74; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801F:;
    /* $801F: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8021:;
    /* $8021: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8023:; /* jump_local_ptr */
    /* $8023: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8025:;
    /* $8025: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA4; FLAG_NZ(g_cpu.Y);
label_8027:;
    /* $8027: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8028:;
    /* $8028: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802A:;
    /* $802A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD6D0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802D:;
    /* $802D: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEA); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_802F:;
    /* $802F: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8030:;
    /* $8030: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8032:;
    /* $8032: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8034:;
    /* $8034: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_8036:;
    /* $8036: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1713; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8039:;
    /* $8039: 1A */ maybe_trigger_vblank(2); /* NOP */
label_803A:; /* read_ptr */
    /* $803A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2522 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_803D:;
    /* $803D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_803E:;
    /* $803E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8040:;
    /* $8040: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8041:;
    /* $8041: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x39 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8043:;
    /* $8043: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4943 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8046:;
    /* $8046: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x554F, -1); return;
}

void func_8009_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b13");
#endif
label_8009:;
    /* $8009: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x28); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x322F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_800E:;
    /* $800E: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x3A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8010:;
    /* $8010: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4D41 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8013:;
    /* $8013: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8015:;
    /* $8015: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5D2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8018:;
    /* $8018: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801A:;
    /* $801A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6C); g_cpu.A=r&0xFF; }
label_801C:;
    /* $801C: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7A74; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801F:;
    /* $801F: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8021:;
    /* $8021: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8023:; /* jump_local_ptr */
    /* $8023: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8025:;
    /* $8025: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA4; FLAG_NZ(g_cpu.Y);
label_8027:;
    /* $8027: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8028:;
    /* $8028: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802A:;
    /* $802A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD6D0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802D:;
    /* $802D: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEA); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_802F:;
    /* $802F: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8030:;
    /* $8030: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8032:;
    /* $8032: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8034:;
    /* $8034: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_8036:;
    /* $8036: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1713; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8039:;
    /* $8039: 1A */ maybe_trigger_vblank(2); /* NOP */
label_803A:; /* read_ptr */
    /* $803A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2522 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_803D:;
    /* $803D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_803E:;
    /* $803E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8040:;
    /* $8040: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8041:;
    /* $8041: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x39 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8043:;
    /* $8043: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4943 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8046:;
    /* $8046: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x554F, -1); return;
}

void func_800C_b13(void) { /* process_sprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800C_b13");
#endif
label_800C:; /* process_sprites */
    /* $800C: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x3632; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_800F:;
    /* $800F: 3A */ maybe_trigger_vblank(2); /* NOP */
label_8010:;
    /* $8010: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4D41 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8013:;
    /* $8013: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8015:;
    /* $8015: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5D2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8018:;
    /* $8018: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801A:;
    /* $801A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6C); g_cpu.A=r&0xFF; }
label_801C:;
    /* $801C: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7A74; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801F:;
    /* $801F: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8021:;
    /* $8021: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8023:; /* jump_local_ptr */
    /* $8023: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8025:;
    /* $8025: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA4; FLAG_NZ(g_cpu.Y);
label_8027:;
    /* $8027: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8028:;
    /* $8028: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802A:;
    /* $802A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD6D0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802D:;
    /* $802D: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEA); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_802F:;
    /* $802F: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8030:;
    /* $8030: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8032:;
    /* $8032: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8034:;
    /* $8034: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_8036:;
    /* $8036: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1713; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8039:;
    /* $8039: 1A */ maybe_trigger_vblank(2); /* NOP */
label_803A:; /* read_ptr */
    /* $803A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2522 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_803D:;
    /* $803D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_803E:;
    /* $803E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8040:;
    /* $8040: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8041:;
    /* $8041: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x39 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8043:;
    /* $8043: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4943 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8046:;
    /* $8046: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x554F, -1); return;
}

void func_8012_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8012_b13");
#endif
label_8012:;
    /* $8012: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x5A53); FLAG_NZ(g_cpu.A);
label_8015:;
    /* $8015: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5D2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8018:;
    /* $8018: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x66 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801A:;
    /* $801A: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x6C + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x6C); g_cpu.A=r&0xFF; }
label_801C:;
    /* $801C: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7A74; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_801F:;
    /* $801F: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8021:;
    /* $8021: 89 */ maybe_trigger_vblank(2); /* NOP */
label_8023:; /* jump_local_ptr */
    /* $8023: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8025:;
    /* $8025: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xA4; FLAG_NZ(g_cpu.Y);
label_8027:;
    /* $8027: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8028:;
    /* $8028: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802A:;
    /* $802A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD6D0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_802D:;
    /* $802D: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEA); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_802F:;
    /* $802F: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8030:;
    /* $8030: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8032:;
    /* $8032: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8034:;
    /* $8034: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_8036:;
    /* $8036: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1713; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8039:;
    /* $8039: 1A */ maybe_trigger_vblank(2); /* NOP */
label_803A:; /* read_ptr */
    /* $803A: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x2522 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_803D:;
    /* $803D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_803E:;
    /* $803E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8040:;
    /* $8040: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8041:;
    /* $8041: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x39 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8043:;
    /* $8043: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4943 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8046:;
    /* $8046: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x554F, -1); return;
}

void func_9000_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9000_b13");
#endif
label_9000:;
    /* $9000: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCE03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9003:;
    /* $9003: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9005:;
    /* $9005: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9007:;
    /* $9007: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9009:;
    /* $9009: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_900B:;
    /* $900B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900D:;
    /* $900D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900F:;
    /* $900F: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xC1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9011:;
    /* $9011: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9013:;
    /* $9013: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9015:;
    /* $9015: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9017:;
    /* $9017: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9019:;
    /* $9019: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901B:;
    /* $901B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901D:;
    /* $901D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901F:;
    /* $901F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9021:;
    /* $9021: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9023:;
    /* $9023: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9025:;
    /* $9025: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9027:;
    /* $9027: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9029:;
    /* $9029: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_902B:;
    /* $902B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902D:;
    /* $902D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902F:;
    /* $902F: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xD1; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9031:;
    /* $9031: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9033:;
    /* $9033: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9035:;
    /* $9035: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9037:;
    /* $9037: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9039:;
    /* $9039: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903B:;
    /* $903B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903D:;
    /* $903D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903F:;
    /* $903F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9041:;
    /* $9041: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9043:;
    /* $9043: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9045:;
    /* $9045: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9047:;
    /* $9047: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9049:;
    /* $9049: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_904B:;
    /* $904B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904D:;
    /* $904D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904F:;
    /* $904F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9051:;
    /* $9051: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9053:;
    /* $9053: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9055:;
    /* $9055: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9056:;
    /* $9056: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_9057:;
    /* $9057: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9059:;
    /* $9059: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905B:;
    /* $905B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905D:;
    /* $905D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905F:;
    /* $905F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9061:;
    /* $9061: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9063:;
    /* $9063: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9065:;
    /* $9065: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9067:;
    /* $9067: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9069:;
    /* $9069: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_906B:;
    /* $906B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906D:;
    /* $906D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906F:;
    /* $906F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9071:;
    /* $9071: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9073:;
    /* $9073: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9075:;
    /* $9075: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9077:;
    /* $9077: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9079:;
    /* $9079: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907B:;
    /* $907B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907D:;
    /* $907D: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_907E:;
    /* $907E: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEF03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9081:;
    /* $9081: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9083:;
    /* $9083: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9085:;
    /* $9085: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9087:;
    /* $9087: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9089:;
    /* $9089: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908B:;
    /* $908B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908D:;
    /* $908D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908F:;
    /* $908F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9091:;
    /* $9091: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9093:;
    /* $9093: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9095:;
    /* $9095: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9097:;
    /* $9097: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9099:;
    /* $9099: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_909B:;
    /* $909B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909D:;
    /* $909D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909F:;
    /* $909F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_90A1:;
    /* $90A1: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_90A3:;
    /* $90A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A5:;
    /* $90A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A7:;
    /* $90A7: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x03D4); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_9006_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9006_b13");
#endif
label_9006:;
    /* $9006: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDE03 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9009:;
    /* $9009: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_900B:;
    /* $900B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900D:;
    /* $900D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900F:;
    /* $900F: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xC1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9011:;
    /* $9011: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9013:;
    /* $9013: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9015:;
    /* $9015: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9017:;
    /* $9017: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9019:;
    /* $9019: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901B:;
    /* $901B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901D:;
    /* $901D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901F:;
    /* $901F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9021:;
    /* $9021: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9023:;
    /* $9023: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9025:;
    /* $9025: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9027:;
    /* $9027: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9029:;
    /* $9029: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_902B:;
    /* $902B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902D:;
    /* $902D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902F:;
    /* $902F: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xD1; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9031:;
    /* $9031: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9033:;
    /* $9033: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9035:;
    /* $9035: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9037:;
    /* $9037: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9039:;
    /* $9039: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903B:;
    /* $903B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903D:;
    /* $903D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903F:;
    /* $903F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9041:;
    /* $9041: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9043:;
    /* $9043: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9045:;
    /* $9045: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9047:;
    /* $9047: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9049:;
    /* $9049: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_904B:;
    /* $904B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904D:;
    /* $904D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904F:;
    /* $904F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9051:;
    /* $9051: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9053:;
    /* $9053: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9055:;
    /* $9055: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9056:;
    /* $9056: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_9057:;
    /* $9057: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9059:;
    /* $9059: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905B:;
    /* $905B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905D:;
    /* $905D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905F:;
    /* $905F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9061:;
    /* $9061: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9063:;
    /* $9063: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9065:;
    /* $9065: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9067:;
    /* $9067: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9069:;
    /* $9069: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_906B:;
    /* $906B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906D:;
    /* $906D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906F:;
    /* $906F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9071:;
    /* $9071: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9073:;
    /* $9073: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9075:;
    /* $9075: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9077:;
    /* $9077: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9079:;
    /* $9079: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907B:;
    /* $907B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907D:;
    /* $907D: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_907E:;
    /* $907E: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEF03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9081:;
    /* $9081: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9083:;
    /* $9083: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9085:;
    /* $9085: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9087:;
    /* $9087: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9089:;
    /* $9089: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908B:;
    /* $908B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908D:;
    /* $908D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908F:;
    /* $908F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9091:;
    /* $9091: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9093:;
    /* $9093: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9095:;
    /* $9095: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9097:;
    /* $9097: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9099:;
    /* $9099: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_909B:;
    /* $909B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909D:;
    /* $909D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909F:;
    /* $909F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_90A1:;
    /* $90A1: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_90A3:;
    /* $90A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A5:;
    /* $90A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A7:;
    /* $90A7: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x03D4); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_9003_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9003_b13");
#endif
label_9003:;
    /* $9003: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9005:;
    /* $9005: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9007:;
    /* $9007: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9009:;
    /* $9009: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_900B:;
    /* $900B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900D:;
    /* $900D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900F:;
    /* $900F: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xC1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9011:;
    /* $9011: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9013:;
    /* $9013: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9015:;
    /* $9015: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9017:;
    /* $9017: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9019:;
    /* $9019: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901B:;
    /* $901B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901D:;
    /* $901D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901F:;
    /* $901F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9021:;
    /* $9021: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9023:;
    /* $9023: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9025:;
    /* $9025: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9027:;
    /* $9027: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9029:;
    /* $9029: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_902B:;
    /* $902B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902D:;
    /* $902D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902F:;
    /* $902F: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xD1; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9031:;
    /* $9031: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9033:;
    /* $9033: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9035:;
    /* $9035: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9037:;
    /* $9037: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9039:;
    /* $9039: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903B:;
    /* $903B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903D:;
    /* $903D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903F:;
    /* $903F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9041:;
    /* $9041: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9043:;
    /* $9043: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9045:;
    /* $9045: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9047:;
    /* $9047: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9049:;
    /* $9049: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_904B:;
    /* $904B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904D:;
    /* $904D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904F:;
    /* $904F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9051:;
    /* $9051: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9053:;
    /* $9053: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9055:;
    /* $9055: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9056:;
    /* $9056: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_9057:;
    /* $9057: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9059:;
    /* $9059: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905B:;
    /* $905B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905D:;
    /* $905D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905F:;
    /* $905F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9061:;
    /* $9061: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9063:;
    /* $9063: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9065:;
    /* $9065: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9067:;
    /* $9067: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9069:;
    /* $9069: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_906B:;
    /* $906B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906D:;
    /* $906D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906F:;
    /* $906F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9071:;
    /* $9071: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9073:;
    /* $9073: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9075:;
    /* $9075: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9077:;
    /* $9077: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9079:;
    /* $9079: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907B:;
    /* $907B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907D:;
    /* $907D: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_907E:;
    /* $907E: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEF03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9081:;
    /* $9081: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9083:;
    /* $9083: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9085:;
    /* $9085: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9087:;
    /* $9087: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9089:;
    /* $9089: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908B:;
    /* $908B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908D:;
    /* $908D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908F:;
    /* $908F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9091:;
    /* $9091: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9093:;
    /* $9093: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9095:;
    /* $9095: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9097:;
    /* $9097: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9099:;
    /* $9099: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_909B:;
    /* $909B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909D:;
    /* $909D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909F:;
    /* $909F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_90A1:;
    /* $90A1: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_90A3:;
    /* $90A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A5:;
    /* $90A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A7:;
    /* $90A7: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x03D4); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_A000_b13(void) { /* main_needle_man_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A000_b13");
#endif
label_A000:; /* main_needle_man_j */
    /* $A000: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA000); return;
}

static void func_9C80_b13_body(int _entry) { /* spawn_enemy */
    switch (_entry) {
        case 1: goto label_9C9D;
    }
label_9C80:; /* spawn_enemy */
    /* $9C80: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C81:;
    /* $9C81: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1F; FLAG_NZ(g_cpu.X);
label_9C83:;
    /* $9C83: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x04C0 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9C86:;
    /* $9C86: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1C7F), 13); return; }
label_9C88:;
    /* $9C88: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9C89:;
    /* $9C89: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x0F; g_cpu.C=(g_cpu.X>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9C8B:;
    /* $9C8B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9C83;
    }
label_9C8D:;
    /* $9C8D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C8F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC43(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9C8D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9C90:;
    /* $9C90: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1C7F), 13); return; }
label_9C92:;
    /* $9C92: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9C93:;
    /* $9C93: 9D */ maybe_trigger_vblank(5); nes_write((0x04C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9C96:;
    /* $9C96: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9C97:;
    /* $9C97: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_9C99:;
    /* $9C99: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9C9A:;
    /* $9C9A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDEC2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9C9D:;
    /* $9C9D: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9C9F:;
    /* $9C9F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9CA0:;
    /* $9CA0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CA1:;
    /* $9CA1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CA2:;
    /* $9CA2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CA3:;
    /* $9CA3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9CA4:;
    /* $9CA4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0150 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA7:;
    /* $9CA7: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_9CA9:;
    /* $9CA9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1C7F), 13); return; }
label_9CAB:;
    /* $9CAB: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x04C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9CAE:;
    /* $9CAE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAB00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB1:;
    /* $9CB1: 9D */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CB4:;
    /* $9CB4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAC00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB7:;
    /* $9CB7: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CBA:;
    /* $9CBA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CBD:;
    /* $9CBD: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC0:;
    /* $9CC0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAE00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CC3:;
    /* $9CC3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9CC4:;
    /* $9CC4: 86 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.X);
label_9CC6:;
    /* $9CC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9CC8:;
    /* $9CC8: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9CCA:;
    /* $9CCA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CCC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CCA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CCD:;
    /* $9CCD: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x05); FLAG_NZ(g_cpu.X);
label_9CCF:;
    /* $9CCF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9CD0:;
    /* $9CD0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9CD1:;
    /* $9CD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9CD3:;
    /* $9CD3: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CD6:;
    /* $9CD6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CD9:;
    /* $9CD9: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CDC:;
    /* $9CDC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA100 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CDF:;
    /* $9CDF: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CE2:;
    /* $9CE2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CE5:;
    /* $9CE5: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CE8:;
    /* $9CE8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CEB:;
    /* $9CEB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CEB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CEE:;
    /* $9CEE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CF0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CF1:;
    /* $9CF1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA400 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF4:;
    /* $9CF4: 9D */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CF7:;
    /* $9CF7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA500 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CFA:;
    /* $9CFA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9CFB:;
    /* $9CFB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CFE:;
    /* $9CFE: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D01:;
    /* $9D01: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA700 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D04:;
    /* $9D04: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D07:;
    /* $9D07: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D09); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D0A:;
    /* $9D0A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9D0C:;
    /* $9D0C: 9D */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D0F:;
    /* $9D0F: 9D */ maybe_trigger_vblank(5); nes_write((0x0340 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D12:;
    /* $9D12: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D15:;
    /* $9D15: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D18:;
    /* $9D18: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D1B:;
    /* $9D1B: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D1E:;
    /* $9D1E: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D21:;
    /* $9D21: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9D23:;
    /* $9D23: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9D25:;
    /* $9D25: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; } return;
}

void func_9C80_b13(void) { /* spawn_enemy */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C80_b13");
#endif
    func_9C80_b13_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C9D_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C9D_b13");
#endif
    func_9C80_b13_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A006_b13(void) { /* main_doc_quick_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A006_b13");
#endif
label_A006:; /* main_doc_quick_j */
    /* $A006: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3B2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A009:; /* main_shadow_man_j */
    /* $A009: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4B47 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A00C:; /* main_snake_man_j */
    /* $A00C: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x5B55; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A00F:; /* main_wily_machine_B */
    /* $A00F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x6E62 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A012:; /* main_gemini_man_j */
    /* $A012: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x77) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A014:;
    /* $A014: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x887E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A017:;
    /* $A017: 8E */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.X);
label_A01A:;
    /* $A01A: 9D */ maybe_trigger_vblank(5); nes_write((0xA3A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A01D:;
    /* $A01D: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xAB); FLAG_NZ(g_cpu.A);
label_A01F:;
    /* $A01F: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB5B2); FLAG_NZ(g_cpu.A);
label_A022:;
    /* $A022: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A023:;
    /* $A023: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A026:;
    /* $A026: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD4D0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A029:;
    /* $A029: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDFDC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A02C:;
    /* $A02C: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A02E:;
    /* $A02E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: EB */ maybe_trigger_vblank(2); { uint8_t m=0xEE; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A031:;
    /* $A031: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A033:;
    /* $A033: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A035:;
    /* $A035: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0047), 13); return; }
label_A037:;
    /* $A037: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0049), 13); return; }
label_A039:; /* needle_man_init */
    /* $A039: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x22 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A03B:;
    /* $A03B: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A03C:;
    /* $A03C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3330); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A03F:; /* main_holograph */
    /* $A03F: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x39 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A041:;
    /* $A041: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x453F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A044:;
    /* $A044: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4F; FLAG_NZ(g_cpu.A);
label_A046:;
    /* $A046: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A048:;
    /* $A048: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8481 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A04B:;
    /* $A04B: 87 */ maybe_trigger_vblank(3); nes_write(0x8D, g_cpu.A & g_cpu.X); /* SAX */
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 8D */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.A);
label_A050:;
    /* $A050: 99 */ maybe_trigger_vblank(5); nes_write((0xAB9D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A053:;
    /* $A053: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xBCAE); FLAG_NZ(g_cpu.X);
label_A056:;
    /* $A056: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC7C3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A059:;
    /* $A059: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xCE)?1:0; g_cpu.X=(t-0xCE)&0xFF; FLAG_NZ(g_cpu.X); }
label_A05B:;
    /* $A05B: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A05D:;
    /* $A05D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0073), 13); return; }
label_A05F:;
    /* $A05F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x1B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A061:;
    /* $A061: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A063:;
    /* $A063: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A066:;
    /* $A066: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06C:;
    /* $A06C: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06F:;
    /* $A06F: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A072:;
    /* $A072: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A075:;
    /* $A075: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A078:;
    /* $A078: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3D39 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07B:;
    /* $A07B: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A07D:;
    /* $A07D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4D; FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0004), 13); return; }
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
    /* $A0B3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
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
    /* $A0DD: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0DF:;
    /* $A0DF: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E1:;
    /* $A0E1: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E3:;
    /* $A0E3: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E5:;
    /* $A0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
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
    /* $A0FF: 85 */ maybe_trigger_vblank(3); nes_write(0x54, g_cpu.A);
label_A101:;
    /* $A101: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x58 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A103:;
    /* $A103: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x7066 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A106:;
    /* $A106: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x9488 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A109:;
    /* $A109: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A10A:;
    /* $A10A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A10B:;
    /* $A10B: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A10D:;
    /* $A10D: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xEA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A10F:;
    /* $A10F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x2E16 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A112:;
    /* $A112: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A113:;
    /* $A113: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A115:;
    /* $A115: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAE); FLAG_NZ(g_cpu.Y);
label_A117:;
    /* $A117: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A118:;
    /* $A118: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A11A:;
    /* $A11A: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A11C:;
    /* $A11C: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A11E:;
    /* $A11E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0146), 13); return; }
label_A120:;
    /* $A120: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x6A52 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A123:;
    /* $A123: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A125:;
    /* $A125: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xCE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A129:;
    /* $A129: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x014F), 13); return; }
label_A12B:;
    /* $A12B: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A12C:;
    /* $A12C: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A12D:;
    /* $A12D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A12E:;
    /* $A12E: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xAA94 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A131:;
    /* $A131: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xD6; g_cpu.C=(g_cpu.Y>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A133:;
    /* $A133: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1A02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A136:;
    /* $A136: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A182;
label_A138:;
    /* $A138: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x7E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A13A:;
    /* $A13A: 96 */ maybe_trigger_vblank(4); nes_write((0xAA + g_cpu.Y) & 0xFF, g_cpu.X);
label_A13C:;
    /* $A13C: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A13E:;
    /* $A13E: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A140:;
    /* $A140: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A11C;
    }
label_A142:;
    /* $A142: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xECE2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A145:;
    /* $A145: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A147:;
    /* $A147: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A148:;
    /* $A148: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x382A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A14B:;
    /* $A14B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x4C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A14D:;
    /* $A14D: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A14E:;
    /* $A14E: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x72; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A150:; /* needle_man_headbutt */
    /* $A150: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A152:;
    /* $A152: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A153:;
    /* $A153: 96 */ maybe_trigger_vblank(4); nes_write((0xB0 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A155:;
    /* $A155: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A156:;
    /* $A156: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDA); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A158:;
    /* $A158: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A15A:;
    /* $A15A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A15B:;
    /* $A15B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A15C:;
    /* $A15C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x3420); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A15F:;
    /* $A15F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4C48 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A162:;
    /* $A162: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01B8), 13); return; }
label_A164:;
    /* $A164: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A165:;
    /* $A165: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0ED;
    }
label_A167:;
    /* $A167: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A16A:;
    /* $A16A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xBAB4); FLAG_NZ(g_cpu.X);
label_A16D:;
    /* $A16D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xCA; g_cpu.C=(g_cpu.Y>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_A16F:;
    /* $A16F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xE8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A171:;
    /* $A171: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A174:;
    /* $A174: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2622); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A177:;
    /* $A177: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x48 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A179:;
    /* $A179: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A17A:;
    /* $A17A: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x7C6E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A17D:;
    /* $A17D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A17E:;
    /* $A17E: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A17F:;
    /* $A17F: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A182:;
    /* $A182: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A184:;
    /* $A184: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A186:;
    /* $A186: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A187:;
    /* $A187: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A188:; /* needle_man_setup_throw */
    /* $A188: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x7460, -1); return;
label_A18B:; return;
label_A18C:; return;
label_A18F:; return;
label_A192:; return;
label_A195:; return;
label_A197:; return;
label_A199:; return;
label_A19A:; return;
label_A19B:; return;
label_A19C:; return;
label_A19E:; return;
label_A19F:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1AF:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B5:; return;
label_A1B7:; return;
label_A1BA:; return;
label_A1BD:; return;
label_A1BF:; return;
label_A1C1:; return;
label_A1C3:; return;
label_A1C5:; return;
label_A1C8:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CB:; return;
label_A1CC:; return;
label_A1CD:; return;
label_A1CE:; return;
label_A1CF:; return;
label_A1D0:; return;
label_A1D2:; return;
label_A1D3:; return;
label_A1D4:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DB:; return;
label_A1DE:; return;
label_A1DF:; return;
label_A1E1:; return;
label_A1E3:; return;
label_A1E4:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E7:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F3:; return;
label_A1F4:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F7:; return;
label_A1F8:; return;
label_A1F9:; return;
label_A1FA:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FD:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20E:; return;
label_A210:; return;
label_A212:; return;
label_A214:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A220:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22B:; return;
label_A22C:; return;
label_A22D:; return;
label_A22E:; return;
label_A22F:; return;
label_A230:; return;
label_A231:; return;
label_A232:; return;
label_A233:; return;
label_A234:; return;
label_A236:; return;
label_A238:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A247:; return;
label_A248:; return;
label_A249:; return;
label_A24A:; return;
label_A24B:; return;
label_A24C:; return;
label_A24D:; return;
label_A24E:; return;
label_A24F:; return;
label_A250:; return;
label_A251:; return;
label_A252:; return;
label_A253:; return;
label_A254:; return;
label_A255:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A259:; return;
label_A25A:; return;
label_A25B:; return;
label_A25D:; return;
label_A25F:; return;
label_A261:; return;
label_A263:; return;
label_A265:; return;
label_A267:; return;
label_A269:; return;
label_A26B:; return;
label_A26D:; return;
label_A26F:; return;
label_A271:; return;
label_A273:; return;
label_A276:; return;
label_A279:; return;
label_A27C:; return;
label_A27F:; return;
label_A282:; return;
label_A285:; return;
label_A288:; return;
label_A28B:; return;
label_A28E:; return;
label_A291:; return;
label_A294:; return;
label_A297:; return;
label_A29A:; return;
label_A29D:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A6:; return;
label_A2A9:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B4:; return;
label_A2B6:; return;
label_A2B8:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2C9:; return;
label_A2CA:; return;
label_A2CB:; return;
label_A2CC:; return;
label_A2CD:; return;
label_A2CE:; return;
label_A2CF:; return;
label_A2D0:; return;
label_A2D1:; return;
label_A2D2:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D6:; return;
label_A2D7:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DC:; return;
label_A2DE:; return;
label_A2E0:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E6:; return;
label_A2E8:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F4:; return;
label_A2F6:; return;
label_A2F8:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A302:; return;
label_A304:; return;
label_A306:; return;
label_A308:; return;
label_A30A:; return;
label_A30C:; return;
label_A30E:; return;
label_A310:; return;
label_A311:; return;
label_A313:; return;
label_A314:; return;
label_A315:; return;
label_A318:; return;
label_A319:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A327:; return;
label_A328:; return;
label_A32A:; return;
label_A32C:; return;
label_A32D:; return;
label_A32E:; return;
label_A330:; return;
label_A331:; return;
label_A333:; return;
label_A334:; return;
label_A336:; return;
label_A337:; return;
label_A339:; return;
label_A33A:; return;
label_A33C:; return;
label_A33E:; return;
label_A340:; return;
label_A342:; return;
label_A344:; return;
label_A346:; return;
label_A348:; return;
label_A34A:; return;
label_A34D:; return;
label_A34E:; return;
label_A350:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35C:; return;
label_A35E:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A364:; return;
label_A367:; return;
label_A36A:; return;
label_A36D:; return;
label_A370:; return;
label_A372:; return;
label_A374:; return;
label_A375:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37C:; return;
label_A37D:; return;
label_A37F:; return;
label_A380:; return;
label_A382:; return;
label_A384:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38C:; return;
label_A38E:; return;
label_A38F:; return;
label_A390:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A397:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A39F:; return;
label_A3A1:; return;
label_A3A2:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A9:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B2:; return;
label_A3B3:; return;
label_A3B4:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3B9:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3C0:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C7:; return;
label_A3CA:; return;
label_A3CC:; return;
label_A3CE:; return;
label_A3D0:; return;
label_A3D2:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D9:; return;
label_A3DC:; return;
label_A3DD:; return;
label_A3DE:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E6:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EA:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3ED:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F9:; return;
label_A3FA:; return;
label_A3FD:; return;
label_A3FE:; return;
label_A401:; return;
label_A403:; return;
label_A405:; return;
label_A407:; return;
label_A409:; return;
label_A40C:; return;
label_A40D:; return;
label_A40F:; return;
label_A412:; return;
label_A414:; return;
label_A416:; return;
label_A418:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A422:; return;
label_A424:; return;
label_A425:; return;
label_A428:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A430:; return;
label_A431:; return;
label_A432:; return;
label_A434:; return;
label_A435:; return;
label_A438:; return;
label_A43B:; return;
label_A43E:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A447:; return;
label_A448:; return;
label_A44B:; return;
label_A44C:; return;
label_A44F:; return;
label_A452:; return;
label_A455:; return;
label_A458:; return;
label_A45B:; return;
label_A45E:; return;
label_A461:; return;
label_A463:; return;
label_A465:; return;
label_A467:; return;
label_A469:; return;
label_A46B:; return;
label_A46D:; return;
label_A46F:; return;
label_A471:; return;
label_A473:; return;
label_A475:; return;
label_A477:; return;
label_A479:; return;
label_A47B:; return;
label_A47D:; return;
label_A47F:; return;
label_A481:; return;
label_A482:; return;
label_A483:; return;
label_A485:; return;
label_A486:; return;
label_A488:; return;
label_A489:; return;
label_A48B:; return;
label_A48C:; return;
label_A48E:; return;
label_A48F:; return;
label_A492:; return;
label_A493:; return;
label_A496:; return;
label_A497:; return;
label_A498:; return;
label_A49A:; return;
label_A49B:; return;
label_A49D:; return;
label_A49F:; return;
label_A4A2:; return;
label_A4A5:; return;
label_A4A8:; return;
label_A4AB:; return;
label_A4AC:; return;
label_A4AD:; return;
label_A4AF:; return;
label_A4B0:; return;
label_A4B1:; return;
label_A4B2:; return;
label_A4B3:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B7:; return;
label_A4B8:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BB:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C4:; return;
label_A4C6:; return;
label_A4C9:; return;
label_A4CC:; return;
label_A4CD:; return;
label_A4CF:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D4:; return;
label_A4D7:; return;
label_A4DA:; return;
label_A4DB:; return;
label_A4DE:; return;
label_A4DF:; return;
label_A4E2:; return;
label_A4E3:; return;
label_A4E6:; return;
label_A4E7:; return;
label_A4EA:; return;
label_A4EB:; return;
label_A4EE:; return;
label_A4EF:; return;
label_A4F2:; return;
label_A4F5:; return;
label_A4F8:; return;
label_A4FB:; return;
label_A4FE:; return;
label_A501:; return;
label_A504:; return;
label_A507:; return;
label_A50A:; return;
label_A50D:; return;
label_A510:; return;
label_A512:; return;
label_A515:; return;
label_A516:; return;
label_A518:; return;
label_A519:; return;
label_A51C:; return;
label_A51E:; return;
label_A521:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52E:; return;
label_A530:; return;
label_A532:; return;
label_A534:; return;
label_A535:; return;
label_A537:; return;
label_A538:; return;
label_A53A:; return;
label_A53C:; return;
label_A53F:; return;
label_A542:; return;
label_A544:; return;
label_A545:; return;
label_A547:; return;
label_A549:; return;
label_A54B:; return;
label_A54D:; return;
label_A54E:; return;
label_A54F:; return;
label_A551:; return;
label_A552:; return;
label_A554:; return;
label_A555:; return;
label_A558:; return;
label_A55A:; return;
label_A55D:; return;
label_A55E:; return;
label_A55F:; return;
label_A561:; return;
label_A562:; return;
label_A565:; return;
label_A566:; return;
label_A568:; return;
label_A56B:; return;
label_A56C:; return;
label_A56F:; return;
label_A570:; return;
label_A572:; return;
label_A575:; return;
label_A576:; return;
label_A579:; return;
label_A57A:; return;
label_A57D:; return;
label_A57F:; return;
label_A580:; return;
label_A583:; return;
label_A584:; return;
label_A587:; return;
label_A588:; return;
label_A58A:; return;
label_A58D:; return;
label_A58E:; return;
label_A591:; return;
label_A592:; return;
label_A595:; return;
label_A596:; return;
label_A598:; return;
label_A59A:; return;
label_A59C:; return;
label_A59D:; return;
label_A59F:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A5:; return;
label_A5A7:; return;
label_A5A9:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B1:; return;
label_A5B3:; return;
label_A5B5:; return;
label_A5B7:; return;
label_A5B9:; return;
label_A5BB:; return;
label_A5BD:; return;
label_A5BF:; return;
label_A5C1:; return;
label_A5C3:; return;
label_A5C6:; return;
label_A5C8:; return;
label_A5CA:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5D1:; return;
label_A5D3:; return;
label_A5D5:; return;
label_A5D7:; return;
label_A5D9:; return;
label_A5DA:; return;
label_A5DC:; return;
label_A5DD:; return;
label_A5DE:; return;
label_A5E0:; return;
label_A5E2:; return;
label_A5E4:; return;
label_A5E6:; return;
label_A5E8:; return;
label_A5EB:; return;
label_A5ED:; return;
label_A5EE:; return;
label_A5F0:; return;
label_A5F1:; return;
label_A5F2:; return;
label_A5F4:; return;
label_A5F6:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FD:; return;
label_A5FF:; return;
label_A600:; return;
label_A602:; return;
label_A604:; return;
label_A605:; return;
label_A606:; return;
label_A608:; return;
label_A60A:; return;
label_A60C:; return;
label_A60E:; return;
label_A610:; return;
label_A611:; return;
label_A612:; return;
label_A615:; return;
label_A617:; return;
label_A618:; return;
label_A61A:; return;
label_A61D:; return;
label_A61E:; return;
label_A620:; return;
label_A623:; return;
label_A624:; return;
label_A626:; return;
label_A628:; return;
label_A629:; return;
label_A62A:; return;
label_A62D:; return;
label_A62F:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A637:; return;
label_A639:; return;
label_A63B:; return;
label_A63D:; return;
label_A63F:; return;
label_A641:; return;
label_A643:; return;
label_A645:; return;
label_A647:; return;
label_A649:; return;
label_A64B:; return;
label_A64D:; return;
label_A64F:; return;
label_A651:; return;
label_A653:; return;
label_A655:; return;
label_A656:; return;
label_A658:; return;
label_A65A:; return;
label_A65C:; return;
label_A65E:; return;
label_A660:; return;
label_A662:; return;
label_A664:; return;
label_A666:; return;
label_A668:; return;
label_A66A:; return;
label_A66B:; return;
label_A66D:; return;
label_A66F:; return;
label_A671:; return;
label_A673:; return;
label_A675:; return;
label_A677:; return;
label_A679:; return;
label_A67B:; return;
label_A67D:; return;
label_A67F:; return;
label_A680:; return;
label_A682:; return;
label_A683:; return;
label_A685:; return;
label_A687:; return;
label_A689:; return;
label_A68B:; return;
label_A68D:; return;
label_A68F:; return;
label_A691:; return;
label_A693:; return;
label_A695:; return;
label_A697:; return;
label_A69A:; return;
label_A69B:; return;
label_A69D:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A5:; return;
label_A6A8:; return;
label_A6AB:; return;
label_A6AC:; return;
label_A6AE:; return;
label_A6B0:; return;
label_A6B1:; return;
label_A6B2:; return;
label_A6B5:; return;
label_A6B6:; return;
label_A6B8:; return;
label_A6BA:; return;
label_A6BC:; return;
label_A6BE:; return;
label_A6C0:; return;
label_A6C1:; return;
label_A6C2:; return;
label_A6C4:; return;
label_A6C6:; return;
label_A6C8:; return;
label_A6CA:; return;
label_A6CC:; return;
label_A6CE:; return;
label_A6CF:; return;
label_A6D0:; return;
label_A6D1:; return;
label_A6D2:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D7:; return;
label_A6DA:; return;
label_A6DC:; return;
label_A6DE:; return;
label_A6E0:; return;
label_A6E1:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6E9:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EF:; return;
label_A6F0:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F6:; return;
label_A6F8:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FE:; return;
label_A700:; return;
label_A702:; return;
label_A704:; return;
label_A706:; return;
label_A707:; return;
label_A708:; return;
label_A70A:; return;
label_A70C:; return;
label_A70F:; return;
label_A711:; return;
label_A712:; return;
label_A714:; return;
label_A716:; return;
label_A718:; return;
label_A71B:; return;
label_A71C:; return;
label_A71F:; return;
label_A720:; return;
label_A723:; return;
label_A724:; return;
label_A726:; return;
label_A728:; return;
label_A72A:; return;
label_A72C:; return;
label_A72E:; return;
label_A730:; return;
label_A732:; return;
label_A733:; return;
label_A734:; return;
label_A736:; return;
label_A738:; return;
label_A739:; return;
label_A73A:; return;
label_A73D:; return;
label_A73F:; return;
label_A740:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A74A:; return;
label_A74C:; return;
label_A74E:; return;
label_A750:; return;
label_A752:; return;
label_A753:; return;
label_A755:; return;
label_A756:; return;
label_A758:; return;
label_A75A:; return;
label_A75C:; return;
label_A75E:; return;
label_A760:; return;
label_A762:; return;
label_A764:; return;
label_A766:; return;
label_A768:; return;
label_A76A:; return;
label_A76C:; return;
label_A76E:; return;
label_A770:; return;
label_A772:; return;
label_A774:; return;
label_A776:; return;
label_A777:; return;
label_A778:; return;
label_A77A:; return;
label_A77C:; return;
label_A77E:; return;
label_A780:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78A:; return;
label_A78C:; return;
label_A78E:; return;
label_A791:; return;
label_A792:; return;
label_A795:; return;
label_A797:; return;
label_A799:; return;
label_A79A:; return;
label_A79C:; return;
label_A79E:; return;
label_A7A0:; return;
label_A7A2:; return;
label_A7A4:; return;
label_A7A6:; return;
label_A7A7:; return;
label_A7A8:; return;
label_A7A9:; return;
label_A7AA:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B3:; return;
label_A7B4:; return;
label_A7B6:; return;
label_A7B8:; return;
label_A7BA:; return;
label_A7BD:; return;
label_A7BE:; return;
label_A7BF:; return;
label_A7C0:; return;
label_A7C2:; return;
label_A7C5:; return;
label_A7C6:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CC:; return;
label_A7CF:; return;
label_A7D2:; return;
label_A7D4:; return;
label_A7D6:; return;
label_A7D8:; return;
label_A7DA:; return;
label_A7DB:; return;
label_A7DC:; return;
label_A7DE:; return;
label_A7E0:; return;
label_A7E2:; return;
label_A7E5:; return;
label_A7E8:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7F0:; return;
label_A7F2:; return;
label_A7F4:; return;
label_A7F6:; return;
label_A7F8:; return;
label_A7FB:; return;
label_A7FE:; return;
label_A801:; return;
label_A802:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A80A:; return;
label_A80C:; return;
label_A80E:; return;
label_A811:; return;
label_A814:; return;
label_A817:; return;
label_A818:; return;
label_A81A:; return;
label_A81D:; return;
label_A81E:; return;
label_A820:; return;
label_A822:; return;
label_A824:; return;
label_A826:; return;
label_A828:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A830:; return;
label_A831:; return;
label_A832:; return;
label_A834:; return;
label_A836:; return;
label_A838:; return;
label_A83A:; return;
label_A83B:; return;
label_A83E:; return;
label_A840:; return;
label_A841:; return;
label_A842:; return;
label_A844:; return;
label_A847:; return;
label_A848:; return;
label_A84A:; return;
label_A84C:; return;
label_A84E:; return;
label_A851:; return;
label_A853:; return;
label_A855:; return;
label_A856:; return;
label_A858:; return;
label_A85A:; return;
label_A85C:; return;
label_A85F:; return;
label_A860:; return;
label_A862:; return;
label_A864:; return;
label_A866:; return;
label_A868:; return;
label_A86A:; return;
label_A86C:; return;
label_A86D:; return;
label_A86E:; return;
label_A870:; return;
label_A872:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
label_A876:; return;
label_A878:; return;
label_A87A:; return;
label_A87C:; return;
label_A87E:; return;
label_A880:; return;
label_A882:; return;
label_A883:; return;
label_A884:; return;
label_A886:; return;
label_A888:; return;
label_A889:; return;
label_A88A:; return;
label_A88C:; return;
label_A88E:; return;
label_A890:; return;
label_A892:; return;
label_A894:; return;
label_A896:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89C:; return;
label_A89F:; return;
label_A8A0:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A8:; return;
label_A8AB:; return;
label_A8AD:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B0:; return;
label_A8B2:; return;
label_A8B4:; return;
label_A8B6:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C2:; return;
label_A8C4:; return;
label_A8C5:; return;
label_A8C6:; return;
label_A8C8:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D3:; return;
label_A8D4:; return;
label_A8D6:; return;
label_A8D8:; return;
label_A8DA:; return;
label_A8DB:; return;
label_A8DC:; return;
label_A8DE:; return;
label_A8E0:; return;
label_A8E2:; return;
label_A8E3:; return;
label_A8E4:; return;
label_A8E6:; return;
label_A8E8:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EC:; return;
label_A8EE:; return;
label_A8F0:; return;
label_A8F1:; return;
label_A8F2:; return;
label_A8F4:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FC:; return;
label_A8FE:; return;
label_A900:; return;
label_A902:; return;
label_A903:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A90A:; return;
label_A90C:; return;
label_A90E:; return;
label_A910:; return;
label_A912:; return;
label_A914:; return;
label_A916:; return;
label_A918:; return;
label_A91A:; return;
label_A91C:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A922:; return;
label_A924:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92C:; return;
label_A92E:; return;
label_A930:; return;
label_A932:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A938:; return;
label_A93A:; return;
label_A93C:; return;
label_A93E:; return;
label_A941:; return;
label_A942:; return;
label_A945:; return;
label_A947:; return;
label_A949:; return;
label_A94A:; return;
label_A94C:; return;
label_A94E:; return;
label_A94F:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95A:; return;
label_A95D:; return;
label_A95E:; return;
label_A960:; return;
label_A963:; return;
label_A964:; return;
label_A966:; return;
label_A968:; return;
label_A969:; return;
label_A96A:; return;
label_A96D:; return;
label_A96E:; return;
label_A96F:; return;
label_A970:; return;
label_A972:; return;
label_A975:; return;
label_A976:; return;
label_A979:; return;
label_A97B:; return;
label_A97C:; return;
label_A97F:; return;
label_A982:; return;
label_A984:; return;
label_A986:; return;
label_A989:; return;
label_A98A:; return;
label_A98D:; return;
label_A98E:; return;
label_A991:; return;
label_A992:; return;
label_A994:; return;
label_A996:; return;
label_A997:; return;
label_A99A:; return;
label_A99D:; return;
label_A99F:; return;
label_A9A1:; return;
label_A9A3:; return;
label_A9A5:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AE:; return;
label_A9B0:; return;
label_A9B2:; return;
label_A9B4:; return;
label_A9B6:; return;
label_A9B8:; return;
label_A9BA:; return;
label_A9BC:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C2:; return;
label_A9C3:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CA:; return;
label_A9CC:; return;
label_A9CE:; return;
label_A9D0:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D6:; return;
label_A9D8:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DE:; return;
label_A9DF:; return;
label_A9E2:; return;
label_A9E4:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E9:; return;
label_A9EB:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F7:; return;
label_A9F8:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0C:; return;
label_AA0E:; return;
label_AA10:; return;
label_AA11:; return;
label_AA13:; return;
label_AA15:; return;
label_AA17:; return;
label_AA19:; return;
label_AA1B:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA20:; return;
label_AA23:; return;
label_AA25:; return;
label_AA27:; return;
label_AA29:; return;
label_AA2A:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA33:; return;
label_AA34:; return;
label_AA37:; return;
label_AA39:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA45:; return;
label_AA47:; return;
label_AA48:; return;
label_AA4A:; return;
label_AA4B:; return;
label_AA4D:; return;
label_AA4E:; return;
label_AA51:; return;
label_AA52:; return;
label_AA54:; return;
label_AA57:; return;
label_AA59:; return;
label_AA5B:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA61:; return;
label_AA62:; return;
label_AA65:; return;
label_AA67:; return;
label_AA68:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA70:; return;
label_AA72:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7C:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA80:; return;
label_AA82:; return;
label_AA84:; return;
label_AA86:; return;
label_AA88:; return;
label_AA8A:; return;
label_AA8B:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA91:; return;
label_AA93:; return;
label_AA95:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAB:; return;
label_AAAD:; return;
label_AAAF:; return;
label_AAB1:; return;
label_AAB4:; return;
label_AAB6:; return;
label_AAB8:; return;
label_AABA:; return;
label_AABC:; return;
label_AABE:; return;
label_AAC0:; return;
label_AAC2:; return;
label_AAC4:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AACA:; return;
label_AACC:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD8:; return;
label_AADA:; return;
label_AADC:; return;
label_AADE:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE4:; return;
label_AAE6:; return;
label_AAE8:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAF0:; return;
label_AAF3:; return;
label_AAF5:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFC:; return;
label_AAFE:; return;
label_AB00:; return;
label_AB02:; return;
label_AB04:; return;
label_AB05:; return;
label_AB06:; return;
label_AB08:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0D:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB17:; return;
label_AB18:; return;
label_AB1B:; return;
label_AB1C:; return;
label_AB1D:; return;
label_AB1E:; return;
label_AB21:; return;
label_AB22:; return;
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
label_AB3B:; return;
label_AB3D:; return;
label_AB3F:; return;
label_AB42:; return;
label_AB45:; return;
label_AB47:; return;
label_AB49:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB56:; return;
label_AB58:; return;
label_AB5A:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB60:; return;
label_AB62:; return;
label_AB64:; return;
label_AB66:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6A:; return;
label_AB6D:; return;
label_AB6E:; return;
label_AB71:; return;
label_AB74:; return;
label_AB77:; return;
label_AB78:; return;
label_AB7B:; return;
label_AB7C:; return;
label_AB7E:; return;
label_AB80:; return;
label_AB82:; return;
label_AB84:; return;
label_AB85:; return;
label_AB86:; return;
label_AB88:; return;
label_AB89:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB90:; return;
label_AB92:; return;
label_AB94:; return;
label_AB95:; return;
label_AB96:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9D:; return;
label_ABA0:; return;
label_ABA3:; return;
label_ABA4:; return;
label_ABA5:; return;
label_ABA6:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABB0:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB6:; return;
label_ABB9:; return;
label_ABBB:; return;
label_ABBC:; return;
label_ABBF:; return;
label_ABC1:; return;
label_ABC2:; return;
label_ABC5:; return;
label_ABC7:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD6:; return;
label_ABD7:; return;
label_ABD9:; return;
label_ABDA:; return;
label_ABDD:; return;
label_ABDE:; return;
label_ABE0:; return;
label_ABE2:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABEE:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF9:; return;
label_ABFA:; return;
label_ABFD:; return;
label_ABFF:; return;
label_AC02:; return;
label_AC04:; return;
label_AC05:; return;
label_AC06:; return;
label_AC09:; return;
label_AC0A:; return;
label_AC0D:; return;
label_AC0F:; return;
label_AC11:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC17:; return;
label_AC18:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC20:; return;
label_AC21:; return;
label_AC22:; return;
label_AC23:; return;
label_AC26:; return;
label_AC28:; return;
label_AC2A:; return;
label_AC2C:; return;
label_AC2E:; return;
label_AC30:; return;
label_AC33:; return;
label_AC34:; return;
label_AC36:; return;
label_AC38:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC41:; return;
label_AC43:; return;
label_AC45:; return;
label_AC46:; return;
label_AC48:; return;
label_AC4A:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC51:; return;
label_AC53:; return;
label_AC54:; return;
label_AC56:; return;
label_AC59:; return;
label_AC5B:; return;
label_AC5E:; return;
label_AC61:; return;
label_AC63:; return;
label_AC65:; return;
label_AC67:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC72:; return;
label_AC75:; return;
label_AC76:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8E:; return;
label_AC90:; return;
label_AC92:; return;
label_AC94:; return;
label_AC96:; return;
label_AC98:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9E:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA6:; return;
label_ACA8:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBE:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDC:; return;
label_ACDE:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE7:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD00:; return;
label_AD02:; return;
label_AD04:; return;
label_AD06:; return;
label_AD08:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0C:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD11:; return;
label_AD13:; return;
label_AD15:; return;
label_AD17:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD20:; return;
label_AD22:; return;
label_AD24:; return;
label_AD26:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD34:; return;
label_AD36:; return;
label_AD38:; return;
label_AD39:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3E:; return;
label_AD40:; return;
label_AD42:; return;
label_AD43:; return;
label_AD45:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4B:; return;
label_AD4D:; return;
label_AD4F:; return;
label_AD50:; return;
label_AD52:; return;
label_AD54:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5B:; return;
label_AD5D:; return;
label_AD5F:; return;
label_AD61:; return;
label_AD63:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD73:; return;
label_AD75:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD82:; return;
label_AD85:; return;
label_AD87:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD95:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9F:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB8:; return;
label_ADBB:; return;
label_ADBD:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADDF:; return;
label_ADE1:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFC:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE03:; return;
label_AE05:; return;
label_AE06:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE15:; return;
label_AE17:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE21:; return;
label_AE23:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE40:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE51:; return;
label_AE52:; return;
label_AE54:; return;
label_AE55:; return;
label_AE57:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5E:; return;
label_AE61:; return;
label_AE63:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE72:; return;
label_AE74:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE82:; return;
label_AE85:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE93:; return;
label_AE94:; return;
label_AE95:; return;
label_AE96:; return;
label_AE98:; return;
label_AE9A:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBC:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECD:; return;
label_AECF:; return;
label_AED1:; return;
label_AED3:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFD:; return;
label_AF00:; return;
label_AF02:; return;
label_AF04:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0B:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF10:; return;
label_AF13:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
}

void func_81BD_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81BD_b13");
#endif
label_81BD:;
    /* $81BD: FC */ maybe_trigger_vblank(4); (void)nes_read((0x642A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81C0:;
    /* $81C0: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_81C3:;
    /* $81C3: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE2 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C5:;
    /* $81C5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_81C6:;
    /* $81C6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x1402; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C9:;
    /* $81C9: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_81CA:;
    /* $81CA: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xC692 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_81CD:;
    /* $81CD: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_81CE:;
    /* $81CE: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF6; g_cpu.C=(g_cpu.X>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_81D0:;
    /* $81D0: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D1:;
    /* $81D1: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D2:;
    /* $81D2: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D3:;
    /* $81D3: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D4:;
    /* $81D4: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D5:;
    /* $81D5: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D6:;
    /* $81D6: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D7:;
    /* $81D7: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D8:;
    /* $81D8: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x241A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81DB:;
    /* $81DB: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_81DC:;
    /* $81DC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x7A62, -1); return;
}

void func_9009_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9009_b13");
#endif
label_9009:;
    /* $9009: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_900B:;
    /* $900B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900D:;
    /* $900D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_900F:;
    /* $900F: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xC1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9011:;
    /* $9011: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9013:;
    /* $9013: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9015:;
    /* $9015: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9017:;
    /* $9017: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9019:;
    /* $9019: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901B:;
    /* $901B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901D:;
    /* $901D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_901F:;
    /* $901F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9021:;
    /* $9021: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9023:;
    /* $9023: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9025:;
    /* $9025: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9027:;
    /* $9027: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9029:;
    /* $9029: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_902B:;
    /* $902B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902D:;
    /* $902D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_902F:;
    /* $902F: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xD1; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9031:;
    /* $9031: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9033:;
    /* $9033: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9035:;
    /* $9035: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9037:;
    /* $9037: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9039:;
    /* $9039: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903B:;
    /* $903B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903D:;
    /* $903D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_903F:;
    /* $903F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9041:;
    /* $9041: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9043:;
    /* $9043: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9045:;
    /* $9045: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9047:;
    /* $9047: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9049:;
    /* $9049: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_904B:;
    /* $904B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904D:;
    /* $904D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_904F:;
    /* $904F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9051:;
    /* $9051: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9053:;
    /* $9053: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9055:;
    /* $9055: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9056:;
    /* $9056: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_9057:;
    /* $9057: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9059:;
    /* $9059: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905B:;
    /* $905B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905D:;
    /* $905D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_905F:;
    /* $905F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9061:;
    /* $9061: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9063:;
    /* $9063: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9065:;
    /* $9065: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9067:;
    /* $9067: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9069:;
    /* $9069: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_906B:;
    /* $906B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906D:;
    /* $906D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_906F:;
    /* $906F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9071:;
    /* $9071: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9073:;
    /* $9073: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9075:;
    /* $9075: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9077:;
    /* $9077: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9079:;
    /* $9079: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907B:;
    /* $907B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_907D:;
    /* $907D: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_907E:;
    /* $907E: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEF03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9081:;
    /* $9081: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9083:;
    /* $9083: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9085:;
    /* $9085: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9087:;
    /* $9087: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9089:;
    /* $9089: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908B:;
    /* $908B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908D:;
    /* $908D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_908F:;
    /* $908F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9091:;
    /* $9091: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9093:;
    /* $9093: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9095:;
    /* $9095: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9097:;
    /* $9097: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9099:;
    /* $9099: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_909B:;
    /* $909B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909D:;
    /* $909D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_909F:;
    /* $909F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xED + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_90A1:;
    /* $90A1: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_90A3:;
    /* $90A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A5:;
    /* $90A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_90A7:;
    /* $90A7: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x03D4); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_82BC_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82BC_b13");
#endif
label_82BC:;
    /* $82BC: 94 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.X) & 0xFF, g_cpu.Y);
label_82BE:;
    /* $82BE: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_82C0:;
    /* $82C0: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_82C2:;
    /* $82C2: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_82C4:;
    /* $82C4: 95 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.X) & 0xFF, g_cpu.A);
label_82C6:;
    /* $82C6: 95 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.X) & 0xFF, g_cpu.A);
label_82C8:;
    /* $82C8: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82CA:;
    /* $82CA: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82CC:;
    /* $82CC: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82CE:;
    /* $82CE: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82D0:;
    /* $82D0: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82D2:;
    /* $82D2: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82D4:;
    /* $82D4: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82D6:;
    /* $82D6: 96 */ maybe_trigger_vblank(4); nes_write((0x96 + g_cpu.Y) & 0xFF, g_cpu.X);
label_82D8:;
    /* $82D8: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_82DA:;
    /* $82DA: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_82DC:;
    /* $82DC: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_82DE:;
    /* $82DE: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_82E0:;
    /* $82E0: 97 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_82E2:;
    /* $82E2: 97 */ maybe_trigger_vblank(4); nes_write((0x98 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_82E4:;
    /* $82E4: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82E5:;
    /* $82E5: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82E6:;
    /* $82E6: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82E7:;
    /* $82E7: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82E8:;
    /* $82E8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82E9:;
    /* $82E9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82EA:;
    /* $82EA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82EB:;
    /* $82EB: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82EC:;
    /* $82EC: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82ED:;
    /* $82ED: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82EE:;
    /* $82EE: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82EF:;
    /* $82EF: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_82F0:;
    /* $82F0: 99 */ maybe_trigger_vblank(5); nes_write((0x9999 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82F3:;
    /* $82F3: 99 */ maybe_trigger_vblank(5); nes_write((0x9999 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82F6:;
    /* $82F6: 99 */ maybe_trigger_vblank(5); nes_write((0x9A99 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_82F9:;
    /* $82F9: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_82FA:;
    /* $82FA: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_82FB:;
    /* $82FB: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_82FC:;
    /* $82FC: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_82FD:;
    /* $82FD: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_82FE:;
    /* $82FE: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_82FF:;
    /* $82FF: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_8300:;
    /* $8300: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8301:;
    /* $8301: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8302:;
    /* $8302: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8303:;
    /* $8303: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8304:;
    /* $8304: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8305:;
    /* $8305: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8306:;
    /* $8306: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8307:;
    /* $8307: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8308:;
    /* $8308: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8309:;
    /* $8309: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_830A:;
    /* $830A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_830B:;
    /* $830B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_830C:;
    /* $830C: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_830E:;
    /* $830E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_830F:;
    /* $830F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_8311;
label_8311:;
    /* $8311: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8312:;
    /* $8312: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8313:;
    /* $8313: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8315:;
    /* $8315: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8317:;
    /* $8317: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8318:;
    /* $8318: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_831A:;
    /* $831A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_831C:;
    /* $831C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_831E:;
    /* $831E: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8320:;
    /* $8320: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8321:;
    /* $8321: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0800; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8324:;
    /* $8324: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8326:;
    /* $8326: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8327:;
    /* $8327: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x0801 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_832A:;
    /* $832A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_832C:;
    /* $832C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x832C); return;
}

void func_B9A5_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A5_b13");
#endif
label_B9A5:;
    /* $B9A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9A5); return;
}

void func_968D_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_968D_b13");
#endif
label_968D:;
    /* $968D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x53 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_968F:;
    /* $968F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x54 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9691:;
    /* $9691: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x18 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9693:;
    /* $9693: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AD05_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD05_b13");
#endif
label_AD05:;
    /* $AD05: C2 */ maybe_trigger_vblank(2); /* NOP */
label_AD07:;
    /* $AD07: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x42F2 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD0A:;
    /* $AD0A: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD0C:;
    /* $AD0C: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD0E:;
    /* $AD0E: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_AD0F:;
    /* $AD0F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD10:;
    /* $AD10: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_AD11:;
    /* $AD11: C2 */ maybe_trigger_vblank(2); /* NOP */
label_AD13:;
    /* $AD13: C2 */ maybe_trigger_vblank(2); /* NOP */
label_AD15:;
    /* $AD15: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AD17:;
    /* $AD17: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AD19:;
    /* $AD19: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AD1A:;
    /* $AD1A: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD1C:;
    /* $AD1C: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD1E:;
    /* $AD1E: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x82) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD20:;
    /* $AD20: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AD24;
label_AD22:;
    /* $AD22: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD24:;
    /* $AD24: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD26:;
    /* $AD26: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD28:;
    /* $AD28: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD2A:;
    /* $AD2A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0D6E), 13); return; }
label_AD2C:;
    /* $AD2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0CB0), 13); return; }
label_AD2E:;
    /* $AD2E: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x82) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD30:;
    /* $AD30: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x82) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD32:;
    /* $AD32: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD34:;
    /* $AD34: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD36:;
    /* $AD36: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0CFA), 13); return; }
label_AD38:;
    /* $AD38: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD39:;
    /* $AD39: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF3; g_cpu.C=(g_cpu.X>=0xF3)?1:0; FLAG_NZ(r&0xFF); }
label_AD3B:;
    /* $AD3B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD3C:;
    /* $AD3C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD3E:;
    /* $AD3E: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD40:;
    /* $AD40: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD42:;
    /* $AD42: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_AD43:;
    /* $AD43: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD45:;
    /* $AD45: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD47:;
    /* $AD47: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD49:;
    /* $AD49: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD4B:;
    /* $AD4B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD4D:;
    /* $AD4D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF5; g_cpu.C=(g_cpu.X>=0xF5)?1:0; FLAG_NZ(r&0xFF); }
label_AD4F:;
    /* $AD4F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD50:;
    /* $AD50: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD52:;
    /* $AD52: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x42 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD54:;
    /* $AD54: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD56:;
    /* $AD56: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_AD57:;
    /* $AD57: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD59:;
    /* $AD59: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD5B:;
    /* $AD5B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD5D:;
    /* $AD5D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD5F:;
    /* $AD5F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD61:;
    /* $AD61: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF3; g_cpu.C=(g_cpu.X>=0xF3)?1:0; FLAG_NZ(r&0xFF); }
label_AD63:;
    /* $AD63: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD64:;
    /* $AD64: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD66:;
    /* $AD66: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD68:;
    /* $AD68: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE01 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD6B:;
    /* $AD6B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD6D:;
    /* $AD6D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xEE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD6F:;
    /* $AD6F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD71:;
    /* $AD71: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD73:;
    /* $AD73: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD75:;
    /* $AD75: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x01F1; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD78:;
    /* $AD78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD78); return;
label_AD79:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD82:; return;
label_AD85:; return;
label_AD87:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD95:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9F:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB8:; return;
label_ADBB:; return;
label_ADBD:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADDF:; return;
label_ADE1:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFC:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE03:; return;
label_AE05:; return;
label_AE06:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE15:; return;
label_AE17:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE21:; return;
label_AE23:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE40:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE51:; return;
label_AE52:; return;
label_AE54:; return;
label_AE55:; return;
label_AE57:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5E:; return;
label_AE61:; return;
label_AE63:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE72:; return;
label_AE74:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE82:; return;
label_AE85:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE93:; return;
label_AE94:; return;
label_AE95:; return;
label_AE96:; return;
label_AE98:; return;
label_AE9A:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBC:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECD:; return;
label_AECF:; return;
label_AED1:; return;
label_AED3:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFD:; return;
label_AF00:; return;
label_AF02:; return;
label_AF04:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0B:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF10:; return;
label_AF13:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1D:; return;
label_AF1E:; return;
label_AF21:; return;
label_AF24:; return;
label_AF26:; return;
label_AF29:; return;
label_AF2A:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF30:; return;
label_AF32:; return;
label_AF34:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3A:; return;
label_AF3C:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF41:; return;
label_AF43:; return;
label_AF45:; return;
label_AF47:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF51:; return;
label_AF53:; return;
label_AF55:; return;
label_AF57:; return;
label_AF59:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF61:; return;
label_AF63:; return;
label_AF65:; return;
label_AF67:; return;
label_AF69:; return;
label_AF6B:; return;
label_AF6D:; return;
label_AF6F:; return;
label_AF71:; return;
label_AF73:; return;
label_AF75:; return;
label_AF77:; return;
label_AF78:; return;
label_AF7A:; return;
label_AF7C:; return;
label_AF7E:; return;
label_AF80:; return;
label_AF81:; return;
label_AF83:; return;
label_AF85:; return;
label_AF87:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8D:; return;
label_AF8F:; return;
label_AF91:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA8:; return;
label_AFAA:; return;
label_AFAC:; return;
label_AFAE:; return;
label_AFB0:; return;
label_AFB2:; return;
label_AFB4:; return;
label_AFB6:; return;
label_AFB8:; return;
label_AFBA:; return;
label_AFBC:; return;
label_AFBE:; return;
label_AFC0:; return;
label_AFC1:; return;
label_AFC3:; return;
label_AFC5:; return;
label_AFC7:; return;
label_AFC9:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCF:; return;
label_AFD1:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEA:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFF0:; return;
label_AFF1:; return;
label_AFF3:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFF9:; return;
label_AFFB:; return;
label_AFFD:; return;
label_AFFF:; return;
label_B001:; return;
label_B003:; return;
label_B005:; return;
label_B008:; return;
label_B00A:; return;
label_B00B:; return;
label_B00C:; return;
label_B00D:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B018:; return;
label_B01A:; return;
label_B01C:; return;
label_B01D:; return;
label_B01E:; return;
label_B021:; return;
label_B023:; return;
label_B026:; return;
label_B028:; return;
label_B02A:; return;
label_B02C:; return;
label_B02E:; return;
label_B02F:; return;
label_B031:; return;
label_B033:; return;
label_B035:; return;
label_B037:; return;
label_B03A:; return;
label_B03D:; return;
label_B03E:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B049:; return;
label_B04B:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B055:; return;
label_B057:; return;
label_B059:; return;
label_B05B:; return;
label_B05D:; return;
label_B05F:; return;
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
label_B07C:; return;
label_B07D:; return;
label_B07F:; return;
label_B081:; return;
label_B083:; return;
label_B085:; return;
label_B087:; return;
label_B089:; return;
label_B08B:; return;
label_B08D:; return;
label_B08F:; return;
label_B091:; return;
label_B093:; return;
label_B095:; return;
label_B097:; return;
label_B099:; return;
label_B09B:; return;
label_B09D:; return;
label_B09F:; return;
label_B0A1:; return;
label_B0A3:; return;
label_B0A5:; return;
label_B0A7:; return;
label_B0A9:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B1:; return;
label_B0B3:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0BF:; return;
label_B0C1:; return;
label_B0C3:; return;
label_B0C5:; return;
label_B0C7:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D7:; return;
label_B0D9:; return;
label_B0DB:; return;
label_B0DD:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FA:; return;
label_B0FC:; return;
label_B0FE:; return;
label_B100:; return;
label_B102:; return;
label_B104:; return;
label_B106:; return;
label_B108:; return;
label_B10A:; return;
label_B10C:; return;
label_B10E:; return;
label_B110:; return;
label_B112:; return;
label_B114:; return;
label_B116:; return;
label_B118:; return;
label_B11A:; return;
label_B11C:; return;
label_B11E:; return;
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
label_B13A:; return;
label_B13C:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14A:; return;
label_B14C:; return;
label_B14E:; return;
label_B150:; return;
label_B152:; return;
label_B155:; return;
label_B157:; return;
label_B159:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B169:; return;
label_B16A:; return;
label_B16B:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B170:; return;
label_B172:; return;
label_B174:; return;
label_B175:; return;
label_B176:; return;
label_B177:; return;
label_B178:; return;
label_B17A:; return;
label_B17C:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B1:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B7:; return;
label_B1B9:; return;
label_B1BB:; return;
label_B1BD:; return;
label_B1BF:; return;
label_B1C1:; return;
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
label_B1E6:; return;
label_B1E9:; return;
label_B1EB:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F2:; return;
label_B1F5:; return;
label_B1F7:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B201:; return;
label_B203:; return;
label_B205:; return;
label_B207:; return;
label_B209:; return;
label_B20B:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B213:; return;
label_B215:; return;
label_B216:; return;
label_B218:; return;
label_B219:; return;
label_B21B:; return;
label_B21D:; return;
label_B21F:; return;
label_B221:; return;
label_B223:; return;
label_B225:; return;
label_B227:; return;
label_B229:; return;
label_B22B:; return;
label_B22C:; return;
label_B22E:; return;
label_B22F:; return;
label_B231:; return;
label_B233:; return;
label_B235:; return;
label_B237:; return;
label_B239:; return;
label_B23B:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B242:; return;
label_B244:; return;
label_B245:; return;
label_B247:; return;
label_B249:; return;
label_B24B:; return;
label_B24D:; return;
label_B24F:; return;
label_B251:; return;
label_B253:; return;
label_B255:; return;
label_B257:; return;
label_B259:; return;
label_B25A:; return;
label_B25D:; return;
label_B25F:; return;
label_B261:; return;
label_B263:; return;
label_B265:; return;
label_B267:; return;
label_B269:; return;
label_B26B:; return;
label_B26D:; return;
label_B26F:; return;
label_B270:; return;
label_B271:; return;
label_B273:; return;
label_B275:; return;
label_B277:; return;
label_B279:; return;
label_B27B:; return;
label_B27D:; return;
label_B27F:; return;
label_B281:; return;
label_B283:; return;
label_B285:; return;
label_B288:; return;
label_B28A:; return;
label_B28C:; return;
label_B28E:; return;
label_B28F:; return;
label_B290:; return;
label_B292:; return;
label_B294:; return;
label_B295:; return;
label_B296:; return;
label_B298:; return;
label_B29A:; return;
label_B29C:; return;
label_B29E:; return;
label_B2A0:; return;
label_B2A1:; return;
label_B2A2:; return;
label_B2A4:; return;
label_B2A5:; return;
label_B2A6:; return;
label_B2A8:; return;
label_B2A9:; return;
label_B2AA:; return;
label_B2AD:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B4:; return;
label_B2B5:; return;
label_B2B6:; return;
label_B2B8:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2BE:; return;
label_B2C0:; return;
label_B2C1:; return;
label_B2C2:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CB:; return;
label_B2CD:; return;
label_B2CF:; return;
label_B2D1:; return;
label_B2D3:; return;
label_B2D5:; return;
label_B2D6:; return;
label_B2D9:; return;
label_B2DA:; return;
label_B2DD:; return;
label_B2DF:; return;
label_B2E1:; return;
label_B2E3:; return;
label_B2E5:; return;
label_B2E7:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2EC:; return;
label_B2EF:; return;
label_B2F1:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2F9:; return;
label_B2FB:; return;
label_B2FD:; return;
label_B2FE:; return;
label_B301:; return;
label_B303:; return;
label_B305:; return;
label_B307:; return;
label_B309:; return;
label_B30B:; return;
label_B30C:; return;
label_B30F:; return;
label_B311:; return;
label_B313:; return;
label_B315:; return;
label_B317:; return;
label_B319:; return;
label_B31B:; return;
label_B31D:; return;
label_B31F:; return;
label_B320:; return;
label_B323:; return;
label_B325:; return;
label_B327:; return;
label_B329:; return;
label_B32B:; return;
label_B32D:; return;
label_B32E:; return;
label_B331:; return;
label_B333:; return;
label_B335:; return;
label_B337:; return;
label_B339:; return;
label_B33B:; return;
label_B33D:; return;
label_B33F:; return;
label_B341:; return;
label_B343:; return;
label_B345:; return;
label_B347:; return;
label_B349:; return;
label_B34B:; return;
label_B34D:; return;
label_B34F:; return;
label_B350:; return;
label_B353:; return;
label_B355:; return;
label_B357:; return;
label_B359:; return;
label_B35B:; return;
label_B35D:; return;
label_B35F:; return;
label_B361:; return;
label_B362:; return;
label_B365:; return;
label_B367:; return;
label_B369:; return;
label_B36B:; return;
label_B36D:; return;
label_B36F:; return;
label_B371:; return;
label_B373:; return;
label_B375:; return;
label_B377:; return;
label_B379:; return;
label_B37B:; return;
label_B37D:; return;
label_B37F:; return;
label_B381:; return;
label_B383:; return;
label_B385:; return;
label_B386:; return;
label_B389:; return;
label_B38B:; return;
label_B38D:; return;
label_B38F:; return;
label_B391:; return;
label_B393:; return;
label_B395:; return;
label_B397:; return;
label_B399:; return;
label_B39B:; return;
label_B39D:; return;
label_B39F:; return;
label_B3A1:; return;
label_B3A3:; return;
label_B3A5:; return;
label_B3A7:; return;
label_B3A9:; return;
label_B3AB:; return;
label_B3AD:; return;
label_B3AF:; return;
label_B3B0:; return;
label_B3B3:; return;
label_B3B5:; return;
label_B3B7:; return;
label_B3B9:; return;
label_B3BB:; return;
label_B3BD:; return;
label_B3BF:; return;
label_B3C1:; return;
label_B3C3:; return;
label_B3C5:; return;
label_B3C7:; return;
label_B3C9:; return;
label_B3CB:; return;
label_B3CE:; return;
label_B3D1:; return;
label_B3D4:; return;
label_B3D7:; return;
label_B3DA:; return;
label_B3DB:; return;
label_B3DE:; return;
label_B3E1:; return;
label_B3E4:; return;
label_B3E7:; return;
label_B3EA:; return;
label_B3EB:; return;
label_B3EE:; return;
label_B3EF:; return;
label_B3F2:; return;
label_B3F4:; return;
label_B3F7:; return;
label_B3FA:; return;
label_B3FC:; return;
label_B3FF:; return;
label_B402:; return;
label_B405:; return;
label_B407:; return;
label_B40A:; return;
label_B40D:; return;
label_B40F:; return;
label_B412:; return;
label_B415:; return;
label_B417:; return;
label_B419:; return;
label_B41C:; return;
label_B41F:; return;
label_B421:; return;
label_B424:; return;
label_B427:; return;
label_B429:; return;
label_B42C:; return;
label_B42E:; return;
label_B431:; return;
label_B434:; return;
label_B437:; return;
label_B439:; return;
label_B43C:; return;
label_B43F:; return;
label_B442:; return;
label_B445:; return;
label_B448:; return;
label_B44B:; return;
label_B44E:; return;
label_B451:; return;
label_B454:; return;
label_B457:; return;
label_B459:; return;
label_B45B:; return;
label_B45E:; return;
label_B461:; return;
label_B464:; return;
label_B467:; return;
label_B46A:; return;
label_B46D:; return;
label_B470:; return;
label_B473:; return;
label_B476:; return;
label_B479:; return;
label_B47C:; return;
label_B47F:; return;
label_B481:; return;
label_B483:; return;
label_B485:; return;
label_B488:; return;
label_B48B:; return;
label_B48D:; return;
label_B490:; return;
label_B493:; return;
label_B495:; return;
label_B497:; return;
label_B49A:; return;
label_B49D:; return;
label_B49F:; return;
label_B4A1:; return;
label_B4A4:; return;
label_B4A7:; return;
label_B4AA:; return;
label_B4AD:; return;
label_B4B0:; return;
label_B4B3:; return;
label_B4B6:; return;
label_B4B9:; return;
label_B4BC:; return;
label_B4BF:; return;
label_B4C2:; return;
label_B4C5:; return;
label_B4C8:; return;
label_B4CB:; return;
label_B4CE:; return;
label_B4D1:; return;
label_B4D4:; return;
label_B4D7:; return;
label_B4DA:; return;
label_B4DD:; return;
label_B4E0:; return;
label_B4E3:; return;
label_B4E6:; return;
label_B4E9:; return;
label_B4EC:; return;
label_B4EF:; return;
label_B4F2:; return;
label_B4F5:; return;
label_B4F8:; return;
label_B4FB:; return;
label_B4FE:; return;
label_B501:; return;
label_B504:; return;
label_B507:; return;
label_B50A:; return;
label_B50D:; return;
label_B510:; return;
label_B513:; return;
label_B516:; return;
label_B519:; return;
label_B51C:; return;
label_B51F:; return;
label_B521:; return;
label_B523:; return;
label_B526:; return;
label_B528:; return;
label_B52B:; return;
label_B52D:; return;
label_B52F:; return;
label_B532:; return;
label_B535:; return;
label_B538:; return;
label_B53B:; return;
label_B53E:; return;
label_B541:; return;
label_B543:; return;
label_B545:; return;
label_B547:; return;
label_B54A:; return;
label_B54D:; return;
label_B54F:; return;
label_B552:; return;
label_B555:; return;
label_B557:; return;
label_B559:; return;
label_B55B:; return;
label_B55E:; return;
label_B561:; return;
label_B564:; return;
label_B567:; return;
label_B56A:; return;
label_B56D:; return;
label_B56F:; return;
label_B572:; return;
label_B575:; return;
label_B577:; return;
label_B579:; return;
label_B57C:; return;
label_B57F:; return;
label_B582:; return;
label_B585:; return;
label_B588:; return;
label_B58B:; return;
label_B58E:; return;
label_B591:; return;
label_B594:; return;
label_B596:; return;
label_B599:; return;
label_B59B:; return;
label_B59D:; return;
label_B59F:; return;
label_B5A2:; return;
label_B5A5:; return;
label_B5A8:; return;
label_B5AB:; return;
label_B5AD:; return;
label_B5B0:; return;
label_B5B3:; return;
label_B5B5:; return;
label_B5B8:; return;
label_B5BB:; return;
label_B5BE:; return;
label_B5C1:; return;
label_B5C4:; return;
label_B5C7:; return;
label_B5C9:; return;
label_B5CC:; return;
label_B5CF:; return;
label_B5D2:; return;
label_B5D5:; return;
label_B5D8:; return;
label_B5DB:; return;
label_B5DE:; return;
label_B5E1:; return;
label_B5E4:; return;
label_B5E7:; return;
label_B5EA:; return;
label_B5ED:; return;
label_B5F0:; return;
label_B5F3:; return;
label_B5F5:; return;
label_B5F7:; return;
label_B5FA:; return;
label_B5FD:; return;
label_B600:; return;
label_B603:; return;
label_B605:; return;
label_B607:; return;
label_B609:; return;
label_B60B:; return;
label_B60D:; return;
label_B60F:; return;
label_B611:; return;
label_B614:; return;
label_B617:; return;
label_B619:; return;
label_B61C:; return;
label_B61E:; return;
label_B620:; return;
label_B623:; return;
label_B626:; return;
label_B629:; return;
label_B62C:; return;
label_B62F:; return;
label_B631:; return;
label_B633:; return;
label_B636:; return;
label_B639:; return;
label_B63C:; return;
label_B63F:; return;
label_B642:; return;
label_B645:; return;
label_B648:; return;
label_B64B:; return;
label_B64E:; return;
label_B651:; return;
label_B654:; return;
label_B657:; return;
label_B65A:; return;
label_B65D:; return;
label_B660:; return;
label_B663:; return;
label_B665:; return;
label_B668:; return;
label_B66B:; return;
label_B66E:; return;
label_B671:; return;
label_B674:; return;
label_B677:; return;
label_B679:; return;
label_B67C:; return;
label_B67F:; return;
label_B682:; return;
label_B685:; return;
label_B688:; return;
label_B68B:; return;
label_B68E:; return;
label_B691:; return;
label_B693:; return;
label_B695:; return;
label_B698:; return;
label_B69B:; return;
label_B69E:; return;
label_B6A1:; return;
label_B6A3:; return;
label_B6A6:; return;
label_B6A9:; return;
label_B6AC:; return;
label_B6AF:; return;
label_B6B1:; return;
label_B6B3:; return;
label_B6B6:; return;
label_B6B9:; return;
label_B6BC:; return;
label_B6BF:; return;
label_B6C1:; return;
label_B6C4:; return;
label_B6C7:; return;
label_B6CA:; return;
label_B6CD:; return;
label_B6D0:; return;
label_B6D3:; return;
label_B6D6:; return;
label_B6D9:; return;
label_B6DB:; return;
label_B6DE:; return;
label_B6E1:; return;
label_B6E4:; return;
label_B6E7:; return;
label_B6EA:; return;
label_B6ED:; return;
label_B6F0:; return;
label_B6F3:; return;
label_B6F5:; return;
label_B6F8:; return;
label_B6FB:; return;
label_B6FE:; return;
label_B701:; return;
label_B704:; return;
label_B707:; return;
label_B709:; return;
label_B70B:; return;
label_B70D:; return;
label_B70F:; return;
label_B712:; return;
label_B715:; return;
label_B718:; return;
label_B71B:; return;
label_B71D:; return;
label_B71F:; return;
label_B721:; return;
label_B724:; return;
label_B727:; return;
label_B729:; return;
label_B72C:; return;
label_B72F:; return;
label_B732:; return;
label_B735:; return;
label_B738:; return;
label_B73B:; return;
label_B73E:; return;
label_B741:; return;
label_B743:; return;
label_B746:; return;
label_B749:; return;
label_B74C:; return;
label_B74F:; return;
label_B751:; return;
label_B753:; return;
label_B756:; return;
label_B759:; return;
label_B75B:; return;
label_B75E:; return;
label_B761:; return;
label_B764:; return;
label_B767:; return;
label_B769:; return;
label_B76C:; return;
label_B76F:; return;
label_B772:; return;
label_B775:; return;
label_B778:; return;
label_B77B:; return;
label_B77E:; return;
label_B781:; return;
label_B783:; return;
label_B785:; return;
label_B788:; return;
label_B78A:; return;
label_B78D:; return;
label_B78F:; return;
label_B792:; return;
label_B795:; return;
label_B797:; return;
label_B79A:; return;
label_B79D:; return;
label_B79F:; return;
label_B7A2:; return;
label_B7A5:; return;
label_B7A7:; return;
label_B7AA:; return;
label_B7AD:; return;
label_B7B0:; return;
label_B7B3:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C1:; return;
label_B7C3:; return;
label_B7C5:; return;
label_B7C8:; return;
label_B7CB:; return;
label_B7CD:; return;
label_B7D0:; return;
label_B7D3:; return;
label_B7D6:; return;
label_B7D9:; return;
label_B7DC:; return;
label_B7DF:; return;
label_B7E1:; return;
label_B7E4:; return;
label_B7E7:; return;
label_B7EA:; return;
label_B7ED:; return;
label_B7F0:; return;
label_B7F2:; return;
label_B7F5:; return;
label_B7F8:; return;
label_B7FB:; return;
label_B7FD:; return;
label_B7FF:; return;
label_B801:; return;
label_B803:; return;
label_B805:; return;
label_B806:; return;
label_B809:; return;
label_B80A:; return;
label_B80D:; return;
label_B80E:; return;
label_B80F:; return;
label_B810:; return;
label_B811:; return;
label_B813:; return;
label_B814:; return;
label_B815:; return;
label_B816:; return;
label_B817:; return;
label_B819:; return;
label_B81B:; return;
label_B81C:; return;
label_B81D:; return;
label_B81E:; return;
label_B81F:; return;
label_B821:; return;
label_B824:; return;
label_B825:; return;
label_B826:; return;
label_B827:; return;
label_B828:; return;
label_B829:; return;
label_B82A:; return;
label_B82B:; return;
label_B82C:; return;
label_B82F:; return;
label_B830:; return;
label_B831:; return;
label_B832:; return;
label_B833:; return;
label_B834:; return;
label_B835:; return;
label_B836:; return;
label_B837:; return;
label_B838:; return;
label_B839:; return;
label_B83A:; return;
label_B83B:; return;
label_B83C:; return;
label_B83D:; return;
label_B83E:; return;
label_B83F:; return;
label_B840:; return;
label_B841:; return;
label_B842:; return;
label_B843:; return;
label_B844:; return;
label_B845:; return;
label_B846:; return;
label_B847:; return;
label_B848:; return;
label_B849:; return;
label_B84A:; return;
label_B84B:; return;
label_B84C:; return;
label_B84D:; return;
label_B84E:; return;
label_B84F:; return;
label_B851:; return;
label_B852:; return;
label_B853:; return;
label_B854:; return;
label_B855:; return;
label_B857:; return;
label_B858:; return;
label_B859:; return;
label_B85B:; return;
label_B85E:; return;
label_B85F:; return;
label_B860:; return;
label_B861:; return;
label_B862:; return;
label_B863:; return;
label_B865:; return;
label_B866:; return;
label_B867:; return;
label_B868:; return;
label_B869:; return;
label_B86A:; return;
label_B86B:; return;
label_B86C:; return;
label_B86D:; return;
label_B870:; return;
label_B871:; return;
label_B872:; return;
label_B873:; return;
label_B874:; return;
label_B875:; return;
label_B876:; return;
label_B877:; return;
label_B878:; return;
label_B879:; return;
label_B87A:; return;
label_B87B:; return;
label_B87C:; return;
label_B87D:; return;
label_B87E:; return;
label_B87F:; return;
label_B880:; return;
label_B881:; return;
label_B882:; return;
label_B883:; return;
label_B884:; return;
label_B885:; return;
label_B886:; return;
label_B887:; return;
label_B889:; return;
label_B88A:; return;
label_B88B:; return;
label_B88D:; return;
label_B88F:; return;
label_B890:; return;
label_B891:; return;
label_B892:; return;
label_B893:; return;
label_B894:; return;
label_B895:; return;
label_B897:; return;
label_B898:; return;
label_B899:; return;
label_B89A:; return;
label_B89B:; return;
label_B89D:; return;
label_B89E:; return;
label_B89F:; return;
label_B8A0:; return;
label_B8A1:; return;
label_B8A2:; return;
label_B8A3:; return;
label_B8A4:; return;
label_B8A5:; return;
label_B8A6:; return;
label_B8A7:; return;
label_B8A8:; return;
label_B8A9:; return;
label_B8AA:; return;
label_B8AB:; return;
label_B8AC:; return;
label_B8AD:; return;
label_B8AE:; return;
label_B8AF:; return;
label_B8B0:; return;
label_B8B1:; return;
label_B8B2:; return;
label_B8B3:; return;
label_B8B4:; return;
label_B8B5:; return;
label_B8B6:; return;
label_B8B7:; return;
label_B8B8:; return;
label_B8B9:; return;
label_B8BA:; return;
label_B8BB:; return;
label_B8BC:; return;
label_B8BD:; return;
label_B8BE:; return;
label_B8BF:; return;
label_B8C0:; return;
label_B8C1:; return;
label_B8C2:; return;
label_B8C3:; return;
label_B8C4:; return;
label_B8C5:; return;
label_B8C6:; return;
label_B8C7:; return;
label_B8C8:; return;
label_B8C9:; return;
label_B8CA:; return;
label_B8CB:; return;
label_B8CC:; return;
label_B8CD:; return;
label_B8CF:; return;
label_B8D0:; return;
label_B8D1:; return;
label_B8D3:; return;
label_B8D4:; return;
label_B8D7:; return;
label_B8D8:; return;
label_B8D9:; return;
label_B8DA:; return;
label_B8DB:; return;
label_B8DC:; return;
label_B8DD:; return;
label_B8DE:; return;
label_B8DF:; return;
label_B8E0:; return;
label_B8E1:; return;
label_B8E2:; return;
label_B8E3:; return;
label_B8E4:; return;
label_B8E5:; return;
label_B8E6:; return;
label_B8E7:; return;
label_B8E8:; return;
label_B8E9:; return;
label_B8EA:; return;
label_B8EB:; return;
label_B8EC:; return;
label_B8ED:; return;
label_B8EE:; return;
label_B8EF:; return;
label_B8F0:; return;
label_B8F1:; return;
label_B8F2:; return;
label_B8F3:; return;
label_B8F4:; return;
label_B8F5:; return;
label_B8F6:; return;
label_B8F7:; return;
label_B8F8:; return;
label_B8F9:; return;
label_B8FA:; return;
label_B8FB:; return;
label_B8FC:; return;
label_B8FD:; return;
label_B8FE:; return;
label_B8FF:; return;
label_B900:; return;
label_B901:; return;
label_B902:; return;
label_B903:; return;
label_B904:; return;
label_B906:; return;
label_B907:; return;
label_B908:; return;
label_B90B:; return;
label_B90C:; return;
label_B90D:; return;
label_B90E:; return;
label_B90F:; return;
label_B911:; return;
label_B913:; return;
label_B915:; return;
label_B916:; return;
label_B917:; return;
label_B918:; return;
label_B919:; return;
label_B91A:; return;
label_B91B:; return;
label_B91D:; return;
label_B91E:; return;
label_B91F:; return;
label_B920:; return;
label_B921:; return;
label_B922:; return;
label_B923:; return;
label_B924:; return;
label_B925:; return;
label_B926:; return;
label_B927:; return;
label_B928:; return;
label_B929:; return;
label_B92A:; return;
label_B92B:; return;
label_B92C:; return;
label_B92D:; return;
label_B92E:; return;
label_B92F:; return;
label_B931:; return;
label_B932:; return;
label_B933:; return;
label_B934:; return;
label_B935:; return;
label_B936:; return;
label_B937:; return;
label_B938:; return;
label_B939:; return;
label_B93A:; return;
label_B93B:; return;
label_B93C:; return;
label_B93D:; return;
label_B93E:; return;
label_B93F:; return;
label_B942:; return;
label_B943:; return;
label_B944:; return;
label_B946:; return;
label_B947:; return;
label_B948:; return;
label_B949:; return;
label_B94A:; return;
label_B94B:; return;
label_B94C:; return;
label_B94D:; return;
label_B94E:; return;
label_B94F:; return;
label_B952:; return;
label_B955:; return;
label_B956:; return;
label_B957:; return;
label_B958:; return;
label_B959:; return;
label_B95A:; return;
label_B95C:; return;
label_B95D:; return;
label_B95E:; return;
label_B95F:; return;
label_B960:; return;
label_B961:; return;
label_B962:; return;
label_B963:; return;
label_B965:; return;
label_B966:; return;
label_B967:; return;
label_B968:; return;
label_B969:; return;
label_B96A:; return;
label_B96B:; return;
label_B96C:; return;
label_B96D:; return;
label_B96E:; return;
label_B96F:; return;
label_B970:; return;
label_B971:; return;
label_B972:; return;
label_B973:; return;
label_B974:; return;
label_B976:; return;
label_B977:; return;
label_B978:; return;
label_B979:; return;
label_B97A:; return;
label_B97B:; return;
label_B97C:; return;
label_B97D:; return;
label_B97E:; return;
label_B97F:; return;
label_B980:; return;
label_B981:; return;
label_B983:; return;
label_B984:; return;
label_B985:; return;
label_B986:; return;
label_B987:; return;
label_B988:; return;
label_B989:; return;
label_B98A:; return;
label_B98B:; return;
label_B98D:; return;
label_B98E:; return;
label_B98F:; return;
label_B990:; return;
label_B991:; return;
label_B992:; return;
label_B993:; return;
label_B994:; return;
label_B995:; return;
label_B996:; return;
label_B998:; return;
label_B99B:; return;
label_B99C:; return;
label_B99D:; return;
label_B99E:; return;
label_B99F:; return;
label_B9A2:; return;
label_B9A3:; return;
label_B9A4:; return;
label_B9A5:; return;
label_B9A6:; return;
label_B9A7:; return;
label_B9A8:; return;
label_B9A9:; return;
label_B9AA:; return;
label_B9AB:; return;
label_B9AC:; return;
label_B9AD:; return;
label_B9AF:; return;
label_B9B0:; return;
label_B9B1:; return;
label_B9B2:; return;
label_B9B3:; return;
label_B9B4:; return;
label_B9B5:; return;
label_B9B6:; return;
label_B9B7:; return;
label_B9B8:; return;
label_B9B9:; return;
label_B9BA:; return;
label_B9BB:; return;
label_B9BC:; return;
label_B9BD:; return;
label_B9BE:; return;
label_B9BF:; return;
label_B9C0:; return;
label_B9C1:; return;
label_B9C2:; return;
label_B9C3:; return;
label_B9C4:; return;
label_B9C5:; return;
label_B9C6:; return;
label_B9C7:; return;
label_B9C8:; return;
label_B9C9:; return;
label_B9CA:; return;
label_B9CB:; return;
label_B9CE:; return;
label_B9CF:; return;
label_B9D0:; return;
label_B9D1:; return;
label_B9D4:; return;
label_B9D5:; return;
label_B9D6:; return;
label_B9D8:; return;
label_B9D9:; return;
label_B9DA:; return;
label_B9DB:; return;
label_B9DC:; return;
label_B9DD:; return;
label_B9DE:; return;
label_B9DF:; return;
label_B9E0:; return;
label_B9E1:; return;
label_B9E2:; return;
label_B9E3:; return;
label_B9E4:; return;
label_B9E5:; return;
label_B9E6:; return;
label_B9E7:; return;
label_B9E8:; return;
label_B9E9:; return;
label_B9EA:; return;
label_B9EB:; return;
label_B9EC:; return;
label_B9ED:; return;
label_B9EE:; return;
label_B9EF:; return;
label_B9F0:; return;
label_B9F1:; return;
label_B9F2:; return;
label_B9F3:; return;
label_B9F4:; return;
label_B9F5:; return;
label_B9F6:; return;
label_B9F7:; return;
label_B9F8:; return;
label_B9F9:; return;
label_B9FA:; return;
label_B9FB:; return;
label_B9FC:; return;
label_B9FD:; return;
label_B9FE:; return;
label_B9FF:; return;
label_BA00:; return;
label_BA03:; return;
label_BA04:; return;
label_BA05:; return;
label_BA07:; return;
label_BA08:; return;
label_BA09:; return;
label_BA0A:; return;
label_BA0B:; return;
label_BA0D:; return;
label_BA0E:; return;
label_BA0F:; return;
label_BA11:; return;
label_BA14:; return;
label_BA15:; return;
label_BA16:; return;
label_BA17:; return;
label_BA19:; return;
label_BA1B:; return;
label_BA1C:; return;
label_BA1D:; return;
label_BA1E:; return;
label_BA20:; return;
label_BA21:; return;
label_BA23:; return;
label_BA24:; return;
label_BA25:; return;
label_BA26:; return;
label_BA27:; return;
label_BA28:; return;
label_BA29:; return;
label_BA2A:; return;
label_BA2B:; return;
label_BA2C:; return;
label_BA2D:; return;
label_BA2E:; return;
label_BA2F:; return;
label_BA30:; return;
label_BA31:; return;
label_BA32:; return;
label_BA33:; return;
label_BA34:; return;
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
label_BA87:; return;
label_BA88:; return;
label_BA89:; return;
label_BA8A:; return;
label_BA8C:; return;
label_BA8E:; return;
label_BA90:; return;
label_BA91:; return;
label_BA93:; return;
label_BA95:; return;
label_BA96:; return;
label_BA99:; return;
label_BA9A:; return;
label_BA9B:; return;
label_BA9C:; return;
label_BA9D:; return;
label_BA9E:; return;
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
label_BAAB:; return;
label_BAAC:; return;
label_BAAD:; return;
label_BAAE:; return;
label_BAAF:; return;
label_BAB0:; return;
label_BAB1:; return;
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
label_BB02:; return;
label_BB03:; return;
label_BB05:; return;
label_BB07:; return;
label_BB09:; return;
label_BB0A:; return;
label_BB0B:; return;
label_BB0C:; return;
label_BB0E:; return;
label_BB0F:; return;
label_BB11:; return;
label_BB13:; return;
label_BB15:; return;
label_BB16:; return;
label_BB17:; return;
label_BB18:; return;
label_BB19:; return;
label_BB1B:; return;
label_BB1D:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB22:; return;
label_BB23:; return;
label_BB24:; return;
label_BB25:; return;
label_BB26:; return;
label_BB27:; return;
label_BB28:; return;
label_BB29:; return;
label_BB2A:; return;
label_BB2B:; return;
label_BB2C:; return;
label_BB2D:; return;
label_BB2E:; return;
label_BB31:; return;
label_BB32:; return;
label_BB33:; return;
label_BB34:; return;
label_BB35:; return;
label_BB36:; return;
label_BB39:; return;
label_BB3A:; return;
label_BB3B:; return;
label_BB3D:; return;
label_BB3E:; return;
label_BB3F:; return;
label_BB40:; return;
label_BB41:; return;
label_BB42:; return;
label_BB43:; return;
label_BB44:; return;
label_BB47:; return;
label_BB48:; return;
label_BB49:; return;
label_BB4A:; return;
label_BB4B:; return;
label_BB4C:; return;
label_BB4E:; return;
label_BB50:; return;
label_BB51:; return;
label_BB52:; return;
label_BB53:; return;
label_BB54:; return;
label_BB55:; return;
label_BB56:; return;
label_BB57:; return;
label_BB58:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5C:; return;
label_BB5D:; return;
label_BB5E:; return;
label_BB61:; return;
label_BB62:; return;
label_BB63:; return;
label_BB64:; return;
label_BB65:; return;
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
}

void func_9905_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9905_b13");
#endif
label_9905:;
    /* $9905: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x60 + g_cpu.X) & 0xFF), g_cpu.A);
label_9907:;
    /* $9907: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9909:;
    /* $9909: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x61 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_990B:;
    /* $990B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_990D:;
    /* $990D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_990F:;
    /* $990F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x62 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9913:;
    /* $9913: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0163 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9916:;
    /* $9916: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x41 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9918:;
    /* $9918: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x81 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_991A:;
    /* $991A: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_991C:;
    /* $991C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_991E:;
    /* $991E: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9920:;
    /* $9920: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x41); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9922:;
    /* $9922: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x81); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9924:;
    /* $9924: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xC1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9926:;
    /* $9926: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9928:;
    /* $9928: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_992A:;
    /* $992A: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x41); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_992C:;
    /* $992C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x81); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_992E:;
    /* $992E: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9930:;
    /* $9930: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9930); return;
}

void func_8504_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b13");
#endif
label_8504:;
    /* $8504: EA */ maybe_trigger_vblank(2); /* NOP */
label_8505:;
    /* $8505: EA */ maybe_trigger_vblank(2); /* NOP */
label_8506:;
    /* $8506: EA */ maybe_trigger_vblank(2); /* NOP */
label_8507:;
    /* $8507: EB */ maybe_trigger_vblank(2); { uint8_t m=0xEA; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8509:;
    /* $8509: EA */ maybe_trigger_vblank(2); /* NOP */
label_850A:;
    /* $850A: EA */ maybe_trigger_vblank(2); /* NOP */
label_850B:;
    /* $850B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xE9; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_850D:;
    /* $850D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_850E:;
    /* $850E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_850F:;
    /* $850F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x850F); return;
}

void func_809D_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_809D_b13");
#endif
label_809D:;
    /* $809D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_809F:;
    /* $809F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80A1:;
    /* $80A1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80A3:;
    /* $80A3: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80A5:;
    /* $80A5: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80A7:;
    /* $80A7: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80A9:;
    /* $80A9: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80AB:;
    /* $80AB: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80AD:;
    /* $80AD: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80AF:;
    /* $80AF: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80B1:;
    /* $80B1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x84 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_80B3:;
    /* $80B3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80B5:;
    /* $80B5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80B7:;
    /* $80B7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80B9:;
    /* $80B9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80BB:;
    /* $80BB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80BD:;
    /* $80BD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80BF:;
    /* $80BF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80C1:;
    /* $80C1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80C3:;
    /* $80C3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80C5:;
    /* $80C5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80C7:;
    /* $80C7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80C9:;
    /* $80C9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80CB:;
    /* $80CB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80CD:;
    /* $80CD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80CF:;
    /* $80CF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80D1:;
    /* $80D1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80D3:;
    /* $80D3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80D5:;
    /* $80D5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80D7:;
    /* $80D7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80D9:;
    /* $80D9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80DB:;
    /* $80DB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80DD:;
    /* $80DD: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80DF:;
    /* $80DF: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80E1:;
    /* $80E1: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80E3:;
    /* $80E3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80E5:;
    /* $80E5: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80E7:;
    /* $80E7: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80E9:;
    /* $80E9: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80EB:;
    /* $80EB: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80ED:;
    /* $80ED: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
label_80EF:;
    /* $80EF: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80F1:;
    /* $80F1: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80F3:;
    /* $80F3: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80F5:;
    /* $80F5: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80F7:;
    /* $80F7: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80F9:;
    /* $80F9: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80FB:;
    /* $80FB: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80FD:;
    /* $80FD: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_80FF:;
    /* $80FF: 85 */ maybe_trigger_vblank(3); nes_write(0x4E, g_cpu.A);
label_8101:;
    /* $8101: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x7A64; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8104:;
    /* $8104: 8E */ maybe_trigger_vblank(4); nes_write(0xAE9E, g_cpu.X);
label_8107:;
    /* $8107: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8108:;
    /* $8108: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x00EE), 13); return; }
label_810A:;
    /* $810A: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_810C:;
    /* $810C: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x4A32 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_810F:;
    /* $810F: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x8C76 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8112:;
    /* $8112: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAE); FLAG_NZ(g_cpu.Y);
label_8114:;
    /* $8114: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCE); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8116:;
    /* $8116: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xDE + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8118:;
    /* $8118: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xFE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_811A:;
    /* $811A: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_811B:;
    /* $811B: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x3E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_811D:;
    /* $811D: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_811E:;
    /* $811E: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x4A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8120:;
    /* $8120: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_8121:;
    /* $8121: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x70; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8123:;
    /* $8123: EA */ maybe_trigger_vblank(2); /* NOP */
label_8124:;
    /* $8124: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8126:;
    /* $8126: 7A */ maybe_trigger_vblank(2); /* NOP */
label_8127:;
    /* $8127: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8128:;
    /* $8128: 96 */ maybe_trigger_vblank(4); nes_write((0xA2 + g_cpu.Y) & 0xFF, g_cpu.X);
label_812A:;
    /* $812A: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_812B:;
    /* $812B: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD6); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_812D:;
    /* $812D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xFA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_812F:;
    /* $812F: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2E1E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8132:;
    /* $8132: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x5A4C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8135:;
    /* $8135: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8136:;
    /* $8136: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xA490 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8139:;
    /* $8139: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_813A:;
    /* $813A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xD4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_813C:;
    /* $813C: E2 */ maybe_trigger_vblank(2); /* NOP */
label_813E:;
    /* $813E: FA */ maybe_trigger_vblank(2); /* NOP */
label_813F:;
    /* $813F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8141:;
    /* $8141: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0189), 13); return; }
label_8143:;
    /* $8143: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8144:;
    /* $8144: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x00FE), 13); return; }
label_8146:;
    /* $8146: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8147:;
    /* $8147: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8148:;
    /* $8148: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x3E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_814A:;
    /* $814A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_814B:;
    /* $814B: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_814C:;
    /* $814C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_814D:;
    /* $814D: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xA294 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8150:;
    /* $8150: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8114;
    }
label_8152:;
    /* $8152: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE4 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8154:;
    /* $8154: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8155:;
    /* $8155: FC */ maybe_trigger_vblank(4); (void)nes_read((0x1006 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8158:;
    /* $8158: 1A */ maybe_trigger_vblank(2); /* NOP */
label_8159:;
    /* $8159: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_815B:;
    /* $815B: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x584A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_815E:;
    /* $815E: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x74; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8160:;
    /* $8160: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8162:;
    /* $8162: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8163:;
    /* $8163: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x5C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8165:;
    /* $8165: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x9898 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8168:;
    /* $8168: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xD4 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_816A:;
    /* $816A: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_816B:;
    /* $816B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0187), 13); return; }
label_816D:;
    /* $816D: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x48 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_816F:;
    /* $816F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01C7), 13); return; }
label_8171:;
    /* $8171: 5A */ maybe_trigger_vblank(2); /* NOP */
label_8172:;
    /* $8172: 84 */ maybe_trigger_vblank(3); nes_write(0xB0, g_cpu.Y);
label_8174:;
    /* $8174: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_814A;
    }
label_8176:;
    /* $8176: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8177:;
    /* $8177: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF4F0); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_817A:;
    /* $817A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x442A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_817D:;
    /* $817D: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x9270; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8180:;
    /* $8180: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xC0 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_8182:;
    /* $8182: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8183:;
    /* $8183: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xEE; g_cpu.C=(g_cpu.X>=0xEE)?1:0; FLAG_NZ(r&0xFF); }
label_8185:;
    /* $8185: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x542E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8188:;
    /* $8188: 7C */ maybe_trigger_vblank(4); (void)nes_read((0xC8A6 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_818B:;
    /* $818B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x4016; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_818E:;
    /* $818E: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_818F:;
    /* $818F: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x76); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8191:;
    /* $8191: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8192:;
    /* $8192: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xBC; FLAG_NZ(g_cpu.X);
label_8194:;
    /* $8194: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8195:;
    /* $8195: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8196:;
    /* $8196: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8197:;
    /* $8197: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8198:;
    /* $8198: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x3420); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_819B:;
    /* $819B: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x5C50 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_819E:;
    /* $819E: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x76; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81A0:;
    /* $81A0: 84 */ maybe_trigger_vblank(3); nes_write(0x92, g_cpu.Y);
label_81A2:;
    /* $81A2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xB4; FLAG_NZ(g_cpu.Y);
label_81A4:;
    /* $81A4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xDA; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81A6:;
    /* $81A6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x1602; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81A9:;
    /* $81A9: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_81AA:;
    /* $81AA: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_81AB:;
    /* $81AB: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_81AC:;
    /* $81AC: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5C5C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81AF:;
    /* $81AF: 7A */ maybe_trigger_vblank(2); /* NOP */
label_81B0:;
    /* $81B0: 94 */ maybe_trigger_vblank(4); nes_write((0xB2 + g_cpu.X) & 0xFF, g_cpu.Y);
label_81B2:;
    /* $81B2: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xDA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81B4:;
    /* $81B4: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x12F8 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81B7:;
    /* $81B7: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x3A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_81B9:;
    /* $81B9: 5C */ maybe_trigger_vblank(4); (void)nes_read((0xA07E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81BC:;
    /* $81BC: CE */ maybe_trigger_vblank(6); { uint16_t a=0x2AFC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81BF:;
    /* $81BF: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x9E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81C1:;
    /* $81C1: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x018D), 13); return; }
label_81C3:;
    /* $81C3: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE2 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C5:;
    /* $81C5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_81C6:;
    /* $81C6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x1402; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81C9:;
    /* $81C9: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_81CA:;
    /* $81CA: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xC692 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_81CD:;
    /* $81CD: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_81CE:;
    /* $81CE: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF6; g_cpu.C=(g_cpu.X>=0xF6)?1:0; FLAG_NZ(r&0xFF); }
label_81D0:;
    /* $81D0: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D1:;
    /* $81D1: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D2:;
    /* $81D2: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D3:;
    /* $81D3: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D4:;
    /* $81D4: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D5:;
    /* $81D5: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D6:;
    /* $81D6: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D7:;
    /* $81D7: FA */ maybe_trigger_vblank(2); /* NOP */
label_81D8:;
    /* $81D8: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x241A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81DB:;
    /* $81DB: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_81DC:;
    /* $81DC: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x7A62, -1); return;
label_81DF:; return;
label_81E0:; return;
label_81E2:; return;
label_81E3:; return;
label_81E4:; return;
label_81E6:; return;
label_81E8:; return;
label_81EB:; return;
label_81EE:; return;
label_81EF:; return;
label_81F2:; return;
label_81F4:; return;
label_81F6:; return;
label_81F7:; return;
label_81F8:; return;
label_81F9:; return;
label_81FC:; return;
label_81FF:; return;
label_8200:; return;
label_8202:; return;
label_8204:; return;
label_8206:; return;
label_8208:; return;
label_820A:; return;
label_820C:; return;
label_820E:; return;
label_8210:; return;
label_8212:; return;
label_8214:; return;
label_8216:; return;
label_8218:; return;
label_821A:; return;
label_821C:; return;
label_821E:; return;
label_8220:; return;
label_8222:; return;
label_8224:; return;
label_8225:; return;
label_8226:; return;
label_8227:; return;
label_8228:; return;
label_8229:; return;
label_822A:; return;
label_822B:; return;
label_822C:; return;
label_822D:; return;
label_822E:; return;
label_822F:; return;
label_8231:; return;
label_8233:; return;
label_8235:; return;
label_8237:; return;
label_8239:; return;
label_823B:; return;
label_823D:; return;
label_823F:; return;
label_8240:; return;
label_8241:; return;
label_8242:; return;
label_8243:; return;
label_8244:; return;
label_8245:; return;
label_8246:; return;
label_8247:; return;
label_8249:; return;
label_824B:; return;
label_824D:; return;
label_824F:; return;
label_8251:; return;
label_8253:; return;
label_8255:; return;
label_8257:; return;
label_825A:; return;
label_825D:; return;
label_8260:; return;
label_8263:; return;
label_8266:; return;
label_8269:; return;
label_826C:; return;
label_826F:; return;
label_8272:; return;
label_8275:; return;
label_8278:; return;
label_827B:; return;
label_827E:; return;
label_8281:; return;
label_8284:; return;
label_8287:; return;
label_8289:; return;
label_828B:; return;
label_828D:; return;
label_828F:; return;
label_8291:; return;
label_8293:; return;
label_8295:; return;
label_8297:; return;
label_8299:; return;
label_829A:; return;
label_829B:; return;
label_829C:; return;
label_829D:; return;
label_829E:; return;
label_829F:; return;
label_82A0:; return;
label_82A1:; return;
label_82A2:; return;
label_82A3:; return;
label_82A4:; return;
label_82A5:; return;
label_82A6:; return;
label_82A7:; return;
label_82A9:; return;
label_82AB:; return;
label_82AD:; return;
label_82AF:; return;
label_82B1:; return;
label_82B3:; return;
label_82B5:; return;
label_82B7:; return;
label_82B9:; return;
label_82BB:; return;
label_82BD:; return;
label_82BF:; return;
label_82C1:; return;
label_82C3:; return;
label_82C5:; return;
label_82C7:; return;
label_82C9:; return;
label_82CB:; return;
label_82CD:; return;
label_82CF:; return;
label_82D1:; return;
label_82D3:; return;
label_82D5:; return;
label_82D7:; return;
label_82D9:; return;
label_82DB:; return;
label_82DD:; return;
label_82DF:; return;
label_82E1:; return;
label_82E3:; return;
label_82E4:; return;
label_82E5:; return;
label_82E6:; return;
label_82E7:; return;
label_82E8:; return;
label_82E9:; return;
label_82EA:; return;
label_82EB:; return;
label_82EC:; return;
label_82ED:; return;
label_82EE:; return;
label_82EF:; return;
label_82F0:; return;
label_82F3:; return;
label_82F6:; return;
label_82F9:; return;
label_82FA:; return;
label_82FB:; return;
label_82FC:; return;
label_82FD:; return;
label_82FE:; return;
label_82FF:; return;
label_8300:; return;
label_8301:; return;
label_8302:; return;
label_8303:; return;
label_8304:; return;
label_8305:; return;
label_8306:; return;
label_8307:; return;
label_8308:; return;
label_8309:; return;
label_830A:; return;
label_830B:; return;
label_830C:; return;
label_830E:; return;
label_830F:; return;
label_8311:; return;
label_8312:; return;
label_8313:; return;
label_8315:; return;
label_8317:; return;
label_8318:; return;
label_831A:; return;
label_831C:; return;
label_831E:; return;
label_8320:; return;
label_8321:; return;
label_8324:; return;
label_8326:; return;
label_8327:; return;
label_832A:; return;
label_832C:; return;
label_832D:; return;
label_832E:; return;
label_832F:; return;
label_8330:; return;
label_8331:; return;
label_8334:; return;
label_8337:; return;
label_8339:; return;
label_833B:; return;
label_833D:; return;
label_833E:; return;
label_833F:; return;
label_8340:; return;
label_8343:; return;
label_8346:; return;
label_8349:; return;
label_834C:; return;
label_834F:; return;
label_8351:; return;
label_8353:; return;
label_8355:; return;
label_8356:; return;
label_8358:; return;
label_835A:; return;
label_835B:; return;
label_835C:; return;
label_835E:; return;
label_835F:; return;
label_8362:; return;
label_8363:; return;
label_8364:; return;
label_8365:; return;
label_8368:; return;
label_836A:; return;
label_836B:; return;
label_836C:; return;
label_836D:; return;
label_836E:; return;
label_8370:; return;
label_8372:; return;
label_8373:; return;
label_8375:; return;
label_8377:; return;
label_8378:; return;
label_837A:; return;
label_837C:; return;
label_837E:; return;
label_8381:; return;
label_8383:; return;
label_8384:; return;
label_8387:; return;
label_8388:; return;
label_838A:; return;
label_838B:; return;
label_838D:; return;
label_838F:; return;
label_8391:; return;
label_8394:; return;
label_8395:; return;
label_8398:; return;
label_839B:; return;
label_839E:; return;
label_83A1:; return;
label_83A2:; return;
label_83A5:; return;
label_83A6:; return;
label_83A7:; return;
label_83A9:; return;
label_83AB:; return;
label_83AC:; return;
label_83AE:; return;
label_83AF:; return;
label_83B1:; return;
label_83B3:; return;
label_83B5:; return;
label_83B7:; return;
label_83B8:; return;
label_83B9:; return;
label_83BA:; return;
label_83BB:; return;
label_83BC:; return;
label_83BD:; return;
label_83BE:; return;
label_83BF:; return;
label_83C0:; return;
label_83C1:; return;
label_83C2:; return;
label_83C3:; return;
label_83C4:; return;
label_83C5:; return;
label_83C7:; return;
label_83C9:; return;
label_83CB:; return;
label_83CE:; return;
label_83CF:; return;
label_83D1:; return;
label_83D3:; return;
label_83D6:; return;
label_83D9:; return;
label_83DB:; return;
label_83DC:; return;
label_83DE:; return;
label_83E0:; return;
label_83E2:; return;
label_83E4:; return;
label_83E5:; return;
label_83E6:; return;
label_83E8:; return;
label_83EB:; return;
label_83EC:; return;
label_83EE:; return;
label_83F0:; return;
label_83F1:; return;
label_83F4:; return;
label_83F5:; return;
label_83F7:; return;
label_83FA:; return;
label_83FD:; return;
label_83FF:; return;
label_8401:; return;
label_8403:; return;
label_8405:; return;
label_8407:; return;
label_8409:; return;
label_840A:; return;
label_840B:; return;
label_840D:; return;
label_840E:; return;
label_8410:; return;
label_8412:; return;
label_8415:; return;
label_8417:; return;
label_8418:; return;
label_8419:; return;
label_841B:; return;
label_841C:; return;
label_841D:; return;
label_841F:; return;
label_8420:; return;
label_8422:; return;
label_8423:; return;
label_8424:; return;
label_8427:; return;
label_8428:; return;
label_8429:; return;
label_842B:; return;
label_842C:; return;
label_842D:; return;
label_8430:; return;
label_8433:; return;
label_8434:; return;
label_8436:; return;
label_8437:; return;
label_8439:; return;
label_843B:; return;
label_843D:; return;
label_843F:; return;
label_8441:; return;
label_8443:; return;
label_8445:; return;
label_8447:; return;
label_8449:; return;
label_844A:; return;
label_844B:; return;
label_844C:; return;
label_844D:; return;
label_844E:; return;
label_8450:; return;
label_8451:; return;
label_8454:; return;
label_8456:; return;
label_8458:; return;
label_845A:; return;
label_845C:; return;
label_845D:; return;
label_845F:; return;
label_8460:; return;
label_8461:; return;
label_8462:; return;
label_8463:; return;
label_8464:; return;
label_8467:; return;
label_8469:; return;
label_846A:; return;
label_846B:; return;
label_846C:; return;
label_846D:; return;
label_8470:; return;
label_8473:; return;
label_8474:; return;
label_8477:; return;
label_8479:; return;
label_847B:; return;
label_847D:; return;
label_847F:; return;
label_8481:; return;
label_8483:; return;
label_8484:; return;
label_8485:; return;
label_8486:; return;
label_8488:; return;
label_848A:; return;
label_848B:; return;
label_848D:; return;
label_8490:; return;
label_8492:; return;
label_8494:; return;
label_8495:; return;
label_8497:; return;
label_8498:; return;
label_849A:; return;
label_849B:; return;
label_849D:; return;
label_849F:; return;
label_84A2:; return;
label_84A3:; return;
label_84A5:; return;
label_84A6:; return;
label_84A7:; return;
label_84A9:; return;
label_84AC:; return;
label_84AD:; return;
label_84B0:; return;
label_84B1:; return;
label_84B4:; return;
label_84B5:; return;
label_84B7:; return;
label_84B9:; return;
label_84BB:; return;
label_84BD:; return;
label_84C0:; return;
label_84C1:; return;
label_84C3:; return;
label_84C5:; return;
label_84C7:; return;
label_84C8:; return;
label_84C9:; return;
label_84CA:; return;
label_84CB:; return;
label_84CD:; return;
label_84CE:; return;
label_84D0:; return;
label_84D1:; return;
label_84D4:; return;
label_84D6:; return;
label_84D7:; return;
label_84DA:; return;
label_84DB:; return;
label_84DC:; return;
label_84DF:; return;
label_84E0:; return;
label_84E1:; return;
label_84E4:; return;
label_84E6:; return;
label_84E9:; return;
label_84EB:; return;
label_84EC:; return;
label_84EE:; return;
label_84EF:; return;
label_84F1:; return;
label_84F3:; return;
label_84F6:; return;
label_84F8:; return;
label_84F9:; return;
label_84FB:; return;
label_84FC:; return;
label_84FD:; return;
label_84FE:; return;
label_8500:; return;
label_8501:; return;
label_8502:; return;
label_8503:; return;
label_8504:; return;
label_8505:; return;
label_8506:; return;
label_8507:; return;
label_8509:; return;
label_850A:; return;
label_850B:; return;
label_850D:; return;
label_850E:; return;
label_850F:; return;
label_8510:; return;
label_8511:; return;
label_8514:; return;
label_8517:; return;
label_8518:; return;
label_851B:; return;
label_851C:; return;
label_851E:; return;
label_851F:; return;
label_8520:; return;
label_8522:; return;
label_8524:; return;
label_8526:; return;
label_8528:; return;
label_852A:; return;
label_852B:; return;
label_852C:; return;
label_852E:; return;
label_8530:; return;
label_8532:; return;
label_8534:; return;
label_8536:; return;
label_8539:; return;
label_853C:; return;
label_853D:; return;
label_853F:; return;
label_8540:; return;
label_8541:; return;
label_8543:; return;
label_8546:; return;
label_8547:; return;
label_8549:; return;
label_854B:; return;
label_854C:; return;
label_854F:; return;
label_8550:; return;
label_8551:; return;
label_8553:; return;
label_8554:; return;
label_8555:; return;
label_8556:; return;
label_8557:; return;
label_8558:; return;
label_8559:; return;
label_855A:; return;
label_855C:; return;
label_855E:; return;
label_855F:; return;
label_8560:; return;
label_8562:; return;
label_8565:; return;
label_8566:; return;
label_8567:; return;
label_8569:; return;
label_856A:; return;
label_856C:; return;
label_856D:; return;
label_856E:; return;
label_8571:; return;
label_8572:; return;
label_8574:; return;
label_8576:; return;
label_8579:; return;
label_857A:; return;
label_857B:; return;
label_857C:; return;
label_857D:; return;
label_857F:; return;
label_8580:; return;
label_8581:; return;
label_8582:; return;
label_8585:; return;
label_8586:; return;
label_8588:; return;
label_858A:; return;
label_858B:; return;
label_858C:; return;
label_858F:; return;
label_8591:; return;
label_8592:; return;
label_8595:; return;
label_8596:; return;
label_8599:; return;
label_859A:; return;
label_859D:; return;
label_859E:; return;
label_85A0:; return;
label_85A3:; return;
label_85A4:; return;
label_85A7:; return;
label_85A8:; return;
label_85AB:; return;
label_85AC:; return;
label_85AF:; return;
label_85B2:; return;
label_85B4:; return;
label_85B6:; return;
label_85B8:; return;
label_85BA:; return;
label_85BC:; return;
label_85BD:; return;
label_85BF:; return;
label_85C0:; return;
label_85C1:; return;
label_85C2:; return;
label_85C4:; return;
label_85C5:; return;
label_85C6:; return;
label_85C8:; return;
label_85CA:; return;
label_85CB:; return;
label_85CC:; return;
label_85CE:; return;
label_85D0:; return;
label_85D1:; return;
label_85D2:; return;
label_85D3:; return;
label_85D5:; return;
label_85D6:; return;
label_85D8:; return;
label_85DA:; return;
label_85DC:; return;
label_85DE:; return;
label_85E0:; return;
label_85E2:; return;
label_85E4:; return;
label_85E6:; return;
label_85E7:; return;
label_85E9:; return;
label_85EA:; return;
label_85EB:; return;
label_85EC:; return;
label_85EE:; return;
label_85EF:; return;
label_85F0:; return;
label_85F2:; return;
label_85F4:; return;
label_85F5:; return;
label_85F6:; return;
label_85F7:; return;
label_85F8:; return;
label_85F9:; return;
label_85FB:; return;
label_85FC:; return;
label_85FD:; return;
label_85FE:; return;
label_8601:; return;
label_8602:; return;
label_8605:; return;
label_8606:; return;
label_8607:; return;
label_8608:; return;
label_860A:; return;
label_860B:; return;
label_860C:; return;
label_860F:; return;
label_8610:; return;
label_8611:; return;
label_8612:; return;
label_8615:; return;
label_8616:; return;
label_8619:; return;
label_861A:; return;
label_861B:; return;
label_861C:; return;
label_861E:; return;
label_861F:; return;
label_8620:; return;
label_8621:; return;
label_8623:; return;
label_8624:; return;
label_8625:; return;
label_8626:; return;
label_8629:; return;
label_862A:; return;
label_862D:; return;
label_862E:; return;
label_8630:; return;
label_8632:; return;
label_8633:; return;
label_8636:; return;
label_8639:; return;
label_863A:; return;
label_863D:; return;
label_863E:; return;
label_8640:; return;
label_8643:; return;
label_8644:; return;
label_8647:; return;
label_8648:; return;
label_864B:; return;
label_864E:; return;
label_8651:; return;
label_8653:; return;
label_8655:; return;
label_8657:; return;
label_8659:; return;
label_865B:; return;
label_865D:; return;
label_865F:; return;
label_8661:; return;
label_8662:; return;
label_8663:; return;
label_8664:; return;
label_8666:; return;
label_8667:; return;
label_8668:; return;
label_866A:; return;
label_866C:; return;
label_866D:; return;
label_866E:; return;
label_866F:; return;
label_8670:; return;
label_8672:; return;
label_8674:; return;
label_8677:; return;
label_8678:; return;
label_8679:; return;
label_867B:; return;
label_867C:; return;
label_867F:; return;
label_8680:; return;
label_8682:; return;
label_8684:; return;
label_8686:; return;
label_8688:; return;
label_868A:; return;
label_868D:; return;
label_868F:; return;
label_8691:; return;
label_8692:; return;
label_8693:; return;
label_8694:; return;
label_8697:; return;
label_8698:; return;
label_869A:; return;
label_869C:; return;
label_869D:; return;
label_869E:; return;
label_86A0:; return;
label_86A1:; return;
label_86A2:; return;
label_86A5:; return;
label_86A7:; return;
label_86A8:; return;
label_86AA:; return;
label_86AC:; return;
label_86AE:; return;
label_86B0:; return;
label_86B2:; return;
label_86B4:; return;
label_86B6:; return;
label_86B8:; return;
label_86BA:; return;
label_86BC:; return;
label_86BE:; return;
label_86C0:; return;
label_86C2:; return;
label_86C4:; return;
label_86C6:; return;
label_86C8:; return;
label_86CA:; return;
label_86CC:; return;
label_86CE:; return;
label_86CF:; return;
label_86D0:; return;
label_86D2:; return;
label_86D4:; return;
label_86D6:; return;
label_86D7:; return;
label_86D8:; return;
label_86DA:; return;
label_86DC:; return;
label_86DE:; return;
label_86DF:; return;
label_86E0:; return;
label_86E2:; return;
label_86E4:; return;
label_86E6:; return;
label_86E7:; return;
label_86EA:; return;
label_86EC:; return;
label_86EF:; return;
label_86F0:; return;
label_86F2:; return;
label_86F4:; return;
label_86F6:; return;
label_86F8:; return;
label_86FA:; return;
label_86FC:; return;
label_86FE:; return;
label_86FF:; return;
label_8702:; return;
label_8705:; return;
label_8706:; return;
label_8709:; return;
label_870A:; return;
label_870D:; return;
label_870E:; return;
label_8711:; return;
label_8712:; return;
label_8713:; return;
label_8716:; return;
label_8719:; return;
label_871A:; return;
label_871D:; return;
label_871E:; return;
label_8721:; return;
label_8722:; return;
label_8725:; return;
label_8726:; return;
label_8727:; return;
label_872A:; return;
label_872D:; return;
label_872E:; return;
label_8730:; return;
label_8731:; return;
label_8732:; return;
label_8734:; return;
label_8737:; return;
label_8738:; return;
label_873A:; return;
label_873C:; return;
label_873F:; return;
label_8740:; return;
label_8743:; return;
label_8744:; return;
label_8746:; return;
label_8747:; return;
label_8748:; return;
label_8749:; return;
label_874B:; return;
label_874D:; return;
label_874F:; return;
label_8750:; return;
label_8751:; return;
label_8752:; return;
label_8755:; return;
label_8756:; return;
label_8758:; return;
label_875A:; return;
label_875B:; return;
label_875C:; return;
label_875E:; return;
label_875F:; return;
label_8760:; return;
label_8762:; return;
label_8763:; return;
label_8766:; return;
label_8768:; return;
label_876A:; return;
label_876C:; return;
label_876D:; return;
label_876E:; return;
label_876F:; return;
label_8770:; return;
label_8773:; return;
label_8774:; return;
label_8776:; return;
label_8777:; return;
label_8778:; return;
label_877A:; return;
label_877C:; return;
label_877E:; return;
label_8780:; return;
label_8782:; return;
label_8783:; return;
label_8784:; return;
label_8786:; return;
label_8787:; return;
label_8789:; return;
label_878B:; return;
label_878D:; return;
label_878F:; return;
label_8791:; return;
label_8793:; return;
label_8795:; return;
label_8796:; return;
label_8797:; return;
label_8798:; return;
label_879A:; return;
label_879C:; return;
label_879E:; return;
label_87A0:; return;
label_87A2:; return;
label_87A3:; return;
label_87A4:; return;
label_87A7:; return;
label_87A8:; return;
label_87AB:; return;
label_87AC:; return;
label_87AF:; return;
label_87B0:; return;
label_87B3:; return;
label_87B4:; return;
label_87B6:; return;
label_87B7:; return;
label_87B8:; return;
label_87BA:; return;
label_87BC:; return;
label_87BE:; return;
label_87C0:; return;
label_87C2:; return;
label_87C3:; return;
label_87C4:; return;
label_87C6:; return;
label_87C7:; return;
label_87C8:; return;
label_87CA:; return;
label_87CD:; return;
label_87CE:; return;
label_87D1:; return;
label_87D2:; return;
label_87D4:; return;
label_87D6:; return;
label_87D7:; return;
label_87D8:; return;
label_87DA:; return;
label_87DC:; return;
label_87DE:; return;
label_87E0:; return;
label_87E2:; return;
label_87E4:; return;
label_87E5:; return;
label_87E6:; return;
label_87E9:; return;
label_87EB:; return;
label_87ED:; return;
label_87EE:; return;
label_87F0:; return;
label_87F1:; return;
label_87F2:; return;
label_87F5:; return;
label_87F6:; return;
label_87F9:; return;
label_87FA:; return;
label_87FD:; return;
label_87FE:; return;
label_8801:; return;
label_8802:; return;
label_8805:; return;
label_8806:; return;
label_8808:; return;
label_8809:; return;
label_880A:; return;
label_880C:; return;
label_880E:; return;
label_8810:; return;
label_8812:; return;
label_8814:; return;
label_8816:; return;
label_8817:; return;
label_8818:; return;
label_881A:; return;
label_881C:; return;
label_881F:; return;
label_8820:; return;
label_8823:; return;
label_8824:; return;
label_8826:; return;
label_8827:; return;
label_8828:; return;
label_882A:; return;
label_882D:; return;
label_882E:; return;
label_8830:; return;
label_8832:; return;
label_8834:; return;
label_8836:; return;
label_8838:; return;
label_8839:; return;
label_883A:; return;
label_883D:; return;
label_883E:; return;
label_8841:; return;
label_8842:; return;
label_8845:; return;
label_8846:; return;
label_8849:; return;
label_884A:; return;
label_884B:; return;
label_884D:; return;
label_884F:; return;
label_8851:; return;
label_8853:; return;
label_8855:; return;
label_8857:; return;
label_8859:; return;
label_885B:; return;
label_885D:; return;
label_885F:; return;
label_8861:; return;
label_8863:; return;
label_8865:; return;
label_8868:; return;
label_886A:; return;
label_886C:; return;
label_886E:; return;
label_8870:; return;
label_8872:; return;
label_8875:; return;
label_8877:; return;
label_8879:; return;
label_887B:; return;
label_887C:; return;
label_887E:; return;
label_887F:; return;
label_8881:; return;
label_8883:; return;
label_8885:; return;
label_8887:; return;
label_8889:; return;
label_888B:; return;
label_888C:; return;
label_888E:; return;
label_8891:; return;
label_8892:; return;
label_8894:; return;
label_8896:; return;
label_8898:; return;
label_889A:; return;
label_889C:; return;
label_889E:; return;
label_889F:; return;
label_88A0:; return;
label_88A2:; return;
label_88A4:; return;
label_88A6:; return;
label_88A8:; return;
label_88AB:; return;
label_88AC:; return;
label_88AE:; return;
label_88B0:; return;
label_88B2:; return;
label_88B4:; return;
label_88B6:; return;
label_88B8:; return;
label_88BB:; return;
label_88BC:; return;
label_88BE:; return;
label_88C0:; return;
label_88C1:; return;
label_88C2:; return;
label_88C5:; return;
label_88C7:; return;
label_88C8:; return;
label_88CA:; return;
label_88CD:; return;
label_88CE:; return;
label_88D0:; return;
label_88D2:; return;
label_88D4:; return;
label_88D6:; return;
label_88D8:; return;
label_88DA:; return;
label_88DC:; return;
label_88DE:; return;
label_88DF:; return;
label_88E0:; return;
label_88E2:; return;
label_88E3:; return;
label_88E4:; return;
label_88E5:; return;
label_88E6:; return;
label_88E7:; return;
label_88E9:; return;
label_88EA:; return;
label_88EC:; return;
label_88EF:; return;
label_88F0:; return;
label_88F2:; return;
label_88F4:; return;
label_88F6:; return;
label_88F9:; return;
label_88FA:; return;
label_88FB:; return;
label_88FD:; return;
label_88FE:; return;
label_8901:; return;
label_8902:; return;
label_8904:; return;
label_8906:; return;
label_8908:; return;
label_890A:; return;
label_890D:; return;
label_890E:; return;
label_8910:; return;
label_8912:; return;
label_8914:; return;
label_8917:; return;
label_8918:; return;
label_891A:; return;
label_891C:; return;
label_891E:; return;
label_8920:; return;
label_8923:; return;
label_8924:; return;
label_8927:; return;
label_8928:; return;
label_892A:; return;
label_892C:; return;
label_892E:; return;
label_8930:; return;
label_8933:; return;
label_8934:; return;
label_8937:; return;
label_8938:; return;
label_893A:; return;
label_893C:; return;
label_893E:; return;
label_8940:; return;
label_8942:; return;
label_8944:; return;
label_8946:; return;
label_8948:; return;
label_894B:; return;
label_894D:; return;
label_8950:; return;
label_8952:; return;
label_8954:; return;
label_8956:; return;
label_8959:; return;
label_895B:; return;
label_895E:; return;
label_8960:; return;
label_8962:; return;
label_8963:; return;
label_8965:; return;
label_8967:; return;
label_8969:; return;
label_896B:; return;
label_896D:; return;
label_896F:; return;
label_8971:; return;
label_8973:; return;
label_8975:; return;
label_8977:; return;
label_8979:; return;
label_897B:; return;
label_897D:; return;
label_897E:; return;
label_8980:; return;
label_8982:; return;
label_8985:; return;
label_8987:; return;
label_8989:; return;
label_898B:; return;
label_898D:; return;
label_898F:; return;
label_8991:; return;
label_8992:; return;
label_8994:; return;
label_8996:; return;
label_8998:; return;
label_899A:; return;
label_899C:; return;
label_899E:; return;
label_89A0:; return;
label_89A2:; return;
label_89A3:; return;
label_89A5:; return;
label_89A7:; return;
label_89A9:; return;
label_89AB:; return;
label_89AD:; return;
label_89AF:; return;
label_89B1:; return;
label_89B3:; return;
label_89B5:; return;
label_89B7:; return;
label_89B9:; return;
label_89BC:; return;
label_89BD:; return;
label_89BE:; return;
label_89BF:; return;
label_89C0:; return;
label_89C1:; return;
label_89C2:; return;
label_89C4:; return;
label_89C6:; return;
label_89C8:; return;
label_89CB:; return;
label_89CC:; return;
label_89CD:; return;
label_89CE:; return;
label_89CF:; return;
label_89D0:; return;
label_89D2:; return;
label_89D4:; return;
label_89D6:; return;
label_89D7:; return;
label_89D8:; return;
label_89DA:; return;
label_89DC:; return;
label_89DE:; return;
label_89E0:; return;
label_89E2:; return;
label_89E4:; return;
label_89E5:; return;
label_89E6:; return;
label_89E8:; return;
label_89EA:; return;
label_89EC:; return;
label_89EE:; return;
label_89F0:; return;
label_89F2:; return;
label_89F5:; return;
label_89F6:; return;
label_89F9:; return;
label_89FA:; return;
label_89FC:; return;
label_89FF:; return;
label_8A00:; return;
label_8A03:; return;
label_8A04:; return;
label_8A06:; return;
label_8A07:; return;
label_8A08:; return;
label_8A0A:; return;
label_8A0C:; return;
label_8A0E:; return;
label_8A10:; return;
label_8A12:; return;
label_8A15:; return;
label_8A16:; return;
label_8A19:; return;
label_8A1A:; return;
label_8A1C:; return;
label_8A1D:; return;
label_8A1E:; return;
label_8A20:; return;
label_8A22:; return;
label_8A24:; return;
label_8A26:; return;
label_8A28:; return;
label_8A2B:; return;
label_8A2C:; return;
label_8A2F:; return;
label_8A30:; return;
label_8A32:; return;
label_8A33:; return;
label_8A34:; return;
label_8A36:; return;
label_8A38:; return;
label_8A3A:; return;
label_8A3C:; return;
label_8A3E:; return;
label_8A41:; return;
label_8A42:; return;
label_8A45:; return;
label_8A46:; return;
label_8A48:; return;
label_8A4A:; return;
label_8A4C:; return;
label_8A4E:; return;
label_8A50:; return;
label_8A52:; return;
label_8A54:; return;
label_8A56:; return;
label_8A57:; return;
label_8A59:; return;
label_8A5B:; return;
label_8A5D:; return;
label_8A5F:; return;
label_8A61:; return;
label_8A63:; return;
label_8A65:; return;
label_8A67:; return;
label_8A69:; return;
label_8A6B:; return;
label_8A6E:; return;
label_8A70:; return;
label_8A72:; return;
label_8A74:; return;
label_8A76:; return;
label_8A78:; return;
label_8A7A:; return;
label_8A7C:; return;
label_8A7E:; return;
label_8A80:; return;
label_8A81:; return;
label_8A83:; return;
label_8A85:; return;
label_8A87:; return;
label_8A89:; return;
label_8A8B:; return;
label_8A8D:; return;
label_8A8F:; return;
label_8A91:; return;
label_8A92:; return;
label_8A94:; return;
label_8A95:; return;
label_8A97:; return;
label_8A99:; return;
label_8A9B:; return;
label_8A9D:; return;
label_8A9F:; return;
label_8AA1:; return;
label_8AA3:; return;
label_8AA5:; return;
label_8AA7:; return;
label_8AA9:; return;
label_8AAB:; return;
label_8AAD:; return;
label_8AAF:; return;
label_8AB1:; return;
label_8AB3:; return;
label_8AB5:; return;
label_8AB7:; return;
label_8AB9:; return;
label_8ABB:; return;
label_8ABD:; return;
label_8ABF:; return;
label_8AC1:; return;
label_8AC3:; return;
label_8AC5:; return;
label_8AC7:; return;
label_8AC9:; return;
label_8ACB:; return;
label_8ACD:; return;
label_8ACF:; return;
label_8AD1:; return;
label_8AD3:; return;
label_8AD5:; return;
label_8AD7:; return;
label_8AD9:; return;
label_8ADA:; return;
label_8ADC:; return;
label_8ADD:; return;
label_8ADF:; return;
label_8AE1:; return;
label_8AE3:; return;
label_8AE5:; return;
label_8AE7:; return;
label_8AE9:; return;
label_8AEB:; return;
label_8AED:; return;
label_8AEF:; return;
label_8AF1:; return;
label_8AF3:; return;
label_8AF5:; return;
label_8AF7:; return;
label_8AF9:; return;
label_8AFB:; return;
label_8AFD:; return;
label_8AFF:; return;
label_8B01:; return;
label_8B02:; return;
label_8B05:; return;
label_8B07:; return;
label_8B09:; return;
label_8B0B:; return;
label_8B0D:; return;
label_8B0F:; return;
label_8B11:; return;
label_8B13:; return;
label_8B15:; return;
label_8B17:; return;
label_8B19:; return;
label_8B1B:; return;
label_8B1D:; return;
label_8B1F:; return;
label_8B21:; return;
label_8B23:; return;
label_8B24:; return;
label_8B26:; return;
label_8B29:; return;
label_8B2B:; return;
label_8B2D:; return;
label_8B2F:; return;
label_8B31:; return;
label_8B33:; return;
label_8B35:; return;
label_8B37:; return;
label_8B39:; return;
label_8B3B:; return;
label_8B3D:; return;
label_8B3F:; return;
label_8B40:; return;
label_8B43:; return;
label_8B45:; return;
label_8B47:; return;
label_8B49:; return;
label_8B4B:; return;
label_8B4D:; return;
label_8B4F:; return;
label_8B51:; return;
label_8B53:; return;
label_8B56:; return;
label_8B58:; return;
label_8B5A:; return;
label_8B5C:; return;
label_8B5E:; return;
label_8B60:; return;
label_8B63:; return;
label_8B64:; return;
label_8B67:; return;
label_8B68:; return;
label_8B6A:; return;
label_8B6B:; return;
label_8B6C:; return;
label_8B6E:; return;
label_8B70:; return;
label_8B72:; return;
label_8B74:; return;
label_8B76:; return;
label_8B79:; return;
label_8B7A:; return;
label_8B7D:; return;
label_8B7E:; return;
label_8B80:; return;
label_8B81:; return;
label_8B82:; return;
label_8B84:; return;
label_8B86:; return;
label_8B88:; return;
label_8B8A:; return;
label_8B8C:; return;
label_8B8F:; return;
label_8B90:; return;
label_8B93:; return;
label_8B94:; return;
label_8B96:; return;
label_8B98:; return;
label_8B9A:; return;
label_8B9C:; return;
label_8B9E:; return;
label_8BA0:; return;
label_8BA2:; return;
label_8BA4:; return;
label_8BA6:; return;
label_8BA8:; return;
label_8BA9:; return;
label_8BAA:; return;
label_8BAC:; return;
label_8BAD:; return;
label_8BAE:; return;
label_8BB0:; return;
label_8BB2:; return;
label_8BB5:; return;
label_8BB6:; return;
label_8BB9:; return;
label_8BBA:; return;
label_8BBB:; return;
label_8BBC:; return;
label_8BBE:; return;
label_8BC0:; return;
label_8BC3:; return;
label_8BC4:; return;
label_8BC5:; return;
label_8BC6:; return;
label_8BC8:; return;
label_8BCB:; return;
label_8BCC:; return;
label_8BCE:; return;
label_8BD0:; return;
label_8BD2:; return;
label_8BD4:; return;
label_8BD6:; return;
label_8BD8:; return;
label_8BDA:; return;
label_8BDB:; return;
label_8BDD:; return;
label_8BDF:; return;
label_8BE1:; return;
label_8BE3:; return;
label_8BE5:; return;
label_8BE8:; return;
label_8BEA:; return;
label_8BEC:; return;
label_8BEE:; return;
label_8BF1:; return;
label_8BF3:; return;
label_8BF6:; return;
label_8BF7:; return;
label_8BF9:; return;
label_8BFB:; return;
label_8BFD:; return;
label_8C00:; return;
label_8C02:; return;
label_8C03:; return;
label_8C05:; return;
label_8C07:; return;
label_8C0A:; return;
label_8C0B:; return;
label_8C0D:; return;
label_8C0F:; return;
label_8C11:; return;
label_8C14:; return;
label_8C16:; return;
label_8C18:; return;
label_8C1A:; return;
label_8C1C:; return;
label_8C1E:; return;
label_8C1F:; return;
label_8C21:; return;
label_8C23:; return;
label_8C25:; return;
label_8C28:; return;
label_8C2A:; return;
label_8C2C:; return;
label_8C2E:; return;
label_8C30:; return;
label_8C31:; return;
label_8C33:; return;
label_8C35:; return;
label_8C37:; return;
label_8C39:; return;
label_8C3B:; return;
label_8C3D:; return;
label_8C3F:; return;
label_8C41:; return;
label_8C43:; return;
label_8C45:; return;
label_8C47:; return;
label_8C49:; return;
label_8C4B:; return;
label_8C4D:; return;
label_8C4F:; return;
label_8C51:; return;
label_8C53:; return;
label_8C55:; return;
label_8C57:; return;
label_8C59:; return;
label_8C5B:; return;
label_8C5D:; return;
label_8C5F:; return;
label_8C61:; return;
label_8C63:; return;
label_8C65:; return;
label_8C67:; return;
label_8C69:; return;
label_8C6B:; return;
label_8C6D:; return;
label_8C6F:; return;
label_8C71:; return;
label_8C73:; return;
label_8C75:; return;
label_8C77:; return;
label_8C79:; return;
label_8C7B:; return;
label_8C7D:; return;
label_8C7F:; return;
label_8C81:; return;
label_8C83:; return;
label_8C85:; return;
label_8C87:; return;
label_8C89:; return;
label_8C8B:; return;
label_8C8D:; return;
label_8C8F:; return;
label_8C91:; return;
label_8C94:; return;
label_8C96:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA3:; return;
label_8CA5:; return;
label_8CA7:; return;
label_8CA8:; return;
label_8CAA:; return;
label_8CAD:; return;
label_8CAF:; return;
label_8CB0:; return;
label_8CB3:; return;
label_8CB4:; return;
label_8CB6:; return;
label_8CB7:; return;
label_8CB9:; return;
label_8CBA:; return;
label_8CBC:; return;
label_8CBE:; return;
label_8CC0:; return;
label_8CC2:; return;
label_8CC3:; return;
label_8CC4:; return;
label_8CC7:; return;
label_8CC8:; return;
label_8CCB:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD4:; return;
label_8CD6:; return;
label_8CD8:; return;
label_8CDA:; return;
label_8CDC:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE2:; return;
label_8CE4:; return;
label_8CE7:; return;
label_8CE9:; return;
label_8CEA:; return;
label_8CED:; return;
label_8CEE:; return;
label_8CEF:; return;
label_8CF1:; return;
label_8CF3:; return;
label_8CF4:; return;
label_8CF6:; return;
label_8CF8:; return;
label_8CFB:; return;
label_8CFD:; return;
label_8CFE:; return;
label_8D01:; return;
label_8D02:; return;
label_8D05:; return;
label_8D07:; return;
label_8D08:; return;
label_8D0A:; return;
label_8D0B:; return;
label_8D0C:; return;
label_8D0E:; return;
label_8D10:; return;
label_8D12:; return;
label_8D14:; return;
label_8D15:; return;
label_8D17:; return;
label_8D19:; return;
label_8D1B:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D20:; return;
label_8D23:; return;
label_8D24:; return;
label_8D26:; return;
label_8D29:; return;
label_8D2A:; return;
label_8D2D:; return;
label_8D2E:; return;
label_8D31:; return;
label_8D32:; return;
label_8D34:; return;
label_8D36:; return;
label_8D38:; return;
label_8D39:; return;
label_8D3A:; return;
label_8D3B:; return;
label_8D3C:; return;
label_8D3E:; return;
label_8D41:; return;
label_8D42:; return;
label_8D45:; return;
label_8D46:; return;
label_8D47:; return;
label_8D48:; return;
label_8D4B:; return;
label_8D4C:; return;
label_8D4F:; return;
label_8D50:; return;
label_8D53:; return;
label_8D54:; return;
label_8D55:; return;
label_8D57:; return;
label_8D58:; return;
label_8D5B:; return;
label_8D5C:; return;
label_8D5F:; return;
label_8D61:; return;
label_8D63:; return;
label_8D65:; return;
label_8D67:; return;
label_8D69:; return;
label_8D6B:; return;
label_8D6D:; return;
label_8D6F:; return;
label_8D71:; return;
label_8D73:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7B:; return;
label_8D7D:; return;
label_8D7F:; return;
label_8D80:; return;
label_8D83:; return;
label_8D85:; return;
label_8D87:; return;
label_8D89:; return;
label_8D8B:; return;
label_8D8D:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D97:; return;
label_8D99:; return;
label_8D9C:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA2:; return;
label_8DA4:; return;
label_8DA6:; return;
label_8DA8:; return;
label_8DAA:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB7:; return;
label_8DBA:; return;
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
label_8DD8:; return;
label_8DDA:; return;
label_8DDC:; return;
label_8DDE:; return;
label_8DE0:; return;
label_8DE2:; return;
label_8DE4:; return;
label_8DE6:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF1:; return;
label_8DF3:; return;
label_8DF6:; return;
label_8DF8:; return;
label_8DFA:; return;
label_8DFC:; return;
label_8DFE:; return;
label_8E00:; return;
label_8E01:; return;
label_8E03:; return;
label_8E05:; return;
label_8E07:; return;
label_8E09:; return;
label_8E0B:; return;
label_8E0D:; return;
label_8E0F:; return;
label_8E11:; return;
label_8E14:; return;
label_8E16:; return;
label_8E18:; return;
label_8E1A:; return;
label_8E1C:; return;
label_8E1F:; return;
label_8E21:; return;
label_8E23:; return;
label_8E25:; return;
label_8E27:; return;
label_8E29:; return;
label_8E2B:; return;
label_8E2D:; return;
label_8E2F:; return;
label_8E31:; return;
label_8E33:; return;
label_8E35:; return;
label_8E36:; return;
label_8E37:; return;
label_8E39:; return;
label_8E3B:; return;
label_8E3D:; return;
label_8E3F:; return;
label_8E41:; return;
label_8E43:; return;
label_8E45:; return;
label_8E47:; return;
label_8E49:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4F:; return;
label_8E51:; return;
label_8E52:; return;
label_8E53:; return;
label_8E55:; return;
label_8E57:; return;
label_8E59:; return;
label_8E5B:; return;
label_8E5C:; return;
label_8E5E:; return;
label_8E60:; return;
label_8E62:; return;
label_8E64:; return;
label_8E66:; return;
label_8E68:; return;
label_8E6A:; return;
label_8E6C:; return;
label_8E6D:; return;
label_8E6E:; return;
label_8E70:; return;
label_8E71:; return;
label_8E72:; return;
label_8E74:; return;
label_8E77:; return;
label_8E78:; return;
label_8E7B:; return;
label_8E7C:; return;
label_8E7E:; return;
label_8E80:; return;
label_8E81:; return;
label_8E82:; return;
label_8E84:; return;
label_8E86:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E90:; return;
label_8E92:; return;
label_8E94:; return;
label_8E96:; return;
label_8E97:; return;
label_8E98:; return;
label_8E9A:; return;
label_8E9B:; return;
label_8E9C:; return;
label_8E9E:; return;
label_8EA0:; return;
label_8EA2:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA7:; return;
label_8EA8:; return;
label_8EAB:; return;
label_8EAC:; return;
label_8EAF:; return;
label_8EB0:; return;
label_8EB3:; return;
label_8EB4:; return;
label_8EB7:; return;
label_8EB8:; return;
label_8EBA:; return;
label_8EBC:; return;
label_8EBE:; return;
label_8EC0:; return;
label_8EC2:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8EC9:; return;
label_8ECA:; return;
label_8ECC:; return;
label_8ECD:; return;
label_8ECE:; return;
label_8ED0:; return;
label_8ED1:; return;
label_8ED4:; return;
label_8ED5:; return;
label_8ED8:; return;
label_8ED9:; return;
label_8EDA:; return;
label_8EDD:; return;
label_8EDF:; return;
label_8EE1:; return;
label_8EE3:; return;
label_8EE5:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEB:; return;
label_8EED:; return;
label_8EF0:; return;
label_8EF1:; return;
label_8EF4:; return;
label_8EF6:; return;
label_8EF8:; return;
label_8EFA:; return;
label_8EFC:; return;
label_8EFE:; return;
label_8F00:; return;
label_8F02:; return;
label_8F04:; return;
label_8F06:; return;
label_8F07:; return;
label_8F09:; return;
label_8F0A:; return;
label_8F0B:; return;
label_8F0C:; return;
label_8F0E:; return;
label_8F11:; return;
label_8F12:; return;
label_8F14:; return;
label_8F17:; return;
label_8F18:; return;
label_8F1A:; return;
label_8F1D:; return;
label_8F1F:; return;
label_8F21:; return;
label_8F23:; return;
label_8F25:; return;
label_8F26:; return;
label_8F28:; return;
}

void func_A004_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A004_b13");
#endif
label_A004:;
    /* $A004: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A005:;
    /* $A005: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A006:; /* main_doc_quick_j */
    /* $A006: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3B2F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A009:; /* main_shadow_man_j */
    /* $A009: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4B47 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A00C:; /* main_snake_man_j */
    /* $A00C: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x5B55; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A00F:; /* main_wily_machine_B */
    /* $A00F: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x6E62 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A012:; /* main_gemini_man_j */
    /* $A012: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x77) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A014:;
    /* $A014: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x887E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A017:;
    /* $A017: 8E */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.X);
label_A01A:;
    /* $A01A: 9D */ maybe_trigger_vblank(5); nes_write((0xA3A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A01D:;
    /* $A01D: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xAB); FLAG_NZ(g_cpu.A);
label_A01F:;
    /* $A01F: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB5B2); FLAG_NZ(g_cpu.A);
label_A022:;
    /* $A022: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A023:;
    /* $A023: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A026:;
    /* $A026: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD4D0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A029:;
    /* $A029: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDFDC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A02C:;
    /* $A02C: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A02E:;
    /* $A02E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: EB */ maybe_trigger_vblank(2); { uint8_t m=0xEE; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A031:;
    /* $A031: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A033:;
    /* $A033: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A035:;
    /* $A035: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0047), 13); return; }
label_A037:;
    /* $A037: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0049), 13); return; }
label_A039:; /* needle_man_init */
    /* $A039: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x22 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A03B:;
    /* $A03B: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A03C:;
    /* $A03C: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3330); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A03F:; /* main_holograph */
    /* $A03F: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x39 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A041:;
    /* $A041: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x453F + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A044:;
    /* $A044: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4F; FLAG_NZ(g_cpu.A);
label_A046:;
    /* $A046: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A048:;
    /* $A048: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8481 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A04B:;
    /* $A04B: 87 */ maybe_trigger_vblank(3); nes_write(0x8D, g_cpu.A & g_cpu.X); /* SAX */
label_A04D:; /* needle_man_wait_B */
    /* $A04D: 8D */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.A);
label_A050:;
    /* $A050: 99 */ maybe_trigger_vblank(5); nes_write((0xAB9D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A053:;
    /* $A053: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xBCAE); FLAG_NZ(g_cpu.X);
label_A056:;
    /* $A056: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC7C3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A059:;
    /* $A059: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xCE)?1:0; g_cpu.X=(t-0xCE)&0xFF; FLAG_NZ(g_cpu.X); }
label_A05B:;
    /* $A05B: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF2 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A05D:;
    /* $A05D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0073), 13); return; }
label_A05F:;
    /* $A05F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x1B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A061:;
    /* $A061: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x33 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A063:;
    /* $A063: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A066:;
    /* $A066: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A069:;
    /* $A069: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06C:;
    /* $A06C: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A06F:;
    /* $A06F: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A072:;
    /* $A072: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A075:;
    /* $A075: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3939 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A078:;
    /* $A078: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3D39 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07B:;
    /* $A07B: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A07D:;
    /* $A07D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4D; FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A004;
    }
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
    /* $A0B3: 84 */ maybe_trigger_vblank(3); nes_write(0x84, g_cpu.Y);
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
    /* $A0DD: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0DF:;
    /* $A0DF: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E1:;
    /* $A0E1: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E3:;
    /* $A0E3: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_A0E5:;
    /* $A0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
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
    /* $A0FF: 85 */ maybe_trigger_vblank(3); nes_write(0x54, g_cpu.A);
label_A101:;
    /* $A101: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x58 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A103:;
    /* $A103: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x7066 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A106:;
    /* $A106: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x9488 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A109:;
    /* $A109: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_A10A:;
    /* $A10A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A10B:;
    /* $A10B: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A10D:;
    /* $A10D: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xEA + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A10F:;
    /* $A10F: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x2E16 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A112:;
    /* $A112: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A113:;
    /* $A113: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A115:;
    /* $A115: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAE); FLAG_NZ(g_cpu.Y);
label_A117:;
    /* $A117: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A118:;
    /* $A118: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A11A:;
    /* $A11A: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A11C:;
    /* $A11C: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A11E:;
    /* $A11E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0146), 13); return; }
label_A120:;
    /* $A120: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x6A52 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A123:;
    /* $A123: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A125:;
    /* $A125: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xCE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A127:;
    /* $A127: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A129:;
    /* $A129: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x014F), 13); return; }
label_A12B:;
    /* $A12B: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A12C:;
    /* $A12C: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_A12D:;
    /* $A12D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A12E:;
    /* $A12E: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0xAA94 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A131:;
    /* $A131: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xD6; g_cpu.C=(g_cpu.Y>=0xD6)?1:0; FLAG_NZ(r&0xFF); }
label_A133:;
    /* $A133: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1A02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A136:;
    /* $A136: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A182;
label_A138:;
    /* $A138: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x7E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A13A:;
    /* $A13A: 96 */ maybe_trigger_vblank(4); nes_write((0xAA + g_cpu.Y) & 0xFF, g_cpu.X);
label_A13C:;
    /* $A13C: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A13E:;
    /* $A13E: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A140:;
    /* $A140: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A11C;
    }
label_A142:;
    /* $A142: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xECE2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A145:;
    /* $A145: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x04 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A147:;
    /* $A147: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A148:;
    /* $A148: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x382A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A14B:;
    /* $A14B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x4C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A14D:;
    /* $A14D: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A14E:;
    /* $A14E: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x72; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A150:; /* needle_man_headbutt */
    /* $A150: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A152:;
    /* $A152: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A153:;
    /* $A153: 96 */ maybe_trigger_vblank(4); nes_write((0xB0 + g_cpu.Y) & 0xFF, g_cpu.X);
label_A155:;
    /* $A155: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A156:;
    /* $A156: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xDA); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A158:;
    /* $A158: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xEE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A15A:;
    /* $A15A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A15B:;
    /* $A15B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A15C:;
    /* $A15C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x3420); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A15F:;
    /* $A15F: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4C48 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A162:;
    /* $A162: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x01B8), 13); return; }
label_A164:;
    /* $A164: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A165:;
    /* $A165: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0ED;
    }
label_A167:;
    /* $A167: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A16A:;
    /* $A16A: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xBAB4); FLAG_NZ(g_cpu.X);
label_A16D:;
    /* $A16D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xCA; g_cpu.C=(g_cpu.Y>=0xCA)?1:0; FLAG_NZ(r&0xFF); }
label_A16F:;
    /* $A16F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xE8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A171:;
    /* $A171: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02FE); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A174:;
    /* $A174: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2622); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A177:;
    /* $A177: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x48 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A179:;
    /* $A179: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A17A:;
    /* $A17A: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x7C6E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A17D:;
    /* $A17D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A17E:;
    /* $A17E: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_A17F:;
    /* $A17F: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A182:;
    /* $A182: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A184:;
    /* $A184: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A186:;
    /* $A186: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A187:;
    /* $A187: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A188:; /* needle_man_setup_throw */
    /* $A188: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x7460, -1); return;
label_A18B:; return;
label_A18C:; return;
label_A18F:; return;
label_A192:; return;
label_A195:; return;
label_A197:; return;
label_A199:; return;
label_A19A:; return;
label_A19B:; return;
label_A19C:; return;
label_A19E:; return;
label_A19F:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1AF:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B5:; return;
label_A1B7:; return;
label_A1BA:; return;
label_A1BD:; return;
label_A1BF:; return;
label_A1C1:; return;
label_A1C3:; return;
label_A1C5:; return;
label_A1C8:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CB:; return;
label_A1CC:; return;
label_A1CD:; return;
label_A1CE:; return;
label_A1CF:; return;
label_A1D0:; return;
label_A1D2:; return;
label_A1D3:; return;
label_A1D4:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DB:; return;
label_A1DE:; return;
label_A1DF:; return;
label_A1E1:; return;
label_A1E3:; return;
label_A1E4:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E7:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F3:; return;
label_A1F4:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F7:; return;
label_A1F8:; return;
label_A1F9:; return;
label_A1FA:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FD:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20E:; return;
label_A210:; return;
label_A212:; return;
label_A214:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A220:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22B:; return;
label_A22C:; return;
label_A22D:; return;
label_A22E:; return;
label_A22F:; return;
label_A230:; return;
label_A231:; return;
label_A232:; return;
label_A233:; return;
label_A234:; return;
label_A236:; return;
label_A238:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A247:; return;
label_A248:; return;
label_A249:; return;
label_A24A:; return;
label_A24B:; return;
label_A24C:; return;
label_A24D:; return;
label_A24E:; return;
label_A24F:; return;
label_A250:; return;
label_A251:; return;
label_A252:; return;
label_A253:; return;
label_A254:; return;
label_A255:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A259:; return;
label_A25A:; return;
label_A25B:; return;
label_A25D:; return;
label_A25F:; return;
label_A261:; return;
label_A263:; return;
label_A265:; return;
label_A267:; return;
label_A269:; return;
label_A26B:; return;
label_A26D:; return;
label_A26F:; return;
label_A271:; return;
label_A273:; return;
label_A276:; return;
label_A279:; return;
label_A27C:; return;
label_A27F:; return;
label_A282:; return;
label_A285:; return;
label_A288:; return;
label_A28B:; return;
label_A28E:; return;
label_A291:; return;
label_A294:; return;
label_A297:; return;
label_A29A:; return;
label_A29D:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A6:; return;
label_A2A9:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B4:; return;
label_A2B6:; return;
label_A2B8:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2C9:; return;
label_A2CA:; return;
label_A2CB:; return;
label_A2CC:; return;
label_A2CD:; return;
label_A2CE:; return;
label_A2CF:; return;
label_A2D0:; return;
label_A2D1:; return;
label_A2D2:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D6:; return;
label_A2D7:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DC:; return;
label_A2DE:; return;
label_A2E0:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E6:; return;
label_A2E8:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F4:; return;
label_A2F6:; return;
label_A2F8:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A302:; return;
label_A304:; return;
label_A306:; return;
label_A308:; return;
label_A30A:; return;
label_A30C:; return;
label_A30E:; return;
label_A310:; return;
label_A311:; return;
label_A313:; return;
label_A314:; return;
label_A315:; return;
label_A318:; return;
label_A319:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A327:; return;
label_A328:; return;
label_A32A:; return;
label_A32C:; return;
label_A32D:; return;
label_A32E:; return;
label_A330:; return;
label_A331:; return;
label_A333:; return;
label_A334:; return;
label_A336:; return;
label_A337:; return;
label_A339:; return;
label_A33A:; return;
label_A33C:; return;
label_A33E:; return;
label_A340:; return;
label_A342:; return;
label_A344:; return;
label_A346:; return;
label_A348:; return;
label_A34A:; return;
label_A34D:; return;
label_A34E:; return;
label_A350:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35C:; return;
label_A35E:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A364:; return;
label_A367:; return;
label_A36A:; return;
label_A36D:; return;
label_A370:; return;
label_A372:; return;
label_A374:; return;
label_A375:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37C:; return;
label_A37D:; return;
label_A37F:; return;
label_A380:; return;
label_A382:; return;
label_A384:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38C:; return;
label_A38E:; return;
label_A38F:; return;
label_A390:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A397:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A39F:; return;
label_A3A1:; return;
label_A3A2:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A9:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B2:; return;
label_A3B3:; return;
label_A3B4:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3B9:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3C0:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C7:; return;
label_A3CA:; return;
label_A3CC:; return;
label_A3CE:; return;
label_A3D0:; return;
label_A3D2:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D9:; return;
label_A3DC:; return;
label_A3DD:; return;
label_A3DE:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E6:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EA:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3ED:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F9:; return;
label_A3FA:; return;
label_A3FD:; return;
label_A3FE:; return;
label_A401:; return;
label_A403:; return;
label_A405:; return;
label_A407:; return;
label_A409:; return;
label_A40C:; return;
label_A40D:; return;
label_A40F:; return;
label_A412:; return;
label_A414:; return;
label_A416:; return;
label_A418:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A422:; return;
label_A424:; return;
label_A425:; return;
label_A428:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A430:; return;
label_A431:; return;
label_A432:; return;
label_A434:; return;
label_A435:; return;
label_A438:; return;
label_A43B:; return;
label_A43E:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A447:; return;
label_A448:; return;
label_A44B:; return;
label_A44C:; return;
label_A44F:; return;
label_A452:; return;
label_A455:; return;
label_A458:; return;
label_A45B:; return;
label_A45E:; return;
label_A461:; return;
label_A463:; return;
label_A465:; return;
label_A467:; return;
label_A469:; return;
label_A46B:; return;
label_A46D:; return;
label_A46F:; return;
label_A471:; return;
label_A473:; return;
label_A475:; return;
label_A477:; return;
label_A479:; return;
label_A47B:; return;
label_A47D:; return;
label_A47F:; return;
label_A481:; return;
label_A482:; return;
label_A483:; return;
label_A485:; return;
label_A486:; return;
label_A488:; return;
label_A489:; return;
label_A48B:; return;
label_A48C:; return;
label_A48E:; return;
label_A48F:; return;
label_A492:; return;
label_A493:; return;
label_A496:; return;
label_A497:; return;
label_A498:; return;
label_A49A:; return;
label_A49B:; return;
label_A49D:; return;
label_A49F:; return;
label_A4A2:; return;
label_A4A5:; return;
label_A4A8:; return;
label_A4AB:; return;
label_A4AC:; return;
label_A4AD:; return;
label_A4AF:; return;
label_A4B0:; return;
label_A4B1:; return;
label_A4B2:; return;
label_A4B3:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B7:; return;
label_A4B8:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BB:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C4:; return;
label_A4C6:; return;
label_A4C9:; return;
label_A4CC:; return;
label_A4CD:; return;
label_A4CF:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D4:; return;
label_A4D7:; return;
label_A4DA:; return;
label_A4DB:; return;
label_A4DE:; return;
label_A4DF:; return;
label_A4E2:; return;
label_A4E3:; return;
label_A4E6:; return;
label_A4E7:; return;
label_A4EA:; return;
label_A4EB:; return;
label_A4EE:; return;
label_A4EF:; return;
label_A4F2:; return;
label_A4F5:; return;
label_A4F8:; return;
label_A4FB:; return;
label_A4FE:; return;
label_A501:; return;
label_A504:; return;
label_A507:; return;
label_A50A:; return;
label_A50D:; return;
label_A510:; return;
label_A512:; return;
label_A515:; return;
label_A516:; return;
label_A518:; return;
label_A519:; return;
label_A51C:; return;
label_A51E:; return;
label_A521:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52E:; return;
label_A530:; return;
label_A532:; return;
label_A534:; return;
label_A535:; return;
label_A537:; return;
label_A538:; return;
label_A53A:; return;
label_A53C:; return;
label_A53F:; return;
label_A542:; return;
label_A544:; return;
label_A545:; return;
label_A547:; return;
label_A549:; return;
label_A54B:; return;
label_A54D:; return;
label_A54E:; return;
label_A54F:; return;
label_A551:; return;
label_A552:; return;
label_A554:; return;
label_A555:; return;
label_A558:; return;
label_A55A:; return;
label_A55D:; return;
label_A55E:; return;
label_A55F:; return;
label_A561:; return;
label_A562:; return;
label_A565:; return;
label_A566:; return;
label_A568:; return;
label_A56B:; return;
label_A56C:; return;
label_A56F:; return;
label_A570:; return;
label_A572:; return;
label_A575:; return;
label_A576:; return;
label_A579:; return;
label_A57A:; return;
label_A57D:; return;
label_A57F:; return;
label_A580:; return;
label_A583:; return;
label_A584:; return;
label_A587:; return;
label_A588:; return;
label_A58A:; return;
label_A58D:; return;
label_A58E:; return;
label_A591:; return;
label_A592:; return;
label_A595:; return;
label_A596:; return;
label_A598:; return;
label_A59A:; return;
label_A59C:; return;
label_A59D:; return;
label_A59F:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A5:; return;
label_A5A7:; return;
label_A5A9:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B1:; return;
label_A5B3:; return;
label_A5B5:; return;
label_A5B7:; return;
label_A5B9:; return;
label_A5BB:; return;
label_A5BD:; return;
label_A5BF:; return;
label_A5C1:; return;
label_A5C3:; return;
label_A5C6:; return;
label_A5C8:; return;
label_A5CA:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5D1:; return;
label_A5D3:; return;
label_A5D5:; return;
label_A5D7:; return;
label_A5D9:; return;
label_A5DA:; return;
label_A5DC:; return;
label_A5DD:; return;
label_A5DE:; return;
label_A5E0:; return;
label_A5E2:; return;
label_A5E4:; return;
label_A5E6:; return;
label_A5E8:; return;
label_A5EB:; return;
label_A5ED:; return;
label_A5EE:; return;
label_A5F0:; return;
label_A5F1:; return;
label_A5F2:; return;
label_A5F4:; return;
label_A5F6:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FD:; return;
label_A5FF:; return;
label_A600:; return;
label_A602:; return;
label_A604:; return;
label_A605:; return;
label_A606:; return;
label_A608:; return;
label_A60A:; return;
label_A60C:; return;
label_A60E:; return;
label_A610:; return;
label_A611:; return;
label_A612:; return;
label_A615:; return;
label_A617:; return;
label_A618:; return;
label_A61A:; return;
label_A61D:; return;
label_A61E:; return;
label_A620:; return;
label_A623:; return;
label_A624:; return;
label_A626:; return;
label_A628:; return;
label_A629:; return;
label_A62A:; return;
label_A62D:; return;
label_A62F:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A637:; return;
label_A639:; return;
label_A63B:; return;
label_A63D:; return;
label_A63F:; return;
label_A641:; return;
label_A643:; return;
label_A645:; return;
label_A647:; return;
label_A649:; return;
label_A64B:; return;
label_A64D:; return;
label_A64F:; return;
label_A651:; return;
label_A653:; return;
label_A655:; return;
label_A656:; return;
label_A658:; return;
label_A65A:; return;
label_A65C:; return;
label_A65E:; return;
label_A660:; return;
label_A662:; return;
label_A664:; return;
label_A666:; return;
label_A668:; return;
label_A66A:; return;
label_A66B:; return;
label_A66D:; return;
label_A66F:; return;
label_A671:; return;
label_A673:; return;
label_A675:; return;
label_A677:; return;
label_A679:; return;
label_A67B:; return;
label_A67D:; return;
label_A67F:; return;
label_A680:; return;
label_A682:; return;
label_A683:; return;
label_A685:; return;
label_A687:; return;
label_A689:; return;
label_A68B:; return;
label_A68D:; return;
label_A68F:; return;
label_A691:; return;
label_A693:; return;
label_A695:; return;
label_A697:; return;
label_A69A:; return;
label_A69B:; return;
label_A69D:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A5:; return;
label_A6A8:; return;
label_A6AB:; return;
label_A6AC:; return;
label_A6AE:; return;
label_A6B0:; return;
label_A6B1:; return;
label_A6B2:; return;
label_A6B5:; return;
label_A6B6:; return;
label_A6B8:; return;
label_A6BA:; return;
label_A6BC:; return;
label_A6BE:; return;
label_A6C0:; return;
label_A6C1:; return;
label_A6C2:; return;
label_A6C4:; return;
label_A6C6:; return;
label_A6C8:; return;
label_A6CA:; return;
label_A6CC:; return;
label_A6CE:; return;
label_A6CF:; return;
label_A6D0:; return;
label_A6D1:; return;
label_A6D2:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D7:; return;
label_A6DA:; return;
label_A6DC:; return;
label_A6DE:; return;
label_A6E0:; return;
label_A6E1:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6E9:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EF:; return;
label_A6F0:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F6:; return;
label_A6F8:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FE:; return;
label_A700:; return;
label_A702:; return;
label_A704:; return;
label_A706:; return;
label_A707:; return;
label_A708:; return;
label_A70A:; return;
label_A70C:; return;
label_A70F:; return;
label_A711:; return;
label_A712:; return;
label_A714:; return;
label_A716:; return;
label_A718:; return;
label_A71B:; return;
label_A71C:; return;
label_A71F:; return;
label_A720:; return;
label_A723:; return;
label_A724:; return;
label_A726:; return;
label_A728:; return;
label_A72A:; return;
label_A72C:; return;
label_A72E:; return;
label_A730:; return;
label_A732:; return;
label_A733:; return;
label_A734:; return;
label_A736:; return;
label_A738:; return;
label_A739:; return;
label_A73A:; return;
label_A73D:; return;
label_A73F:; return;
label_A740:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A74A:; return;
label_A74C:; return;
label_A74E:; return;
label_A750:; return;
label_A752:; return;
label_A753:; return;
label_A755:; return;
label_A756:; return;
label_A758:; return;
label_A75A:; return;
label_A75C:; return;
label_A75E:; return;
label_A760:; return;
label_A762:; return;
label_A764:; return;
label_A766:; return;
label_A768:; return;
label_A76A:; return;
label_A76C:; return;
label_A76E:; return;
label_A770:; return;
label_A772:; return;
label_A774:; return;
label_A776:; return;
label_A777:; return;
label_A778:; return;
label_A77A:; return;
label_A77C:; return;
label_A77E:; return;
label_A780:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78A:; return;
label_A78C:; return;
label_A78E:; return;
label_A791:; return;
label_A792:; return;
label_A795:; return;
label_A797:; return;
label_A799:; return;
label_A79A:; return;
label_A79C:; return;
label_A79E:; return;
label_A7A0:; return;
label_A7A2:; return;
label_A7A4:; return;
label_A7A6:; return;
label_A7A7:; return;
label_A7A8:; return;
label_A7A9:; return;
label_A7AA:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B3:; return;
label_A7B4:; return;
label_A7B6:; return;
label_A7B8:; return;
label_A7BA:; return;
label_A7BD:; return;
label_A7BE:; return;
label_A7BF:; return;
label_A7C0:; return;
label_A7C2:; return;
label_A7C5:; return;
label_A7C6:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CC:; return;
label_A7CF:; return;
label_A7D2:; return;
label_A7D4:; return;
label_A7D6:; return;
label_A7D8:; return;
label_A7DA:; return;
label_A7DB:; return;
label_A7DC:; return;
label_A7DE:; return;
label_A7E0:; return;
label_A7E2:; return;
label_A7E5:; return;
label_A7E8:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7F0:; return;
label_A7F2:; return;
label_A7F4:; return;
label_A7F6:; return;
label_A7F8:; return;
label_A7FB:; return;
label_A7FE:; return;
label_A801:; return;
label_A802:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A80A:; return;
label_A80C:; return;
label_A80E:; return;
label_A811:; return;
label_A814:; return;
label_A817:; return;
label_A818:; return;
label_A81A:; return;
label_A81D:; return;
label_A81E:; return;
label_A820:; return;
label_A822:; return;
label_A824:; return;
label_A826:; return;
label_A828:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A830:; return;
label_A831:; return;
label_A832:; return;
label_A834:; return;
label_A836:; return;
label_A838:; return;
label_A83A:; return;
label_A83B:; return;
label_A83E:; return;
label_A840:; return;
label_A841:; return;
label_A842:; return;
label_A844:; return;
label_A847:; return;
label_A848:; return;
label_A84A:; return;
label_A84C:; return;
label_A84E:; return;
label_A851:; return;
label_A853:; return;
label_A855:; return;
label_A856:; return;
label_A858:; return;
label_A85A:; return;
label_A85C:; return;
label_A85F:; return;
label_A860:; return;
label_A862:; return;
label_A864:; return;
label_A866:; return;
label_A868:; return;
label_A86A:; return;
label_A86C:; return;
label_A86D:; return;
label_A86E:; return;
label_A870:; return;
label_A872:; return;
label_A873:; return;
label_A874:; return;
label_A875:; return;
label_A876:; return;
label_A878:; return;
label_A87A:; return;
label_A87C:; return;
label_A87E:; return;
label_A880:; return;
label_A882:; return;
label_A883:; return;
label_A884:; return;
label_A886:; return;
label_A888:; return;
label_A889:; return;
label_A88A:; return;
label_A88C:; return;
label_A88E:; return;
label_A890:; return;
label_A892:; return;
label_A894:; return;
label_A896:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89C:; return;
label_A89F:; return;
label_A8A0:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A8:; return;
label_A8AB:; return;
label_A8AD:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B0:; return;
label_A8B2:; return;
label_A8B4:; return;
label_A8B6:; return;
label_A8B7:; return;
label_A8B8:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C2:; return;
label_A8C4:; return;
label_A8C5:; return;
label_A8C6:; return;
label_A8C8:; return;
label_A8CB:; return;
label_A8CC:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D3:; return;
label_A8D4:; return;
label_A8D6:; return;
label_A8D8:; return;
label_A8DA:; return;
label_A8DB:; return;
label_A8DC:; return;
label_A8DE:; return;
label_A8E0:; return;
label_A8E2:; return;
label_A8E3:; return;
label_A8E4:; return;
label_A8E6:; return;
label_A8E8:; return;
label_A8E9:; return;
label_A8EA:; return;
label_A8EC:; return;
label_A8EE:; return;
label_A8F0:; return;
label_A8F1:; return;
label_A8F2:; return;
label_A8F4:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FC:; return;
label_A8FE:; return;
label_A900:; return;
label_A902:; return;
label_A903:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A90A:; return;
label_A90C:; return;
label_A90E:; return;
label_A910:; return;
label_A912:; return;
label_A914:; return;
label_A916:; return;
label_A918:; return;
label_A91A:; return;
label_A91C:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A922:; return;
label_A924:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92C:; return;
label_A92E:; return;
label_A930:; return;
label_A932:; return;
label_A934:; return;
label_A935:; return;
label_A936:; return;
label_A938:; return;
label_A93A:; return;
label_A93C:; return;
label_A93E:; return;
label_A941:; return;
label_A942:; return;
label_A945:; return;
label_A947:; return;
label_A949:; return;
label_A94A:; return;
label_A94C:; return;
label_A94E:; return;
label_A94F:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95A:; return;
label_A95D:; return;
label_A95E:; return;
label_A960:; return;
label_A963:; return;
label_A964:; return;
label_A966:; return;
label_A968:; return;
label_A969:; return;
label_A96A:; return;
label_A96D:; return;
label_A96E:; return;
label_A96F:; return;
label_A970:; return;
label_A972:; return;
label_A975:; return;
label_A976:; return;
label_A979:; return;
label_A97B:; return;
label_A97C:; return;
label_A97F:; return;
label_A982:; return;
label_A984:; return;
label_A986:; return;
label_A989:; return;
label_A98A:; return;
label_A98D:; return;
label_A98E:; return;
label_A991:; return;
label_A992:; return;
label_A994:; return;
label_A996:; return;
label_A997:; return;
label_A99A:; return;
label_A99D:; return;
label_A99F:; return;
label_A9A1:; return;
label_A9A3:; return;
label_A9A5:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AE:; return;
label_A9B0:; return;
label_A9B2:; return;
label_A9B4:; return;
label_A9B6:; return;
label_A9B8:; return;
label_A9BA:; return;
label_A9BC:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C2:; return;
label_A9C3:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CA:; return;
label_A9CC:; return;
label_A9CE:; return;
label_A9D0:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D6:; return;
label_A9D8:; return;
label_A9DA:; return;
label_A9DB:; return;
label_A9DE:; return;
label_A9DF:; return;
label_A9E2:; return;
label_A9E4:; return;
label_A9E5:; return;
label_A9E6:; return;
label_A9E9:; return;
label_A9EB:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F7:; return;
label_A9F8:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA06:; return;
label_AA08:; return;
label_AA0A:; return;
label_AA0C:; return;
label_AA0E:; return;
label_AA10:; return;
label_AA11:; return;
label_AA13:; return;
label_AA15:; return;
label_AA17:; return;
label_AA19:; return;
label_AA1B:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA20:; return;
label_AA23:; return;
label_AA25:; return;
label_AA27:; return;
label_AA29:; return;
label_AA2A:; return;
label_AA2C:; return;
label_AA2D:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA33:; return;
label_AA34:; return;
label_AA37:; return;
label_AA39:; return;
label_AA3B:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA45:; return;
label_AA47:; return;
label_AA48:; return;
label_AA4A:; return;
label_AA4B:; return;
label_AA4D:; return;
label_AA4E:; return;
label_AA51:; return;
label_AA52:; return;
label_AA54:; return;
label_AA57:; return;
label_AA59:; return;
label_AA5B:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA61:; return;
label_AA62:; return;
label_AA65:; return;
label_AA67:; return;
label_AA68:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA70:; return;
label_AA72:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7C:; return;
label_AA7E:; return;
label_AA7F:; return;
label_AA80:; return;
label_AA82:; return;
label_AA84:; return;
label_AA86:; return;
label_AA88:; return;
label_AA8A:; return;
label_AA8B:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA91:; return;
label_AA93:; return;
label_AA95:; return;
label_AA97:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAB:; return;
label_AAAD:; return;
label_AAAF:; return;
label_AAB1:; return;
label_AAB4:; return;
label_AAB6:; return;
label_AAB8:; return;
label_AABA:; return;
label_AABC:; return;
label_AABE:; return;
label_AAC0:; return;
label_AAC2:; return;
label_AAC4:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AACA:; return;
label_AACC:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD6:; return;
label_AAD8:; return;
label_AADA:; return;
label_AADC:; return;
label_AADE:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE4:; return;
label_AAE6:; return;
label_AAE8:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAF0:; return;
label_AAF3:; return;
label_AAF5:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFC:; return;
label_AAFE:; return;
label_AB00:; return;
label_AB02:; return;
label_AB04:; return;
label_AB05:; return;
label_AB06:; return;
label_AB08:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0D:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB17:; return;
label_AB18:; return;
label_AB1B:; return;
label_AB1C:; return;
label_AB1D:; return;
label_AB1E:; return;
label_AB21:; return;
label_AB22:; return;
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
label_AB3B:; return;
label_AB3D:; return;
label_AB3F:; return;
label_AB42:; return;
label_AB45:; return;
label_AB47:; return;
label_AB49:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB56:; return;
label_AB58:; return;
label_AB5A:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB60:; return;
label_AB62:; return;
label_AB64:; return;
label_AB66:; return;
label_AB68:; return;
label_AB69:; return;
label_AB6A:; return;
label_AB6D:; return;
label_AB6E:; return;
label_AB71:; return;
label_AB74:; return;
label_AB77:; return;
label_AB78:; return;
label_AB7B:; return;
label_AB7C:; return;
label_AB7E:; return;
label_AB80:; return;
label_AB82:; return;
label_AB84:; return;
label_AB85:; return;
label_AB86:; return;
label_AB88:; return;
label_AB89:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB90:; return;
label_AB92:; return;
label_AB94:; return;
label_AB95:; return;
label_AB96:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9D:; return;
label_ABA0:; return;
label_ABA3:; return;
label_ABA4:; return;
label_ABA5:; return;
label_ABA6:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAD:; return;
label_ABAE:; return;
label_ABB0:; return;
label_ABB3:; return;
label_ABB4:; return;
label_ABB6:; return;
label_ABB9:; return;
label_ABBB:; return;
label_ABBC:; return;
label_ABBF:; return;
label_ABC1:; return;
label_ABC2:; return;
label_ABC5:; return;
label_ABC7:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD6:; return;
label_ABD7:; return;
label_ABD9:; return;
label_ABDA:; return;
label_ABDD:; return;
label_ABDE:; return;
label_ABE0:; return;
label_ABE2:; return;
label_ABE4:; return;
label_ABE6:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABEE:; return;
label_ABF1:; return;
label_ABF2:; return;
label_ABF5:; return;
label_ABF6:; return;
label_ABF9:; return;
label_ABFA:; return;
label_ABFD:; return;
label_ABFF:; return;
label_AC02:; return;
label_AC04:; return;
label_AC05:; return;
label_AC06:; return;
label_AC09:; return;
label_AC0A:; return;
label_AC0D:; return;
label_AC0F:; return;
label_AC11:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC17:; return;
label_AC18:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC20:; return;
label_AC21:; return;
label_AC22:; return;
label_AC23:; return;
label_AC26:; return;
label_AC28:; return;
label_AC2A:; return;
label_AC2C:; return;
label_AC2E:; return;
label_AC30:; return;
label_AC33:; return;
label_AC34:; return;
label_AC36:; return;
label_AC38:; return;
label_AC3B:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC41:; return;
label_AC43:; return;
label_AC45:; return;
label_AC46:; return;
label_AC48:; return;
label_AC4A:; return;
label_AC4D:; return;
label_AC4E:; return;
label_AC4F:; return;
label_AC51:; return;
label_AC53:; return;
label_AC54:; return;
label_AC56:; return;
label_AC59:; return;
label_AC5B:; return;
label_AC5E:; return;
label_AC61:; return;
label_AC63:; return;
label_AC65:; return;
label_AC67:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC72:; return;
label_AC75:; return;
label_AC76:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7C:; return;
label_AC7E:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC89:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8C:; return;
label_AC8E:; return;
label_AC90:; return;
label_AC92:; return;
label_AC94:; return;
label_AC96:; return;
label_AC98:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9E:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA6:; return;
label_ACA8:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACB0:; return;
label_ACB1:; return;
label_ACB4:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBE:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD6:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDC:; return;
label_ACDE:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE7:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEC:; return;
label_ACEE:; return;
label_ACF0:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD00:; return;
label_AD02:; return;
label_AD04:; return;
label_AD06:; return;
label_AD08:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0C:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD10:; return;
label_AD11:; return;
label_AD13:; return;
label_AD15:; return;
label_AD17:; return;
label_AD19:; return;
label_AD1A:; return;
label_AD1C:; return;
label_AD1E:; return;
label_AD20:; return;
label_AD22:; return;
label_AD24:; return;
label_AD26:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD34:; return;
label_AD36:; return;
label_AD38:; return;
label_AD39:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3E:; return;
label_AD40:; return;
label_AD42:; return;
label_AD43:; return;
label_AD45:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4B:; return;
label_AD4D:; return;
label_AD4F:; return;
label_AD50:; return;
label_AD52:; return;
label_AD54:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5B:; return;
label_AD5D:; return;
label_AD5F:; return;
label_AD61:; return;
label_AD63:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD73:; return;
label_AD75:; return;
label_AD78:; return;
label_AD79:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD82:; return;
label_AD85:; return;
label_AD87:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD95:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9F:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB8:; return;
label_ADBB:; return;
label_ADBD:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADDF:; return;
label_ADE1:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFC:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE03:; return;
label_AE05:; return;
label_AE06:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE15:; return;
label_AE17:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE21:; return;
label_AE23:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE40:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE51:; return;
label_AE52:; return;
label_AE54:; return;
label_AE55:; return;
label_AE57:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5E:; return;
label_AE61:; return;
label_AE63:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE72:; return;
label_AE74:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE82:; return;
label_AE85:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE93:; return;
label_AE94:; return;
label_AE95:; return;
label_AE96:; return;
label_AE98:; return;
label_AE9A:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBC:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECD:; return;
label_AECF:; return;
label_AED1:; return;
label_AED3:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFD:; return;
label_AF00:; return;
label_AF02:; return;
label_AF04:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0B:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF10:; return;
label_AF13:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
}

void func_ACB0_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACB0_b13");
#endif
label_ACB0:;
    /* $ACB0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB0); return;
}

void func_ACFA_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACFA_b13");
#endif
label_ACFA:;
    /* $ACFA: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACFC:;
    /* $ACFC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xC2 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ACFE:;
    /* $ACFE: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD00:;
    /* $AD00: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x42 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD02:;
    /* $AD02: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x82 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD04:;
    /* $AD04: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xC2 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD06:;
    /* $AD06: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xFD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AD08:;
    /* $AD08: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_AD09:; /* main_have_su_bee */
    /* $AD09: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AD0A:;
    /* $AD0A: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD0C:;
    /* $AD0C: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD0E:;
    /* $AD0E: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_AD0F:;
    /* $AD0F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD10:;
    /* $AD10: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_AD11:;
    /* $AD11: C2 */ maybe_trigger_vblank(2); /* NOP */
label_AD13:;
    /* $AD13: C2 */ maybe_trigger_vblank(2); /* NOP */
label_AD15:;
    /* $AD15: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AD17:;
    /* $AD17: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AD19:;
    /* $AD19: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AD1A:;
    /* $AD1A: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD1C:;
    /* $AD1C: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD1E:;
    /* $AD1E: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x82) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD20:;
    /* $AD20: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AD24;
label_AD22:;
    /* $AD22: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD24:;
    /* $AD24: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD26:;
    /* $AD26: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD28:;
    /* $AD28: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD2A:;
    /* $AD2A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0D6E), 13); return; }
label_AD2C:;
    /* $AD2C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0CB0), 13); return; }
label_AD2E:;
    /* $AD2E: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x82) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD30:;
    /* $AD30: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x82) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD32:;
    /* $AD32: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD34:;
    /* $AD34: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD36:;
    /* $AD36: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ACFA;
    }
label_AD38:;
    /* $AD38: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AD39:;
    /* $AD39: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF3; g_cpu.C=(g_cpu.X>=0xF3)?1:0; FLAG_NZ(r&0xFF); }
label_AD3B:;
    /* $AD3B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD3C:;
    /* $AD3C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD3E:;
    /* $AD3E: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD40:;
    /* $AD40: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD42:;
    /* $AD42: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_AD43:;
    /* $AD43: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD45:;
    /* $AD45: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD47:;
    /* $AD47: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD49:;
    /* $AD49: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD4B:;
    /* $AD4B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD4D:;
    /* $AD4D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF5; g_cpu.C=(g_cpu.X>=0xF5)?1:0; FLAG_NZ(r&0xFF); }
label_AD4F:;
    /* $AD4F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD50:;
    /* $AD50: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD52:;
    /* $AD52: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x42 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD54:;
    /* $AD54: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD56:;
    /* $AD56: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_AD57:;
    /* $AD57: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD59:;
    /* $AD59: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD5B:;
    /* $AD5B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD5D:;
    /* $AD5D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD5F:;
    /* $AD5F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD61:;
    /* $AD61: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xF3; g_cpu.C=(g_cpu.X>=0xF3)?1:0; FLAG_NZ(r&0xFF); }
label_AD63:;
    /* $AD63: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD64:;
    /* $AD64: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD66:;
    /* $AD66: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD68:;
    /* $AD68: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE01 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD6B:;
    /* $AD6B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xFD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD6D:;
    /* $AD6D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xEE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD6F:;
    /* $AD6F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD71:;
    /* $AD71: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD73:;
    /* $AD73: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD75:;
    /* $AD75: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x01F1; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD78:;
    /* $AD78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD78); return;
label_AD79:; return;
label_AD7C:; return;
label_AD7E:; return;
label_AD81:; return;
label_AD82:; return;
label_AD85:; return;
label_AD87:; return;
label_AD8A:; return;
label_AD8C:; return;
label_AD8E:; return;
label_AD8F:; return;
label_AD90:; return;
label_AD92:; return;
label_AD93:; return;
label_AD95:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9F:; return;
label_ADA1:; return;
label_ADA3:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAC:; return;
label_ADAE:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB2:; return;
label_ADB4:; return;
label_ADB6:; return;
label_ADB8:; return;
label_ADBB:; return;
label_ADBD:; return;
label_ADBF:; return;
label_ADC1:; return;
label_ADC2:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADCA:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADDA:; return;
label_ADDD:; return;
label_ADDF:; return;
label_ADE1:; return;
label_ADE3:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE9:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF3:; return;
label_ADF5:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFA:; return;
label_ADFC:; return;
label_ADFF:; return;
label_AE01:; return;
label_AE03:; return;
label_AE05:; return;
label_AE06:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0B:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE15:; return;
label_AE17:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE21:; return;
label_AE23:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE29:; return;
label_AE2A:; return;
label_AE2D:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE32:; return;
label_AE34:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3C:; return;
label_AE3E:; return;
label_AE40:; return;
label_AE43:; return;
label_AE45:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4C:; return;
label_AE4E:; return;
label_AE51:; return;
label_AE52:; return;
label_AE54:; return;
label_AE55:; return;
label_AE57:; return;
label_AE58:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5E:; return;
label_AE61:; return;
label_AE63:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE69:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE72:; return;
label_AE74:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7C:; return;
label_AE7E:; return;
label_AE80:; return;
label_AE82:; return;
label_AE85:; return;
label_AE87:; return;
label_AE89:; return;
label_AE8B:; return;
label_AE8D:; return;
label_AE8F:; return;
label_AE91:; return;
label_AE93:; return;
label_AE94:; return;
label_AE95:; return;
label_AE96:; return;
label_AE98:; return;
label_AE9A:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AEA0:; return;
label_AEA2:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA9:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB3:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB8:; return;
label_AEBA:; return;
label_AEBC:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC4:; return;
label_AEC6:; return;
label_AEC8:; return;
label_AECA:; return;
label_AECD:; return;
label_AECF:; return;
label_AED1:; return;
label_AED3:; return;
label_AED5:; return;
label_AED7:; return;
label_AED9:; return;
label_AEDC:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEE:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEF9:; return;
label_AEFA:; return;
label_AEFD:; return;
label_AF00:; return;
label_AF02:; return;
label_AF04:; return;
label_AF06:; return;
label_AF08:; return;
label_AF0B:; return;
label_AF0C:; return;
label_AF0E:; return;
label_AF10:; return;
label_AF13:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1D:; return;
label_AF1E:; return;
label_AF21:; return;
label_AF24:; return;
label_AF26:; return;
label_AF29:; return;
label_AF2A:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF30:; return;
label_AF32:; return;
label_AF34:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3A:; return;
label_AF3C:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF41:; return;
label_AF43:; return;
label_AF45:; return;
label_AF47:; return;
label_AF49:; return;
label_AF4B:; return;
label_AF4D:; return;
label_AF4F:; return;
label_AF51:; return;
label_AF53:; return;
label_AF55:; return;
label_AF57:; return;
label_AF59:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF61:; return;
label_AF63:; return;
label_AF65:; return;
label_AF67:; return;
label_AF69:; return;
label_AF6B:; return;
label_AF6D:; return;
label_AF6F:; return;
label_AF71:; return;
label_AF73:; return;
label_AF75:; return;
label_AF77:; return;
label_AF78:; return;
label_AF7A:; return;
label_AF7C:; return;
label_AF7E:; return;
label_AF80:; return;
label_AF81:; return;
label_AF83:; return;
label_AF85:; return;
label_AF87:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8D:; return;
label_AF8F:; return;
label_AF91:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9D:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA8:; return;
label_AFAA:; return;
label_AFAC:; return;
label_AFAE:; return;
label_AFB0:; return;
label_AFB2:; return;
label_AFB4:; return;
label_AFB6:; return;
label_AFB8:; return;
label_AFBA:; return;
label_AFBC:; return;
label_AFBE:; return;
label_AFC0:; return;
label_AFC1:; return;
label_AFC3:; return;
label_AFC5:; return;
label_AFC7:; return;
label_AFC9:; return;
label_AFCB:; return;
label_AFCD:; return;
label_AFCF:; return;
label_AFD1:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD9:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE2:; return;
label_AFE4:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEA:; return;
label_AFEC:; return;
label_AFEE:; return;
label_AFF0:; return;
label_AFF1:; return;
label_AFF3:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFF9:; return;
label_AFFB:; return;
label_AFFD:; return;
label_AFFF:; return;
label_B001:; return;
label_B003:; return;
label_B005:; return;
label_B008:; return;
label_B00A:; return;
label_B00B:; return;
label_B00C:; return;
label_B00D:; return;
label_B00E:; return;
label_B010:; return;
label_B012:; return;
label_B014:; return;
label_B016:; return;
label_B018:; return;
label_B01A:; return;
label_B01C:; return;
label_B01D:; return;
label_B01E:; return;
label_B021:; return;
label_B023:; return;
label_B026:; return;
label_B028:; return;
label_B02A:; return;
label_B02C:; return;
label_B02E:; return;
label_B02F:; return;
label_B031:; return;
label_B033:; return;
label_B035:; return;
label_B037:; return;
label_B03A:; return;
label_B03D:; return;
label_B03E:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B049:; return;
label_B04B:; return;
label_B04E:; return;
label_B04F:; return;
label_B051:; return;
label_B053:; return;
label_B055:; return;
label_B057:; return;
label_B059:; return;
label_B05B:; return;
label_B05D:; return;
label_B05F:; return;
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
label_B07C:; return;
label_B07D:; return;
label_B07F:; return;
label_B081:; return;
label_B083:; return;
label_B085:; return;
label_B087:; return;
label_B089:; return;
label_B08B:; return;
label_B08D:; return;
label_B08F:; return;
label_B091:; return;
label_B093:; return;
label_B095:; return;
label_B097:; return;
label_B099:; return;
label_B09B:; return;
label_B09D:; return;
label_B09F:; return;
label_B0A1:; return;
label_B0A3:; return;
label_B0A5:; return;
label_B0A7:; return;
label_B0A9:; return;
label_B0AB:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B1:; return;
label_B0B3:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0BF:; return;
label_B0C1:; return;
label_B0C3:; return;
label_B0C5:; return;
label_B0C7:; return;
label_B0C9:; return;
label_B0CB:; return;
label_B0CD:; return;
label_B0CF:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D5:; return;
label_B0D7:; return;
label_B0D9:; return;
label_B0DB:; return;
label_B0DD:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E5:; return;
label_B0E7:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0ED:; return;
label_B0EF:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FA:; return;
label_B0FC:; return;
label_B0FE:; return;
label_B100:; return;
label_B102:; return;
label_B104:; return;
label_B106:; return;
label_B108:; return;
label_B10A:; return;
label_B10C:; return;
label_B10E:; return;
label_B110:; return;
label_B112:; return;
label_B114:; return;
label_B116:; return;
label_B118:; return;
label_B11A:; return;
label_B11C:; return;
label_B11E:; return;
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
label_B13A:; return;
label_B13C:; return;
label_B13E:; return;
label_B140:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14A:; return;
label_B14C:; return;
label_B14E:; return;
label_B150:; return;
label_B152:; return;
label_B155:; return;
label_B157:; return;
label_B159:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B169:; return;
label_B16A:; return;
label_B16B:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B170:; return;
label_B172:; return;
label_B174:; return;
label_B175:; return;
label_B176:; return;
label_B177:; return;
label_B178:; return;
label_B17A:; return;
label_B17C:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B185:; return;
label_B187:; return;
label_B189:; return;
label_B18B:; return;
label_B18D:; return;
label_B18F:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B199:; return;
label_B19B:; return;
label_B19D:; return;
label_B19F:; return;
label_B1A1:; return;
label_B1A3:; return;
label_B1A5:; return;
label_B1A7:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B1:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B7:; return;
label_B1B9:; return;
label_B1BB:; return;
label_B1BD:; return;
label_B1BF:; return;
label_B1C1:; return;
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
label_B1E6:; return;
label_B1E9:; return;
label_B1EB:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F1:; return;
label_B1F2:; return;
label_B1F5:; return;
label_B1F7:; return;
label_B1FA:; return;
label_B1FB:; return;
label_B1FD:; return;
label_B1FF:; return;
label_B201:; return;
label_B203:; return;
label_B205:; return;
label_B207:; return;
label_B209:; return;
label_B20B:; return;
label_B20D:; return;
label_B20F:; return;
label_B211:; return;
label_B213:; return;
label_B215:; return;
label_B216:; return;
label_B218:; return;
label_B219:; return;
label_B21B:; return;
label_B21D:; return;
label_B21F:; return;
label_B221:; return;
label_B223:; return;
label_B225:; return;
label_B227:; return;
label_B229:; return;
label_B22B:; return;
label_B22C:; return;
label_B22E:; return;
label_B22F:; return;
label_B231:; return;
label_B233:; return;
label_B235:; return;
label_B237:; return;
label_B239:; return;
label_B23B:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B242:; return;
label_B244:; return;
label_B245:; return;
label_B247:; return;
label_B249:; return;
label_B24B:; return;
label_B24D:; return;
label_B24F:; return;
label_B251:; return;
label_B253:; return;
label_B255:; return;
label_B257:; return;
label_B259:; return;
label_B25A:; return;
label_B25D:; return;
label_B25F:; return;
label_B261:; return;
label_B263:; return;
label_B265:; return;
label_B267:; return;
label_B269:; return;
label_B26B:; return;
label_B26D:; return;
label_B26F:; return;
label_B270:; return;
label_B271:; return;
label_B273:; return;
label_B275:; return;
label_B277:; return;
label_B279:; return;
label_B27B:; return;
label_B27D:; return;
label_B27F:; return;
label_B281:; return;
label_B283:; return;
label_B285:; return;
label_B288:; return;
label_B28A:; return;
label_B28C:; return;
label_B28E:; return;
label_B28F:; return;
label_B290:; return;
label_B292:; return;
label_B294:; return;
label_B295:; return;
label_B296:; return;
label_B298:; return;
label_B29A:; return;
label_B29C:; return;
label_B29E:; return;
label_B2A0:; return;
label_B2A1:; return;
label_B2A2:; return;
label_B2A4:; return;
label_B2A5:; return;
label_B2A6:; return;
label_B2A8:; return;
label_B2A9:; return;
label_B2AA:; return;
label_B2AD:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B4:; return;
label_B2B5:; return;
label_B2B6:; return;
label_B2B8:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2BE:; return;
label_B2C0:; return;
label_B2C1:; return;
label_B2C2:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C8:; return;
label_B2CB:; return;
label_B2CD:; return;
label_B2CF:; return;
label_B2D1:; return;
label_B2D3:; return;
label_B2D5:; return;
label_B2D6:; return;
label_B2D9:; return;
label_B2DA:; return;
label_B2DD:; return;
label_B2DF:; return;
label_B2E1:; return;
label_B2E3:; return;
label_B2E5:; return;
label_B2E7:; return;
label_B2E8:; return;
label_B2EB:; return;
label_B2EC:; return;
label_B2EF:; return;
label_B2F1:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2F9:; return;
label_B2FB:; return;
label_B2FD:; return;
label_B2FE:; return;
label_B301:; return;
label_B303:; return;
label_B305:; return;
label_B307:; return;
label_B309:; return;
label_B30B:; return;
label_B30C:; return;
label_B30F:; return;
label_B311:; return;
label_B313:; return;
label_B315:; return;
label_B317:; return;
label_B319:; return;
label_B31B:; return;
label_B31D:; return;
label_B31F:; return;
label_B320:; return;
label_B323:; return;
label_B325:; return;
label_B327:; return;
label_B329:; return;
label_B32B:; return;
label_B32D:; return;
label_B32E:; return;
label_B331:; return;
label_B333:; return;
label_B335:; return;
label_B337:; return;
label_B339:; return;
label_B33B:; return;
label_B33D:; return;
label_B33F:; return;
label_B341:; return;
label_B343:; return;
label_B345:; return;
label_B347:; return;
label_B349:; return;
label_B34B:; return;
label_B34D:; return;
label_B34F:; return;
label_B350:; return;
label_B353:; return;
label_B355:; return;
label_B357:; return;
label_B359:; return;
label_B35B:; return;
label_B35D:; return;
label_B35F:; return;
label_B361:; return;
label_B362:; return;
label_B365:; return;
label_B367:; return;
label_B369:; return;
label_B36B:; return;
label_B36D:; return;
label_B36F:; return;
label_B371:; return;
label_B373:; return;
label_B375:; return;
label_B377:; return;
label_B379:; return;
label_B37B:; return;
label_B37D:; return;
label_B37F:; return;
label_B381:; return;
label_B383:; return;
label_B385:; return;
label_B386:; return;
label_B389:; return;
label_B38B:; return;
label_B38D:; return;
label_B38F:; return;
label_B391:; return;
label_B393:; return;
label_B395:; return;
label_B397:; return;
label_B399:; return;
label_B39B:; return;
label_B39D:; return;
label_B39F:; return;
label_B3A1:; return;
label_B3A3:; return;
label_B3A5:; return;
label_B3A7:; return;
label_B3A9:; return;
label_B3AB:; return;
label_B3AD:; return;
label_B3AF:; return;
label_B3B0:; return;
label_B3B3:; return;
label_B3B5:; return;
label_B3B7:; return;
label_B3B9:; return;
label_B3BB:; return;
label_B3BD:; return;
label_B3BF:; return;
label_B3C1:; return;
label_B3C3:; return;
label_B3C5:; return;
label_B3C7:; return;
label_B3C9:; return;
label_B3CB:; return;
label_B3CE:; return;
label_B3D1:; return;
label_B3D4:; return;
label_B3D7:; return;
label_B3DA:; return;
label_B3DB:; return;
label_B3DE:; return;
label_B3E1:; return;
label_B3E4:; return;
label_B3E7:; return;
label_B3EA:; return;
label_B3EB:; return;
label_B3EE:; return;
label_B3EF:; return;
label_B3F2:; return;
label_B3F4:; return;
label_B3F7:; return;
label_B3FA:; return;
label_B3FC:; return;
label_B3FF:; return;
label_B402:; return;
label_B405:; return;
label_B407:; return;
label_B40A:; return;
label_B40D:; return;
label_B40F:; return;
label_B412:; return;
label_B415:; return;
label_B417:; return;
label_B419:; return;
label_B41C:; return;
label_B41F:; return;
label_B421:; return;
label_B424:; return;
label_B427:; return;
label_B429:; return;
label_B42C:; return;
label_B42E:; return;
label_B431:; return;
label_B434:; return;
label_B437:; return;
label_B439:; return;
label_B43C:; return;
label_B43F:; return;
label_B442:; return;
label_B445:; return;
label_B448:; return;
label_B44B:; return;
label_B44E:; return;
label_B451:; return;
label_B454:; return;
label_B457:; return;
label_B459:; return;
label_B45B:; return;
label_B45E:; return;
label_B461:; return;
label_B464:; return;
label_B467:; return;
label_B46A:; return;
label_B46D:; return;
label_B470:; return;
label_B473:; return;
label_B476:; return;
label_B479:; return;
label_B47C:; return;
label_B47F:; return;
label_B481:; return;
label_B483:; return;
label_B485:; return;
label_B488:; return;
label_B48B:; return;
label_B48D:; return;
label_B490:; return;
label_B493:; return;
label_B495:; return;
label_B497:; return;
label_B49A:; return;
label_B49D:; return;
label_B49F:; return;
label_B4A1:; return;
label_B4A4:; return;
label_B4A7:; return;
label_B4AA:; return;
label_B4AD:; return;
label_B4B0:; return;
label_B4B3:; return;
label_B4B6:; return;
label_B4B9:; return;
label_B4BC:; return;
label_B4BF:; return;
label_B4C2:; return;
label_B4C5:; return;
label_B4C8:; return;
label_B4CB:; return;
label_B4CE:; return;
label_B4D1:; return;
label_B4D4:; return;
label_B4D7:; return;
label_B4DA:; return;
label_B4DD:; return;
label_B4E0:; return;
label_B4E3:; return;
label_B4E6:; return;
label_B4E9:; return;
label_B4EC:; return;
label_B4EF:; return;
label_B4F2:; return;
label_B4F5:; return;
label_B4F8:; return;
label_B4FB:; return;
label_B4FE:; return;
label_B501:; return;
label_B504:; return;
label_B507:; return;
label_B50A:; return;
label_B50D:; return;
label_B510:; return;
label_B513:; return;
label_B516:; return;
label_B519:; return;
label_B51C:; return;
label_B51F:; return;
label_B521:; return;
label_B523:; return;
label_B526:; return;
label_B528:; return;
label_B52B:; return;
label_B52D:; return;
label_B52F:; return;
label_B532:; return;
label_B535:; return;
label_B538:; return;
label_B53B:; return;
label_B53E:; return;
label_B541:; return;
label_B543:; return;
label_B545:; return;
label_B547:; return;
label_B54A:; return;
label_B54D:; return;
label_B54F:; return;
label_B552:; return;
label_B555:; return;
label_B557:; return;
label_B559:; return;
label_B55B:; return;
label_B55E:; return;
label_B561:; return;
label_B564:; return;
label_B567:; return;
label_B56A:; return;
label_B56D:; return;
label_B56F:; return;
label_B572:; return;
label_B575:; return;
label_B577:; return;
label_B579:; return;
label_B57C:; return;
label_B57F:; return;
label_B582:; return;
label_B585:; return;
label_B588:; return;
label_B58B:; return;
label_B58E:; return;
label_B591:; return;
label_B594:; return;
label_B596:; return;
label_B599:; return;
label_B59B:; return;
label_B59D:; return;
label_B59F:; return;
label_B5A2:; return;
label_B5A5:; return;
label_B5A8:; return;
label_B5AB:; return;
label_B5AD:; return;
label_B5B0:; return;
label_B5B3:; return;
label_B5B5:; return;
label_B5B8:; return;
label_B5BB:; return;
label_B5BE:; return;
label_B5C1:; return;
label_B5C4:; return;
label_B5C7:; return;
label_B5C9:; return;
label_B5CC:; return;
label_B5CF:; return;
label_B5D2:; return;
label_B5D5:; return;
label_B5D8:; return;
label_B5DB:; return;
label_B5DE:; return;
label_B5E1:; return;
label_B5E4:; return;
label_B5E7:; return;
label_B5EA:; return;
label_B5ED:; return;
label_B5F0:; return;
label_B5F3:; return;
label_B5F5:; return;
label_B5F7:; return;
label_B5FA:; return;
label_B5FD:; return;
label_B600:; return;
label_B603:; return;
label_B605:; return;
label_B607:; return;
label_B609:; return;
label_B60B:; return;
label_B60D:; return;
label_B60F:; return;
label_B611:; return;
label_B614:; return;
label_B617:; return;
label_B619:; return;
label_B61C:; return;
label_B61E:; return;
label_B620:; return;
label_B623:; return;
label_B626:; return;
label_B629:; return;
label_B62C:; return;
label_B62F:; return;
label_B631:; return;
label_B633:; return;
label_B636:; return;
label_B639:; return;
label_B63C:; return;
label_B63F:; return;
label_B642:; return;
label_B645:; return;
label_B648:; return;
label_B64B:; return;
label_B64E:; return;
label_B651:; return;
label_B654:; return;
label_B657:; return;
label_B65A:; return;
label_B65D:; return;
label_B660:; return;
label_B663:; return;
label_B665:; return;
label_B668:; return;
label_B66B:; return;
label_B66E:; return;
label_B671:; return;
label_B674:; return;
label_B677:; return;
label_B679:; return;
label_B67C:; return;
label_B67F:; return;
label_B682:; return;
label_B685:; return;
label_B688:; return;
label_B68B:; return;
label_B68E:; return;
label_B691:; return;
label_B693:; return;
label_B695:; return;
label_B698:; return;
label_B69B:; return;
label_B69E:; return;
label_B6A1:; return;
label_B6A3:; return;
label_B6A6:; return;
label_B6A9:; return;
label_B6AC:; return;
label_B6AF:; return;
label_B6B1:; return;
label_B6B3:; return;
label_B6B6:; return;
label_B6B9:; return;
label_B6BC:; return;
label_B6BF:; return;
label_B6C1:; return;
label_B6C4:; return;
label_B6C7:; return;
label_B6CA:; return;
label_B6CD:; return;
label_B6D0:; return;
label_B6D3:; return;
label_B6D6:; return;
label_B6D9:; return;
label_B6DB:; return;
label_B6DE:; return;
label_B6E1:; return;
label_B6E4:; return;
label_B6E7:; return;
label_B6EA:; return;
label_B6ED:; return;
label_B6F0:; return;
label_B6F3:; return;
label_B6F5:; return;
label_B6F8:; return;
label_B6FB:; return;
label_B6FE:; return;
label_B701:; return;
label_B704:; return;
label_B707:; return;
label_B709:; return;
label_B70B:; return;
label_B70D:; return;
label_B70F:; return;
label_B712:; return;
label_B715:; return;
label_B718:; return;
label_B71B:; return;
label_B71D:; return;
label_B71F:; return;
label_B721:; return;
label_B724:; return;
label_B727:; return;
label_B729:; return;
label_B72C:; return;
label_B72F:; return;
label_B732:; return;
label_B735:; return;
label_B738:; return;
label_B73B:; return;
label_B73E:; return;
label_B741:; return;
label_B743:; return;
label_B746:; return;
label_B749:; return;
label_B74C:; return;
label_B74F:; return;
label_B751:; return;
label_B753:; return;
label_B756:; return;
label_B759:; return;
label_B75B:; return;
label_B75E:; return;
label_B761:; return;
label_B764:; return;
label_B767:; return;
label_B769:; return;
label_B76C:; return;
label_B76F:; return;
label_B772:; return;
label_B775:; return;
label_B778:; return;
label_B77B:; return;
label_B77E:; return;
label_B781:; return;
label_B783:; return;
label_B785:; return;
label_B788:; return;
label_B78A:; return;
label_B78D:; return;
label_B78F:; return;
label_B792:; return;
label_B795:; return;
label_B797:; return;
label_B79A:; return;
label_B79D:; return;
label_B79F:; return;
label_B7A2:; return;
label_B7A5:; return;
label_B7A7:; return;
label_B7AA:; return;
label_B7AD:; return;
label_B7B0:; return;
label_B7B3:; return;
label_B7B6:; return;
label_B7B9:; return;
label_B7BC:; return;
label_B7BF:; return;
label_B7C1:; return;
label_B7C3:; return;
label_B7C5:; return;
label_B7C8:; return;
label_B7CB:; return;
label_B7CD:; return;
label_B7D0:; return;
label_B7D3:; return;
label_B7D6:; return;
label_B7D9:; return;
label_B7DC:; return;
label_B7DF:; return;
label_B7E1:; return;
label_B7E4:; return;
label_B7E7:; return;
label_B7EA:; return;
label_B7ED:; return;
label_B7F0:; return;
label_B7F2:; return;
label_B7F5:; return;
label_B7F8:; return;
label_B7FB:; return;
label_B7FD:; return;
label_B7FF:; return;
label_B801:; return;
label_B803:; return;
label_B805:; return;
label_B806:; return;
label_B809:; return;
label_B80A:; return;
label_B80D:; return;
label_B80E:; return;
label_B80F:; return;
label_B810:; return;
label_B811:; return;
label_B813:; return;
label_B814:; return;
label_B815:; return;
label_B816:; return;
label_B817:; return;
label_B819:; return;
label_B81B:; return;
label_B81C:; return;
label_B81D:; return;
label_B81E:; return;
label_B81F:; return;
label_B821:; return;
label_B824:; return;
label_B825:; return;
label_B826:; return;
label_B827:; return;
label_B828:; return;
label_B829:; return;
label_B82A:; return;
label_B82B:; return;
label_B82C:; return;
label_B82F:; return;
label_B830:; return;
label_B831:; return;
label_B832:; return;
label_B833:; return;
label_B834:; return;
label_B835:; return;
label_B836:; return;
label_B837:; return;
label_B838:; return;
label_B839:; return;
label_B83A:; return;
label_B83B:; return;
label_B83C:; return;
label_B83D:; return;
label_B83E:; return;
label_B83F:; return;
label_B840:; return;
label_B841:; return;
label_B842:; return;
label_B843:; return;
label_B844:; return;
label_B845:; return;
label_B846:; return;
label_B847:; return;
label_B848:; return;
label_B849:; return;
label_B84A:; return;
label_B84B:; return;
label_B84C:; return;
label_B84D:; return;
label_B84E:; return;
label_B84F:; return;
label_B851:; return;
label_B852:; return;
label_B853:; return;
label_B854:; return;
label_B855:; return;
label_B857:; return;
label_B858:; return;
label_B859:; return;
label_B85B:; return;
label_B85E:; return;
label_B85F:; return;
label_B860:; return;
label_B861:; return;
label_B862:; return;
label_B863:; return;
label_B865:; return;
label_B866:; return;
label_B867:; return;
label_B868:; return;
label_B869:; return;
label_B86A:; return;
label_B86B:; return;
label_B86C:; return;
label_B86D:; return;
label_B870:; return;
label_B871:; return;
label_B872:; return;
label_B873:; return;
label_B874:; return;
label_B875:; return;
label_B876:; return;
label_B877:; return;
label_B878:; return;
label_B879:; return;
label_B87A:; return;
label_B87B:; return;
label_B87C:; return;
label_B87D:; return;
label_B87E:; return;
label_B87F:; return;
label_B880:; return;
label_B881:; return;
label_B882:; return;
label_B883:; return;
label_B884:; return;
label_B885:; return;
label_B886:; return;
label_B887:; return;
label_B889:; return;
label_B88A:; return;
label_B88B:; return;
label_B88D:; return;
label_B88F:; return;
label_B890:; return;
label_B891:; return;
label_B892:; return;
label_B893:; return;
label_B894:; return;
label_B895:; return;
label_B897:; return;
label_B898:; return;
label_B899:; return;
label_B89A:; return;
label_B89B:; return;
label_B89D:; return;
label_B89E:; return;
label_B89F:; return;
label_B8A0:; return;
label_B8A1:; return;
label_B8A2:; return;
label_B8A3:; return;
label_B8A4:; return;
label_B8A5:; return;
label_B8A6:; return;
label_B8A7:; return;
label_B8A8:; return;
label_B8A9:; return;
label_B8AA:; return;
label_B8AB:; return;
label_B8AC:; return;
label_B8AD:; return;
label_B8AE:; return;
label_B8AF:; return;
label_B8B0:; return;
label_B8B1:; return;
label_B8B2:; return;
label_B8B3:; return;
label_B8B4:; return;
label_B8B5:; return;
label_B8B6:; return;
label_B8B7:; return;
label_B8B8:; return;
label_B8B9:; return;
label_B8BA:; return;
label_B8BB:; return;
label_B8BC:; return;
label_B8BD:; return;
label_B8BE:; return;
label_B8BF:; return;
label_B8C0:; return;
label_B8C1:; return;
label_B8C2:; return;
label_B8C3:; return;
label_B8C4:; return;
label_B8C5:; return;
label_B8C6:; return;
label_B8C7:; return;
label_B8C8:; return;
label_B8C9:; return;
label_B8CA:; return;
label_B8CB:; return;
label_B8CC:; return;
label_B8CD:; return;
label_B8CF:; return;
label_B8D0:; return;
label_B8D1:; return;
label_B8D3:; return;
label_B8D4:; return;
label_B8D7:; return;
label_B8D8:; return;
label_B8D9:; return;
label_B8DA:; return;
label_B8DB:; return;
label_B8DC:; return;
label_B8DD:; return;
label_B8DE:; return;
label_B8DF:; return;
label_B8E0:; return;
label_B8E1:; return;
label_B8E2:; return;
label_B8E3:; return;
label_B8E4:; return;
label_B8E5:; return;
label_B8E6:; return;
label_B8E7:; return;
label_B8E8:; return;
label_B8E9:; return;
label_B8EA:; return;
label_B8EB:; return;
label_B8EC:; return;
label_B8ED:; return;
label_B8EE:; return;
label_B8EF:; return;
label_B8F0:; return;
label_B8F1:; return;
label_B8F2:; return;
label_B8F3:; return;
label_B8F4:; return;
label_B8F5:; return;
label_B8F6:; return;
label_B8F7:; return;
label_B8F8:; return;
label_B8F9:; return;
label_B8FA:; return;
label_B8FB:; return;
label_B8FC:; return;
label_B8FD:; return;
label_B8FE:; return;
label_B8FF:; return;
label_B900:; return;
label_B901:; return;
label_B902:; return;
label_B903:; return;
label_B904:; return;
label_B906:; return;
label_B907:; return;
label_B908:; return;
label_B90B:; return;
label_B90C:; return;
label_B90D:; return;
label_B90E:; return;
label_B90F:; return;
label_B911:; return;
label_B913:; return;
label_B915:; return;
label_B916:; return;
label_B917:; return;
label_B918:; return;
label_B919:; return;
label_B91A:; return;
label_B91B:; return;
label_B91D:; return;
label_B91E:; return;
label_B91F:; return;
label_B920:; return;
label_B921:; return;
label_B922:; return;
label_B923:; return;
label_B924:; return;
label_B925:; return;
label_B926:; return;
label_B927:; return;
label_B928:; return;
label_B929:; return;
label_B92A:; return;
label_B92B:; return;
label_B92C:; return;
label_B92D:; return;
label_B92E:; return;
label_B92F:; return;
label_B931:; return;
label_B932:; return;
label_B933:; return;
label_B934:; return;
label_B935:; return;
label_B936:; return;
label_B937:; return;
label_B938:; return;
label_B939:; return;
label_B93A:; return;
label_B93B:; return;
label_B93C:; return;
label_B93D:; return;
label_B93E:; return;
label_B93F:; return;
label_B942:; return;
label_B943:; return;
label_B944:; return;
label_B946:; return;
label_B947:; return;
label_B948:; return;
label_B949:; return;
label_B94A:; return;
label_B94B:; return;
label_B94C:; return;
label_B94D:; return;
label_B94E:; return;
label_B94F:; return;
label_B952:; return;
label_B955:; return;
label_B956:; return;
label_B957:; return;
label_B958:; return;
label_B959:; return;
label_B95A:; return;
label_B95C:; return;
label_B95D:; return;
label_B95E:; return;
label_B95F:; return;
label_B960:; return;
label_B961:; return;
label_B962:; return;
label_B963:; return;
label_B965:; return;
label_B966:; return;
label_B967:; return;
label_B968:; return;
label_B969:; return;
label_B96A:; return;
label_B96B:; return;
label_B96C:; return;
label_B96D:; return;
label_B96E:; return;
label_B96F:; return;
label_B970:; return;
label_B971:; return;
label_B972:; return;
label_B973:; return;
label_B974:; return;
label_B976:; return;
label_B977:; return;
label_B978:; return;
label_B979:; return;
label_B97A:; return;
label_B97B:; return;
label_B97C:; return;
label_B97D:; return;
label_B97E:; return;
label_B97F:; return;
label_B980:; return;
label_B981:; return;
label_B983:; return;
label_B984:; return;
label_B985:; return;
label_B986:; return;
label_B987:; return;
label_B988:; return;
label_B989:; return;
label_B98A:; return;
label_B98B:; return;
label_B98D:; return;
label_B98E:; return;
label_B98F:; return;
label_B990:; return;
label_B991:; return;
label_B992:; return;
label_B993:; return;
label_B994:; return;
label_B995:; return;
label_B996:; return;
label_B998:; return;
label_B99B:; return;
label_B99C:; return;
label_B99D:; return;
label_B99E:; return;
label_B99F:; return;
label_B9A2:; return;
label_B9A3:; return;
label_B9A4:; return;
label_B9A5:; return;
label_B9A6:; return;
label_B9A7:; return;
label_B9A8:; return;
label_B9A9:; return;
label_B9AA:; return;
label_B9AB:; return;
label_B9AC:; return;
label_B9AD:; return;
label_B9AF:; return;
label_B9B0:; return;
label_B9B1:; return;
label_B9B2:; return;
label_B9B3:; return;
label_B9B4:; return;
label_B9B5:; return;
label_B9B6:; return;
label_B9B7:; return;
label_B9B8:; return;
label_B9B9:; return;
label_B9BA:; return;
label_B9BB:; return;
label_B9BC:; return;
label_B9BD:; return;
label_B9BE:; return;
label_B9BF:; return;
label_B9C0:; return;
label_B9C1:; return;
label_B9C2:; return;
label_B9C3:; return;
label_B9C4:; return;
label_B9C5:; return;
label_B9C6:; return;
label_B9C7:; return;
label_B9C8:; return;
label_B9C9:; return;
label_B9CA:; return;
label_B9CB:; return;
label_B9CE:; return;
label_B9CF:; return;
label_B9D0:; return;
label_B9D1:; return;
label_B9D4:; return;
label_B9D5:; return;
label_B9D6:; return;
label_B9D8:; return;
label_B9D9:; return;
label_B9DA:; return;
label_B9DB:; return;
label_B9DC:; return;
label_B9DD:; return;
label_B9DE:; return;
label_B9DF:; return;
label_B9E0:; return;
label_B9E1:; return;
label_B9E2:; return;
label_B9E3:; return;
label_B9E4:; return;
label_B9E5:; return;
label_B9E6:; return;
label_B9E7:; return;
label_B9E8:; return;
label_B9E9:; return;
label_B9EA:; return;
label_B9EB:; return;
label_B9EC:; return;
label_B9ED:; return;
label_B9EE:; return;
label_B9EF:; return;
label_B9F0:; return;
label_B9F1:; return;
label_B9F2:; return;
label_B9F3:; return;
label_B9F4:; return;
label_B9F5:; return;
label_B9F6:; return;
label_B9F7:; return;
label_B9F8:; return;
label_B9F9:; return;
label_B9FA:; return;
label_B9FB:; return;
label_B9FC:; return;
label_B9FD:; return;
label_B9FE:; return;
label_B9FF:; return;
label_BA00:; return;
label_BA03:; return;
label_BA04:; return;
label_BA05:; return;
label_BA07:; return;
label_BA08:; return;
label_BA09:; return;
label_BA0A:; return;
label_BA0B:; return;
label_BA0D:; return;
label_BA0E:; return;
label_BA0F:; return;
label_BA11:; return;
label_BA14:; return;
label_BA15:; return;
label_BA16:; return;
label_BA17:; return;
label_BA19:; return;
label_BA1B:; return;
label_BA1C:; return;
label_BA1D:; return;
label_BA1E:; return;
label_BA20:; return;
label_BA21:; return;
label_BA23:; return;
label_BA24:; return;
label_BA25:; return;
label_BA26:; return;
label_BA27:; return;
label_BA28:; return;
label_BA29:; return;
label_BA2A:; return;
label_BA2B:; return;
label_BA2C:; return;
label_BA2D:; return;
label_BA2E:; return;
label_BA2F:; return;
label_BA30:; return;
label_BA31:; return;
label_BA32:; return;
label_BA33:; return;
label_BA34:; return;
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
label_BA87:; return;
label_BA88:; return;
label_BA89:; return;
label_BA8A:; return;
label_BA8C:; return;
label_BA8E:; return;
label_BA90:; return;
label_BA91:; return;
label_BA93:; return;
label_BA95:; return;
label_BA96:; return;
label_BA99:; return;
label_BA9A:; return;
label_BA9B:; return;
label_BA9C:; return;
label_BA9D:; return;
label_BA9E:; return;
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
label_BAAB:; return;
label_BAAC:; return;
label_BAAD:; return;
label_BAAE:; return;
label_BAAF:; return;
label_BAB0:; return;
label_BAB1:; return;
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
label_BB02:; return;
label_BB03:; return;
label_BB05:; return;
label_BB07:; return;
label_BB09:; return;
label_BB0A:; return;
label_BB0B:; return;
label_BB0C:; return;
label_BB0E:; return;
label_BB0F:; return;
label_BB11:; return;
label_BB13:; return;
label_BB15:; return;
label_BB16:; return;
label_BB17:; return;
label_BB18:; return;
label_BB19:; return;
label_BB1B:; return;
label_BB1D:; return;
label_BB1F:; return;
label_BB21:; return;
label_BB22:; return;
label_BB23:; return;
label_BB24:; return;
label_BB25:; return;
label_BB26:; return;
label_BB27:; return;
label_BB28:; return;
label_BB29:; return;
label_BB2A:; return;
label_BB2B:; return;
label_BB2C:; return;
label_BB2D:; return;
label_BB2E:; return;
label_BB31:; return;
label_BB32:; return;
label_BB33:; return;
label_BB34:; return;
label_BB35:; return;
label_BB36:; return;
label_BB39:; return;
label_BB3A:; return;
label_BB3B:; return;
label_BB3D:; return;
label_BB3E:; return;
label_BB3F:; return;
label_BB40:; return;
label_BB41:; return;
label_BB42:; return;
label_BB43:; return;
label_BB44:; return;
label_BB47:; return;
label_BB48:; return;
label_BB49:; return;
label_BB4A:; return;
label_BB4B:; return;
label_BB4C:; return;
label_BB4E:; return;
label_BB50:; return;
label_BB51:; return;
label_BB52:; return;
label_BB53:; return;
label_BB54:; return;
label_BB55:; return;
label_BB56:; return;
label_BB57:; return;
label_BB58:; return;
label_BB5A:; return;
label_BB5B:; return;
label_BB5C:; return;
label_BB5D:; return;
label_BB5E:; return;
label_BB61:; return;
label_BB62:; return;
label_BB63:; return;
label_BB64:; return;
label_BB65:; return;
label_BB66:; return;
label_BB67:; return;
label_BB68:; return;
}

void func_8802_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8802_b13");
#endif
label_8802:;
    /* $8802: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0x4002 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8805:;
    /* $8805: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8806:;
    /* $8806: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8808:;
    /* $8808: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8809:;
    /* $8809: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_880A:;
    /* $880A: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_880C:;
    /* $880C: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_880E:;
    /* $880E: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8810:;
    /* $8810: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8812:;
    /* $8812: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8814:;
    /* $8814: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8816:;
    /* $8816: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8817:;
    /* $8817: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8818:;
    /* $8818: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_881A:;
    /* $881A: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x42; FLAG_NZ(g_cpu.A);
label_881C:;
    /* $881C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x4C02, -1); return;
}

void func_A802_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A802_b13");
#endif
label_A802:;
    /* $A802: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB202 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A807:;
    /* $A807: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A808:;
    /* $A808: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A80A:;
    /* $A80A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A80C:;
    /* $A80C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A80E:;
    /* $A80E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0801 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A811:;
    /* $A811: DC */ maybe_trigger_vblank(4); (void)nes_read((0x02A0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A814:;
    /* $A814: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xA602); FLAG_NZ(g_cpu.Y);
label_A817:;
    /* $A817: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A818:;
    /* $A818: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A81A:;
    /* $A81A: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A81D:;
    /* $A81D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A81E:;
    /* $A81E: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A820:;
    /* $A820: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A822:;
    /* $A822: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A824:;
    /* $A824: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xDC; FLAG_NZ(g_cpu.A);
label_A826:;
    /* $A826: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_A828:;
    /* $A828: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xA202); FLAG_NZ(g_cpu.Y);
label_A82B:;
    /* $A82B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82C:;
    /* $A82C: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A82E:;
    /* $A82E: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A830:;
    /* $A830: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A831:;
    /* $A831: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A832:;
    /* $A832: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A834:;
    /* $A834: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A836:; /* test_facing_change */
    /* $A836: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A838:;
    /* $A838: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A83A:;
    /* $A83A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A83B:;
    /* $A83B: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x02A0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A83E:;
    /* $A83E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A840:;
    /* $A840: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A841:;
    /* $A841: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A842:;
    /* $A842: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A844:;
    /* $A844: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB602 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A847:;
    /* $A847: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A848:;
    /* $A848: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84A:;
    /* $A84A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A84C:;
    /* $A84C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A84E:;
    /* $A84E: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xBA01); FLAG_NZ(g_cpu.X);
label_A851:;
    /* $A851: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A853:;
    /* $A853: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xA0; g_cpu.C=(g_cpu.X>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_A855:;
    /* $A855: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A856:;
    /* $A856: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A858:;
    /* $A858: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A85A:;
    /* $A85A: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A85C:;
    /* $A85C: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_A85F:;
    /* $A85F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A860:;
    /* $A860: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A862:;
    /* $A862: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A864:;
    /* $A864: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A866:;
    /* $A866: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xC1 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A868:;
    /* $A868: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xDC; FLAG_NZ(g_cpu.A);
label_A86A:;
    /* $A86A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_A86C:;
    /* $A86C: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A86D:;
    /* $A86D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A86E:;
    /* $A86E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A870:;
    /* $A870: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A872:;
    /* $A872: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A873:;
    /* $A873: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A874:;
    /* $A874: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_A875:;
    /* $A875: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A876:;
    /* $A876: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A878:;
    /* $A878: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A87A:;
    /* $A87A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A87C:;
    /* $A87C: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A87E:;
    /* $A87E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xDC; FLAG_NZ(g_cpu.A);
label_A880:;
    /* $A880: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_A882:;
    /* $A882: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A883:;
    /* $A883: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A884:;
    /* $A884: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_A886:;
    /* $A886: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A888:;
    /* $A888: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_A889:;
    /* $A889: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A88A:;
    /* $A88A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x02 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A88C:;
    /* $A88C: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A88E:;
    /* $A88E: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A890:;
    /* $A890: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A892:;
    /* $A892: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A894:;
    /* $A894: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xCE; FLAG_NZ(g_cpu.A);
label_A896:;
    /* $A896: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A898:;
    /* $A898: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A899:;
    /* $A899: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A89A:;
    /* $A89A: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x02)?1:0; g_cpu.X=(t-0x02)&0xFF; FLAG_NZ(g_cpu.X); }
label_A89C:;
    /* $A89C: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDA02 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A89F:;
    /* $A89F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A0:;
    /* $A8A0: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xE902 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A8A3:;
    /* $A8A3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A4:;
    /* $A8A4: EA */ maybe_trigger_vblank(2); /* NOP */
label_A8A5:;
    /* $A8A5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8A6:;
    /* $A8A6: EB */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8A8:;
    /* $A8A8: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0901); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8AB:;
    /* $A8AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A86D;
    }
label_A8AD:;
    /* $A8AD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8AE:;
    /* $A8AE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8AF:;
    /* $A8AF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B0:;
    /* $A8B0: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8B2:;
    /* $A8B2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8B4:;
    /* $A8B4: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8B6:;
    /* $A8B6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8B7:;
    /* $A8B7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8B8:;
    /* $A8B8: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A8BA:;
    /* $A8BA: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8BC:;
    /* $A8BC: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xAB02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8BF:;
    /* $A8BF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8C1:;
    /* $A8C1: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A8C2:;
    /* $A8C2: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A8C4:;
    /* $A8C4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8C5:;
    /* $A8C5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8C6:;
    /* $A8C6: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8C8:;
    /* $A8C8: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCD02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8CB:;
    /* $A8CB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8CC:;
    /* $A8CC: CE */ maybe_trigger_vblank(6); { uint16_t a=0xDC02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8CF:;
    /* $A8CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D0:;
    /* $A8D0: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDE02 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8D3:;
    /* $A8D3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8D4:;
    /* $A8D4: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A8D6:;
    /* $A8D6: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xD4; FLAG_NZ(g_cpu.A);
label_A8D8:;
    /* $A8D8: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A8DA:;
    /* $A8DA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8DB:;
    /* $A8DB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8DC:;
    /* $A8DC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A8DE:;
    /* $A8DE: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E0:;
    /* $A8E0: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A8E2:;
    /* $A8E2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8E3:;
    /* $A8E3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8E4:;
    /* $A8E4: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E6:;
    /* $A8E6: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A8E8:;
    /* $A8E8: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A8E9:;
    /* $A8E9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8EA:;
    /* $A8EA: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A8EC:;
    /* $A8EC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xD6; FLAG_NZ(g_cpu.A);
label_A8EE:;
    /* $A8EE: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A8F0:;
    /* $A8F0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8F1:;
    /* $A8F1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8F2:;
    /* $A8F2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A8F4:;
    /* $A8F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A8F8;
label_A8F6:;
    /* $A8F6: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8F8:;
    /* $A8F8: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8FA:;
    /* $A8FA: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A8FC:;
    /* $A8FC: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8FE:;
    /* $A8FE: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A900:; /* shadow_damage_table */
    /* $A900: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A902:;
    /* $A902: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A903:;
    /* $A903: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xC0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A905:;
    /* $A905: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A906:;
    /* $A906: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A907:;
    /* $A907: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A908:;
    /* $A908: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A90A:;
    /* $A90A: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A90C:;
    /* $A90C: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A90E:;
    /* $A90E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A910:;
    /* $A910: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A912:;
    /* $A912: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A914:;
    /* $A914: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A916:;
    /* $A916: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A91A:;
    /* $A91A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xD8; FLAG_NZ(g_cpu.A);
label_A91C:;
    /* $A91C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A91E:;
    /* $A91E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A91F:;
    /* $A91F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A920:;
    /* $A920: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A922:;
    /* $A922: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A926;
label_A924:;
    /* $A924: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A926:;
    /* $A926: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A927:;
    /* $A927: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A928:;
    /* $A928: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A92A:;
    /* $A92A: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A92C:;
    /* $A92C: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A92E:;
    /* $A92E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A930:;
    /* $A930: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xDA; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A932:;
    /* $A932: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A934:;
    /* $A934: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A935:;
    /* $A935: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A936:;
    /* $A936: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A938:;
    /* $A938: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A93A:;
    /* $A93A: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A93C:;
    /* $A93C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A93E:;
    /* $A93E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE02 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A941:;
    /* $A941: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A942:;
    /* $A942: EE */ maybe_trigger_vblank(6); { uint16_t a=0xE302; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A945:;
    /* $A945: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A947:;
    /* $A947: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A94A:;
    /* $A94A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xD8; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A94C:;
    /* $A94C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A94E:;
    /* $A94E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A94F:;
    /* $A94F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A950:;
    /* $A950: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A952:;
    /* $A952: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A956;
label_A954:;
    /* $A954: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A956:;
    /* $A956: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A957:;
    /* $A957: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A958:;
    /* $A958: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A959:;
    /* $A959: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A95A:;
    /* $A95A: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFA02 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95D:;
    /* $A95D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A95E:;
    /* $A95E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A960:;
    /* $A960: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A963:;
    /* $A963: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A964:;
    /* $A964: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xDC; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A966:;
    /* $A966: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A96A;
label_A968:;
    /* $A968: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A969:;
    /* $A969: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A96A:;
    /* $A96A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xF102; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A96D:;
    /* $A96D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A96E:;
    /* $A96E: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_A96F:;
    /* $A96F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A970:;
    /* $A970: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A972:;
    /* $A972: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xCF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A975:;
    /* $A975: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A976:;
    /* $A976: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xAB02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A979:;
    /* $A979: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A97C:;
    /* $A97C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x8A02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A97F:;
    /* $A97F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x02F1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A982:;
    /* $A982: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A984:;
    /* $A984: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A986:;
    /* $A986: CF */ maybe_trigger_vblank(6); { uint16_t a=0xAC02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A989:;
    /* $A989: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98A:;
    /* $A98A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A98D:;
    /* $A98D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98E:;
    /* $A98E: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xEE02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A991:;
    /* $A991: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A992:;
    /* $A992: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A996;
label_A994:;
    /* $A994: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A996:;
    /* $A996: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A997:;
    /* $A997: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x019B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A99A:;
    /* $A99A: 99 */ maybe_trigger_vblank(5); nes_write((0x9A01 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A99D:;
    /* $A99D: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x99 + g_cpu.X) & 0xFF), g_cpu.A);
label_A99F:;
    /* $A99F: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x97 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A1:;
    /* $A9A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x9A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x97 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A5:;
    /* $A9A5: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A7:;
    /* $A9A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0146); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A9AE:;
    /* $A9AE: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x41; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B0:;
    /* $A9B0: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x81; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B2:;
    /* $A9B2: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xC1; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9B6:;
    /* $A9B6: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B8:;
    /* $A9B8: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x41 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9BA:;
    /* $A9BA: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9BC:;
    /* $A9BC: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0xC1 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9BE:;
    /* $A9BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BE); return;
}

void func_9785_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b13");
#endif
label_9785:;
    /* $9785: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xDA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9787:;
    /* $9787: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9788:;
    /* $9788: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xE802 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_978B:;
    /* $978B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_978D:;
    /* $978D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_978E:;
    /* $978E: EA */ maybe_trigger_vblank(2); /* NOP */
label_978F:;
    /* $978F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9790:;
    /* $9790: EB */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9792:;
    /* $9792: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCD01); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9795:;
    /* $9795: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9797:;
    /* $9797: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9798:;
    /* $9798: CF */ maybe_trigger_vblank(6); { uint16_t a=0x0B02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_979B:;
    /* $979B: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_979C:;
    /* $979C: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDD02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_979F:;
    /* $979F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_97A0:;
    /* $97A0: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xEC02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_97A3:;
    /* $97A3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_97A4:;
    /* $97A4: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEE02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97A7:;
    /* $97A7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_97A8:;
    /* $97A8: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xEF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_97AB:;
    /* $97AB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_97AC:;
    /* $97AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_97B0;
label_97AE:;
    /* $97AE: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97B0:;
    /* $97B0: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_97B1:;
    /* $97B1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_97B2:;
    /* $97B2: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97B4:;
    /* $97B4: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xB4; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_97B6:;
    /* $97B6: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF042); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_97B9:;
    /* $97B9: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_97BA:;
    /* $97BA: EF */ maybe_trigger_vblank(6); { uint16_t a=0xDF42; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97BD:;
    /* $97BD: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_97BE:;
    /* $97BE: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x42) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97C0:;
    /* $97C0: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_97C1:;
    /* $97C1: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_97C2:;
    /* $97C2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDD42 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_97C5:;
    /* $97C5: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_97C6:;
    /* $97C6: DC */ maybe_trigger_vblank(4); (void)nes_read((0xEE42 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_97C9:;
    /* $97C9: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_97CA:;
    /* $97CA: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF142); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_97CD:;
    /* $97CD: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_97CE:;
    /* $97CE: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xB6; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_97D0:;
    /* $97D0: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC2) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_97D2:;
    /* $97D2: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_97D3:;
    /* $97D3: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97D5:;
    /* $97D5: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97D7:;
    /* $97D7: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97D9:;
    /* $97D9: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97DB:;
    /* $97DB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97DD:;
    /* $97DD: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97DF:;
    /* $97DF: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97E1:;
    /* $97E1: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97E3:;
    /* $97E3: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97E5:;
    /* $97E5: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97E7:;
    /* $97E7: C2 */ maybe_trigger_vblank(2); /* NOP */
label_97E9:;
    /* $97E9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_97EA:;
    /* $97EA: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_97EB:;
    /* $97EB: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97ED:;
    /* $97ED: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97EF:;
    /* $97EF: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97F1:;
    /* $97F1: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97F3:;
    /* $97F3: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97F5:;
    /* $97F5: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97F7:;
    /* $97F7: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97F9:;
    /* $97F9: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97FB:;
    /* $97FB: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97FD:;
    /* $97FD: 82 */ maybe_trigger_vblank(2); /* NOP */
label_97FF:;
    /* $97FF: 82 */ maybe_trigger_vblank(2); /* NOP */
label_9801:;
    /* $9801: 82 */ maybe_trigger_vblank(2); /* NOP */
label_9803:;
    /* $9803: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xE0 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_9805:;
    /* $9805: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9807:;
    /* $9807: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9809:;
    /* $9809: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_980B:;
    /* $980B: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_980D:;
    /* $980D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_980F:;
    /* $980F: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9811:;
    /* $9811: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_9812:;
    /* $9812: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9814:;
    /* $9814: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9816:;
    /* $9816: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9818:;
    /* $9818: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_981A:;
    /* $981A: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_981C:;
    /* $981C: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_981E:;
    /* $981E: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9820:;
    /* $9820: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xAA; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9822:;
    /* $9822: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9824:;
    /* $9824: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9826:;
    /* $9826: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9828:;
    /* $9828: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_982A:;
    /* $982A: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_982B:;
    /* $982B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_982C:;
    /* $982C: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_982E:;
    /* $982E: E2 */ maybe_trigger_vblank(2); /* NOP */
label_9830:;
    /* $9830: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xBC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9832:;
    /* $9832: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9834:;
    /* $9834: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9836:;
    /* $9836: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9838:;
    /* $9838: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_983A:;
    /* $983A: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_983C:;
    /* $983C: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_983E:;
    /* $983E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9840:;
    /* $9840: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9842:;
    /* $9842: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9844:;
    /* $9844: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_9846:;
    /* $9846: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9848:;
    /* $9848: C2 */ maybe_trigger_vblank(2); /* NOP */
label_984A:;
    /* $984A: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_984C:;
    /* $984C: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_984E:;
    /* $984E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9850:;
    /* $9850: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9852:;
    /* $9852: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9854:;
    /* $9854: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC902 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9857:;
    /* $9857: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9858:;
    /* $9858: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_985A:;
    /* $985A: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_985B:;
    /* $985B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_985C:;
    /* $985C: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_985E:;
    /* $985E: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xCB02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9861:;
    /* $9861: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9862:;
    /* $9862: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xC302); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9865:;
    /* $9865: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9866:;
    /* $9866: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCE02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9869:;
    /* $9869: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_986A:;
    /* $986A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_986C:;
    /* $986C: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_986E:;
    /* $986E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC902 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9871:;
    /* $9871: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9872:;
    /* $9872: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9874:;
    /* $9874: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9875:;
    /* $9875: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9876:;
    /* $9876: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9878:;
    /* $9878: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_987A:;
    /* $987A: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_987C:;
    /* $987C: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_987E:;
    /* $987E: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9880:;
    /* $9880: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_9882:;
    /* $9882: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_9883:;
    /* $9883: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9884:;
    /* $9884: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9886:;
    /* $9886: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9888:;
    /* $9888: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC902 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_988B:;
    /* $988B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_988C:;
    /* $988C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_988E:;
    /* $988E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_988F:;
    /* $988F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9890:;
    /* $9890: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xF9C0); FLAG_NZ(g_cpu.A);
label_9893:;
    /* $9893: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9895:;
    /* $9895: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9897:;
    /* $9897: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9898:;
    /* $9898: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_989A:;
    /* $989A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE03 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_989D:;
    /* $989D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_989E:;
    /* $989E: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98A0:;
    /* $98A0: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_98A2:;
    /* $98A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC902 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98A5:;
    /* $98A5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98A6:;
    /* $98A6: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98A8:;
    /* $98A8: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98A9:;
    /* $98A9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98AA:;
    /* $98AA: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFC03 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98AD:;
    /* $98AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98AF:;
    /* $98AF: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xF4; g_cpu.C=(g_cpu.Y>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_98B1:;
    /* $98B1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98B2:;
    /* $98B2: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98B4:;
    /* $98B4: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98B6:;
    /* $98B6: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_98B8:;
    /* $98B8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_98B9:;
    /* $98B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98BA:;
    /* $98BA: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_98BB:;
    /* $98BB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98BC:;
    /* $98BC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98BE:;
    /* $98BE: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_98C0:;
    /* $98C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC902 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98C3:;
    /* $98C3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98C4:;
    /* $98C4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98C6:;
    /* $98C6: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98C7:;
    /* $98C7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98C8:;
    /* $98C8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98CA:;
    /* $98CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x18CF), 13); return; }
label_98CC:;
    /* $98CC: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98CE:;
    /* $98CE: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98D0:;
    /* $98D0: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98D2:;
    /* $98D2: 89 */ maybe_trigger_vblank(2); /* NOP */
label_98D4:;
    /* $98D4: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xED01); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98D7:;
    /* $98D7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98D9:;
    /* $98D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98DB:;
    /* $98DB: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98DD:;
    /* $98DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98DF:;
    /* $98DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98E1:;
    /* $98E1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xF3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98E3:;
    /* $98E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98E5:;
    /* $98E5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98E6:;
    /* $98E6: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_98E7:;
    /* $98E7: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_98E8:;
    /* $98E8: 89 */ maybe_trigger_vblank(2); /* NOP */
label_98EA:;
    /* $98EA: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98EC:;
    /* $98EC: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98EE:;
    /* $98EE: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98F0:;
    /* $98F0: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x41 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98F2:;
    /* $98F2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98F4:;
    /* $98F4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEF01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98F7:;
    /* $98F7: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xEB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98F9:;
    /* $98F9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98FB:;
    /* $98FB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98FC:;
    /* $98FC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x42 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98FE:;
    /* $98FE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_98FF:;
    /* $98FF: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x016F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9902:;
    /* $9902: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9903:; return;
label_9905:; return;
label_9907:; return;
label_9909:; return;
label_990B:; return;
label_990D:; return;
label_990F:; return;
label_9911:; return;
label_9913:; return;
label_9916:; return;
label_9918:; return;
label_991A:; return;
label_991C:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992A:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9931:; return;
label_9934:; return;
label_9935:; return;
label_9938:; return;
label_993A:; return;
label_993C:; return;
label_993E:; return;
label_993F:; return;
label_9941:; return;
label_9943:; return;
label_9944:; return;
label_9947:; return;
label_9948:; return;
label_994A:; return;
label_994C:; return;
label_994D:; return;
label_994E:; return;
label_9951:; return;
label_9952:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995D:; return;
label_995F:; return;
label_9961:; return;
label_9963:; return;
label_9964:; return;
label_9967:; return;
label_9969:; return;
label_996B:; return;
label_996D:; return;
label_996E:; return;
label_9970:; return;
label_9972:; return;
label_9973:; return;
label_9974:; return;
label_9977:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9980:; return;
label_9982:; return;
label_9984:; return;
label_9986:; return;
label_9988:; return;
label_998A:; return;
label_998C:; return;
label_998E:; return;
label_9990:; return;
label_9992:; return;
label_9994:; return;
label_9996:; return;
label_9998:; return;
label_9999:; return;
label_999B:; return;
label_999C:; return;
label_999E:; return;
label_99A0:; return;
label_99A1:; return;
label_99A2:; return;
label_99A5:; return;
label_99A6:; return;
label_99A9:; return;
label_99AA:; return;
label_99AD:; return;
label_99AF:; return;
label_99B1:; return;
label_99B3:; return;
label_99B5:; return;
label_99B7:; return;
label_99B8:; return;
label_99B9:; return;
label_99BA:; return;
label_99BC:; return;
label_99BF:; return;
label_99C0:; return;
label_99C2:; return;
label_99C4:; return;
label_99C5:; return;
label_99C6:; return;
label_99C8:; return;
label_99CA:; return;
label_99CB:; return;
label_99CC:; return;
label_99CF:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E1:; return;
label_99E3:; return;
label_99E5:; return;
label_99E6:; return;
label_99E9:; return;
label_99EA:; return;
label_99EC:; return;
label_99EE:; return;
label_99EF:; return;
label_99F0:; return;
label_99F3:; return;
label_99F4:; return;
label_99F7:; return;
label_99F9:; return;
label_99FB:; return;
label_99FD:; return;
label_99FF:; return;
label_9A01:; return;
label_9A03:; return;
label_9A05:; return;
label_9A06:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A0F:; return;
label_9A10:; return;
label_9A12:; return;
label_9A14:; return;
label_9A15:; return;
label_9A16:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A21:; return;
label_9A22:; return;
label_9A24:; return;
label_9A26:; return;
label_9A28:; return;
label_9A2A:; return;
label_9A2B:; return;
label_9A2E:; return;
label_9A30:; return;
label_9A33:; return;
label_9A34:; return;
label_9A35:; return;
label_9A36:; return;
label_9A37:; return;
label_9A38:; return;
label_9A3A:; return;
label_9A3C:; return;
label_9A3E:; return;
label_9A40:; return;
label_9A42:; return;
label_9A44:; return;
label_9A45:; return;
label_9A46:; return;
label_9A48:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4B:; return;
label_9A4C:; return;
label_9A4E:; return;
label_9A50:; return;
label_9A51:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5D:; return;
label_9A5F:; return;
label_9A61:; return;
label_9A63:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6F:; return;
label_9A71:; return;
label_9A73:; return;
label_9A74:; return;
label_9A77:; return;
label_9A78:; return;
label_9A7B:; return;
label_9A7C:; return;
label_9A7E:; return;
label_9A80:; return;
label_9A82:; return;
label_9A84:; return;
label_9A85:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8D:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A91:; return;
label_9A92:; return;
label_9A95:; return;
label_9A97:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9B:; return;
label_9A9C:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA2:; return;
label_9AA3:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA8:; return;
label_9AA9:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AAF:; return;
label_9AB0:; return;
label_9AB1:; return;
label_9AB2:; return;
label_9AB3:; return;
label_9AB4:; return;
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
label_9AC3:; return;
label_9AC4:; return;
label_9AC5:; return;
label_9AC6:; return;
label_9AC9:; return;
label_9ACA:; return;
label_9ACB:; return;
label_9ACC:; return;
label_9ACD:; return;
label_9ACE:; return;
label_9ACF:; return;
label_9AD1:; return;
label_9AD2:; return;
label_9AD5:; return;
label_9AD6:; return;
label_9AD7:; return;
label_9AD8:; return;
label_9AD9:; return;
label_9ADA:; return;
label_9ADB:; return;
label_9ADC:; return;
label_9ADD:; return;
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
label_9B01:; return;
label_9B02:; return;
label_9B04:; return;
label_9B05:; return;
label_9B06:; return;
label_9B07:; return;
label_9B08:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0C:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B10:; return;
label_9B11:; return;
label_9B12:; return;
label_9B13:; return;
label_9B14:; return;
label_9B15:; return;
label_9B18:; return;
label_9B19:; return;
label_9B1B:; return;
label_9B1C:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B20:; return;
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
label_9B2D:; return;
label_9B2E:; return;
label_9B2F:; return;
label_9B30:; return;
label_9B31:; return;
label_9B33:; return;
label_9B34:; return;
label_9B35:; return;
label_9B36:; return;
label_9B37:; return;
label_9B38:; return;
label_9B39:; return;
label_9B3C:; return;
label_9B3D:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B40:; return;
label_9B42:; return;
label_9B43:; return;
label_9B46:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4A:; return;
label_9B4B:; return;
label_9B4C:; return;
label_9B4D:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B52:; return;
label_9B53:; return;
label_9B54:; return;
label_9B55:; return;
label_9B57:; return;
label_9B59:; return;
label_9B5A:; return;
label_9B5B:; return;
label_9B5C:; return;
label_9B5D:; return;
label_9B5E:; return;
label_9B5F:; return;
label_9B60:; return;
label_9B61:; return;
label_9B62:; return;
label_9B63:; return;
label_9B64:; return;
label_9B65:; return;
label_9B66:; return;
label_9B67:; return;
label_9B68:; return;
label_9B69:; return;
label_9B6A:; return;
label_9B6B:; return;
label_9B6C:; return;
label_9B6D:; return;
label_9B6E:; return;
label_9B6F:; return;
label_9B70:; return;
label_9B71:; return;
label_9B72:; return;
label_9B73:; return;
label_9B74:; return;
label_9B75:; return;
label_9B76:; return;
label_9B77:; return;
label_9B78:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B7F:; return;
label_9B80:; return;
label_9B81:; return;
label_9B82:; return;
label_9B83:; return;
label_9B84:; return;
label_9B85:; return;
label_9B86:; return;
label_9B87:; return;
label_9B88:; return;
label_9B89:; return;
label_9B8B:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B91:; return;
label_9B92:; return;
label_9B94:; return;
label_9B95:; return;
label_9B97:; return;
label_9B98:; return;
label_9B99:; return;
label_9B9A:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9B9F:; return;
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
label_9BC3:; return;
label_9BC4:; return;
label_9BC5:; return;
label_9BC6:; return;
label_9BC7:; return;
label_9BC8:; return;
label_9BC9:; return;
label_9BCB:; return;
label_9BCC:; return;
label_9BCD:; return;
label_9BCE:; return;
label_9BCF:; return;
label_9BD0:; return;
label_9BD1:; return;
label_9BD2:; return;
label_9BD5:; return;
label_9BD6:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDC:; return;
label_9BDD:; return;
label_9BE0:; return;
label_9BE1:; return;
label_9BE2:; return;
label_9BE3:; return;
label_9BE4:; return;
label_9BE5:; return;
label_9BE6:; return;
label_9BE7:; return;
label_9BE8:; return;
label_9BE9:; return;
label_9BEA:; return;
label_9BEB:; return;
label_9BEC:; return;
label_9BED:; return;
label_9BEE:; return;
label_9BEF:; return;
label_9BF0:; return;
label_9BF1:; return;
label_9BF2:; return;
label_9BF3:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF7:; return;
label_9BF8:; return;
label_9BF9:; return;
label_9BFA:; return;
label_9BFB:; return;
label_9BFC:; return;
label_9BFD:; return;
label_9BFE:; return;
label_9C01:; return;
label_9C03:; return;
label_9C05:; return;
label_9C07:; return;
label_9C09:; return;
label_9C0B:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C11:; return;
label_9C13:; return;
label_9C15:; return;
label_9C17:; return;
label_9C19:; return;
label_9C1B:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2B:; return;
label_9C2C:; return;
label_9C2F:; return;
label_9C31:; return;
label_9C33:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C43:; return;
label_9C45:; return;
label_9C47:; return;
label_9C48:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C53:; return;
label_9C56:; return;
label_9C58:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5F:; return;
label_9C61:; return;
label_9C64:; return;
label_9C66:; return;
label_9C68:; return;
label_9C6A:; return;
label_9C6C:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C78:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7D:; return;
label_9C7F:; return;
label_9C80:; return;
label_9C81:; return;
label_9C83:; return;
label_9C86:; return;
label_9C88:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C90:; return;
label_9C92:; return;
label_9C93:; return;
label_9C96:; return;
label_9C97:; return;
label_9C99:; return;
label_9C9A:; return;
label_9C9D:; return;
label_9C9F:; return;
label_9CA0:; return;
label_9CA1:; return;
label_9CA2:; return;
label_9CA3:; return;
label_9CA4:; return;
label_9CA7:; return;
label_9CA9:; return;
label_9CAB:; return;
label_9CAE:; return;
label_9CB1:; return;
label_9CB4:; return;
label_9CB7:; return;
label_9CBA:; return;
label_9CBD:; return;
label_9CC0:; return;
label_9CC3:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCD:; return;
label_9CCF:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD3:; return;
label_9CD6:; return;
label_9CD9:; return;
label_9CDC:; return;
label_9CDF:; return;
label_9CE2:; return;
label_9CE5:; return;
label_9CE8:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF7:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFE:; return;
label_9D01:; return;
label_9D04:; return;
label_9D07:; return;
label_9D0A:; return;
label_9D0C:; return;
label_9D0F:; return;
label_9D12:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1B:; return;
label_9D1E:; return;
label_9D21:; return;
label_9D23:; return;
label_9D25:; return;
label_9D28:; return;
label_9D29:; return;
label_9D2A:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2E:; return;
label_9D2F:; return;
label_9D30:; return;
label_9D31:; return;
label_9D33:; return;
label_9D34:; return;
label_9D36:; return;
label_9D37:; return;
label_9D38:; return;
label_9D39:; return;
label_9D3A:; return;
label_9D3B:; return;
label_9D3C:; return;
label_9D3D:; return;
label_9D3E:; return;
label_9D3F:; return;
label_9D40:; return;
label_9D41:; return;
label_9D43:; return;
label_9D44:; return;
label_9D47:; return;
label_9D48:; return;
label_9D49:; return;
label_9D4B:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D4E:; return;
label_9D4F:; return;
label_9D51:; return;
label_9D52:; return;
label_9D53:; return;
label_9D54:; return;
label_9D55:; return;
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
label_9D62:; return;
label_9D63:; return;
label_9D64:; return;
label_9D66:; return;
label_9D67:; return;
label_9D69:; return;
label_9D6A:; return;
label_9D6B:; return;
label_9D6C:; return;
label_9D6D:; return;
label_9D6E:; return;
label_9D6F:; return;
label_9D70:; return;
label_9D71:; return;
label_9D72:; return;
label_9D73:; return;
label_9D74:; return;
label_9D75:; return;
label_9D76:; return;
label_9D77:; return;
label_9D78:; return;
label_9D79:; return;
label_9D7A:; return;
label_9D7C:; return;
label_9D7D:; return;
label_9D7E:; return;
label_9D7F:; return;
label_9D81:; return;
label_9D82:; return;
label_9D83:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8A:; return;
label_9D8C:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D8F:; return;
label_9D90:; return;
label_9D92:; return;
label_9D93:; return;
label_9D94:; return;
label_9D96:; return;
label_9D98:; return;
label_9D99:; return;
label_9D9A:; return;
label_9D9B:; return;
label_9D9C:; return;
label_9D9D:; return;
label_9D9E:; return;
label_9D9F:; return;
label_9DA0:; return;
label_9DA2:; return;
label_9DA3:; return;
label_9DA4:; return;
label_9DA5:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAA:; return;
label_9DAB:; return;
label_9DAC:; return;
label_9DAE:; return;
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
label_9DC1:; return;
label_9DC3:; return;
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
label_9DD2:; return;
label_9DD3:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD6:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DD9:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDD:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE3:; return;
label_9DE4:; return;
label_9DE5:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEA:; return;
label_9DEB:; return;
label_9DEC:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DEF:; return;
label_9DF0:; return;
label_9DF2:; return;
label_9DF3:; return;
label_9DF4:; return;
label_9DF5:; return;
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
label_9E02:; return;
label_9E03:; return;
label_9E04:; return;
label_9E05:; return;
label_9E06:; return;
label_9E07:; return;
label_9E08:; return;
label_9E0A:; return;
label_9E0B:; return;
label_9E0C:; return;
label_9E0D:; return;
label_9E0F:; return;
label_9E10:; return;
label_9E11:; return;
label_9E12:; return;
label_9E13:; return;
label_9E14:; return;
label_9E15:; return;
label_9E16:; return;
label_9E18:; return;
label_9E19:; return;
label_9E1A:; return;
label_9E1B:; return;
label_9E1D:; return;
label_9E1E:; return;
label_9E1F:; return;
label_9E20:; return;
label_9E23:; return;
label_9E24:; return;
label_9E25:; return;
label_9E26:; return;
label_9E27:; return;
label_9E28:; return;
label_9E29:; return;
label_9E2A:; return;
label_9E2B:; return;
label_9E2C:; return;
label_9E2D:; return;
label_9E2E:; return;
label_9E2F:; return;
label_9E30:; return;
label_9E31:; return;
label_9E32:; return;
label_9E34:; return;
label_9E35:; return;
label_9E36:; return;
label_9E37:; return;
label_9E38:; return;
label_9E39:; return;
label_9E3A:; return;
label_9E3C:; return;
label_9E3D:; return;
label_9E3E:; return;
label_9E3F:; return;
label_9E40:; return;
label_9E41:; return;
label_9E42:; return;
label_9E43:; return;
label_9E44:; return;
label_9E46:; return;
label_9E47:; return;
label_9E48:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4B:; return;
label_9E4C:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E4F:; return;
label_9E51:; return;
label_9E52:; return;
label_9E54:; return;
label_9E55:; return;
label_9E57:; return;
label_9E58:; return;
label_9E59:; return;
label_9E5A:; return;
label_9E5B:; return;
label_9E5C:; return;
label_9E5D:; return;
label_9E5E:; return;
label_9E5F:; return;
label_9E60:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E67:; return;
label_9E68:; return;
label_9E6A:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E71:; return;
label_9E72:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7E:; return;
label_9E80:; return;
label_9E81:; return;
label_9E82:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E87:; return;
label_9E88:; return;
label_9E89:; return;
label_9E8A:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E91:; return;
label_9E92:; return;
label_9E93:; return;
label_9E94:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA2:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAA:; return;
label_9EAC:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBA:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC2:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC6:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECA:; return;
label_9ECB:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ECF:; return;
label_9ED0:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDB:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDE:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE1:; return;
label_9EE3:; return;
label_9EE4:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF8:; return;
label_9EFA:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F00:; return;
label_9F01:; return;
label_9F03:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F09:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0E:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F18:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1E:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F21:; return;
label_9F22:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F27:; return;
label_9F29:; return;
label_9F2A:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F30:; return;
label_9F31:; return;
label_9F32:; return;
label_9F33:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3D:; return;
label_9F3E:; return;
label_9F3F:; return;
label_9F40:; return;
label_9F41:; return;
label_9F42:; return;
label_9F44:; return;
label_9F45:; return;
label_9F46:; return;
label_9F47:; return;
label_9F49:; return;
label_9F4B:; return;
label_9F4D:; return;
label_9F4F:; return;
label_9F50:; return;
label_9F51:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F56:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5A:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F61:; return;
label_9F62:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F68:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
label_9F77:; return;
label_9F78:; return;
label_9F79:; return;
label_9F7A:; return;
label_9F7B:; return;
label_9F7C:; return;
label_9F7D:; return;
label_9F7E:; return;
label_9F80:; return;
label_9F83:; return;
label_9F84:; return;
label_9F85:; return;
label_9F87:; return;
label_9F88:; return;
label_9F89:; return;
label_9F8A:; return;
label_9F8C:; return;
label_9F8E:; return;
label_9F90:; return;
label_9F91:; return;
label_9F92:; return;
label_9F95:; return;
label_9F96:; return;
label_9F98:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9D:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA3:; return;
label_9FA4:; return;
label_9FA6:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
label_9FAB:; return;
label_9FAC:; return;
label_9FAD:; return;
label_9FAE:; return;
label_9FB0:; return;
label_9FB1:; return;
label_9FB2:; return;
label_9FB3:; return;
label_9FB4:; return;
label_9FB5:; return;
label_9FB6:; return;
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
label_9FC3:; return;
label_9FC4:; return;
label_9FC6:; return;
label_9FC7:; return;
label_9FC8:; return;
label_9FC9:; return;
label_9FCA:; return;
label_9FCC:; return;
label_9FCD:; return;
label_9FCE:; return;
label_9FCF:; return;
label_9FD0:; return;
label_9FD1:; return;
label_9FD2:; return;
label_9FD3:; return;
label_9FD4:; return;
label_9FD5:; return;
label_9FD6:; return;
label_9FD7:; return;
label_9FD8:; return;
label_9FD9:; return;
label_9FDA:; return;
label_9FDB:; return;
label_9FDC:; return;
label_9FDD:; return;
label_9FDE:; return;
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEB:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFB:; return;
label_9FFC:; return;
label_9FFD:; return;
label_9FFF:; return;
label_A001:; return;
label_A003:; return;
label_A006:; return;
label_A009:; return;
label_A00C:; return;
label_A00F:; return;
label_A012:; return;
label_A014:; return;
label_A017:; return;
label_A01A:; return;
label_A01D:; return;
label_A01F:; return;
label_A022:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02C:; return;
label_A02E:; return;
label_A02F:; return;
label_A031:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A039:; return;
label_A03B:; return;
label_A03C:; return;
label_A03F:; return;
label_A041:; return;
label_A044:; return;
label_A046:; return;
label_A048:; return;
label_A04B:; return;
label_A04D:; return;
label_A050:; return;
label_A053:; return;
label_A056:; return;
label_A059:; return;
label_A05B:; return;
label_A05D:; return;
label_A05F:; return;
label_A061:; return;
label_A063:; return;
label_A066:; return;
label_A069:; return;
label_A06C:; return;
label_A06F:; return;
label_A072:; return;
label_A075:; return;
label_A078:; return;
label_A07B:; return;
label_A07D:; return;
label_A07F:; return;
label_A081:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A089:; return;
label_A08B:; return;
label_A08D:; return;
label_A08F:; return;
label_A091:; return;
label_A093:; return;
label_A095:; return;
label_A097:; return;
label_A099:; return;
label_A09B:; return;
label_A09D:; return;
label_A09F:; return;
label_A0A1:; return;
label_A0A3:; return;
label_A0A5:; return;
label_A0A7:; return;
label_A0A9:; return;
label_A0AB:; return;
label_A0AD:; return;
label_A0AF:; return;
label_A0B1:; return;
label_A0B3:; return;
label_A0B5:; return;
label_A0B7:; return;
label_A0B9:; return;
label_A0BB:; return;
label_A0BD:; return;
label_A0BF:; return;
label_A0C1:; return;
label_A0C3:; return;
label_A0C5:; return;
label_A0C7:; return;
label_A0C9:; return;
label_A0CB:; return;
label_A0CD:; return;
label_A0CF:; return;
label_A0D1:; return;
label_A0D3:; return;
label_A0D5:; return;
label_A0D7:; return;
label_A0D9:; return;
label_A0DB:; return;
label_A0DD:; return;
label_A0DF:; return;
label_A0E1:; return;
label_A0E3:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E9:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0EF:; return;
label_A0F1:; return;
label_A0F3:; return;
label_A0F5:; return;
label_A0F7:; return;
label_A0F9:; return;
label_A0FB:; return;
label_A0FD:; return;
label_A0FF:; return;
label_A101:; return;
label_A103:; return;
label_A106:; return;
label_A109:; return;
label_A10A:; return;
label_A10B:; return;
label_A10D:; return;
label_A10F:; return;
label_A112:; return;
label_A113:; return;
label_A115:; return;
label_A117:; return;
label_A118:; return;
label_A11A:; return;
label_A11C:; return;
label_A11E:; return;
label_A120:; return;
label_A123:; return;
label_A125:; return;
label_A127:; return;
label_A129:; return;
label_A12B:; return;
label_A12C:; return;
label_A12D:; return;
label_A12E:; return;
label_A131:; return;
label_A133:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13E:; return;
label_A140:; return;
label_A142:; return;
label_A145:; return;
label_A147:; return;
label_A148:; return;
label_A14B:; return;
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
label_A15C:; return;
label_A15F:; return;
label_A162:; return;
label_A164:; return;
label_A165:; return;
label_A167:; return;
label_A16A:; return;
label_A16D:; return;
label_A16F:; return;
label_A171:; return;
label_A174:; return;
label_A177:; return;
label_A179:; return;
label_A17A:; return;
label_A17D:; return;
label_A17E:; return;
label_A17F:; return;
label_A182:; return;
label_A184:; return;
label_A186:; return;
label_A187:; return;
label_A188:; return;
label_A18B:; return;
label_A18C:; return;
label_A18F:; return;
label_A192:; return;
label_A195:; return;
label_A197:; return;
label_A199:; return;
label_A19A:; return;
label_A19B:; return;
label_A19C:; return;
label_A19E:; return;
label_A19F:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1AF:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B5:; return;
label_A1B7:; return;
label_A1BA:; return;
label_A1BD:; return;
label_A1BF:; return;
label_A1C1:; return;
label_A1C3:; return;
label_A1C5:; return;
label_A1C8:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CB:; return;
label_A1CC:; return;
label_A1CD:; return;
label_A1CE:; return;
label_A1CF:; return;
label_A1D0:; return;
label_A1D2:; return;
label_A1D3:; return;
label_A1D4:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DB:; return;
label_A1DE:; return;
label_A1DF:; return;
label_A1E1:; return;
label_A1E3:; return;
label_A1E4:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E7:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F3:; return;
label_A1F4:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F7:; return;
label_A1F8:; return;
label_A1F9:; return;
label_A1FA:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FD:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20E:; return;
label_A210:; return;
label_A212:; return;
label_A214:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A220:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22B:; return;
label_A22C:; return;
label_A22D:; return;
label_A22E:; return;
label_A22F:; return;
label_A230:; return;
label_A231:; return;
label_A232:; return;
label_A233:; return;
label_A234:; return;
label_A236:; return;
label_A238:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A247:; return;
label_A248:; return;
label_A249:; return;
label_A24A:; return;
label_A24B:; return;
label_A24C:; return;
label_A24D:; return;
label_A24E:; return;
label_A24F:; return;
label_A250:; return;
label_A251:; return;
label_A252:; return;
label_A253:; return;
label_A254:; return;
label_A255:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A259:; return;
label_A25A:; return;
label_A25B:; return;
label_A25D:; return;
label_A25F:; return;
label_A261:; return;
label_A263:; return;
label_A265:; return;
label_A267:; return;
label_A269:; return;
label_A26B:; return;
label_A26D:; return;
label_A26F:; return;
label_A271:; return;
label_A273:; return;
label_A276:; return;
label_A279:; return;
label_A27C:; return;
label_A27F:; return;
label_A282:; return;
label_A285:; return;
label_A288:; return;
label_A28B:; return;
label_A28E:; return;
label_A291:; return;
label_A294:; return;
label_A297:; return;
label_A29A:; return;
label_A29D:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A6:; return;
label_A2A9:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B4:; return;
label_A2B6:; return;
label_A2B8:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2C9:; return;
label_A2CA:; return;
label_A2CB:; return;
label_A2CC:; return;
label_A2CD:; return;
label_A2CE:; return;
label_A2CF:; return;
label_A2D0:; return;
label_A2D1:; return;
label_A2D2:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D6:; return;
label_A2D7:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DC:; return;
label_A2DE:; return;
label_A2E0:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E6:; return;
label_A2E8:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F4:; return;
label_A2F6:; return;
label_A2F8:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A302:; return;
label_A304:; return;
label_A306:; return;
label_A308:; return;
label_A30A:; return;
label_A30C:; return;
label_A30E:; return;
label_A310:; return;
label_A311:; return;
label_A313:; return;
label_A314:; return;
label_A315:; return;
label_A318:; return;
label_A319:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A327:; return;
label_A328:; return;
label_A32A:; return;
label_A32C:; return;
label_A32D:; return;
label_A32E:; return;
label_A330:; return;
label_A331:; return;
label_A333:; return;
label_A334:; return;
label_A336:; return;
label_A337:; return;
label_A339:; return;
label_A33A:; return;
label_A33C:; return;
label_A33E:; return;
label_A340:; return;
label_A342:; return;
label_A344:; return;
label_A346:; return;
label_A348:; return;
label_A34A:; return;
label_A34D:; return;
label_A34E:; return;
label_A350:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35C:; return;
label_A35E:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A364:; return;
label_A367:; return;
label_A36A:; return;
label_A36D:; return;
label_A370:; return;
label_A372:; return;
label_A374:; return;
label_A375:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37C:; return;
label_A37D:; return;
label_A37F:; return;
label_A380:; return;
label_A382:; return;
label_A384:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38C:; return;
label_A38E:; return;
label_A38F:; return;
label_A390:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A397:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A39F:; return;
label_A3A1:; return;
label_A3A2:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A9:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B2:; return;
label_A3B3:; return;
label_A3B4:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3B9:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3C0:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C7:; return;
label_A3CA:; return;
label_A3CC:; return;
label_A3CE:; return;
label_A3D0:; return;
label_A3D2:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D9:; return;
label_A3DC:; return;
label_A3DD:; return;
label_A3DE:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E6:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EA:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3ED:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F9:; return;
label_A3FA:; return;
label_A3FD:; return;
label_A3FE:; return;
label_A401:; return;
label_A403:; return;
label_A405:; return;
label_A407:; return;
label_A409:; return;
label_A40C:; return;
label_A40D:; return;
label_A40F:; return;
label_A412:; return;
label_A414:; return;
label_A416:; return;
label_A418:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
}

void func_98A9_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A9_b13");
#endif
label_98A9:;
    /* $98A9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98AA:;
    /* $98AA: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFC03 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98AD:;
    /* $98AD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98AF:;
    /* $98AF: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xF4; g_cpu.C=(g_cpu.Y>=0xF4)?1:0; FLAG_NZ(r&0xFF); }
label_98B1:;
    /* $98B1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98B2:;
    /* $98B2: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98B4:;
    /* $98B4: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98B6:;
    /* $98B6: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_98B8:;
    /* $98B8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_98B9:;
    /* $98B9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98BA:;
    /* $98BA: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_98BB:;
    /* $98BB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98BC:;
    /* $98BC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98BE:;
    /* $98BE: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_98C0:;
    /* $98C0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC902 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98C3:;
    /* $98C3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98C4:;
    /* $98C4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98C6:;
    /* $98C6: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_98C7:;
    /* $98C7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98C8:;
    /* $98C8: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_98CA:;
    /* $98CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x18CF), 13); return; }
label_98CC:;
    /* $98CC: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98CE:;
    /* $98CE: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xC3) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98D0:;
    /* $98D0: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x83) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98D2:;
    /* $98D2: 89 */ maybe_trigger_vblank(2); /* NOP */
label_98D4:;
    /* $98D4: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xED01); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_98D7:;
    /* $98D7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEE + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98D9:;
    /* $98D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xEC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98DB:;
    /* $98DB: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98DD:;
    /* $98DD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98DF:;
    /* $98DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98E1:;
    /* $98E1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xF3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98E3:;
    /* $98E3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98E5:;
    /* $98E5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98E6:;
    /* $98E6: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_98E7:;
    /* $98E7: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_98E8:;
    /* $98E8: 89 */ maybe_trigger_vblank(2); /* NOP */
label_98EA:;
    /* $98EA: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98EC:;
    /* $98EC: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x01 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98EE:;
    /* $98EE: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98F0:;
    /* $98F0: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x41 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_98F2:;
    /* $98F2: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_98F4:;
    /* $98F4: EF */ maybe_trigger_vblank(6); { uint16_t a=0xEF01; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98F7:;
    /* $98F7: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xEB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98F9:;
    /* $98F9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_98FB:;
    /* $98FB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_98FC:;
    /* $98FC: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x42 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_98FE:;
    /* $98FE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_98FF:;
    /* $98FF: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x016F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9902:;
    /* $9902: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9903:; return;
label_9905:; return;
label_9907:; return;
label_9909:; return;
label_990B:; return;
label_990D:; return;
label_990F:; return;
label_9911:; return;
label_9913:; return;
label_9916:; return;
label_9918:; return;
label_991A:; return;
label_991C:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992A:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9931:; return;
label_9934:; return;
label_9935:; return;
label_9938:; return;
label_993A:; return;
label_993C:; return;
label_993E:; return;
label_993F:; return;
label_9941:; return;
label_9943:; return;
label_9944:; return;
label_9947:; return;
label_9948:; return;
label_994A:; return;
label_994C:; return;
label_994D:; return;
label_994E:; return;
label_9951:; return;
label_9952:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995D:; return;
label_995F:; return;
label_9961:; return;
label_9963:; return;
label_9964:; return;
label_9967:; return;
label_9969:; return;
label_996B:; return;
label_996D:; return;
label_996E:; return;
label_9970:; return;
label_9972:; return;
label_9973:; return;
label_9974:; return;
label_9977:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9980:; return;
label_9982:; return;
label_9984:; return;
label_9986:; return;
label_9988:; return;
label_998A:; return;
label_998C:; return;
label_998E:; return;
label_9990:; return;
label_9992:; return;
label_9994:; return;
label_9996:; return;
label_9998:; return;
label_9999:; return;
label_999B:; return;
label_999C:; return;
label_999E:; return;
label_99A0:; return;
label_99A1:; return;
label_99A2:; return;
label_99A5:; return;
label_99A6:; return;
label_99A9:; return;
label_99AA:; return;
label_99AD:; return;
label_99AF:; return;
label_99B1:; return;
label_99B3:; return;
label_99B5:; return;
label_99B7:; return;
label_99B8:; return;
label_99B9:; return;
label_99BA:; return;
label_99BC:; return;
label_99BF:; return;
label_99C0:; return;
label_99C2:; return;
label_99C4:; return;
label_99C5:; return;
label_99C6:; return;
label_99C8:; return;
label_99CA:; return;
label_99CB:; return;
label_99CC:; return;
label_99CF:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E1:; return;
label_99E3:; return;
label_99E5:; return;
label_99E6:; return;
label_99E9:; return;
label_99EA:; return;
label_99EC:; return;
label_99EE:; return;
label_99EF:; return;
label_99F0:; return;
label_99F3:; return;
label_99F4:; return;
label_99F7:; return;
label_99F9:; return;
label_99FB:; return;
label_99FD:; return;
label_99FF:; return;
label_9A01:; return;
label_9A03:; return;
label_9A05:; return;
label_9A06:; return;
label_9A09:; return;
label_9A0B:; return;
label_9A0D:; return;
label_9A0F:; return;
label_9A10:; return;
label_9A12:; return;
label_9A14:; return;
label_9A15:; return;
label_9A16:; return;
label_9A19:; return;
label_9A1A:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A21:; return;
label_9A22:; return;
label_9A24:; return;
label_9A26:; return;
label_9A28:; return;
label_9A2A:; return;
label_9A2B:; return;
label_9A2E:; return;
label_9A30:; return;
label_9A33:; return;
label_9A34:; return;
label_9A35:; return;
label_9A36:; return;
label_9A37:; return;
label_9A38:; return;
label_9A3A:; return;
label_9A3C:; return;
label_9A3E:; return;
label_9A40:; return;
label_9A42:; return;
label_9A44:; return;
label_9A45:; return;
label_9A46:; return;
label_9A48:; return;
label_9A49:; return;
label_9A4A:; return;
label_9A4B:; return;
label_9A4C:; return;
label_9A4E:; return;
label_9A50:; return;
label_9A51:; return;
label_9A53:; return;
label_9A55:; return;
label_9A57:; return;
label_9A59:; return;
label_9A5B:; return;
label_9A5D:; return;
label_9A5F:; return;
label_9A61:; return;
label_9A63:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6F:; return;
label_9A71:; return;
label_9A73:; return;
label_9A74:; return;
label_9A77:; return;
label_9A78:; return;
label_9A7B:; return;
label_9A7C:; return;
label_9A7E:; return;
label_9A80:; return;
label_9A82:; return;
label_9A84:; return;
label_9A85:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8D:; return;
label_9A8F:; return;
label_9A90:; return;
label_9A91:; return;
label_9A92:; return;
label_9A95:; return;
label_9A97:; return;
label_9A99:; return;
label_9A9A:; return;
label_9A9B:; return;
label_9A9C:; return;
label_9A9D:; return;
label_9A9F:; return;
label_9AA1:; return;
label_9AA2:; return;
label_9AA3:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA8:; return;
label_9AA9:; return;
label_9AAA:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AAF:; return;
label_9AB0:; return;
label_9AB1:; return;
label_9AB2:; return;
label_9AB3:; return;
label_9AB4:; return;
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
label_9AC3:; return;
label_9AC4:; return;
label_9AC5:; return;
label_9AC6:; return;
label_9AC9:; return;
label_9ACA:; return;
label_9ACB:; return;
label_9ACC:; return;
label_9ACD:; return;
label_9ACE:; return;
label_9ACF:; return;
label_9AD1:; return;
label_9AD2:; return;
label_9AD5:; return;
label_9AD6:; return;
label_9AD7:; return;
label_9AD8:; return;
label_9AD9:; return;
label_9ADA:; return;
label_9ADB:; return;
label_9ADC:; return;
label_9ADD:; return;
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
label_9B01:; return;
label_9B02:; return;
label_9B04:; return;
label_9B05:; return;
label_9B06:; return;
label_9B07:; return;
label_9B08:; return;
label_9B09:; return;
label_9B0B:; return;
label_9B0C:; return;
label_9B0D:; return;
label_9B0F:; return;
label_9B10:; return;
label_9B11:; return;
label_9B12:; return;
label_9B13:; return;
label_9B14:; return;
label_9B15:; return;
label_9B18:; return;
label_9B19:; return;
label_9B1B:; return;
label_9B1C:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B20:; return;
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
label_9B2D:; return;
label_9B2E:; return;
label_9B2F:; return;
label_9B30:; return;
label_9B31:; return;
label_9B33:; return;
label_9B34:; return;
label_9B35:; return;
label_9B36:; return;
label_9B37:; return;
label_9B38:; return;
label_9B39:; return;
label_9B3C:; return;
label_9B3D:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B40:; return;
label_9B42:; return;
label_9B43:; return;
label_9B46:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4A:; return;
label_9B4B:; return;
label_9B4C:; return;
label_9B4D:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B52:; return;
label_9B53:; return;
label_9B54:; return;
label_9B55:; return;
label_9B57:; return;
label_9B59:; return;
label_9B5A:; return;
label_9B5B:; return;
label_9B5C:; return;
label_9B5D:; return;
label_9B5E:; return;
label_9B5F:; return;
label_9B60:; return;
label_9B61:; return;
label_9B62:; return;
label_9B63:; return;
label_9B64:; return;
label_9B65:; return;
label_9B66:; return;
label_9B67:; return;
label_9B68:; return;
label_9B69:; return;
label_9B6A:; return;
label_9B6B:; return;
label_9B6C:; return;
label_9B6D:; return;
label_9B6E:; return;
label_9B6F:; return;
label_9B70:; return;
label_9B71:; return;
label_9B72:; return;
label_9B73:; return;
label_9B74:; return;
label_9B75:; return;
label_9B76:; return;
label_9B77:; return;
label_9B78:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B7F:; return;
label_9B80:; return;
label_9B81:; return;
label_9B82:; return;
label_9B83:; return;
label_9B84:; return;
label_9B85:; return;
label_9B86:; return;
label_9B87:; return;
label_9B88:; return;
label_9B89:; return;
label_9B8B:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B91:; return;
label_9B92:; return;
label_9B94:; return;
label_9B95:; return;
label_9B97:; return;
label_9B98:; return;
label_9B99:; return;
label_9B9A:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9B9F:; return;
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
label_9BC3:; return;
label_9BC4:; return;
label_9BC5:; return;
label_9BC6:; return;
label_9BC7:; return;
label_9BC8:; return;
label_9BC9:; return;
label_9BCB:; return;
label_9BCC:; return;
label_9BCD:; return;
label_9BCE:; return;
label_9BCF:; return;
label_9BD0:; return;
label_9BD1:; return;
label_9BD2:; return;
label_9BD5:; return;
label_9BD6:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDC:; return;
label_9BDD:; return;
label_9BE0:; return;
label_9BE1:; return;
label_9BE2:; return;
label_9BE3:; return;
label_9BE4:; return;
label_9BE5:; return;
label_9BE6:; return;
label_9BE7:; return;
label_9BE8:; return;
label_9BE9:; return;
label_9BEA:; return;
label_9BEB:; return;
label_9BEC:; return;
label_9BED:; return;
label_9BEE:; return;
label_9BEF:; return;
label_9BF0:; return;
label_9BF1:; return;
label_9BF2:; return;
label_9BF3:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF7:; return;
label_9BF8:; return;
label_9BF9:; return;
label_9BFA:; return;
label_9BFB:; return;
label_9BFC:; return;
label_9BFD:; return;
label_9BFE:; return;
label_9C01:; return;
label_9C03:; return;
label_9C05:; return;
label_9C07:; return;
label_9C09:; return;
label_9C0B:; return;
label_9C0D:; return;
label_9C0F:; return;
label_9C11:; return;
label_9C13:; return;
label_9C15:; return;
label_9C17:; return;
label_9C19:; return;
label_9C1B:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C27:; return;
label_9C29:; return;
label_9C2B:; return;
label_9C2C:; return;
label_9C2F:; return;
label_9C31:; return;
label_9C33:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3E:; return;
label_9C40:; return;
label_9C43:; return;
label_9C45:; return;
label_9C47:; return;
label_9C48:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C51:; return;
label_9C53:; return;
label_9C56:; return;
label_9C58:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5F:; return;
label_9C61:; return;
label_9C64:; return;
label_9C66:; return;
label_9C68:; return;
label_9C6A:; return;
label_9C6C:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C78:; return;
label_9C7A:; return;
label_9C7B:; return;
label_9C7D:; return;
label_9C7F:; return;
label_9C80:; return;
label_9C81:; return;
label_9C83:; return;
label_9C86:; return;
label_9C88:; return;
label_9C89:; return;
label_9C8B:; return;
label_9C8D:; return;
label_9C90:; return;
label_9C92:; return;
label_9C93:; return;
label_9C96:; return;
label_9C97:; return;
label_9C99:; return;
label_9C9A:; return;
label_9C9D:; return;
label_9C9F:; return;
label_9CA0:; return;
label_9CA1:; return;
label_9CA2:; return;
label_9CA3:; return;
label_9CA4:; return;
label_9CA7:; return;
label_9CA9:; return;
label_9CAB:; return;
label_9CAE:; return;
label_9CB1:; return;
label_9CB4:; return;
label_9CB7:; return;
label_9CBA:; return;
label_9CBD:; return;
label_9CC0:; return;
label_9CC3:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCD:; return;
label_9CCF:; return;
label_9CD0:; return;
label_9CD1:; return;
label_9CD3:; return;
label_9CD6:; return;
label_9CD9:; return;
label_9CDC:; return;
label_9CDF:; return;
label_9CE2:; return;
label_9CE5:; return;
label_9CE8:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF7:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFE:; return;
label_9D01:; return;
label_9D04:; return;
label_9D07:; return;
label_9D0A:; return;
label_9D0C:; return;
label_9D0F:; return;
label_9D12:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1B:; return;
label_9D1E:; return;
label_9D21:; return;
label_9D23:; return;
label_9D25:; return;
label_9D28:; return;
label_9D29:; return;
label_9D2A:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2E:; return;
label_9D2F:; return;
label_9D30:; return;
label_9D31:; return;
label_9D33:; return;
label_9D34:; return;
label_9D36:; return;
label_9D37:; return;
label_9D38:; return;
label_9D39:; return;
label_9D3A:; return;
label_9D3B:; return;
label_9D3C:; return;
label_9D3D:; return;
label_9D3E:; return;
label_9D3F:; return;
label_9D40:; return;
label_9D41:; return;
label_9D43:; return;
label_9D44:; return;
label_9D47:; return;
label_9D48:; return;
label_9D49:; return;
label_9D4B:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D4E:; return;
label_9D4F:; return;
label_9D51:; return;
label_9D52:; return;
label_9D53:; return;
label_9D54:; return;
label_9D55:; return;
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
label_9D62:; return;
label_9D63:; return;
label_9D64:; return;
label_9D66:; return;
label_9D67:; return;
label_9D69:; return;
label_9D6A:; return;
label_9D6B:; return;
label_9D6C:; return;
label_9D6D:; return;
label_9D6E:; return;
label_9D6F:; return;
label_9D70:; return;
label_9D71:; return;
label_9D72:; return;
label_9D73:; return;
label_9D74:; return;
label_9D75:; return;
label_9D76:; return;
label_9D77:; return;
label_9D78:; return;
label_9D79:; return;
label_9D7A:; return;
label_9D7C:; return;
label_9D7D:; return;
label_9D7E:; return;
label_9D7F:; return;
label_9D81:; return;
label_9D82:; return;
label_9D83:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8A:; return;
label_9D8C:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D8F:; return;
label_9D90:; return;
label_9D92:; return;
label_9D93:; return;
label_9D94:; return;
label_9D96:; return;
label_9D98:; return;
label_9D99:; return;
label_9D9A:; return;
label_9D9B:; return;
label_9D9C:; return;
label_9D9D:; return;
label_9D9E:; return;
label_9D9F:; return;
label_9DA0:; return;
label_9DA2:; return;
label_9DA3:; return;
label_9DA4:; return;
label_9DA5:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAA:; return;
label_9DAB:; return;
label_9DAC:; return;
label_9DAE:; return;
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
label_9DC1:; return;
label_9DC3:; return;
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
label_9DD2:; return;
label_9DD3:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD6:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DD9:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDD:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE3:; return;
label_9DE4:; return;
label_9DE5:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEA:; return;
label_9DEB:; return;
label_9DEC:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DEF:; return;
label_9DF0:; return;
label_9DF2:; return;
label_9DF3:; return;
label_9DF4:; return;
label_9DF5:; return;
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
label_9E02:; return;
label_9E03:; return;
label_9E04:; return;
label_9E05:; return;
label_9E06:; return;
label_9E07:; return;
label_9E08:; return;
label_9E0A:; return;
label_9E0B:; return;
label_9E0C:; return;
label_9E0D:; return;
label_9E0F:; return;
label_9E10:; return;
label_9E11:; return;
label_9E12:; return;
label_9E13:; return;
label_9E14:; return;
label_9E15:; return;
label_9E16:; return;
label_9E18:; return;
label_9E19:; return;
label_9E1A:; return;
label_9E1B:; return;
label_9E1D:; return;
label_9E1E:; return;
label_9E1F:; return;
label_9E20:; return;
label_9E23:; return;
label_9E24:; return;
label_9E25:; return;
label_9E26:; return;
label_9E27:; return;
label_9E28:; return;
label_9E29:; return;
label_9E2A:; return;
label_9E2B:; return;
label_9E2C:; return;
label_9E2D:; return;
label_9E2E:; return;
label_9E2F:; return;
label_9E30:; return;
label_9E31:; return;
label_9E32:; return;
label_9E34:; return;
label_9E35:; return;
label_9E36:; return;
label_9E37:; return;
label_9E38:; return;
label_9E39:; return;
label_9E3A:; return;
label_9E3C:; return;
label_9E3D:; return;
label_9E3E:; return;
label_9E3F:; return;
label_9E40:; return;
label_9E41:; return;
label_9E42:; return;
label_9E43:; return;
label_9E44:; return;
label_9E46:; return;
label_9E47:; return;
label_9E48:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4B:; return;
label_9E4C:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E4F:; return;
label_9E51:; return;
label_9E52:; return;
label_9E54:; return;
label_9E55:; return;
label_9E57:; return;
label_9E58:; return;
label_9E59:; return;
label_9E5A:; return;
label_9E5B:; return;
label_9E5C:; return;
label_9E5D:; return;
label_9E5E:; return;
label_9E5F:; return;
label_9E60:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E67:; return;
label_9E68:; return;
label_9E6A:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E71:; return;
label_9E72:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7E:; return;
label_9E80:; return;
label_9E81:; return;
label_9E82:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E87:; return;
label_9E88:; return;
label_9E89:; return;
label_9E8A:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E91:; return;
label_9E92:; return;
label_9E93:; return;
label_9E94:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA2:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAA:; return;
label_9EAC:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBA:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC2:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC6:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECA:; return;
label_9ECB:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ECF:; return;
label_9ED0:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDB:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDE:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE1:; return;
label_9EE3:; return;
label_9EE4:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF8:; return;
label_9EFA:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F00:; return;
label_9F01:; return;
label_9F03:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F09:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0E:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F18:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1E:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F21:; return;
label_9F22:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F27:; return;
label_9F29:; return;
label_9F2A:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F30:; return;
label_9F31:; return;
label_9F32:; return;
label_9F33:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3D:; return;
label_9F3E:; return;
label_9F3F:; return;
label_9F40:; return;
label_9F41:; return;
label_9F42:; return;
label_9F44:; return;
label_9F45:; return;
label_9F46:; return;
label_9F47:; return;
label_9F49:; return;
label_9F4B:; return;
label_9F4D:; return;
label_9F4F:; return;
label_9F50:; return;
label_9F51:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F56:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5A:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F61:; return;
label_9F62:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F68:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
label_9F77:; return;
label_9F78:; return;
label_9F79:; return;
label_9F7A:; return;
label_9F7B:; return;
label_9F7C:; return;
label_9F7D:; return;
label_9F7E:; return;
label_9F80:; return;
label_9F83:; return;
label_9F84:; return;
label_9F85:; return;
label_9F87:; return;
label_9F88:; return;
label_9F89:; return;
label_9F8A:; return;
label_9F8C:; return;
label_9F8E:; return;
label_9F90:; return;
label_9F91:; return;
label_9F92:; return;
label_9F95:; return;
label_9F96:; return;
label_9F98:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9D:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA3:; return;
label_9FA4:; return;
label_9FA6:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
label_9FAB:; return;
label_9FAC:; return;
label_9FAD:; return;
label_9FAE:; return;
label_9FB0:; return;
label_9FB1:; return;
label_9FB2:; return;
label_9FB3:; return;
label_9FB4:; return;
label_9FB5:; return;
label_9FB6:; return;
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
label_9FC3:; return;
label_9FC4:; return;
label_9FC6:; return;
label_9FC7:; return;
label_9FC8:; return;
label_9FC9:; return;
label_9FCA:; return;
label_9FCC:; return;
label_9FCD:; return;
label_9FCE:; return;
label_9FCF:; return;
label_9FD0:; return;
label_9FD1:; return;
label_9FD2:; return;
label_9FD3:; return;
label_9FD4:; return;
label_9FD5:; return;
label_9FD6:; return;
label_9FD7:; return;
label_9FD8:; return;
label_9FD9:; return;
label_9FDA:; return;
label_9FDB:; return;
label_9FDC:; return;
label_9FDD:; return;
label_9FDE:; return;
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEB:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFB:; return;
label_9FFC:; return;
label_9FFD:; return;
label_9FFF:; return;
label_A001:; return;
label_A003:; return;
label_A006:; return;
label_A009:; return;
label_A00C:; return;
label_A00F:; return;
label_A012:; return;
label_A014:; return;
label_A017:; return;
label_A01A:; return;
label_A01D:; return;
label_A01F:; return;
label_A022:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02C:; return;
label_A02E:; return;
label_A02F:; return;
label_A031:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A039:; return;
label_A03B:; return;
label_A03C:; return;
label_A03F:; return;
label_A041:; return;
label_A044:; return;
label_A046:; return;
label_A048:; return;
label_A04B:; return;
label_A04D:; return;
label_A050:; return;
label_A053:; return;
label_A056:; return;
label_A059:; return;
label_A05B:; return;
label_A05D:; return;
label_A05F:; return;
label_A061:; return;
label_A063:; return;
label_A066:; return;
label_A069:; return;
label_A06C:; return;
label_A06F:; return;
label_A072:; return;
label_A075:; return;
label_A078:; return;
label_A07B:; return;
label_A07D:; return;
label_A07F:; return;
label_A081:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A089:; return;
label_A08B:; return;
label_A08D:; return;
label_A08F:; return;
label_A091:; return;
label_A093:; return;
label_A095:; return;
label_A097:; return;
label_A099:; return;
label_A09B:; return;
label_A09D:; return;
label_A09F:; return;
label_A0A1:; return;
label_A0A3:; return;
label_A0A5:; return;
label_A0A7:; return;
label_A0A9:; return;
label_A0AB:; return;
label_A0AD:; return;
label_A0AF:; return;
label_A0B1:; return;
label_A0B3:; return;
label_A0B5:; return;
label_A0B7:; return;
label_A0B9:; return;
label_A0BB:; return;
label_A0BD:; return;
label_A0BF:; return;
label_A0C1:; return;
label_A0C3:; return;
label_A0C5:; return;
label_A0C7:; return;
label_A0C9:; return;
label_A0CB:; return;
label_A0CD:; return;
label_A0CF:; return;
label_A0D1:; return;
label_A0D3:; return;
label_A0D5:; return;
label_A0D7:; return;
label_A0D9:; return;
label_A0DB:; return;
label_A0DD:; return;
label_A0DF:; return;
label_A0E1:; return;
label_A0E3:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E9:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0EF:; return;
label_A0F1:; return;
label_A0F3:; return;
label_A0F5:; return;
label_A0F7:; return;
label_A0F9:; return;
label_A0FB:; return;
label_A0FD:; return;
label_A0FF:; return;
label_A101:; return;
label_A103:; return;
label_A106:; return;
label_A109:; return;
label_A10A:; return;
label_A10B:; return;
label_A10D:; return;
label_A10F:; return;
label_A112:; return;
label_A113:; return;
label_A115:; return;
label_A117:; return;
label_A118:; return;
label_A11A:; return;
label_A11C:; return;
label_A11E:; return;
label_A120:; return;
label_A123:; return;
label_A125:; return;
label_A127:; return;
label_A129:; return;
label_A12B:; return;
label_A12C:; return;
label_A12D:; return;
label_A12E:; return;
label_A131:; return;
label_A133:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13E:; return;
label_A140:; return;
label_A142:; return;
label_A145:; return;
label_A147:; return;
label_A148:; return;
label_A14B:; return;
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
label_A15C:; return;
label_A15F:; return;
label_A162:; return;
label_A164:; return;
label_A165:; return;
label_A167:; return;
label_A16A:; return;
label_A16D:; return;
label_A16F:; return;
label_A171:; return;
label_A174:; return;
label_A177:; return;
label_A179:; return;
label_A17A:; return;
label_A17D:; return;
label_A17E:; return;
label_A17F:; return;
label_A182:; return;
label_A184:; return;
label_A186:; return;
label_A187:; return;
label_A188:; return;
label_A18B:; return;
label_A18C:; return;
label_A18F:; return;
label_A192:; return;
label_A195:; return;
label_A197:; return;
label_A199:; return;
label_A19A:; return;
label_A19B:; return;
label_A19C:; return;
label_A19E:; return;
label_A19F:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A7:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AD:; return;
label_A1AE:; return;
label_A1AF:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B5:; return;
label_A1B7:; return;
label_A1BA:; return;
label_A1BD:; return;
label_A1BF:; return;
label_A1C1:; return;
label_A1C3:; return;
label_A1C5:; return;
label_A1C8:; return;
label_A1C9:; return;
label_A1CA:; return;
label_A1CB:; return;
label_A1CC:; return;
label_A1CD:; return;
label_A1CE:; return;
label_A1CF:; return;
label_A1D0:; return;
label_A1D2:; return;
label_A1D3:; return;
label_A1D4:; return;
label_A1D7:; return;
label_A1D9:; return;
label_A1DA:; return;
label_A1DB:; return;
label_A1DE:; return;
label_A1DF:; return;
label_A1E1:; return;
label_A1E3:; return;
label_A1E4:; return;
label_A1E5:; return;
label_A1E6:; return;
label_A1E7:; return;
label_A1E8:; return;
label_A1E9:; return;
label_A1EA:; return;
label_A1EB:; return;
label_A1EC:; return;
label_A1ED:; return;
label_A1EE:; return;
label_A1EF:; return;
label_A1F0:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F3:; return;
label_A1F4:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F7:; return;
label_A1F8:; return;
label_A1F9:; return;
label_A1FA:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FD:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A200:; return;
label_A202:; return;
label_A204:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20C:; return;
label_A20E:; return;
label_A210:; return;
label_A212:; return;
label_A214:; return;
label_A216:; return;
label_A218:; return;
label_A21A:; return;
label_A21C:; return;
label_A21E:; return;
label_A220:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22B:; return;
label_A22C:; return;
label_A22D:; return;
label_A22E:; return;
label_A22F:; return;
label_A230:; return;
label_A231:; return;
label_A232:; return;
label_A233:; return;
label_A234:; return;
label_A236:; return;
label_A238:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A247:; return;
label_A248:; return;
label_A249:; return;
label_A24A:; return;
label_A24B:; return;
label_A24C:; return;
label_A24D:; return;
label_A24E:; return;
label_A24F:; return;
label_A250:; return;
label_A251:; return;
label_A252:; return;
label_A253:; return;
label_A254:; return;
label_A255:; return;
label_A256:; return;
label_A257:; return;
label_A258:; return;
label_A259:; return;
label_A25A:; return;
label_A25B:; return;
label_A25D:; return;
label_A25F:; return;
label_A261:; return;
label_A263:; return;
label_A265:; return;
label_A267:; return;
label_A269:; return;
label_A26B:; return;
label_A26D:; return;
label_A26F:; return;
label_A271:; return;
label_A273:; return;
label_A276:; return;
label_A279:; return;
label_A27C:; return;
label_A27F:; return;
label_A282:; return;
label_A285:; return;
label_A288:; return;
label_A28B:; return;
label_A28E:; return;
label_A291:; return;
label_A294:; return;
label_A297:; return;
label_A29A:; return;
label_A29D:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A6:; return;
label_A2A9:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B4:; return;
label_A2B6:; return;
label_A2B8:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C0:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2C9:; return;
label_A2CA:; return;
label_A2CB:; return;
label_A2CC:; return;
label_A2CD:; return;
label_A2CE:; return;
label_A2CF:; return;
label_A2D0:; return;
label_A2D1:; return;
label_A2D2:; return;
label_A2D3:; return;
label_A2D4:; return;
label_A2D5:; return;
label_A2D6:; return;
label_A2D7:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DC:; return;
label_A2DE:; return;
label_A2E0:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E6:; return;
label_A2E8:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F4:; return;
label_A2F6:; return;
label_A2F8:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A302:; return;
label_A304:; return;
label_A306:; return;
label_A308:; return;
label_A30A:; return;
label_A30C:; return;
label_A30E:; return;
label_A310:; return;
label_A311:; return;
label_A313:; return;
label_A314:; return;
label_A315:; return;
label_A318:; return;
label_A319:; return;
label_A31B:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A327:; return;
label_A328:; return;
label_A32A:; return;
label_A32C:; return;
label_A32D:; return;
label_A32E:; return;
label_A330:; return;
label_A331:; return;
label_A333:; return;
label_A334:; return;
label_A336:; return;
label_A337:; return;
label_A339:; return;
label_A33A:; return;
label_A33C:; return;
label_A33E:; return;
label_A340:; return;
label_A342:; return;
label_A344:; return;
label_A346:; return;
label_A348:; return;
label_A34A:; return;
label_A34D:; return;
label_A34E:; return;
label_A350:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35C:; return;
label_A35E:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A364:; return;
label_A367:; return;
label_A36A:; return;
label_A36D:; return;
label_A370:; return;
label_A372:; return;
label_A374:; return;
label_A375:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37C:; return;
label_A37D:; return;
label_A37F:; return;
label_A380:; return;
label_A382:; return;
label_A384:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38C:; return;
label_A38E:; return;
label_A38F:; return;
label_A390:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A397:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A39F:; return;
label_A3A1:; return;
label_A3A2:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A9:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B2:; return;
label_A3B3:; return;
label_A3B4:; return;
label_A3B6:; return;
label_A3B7:; return;
label_A3B8:; return;
label_A3B9:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3C0:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C7:; return;
label_A3CA:; return;
label_A3CC:; return;
label_A3CE:; return;
label_A3D0:; return;
label_A3D2:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D9:; return;
label_A3DC:; return;
label_A3DD:; return;
label_A3DE:; return;
label_A3E1:; return;
label_A3E3:; return;
label_A3E4:; return;
label_A3E6:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EA:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3ED:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F5:; return;
label_A3F6:; return;
label_A3F9:; return;
label_A3FA:; return;
label_A3FD:; return;
label_A3FE:; return;
label_A401:; return;
label_A403:; return;
label_A405:; return;
label_A407:; return;
label_A409:; return;
label_A40C:; return;
label_A40D:; return;
label_A40F:; return;
label_A412:; return;
label_A414:; return;
label_A416:; return;
label_A418:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A422:; return;
label_A424:; return;
label_A425:; return;
label_A428:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A430:; return;
label_A431:; return;
label_A432:; return;
label_A434:; return;
label_A435:; return;
label_A438:; return;
label_A43B:; return;
label_A43E:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A447:; return;
label_A448:; return;
label_A44B:; return;
label_A44C:; return;
label_A44F:; return;
label_A452:; return;
label_A455:; return;
label_A458:; return;
label_A45B:; return;
label_A45E:; return;
label_A461:; return;
label_A463:; return;
label_A465:; return;
label_A467:; return;
label_A469:; return;
label_A46B:; return;
label_A46D:; return;
label_A46F:; return;
label_A471:; return;
label_A473:; return;
label_A475:; return;
label_A477:; return;
label_A479:; return;
label_A47B:; return;
label_A47D:; return;
label_A47F:; return;
label_A481:; return;
label_A482:; return;
label_A483:; return;
label_A485:; return;
label_A486:; return;
label_A488:; return;
label_A489:; return;
label_A48B:; return;
label_A48C:; return;
label_A48E:; return;
label_A48F:; return;
label_A492:; return;
label_A493:; return;
label_A496:; return;
label_A497:; return;
label_A498:; return;
label_A49A:; return;
label_A49B:; return;
label_A49D:; return;
label_A49F:; return;
label_A4A2:; return;
label_A4A5:; return;
label_A4A8:; return;
label_A4AB:; return;
label_A4AC:; return;
label_A4AD:; return;
label_A4AF:; return;
label_A4B0:; return;
label_A4B1:; return;
label_A4B2:; return;
label_A4B3:; return;
label_A4B4:; return;
label_A4B5:; return;
label_A4B6:; return;
label_A4B7:; return;
label_A4B8:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BB:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C4:; return;
label_A4C6:; return;
label_A4C9:; return;
label_A4CC:; return;
label_A4CD:; return;
label_A4CF:; return;
label_A4D0:; return;
label_A4D2:; return;
label_A4D4:; return;
label_A4D7:; return;
label_A4DA:; return;
label_A4DB:; return;
label_A4DE:; return;
label_A4DF:; return;
label_A4E2:; return;
label_A4E3:; return;
label_A4E6:; return;
label_A4E7:; return;
label_A4EA:; return;
label_A4EB:; return;
label_A4EE:; return;
label_A4EF:; return;
label_A4F2:; return;
label_A4F5:; return;
label_A4F8:; return;
label_A4FB:; return;
label_A4FE:; return;
label_A501:; return;
label_A504:; return;
label_A507:; return;
label_A50A:; return;
label_A50D:; return;
label_A510:; return;
label_A512:; return;
label_A515:; return;
label_A516:; return;
label_A518:; return;
label_A519:; return;
label_A51C:; return;
label_A51E:; return;
label_A521:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52E:; return;
label_A530:; return;
label_A532:; return;
label_A534:; return;
label_A535:; return;
label_A537:; return;
label_A538:; return;
label_A53A:; return;
label_A53C:; return;
label_A53F:; return;
label_A542:; return;
label_A544:; return;
label_A545:; return;
label_A547:; return;
label_A549:; return;
label_A54B:; return;
label_A54D:; return;
label_A54E:; return;
label_A54F:; return;
label_A551:; return;
label_A552:; return;
label_A554:; return;
label_A555:; return;
}

void func_8D05_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D05_b13");
#endif
label_8D05:;
    /* $8D05: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xD0; g_cpu.C=(g_cpu.Y>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_8D07:;
    /* $8D07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D08:;
    /* $8D08: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D0A:;
    /* $8D0A: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8D0B:;
    /* $8D0B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D0C:;
    /* $8D0C: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D0E:;
    /* $8D0E: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8D10:;
    /* $8D10: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x03 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_8D12:;
    /* $8D12: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x03 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8D14:;
    /* $8D14: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_8D15:;
    /* $8D15: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D17:;
    /* $8D17: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D19:;
    /* $8D19: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xB9 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8D1B:;
    /* $8D1B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D1D:;
    /* $8D1D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xCB + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8D1F:;
    /* $8D1F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D20:;
    /* $8D20: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xB302); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D23:;
    /* $8D23: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D24:;
    /* $8D24: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8D26:;
    /* $8D26: CF */ maybe_trigger_vblank(6); { uint16_t a=0xD402; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D29:;
    /* $8D29: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D2A:;
    /* $8D2A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAE02); FLAG_NZ(g_cpu.A);
label_8D2D:;
    /* $8D2D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D2E:;
    /* $8D2E: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xB002); FLAG_NZ(g_cpu.A);
label_8D31:;
    /* $8D31: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D32:;
    /* $8D32: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D34:;
    /* $8D34: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D36:;
    /* $8D36: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8D39:;
    /* $8D39: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D3A:;
    /* $8D3A: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8D3B:;
    /* $8D3B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D3C:;
    /* $8D3C: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D3E:;
    /* $8D3E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8D41:;
    /* $8D41: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D42:;
    /* $8D42: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8D45:;
    /* $8D45: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D46:;
    /* $8D46: DA */ maybe_trigger_vblank(2); /* NOP */
label_8D47:;
    /* $8D47: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D48:;
    /* $8D48: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D4B:;
    /* $8D4B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D4C:;
    /* $8D4C: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDE02 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D4F:;
    /* $8D4F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D50:;
    /* $8D50: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D53:;
    /* $8D53: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D54:;
    /* $8D54: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8D55:;
    /* $8D55: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D57:;
    /* $8D57: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D58:;
    /* $8D58: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D5B:;
    /* $8D5B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D5C:;
    /* $8D5C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xC3C0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D5F:;
    /* $8D5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D61:;
    /* $8D61: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D63:;
    /* $8D63: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D65:;
    /* $8D65: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8D67:;
    /* $8D67: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D69:;
    /* $8D69: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D6B:;
    /* $8D6B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D6D:;
    /* $8D6D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D6F:;
    /* $8D6F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D71:;
    /* $8D71: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D73:;
    /* $8D73: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D75:;
    /* $8D75: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D77:;
    /* $8D77: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D79:;
    /* $8D79: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D7B:;
    /* $8D7B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D7D:;
    /* $8D7D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8D7F:;
    /* $8D7F: 5A */ maybe_trigger_vblank(2); /* NOP */
label_8D80:;
    /* $8D80: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCF03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D83:;
    /* $8D83: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D85:;
    /* $8D85: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8D87:;
    /* $8D87: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8D89:;
    /* $8D89: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D8B:;
    /* $8D8B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D8D:;
    /* $8D8D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D8F:;
    /* $8D8F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D91:;
    /* $8D91: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D93:;
    /* $8D93: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D95:;
    /* $8D95: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D97:;
    /* $8D97: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D99:;
    /* $8D99: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8D9C:;
    /* $8D9C: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8D9E:;
    /* $8D9E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DA0:;
    /* $8DA0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA2:;
    /* $8DA2: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DA4:;
    /* $8DA4: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8DA6:;
    /* $8DA6: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DA8:;
    /* $8DA8: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DAA:;
    /* $8DAA: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCC01); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DAD:;
    /* $8DAD: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DAF:;
    /* $8DAF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DB1:;
    /* $8DB1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DB3:;
    /* $8DB3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DB5:;
    /* $8DB5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DB7:;
    /* $8DB7: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8DBA:;
    /* $8DBA: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8DBC:;
    /* $8DBC: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DBE:;
    /* $8DBE: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DC0:;
    /* $8DC0: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DC2:;
    /* $8DC2: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8DC4:;
    /* $8DC4: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8DC5:;
    /* $8DC5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8DC7:;
    /* $8DC7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8DC9:;
    /* $8DC9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCC + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DCB:; /* main_jamacy */
    /* $8DCB: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DCD:;
    /* $8DCD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DCF:;
    /* $8DCF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DD1:;
    /* $8DD1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DD3:;
    /* $8DD3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DD5:;
    /* $8DD5: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8DD8:;
    /* $8DD8: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8DDA:;
    /* $8DDA: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DDC:;
    /* $8DDC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DDE:;
    /* $8DDE: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DE0:;
    /* $8DE0: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8DE2:;
    /* $8DE2: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DE4:;
    /* $8DE4: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DE6:;
    /* $8DE6: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCE01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DE9:;
    /* $8DE9: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DEB:;
    /* $8DEB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DED:;
    /* $8DED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DEF:;
    /* $8DEF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DF1:;
    /* $8DF1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DF3:;
    /* $8DF3: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C1); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_8DF6:;
    /* $8DF6: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8DF8:;
    /* $8DF8: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8DFA:;
    /* $8DFA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DFC:;
    /* $8DFC: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DFE:;
    /* $8DFE: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8E00:;
    /* $8E00: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8E01:;
    /* $8E01: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E03:;
    /* $8E03: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E05:;
    /* $8E05: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E07:;
    /* $8E07: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E09:;
    /* $8E09: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E0B:;
    /* $8E0B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E0D:;
    /* $8E0D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E0F:;
    /* $8E0F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E11:;
    /* $8E11: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02D5 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E14:; /* main_bomb_flier_penpen */
    /* $8E14: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E16:;
    /* $8E16: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E18:;
    /* $8E18: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x42 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E1A:;
    /* $8E1A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8E1C:;
    /* $8E1C: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCF03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E1F:;
    /* $8E1F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E21:;
    /* $8E21: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8E23:;
    /* $8E23: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8E25:;
    /* $8E25: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E27:;
    /* $8E27: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E29:;
    /* $8E29: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E2B:;
    /* $8E2B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E2D:;
    /* $8E2D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E2F:;
    /* $8E2F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E31:;
    /* $8E31: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E33:;
    /* $8E33: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x88 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E35:;
    /* $8E35: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E36:;
    /* $8E36: EA */ maybe_trigger_vblank(2); /* NOP */
label_8E37:;
    /* $8E37: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E39:;
    /* $8E39: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E3B:;
    /* $8E3B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8E3D:;
    /* $8E3D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E3F:;
    /* $8E3F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8E41:;
    /* $8E41: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEA + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E43:;
    /* $8E43: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xEB + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8E45:;
    /* $8E45: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xEA + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8E47:;
    /* $8E47: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x82 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E49:;
    /* $8E49: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xF0 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E4B:;
    /* $8E4B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E4D:;
    /* $8E4D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E4F:;
    /* $8E4F: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x81 + g_cpu.X) & 0xFF), g_cpu.A);
label_8E51:;
    /* $8E51: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8E52:;
    /* $8E52: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_8E53:;
    /* $8E53: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E55:;
    /* $8E55: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_8E57:;
    /* $8E57: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xF4); FLAG_NZ(g_cpu.Y);
label_8E59:;
    /* $8E59: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x13 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8E5B:;
    /* $8E5B: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8E5C:;
    /* $8E5C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E5E:;
    /* $8E5E: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E60:;
    /* $8E60: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8E62:;
    /* $8E62: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E64:;
    /* $8E64: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E66:;
    /* $8E66: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E68:;
    /* $8E68: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E6A:;
    /* $8E6A: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E6C:;
    /* $8E6C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E6D:;
    /* $8E6D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E6E:;
    /* $8E6E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E70:;
    /* $8E70: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E71:;
    /* $8E71: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E72:;
    /* $8E72: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x02)?1:0; g_cpu.X=(t-0x02)&0xFF; FLAG_NZ(g_cpu.X); }
label_8E74:;
    /* $8E74: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCD02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E77:;
    /* $8E77: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E78:;
    /* $8E78: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCF02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E7B:;
    /* $8E7B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E7C:;
    /* $8E7C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8E80;
label_8E7E:;
    /* $8E7E: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E80:;
    /* $8E80: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8E81:;
    /* $8E81: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E82:;
    /* $8E82: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E84:;
    /* $8E84: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x58 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8E86:;
    /* $8E86: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E88:;
    /* $8E88: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E8A:;
    /* $8E8A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8E8C:;
    /* $8E8C: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E8E:;
    /* $8E8E: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E90:;
    /* $8E90: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8E92:;
    /* $8E92: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8E94:;
    /* $8E94: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8E96:;
    /* $8E96: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E97:;
    /* $8E97: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E98:;
    /* $8E98: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E9A:;
    /* $8E9A: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8E9B:;
    /* $8E9B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8E9C:;
    /* $8E9C: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x02)?1:0; g_cpu.X=(t-0x02)&0xFF; FLAG_NZ(g_cpu.X); }
label_8E9E:;
    /* $8E9E: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8EA0:;
    /* $8EA0: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8EA2:;
    /* $8EA2: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8EA4:;
    /* $8EA4: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8EA6:;
    /* $8EA6: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_8EA7:;
    /* $8EA7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8EA8:;
    /* $8EA8: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDA02 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8EAB:;
    /* $8EAB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8EAC:;
    /* $8EAC: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8EAF:;
    /* $8EAF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8EB0:;
    /* $8EB0: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xDD84; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8EB3:;
    /* $8EB3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8EB4:;
    /* $8EB4: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8EB7:;
    /* $8EB7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8EB8:;
    /* $8EB8: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8EBA:;
    /* $8EBA: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8EBC:;
    /* $8EBC: E2 */ maybe_trigger_vblank(2); /* NOP */
label_8EBE:;
    /* $8EBE: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8EC0:;
    /* $8EC0: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8EC2:;
    /* $8EC2: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8EC4:;
    /* $8EC4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8EC6:;
    /* $8EC6: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8EC8:;
    /* $8EC8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8EC9:;
    /* $8EC9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8ECA:;
    /* $8ECA: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8ECC:;
    /* $8ECC: EA */ maybe_trigger_vblank(2); /* NOP */
label_8ECD:;
    /* $8ECD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8ECE:;
    /* $8ECE: EB */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8ED0:;
    /* $8ED0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8ED0); return;
}

void func_A904_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b13");
#endif
label_A904:;
    /* $A904: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A906:;
    /* $A906: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A907:;
    /* $A907: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A908:;
    /* $A908: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A90A:;
    /* $A90A: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A90C:;
    /* $A90C: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A90E:;
    /* $A90E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A910:;
    /* $A910: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A912:;
    /* $A912: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A914:;
    /* $A914: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A916:;
    /* $A916: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A918:;
    /* $A918: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x01 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A91A:;
    /* $A91A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xD8; FLAG_NZ(g_cpu.A);
label_A91C:;
    /* $A91C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A91E:;
    /* $A91E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A91F:;
    /* $A91F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A920:;
    /* $A920: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A922:;
    /* $A922: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A926;
label_A924:;
    /* $A924: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A926:;
    /* $A926: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A927:;
    /* $A927: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A928:;
    /* $A928: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A92A:;
    /* $A92A: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A92C:;
    /* $A92C: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A92E:;
    /* $A92E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A930:;
    /* $A930: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xDA; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A932:;
    /* $A932: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A934:;
    /* $A934: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A935:;
    /* $A935: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A936:;
    /* $A936: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_A938:;
    /* $A938: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A93A:;
    /* $A93A: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A93C:;
    /* $A93C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A93E:;
    /* $A93E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE02 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A941:;
    /* $A941: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A942:;
    /* $A942: EE */ maybe_trigger_vblank(6); { uint16_t a=0xE302; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A945:;
    /* $A945: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAB + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A947:;
    /* $A947: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A94A:;
    /* $A94A: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xD8; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A94C:;
    /* $A94C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A94E:;
    /* $A94E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A94F:;
    /* $A94F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A950:;
    /* $A950: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A952:;
    /* $A952: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A956;
label_A954:;
    /* $A954: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A956:;
    /* $A956: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_A957:;
    /* $A957: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A958:;
    /* $A958: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A959:;
    /* $A959: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A95A:;
    /* $A95A: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFA02 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A95D:;
    /* $A95D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A95E:;
    /* $A95E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_A960:;
    /* $A960: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFC02 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A963:;
    /* $A963: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A964:;
    /* $A964: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xDC; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A966:;
    /* $A966: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A96A;
label_A968:;
    /* $A968: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A969:;
    /* $A969: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A96A:;
    /* $A96A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xF102; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A96D:;
    /* $A96D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A96E:;
    /* $A96E: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_A96F:;
    /* $A96F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A970:;
    /* $A970: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A972:;
    /* $A972: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xCF02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A975:;
    /* $A975: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A976:;
    /* $A976: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xAB02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A979:;
    /* $A979: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A97B:;
    /* $A97B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A97C:;
    /* $A97C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x8A02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A97F:;
    /* $A97F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x02F1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A982:;
    /* $A982: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A984:;
    /* $A984: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A986:;
    /* $A986: CF */ maybe_trigger_vblank(6); { uint16_t a=0xAC02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A989:;
    /* $A989: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98A:;
    /* $A98A: EF */ maybe_trigger_vblank(6); { uint16_t a=0xFF02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A98D:;
    /* $A98D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A98E:;
    /* $A98E: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xEE02 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A991:;
    /* $A991: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A992:;
    /* $A992: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A996;
label_A994:;
    /* $A994: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A996:;
    /* $A996: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A997:;
    /* $A997: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x019B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A99A:;
    /* $A99A: 99 */ maybe_trigger_vblank(5); nes_write((0x9A01 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A99D:;
    /* $A99D: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x99 + g_cpu.X) & 0xFF), g_cpu.A);
label_A99F:;
    /* $A99F: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x97 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A1:;
    /* $A9A1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x9A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x97 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A5:;
    /* $A9A5: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A7:;
    /* $A9A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x98 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0146); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A9AE:;
    /* $A9AE: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x41; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B0:;
    /* $A9B0: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x81; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B2:;
    /* $A9B2: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xC1; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B4:;
    /* $A9B4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x2C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9B6:;
    /* $A9B6: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9B8:;
    /* $A9B8: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x41 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9BA:;
    /* $A9BA: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9BC:;
    /* $A9BC: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0xC1 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A9BE:;
    /* $A9BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BE); return;
}

void func_A504_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A504_b13");
#endif
label_A504:;
    /* $A504: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A507:;
    /* $A507: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A50A:;
    /* $A50A: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_A50D:;
    /* $A50D: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_A510:;
    /* $A510: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A512:;
    /* $A512: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_A515:;
    /* $A515: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A516:;
    /* $A516: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A518:;
    /* $A518: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A519:;
    /* $A519: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03DE + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A51C:;
    /* $A51C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xDF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51E:;
    /* $A51E: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xDEDF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A521:;
    /* $A521: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xE002; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A524:;
    /* $A524: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A526:;
    /* $A526: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A528:;
    /* $A528: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A52A:;
    /* $A52A: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A52C:;
    /* $A52C: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A52E:;
    /* $A52E: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A530:;
    /* $A530: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xE0 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A532:;
    /* $A532: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A534:;
    /* $A534: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A535:;
    /* $A535: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA7); FLAG_NZ(g_cpu.X);
label_A537:;
    /* $A537: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A538:;
    /* $A538: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A53A:;
    /* $A53A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x3B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A53C:;
    /* $A53C: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0601 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A53F:;
    /* $A53F: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x013E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A542:;
    /* $A542: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x3F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A544:;
    /* $A544: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_88E8_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E8_b13");
#endif
label_88E8:;
    /* $88E8: EA */ maybe_trigger_vblank(2); /* NOP */
label_88E9:;
    /* $88E9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88EA:;
    /* $88EA: EB */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88EC:;
    /* $88EC: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_88EF:;
    /* $88EF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88F0:;
    /* $88F0: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_88F2:;
    /* $88F2: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_88F4:;
    /* $88F4: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88F6:;
    /* $88F6: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xDB42 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_88F9:;
    /* $88F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88FA:;
    /* $88FA: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_88FB:;
    /* $88FB: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_88E9;
    }
label_88FD:;
    /* $88FD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88FE:;
    /* $88FE: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xDF02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8901:;
    /* $8901: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8902:;
    /* $8902: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x02; g_cpu.C=(g_cpu.X>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8904:;
    /* $8904: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8906:;
    /* $8906: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8908:;
    /* $8908: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_890A:;
    /* $890A: DC */ maybe_trigger_vblank(4); (void)nes_read((0xDC02 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_890D:;
    /* $890D: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_890E:;
    /* $890E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x30; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8910:;
    /* $8910: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8912:;
    /* $8912: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8914:;
    /* $8914: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8917:;
    /* $8917: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8918:;
    /* $8918: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_891A:;
    /* $891A: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_891C:;
    /* $891C: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_891E:;
    /* $891E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x30; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8920:;
    /* $8920: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDE02 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8923:;
    /* $8923: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8924:;
    /* $8924: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8927:;
    /* $8927: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8928:;
    /* $8928: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_892A:;
    /* $892A: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_892C:;
    /* $892C: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_892E:;
    /* $892E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x30; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8930:;
    /* $8930: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEF02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8933:;
    /* $8933: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8934:;
    /* $8934: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8937:;
    /* $8937: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8938:;
    /* $8938: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_893A:;
    /* $893A: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_893C:;
    /* $893C: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_893E:;
    /* $893E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_8940:;
    /* $8940: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8942:;
    /* $8942: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8944:;
    /* $8944: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8946:;
    /* $8946: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8948:;
    /* $8948: CE */ maybe_trigger_vblank(6); { uint16_t a=0xCE03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_894B:;
    /* $894B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_894D:;
    /* $894D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03C4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8950:;
    /* $8950: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8952:;
    /* $8952: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8954:;
    /* $8954: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8956:;
    /* $8956: CF */ maybe_trigger_vblank(6); { uint16_t a=0xCF03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8959:;
    /* $8959: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_895B:;
    /* $895B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03C4; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_895E:;
    /* $895E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8960:;
    /* $8960: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8962:;
    /* $8962: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8963:;
    /* $8963: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8965:;
    /* $8965: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8967:;
    /* $8967: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8969:;
    /* $8969: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xA1 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_896B:;
    /* $896B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_896D:;
    /* $896D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_896F:;
    /* $896F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8971:;
    /* $8971: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8973:;
    /* $8973: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8975:;
    /* $8975: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8977:;
    /* $8977: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8979:;
    /* $8979: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_897B:;
    /* $897B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_897D:;
    /* $897D: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_897E:;
    /* $897E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_8980:;
    /* $8980: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x01; FLAG_NZ(g_cpu.A);
label_8982:;
    /* $8982: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xA301); FLAG_NZ(g_cpu.Y);
label_8985:;
    /* $8985: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8987:;
    /* $8987: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8989:;
    /* $8989: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_898B:;
    /* $898B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_898D:;
    /* $898D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_898F:;
    /* $898F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8991:;
    /* $8991: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8992:;
    /* $8992: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_8994:;
    /* $8994: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8996:;
    /* $8996: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_8998:;
    /* $8998: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_899A:;
    /* $899A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x01); FLAG_NZ(g_cpu.Y);
label_899C:;
    /* $899C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_899E:;
    /* $899E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_89A0:;
    /* $89A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_89A2:;
    /* $89A2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_89A3:;
    /* $89A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89A5:;
    /* $89A5: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xAE + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89A7:;
    /* $89A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAF + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89A9:;
    /* $89A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89AB:;
    /* $89AB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89AD:;
    /* $89AD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89AF:;
    /* $89AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89B1:;
    /* $89B1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89B3:;
    /* $89B3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA7 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89B5:;
    /* $89B5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89B7:;
    /* $89B7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_89B9:;
    /* $89B9: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02B9 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89BC:;
    /* $89BC: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_89BD:;
    /* $89BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89BE:;
    /* $89BE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_89BF:;
    /* $89BF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89C0:;
    /* $89C0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_89C1:;
    /* $89C1: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_89C2:; /* main_search_snake */
    /* $89C2: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_89C4:;
    /* $89C4: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_89C6:;
    /* $89C6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x3E); FLAG_NZ(g_cpu.A);
label_89C8:;
    /* $89C8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBA02 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89CB:;
    /* $89CB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89CC:;
    /* $89CC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_89CD:;
    /* $89CD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89CE:;
    /* $89CE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_89CF:;
    /* $89CF: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_89D0:;
    /* $89D0: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_89D2:;
    /* $89D2: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x41 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_89D4:;
    /* $89D4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x3E); FLAG_NZ(g_cpu.A);
label_89D6:;
    /* $89D6: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_89D7:;
    /* $89D7: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89D8:;
    /* $89D8: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89DA:;
    /* $89DA: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_89DC:;
    /* $89DC: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_89DE:;
    /* $89DE: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_89E0:;
    /* $89E0: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_89E2:;
    /* $89E2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x3E); FLAG_NZ(g_cpu.A);
label_89E4:;
    /* $89E4: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_89E5:;
    /* $89E5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89E6:;
    /* $89E6: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89E8:;
    /* $89E8: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_89EA:;
    /* $89EA: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_89EC:;
    /* $89EC: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_89EE:;
    /* $89EE: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x41 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_89F0:;
    /* $89F0: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_89F2:;
    /* $89F2: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_89F5:;
    /* $89F5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89F6:;
    /* $89F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89F9:;
    /* $89F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_89FA:;
    /* $89FA: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_89FC:;
    /* $89FC: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBB42 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_89FF:;
    /* $89FF: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8A00:;
    /* $8A00: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBD42 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_8A03:;
    /* $8A03: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8A04:;
    /* $8A04: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x3E; FLAG_NZ(g_cpu.A);
label_8A06:;
    /* $8A06: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8A07:;
    /* $8A07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A08:;
    /* $8A08: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A0A:;
    /* $8A0A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A0C:;
    /* $8A0C: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A0E:;
    /* $8A0E: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_8A10:;
    /* $8A10: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A12:;
    /* $8A12: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8A15:;
    /* $8A15: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A16:;
    /* $8A16: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A19:;
    /* $8A19: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A1A:;
    /* $8A1A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x3E; FLAG_NZ(g_cpu.A);
label_8A1C:;
    /* $8A1C: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8A1D:;
    /* $8A1D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A1E:;
    /* $8A1E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A20:;
    /* $8A20: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A22:;
    /* $8A22: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A24:;
    /* $8A24: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8A26:;
    /* $8A26: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x41 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8A28:;
    /* $8A28: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8A2B:;
    /* $8A2B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A2C:;
    /* $8A2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A2F:;
    /* $8A2F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A30:;
    /* $8A30: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2E; FLAG_NZ(g_cpu.A);
label_8A32:;
    /* $8A32: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8A33:;
    /* $8A33: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A34:;
    /* $8A34: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A36:;
    /* $8A36: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A38:;
    /* $8A38: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A3A:;
    /* $8A3A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_8A3C:;
    /* $8A3C: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8A3E:;
    /* $8A3E: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8A41:;
    /* $8A41: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A42:;
    /* $8A42: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A45:;
    /* $8A45: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A46:;
    /* $8A46: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0A88), 13); return; }
label_8A48:;
    /* $8A48: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8A4A:;
    /* $8A4A: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A4C:;
    /* $8A4C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A4E:;
    /* $8A4E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8A50:;
    /* $8A50: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8A52:;
    /* $8A52: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8A54:;
    /* $8A54: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8A59;
label_8A56:;
    /* $8A56: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8A57:;
    /* $8A57: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A59:;
    /* $8A59: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A5B:;
    /* $8A5B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A5D:;
    /* $8A5D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A5F:;
    /* $8A5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A61:;
    /* $8A61: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A63:;
    /* $8A63: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A65:;
    /* $8A65: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A67:;
    /* $8A67: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A69:;
    /* $8A69: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x11 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A6B:;
    /* $8A6B: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x03E3 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A6E:;
    /* $8A6E: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8A70:;
    /* $8A70: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A72:;
    /* $8A72: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A74:;
    /* $8A74: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A76:;
    /* $8A76: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x03 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A78:;
    /* $8A78: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x03 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A7A:;
    /* $8A7A: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A7C:;
    /* $8A7C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_8A81;
label_8A7E:;
    /* $8A7E: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8A80:;
    /* $8A80: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8A81:;
    /* $8A81: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A83:;
    /* $8A83: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A85:;
    /* $8A85: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A87:;
    /* $8A87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A89:;
    /* $8A89: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A8B:;
    /* $8A8B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A8D:;
    /* $8A8D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A8F:;
    /* $8A8F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A91:;
    /* $8A91: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8A92:;
    /* $8A92: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8A94:;
    /* $8A94: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8A95:;
    /* $8A95: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A97:;
    /* $8A97: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A99:;
    /* $8A99: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8A9B:;
    /* $8A9B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A9D:;
    /* $8A9D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A9F:;
    /* $8A9F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AA1:;
    /* $8AA1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AA3:;
    /* $8AA3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AA5:;
    /* $8AA5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AA7:;
    /* $8AA7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AA9:;
    /* $8AA9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AAB:;
    /* $8AAB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AAD:;
    /* $8AAD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AAF:;
    /* $8AAF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AB1:;
    /* $8AB1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AB3:;
    /* $8AB3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AB5:;
    /* $8AB5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AB7:;
    /* $8AB7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AB9:;
    /* $8AB9: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xF3); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8ABB:;
    /* $8ABB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8ABD:;
    /* $8ABD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8ABF:;
    /* $8ABF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AC1:;
    /* $8AC1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AC3:;
    /* $8AC3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AC5:;
    /* $8AC5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AC7:;
    /* $8AC7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AC9:;
    /* $8AC9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8ACB:;
    /* $8ACB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8ACD:;
    /* $8ACD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8ACF:;
    /* $8ACF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AD1:;
    /* $8AD1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AD3:;
    /* $8AD3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AD5:;
    /* $8AD5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AD7:;
    /* $8AD7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x13 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AD9:;
    /* $8AD9: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8ADA:;
    /* $8ADA: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8ADC:;
    /* $8ADC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8ADD:;
    /* $8ADD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8ADF:;
    /* $8ADF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AE1:;
    /* $8AE1: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8AE3:;
    /* $8AE3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AE5:;
    /* $8AE5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AE7:;
    /* $8AE7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AE9:;
    /* $8AE9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AEB:;
    /* $8AEB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AED:;
    /* $8AED: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AEF:;
    /* $8AEF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AF1:;
    /* $8AF1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AF3:;
    /* $8AF3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AF5:;
    /* $8AF5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AF7:;
    /* $8AF7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AF9:;
    /* $8AF9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AFB:; /* main_dada */
    /* $8AFB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AFD:;
    /* $8AFD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8AFF:;
    /* $8AFF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B01:;
    /* $8B01: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B02:;
    /* $8B02: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xF344; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B05:;
    /* $8B05: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B07:;
    /* $8B07: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B09:;
    /* $8B09: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B0B:;
    /* $8B0B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B0D:;
    /* $8B0D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B0F:;
    /* $8B0F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B11:;
    /* $8B11: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B13:;
    /* $8B13: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B15:;
    /* $8B15: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B17:;
    /* $8B17: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B19:;
    /* $8B19: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B1B:;
    /* $8B1B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B1D:;
    /* $8B1D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xF2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B1F:;
    /* $8B1F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B21:;
    /* $8B21: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B23:;
    /* $8B23: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B24:;
    /* $8B24: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x46; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8B26:;
    /* $8B26: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCB02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B29:;
    /* $8B29: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B2B:;
    /* $8B2B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B2D:;
    /* $8B2D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B2F:;
    /* $8B2F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xDD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B31:;
    /* $8B31: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B33:;
    /* $8B33: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B35:;
    /* $8B35: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B37:;
    /* $8B37: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B39:;
    /* $8B39: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B3B:;
    /* $8B3B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B3D:;
    /* $8B3D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B3F:;
    /* $8B3F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8B40:;
    /* $8B40: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xEC03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B43:;
    /* $8B43: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B45:;
    /* $8B45: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B47:;
    /* $8B47: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B49:;
    /* $8B49: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B4B:;
    /* $8B4B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xEC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B4D:;
    /* $8B4D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xBA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8B4F:;
    /* $8B4F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xEE + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8B51:;
    /* $8B51: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x09 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8B53:;
    /* $8B53: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x02B2 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8B56:;
    /* $8B56: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B58:; /* main_potton */
    /* $8B58: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8B5A:;
    /* $8B5A: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8B5C:;
    /* $8B5C: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8B5E:;
    /* $8B5E: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x41 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8B60:;
    /* $8B60: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8B63:;
    /* $8B63: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B64:;
    /* $8B64: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B67:;
    /* $8B67: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B68:;
    /* $8B68: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x3E; FLAG_NZ(g_cpu.A);
label_8B6A:;
    /* $8B6A: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8B6B:;
    /* $8B6B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B6C:;
    /* $8B6C: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B6E:;
    /* $8B6E: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8B70:;
    /* $8B70: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8B72:;
    /* $8B72: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_8B74:;
    /* $8B74: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x01 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_8B76:;
    /* $8B76: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8B79:;
    /* $8B79: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B7A:;
    /* $8B7A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B7D:;
    /* $8B7D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B7E:;
    /* $8B7E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2E; FLAG_NZ(g_cpu.A);
label_8B80:;
    /* $8B80: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8B81:;
    /* $8B81: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B82:;
    /* $8B82: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B84:;
    /* $8B84: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8B86:;
    /* $8B86: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8B88:;
    /* $8B88: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8B8A:;
    /* $8B8A: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x41 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8B8C:;
    /* $8B8C: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_8B8F:;
    /* $8B8F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B90:;
    /* $8B90: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE02 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8B93:;
    /* $8B93: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8B94:;
    /* $8B94: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x36); FLAG_NZ(g_cpu.A);
label_8B96:;
    /* $8B96: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8B98:;
    /* $8B98: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8B9A:;
    /* $8B9A: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8B9C:;
    /* $8B9C: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8B9E:;
    /* $8B9E: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BA0:;
    /* $8BA0: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BA2:;
    /* $8BA2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x36); FLAG_NZ(g_cpu.A);
label_8BA4:;
    /* $8BA4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BA6:;
    /* $8BA6: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BA8:;
    /* $8BA8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BA9:;
    /* $8BA9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8BAA:;
    /* $8BAA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8BAC:;
    /* $8BAC: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8BAD:;
    /* $8BAD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8BAE:;
    /* $8BAE: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x02)?1:0; g_cpu.X=(t-0x02)&0xFF; FLAG_NZ(g_cpu.X); }
label_8BB0:;
    /* $8BB0: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x3A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BB2:;
    /* $8BB2: CF */ maybe_trigger_vblank(6); { uint16_t a=0xD002; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BB5:;
    /* $8BB5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8BB6:;
    /* $8BB6: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCD02); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BB9:;
    /* $8BB9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8BBA:;
    /* $8BBA: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8BBB:;
    /* $8BBB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8BBC:;
    /* $8BBC: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BBE:;
    /* $8BBE: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BC0:;
    /* $8BC0: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0802; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BC3:;
    /* $8BC3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8BC4:;
    /* $8BC4: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_8BC5:;
    /* $8BC5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8BC6:;
    /* $8BC6: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BC8:;
    /* $8BC8: CF */ maybe_trigger_vblank(6); { uint16_t a=0xD002; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BCB:;
    /* $8BCB: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8BCC:;
    /* $8BCC: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8BCE:;
    /* $8BCE: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x02 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BD0:;
    /* $8BD0: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BD2:;
    /* $8BD2: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BD4:;
    /* $8BD4: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BD6:;
    /* $8BD6: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_8BD8:;
    /* $8BD8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_8BDA:;
    /* $8BDA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8BDB:;
    /* $8BDB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BDD:;
    /* $8BDD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BDF:;
    /* $8BDF: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BE1:;
    /* $8BE1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BE3:;
    /* $8BE3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BE5:;
    /* $8BE5: EE */ maybe_trigger_vblank(6); { uint16_t a=0x03CD; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BE8:;
    /* $8BE8: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8BEA:;
    /* $8BEA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BEC:;
    /* $8BEC: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BEE:;
    /* $8BEE: CF */ maybe_trigger_vblank(6); { uint16_t a=0xCF03; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8BF1:;
    /* $8BF1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BF3:;
    /* $8BF3: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x43A2 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8BF6:;
    /* $8BF6: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8BF7:;
    /* $8BF7: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BF9:;
    /* $8BF9: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8BFB:;
    /* $8BFB: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8BFD:; /* main_hammer_joe */
    /* $8BFD: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x43A6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C00:;
    /* $8C00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8C02:;
    /* $8C02: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8C03:;
    /* $8C03: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8C05:;
    /* $8C05: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C07:;
    /* $8C07: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x43A7 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C0A:;
    /* $8C0A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C0B:;
    /* $8C0B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C0D:;
    /* $8C0D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8C0F:;
    /* $8C0F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C11:;
    /* $8C11: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x43A6 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C14:;
    /* $8C14: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8C16:;
    /* $8C16: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C5B;
label_8C18:;
    /* $8C18: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8C1A:;
    /* $8C1A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C1C:;
    /* $8C1C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x43); FLAG_NZ(g_cpu.A);
label_8C1E:;
    /* $8C1E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C1F:;
    /* $8C1F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C21:;
    /* $8C21: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB3 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8C23:;
    /* $8C23: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C25:;
    /* $8C25: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x43A4 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C28:;
    /* $8C28: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_8C2A:;
    /* $8C2A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_8C6F;
label_8C2C:;
    /* $8C2C: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x03 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8C2E:;
    /* $8C2E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x36); FLAG_NZ(g_cpu.A);
label_8C30:;
    /* $8C30: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C31:;
    /* $8C31: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C33:;
    /* $8C33: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C35:;
    /* $8C35: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8C37:;
    /* $8C37: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C39:;
    /* $8C39: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C3B:;
    /* $8C3B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8C3D:;
    /* $8C3D: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xA0 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C3F:;
    /* $8C3F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C41:;
    /* $8C41: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C43:;
    /* $8C43: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C45:;
    /* $8C45: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C47:;
    /* $8C47: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C49:;
    /* $8C49: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C4B:;
    /* $8C4B: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xAC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C4D:;
    /* $8C4D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xA3 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8C4F:;
    /* $8C4F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C51:;
    /* $8C51: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C53:;
    /* $8C53: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xAF + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8C55:;
    /* $8C55: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C57:;
    /* $8C57: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C59:;
    /* $8C59: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xA0 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C5B:;
    /* $8C5B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C5D:;
    /* $8C5D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA5 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C5F:;
    /* $8C5F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C61:;
    /* $8C61: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C63:;
    /* $8C63: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C65:;
    /* $8C65: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C67:;
    /* $8C67: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xAC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C69:;
    /* $8C69: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xA3 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8C6B:;
    /* $8C6B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C6D:;
    /* $8C6D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C6F:;
    /* $8C6F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xAF + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8C71:;
    /* $8C71: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C73:;
    /* $8C73: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C75:;
    /* $8C75: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xA0 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C77:;
    /* $8C77: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C79:;
    /* $8C79: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C7B:;
    /* $8C7B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C7D:;
    /* $8C7D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C7F:;
    /* $8C7F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C81:;
    /* $8C81: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C83:;
    /* $8C83: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xAC + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8C85:;
    /* $8C85: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xA3 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8C87:;
    /* $8C87: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C89:;
    /* $8C89: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C8B:;
    /* $8C8B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xAF + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8C8D:;
    /* $8C8D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xB2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C8F:;
    /* $8C8F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C91:;
    /* $8C91: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x03DC, -1); return;
label_8C94:; return;
label_8C96:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9E:; return;
label_8CA0:; return;
label_8CA2:; return;
label_8CA3:; return;
label_8CA5:; return;
label_8CA7:; return;
label_8CA8:; return;
label_8CAA:; return;
label_8CAD:; return;
label_8CAF:; return;
label_8CB0:; return;
label_8CB3:; return;
label_8CB4:; return;
label_8CB6:; return;
label_8CB7:; return;
label_8CB9:; return;
label_8CBA:; return;
label_8CBC:; return;
label_8CBE:; return;
label_8CC0:; return;
label_8CC2:; return;
label_8CC3:; return;
label_8CC4:; return;
label_8CC7:; return;
label_8CC8:; return;
label_8CCB:; return;
label_8CCE:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD4:; return;
label_8CD6:; return;
label_8CD8:; return;
label_8CDA:; return;
label_8CDC:; return;
label_8CDD:; return;
label_8CDF:; return;
label_8CE1:; return;
label_8CE2:; return;
label_8CE4:; return;
label_8CE7:; return;
label_8CE9:; return;
label_8CEA:; return;
label_8CED:; return;
label_8CEE:; return;
label_8CEF:; return;
label_8CF1:; return;
label_8CF3:; return;
label_8CF4:; return;
label_8CF6:; return;
label_8CF8:; return;
label_8CFB:; return;
label_8CFD:; return;
label_8CFE:; return;
label_8D01:; return;
label_8D02:; return;
label_8D05:; return;
label_8D07:; return;
label_8D08:; return;
label_8D0A:; return;
label_8D0B:; return;
label_8D0C:; return;
label_8D0E:; return;
label_8D10:; return;
label_8D12:; return;
label_8D14:; return;
label_8D15:; return;
label_8D17:; return;
label_8D19:; return;
label_8D1B:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D20:; return;
label_8D23:; return;
label_8D24:; return;
label_8D26:; return;
label_8D29:; return;
label_8D2A:; return;
label_8D2D:; return;
label_8D2E:; return;
label_8D31:; return;
label_8D32:; return;
label_8D34:; return;
label_8D36:; return;
label_8D38:; return;
label_8D39:; return;
label_8D3A:; return;
label_8D3B:; return;
label_8D3C:; return;
label_8D3E:; return;
label_8D41:; return;
label_8D42:; return;
label_8D45:; return;
label_8D46:; return;
label_8D47:; return;
label_8D48:; return;
label_8D4B:; return;
label_8D4C:; return;
label_8D4F:; return;
label_8D50:; return;
label_8D53:; return;
label_8D54:; return;
label_8D55:; return;
label_8D57:; return;
label_8D58:; return;
label_8D5B:; return;
label_8D5C:; return;
label_8D5F:; return;
label_8D61:; return;
label_8D63:; return;
label_8D65:; return;
label_8D67:; return;
label_8D69:; return;
label_8D6B:; return;
label_8D6D:; return;
label_8D6F:; return;
label_8D71:; return;
label_8D73:; return;
label_8D75:; return;
label_8D77:; return;
label_8D79:; return;
label_8D7B:; return;
label_8D7D:; return;
label_8D7F:; return;
label_8D80:; return;
label_8D83:; return;
label_8D85:; return;
label_8D87:; return;
label_8D89:; return;
label_8D8B:; return;
label_8D8D:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D93:; return;
label_8D95:; return;
label_8D97:; return;
label_8D99:; return;
label_8D9C:; return;
label_8D9E:; return;
label_8DA0:; return;
label_8DA2:; return;
label_8DA4:; return;
label_8DA6:; return;
label_8DA8:; return;
label_8DAA:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB1:; return;
label_8DB3:; return;
label_8DB5:; return;
label_8DB7:; return;
label_8DBA:; return;
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
label_8DD8:; return;
label_8DDA:; return;
label_8DDC:; return;
label_8DDE:; return;
label_8DE0:; return;
label_8DE2:; return;
label_8DE4:; return;
label_8DE6:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEF:; return;
label_8DF1:; return;
label_8DF3:; return;
label_8DF6:; return;
label_8DF8:; return;
label_8DFA:; return;
label_8DFC:; return;
label_8DFE:; return;
label_8E00:; return;
label_8E01:; return;
label_8E03:; return;
label_8E05:; return;
label_8E07:; return;
label_8E09:; return;
label_8E0B:; return;
label_8E0D:; return;
label_8E0F:; return;
label_8E11:; return;
label_8E14:; return;
label_8E16:; return;
label_8E18:; return;
label_8E1A:; return;
label_8E1C:; return;
label_8E1F:; return;
label_8E21:; return;
label_8E23:; return;
label_8E25:; return;
label_8E27:; return;
label_8E29:; return;
label_8E2B:; return;
label_8E2D:; return;
label_8E2F:; return;
label_8E31:; return;
label_8E33:; return;
label_8E35:; return;
label_8E36:; return;
label_8E37:; return;
label_8E39:; return;
label_8E3B:; return;
label_8E3D:; return;
label_8E3F:; return;
label_8E41:; return;
label_8E43:; return;
label_8E45:; return;
label_8E47:; return;
label_8E49:; return;
label_8E4B:; return;
label_8E4D:; return;
label_8E4F:; return;
label_8E51:; return;
label_8E52:; return;
label_8E53:; return;
label_8E55:; return;
label_8E57:; return;
label_8E59:; return;
label_8E5B:; return;
label_8E5C:; return;
label_8E5E:; return;
label_8E60:; return;
label_8E62:; return;
label_8E64:; return;
label_8E66:; return;
label_8E68:; return;
label_8E6A:; return;
label_8E6C:; return;
label_8E6D:; return;
label_8E6E:; return;
label_8E70:; return;
label_8E71:; return;
label_8E72:; return;
label_8E74:; return;
label_8E77:; return;
label_8E78:; return;
label_8E7B:; return;
label_8E7C:; return;
label_8E7E:; return;
label_8E80:; return;
label_8E81:; return;
label_8E82:; return;
label_8E84:; return;
label_8E86:; return;
label_8E88:; return;
label_8E8A:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E90:; return;
label_8E92:; return;
label_8E94:; return;
label_8E96:; return;
label_8E97:; return;
label_8E98:; return;
label_8E9A:; return;
label_8E9B:; return;
label_8E9C:; return;
label_8E9E:; return;
label_8EA0:; return;
label_8EA2:; return;
label_8EA4:; return;
label_8EA6:; return;
label_8EA7:; return;
label_8EA8:; return;
label_8EAB:; return;
label_8EAC:; return;
label_8EAF:; return;
label_8EB0:; return;
label_8EB3:; return;
label_8EB4:; return;
label_8EB7:; return;
label_8EB8:; return;
label_8EBA:; return;
label_8EBC:; return;
label_8EBE:; return;
label_8EC0:; return;
label_8EC2:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8EC9:; return;
label_8ECA:; return;
label_8ECC:; return;
label_8ECD:; return;
label_8ECE:; return;
label_8ED0:; return;
label_8ED1:; return;
label_8ED4:; return;
label_8ED5:; return;
label_8ED8:; return;
label_8ED9:; return;
label_8EDA:; return;
label_8EDD:; return;
label_8EDF:; return;
label_8EE1:; return;
label_8EE3:; return;
label_8EE5:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEB:; return;
label_8EED:; return;
label_8EF0:; return;
label_8EF1:; return;
label_8EF4:; return;
label_8EF6:; return;
label_8EF8:; return;
label_8EFA:; return;
label_8EFC:; return;
label_8EFE:; return;
label_8F00:; return;
label_8F02:; return;
label_8F04:; return;
label_8F06:; return;
label_8F07:; return;
label_8F09:; return;
label_8F0A:; return;
label_8F0B:; return;
label_8F0C:; return;
label_8F0E:; return;
label_8F11:; return;
label_8F12:; return;
label_8F14:; return;
label_8F17:; return;
label_8F18:; return;
label_8F1A:; return;
label_8F1D:; return;
label_8F1F:; return;
label_8F21:; return;
label_8F23:; return;
label_8F25:; return;
label_8F26:; return;
label_8F28:; return;
label_8F2A:; return;
label_8F2C:; return;
label_8F2E:; return;
label_8F30:; return;
label_8F32:; return;
label_8F34:; return;
label_8F36:; return;
label_8F38:; return;
label_8F3A:; return;
label_8F3C:; return;
label_8F3E:; return;
label_8F40:; return;
label_8F42:; return;
label_8F44:; return;
label_8F46:; return;
label_8F47:; return;
label_8F48:; return;
label_8F49:; return;
label_8F4A:; return;
label_8F4B:; return;
label_8F4C:; return;
label_8F4F:; return;
label_8F52:; return;
label_8F53:; return;
label_8F54:; return;
label_8F57:; return;
label_8F59:; return;
label_8F5B:; return;
label_8F5C:; return;
label_8F5E:; return;
label_8F61:; return;
label_8F62:; return;
label_8F64:; return;
label_8F66:; return;
label_8F68:; return;
label_8F6A:; return;
label_8F6C:; return;
label_8F6E:; return;
label_8F70:; return;
label_8F73:; return;
label_8F74:; return;
label_8F75:; return;
label_8F76:; return;
label_8F78:; return;
label_8F79:; return;
label_8F7B:; return;
label_8F7D:; return;
label_8F7E:; return;
label_8F80:; return;
label_8F82:; return;
label_8F84:; return;
label_8F86:; return;
label_8F88:; return;
label_8F89:; return;
label_8F8B:; return;
label_8F8D:; return;
label_8F8F:; return;
label_8F90:; return;
label_8F92:; return;
label_8F94:; return;
label_8F95:; return;
label_8F97:; return;
label_8F99:; return;
label_8F9B:; return;
label_8F9D:; return;
label_8F9F:; return;
label_8FA1:; return;
label_8FA3:; return;
label_8FA5:; return;
label_8FA7:; return;
label_8FA9:; return;
label_8FAB:; return;
label_8FAD:; return;
label_8FAF:; return;
label_8FB1:; return;
label_8FB3:; return;
label_8FB5:; return;
label_8FB7:; return;
label_8FBA:; return;
label_8FBD:; return;
label_8FBE:; return;
label_8FC1:; return;
label_8FC4:; return;
label_8FC7:; return;
label_8FC8:; return;
label_8FCB:; return;
label_8FCC:; return;
label_8FCF:; return;
label_8FD0:; return;
label_8FD1:; return;
label_8FD2:; return;
label_8FD5:; return;
label_8FD6:; return;
label_8FD9:; return;
label_8FDA:; return;
label_8FDD:; return;
label_8FDE:; return;
label_8FDF:; return;
label_8FE0:; return;
label_8FE2:; return;
label_8FE4:; return;
label_8FE6:; return;
label_8FE8:; return;
label_8FEA:; return;
label_8FEC:; return;
label_8FEE:; return;
label_8FF1:; return;
label_8FF3:; return;
label_8FF5:; return;
label_8FF7:; return;
label_8FF9:; return;
label_8FFB:; return;
label_8FFD:; return;
label_8FFF:; return;
label_9001:; return;
label_9003:; return;
label_9005:; return;
label_9007:; return;
label_9009:; return;
label_900B:; return;
label_900D:; return;
label_900F:; return;
label_9011:; return;
label_9013:; return;
label_9015:; return;
label_9017:; return;
label_9019:; return;
label_901B:; return;
label_901D:; return;
label_901F:; return;
label_9021:; return;
label_9023:; return;
label_9025:; return;
label_9027:; return;
label_9029:; return;
label_902B:; return;
label_902D:; return;
label_902F:; return;
label_9031:; return;
label_9033:; return;
label_9035:; return;
label_9037:; return;
label_9039:; return;
label_903B:; return;
label_903D:; return;
label_903F:; return;
label_9041:; return;
label_9043:; return;
label_9045:; return;
label_9047:; return;
label_9049:; return;
label_904B:; return;
label_904D:; return;
label_904F:; return;
label_9051:; return;
label_9053:; return;
label_9055:; return;
label_9056:; return;
label_9057:; return;
label_9059:; return;
label_905B:; return;
label_905D:; return;
label_905F:; return;
label_9061:; return;
label_9063:; return;
label_9065:; return;
label_9067:; return;
label_9069:; return;
label_906B:; return;
label_906D:; return;
label_906F:; return;
label_9071:; return;
label_9073:; return;
label_9075:; return;
label_9077:; return;
label_9079:; return;
label_907B:; return;
label_907D:; return;
label_907E:; return;
label_9081:; return;
label_9083:; return;
label_9085:; return;
label_9087:; return;
label_9089:; return;
label_908B:; return;
label_908D:; return;
label_908F:; return;
label_9091:; return;
label_9093:; return;
label_9095:; return;
label_9097:; return;
label_9099:; return;
label_909B:; return;
label_909D:; return;
label_909F:; return;
label_90A1:; return;
label_90A3:; return;
label_90A5:; return;
label_90A7:; return;
label_90AA:; return;
label_90AC:; return;
label_90AE:; return;
label_90B0:; return;
label_90B2:; return;
label_90B3:; return;
label_90B5:; return;
label_90B7:; return;
label_90B9:; return;
label_90BB:; return;
label_90BD:; return;
label_90BF:; return;
label_90C1:; return;
label_90C3:; return;
label_90C5:; return;
label_90C7:; return;
label_90C9:; return;
label_90CA:; return;
label_90CC:; return;
label_90CE:; return;
label_90D0:; return;
label_90D2:; return;
label_90D4:; return;
label_90D6:; return;
label_90D8:; return;
label_90D9:; return;
label_90DB:; return;
label_90DD:; return;
label_90DF:; return;
label_90E1:; return;
label_90E3:; return;
label_90E5:; return;
label_90E7:; return;
label_90E9:; return;
label_90EB:; return;
label_90ED:; return;
label_90EE:; return;
label_90EF:; return;
label_90F2:; return;
label_90F4:; return;
label_90F6:; return;
label_90F8:; return;
label_90FA:; return;
label_90FC:; return;
label_90FE:; return;
label_9100:; return;
label_9102:; return;
label_9104:; return;
label_9105:; return;
label_9107:; return;
label_9109:; return;
label_910B:; return;
label_910D:; return;
label_910F:; return;
label_9111:; return;
label_9113:; return;
label_9115:; return;
label_9116:; return;
label_9118:; return;
label_911A:; return;
label_911B:; return;
label_911D:; return;
label_911F:; return;
label_9121:; return;
label_9123:; return;
label_9125:; return;
label_9127:; return;
label_9129:; return;
label_912B:; return;
label_912D:; return;
label_912F:; return;
label_9131:; return;
label_9133:; return;
label_9135:; return;
label_9137:; return;
label_9139:; return;
label_913B:; return;
label_913D:; return;
label_913F:; return;
label_9140:; return;
label_9142:; return;
label_9143:; return;
label_9145:; return;
label_9147:; return;
label_9149:; return;
label_914A:; return;
label_914C:; return;
label_914E:; return;
label_9150:; return;
label_9152:; return;
label_9154:; return;
label_9155:; return;
label_9157:; return;
label_9159:; return;
label_915B:; return;
label_915C:; return;
label_915E:; return;
label_9160:; return;
label_9162:; return;
label_9164:; return;
label_9166:; return;
label_9167:; return;
label_9169:; return;
label_916B:; return;
label_916D:; return;
label_916E:; return;
label_9171:; return;
label_9173:; return;
label_9175:; return;
label_9177:; return;
label_917A:; return;
label_917D:; return;
label_917F:; return;
label_9180:; return;
label_9183:; return;
label_9185:; return;
label_9187:; return;
label_9189:; return;
label_918B:; return;
label_918D:; return;
label_918F:; return;
label_9191:; return;
label_9193:; return;
label_9195:; return;
label_9197:; return;
label_9199:; return;
label_919B:; return;
label_919D:; return;
label_919F:; return;
label_91A1:; return;
label_91A3:; return;
label_91A5:; return;
label_91A7:; return;
label_91A9:; return;
label_91AB:; return;
label_91AD:; return;
label_91AF:; return;
label_91B1:; return;
label_91B3:; return;
label_91B5:; return;
label_91B7:; return;
label_91B9:; return;
label_91BB:; return;
label_91BD:; return;
label_91BF:; return;
label_91C1:; return;
label_91C3:; return;
label_91C5:; return;
label_91C7:; return;
label_91C9:; return;
label_91CB:; return;
label_91CD:; return;
label_91CF:; return;
label_91D1:; return;
label_91D3:; return;
label_91D5:; return;
label_91D7:; return;
label_91D9:; return;
label_91DA:; return;
label_91DC:; return;
label_91DE:; return;
label_91E0:; return;
label_91E2:; return;
label_91E4:; return;
label_91E6:; return;
label_91E8:; return;
label_91EA:; return;
label_91EC:; return;
label_91EE:; return;
label_91F0:; return;
label_91F2:; return;
label_91F4:; return;
label_91F6:; return;
label_91F7:; return;
label_91F8:; return;
label_91F9:; return;
label_91FB:; return;
label_91FD:; return;
label_91FF:; return;
label_9201:; return;
label_9203:; return;
label_9205:; return;
label_9207:; return;
label_9209:; return;
label_920B:; return;
label_920D:; return;
label_920F:; return;
label_9211:; return;
label_9213:; return;
label_9215:; return;
label_9217:; return;
label_9219:; return;
label_921B:; return;
label_921D:; return;
label_921F:; return;
label_9221:; return;
label_9223:; return;
label_9225:; return;
label_9227:; return;
label_9229:; return;
label_922B:; return;
label_922D:; return;
label_922F:; return;
label_9231:; return;
label_9233:; return;
label_9235:; return;
label_9238:; return;
label_923B:; return;
label_923D:; return;
label_923F:; return;
label_9242:; return;
label_9245:; return;
label_9246:; return;
label_9249:; return;
label_924A:; return;
label_924D:; return;
label_924E:; return;
label_9251:; return;
label_9253:; return;
label_9255:; return;
label_9257:; return;
label_9259:; return;
label_925B:; return;
label_925C:; return;
label_925E:; return;
label_9260:; return;
label_9262:; return;
label_9264:; return;
label_9266:; return;
label_9268:; return;
label_926A:; return;
label_926D:; return;
label_926F:; return;
label_9271:; return;
label_9273:; return;
label_9275:; return;
label_9276:; return;
label_9278:; return;
label_9279:; return;
label_927B:; return;
label_927D:; return;
label_927F:; return;
label_9281:; return;
label_9283:; return;
label_9285:; return;
label_9287:; return;
label_9289:; return;
label_928B:; return;
label_928D:; return;
label_928F:; return;
label_9291:; return;
label_9293:; return;
label_9295:; return;
label_9297:; return;
label_9299:; return;
label_929B:; return;
label_929D:; return;
label_929F:; return;
label_92A1:; return;
label_92A2:; return;
label_92A4:; return;
label_92A6:; return;
label_92A9:; return;
label_92AB:; return;
label_92AD:; return;
label_92AF:; return;
label_92B1:; return;
label_92B3:; return;
label_92B5:; return;
label_92B6:; return;
label_92B7:; return;
label_92B9:; return;
label_92BB:; return;
label_92BD:; return;
label_92BF:; return;
label_92C1:; return;
label_92C3:; return;
label_92C5:; return;
label_92C7:; return;
label_92C9:; return;
label_92CB:; return;
label_92CD:; return;
label_92CF:; return;
label_92D1:; return;
label_92D3:; return;
label_92D5:; return;
label_92D7:; return;
label_92D9:; return;
label_92DB:; return;
label_92DE:; return;
label_92E0:; return;
label_92E2:; return;
label_92E4:; return;
label_92E6:; return;
label_92E8:; return;
label_92EA:; return;
label_92EC:; return;
label_92ED:; return;
label_92EE:; return;
label_92EF:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F8:; return;
label_92FA:; return;
label_92FC:; return;
label_92FD:; return;
label_92FE:; return;
label_9300:; return;
label_9303:; return;
label_9306:; return;
label_9309:; return;
label_930A:; return;
label_930C:; return;
label_930E:; return;
label_9311:; return;
label_9312:; return;
label_9314:; return;
label_9316:; return;
label_9317:; return;
label_9319:; return;
label_931A:; return;
label_931D:; return;
label_931E:; return;
label_9320:; return;
label_9322:; return;
label_9323:; return;
label_9324:; return;
label_9326:; return;
label_9328:; return;
label_932A:; return;
label_932B:; return;
label_932E:; return;
label_9331:; return;
label_9333:; return;
label_9335:; return;
label_9337:; return;
label_9339:; return;
label_933B:; return;
label_933D:; return;
label_933F:; return;
label_9341:; return;
label_9342:; return;
label_9344:; return;
label_9347:; return;
label_9349:; return;
label_934B:; return;
label_934D:; return;
label_934F:; return;
label_9351:; return;
label_9353:; return;
label_9355:; return;
label_9357:; return;
label_9359:; return;
label_935B:; return;
label_935D:; return;
label_935E:; return;
label_9360:; return;
label_9362:; return;
label_9364:; return;
label_9366:; return;
label_9367:; return;
label_9368:; return;
label_936A:; return;
label_936B:; return;
label_936C:; return;
label_936E:; return;
label_9370:; return;
label_9372:; return;
label_9375:; return;
label_9376:; return;
label_9378:; return;
label_937A:; return;
label_937C:; return;
label_937E:; return;
label_9380:; return;
label_9382:; return;
label_9384:; return;
label_9385:; return;
label_9386:; return;
label_9388:; return;
label_9389:; return;
label_938A:; return;
label_938C:; return;
label_938E:; return;
label_9390:; return;
label_9393:; return;
label_9394:; return;
label_9397:; return;
label_9399:; return;
label_939A:; return;
label_939C:; return;
label_939E:; return;
label_939F:; return;
label_93A0:; return;
label_93A2:; return;
label_93A3:; return;
label_93A4:; return;
label_93A6:; return;
label_93A8:; return;
label_93AA:; return;
label_93AD:; return;
label_93AE:; return;
label_93B0:; return;
label_93B2:; return;
label_93B4:; return;
label_93B6:; return;
label_93B8:; return;
label_93B9:; return;
label_93BB:; return;
label_93BD:; return;
label_93BE:; return;
label_93C0:; return;
label_93C2:; return;
label_93C4:; return;
label_93C7:; return;
label_93C9:; return;
label_93CA:; return;
label_93CD:; return;
label_93CE:; return;
label_93D0:; return;
label_93D2:; return;
label_93D3:; return;
label_93D4:; return;
label_93D6:; return;
label_93D7:; return;
label_93DA:; return;
label_93DB:; return;
label_93DE:; return;
label_93E0:; return;
label_93E2:; return;
label_93E3:; return;
label_93E4:; return;
label_93E6:; return;
label_93E8:; return;
label_93EA:; return;
label_93EB:; return;
label_93ED:; return;
label_93EE:; return;
label_93F0:; return;
label_93F2:; return;
label_93F4:; return;
label_93F6:; return;
label_93F8:; return;
label_93FA:; return;
label_93FC:; return;
label_93FD:; return;
label_93FE:; return;
label_9400:; return;
label_9402:; return;
label_9404:; return;
label_9405:; return;
label_9407:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940E:; return;
label_9410:; return;
label_9412:; return;
label_9414:; return;
label_9416:; return;
label_9417:; return;
label_9419:; return;
label_941B:; return;
label_941D:; return;
label_941F:; return;
label_9421:; return;
label_9423:; return;
label_9425:; return;
label_9428:; return;
label_942A:; return;
label_942C:; return;
label_942D:; return;
label_942F:; return;
label_9431:; return;
label_9433:; return;
label_9435:; return;
label_9437:; return;
label_9439:; return;
label_943B:; return;
label_943C:; return;
label_943E:; return;
label_9440:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9447:; return;
label_9449:; return;
label_944B:; return;
label_944D:; return;
label_944F:; return;
label_9451:; return;
label_9453:; return;
label_9455:; return;
label_9457:; return;
label_9459:; return;
label_945B:; return;
label_945D:; return;
label_945E:; return;
label_9460:; return;
label_9462:; return;
label_9464:; return;
label_9466:; return;
label_9468:; return;
label_9469:; return;
label_946B:; return;
label_946D:; return;
label_946F:; return;
label_9471:; return;
label_9473:; return;
label_9475:; return;
label_9477:; return;
label_9479:; return;
label_947B:; return;
label_947D:; return;
label_947F:; return;
label_9482:; return;
label_9485:; return;
label_9486:; return;
label_9489:; return;
label_948A:; return;
label_948D:; return;
label_948E:; return;
label_9490:; return;
label_9493:; return;
label_9494:; return;
label_9497:; return;
label_9498:; return;
label_949B:; return;
label_949C:; return;
label_949F:; return;
label_94A0:; return;
label_94A2:; return;
label_94A5:; return;
label_94A7:; return;
label_94A9:; return;
label_94AB:; return;
label_94AD:; return;
label_94AF:; return;
label_94B1:; return;
label_94B3:; return;
label_94B5:; return;
label_94B6:; return;
label_94B8:; return;
label_94B9:; return;
label_94BA:; return;
label_94BB:; return;
label_94BC:; return;
label_94BD:; return;
label_94BF:; return;
label_94C1:; return;
label_94C3:; return;
label_94C5:; return;
label_94C7:; return;
label_94C9:; return;
label_94CB:; return;
label_94CD:; return;
label_94CF:; return;
label_94D1:; return;
label_94D3:; return;
label_94D5:; return;
label_94D7:; return;
label_94D9:; return;
label_94DB:; return;
label_94DD:; return;
label_94DF:; return;
label_94E1:; return;
label_94E3:; return;
label_94E4:; return;
label_94E6:; return;
label_94E7:; return;
label_94E8:; return;
label_94E9:; return;
label_94EA:; return;
label_94ED:; return;
label_94EF:; return;
label_94F1:; return;
label_94F3:; return;
label_94F5:; return;
label_94F7:; return;
label_94F9:; return;
label_94FB:; return;
label_94FD:; return;
label_94FF:; return;
label_9501:; return;
label_9503:; return;
label_9505:; return;
label_9507:; return;
label_9509:; return;
label_950B:; return;
label_950D:; return;
label_950F:; return;
label_9511:; return;
label_9512:; return;
label_9514:; return;
label_9515:; return;
label_9516:; return;
label_9517:; return;
label_9518:; return;
label_9519:; return;
label_951B:; return;
label_951D:; return;
label_951F:; return;
label_9521:; return;
label_9523:; return;
label_9525:; return;
label_9527:; return;
label_9529:; return;
label_952B:; return;
label_952D:; return;
label_952E:; return;
label_9531:; return;
label_9532:; return;
label_9535:; return;
label_9536:; return;
label_9539:; return;
label_953A:; return;
label_953D:; return;
label_953E:; return;
label_9541:; return;
label_9543:; return;
label_9545:; return;
label_9546:; return;
label_9549:; return;
label_954A:; return;
label_954D:; return;
label_954E:; return;
label_9551:; return;
label_9552:; return;
label_9553:; return;
label_9555:; return;
label_9557:; return;
label_9559:; return;
label_955B:; return;
label_955D:; return;
label_955F:; return;
label_9561:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9568:; return;
label_956B:; return;
label_956C:; return;
label_956F:; return;
label_9570:; return;
label_9573:; return;
label_9574:; return;
label_9577:; return;
label_9578:; return;
label_957A:; return;
label_957C:; return;
label_957F:; return;
label_9580:; return;
label_9583:; return;
label_9584:; return;
label_9587:; return;
label_9588:; return;
label_958B:; return;
label_958C:; return;
label_958F:; return;
label_9591:; return;
label_9593:; return;
label_9595:; return;
label_9597:; return;
label_9599:; return;
label_959B:; return;
label_959D:; return;
label_959F:; return;
label_95A2:; return;
label_95A5:; return;
label_95A7:; return;
label_95A9:; return;
label_95AB:; return;
label_95AD:; return;
label_95AF:; return;
label_95B1:; return;
label_95B4:; return;
label_95B6:; return;
label_95B9:; return;
label_95BB:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C3:; return;
label_95C5:; return;
label_95C7:; return;
label_95C9:; return;
label_95CB:; return;
label_95CE:; return;
label_95D0:; return;
label_95D2:; return;
label_95D4:; return;
label_95D6:; return;
label_95D8:; return;
label_95DA:; return;
label_95DC:; return;
label_95DE:; return;
label_95E0:; return;
label_95E2:; return;
label_95E4:; return;
label_95E6:; return;
label_95E8:; return;
label_95EA:; return;
label_95EC:; return;
label_95ED:; return;
label_95EF:; return;
label_95F0:; return;
label_95F2:; return;
label_95F5:; return;
label_95F6:; return;
label_95F9:; return;
label_95FA:; return;
label_95FD:; return;
label_95FE:; return;
label_95FF:; return;
label_9600:; return;
label_9602:; return;
label_9604:; return;
label_9605:; return;
label_9606:; return;
label_9608:; return;
label_9609:; return;
label_960A:; return;
label_960C:; return;
label_960E:; return;
label_9610:; return;
label_9612:; return;
label_9614:; return;
label_9616:; return;
label_9617:; return;
label_9618:; return;
label_961A:; return;
label_961B:; return;
label_961C:; return;
label_961D:; return;
label_961E:; return;
label_9620:; return;
label_9623:; return;
label_9624:; return;
label_9625:; return;
label_9626:; return;
label_9628:; return;
label_962A:; return;
label_962B:; return;
label_962C:; return;
label_962F:; return;
label_9631:; return;
label_9633:; return;
label_9635:; return;
label_9637:; return;
label_9639:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9643:; return;
label_9645:; return;
label_9647:; return;
label_9649:; return;
label_964B:; return;
label_964D:; return;
label_964F:; return;
label_9650:; return;
label_9651:; return;
label_9652:; return;
label_9654:; return;
label_9656:; return;
label_9659:; return;
label_965B:; return;
label_965D:; return;
label_965F:; return;
label_9660:; return;
label_9663:; return;
label_9665:; return;
label_9667:; return;
label_9669:; return;
label_966B:; return;
label_966D:; return;
label_966F:; return;
label_9671:; return;
label_9673:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967B:; return;
label_967D:; return;
label_967F:; return;
label_9681:; return;
label_9683:; return;
label_9684:; return;
label_9685:; return;
label_9686:; return;
label_9688:; return;
label_968A:; return;
label_968D:; return;
label_968F:; return;
label_9691:; return;
label_9693:; return;
label_9694:; return;
label_9697:; return;
label_9699:; return;
label_969B:; return;
label_969D:; return;
label_969F:; return;
label_96A1:; return;
label_96A3:; return;
label_96A5:; return;
label_96A7:; return;
label_96A9:; return;
label_96AB:; return;
label_96AD:; return;
label_96AF:; return;
label_96B1:; return;
label_96B3:; return;
label_96B5:; return;
label_96B7:; return;
label_96B8:; return;
label_96B9:; return;
label_96BA:; return;
label_96BC:; return;
label_96BE:; return;
label_96C1:; return;
label_96C3:; return;
label_96C5:; return;
label_96C7:; return;
label_96CA:; return;
label_96CC:; return;
label_96CE:; return;
label_96D1:; return;
label_96D2:; return;
label_96D5:; return;
label_96D6:; return;
label_96D9:; return;
label_96DB:; return;
label_96DD:; return;
label_96DF:; return;
label_96E1:; return;
label_96E2:; return;
label_96E4:; return;
label_96E6:; return;
label_96E9:; return;
label_96EA:; return;
label_96ED:; return;
label_96EE:; return;
label_96F0:; return;
label_96F2:; return;
label_96F4:; return;
label_96F6:; return;
label_96F7:; return;
label_96FA:; return;
label_96FC:; return;
label_96FE:; return;
label_96FF:; return;
label_9701:; return;
label_9703:; return;
label_9705:; return;
label_9707:; return;
label_9709:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9711:; return;
label_9713:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971D:; return;
label_971F:; return;
label_9721:; return;
label_9723:; return;
label_9725:; return;
label_9726:; return;
label_9728:; return;
label_972A:; return;
label_972C:; return;
label_972E:; return;
label_9730:; return;
label_9732:; return;
label_9734:; return;
label_9736:; return;
label_9738:; return;
label_9739:; return;
label_973A:; return;
label_973C:; return;
label_973E:; return;
label_9740:; return;
label_9742:; return;
label_9743:; return;
label_9744:; return;
label_9746:; return;
label_9748:; return;
label_974A:; return;
label_974C:; return;
label_974E:; return;
label_9750:; return;
label_9752:; return;
label_9754:; return;
label_9756:; return;
label_9758:; return;
label_975A:; return;
label_975C:; return;
label_975E:; return;
label_9760:; return;
label_9762:; return;
label_9763:; return;
label_9766:; return;
label_9768:; return;
label_976A:; return;
label_976C:; return;
label_976D:; return;
label_976F:; return;
label_9770:; return;
label_9771:; return;
label_9772:; return;
label_9774:; return;
label_9776:; return;
label_9778:; return;
label_977A:; return;
label_977D:; return;
label_977F:; return;
label_9780:; return;
label_9782:; return;
label_9783:; return;
label_9785:; return;
label_9787:; return;
label_9788:; return;
label_978B:; return;
label_978D:; return;
label_978E:; return;
label_978F:; return;
label_9790:; return;
label_9792:; return;
label_9795:; return;
label_9797:; return;
label_9798:; return;
label_979B:; return;
label_979C:; return;
label_979F:; return;
label_97A0:; return;
label_97A3:; return;
label_97A4:; return;
label_97A7:; return;
label_97A8:; return;
label_97AB:; return;
label_97AC:; return;
label_97AE:; return;
label_97B0:; return;
label_97B1:; return;
label_97B2:; return;
label_97B4:; return;
label_97B6:; return;
label_97B9:; return;
label_97BA:; return;
label_97BD:; return;
label_97BE:; return;
label_97C0:; return;
label_97C1:; return;
label_97C2:; return;
label_97C5:; return;
label_97C6:; return;
label_97C9:; return;
label_97CA:; return;
label_97CD:; return;
label_97CE:; return;
label_97D0:; return;
label_97D2:; return;
label_97D3:; return;
label_97D5:; return;
label_97D7:; return;
label_97D9:; return;
label_97DB:; return;
label_97DD:; return;
label_97DF:; return;
label_97E1:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EA:; return;
label_97EB:; return;
label_97ED:; return;
label_97EF:; return;
label_97F1:; return;
label_97F3:; return;
label_97F5:; return;
label_97F7:; return;
label_97F9:; return;
label_97FB:; return;
label_97FD:; return;
label_97FF:; return;
label_9801:; return;
label_9803:; return;
label_9805:; return;
label_9807:; return;
label_9809:; return;
label_980B:; return;
label_980D:; return;
label_980F:; return;
label_9811:; return;
label_9812:; return;
label_9814:; return;
label_9816:; return;
label_9818:; return;
label_981A:; return;
label_981C:; return;
label_981E:; return;
label_9820:; return;
label_9822:; return;
label_9824:; return;
label_9826:; return;
}

void func_9200_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9200_b13");
#endif
label_9200:;
    /* $9200: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9202:;
    /* $9202: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9204:;
    /* $9204: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9206:;
    /* $9206: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9208:;
    /* $9208: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_920A:;
    /* $920A: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x43); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_920C:;
    /* $920C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_920D:;
    /* $920D: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xC6; g_cpu.C=(g_cpu.X>=0xC6)?1:0; FLAG_NZ(r&0xFF); }
label_920F:;
    /* $920F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC7 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9211:;
    /* $9211: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC6 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9213:;
    /* $9213: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9215:;
    /* $9215: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC9 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9217:;
    /* $9217: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9219:;
    /* $9219: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_921B:;
    /* $921B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCB + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_921D:;
    /* $921D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCA + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_921F:;
    /* $921F: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9221:;
    /* $9221: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xCC; g_cpu.C=(g_cpu.X>=0xCC)?1:0; FLAG_NZ(r&0xFF); }
label_9223:;
    /* $9223: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCD + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9225:;
    /* $9225: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCC + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9227:;
    /* $9227: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9229:;
    /* $9229: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_922B:;
    /* $922B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xCE + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_922D:;
    /* $922D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_922F:;
    /* $922F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD1 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9231:;
    /* $9231: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xD0 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9233:;
    /* $9233: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9235:;
    /* $9235: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x83FF); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_9238:;
    /* $9238: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF2C3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_923B:;
    /* $923B: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0xF2 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_923D:;
    /* $923D: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_923F:;
    /* $923F: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x02F8); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_9C9B_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C9B_b13");
#endif
label_9C9B:;
    /* $9C9B: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9C9D:;
    /* $9C9D: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_9C9F:;
    /* $9C9F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9CA0:;
    /* $9CA0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CA1:;
    /* $9CA1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CA2:;
    /* $9CA2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9CA3:;
    /* $9CA3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9CA4:;
    /* $9CA4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0150 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CA7:;
    /* $9CA7: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_9CA9:;
    /* $9CA9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1C7F), 13); return; }
label_9CAB:;
    /* $9CAB: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x04C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9CAE:;
    /* $9CAE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAB00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB1:;
    /* $9CB1: 9D */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CB4:;
    /* $9CB4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAC00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CB7:;
    /* $9CB7: 9D */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CBA:;
    /* $9CBA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CBD:;
    /* $9CBD: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CC0:;
    /* $9CC0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAE00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CC3:;
    /* $9CC3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9CC4:;
    /* $9CC4: 86 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.X);
label_9CC6:;
    /* $9CC6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9CC8:;
    /* $9CC8: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9CCA:;
    /* $9CCA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CCC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CCA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CCD:;
    /* $9CCD: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x05); FLAG_NZ(g_cpu.X);
label_9CCF:;
    /* $9CCF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9CD0:;
    /* $9CD0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9CD1:;
    /* $9CD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9CD3:;
    /* $9CD3: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CD6:;
    /* $9CD6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CD9:;
    /* $9CD9: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CDC:;
    /* $9CDC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA100 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CDF:;
    /* $9CDF: 9D */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CE2:;
    /* $9CE2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CE5:;
    /* $9CE5: 9D */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CE8:;
    /* $9CE8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CEB:;
    /* $9CEB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CEB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CEE:;
    /* $9CEE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1CF0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F869(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9CEE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9CF1:;
    /* $9CF1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA400 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CF4:;
    /* $9CF4: 9D */ maybe_trigger_vblank(5); nes_write((0x04E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9CF7:;
    /* $9CF7: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA500 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CFA:;
    /* $9CFA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9CFB:;
    /* $9CFB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9CFE:;
    /* $9CFE: 9D */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D01:;
    /* $9D01: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA700 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9D04:;
    /* $9D04: 9D */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D07:;
    /* $9D07: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D09); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9D07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9D0A:;
    /* $9D0A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9D0C:;
    /* $9D0C: 9D */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D0F:;
    /* $9D0F: 9D */ maybe_trigger_vblank(5); nes_write((0x0340 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D12:;
    /* $9D12: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D15:;
    /* $9D15: 9D */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D18:;
    /* $9D18: 9D */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D1B:;
    /* $9D1B: 9D */ maybe_trigger_vblank(5); nes_write((0x0540 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D1E:;
    /* $9D1E: 9D */ maybe_trigger_vblank(5); nes_write((0x0560 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9D21:;
    /* $9D21: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9D23:;
    /* $9D23: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9D25:;
    /* $9D25: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; } return;
}

void func_BE01_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BE01_b13");
#endif
label_BE01:;
    /* $BE01: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_BE03;
label_BE03:;
    /* $BE03: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_BE06;
label_BE05:;
    /* $BE05: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE05); return;
label_BE06:;
    /* $BE06: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBE06); return;
}

void func_DBE1_b13(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DBE1_b13");
#endif
label_DBE1:;
    /* $DBE1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_DBE4:;
    /* $DBE4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_DBE6:;
    /* $DBE6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_DC0F;
label_DBE8:;
    /* $DBE8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DBEA:;
    /* $DBEA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BEC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDBEA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DBED:;
    /* $DBED: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_DBFB;
label_DBEF:;
    /* $DBEF: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05A0); FLAG_NZ(g_cpu.A);
label_DBF2:;
    /* $DBF2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_DBF4:;
    /* $DBF4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_DC0E;
label_DBF6:;
    /* $DBF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_DBF8:;
    /* $DBF8: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; } return;
label_DBFB:;
    /* $DBFB: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DBFE:;
    /* $DBFE: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DC01:;
    /* $DC01: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DC04:;
    /* $DC04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_DC06:;
    /* $DC06: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_DC09:;
    /* $DC09: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_DC0B:;
    /* $DC0B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C0D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDC0B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DC0E:;
    /* $DC0E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DC0F:;
    /* $DC0F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_DC12:;
    /* $DC12: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC18;
label_DC14:;
    /* $DC14: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC17:;
    /* $DC17: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DC18:;
    /* $DC18: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_DC1A:;
    /* $DC1A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DC1D:;
    /* $DC1D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC2C;
label_DC1F:;
    /* $DC1F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C21); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDC1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DC22:;
    /* $DC22: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_DC24:;
    /* $DC24: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C26); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDC24, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DC27:;
    /* $DC27: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_DC29:;
    /* $DC29: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_DC2C:;
    /* $DC2C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05A0); FLAG_NZ(g_cpu.A);
label_DC2F:;
    /* $DC2F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_DC31:;
    /* $DC31: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_DC73;
label_DC33:;
    /* $DC33: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DC35:;
    /* $DC35: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_DC38:;
    /* $DC38: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0440); FLAG_NZ(g_cpu.A);
label_DC3B:;
    /* $DC3B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DC3C:;
    /* $DC3C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x99); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DC3E:;
    /* $DC3E: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DC41:;
    /* $DC41: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_DC44:;
    /* $DC44: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_DC46:;
    /* $DC46: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DC49:;
    /* $DC49: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1C4B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDC49, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DC4C:;
    /* $DC4C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_DC4F:;
    /* $DC4F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC73;
label_DC51:;
    /* $DC51: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x22); FLAG_NZ(g_cpu.Y);
label_DC53:;
    /* $DC53: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0C; g_cpu.C=(g_cpu.Y>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_DC55:;
    /* $DC55: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_DC74;
label_DC57:;
    /* $DC57: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_DC59:;
    /* $DC59: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xDEC2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DC5C:;
    /* $DC5C: 85 */ maybe_trigger_vblank(3); nes_write(0x61, g_cpu.A);
label_DC5E:;
    /* $DC5E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x59; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC60:;
    /* $DC60: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DC62:;
    /* $DC62: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x00; g_cpu.C=(g_cpu.A>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_DC64:;
    /* $DC64: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_DC6F;
label_DC66:;
    /* $DC66: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_DC68:;
    /* $DC68: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_DC73;
label_DC6A:;
    /* $DC6A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_DC6C:;
    /* $DC6C: 85 */ maybe_trigger_vblank(3); nes_write(0xAB, g_cpu.A);
label_DC6E:;
    /* $DC6E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DC6F:;
    /* $DC6F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_DC71:;
    /* $DC71: 85 */ maybe_trigger_vblank(3); nes_write(0xAD, g_cpu.A);
label_DC73:;
    /* $DC73: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DC74:;
    /* $DC74: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_DC76:;
    /* $DC76: 85 */ maybe_trigger_vblank(3); nes_write(0x74, g_cpu.A);
label_DC78:;
    /* $DC78: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x75; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DC7A:;
    /* $DC7A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_DC7C:;
    /* $DC7C: 85 */ maybe_trigger_vblank(3); nes_write(0xA2, g_cpu.A);
label_DC7E:;
    /* $DC7E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

