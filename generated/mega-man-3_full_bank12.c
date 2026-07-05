/* mega-man-3_full_bank12.c — PRG bank 12 function bodies.
 * Generated part of mega-man-3_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

static void func_8000_b12_body(int _entry) { /* process_sprites_j */
    switch (_entry) {
        case 1: goto label_8003;
        case 2: goto label_800F;
        case 3: goto label_800C;
        case 4: goto label_81BD;
        case 5: goto label_82BC;
        case 6: goto label_8504;
        case 7: goto label_809D;
        case 8: goto label_82B6;
        case 9: goto label_836D;
        case 10: goto label_838C;
        case 11: goto label_83C5;
        case 12: goto label_8430;
        case 13: goto label_85F3;
    }
label_8000:; /* process_sprites_j */
    /* $8000: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8001:;
    /* $8001: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0053), 12); return; }
label_8003:;
    /* $8003: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0006), 12); return; }
label_8005:;
    /* $8005: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_8014;
label_8007:;
    /* $8007: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8007); return;
label_8008:;
    /* $8008: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x888D); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_800C:; /* process_sprites */
    /* $800C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_800D:;
    /* $800D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x16; g_cpu.C=(g_cpu.Y>=0x16)?1:0; FLAG_NZ(r&0xFF); }
label_800F:;
    /* $800F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8010:;
    /* $8010: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8011:;
    /* $8011: 8D */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.A);
label_8014:;
    /* $8014: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02EB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
label_8018:;
    /* $8018: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8019:;
    /* $8019: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801B:;
    /* $801B: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801D:;
    /* $801D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x801D); return;
label_801E:;
    /* $801E: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x26; g_cpu.C=(g_cpu.Y>=0x26)?1:0; FLAG_NZ(r&0xFF); }
label_8020:;
    /* $8020: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8022:;
    /* $8022: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8024:;
    /* $8024: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x32); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8026:;
    /* $8026: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8027:;
    /* $8027: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x0105 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_802A:;
    /* $802A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_802C:;
    /* $802C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_802D:;
    /* $802D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_802F:;
    /* $802F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8030:;
    /* $8030: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8032:;
    /* $8032: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8034:;
    /* $8034: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8036:;
    /* $8036: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8038:;
    /* $8038: 8D */ maybe_trigger_vblank(4); nes_write(0x4804, g_cpu.A);
label_803B:;
    /* $803B: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x280D); FLAG_NZ(g_cpu.A);
label_803E:;
    /* $803E: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x024F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8041:;
    /* $8041: 8F */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A & g_cpu.X); /* SAX */
label_8044:;
    /* $8044: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xD18D); FLAG_NZ(g_cpu.A);
label_8047:;
    /* $8047: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x8A00); FLAG_NZ(g_cpu.A);
label_804A:;
    /* $804A: 8D */ maybe_trigger_vblank(4); nes_write(0x2D01, g_cpu.A);
label_804D:;
    /* $804D: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x3028); FLAG_NZ(g_cpu.A);
label_8050:;
    /* $8050: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_80C2;
label_8052:;
    /* $8052: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8054:;
    /* $8054: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xAF00); FLAG_NZ(g_cpu.A);
label_8057:;
    /* $8057: 8D */ maybe_trigger_vblank(4); nes_write(0x1288, g_cpu.A);
label_805A:;
    /* $805A: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_805B:;
    /* $805B: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x64; g_cpu.C=(g_cpu.Y>=0x64)?1:0; FLAG_NZ(r&0xFF); }
label_805D:;
    /* $805D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_805E:;
    /* $805E: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_805F:;
    /* $805F: 8D */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.A);
label_8062:;
    /* $8062: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x39; g_cpu.C=(g_cpu.Y>=0x39)?1:0; FLAG_NZ(r&0xFF); }
label_8064:;
    /* $8064: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8066:;
    /* $8066: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05AA); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8069:;
    /* $8069: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8069); return;
label_806A:;
    /* $806A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_806B:;
    /* $806B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0005); FLAG_NZ(g_cpu.A);
label_806E:;
    /* $806E: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xAF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8070:;
    /* $8070: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x48); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8072:;
    /* $8072: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x64; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8074:;
    /* $8074: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8075:;
    /* $8075: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8077:;
    /* $8077: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8079:;
    /* $8079: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x280D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_807C:;
    /* $807C: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x51) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_807E:;
    /* $807E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_807F:;
    /* $807F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x91 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8081:;
    /* $8081: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x6A00); FLAG_NZ(g_cpu.A);
label_8084:;
    /* $8084: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0171); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8087:;
    /* $8087: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x280D); FLAG_NZ(g_cpu.A);
label_808A:;
    /* $808A: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x014F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_808D:;
    /* $808D: 8F */ maybe_trigger_vblank(4); nes_write(0x000D, g_cpu.A & g_cpu.X); /* SAX */
label_8090:;
    /* $8090: 8D */ maybe_trigger_vblank(4); nes_write(0x026C, g_cpu.A);
label_8093:;
    /* $8093: 8D */ maybe_trigger_vblank(4); nes_write(0x0812, g_cpu.A);
label_8096:;
    /* $8096: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xAF; g_cpu.C=(g_cpu.Y>=0xAF)?1:0; FLAG_NZ(r&0xFF); }
label_8098:;
    /* $8098: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8099:;
    /* $8099: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_809A:;
    /* $809A: 8C */ maybe_trigger_vblank(4); nes_write(0x0D6C, g_cpu.Y);
label_809D:;
    /* $809D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_809E:;
    /* $809E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80A0:;
    /* $80A0: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x024D); FLAG_NZ(g_cpu.A);
label_80A3:;
    /* $80A3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80A5:;
    /* $80A5: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x8C00); FLAG_NZ(g_cpu.A);
label_80A8:;
    /* $80A8: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_80A9:;
    /* $80A9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_80AA:;
    /* $80AA: 8C */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.Y);
label_80AD:;
    /* $80AD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x70; g_cpu.C=(g_cpu.Y>=0x70)?1:0; FLAG_NZ(r&0xFF); }
label_80AF:;
    /* $80AF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80B1:;
    /* $80B1: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x3128); FLAG_NZ(g_cpu.A);
label_80B4:;
    /* $80B4: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80B6:;
    /* $80B6: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0D) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80B8:;
    /* $80B8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80B8); return;
label_80B9:;
    /* $80B9: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x8F) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80BB:;
    /* $80BB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6F + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80BD:;
    /* $80BD: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0128); FLAG_NZ(g_cpu.A);
label_80C0:;
    /* $80C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80C2:;
    /* $80C2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80C2); return;
label_80C3:;
    /* $80C3: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_80C5:;
    /* $80C5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_80C6:;
    /* $80C6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00C8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x6D6A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80C6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80C9:;
    /* $80C9: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x6F) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80CB:;
    /* $80CB: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x086C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80CE:;
    /* $80CE: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80D0:;
    /* $80D0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_80D1:;
    /* $80D1: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_80D3:;
    /* $80D3: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x280D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_80D6:;
    /* $80D6: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x51) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80D8:;
    /* $80D8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_80D9:;
    /* $80D9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x91 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80DB:;
    /* $80DB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x6A00); FLAG_NZ(g_cpu.A);
label_80DE:;
    /* $80DE: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0171); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80E1:;
    /* $80E1: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x280D); FLAG_NZ(g_cpu.A);
label_80E4:;
    /* $80E4: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x014F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_80E7:;
    /* $80E7: 8F */ maybe_trigger_vblank(4); nes_write(0x000D, g_cpu.A & g_cpu.X); /* SAX */
label_80EA:;
    /* $80EA: 8D */ maybe_trigger_vblank(4); nes_write(0x026C, g_cpu.A);
label_80ED:;
    /* $80ED: 8D */ maybe_trigger_vblank(4); nes_write(0x0812, g_cpu.A);
label_80F0:;
    /* $80F0: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x09 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_80F2:;
    /* $80F2: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_80F3:;
    /* $80F3: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_80F4:;
    /* $80F4: 8C */ maybe_trigger_vblank(4); nes_write(0x0D6C, g_cpu.Y);
label_80F7:;
    /* $80F7: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_80F8:;
    /* $80F8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x2B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80FA:;
    /* $80FA: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x024D); FLAG_NZ(g_cpu.A);
label_80FD:;
    /* $80FD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_80FF:;
    /* $80FF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x8C00); FLAG_NZ(g_cpu.A);
label_8102:; /* check_weapon_hit */
    /* $8102: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8103:;
    /* $8103: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8104:;
    /* $8104: 8C */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.Y);
label_8107:;
    /* $8107: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xCF; g_cpu.C=(g_cpu.Y>=0xCF)?1:0; FLAG_NZ(r&0xFF); }
label_8109:;
    /* $8109: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_810B:;
    /* $810B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x34 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_810D:;
    /* $810D: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x3628); FLAG_NZ(g_cpu.A);
label_8110:;
    /* $8110: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8112:;
    /* $8112: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8114:;
    /* $8114: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8115:;
    /* $8115: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_8116:;
    /* $8116: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_8118:;
    /* $8118: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_811A:;
    /* $811A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_811C:;
    /* $811C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0900); FLAG_NZ(g_cpu.A);
label_811F:;
    /* $811F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8120:;
    /* $8120: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8121:;
    /* $8121: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8123:;
    /* $8123: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x2A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8125:;
    /* $8125: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0100); FLAG_NZ(g_cpu.A);
label_8128:;
    /* $8128: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_812A:;
    /* $812A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_812C:;
    /* $812C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_812D:;
    /* $812D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_812F:;
    /* $812F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x812F); return;
label_8130:;
    /* $8130: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8131:;
    /* $8131: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8133:;
    /* $8133: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8135:;
    /* $8135: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8137:;
    /* $8137: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8139:;
    /* $8139: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_813B:;
    /* $813B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_813D:;
    /* $813D: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x79 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_813F:;
    /* $813F: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x5B00 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8142:;
    /* $8142: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x003C); FLAG_NZ(g_cpu.A);
label_8145:;
    /* $8145: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_8148:;
    /* $8148: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8148); return;
label_8149:;
    /* $8149: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x88 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_814B:;
    /* $814B: 86 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.X);
label_814D:;
    /* $814D: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_814E:;
    /* $814E: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x83 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8150:;
    /* $8150: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0000); FLAG_NZ(g_cpu.A);
label_8153:;
    /* $8153: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8155:;
    /* $8155: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8155); return;
label_8156:;
    /* $8156: 86 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.X);
label_8158:;
    /* $8158: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8158); return;
label_8159:;
    /* $8159: 85 */ maybe_trigger_vblank(3); nes_write(0x61, g_cpu.A);
label_815B:;
    /* $815B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_815C:;
    /* $815C: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_815E:;
    /* $815E: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_815F:;
    /* $815F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x815F); return;
label_8160:;
    /* $8160: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x63 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8162:;
    /* $8162: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xA43C); FLAG_NZ(g_cpu.A);
label_8165:;
    /* $8165: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8166:;
    /* $8166: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8166); return;
label_8167:;
    /* $8167: 86 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.X);
label_8169:;
    /* $8169: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0000); FLAG_NZ(g_cpu.A);
label_816C:;
    /* $816C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_816E:;
    /* $816E: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8170:;
    /* $8170: 97 */ maybe_trigger_vblank(4); nes_write((0x00 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8172:;
    /* $8172: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8173:;
    /* $8173: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8173); return;
label_8174:;
    /* $8174: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x77 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8176:;
    /* $8176: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x7960 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8179:;
    /* $8179: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x9879 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_817C:;
    /* $817C: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB1 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_817E:;
    /* $817E: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_817F:;
    /* $817F: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xC101; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8182:;
    /* $8182: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xA500 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8185:;
    /* $8185: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8186:;
    /* $8186: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8186); return;
label_8187:;
    /* $8187: 86 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.X);
label_8189:;
    /* $8189: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0000); FLAG_NZ(g_cpu.A);
label_818C:;
    /* $818C: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_818D:;
    /* $818D: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_818F:;
    /* $818F: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8191:;
    /* $8191: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8192:;
    /* $8192: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8192); return;
label_8193:;
    /* $8193: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x76 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8195:;
    /* $8195: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_8196:;
    /* $8196: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x7960 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8199:;
    /* $8199: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x9879 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_819C:;
    /* $819C: 96 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.Y) & 0xFF, g_cpu.X);
label_819E:;
    /* $819E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_819F:;
    /* $819F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_81A0:;
    /* $81A0: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x80 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81A2:;
    /* $81A2: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x047E + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81A5:;
    /* $81A5: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_81A6:;
    /* $81A6: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x280D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81A9:;
    /* $81A9: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x28 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81AB:;
    /* $81AB: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_81AC:;
    /* $81AC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81AE:;
    /* $81AE: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x6800); FLAG_NZ(g_cpu.A);
label_81B1:;
    /* $81B1: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81B2:;
    /* $81B2: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81B3:;
    /* $81B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_81B4:;
    /* $81B4: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81B5:;
    /* $81B5: 86 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.X);
label_81B7:;
    /* $81B7: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_81B9:;
    /* $81B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_81BA:;
    /* $81BA: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9698 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81BD:;
    /* $81BD: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_81BF:;
    /* $81BF: 80 */ maybe_trigger_vblank(2); /* NOP */
label_81C1:;
    /* $81C1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81C1); return;
label_81C2:;
    /* $81C2: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_81C4:;
    /* $81C4: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0E7E + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81C7:;
    /* $81C7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81C9:;
    /* $81C9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x03); FLAG_NZ(g_cpu.Y);
label_81CB:;
    /* $81CB: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_81CC:;
    /* $81CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_81CE:;
    /* $81CE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0D; FLAG_NZ(g_cpu.A);
label_81D0:;
    /* $81D0: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_81D1:;
    /* $81D1: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_81D3:;
    /* $81D3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81D5:;
    /* $81D5: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x6B00); FLAG_NZ(g_cpu.A);
label_81D8:;
    /* $81D8: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_81DA:;
    /* $81DA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_81DB:;
    /* $81DB: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_81DD:;
    /* $81DD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81DE:;
    /* $81DE: 86 */ maybe_trigger_vblank(3); nes_write(0x83, g_cpu.X);
label_81E0:;
    /* $81E0: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x83); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_81E2:;
    /* $81E2: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x97 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_81E4:;
    /* $81E4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_81E5:;
    /* $81E5: 99 */ maybe_trigger_vblank(5); nes_write((0x9B99 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_81E8:;
    /* $81E8: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_81EB:;
    /* $81EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81ED:;
    /* $81ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0D; FLAG_NZ(g_cpu.A);
label_81EF:;
    /* $81EF: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_81F0:;
    /* $81F0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_81F2:;
    /* $81F2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81F4:;
    /* $81F4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x8900); FLAG_NZ(g_cpu.A);
label_81F7:;
    /* $81F7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81F8:;
    /* $81F8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x60); FLAG_NZ(g_cpu.X);
label_81FA:;
    /* $81FA: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x68; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81FC:;
    /* $81FC: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81FE:;
    /* $81FE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_8200:;
    /* $8200: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x76 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8202:;
    /* $8202: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x007B + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8205:;
    /* $8205: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x3C0D + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8208:;
    /* $8208: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8208); return;
label_8209:;
    /* $8209: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_820C:;
    /* $820C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x820C); return;
label_820D:;
    /* $820D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x88 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_820F:;
    /* $820F: 86 */ maybe_trigger_vblank(3); nes_write(0x0D, g_cpu.X);
label_8211:;
    /* $8211: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8211); return;
label_8212:;
    /* $8212: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8212); return;
label_8213:;
    /* $8213: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8215:;
    /* $8215: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8215); return;
label_8216:;
    /* $8216: 86 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.X);
label_8218:;
    /* $8218: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8218); return;
label_8219:;
    /* $8219: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_821A:;
    /* $821A: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_821C:;
    /* $821C: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_821E:;
    /* $821E: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_821F:;
    /* $821F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x821F); return;
label_8220:;
    /* $8220: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x76 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8222:;
    /* $8222: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_8223:;
    /* $8223: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x7960 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8226:;
    /* $8226: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x9879 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8229:;
    /* $8229: 96 */ maybe_trigger_vblank(4); nes_write((0x94 + g_cpu.Y) & 0xFF, g_cpu.X);
label_822B:;
    /* $822B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_822C:;
    /* $822C: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x09 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_822E:;
    /* $822E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8230:;
    /* $8230: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x7103 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8233:;
    /* $8233: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x6F) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8235:;
    /* $8235: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x09) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8237:;
    /* $8237: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8238:;
    /* $8238: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8239:;
    /* $8239: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_823A:;
    /* $823A: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_823C:;
    /* $823C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_823D:;
    /* $823D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_823E:;
    /* $823E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0240); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x60B2, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x823E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8241:;
    /* $8241: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8242:;
    /* $8242: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x726A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8245:;
    /* $8245: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8247:;
    /* $8247: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0249); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x60B2, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8247, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_824A:;
    /* $824A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_824B:;
    /* $824B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x7268 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_824E:;
    /* $824E: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x94) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8250:;
    /* $8250: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_8251:;
    /* $8251: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_8252:;
    /* $8252: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x6F) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8254:;
    /* $8254: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x0812; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8257:;
    /* $8257: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8259:;
    /* $8259: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x916F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_825C:;
    /* $825C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_825D:;
    /* $825D: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_825E:;
    /* $825E: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8260:;
    /* $8260: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8262:;
    /* $8262: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x6A71 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8265:;
    /* $8265: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8266:;
    /* $8266: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8267:;
    /* $8267: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x6666 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_826A:;
    /* $826A: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x08); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_826C:;
    /* $826C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x026E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x60A5, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x826C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_826F:;
    /* $826F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8270:;
    /* $8270: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x6666 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8273:;
    /* $8273: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x08); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8275:;
    /* $8275: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0277); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x60A5, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8275, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8278:;
    /* $8278: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_827A:;
    /* $827A: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x8DAF); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_827D:;
    /* $827D: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x02AD); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_8280:;
    /* $8280: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8282:;
    /* $8282: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x60B1; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8285:;
    /* $8285: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x6F6D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8288:;
    /* $8288: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8F) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_828A:;
    /* $828A: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x92) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_828C:;
    /* $828C: 8F */ maybe_trigger_vblank(4); nes_write(0x0105, g_cpu.A & g_cpu.X); /* SAX */
label_828F:;
    /* $828F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x828F); return;
label_8290:;
    /* $8290: 8C */ maybe_trigger_vblank(4); nes_write(0x0005, g_cpu.Y);
label_8293:;
    /* $8293: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0221), 12); return; }
label_8295:;
    /* $8295: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8297:;
    /* $8297: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x0588 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_829A:;
    /* $829A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x829A); return;
label_829B:;
    /* $829B: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0588); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_829E:;
    /* $829E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x829E); return;
label_829F:;
    /* $829F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0585 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_82A2:;
    /* $82A2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82A2); return;
label_82A3:;
    /* $82A3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82A4:;
    /* $82A4: 86 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.X);
label_82A6:;
    /* $82A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x82A6); return;
label_82A7:;
    /* $82A7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x88); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82A9:;
    /* $82A9: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0xC1 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82AB:;
    /* $82AB: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0617; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82AE:;
    /* $82AE: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82B0:;
    /* $82B0: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2008); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82B3:;
    /* $82B3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_82B4:;
    /* $82B4: 80 */ maybe_trigger_vblank(2); /* NOP */
label_82B6:;
    /* $82B6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_82B8:;
    /* $82B8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_82BA:;
    /* $82BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_82BC:;
    /* $82BC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_82BE:;
    /* $82BE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82C0:;
    /* $82C0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_82C1:;
    /* $82C1: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82C2:;
    /* $82C2: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82C4:;
    /* $82C4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_82C5:;
    /* $82C5: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_82C7:;
    /* $82C7: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_82C8:;
    /* $82C8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_82C9:;
    /* $82C9: C2 */ maybe_trigger_vblank(2); /* NOP */
label_82CB:;
    /* $82CB: 86 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.X);
label_82CD:;
    /* $82CD: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82CE:;
    /* $82CE: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_82CF:;
    /* $82CF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_82D0:;
    /* $82D0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_82D1:;
    /* $82D1: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82D3:;
    /* $82D3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82D4:;
    /* $82D4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xC201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82D7:;
    /* $82D7: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x6D8D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_82DA:;
    /* $82DA: 8C */ maybe_trigger_vblank(4); nes_write(0x016C, g_cpu.Y);
label_82DD:;
    /* $82DD: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8D01); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_82E0:;
    /* $82E0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_82E2:;
    /* $82E2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_82E3:;
    /* $82E3: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_82E4:;
    /* $82E4: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82E6:;
    /* $82E6: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_82E7:;
    /* $82E7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_82E9:;
    /* $82E9: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_82EA:;
    /* $82EA: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_82EB:;
    /* $82EB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_82ED:;
    /* $82ED: 86 */ maybe_trigger_vblank(3); nes_write(0x66, g_cpu.X);
label_82EF:;
    /* $82EF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82F0:;
    /* $82F0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_82F1:;
    /* $82F1: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_82F2:;
    /* $82F2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_82F3:;
    /* $82F3: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82F5:;
    /* $82F5: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_82F6:;
    /* $82F6: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xC201; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_82F9:;
    /* $82F9: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x8D; g_cpu.C=(g_cpu.X>=0x8D)?1:0; FLAG_NZ(r&0xFF); }
label_82FB:;
    /* $82FB: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x6F8F); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_82FE:;
    /* $82FE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8300:;
    /* $8300: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x91 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8302:;
    /* $8302: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8304:;
    /* $8304: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8304); return;
label_8305:;
    /* $8305: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8306:;
    /* $8306: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8307:;
    /* $8307: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8309:;
    /* $8309: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_830B:;
    /* $830B: 9D */ maybe_trigger_vblank(5); nes_write((0x9599 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_830E:;
    /* $830E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_830F:;
    /* $830F: 9D */ maybe_trigger_vblank(5); nes_write((0x9498 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8312:;
    /* $8312: 97 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8314:;
    /* $8314: 9D */ maybe_trigger_vblank(5); nes_write((0x0012 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8317:;
    /* $8317: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x31 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8319:;
    /* $8319: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_831A:;
    /* $831A: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_831C:;
    /* $831C: 9D */ maybe_trigger_vblank(5); nes_write((0x9592 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_831F:;
    /* $831F: 99 */ maybe_trigger_vblank(5); nes_write((0x909C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8322:;
    /* $8322: 94 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8324:;
    /* $8324: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_8327:;
    /* $8327: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8329:;
    /* $8329: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x95) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_832B:;
    /* $832B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_832C:;
    /* $832C: 95 */ maybe_trigger_vblank(4); nes_write((0x0E + g_cpu.X) & 0xFF, g_cpu.A);
label_832E:;
    /* $832E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8330:;
    /* $8330: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x93; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8332:;
    /* $8332: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8334:;
    /* $8334: 9D */ maybe_trigger_vblank(5); nes_write((0x9692 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8337:;
    /* $8337: 99 */ maybe_trigger_vblank(5); nes_write((0x949D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_833A:;
    /* $833A: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_833B:;
    /* $833B: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_833E:;
    /* $833E: 8E */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.X);
label_8341:;
    /* $8341: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_8342:;
    /* $8342: 9D */ maybe_trigger_vblank(5); nes_write((0x8A03 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8345:;
    /* $8345: 8E */ maybe_trigger_vblank(4); nes_write(0x0004, g_cpu.X);
label_8348:;
    /* $8348: 8F */ maybe_trigger_vblank(4); nes_write(0x9692, g_cpu.A & g_cpu.X); /* SAX */
label_834B:;
    /* $834B: 99 */ maybe_trigger_vblank(5); nes_write((0x948F + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_834E:;
    /* $834E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_834F:;
    /* $834F: 94 */ maybe_trigger_vblank(4); nes_write((0x8D + g_cpu.X) & 0xFF, g_cpu.Y);
label_8351:;
    /* $8351: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x94) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8353:;
    /* $8353: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x8D) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8355:;
    /* $8355: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x94) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8357:;
    /* $8357: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8359:;
    /* $8359: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_835B:;
    /* $835B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_835D:;
    /* $835D: 95 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.X) & 0xFF, g_cpu.A);
label_835F:;
    /* $835F: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_8362:;
    /* $8362: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_8363:;
    /* $8363: 95 */ maybe_trigger_vblank(4); nes_write((0x90 + g_cpu.X) & 0xFF, g_cpu.A);
label_8365:;
    /* $8365: 94 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8367:;
    /* $8367: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_836A:;
    /* $836A: 99 */ maybe_trigger_vblank(5); nes_write((0x929C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_836D:;
    /* $836D: 95 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.X) & 0xFF, g_cpu.A);
label_836F:;
    /* $836F: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_8372:;
    /* $8372: 99 */ maybe_trigger_vblank(5); nes_write((0x999C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8375:;
    /* $8375: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_8378:;
    /* $8378: 86 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.X);
label_837A:;
    /* $837A: 85 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.A);
label_837C:;
    /* $837C: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_837E:;
    /* $837E: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8380:;
    /* $8380: 9D */ maybe_trigger_vblank(5); nes_write((0x9599 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8383:;
    /* $8383: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8384:;
    /* $8384: 9D */ maybe_trigger_vblank(5); nes_write((0x9498 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8387:;
    /* $8387: 97 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8389:;
    /* $8389: 9D */ maybe_trigger_vblank(5); nes_write((0x9693 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_838C:;
    /* $838C: 99 */ maybe_trigger_vblank(5); nes_write((0x929D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_838F:;
    /* $838F: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8391:;
    /* $8391: 9D */ maybe_trigger_vblank(5); nes_write((0x9894 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8394:;
    /* $8394: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_8397:;
    /* $8397: 8E */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.X);
label_839A:;
    /* $839A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_839B:;
    /* $839B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x7603 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_839E:;
    /* $839E: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83A0:;
    /* $83A0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x76 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_83A2:;
    /* $83A2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_83A4:;
    /* $83A4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83A5:;
    /* $83A5: 80 */ maybe_trigger_vblank(2); /* NOP */
label_83A7:;
    /* $83A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x83A7); return;
label_83A8:;
    /* $83A8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_83A9:;
    /* $83A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x03AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x726F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x83A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_83AC:;
    /* $83AC: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x79 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83AE:;
    /* $83AE: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x037E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B1:;
    /* $83B1: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_83B2:;
    /* $83B2: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83B4:;
    /* $83B4: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x78 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_83B6:;
    /* $83B6: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x037E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83B9:;
    /* $83B9: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_83BA:;
    /* $83BA: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x6C6F); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_83BD:;
    /* $83BD: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_83BF:;
    /* $83BF: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x74) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C1:;
    /* $83C1: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_83C2:;
    /* $83C2: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x037D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C5:;
    /* $83C5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_83C6:;
    /* $83C6: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x6D71); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83C9:;
    /* $83C9: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_83CA:;
    /* $83CA: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x61); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83CC:;
    /* $83CC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x76 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_83CE:;
    /* $83CE: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_83CF:;
    /* $83CF: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83D1:;
    /* $83D1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_83D3:;
    /* $83D3: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x04); FLAG_NZ(g_cpu.X);
label_83D5:;
    /* $83D5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x83D5); return;
label_83D6:;
    /* $83D6: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83D8:;
    /* $83D8: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_83D9:;
    /* $83D9: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x7B7E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83DC:;
    /* $83DC: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_83DD:;
    /* $83DD: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0E + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83DF:;
    /* $83DF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_83E1:;
    /* $83E1: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x76 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_83E3:;
    /* $83E3: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x797D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83E6:;
    /* $83E6: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x78 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_83E8:;
    /* $83E8: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0x7278 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_83EB:;
    /* $83EB: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x79 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83ED:;
    /* $83ED: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x037E + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83F0:;
    /* $83F0: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_83F1:;
    /* $83F1: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1871); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_83F4:;
    /* $83F4: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_83F5:;
    /* $83F5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_83F7:;
    /* $83F7: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_83F8:;
    /* $83F8: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_83FA:;
    /* $83FA: 8F */ maybe_trigger_vblank(4); nes_write(0x9692, g_cpu.A & g_cpu.X); /* SAX */
label_83FD:;
    /* $83FD: 99 */ maybe_trigger_vblank(5); nes_write((0x9894 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8400:;
    /* $8400: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_8403:;
    /* $8403: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8404:;
    /* $8404: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_8407:;
    /* $8407: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8409:;
    /* $8409: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x06 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_840B:;
    /* $840B: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x08 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_840D:;
    /* $840D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x840D); return;
label_840E:;
    /* $840E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_8410:;
    /* $8410: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8410); return;
label_8411:;
    /* $8411: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8413:;
    /* $8413: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8415:;
    /* $8415: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE0; g_cpu.C=(g_cpu.X>=0xE0)?1:0; FLAG_NZ(r&0xFF); }
label_8417:;
    /* $8417: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xAA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8419:;
    /* $8419: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_841A:;
    /* $841A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_841C:;
    /* $841C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_841E:;
    /* $841E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8420:;
    /* $8420: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8421:;
    /* $8421: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_8423:;
    /* $8423: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8424:;
    /* $8424: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8425:;
    /* $8425: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8426:;
    /* $8426: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8427:;
    /* $8427: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8429:;
    /* $8429: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_842A:;
    /* $842A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x86 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_842C:;
    /* $842C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_842E:;
    /* $842E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8430:;
    /* $8430: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8431:;
    /* $8431: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_8433:;
    /* $8433: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8434:;
    /* $8434: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8435:;
    /* $8435: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8436:;
    /* $8436: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x88) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8438:;
    /* $8438: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_843A:;
    /* $843A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_843B:;
    /* $843B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x86 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_843D:;
    /* $843D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_843F:;
    /* $843F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8441:;
    /* $8441: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8442:;
    /* $8442: 86 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.X);
label_8444:;
    /* $8444: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8445:;
    /* $8445: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8446:;
    /* $8446: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8447:;
    /* $8447: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8448:;
    /* $8448: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_844A:;
    /* $844A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_844B:;
    /* $844B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x86 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_844D:;
    /* $844D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_844F:;
    /* $844F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8451:;
    /* $8451: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8452:;
    /* $8452: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x02 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8454:;
    /* $8454: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_8456:;
    /* $8456: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8458:;
    /* $8458: 86 */ maybe_trigger_vblank(3); nes_write(0xC0, g_cpu.X);
label_845A:;
    /* $845A: 80 */ maybe_trigger_vblank(2); /* NOP */
label_845C:;
    /* $845C: 8D */ maybe_trigger_vblank(4); nes_write(0x048C, g_cpu.A);
label_845F:;
    /* $845F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_8460:;
    /* $8460: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8461:;
    /* $8461: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8463:;
    /* $8463: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_8464:;
    /* $8464: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x026A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8467:;
    /* $8467: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x89; FLAG_NZ(g_cpu.A);
label_8469:;
    /* $8469: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_846B:;
    /* $846B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_846D:;
    /* $846D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_846E:;
    /* $846E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0268); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8471:;
    /* $8471: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x86); FLAG_NZ(g_cpu.X);
label_8473:;
    /* $8473: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8475:;
    /* $8475: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x66 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8477:;
    /* $8477: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x68 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x68); g_cpu.A=r&0xFF; }
label_8479:;
    /* $8479: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_847B:;
    /* $847B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x84); FLAG_NZ(g_cpu.Y);
label_847D:;
    /* $847D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_847F:;
    /* $847F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x63 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8481:;
    /* $8481: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x68 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8483:;
    /* $8483: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8485:;
    /* $8485: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x65); FLAG_NZ(g_cpu.A);
label_8487:;
    /* $8487: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8488:;
    /* $8488: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x40); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_848A:;
    /* $848A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_848B:;
    /* $848B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_848D:;
    /* $848D: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_848E:;
    /* $848E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x026A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8491:;
    /* $8491: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x89; FLAG_NZ(g_cpu.A);
label_8493:;
    /* $8493: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8495:;
    /* $8495: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8497:;
    /* $8497: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8498:;
    /* $8498: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0268); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_849B:;
    /* $849B: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x87); FLAG_NZ(g_cpu.A);
label_849D:;
    /* $849D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_849F:;
    /* $849F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x66 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84A1:;
    /* $84A1: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x6D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A3:;
    /* $84A3: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84A5:;
    /* $84A5: 8D */ maybe_trigger_vblank(4); nes_write(0x018C, g_cpu.A);
label_84A8:;
    /* $84A8: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_84A9:;
    /* $84A9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84AB:;
    /* $84AB: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x716F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84AE:;
    /* $84AE: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_8521;
label_84B0:;
    /* $84B0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84B1:;
    /* $84B1: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_84B3:;
    /* $84B3: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF2); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84B5:;
    /* $84B5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x40); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_84B7:;
    /* $84B7: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84B9:;
    /* $84B9: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x63 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84BB:;
    /* $84BB: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x66); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84BD:;
    /* $84BD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_84BE:;
    /* $84BE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_84BF:;
    /* $84BF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84C0:;
    /* $84C0: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_84C1:;
    /* $84C1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84C3:;
    /* $84C3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x61 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84C5:;
    /* $84C5: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x61 + g_cpu.X) & 0xFF), g_cpu.A);
label_84C7:; /* sprite_main_ptr_hi */
    /* $84C7: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x0E + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84C9:;
    /* $84C9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84CB:;
    /* $84CB: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x01 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_84CD:;
    /* $84CD: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_84CF:;
    /* $84CF: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x66; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84D1:;
    /* $84D1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84D2:;
    /* $84D2: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_84D4:;
    /* $84D4: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x6B; FLAG_NZ(g_cpu.A);
label_84D6:;
    /* $84D6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_84D8:;
    /* $84D8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x64); FLAG_NZ(g_cpu.Y);
label_84DA:;
    /* $84DA: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84DC:;
    /* $84DC: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_84DE:;
    /* $84DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_84E0:;
    /* $84E0: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x6B); FLAG_NZ(g_cpu.X);
label_84E2:;
    /* $84E2: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x028B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84E5:;
    /* $84E5: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_84E7:;
    /* $84E7: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_84E8:;
    /* $84E8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84EA:;
    /* $84EA: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84EB:;
    /* $84EB: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x6C; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_84ED:;
    /* $84ED: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x010F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84F0:;
    /* $84F0: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x88); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_84F2:;
    /* $84F2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x40); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_84F4:;
    /* $84F4: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_84F6:;
    /* $84F6: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x63 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_84F8:;
    /* $84F8: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x66); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_84FA:;
    /* $84FA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_84FB:;
    /* $84FB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_84FC:;
    /* $84FC: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84FD:;
    /* $84FD: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_84FE:;
    /* $84FE: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8500:;
    /* $8500: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x61 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8502:;
    /* $8502: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x61 + g_cpu.X) & 0xFF), g_cpu.A);
label_8504:;
    /* $8504: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8505:;
    /* $8505: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x61 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8507:;
    /* $8507: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8509:;
    /* $8509: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_850B:;
    /* $850B: F2 */ maybe_trigger_vblank(2); /* ILLEGAL $F2 — skip 1 */
label_850C:;
    /* $850C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_850E:;
    /* $850E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8510:;
    /* $8510: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x66); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8512:;
    /* $8512: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8513:;
    /* $8513: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8515:;
    /* $8515: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8517:;
    /* $8517: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8519:;
    /* $8519: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xA8AA); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_851C:;
    /* $851C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_851D:;
    /* $851D: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x66); FLAG_NZ(g_cpu.X);
label_851F:;
    /* $851F: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8521:;
    /* $8521: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x83 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8523:;
    /* $8523: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8525:;
    /* $8525: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x63 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8527:;
    /* $8527: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x65 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8529:;
    /* $8529: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_852B:;
    /* $852B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_852C:;
    /* $852C: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x16AF); FLAG_NZ(g_cpu.Y);
label_852F:;
    /* $852F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x5E); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8531:;
    /* $8531: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8533:;
    /* $8533: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8535:;
    /* $8535: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x0A03; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8538:;
    /* $8538: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x4035 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_853B:;
    /* $853B: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0890; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_853E:;
    /* $853E: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x1D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8540:;
    /* $8540: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x0F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8542:;
    /* $8542: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8543:;
    /* $8543: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x0210 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8546:;
    /* $8546: 82 */ maybe_trigger_vblank(2); /* NOP */
label_8548:;
    /* $8548: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8549:;
    /* $8549: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8549); return;
label_854A:;
    /* $854A: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_854C:;
    /* $854C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x054D), 12); return; }
label_854E:;
    /* $854E: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8550:;
    /* $8550: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8553:;
    /* $8553: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8555:;
    /* $8555: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_8557:;
    /* $8557: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF02 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_855A:;
    /* $855A: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_855C:;
    /* $855C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x855C); return;
label_855D:;
    /* $855D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_855E:;
    /* $855E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_855F:;
    /* $855F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8562:;
    /* $8562: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8562); return;
label_8563:;
    /* $8563: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8564:;
    /* $8564: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8565:;
    /* $8565: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8568:;
    /* $8568: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8568); return;
label_8569:;
    /* $8569: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_856B:;
    /* $856B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_856E:;
    /* $856E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x856E); return;
label_856F:;
    /* $856F: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_8571:;
    /* $8571: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8574:;
    /* $8574: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8574); return;
label_8575:;
    /* $8575: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8577:;
    /* $8577: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_857A:;
    /* $857A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x857A); return;
label_857B:;
    /* $857B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_857D:;
    /* $857D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8580:;
    /* $8580: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8580); return;
label_8581:;
    /* $8581: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8582:;
    /* $8582: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8583:;
    /* $8583: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8586:;
    /* $8586: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x08); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8588:;
    /* $8588: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF02 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_858B:;
    /* $858B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_858D:;
    /* $858D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x858D); return;
label_858E:;
    /* $858E: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_858F:;
    /* $858F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8590:;
    /* $8590: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8593:;
    /* $8593: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8593); return;
label_8594:;
    /* $8594: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8595:;
    /* $8595: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8596:;
    /* $8596: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8599:;
    /* $8599: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8599); return;
label_859A:;
    /* $859A: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_859C:;
    /* $859C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_859F:;
    /* $859F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x859F); return;
label_85A0:;
    /* $85A0: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_85A2:;
    /* $85A2: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85A5:;
    /* $85A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85A5); return;
label_85A6:;
    /* $85A6: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_85A8:;
    /* $85A8: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85AB:;
    /* $85AB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85AB); return;
label_85AC:;
    /* $85AC: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_85AE:;
    /* $85AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B1:;
    /* $85B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x85B1); return;
label_85B2:;
    /* $85B2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_85B3:;
    /* $85B3: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0207 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85B6:;
    /* $85B6: EB */ maybe_trigger_vblank(2); { uint8_t m=0x0A; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_85B8:;
    /* $85B8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_85B9:;
    /* $85B9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x4036; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85BC:;
    /* $85BC: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x33FF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85BF:;
    /* $85BF: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0210 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85C2:;
    /* $85C2: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x0A03; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85C5:;
    /* $85C5: 0F */ maybe_trigger_vblank(6); { uint16_t a=0xC02C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85C8:; /* main_ret_B */
    /* $85C8: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1440; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85CB:;
    /* $85CB: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F2D); FLAG_NZ(g_cpu.A);
label_85CE:;
    /* $85CE: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x0206 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D1:;
    /* $85D1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0A0B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85D4:;
    /* $85D4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x082F); FLAG_NZ(g_cpu.A);
label_85D7:;
    /* $85D7: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x0930 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85DA:;
    /* $85DA: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x07FF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85DD:;
    /* $85DD: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0215 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E0:;
    /* $85E0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85E3:;
    /* $85E3: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x802A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85E6:;
    /* $85E6: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3E7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85E9:;
    /* $85E9: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x402A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85EC:;
    /* $85EC: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3E7F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_85EF:;
    /* $85EF: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_85F0:;
    /* $85F0: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x030E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_85F3:;
    /* $85F3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_85F5:;
    /* $85F5: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C04 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85F8:;
    /* $85F8: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF02 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85FB:;
    /* $85FB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0403; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_85FE:;
    /* $85FE: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x3E; FLAG_NZ(g_cpu.A);
label_8600:;
    /* $8600: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x09); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8602:;
    /* $8602: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF02 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8605:;
    /* $8605: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0403; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8608:;
    /* $8608: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x3E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_860A:;
    /* $860A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x06); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_860C:;
    /* $860C: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF02 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_860F:;
    /* $860F: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0403; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8612:;
    /* $8612: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8614:;
    /* $8614: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x03); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8616:;
    /* $8616: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xFF02 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8619:;
    /* $8619: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0403; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_861C:;
    /* $861C: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x3E + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_861E:;
    /* $861E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8620:;
    /* $8620: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x09FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8623:;
    /* $8623: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8624:;
    /* $8624: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8625:;
    /* $8625: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0D08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8628:;
    /* $8628: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8629:;
    /* $8629: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0EFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_862C:;
    /* $862C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0209 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_862F:;
    /* $862F: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0604 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8632:;
    /* $8632: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8634:;
    /* $8634: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8634); return;
label_8635:; return;
label_8638:; return;
label_8639:; return;
label_863C:; return;
label_863F:; return;
label_8642:; return;
label_8644:; return;
label_8646:; return;
label_8649:; return;
label_864B:; return;
label_864C:; return;
label_864E:; return;
label_8651:; return;
label_8652:; return;
label_8654:; return;
label_8657:; return;
label_8658:; return;
label_8659:; return;
label_865C:; return;
label_865F:; return;
label_8661:; return;
label_8663:; return;
label_8666:; return;
label_8667:; return;
label_8668:; return;
label_8669:; return;
label_866A:; return;
label_866B:; return;
label_866E:; return;
label_8671:; return;
label_8673:; return;
label_8674:; return;
label_8677:; return;
label_8679:; return;
label_867C:; return;
label_867D:; return;
label_867F:; return;
label_8680:; return;
label_8681:; return;
label_8684:; return;
label_8687:; return;
label_868A:; return;
label_868D:; return;
label_8690:; return;
label_8691:; return;
label_8693:; return;
label_8696:; return;
label_8698:; return;
label_869A:; return;
label_869D:; return;
label_86A0:; return;
label_86A3:; return;
label_86A6:; return;
label_86A7:; return;
label_86A9:; return;
label_86AA:; return;
label_86AB:; return;
label_86AD:; return;
label_86B0:; return;
label_86B2:; return;
label_86B5:; return;
label_86B7:; return;
label_86BA:; return;
label_86BB:; return;
label_86BE:; return;
label_86BF:; return;
label_86C1:; return;
label_86C3:; return;
label_86C4:; return;
label_86C6:; return;
label_86C7:; return;
label_86C8:; return;
label_86CB:; return;
label_86CE:; return;
label_86D1:; return;
label_86D4:; return;
label_86D5:; return;
label_86D8:; return;
label_86D9:; return;
label_86DA:; return;
label_86DC:; return;
label_86DF:; return;
label_86E2:; return;
label_86E5:; return;
label_86E8:; return;
label_86EA:; return;
label_86EC:; return;
label_86EF:; return;
label_86F2:; return;
label_86F5:; return;
label_86F8:; return;
label_86F9:; return;
label_86FC:; return;
label_86FE:; return;
label_8701:; return;
label_8704:; return;
label_8706:; return;
label_8709:; return;
label_870B:; return;
label_870D:; return;
label_8710:; return;
label_8711:; return;
label_8714:; return;
label_8717:; return;
label_871A:; return;
label_871D:; return;
label_8720:; return;
label_8721:; return;
label_8724:; return;
label_8725:; return;
label_8728:; return;
label_8729:; return;
label_872C:; return;
label_872D:; return;
label_8730:; return;
label_8733:; return;
label_8734:; return;
label_8735:; return;
label_8738:; return;
label_873B:; return;
label_873E:; return;
label_8741:; return;
label_8743:; return;
label_8746:; return;
label_8747:; return;
label_874A:; return;
label_874B:; return;
label_874E:; return;
label_8750:; return;
label_8753:; return;
label_8754:; return;
label_8757:; return;
label_8758:; return;
label_8759:; return;
label_875C:; return;
label_875F:; return;
label_8762:; return;
label_8764:; return;
label_8765:; return;
label_8767:; return;
label_876A:; return;
label_876D:; return;
label_876F:; return;
label_8772:; return;
label_8773:; return;
label_8776:; return;
label_8778:; return;
label_877A:; return;
label_877B:; return;
label_877D:; return;
label_8780:; return;
label_8781:; return;
label_8782:; return;
label_8783:; return;
label_8785:; return;
label_8786:; return;
label_8788:; return;
label_8789:; return;
label_878A:; return;
label_878D:; return;
label_878F:; return;
label_8790:; return;
label_8793:; return;
label_8795:; return;
label_8798:; return;
label_879B:; return;
label_879C:; return;
label_879D:; return;
label_879F:; return;
label_87A2:; return;
label_87A3:; return;
label_87A5:; return;
label_87A6:; return;
label_87A8:; return;
label_87AB:; return;
label_87AD:; return;
label_87AE:; return;
label_87AF:; return;
label_87B1:; return;
label_87B3:; return;
label_87B4:; return;
label_87B5:; return;
label_87B7:; return;
label_87B9:; return;
label_87BA:; return;
label_87BB:; return;
label_87BD:; return;
label_87BF:; return;
label_87C0:; return;
label_87C1:; return;
label_87C3:; return;
label_87C5:; return;
label_87C6:; return;
label_87C7:; return;
label_87C9:; return;
label_87CB:; return;
label_87CC:; return;
label_87CD:; return;
label_87CF:; return;
label_87D1:; return;
label_87D2:; return;
label_87D3:; return;
label_87D5:; return;
label_87D7:; return;
label_87D8:; return;
label_87D9:; return;
label_87DB:; return;
label_87DD:; return;
label_87DE:; return;
label_87DF:; return;
label_87E1:; return;
label_87E3:; return;
label_87E4:; return;
label_87E5:; return;
label_87E7:; return;
label_87E9:; return;
label_87EA:; return;
label_87EB:; return;
label_87ED:; return;
label_87EF:; return;
label_87F1:; return;
label_87F2:; return;
label_87F4:; return;
label_87F7:; return;
label_87F9:; return;
label_87FA:; return;
label_87FB:; return;
label_87FD:; return;
label_87FE:; return;
label_8800:; return;
label_8803:; return;
label_8805:; return;
label_8808:; return;
label_880A:; return;
label_880B:; return;
label_880D:; return;
label_8810:; return;
label_8813:; return;
label_8816:; return;
label_8819:; return;
label_881B:; return;
label_881E:; return;
label_881F:; return;
label_8820:; return;
label_8822:; return;
label_8824:; return;
label_8827:; return;
label_8829:; return;
label_882A:; return;
label_882C:; return;
label_882F:; return;
label_8831:; return;
label_8832:; return;
label_8834:; return;
label_8836:; return;
label_8838:; return;
label_883A:; return;
label_883B:; return;
label_883E:; return;
label_8841:; return;
label_8844:; return;
label_8845:; return;
label_8846:; return;
label_8849:; return;
label_884A:; return;
label_884C:; return;
label_884E:; return;
label_8851:; return;
label_8854:; return;
label_8857:; return;
label_885A:; return;
label_885C:; return;
label_885D:; return;
label_885E:; return;
label_885F:; return;
label_8860:; return;
label_8862:; return;
label_8865:; return;
label_8866:; return;
label_8867:; return;
label_886A:; return;
label_886D:; return;
label_886F:; return;
label_8872:; return;
label_8875:; return;
label_8876:; return;
label_8879:; return;
label_887A:; return;
label_887D:; return;
label_887F:; return;
label_8880:; return;
label_8882:; return;
label_8884:; return;
label_8886:; return;
label_8889:; return;
label_888C:; return;
label_888F:; return;
label_8892:; return;
label_8893:; return;
label_8895:; return;
label_8896:; return;
label_8898:; return;
label_889A:; return;
label_889B:; return;
label_889C:; return;
label_889E:; return;
label_889F:; return;
label_88A2:; return;
label_88A5:; return;
label_88A8:; return;
label_88AB:; return;
label_88AD:; return;
label_88AF:; return;
label_88B1:; return;
label_88B2:; return;
label_88B4:; return;
label_88B6:; return;
label_88B7:; return;
label_88B9:; return;
label_88BB:; return;
label_88BC:; return;
label_88BE:; return;
label_88BF:; return;
label_88C2:; return;
label_88C5:; return;
label_88C8:; return;
label_88CA:; return;
label_88CC:; return;
label_88CD:; return;
label_88CE:; return;
label_88D0:; return;
label_88D2:; return;
label_88D3:; return;
label_88D4:; return;
label_88D5:; return;
label_88D6:; return;
label_88D7:; return;
label_88D8:; return;
label_88D9:; return;
label_88DC:; return;
label_88DF:; return;
label_88E0:; return;
label_88E2:; return;
label_88E4:; return;
label_88E7:; return;
label_88E9:; return;
label_88EB:; return;
label_88EC:; return;
label_88EE:; return;
label_88F0:; return;
label_88F2:; return;
label_88F3:; return;
label_88F5:; return;
label_88F6:; return;
label_88F7:; return;
label_88F8:; return;
label_88FA:; return;
label_88FD:; return;
label_88FE:; return;
label_8900:; return;
label_8901:; return;
label_8904:; return;
label_8907:; return;
label_890A:; return;
label_890B:; return;
label_890E:; return;
label_890F:; return;
label_8912:; return;
label_8913:; return;
label_8916:; return;
label_8917:; return;
label_8918:; return;
label_891B:; return;
label_891D:; return;
label_891E:; return;
label_891F:; return;
label_8920:; return;
label_8921:; return;
label_8922:; return;
label_8925:; return;
label_8928:; return;
label_8929:; return;
label_892B:; return;
label_892C:; return;
label_892E:; return;
label_8930:; return;
label_8932:; return;
label_8934:; return;
label_8935:; return;
label_8937:; return;
label_8939:; return;
label_893A:; return;
label_893B:; return;
label_893D:; return;
label_893E:; return;
label_893F:; return;
label_8940:; return;
label_8941:; return;
label_8943:; return;
label_8946:; return;
label_8949:; return;
label_894C:; return;
label_894D:; return;
label_894E:; return;
label_8950:; return;
label_8953:; return;
label_8956:; return;
label_8959:; return;
label_895A:; return;
label_895D:; return;
label_895E:; return;
label_8961:; return;
label_8963:; return;
label_8964:; return;
label_8965:; return;
label_8966:; return;
label_8967:; return;
label_8968:; return;
label_8969:; return;
label_896C:; return;
label_896F:; return;
label_8970:; return;
label_8972:; return;
label_8974:; return;
label_8977:; return;
label_8979:; return;
label_897B:; return;
label_897C:; return;
label_897E:; return;
label_8980:; return;
label_8982:; return;
label_8983:; return;
label_8986:; return;
label_8989:; return;
label_898B:; return;
label_898C:; return;
label_898E:; return;
label_8991:; return;
label_8994:; return;
label_8997:; return;
label_8998:; return;
label_899A:; return;
label_899D:; return;
label_89A0:; return;
label_89A1:; return;
label_89A4:; return;
label_89A5:; return;
label_89A8:; return;
label_89AB:; return;
label_89AC:; return;
label_89AF:; return;
label_89B2:; return;
label_89B4:; return;
label_89B5:; return;
label_89B8:; return;
label_89BB:; return;
label_89BE:; return;
label_89C1:; return;
label_89C4:; return;
label_89C7:; return;
label_89C8:; return;
label_89C9:; return;
label_89CC:; return;
label_89CE:; return;
label_89D0:; return;
label_89D2:; return;
label_89D4:; return;
label_89D7:; return;
label_89D8:; return;
label_89DA:; return;
label_89DB:; return;
label_89DD:; return;
label_89DE:; return;
label_89E0:; return;
label_89E2:; return;
label_89E3:; return;
label_89E6:; return;
label_89E7:; return;
label_89E9:; return;
label_89EC:; return;
label_89EF:; return;
label_89F2:; return;
label_89F5:; return;
label_89F6:; return;
label_89F7:; return;
label_89F8:; return;
label_89FA:; return;
label_89FB:; return;
label_89FD:; return;
label_89FE:; return;
label_8A00:; return;
label_8A02:; return;
label_8A04:; return;
label_8A06:; return;
label_8A09:; return;
label_8A0B:; return;
label_8A0C:; return;
label_8A0F:; return;
label_8A10:; return;
label_8A12:; return;
label_8A15:; return;
label_8A16:; return;
label_8A17:; return;
label_8A1A:; return;
label_8A1B:; return;
label_8A1C:; return;
label_8A1D:; return;
label_8A1E:; return;
label_8A1F:; return;
label_8A20:; return;
label_8A22:; return;
label_8A23:; return;
label_8A24:; return;
label_8A26:; return;
label_8A27:; return;
label_8A29:; return;
label_8A2B:; return;
label_8A2C:; return;
label_8A2E:; return;
label_8A2F:; return;
label_8A30:; return;
label_8A32:; return;
label_8A34:; return;
label_8A36:; return;
label_8A37:; return;
label_8A38:; return;
label_8A39:; return;
label_8A3C:; return;
label_8A3D:; return;
label_8A3E:; return;
label_8A40:; return;
label_8A41:; return;
label_8A44:; return;
label_8A45:; return;
label_8A46:; return;
label_8A47:; return;
label_8A49:; return;
label_8A4C:; return;
label_8A4D:; return;
label_8A4F:; return;
label_8A50:; return;
label_8A52:; return;
label_8A53:; return;
label_8A55:; return;
label_8A57:; return;
label_8A59:; return;
label_8A5B:; return;
label_8A5C:; return;
label_8A5F:; return;
label_8A60:; return;
label_8A62:; return;
label_8A65:; return;
label_8A68:; return;
label_8A6A:; return;
label_8A6C:; return;
label_8A6D:; return;
label_8A6F:; return;
label_8A71:; return;
label_8A74:; return;
label_8A77:; return;
label_8A79:; return;
label_8A7A:; return;
label_8A7D:; return;
label_8A7F:; return;
label_8A82:; return;
label_8A84:; return;
label_8A86:; return;
label_8A88:; return;
label_8A8B:; return;
label_8A8E:; return;
label_8A8F:; return;
label_8A90:; return;
label_8A91:; return;
label_8A92:; return;
label_8A93:; return;
label_8A94:; return;
label_8A97:; return;
label_8A99:; return;
label_8A9B:; return;
label_8A9E:; return;
label_8AA1:; return;
label_8AA4:; return;
label_8AA6:; return;
label_8AA7:; return;
label_8AA8:; return;
label_8AAA:; return;
label_8AAC:; return;
label_8AAD:; return;
label_8AB0:; return;
label_8AB1:; return;
label_8AB2:; return;
label_8AB4:; return;
label_8AB5:; return;
label_8AB8:; return;
label_8ABB:; return;
label_8ABC:; return;
label_8ABD:; return;
label_8AC0:; return;
label_8AC1:; return;
label_8AC2:; return;
label_8AC3:; return;
label_8AC5:; return;
label_8AC7:; return;
label_8AC9:; return;
label_8ACA:; return;
label_8ACB:; return;
label_8ACD:; return;
label_8ACF:; return;
label_8AD1:; return;
label_8AD3:; return;
label_8AD4:; return;
label_8AD5:; return;
label_8AD6:; return;
label_8AD7:; return;
label_8ADA:; return;
label_8ADC:; return;
label_8ADD:; return;
label_8ADF:; return;
label_8AE1:; return;
label_8AE4:; return;
label_8AE7:; return;
label_8AE8:; return;
label_8AE9:; return;
label_8AEC:; return;
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
label_8B03:; return;
label_8B04:; return;
label_8B05:; return;
label_8B08:; return;
label_8B0B:; return;
label_8B0C:; return;
label_8B0F:; return;
label_8B11:; return;
label_8B13:; return;
label_8B15:; return;
label_8B16:; return;
label_8B17:; return;
label_8B18:; return;
label_8B19:; return;
label_8B1A:; return;
label_8B1B:; return;
label_8B1C:; return;
label_8B1D:; return;
label_8B1F:; return;
label_8B20:; return;
label_8B21:; return;
label_8B22:; return;
label_8B23:; return;
label_8B26:; return;
label_8B29:; return;
label_8B2C:; return;
label_8B2D:; return;
label_8B2F:; return;
label_8B30:; return;
label_8B33:; return;
label_8B35:; return;
label_8B37:; return;
label_8B38:; return;
label_8B3A:; return;
label_8B3C:; return;
label_8B3D:; return;
label_8B40:; return;
label_8B41:; return;
label_8B44:; return;
label_8B46:; return;
label_8B49:; return;
label_8B4B:; return;
label_8B4D:; return;
label_8B4E:; return;
label_8B51:; return;
label_8B54:; return;
label_8B57:; return;
label_8B5A:; return;
label_8B5C:; return;
label_8B5F:; return;
label_8B62:; return;
label_8B65:; return;
label_8B67:; return;
label_8B68:; return;
label_8B6A:; return;
label_8B6C:; return;
label_8B6F:; return;
label_8B71:; return;
label_8B73:; return;
label_8B74:; return;
label_8B75:; return;
label_8B77:; return;
label_8B79:; return;
label_8B7A:; return;
label_8B7C:; return;
label_8B7E:; return;
label_8B7F:; return;
label_8B81:; return;
label_8B83:; return;
label_8B85:; return;
label_8B88:; return;
label_8B89:; return;
label_8B8B:; return;
label_8B8E:; return;
label_8B90:; return;
label_8B92:; return;
label_8B95:; return;
label_8B96:; return;
label_8B98:; return;
label_8B9A:; return;
label_8B9C:; return;
label_8B9E:; return;
label_8BA1:; return;
label_8BA3:; return;
label_8BA4:; return;
label_8BA5:; return;
label_8BA7:; return;
label_8BA9:; return;
label_8BAC:; return;
label_8BAE:; return;
label_8BB0:; return;
label_8BB2:; return;
label_8BB3:; return;
label_8BB5:; return;
label_8BB7:; return;
label_8BB9:; return;
label_8BBB:; return;
label_8BBD:; return;
label_8BBF:; return;
label_8BC1:; return;
label_8BC4:; return;
label_8BC7:; return;
label_8BC9:; return;
label_8BCA:; return;
label_8BCB:; return;
label_8BCC:; return;
label_8BCD:; return;
label_8BD0:; return;
label_8BD1:; return;
label_8BD3:; return;
label_8BD5:; return;
label_8BD7:; return;
label_8BD9:; return;
label_8BDC:; return;
label_8BDE:; return;
label_8BE1:; return;
label_8BE2:; return;
label_8BE4:; return;
label_8BE5:; return;
label_8BE7:; return;
label_8BE8:; return;
label_8BEA:; return;
label_8BEB:; return;
label_8BED:; return;
label_8BEE:; return;
label_8BF0:; return;
label_8BF1:; return;
label_8BF3:; return;
label_8BF5:; return;
label_8BF7:; return;
label_8BF8:; return;
label_8BFA:; return;
label_8BFB:; return;
label_8BFD:; return;
label_8BFF:; return;
label_8C01:; return;
label_8C02:; return;
label_8C04:; return;
label_8C06:; return;
label_8C08:; return;
label_8C0B:; return;
label_8C0C:; return;
label_8C0E:; return;
label_8C11:; return;
label_8C13:; return;
label_8C15:; return;
label_8C18:; return;
label_8C19:; return;
label_8C1B:; return;
label_8C1D:; return;
label_8C1E:; return;
label_8C20:; return;
label_8C21:; return;
label_8C23:; return;
label_8C25:; return;
label_8C26:; return;
label_8C28:; return;
label_8C29:; return;
label_8C2B:; return;
label_8C2D:; return;
label_8C2F:; return;
label_8C31:; return;
label_8C33:; return;
label_8C34:; return;
label_8C36:; return;
label_8C37:; return;
label_8C3A:; return;
label_8C3D:; return;
label_8C3E:; return;
label_8C41:; return;
label_8C43:; return;
label_8C44:; return;
label_8C47:; return;
label_8C4A:; return;
label_8C4C:; return;
label_8C4F:; return;
label_8C50:; return;
label_8C51:; return;
label_8C54:; return;
label_8C57:; return;
label_8C5A:; return;
label_8C5C:; return;
label_8C5F:; return;
label_8C61:; return;
label_8C64:; return;
label_8C65:; return;
label_8C67:; return;
label_8C69:; return;
label_8C6A:; return;
label_8C6C:; return;
label_8C6D:; return;
label_8C6F:; return;
label_8C70:; return;
label_8C72:; return;
label_8C73:; return;
label_8C75:; return;
label_8C76:; return;
label_8C78:; return;
label_8C7A:; return;
label_8C7C:; return;
label_8C7D:; return;
label_8C7E:; return;
label_8C7F:; return;
label_8C81:; return;
label_8C83:; return;
label_8C85:; return;
label_8C87:; return;
label_8C89:; return;
label_8C8C:; return;
label_8C8E:; return;
label_8C8F:; return;
label_8C90:; return;
label_8C92:; return;
label_8C93:; return;
label_8C94:; return;
label_8C96:; return;
label_8C98:; return;
label_8C9A:; return;
label_8C9C:; return;
label_8C9E:; return;
label_8C9F:; return;
label_8CA0:; return;
label_8CA1:; return;
label_8CA2:; return;
label_8CA3:; return;
label_8CA4:; return;
label_8CA5:; return;
label_8CA6:; return;
label_8CA7:; return;
label_8CA9:; return;
label_8CAB:; return;
label_8CAD:; return;
label_8CAF:; return;
label_8CB1:; return;
label_8CB2:; return;
label_8CB3:; return;
label_8CB5:; return;
label_8CB6:; return;
label_8CB9:; return;
label_8CBB:; return;
label_8CBD:; return;
label_8CBF:; return;
label_8CC1:; return;
label_8CC3:; return;
label_8CC6:; return;
label_8CC7:; return;
label_8CCA:; return;
label_8CCC:; return;
label_8CCF:; return;
label_8CD0:; return;
label_8CD2:; return;
label_8CD5:; return;
label_8CD6:; return;
label_8CD7:; return;
label_8CD8:; return;
label_8CDA:; return;
label_8CDC:; return;
label_8CDD:; return;
label_8CDE:; return;
label_8CE1:; return;
label_8CE3:; return;
label_8CE6:; return;
label_8CE9:; return;
label_8CEC:; return;
label_8CEF:; return;
label_8CF2:; return;
label_8CF5:; return;
label_8CF8:; return;
label_8CFB:; return;
label_8CFE:; return;
label_8D00:; return;
label_8D03:; return;
label_8D06:; return;
label_8D08:; return;
label_8D0B:; return;
label_8D0D:; return;
label_8D0F:; return;
label_8D10:; return;
label_8D12:; return;
label_8D13:; return;
label_8D15:; return;
label_8D16:; return;
label_8D18:; return;
label_8D19:; return;
label_8D1B:; return;
label_8D1D:; return;
label_8D1F:; return;
label_8D22:; return;
label_8D25:; return;
label_8D28:; return;
label_8D29:; return;
label_8D2A:; return;
label_8D2C:; return;
label_8D2E:; return;
label_8D2F:; return;
label_8D30:; return;
label_8D32:; return;
label_8D33:; return;
label_8D34:; return;
label_8D37:; return;
label_8D38:; return;
label_8D3B:; return;
label_8D3C:; return;
label_8D3D:; return;
label_8D40:; return;
label_8D41:; return;
label_8D43:; return;
label_8D44:; return;
label_8D46:; return;
label_8D49:; return;
label_8D4C:; return;
label_8D4F:; return;
label_8D50:; return;
label_8D53:; return;
label_8D54:; return;
label_8D56:; return;
label_8D57:; return;
label_8D58:; return;
label_8D59:; return;
label_8D5A:; return;
label_8D5C:; return;
label_8D5E:; return;
label_8D60:; return;
label_8D61:; return;
label_8D62:; return;
label_8D63:; return;
label_8D64:; return;
label_8D66:; return;
label_8D68:; return;
label_8D69:; return;
label_8D6C:; return;
label_8D6D:; return;
label_8D6E:; return;
label_8D71:; return;
label_8D72:; return;
label_8D74:; return;
label_8D75:; return;
label_8D77:; return;
label_8D7A:; return;
label_8D7B:; return;
label_8D7D:; return;
label_8D7F:; return;
label_8D80:; return;
label_8D82:; return;
label_8D84:; return;
label_8D86:; return;
label_8D87:; return;
label_8D89:; return;
label_8D8C:; return;
label_8D8F:; return;
label_8D91:; return;
label_8D92:; return;
label_8D93:; return;
label_8D94:; return;
label_8D96:; return;
label_8D99:; return;
label_8D9C:; return;
label_8D9D:; return;
label_8DA0:; return;
label_8DA3:; return;
label_8DA4:; return;
label_8DA7:; return;
label_8DAA:; return;
label_8DAD:; return;
label_8DAF:; return;
label_8DB0:; return;
label_8DB1:; return;
label_8DB2:; return;
label_8DB3:; return;
label_8DB4:; return;
label_8DB5:; return;
label_8DB6:; return;
label_8DB8:; return;
label_8DB9:; return;
label_8DBB:; return;
label_8DBC:; return;
label_8DBF:; return;
label_8DC0:; return;
label_8DC3:; return;
label_8DC5:; return;
label_8DC7:; return;
label_8DCA:; return;
label_8DCC:; return;
label_8DCF:; return;
label_8DD1:; return;
label_8DD2:; return;
label_8DD3:; return;
label_8DD4:; return;
label_8DD6:; return;
label_8DD8:; return;
label_8DDA:; return;
label_8DDC:; return;
label_8DDE:; return;
label_8DE0:; return;
label_8DE1:; return;
label_8DE3:; return;
label_8DE5:; return;
label_8DE7:; return;
label_8DE9:; return;
label_8DEB:; return;
label_8DED:; return;
label_8DEE:; return;
label_8DEF:; return;
label_8DF0:; return;
label_8DF1:; return;
label_8DF3:; return;
label_8DF6:; return;
label_8DF9:; return;
label_8DFC:; return;
label_8DFE:; return;
label_8E00:; return;
label_8E01:; return;
label_8E03:; return;
label_8E05:; return;
label_8E07:; return;
label_8E08:; return;
label_8E0B:; return;
label_8E0C:; return;
label_8E0D:; return;
label_8E0F:; return;
label_8E10:; return;
label_8E12:; return;
label_8E13:; return;
label_8E15:; return;
label_8E17:; return;
label_8E18:; return;
label_8E1A:; return;
label_8E1B:; return;
label_8E1C:; return;
label_8E1E:; return;
label_8E1F:; return;
label_8E21:; return;
label_8E24:; return;
label_8E26:; return;
label_8E27:; return;
label_8E28:; return;
label_8E2A:; return;
label_8E2B:; return;
label_8E2D:; return;
label_8E2E:; return;
label_8E30:; return;
label_8E31:; return;
label_8E33:; return;
label_8E35:; return;
label_8E38:; return;
label_8E3A:; return;
label_8E3C:; return;
label_8E3D:; return;
label_8E3E:; return;
label_8E3F:; return;
label_8E40:; return;
label_8E43:; return;
label_8E44:; return;
label_8E46:; return;
label_8E48:; return;
label_8E49:; return;
label_8E4A:; return;
label_8E4B:; return;
label_8E4C:; return;
label_8E4E:; return;
label_8E50:; return;
label_8E51:; return;
label_8E52:; return;
label_8E53:; return;
label_8E54:; return;
label_8E56:; return;
label_8E59:; return;
label_8E5A:; return;
label_8E5B:; return;
label_8E5C:; return;
label_8E5D:; return;
label_8E5E:; return;
label_8E5F:; return;
label_8E61:; return;
label_8E62:; return;
label_8E64:; return;
label_8E65:; return;
label_8E66:; return;
label_8E67:; return;
label_8E68:; return;
label_8E69:; return;
label_8E6A:; return;
label_8E6B:; return;
label_8E6C:; return;
label_8E6D:; return;
label_8E6F:; return;
label_8E70:; return;
label_8E71:; return;
label_8E72:; return;
label_8E73:; return;
label_8E74:; return;
label_8E75:; return;
label_8E76:; return;
label_8E77:; return;
label_8E78:; return;
label_8E79:; return;
label_8E7A:; return;
label_8E7B:; return;
label_8E7C:; return;
label_8E7E:; return;
label_8E7F:; return;
label_8E80:; return;
label_8E81:; return;
label_8E83:; return;
label_8E84:; return;
label_8E86:; return;
label_8E88:; return;
label_8E8B:; return;
label_8E8C:; return;
label_8E8E:; return;
label_8E8F:; return;
label_8E90:; return;
label_8E91:; return;
label_8E92:; return;
label_8E93:; return;
label_8E95:; return;
label_8E96:; return;
label_8E98:; return;
label_8E9A:; return;
label_8E9B:; return;
label_8E9C:; return;
label_8E9D:; return;
label_8E9F:; return;
label_8EA0:; return;
label_8EA2:; return;
label_8EA3:; return;
label_8EA4:; return;
label_8EA5:; return;
label_8EA6:; return;
label_8EA7:; return;
label_8EA9:; return;
label_8EAA:; return;
label_8EAC:; return;
label_8EAD:; return;
label_8EAE:; return;
label_8EAF:; return;
label_8EB0:; return;
label_8EB1:; return;
label_8EB2:; return;
label_8EB3:; return;
label_8EB4:; return;
label_8EB5:; return;
label_8EB6:; return;
label_8EB7:; return;
label_8EB9:; return;
label_8EBA:; return;
label_8EBB:; return;
label_8EBC:; return;
label_8EBE:; return;
label_8EBF:; return;
label_8EC0:; return;
label_8EC1:; return;
label_8EC3:; return;
label_8EC4:; return;
label_8EC6:; return;
label_8EC8:; return;
label_8ECB:; return;
label_8ECC:; return;
label_8ECE:; return;
label_8ECF:; return;
label_8ED0:; return;
label_8ED1:; return;
label_8ED2:; return;
label_8ED3:; return;
label_8ED5:; return;
label_8ED6:; return;
label_8ED7:; return;
label_8ED8:; return;
label_8ED9:; return;
label_8EDA:; return;
label_8EDB:; return;
label_8EDC:; return;
label_8EDD:; return;
label_8EDE:; return;
label_8EDF:; return;
label_8EE0:; return;
label_8EE1:; return;
label_8EE2:; return;
label_8EE4:; return;
label_8EE5:; return;
label_8EE6:; return;
label_8EE7:; return;
label_8EE9:; return;
label_8EEA:; return;
label_8EEB:; return;
label_8EEC:; return;
label_8EEE:; return;
label_8EEF:; return;
label_8EF0:; return;
label_8EF1:; return;
label_8EF2:; return;
label_8EF3:; return;
label_8EF4:; return;
label_8EF5:; return;
label_8EF6:; return;
label_8EF8:; return;
label_8EF9:; return;
label_8EFA:; return;
label_8EFB:; return;
label_8EFC:; return;
label_8EFD:; return;
label_8EFE:; return;
label_8EFF:; return;
label_8F00:; return;
label_8F01:; return;
label_8F02:; return;
}

void func_8000_b12(void) { /* process_sprites_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b12");
#endif
    func_8000_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8003_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b12");
#endif
    func_8000_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_800F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800F_b12");
#endif
    func_8000_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_800C_b12(void) { /* process_sprites */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_800C_b12");
#endif
    func_8000_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_81BD_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81BD_b12");
#endif
    func_8000_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82BC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82BC_b12");
#endif
    func_8000_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8504_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b12");
#endif
    func_8000_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_809D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_809D_b12");
#endif
    func_8000_b12_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_82B6_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_82B6_b12");
#endif
    func_8000_b12_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_836D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_836D_b12");
#endif
    func_8000_b12_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_838C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_838C_b12");
#endif
    func_8000_b12_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_83C5_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_83C5_b12");
#endif
    func_8000_b12_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8430_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8430_b12");
#endif
    func_8000_b12_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85F3_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85F3_b12");
#endif
    func_8000_b12_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9C00_b12(void) { /* check_new_enemies */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C00_b12");
#endif
label_9C00:; /* check_new_enemies */
    /* $9C00: 97 */ maybe_trigger_vblank(4); nes_write((0x30 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9C02:;
    /* $9C02: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8006_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b12");
#endif
label_8006:;
    /* $8006: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0xAF00); FLAG_NZ(g_cpu.A);
label_8009:;
    /* $8009: 8D */ maybe_trigger_vblank(4); nes_write(0x1288, g_cpu.A);
label_800C:; /* process_sprites */
    /* $800C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_800D:;
    /* $800D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x16; g_cpu.C=(g_cpu.Y>=0x16)?1:0; FLAG_NZ(r&0xFF); }
label_800F:;
    /* $800F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8010:;
    /* $8010: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8011:;
    /* $8011: 8D */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.A);
label_8014:;
    /* $8014: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02EB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
}

void func_8009_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b12");
#endif
label_8009:;
    /* $8009: 8D */ maybe_trigger_vblank(4); nes_write(0x1288, g_cpu.A);
label_800C:; /* process_sprites */
    /* $800C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_800D:;
    /* $800D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x16; g_cpu.C=(g_cpu.Y>=0x16)?1:0; FLAG_NZ(r&0xFF); }
label_800F:;
    /* $800F: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8010:;
    /* $8010: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8011:;
    /* $8011: 8D */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.A);
label_8014:;
    /* $8014: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x02EB + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
}

void func_8012_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8012_b12");
#endif
label_8012:;
    /* $8012: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xBF01; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8015:;
    /* $8015: EB */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8017:;
    /* $8017: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8017); return;
}

void func_9000_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9000_b12");
#endif
label_9000:;
    /* $9000: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9410, 12); return;
}

void func_9006_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9006_b12");
#endif
label_9006:;
    /* $9006: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9ABE, 12); return;
}

void func_9003_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9003_b12");
#endif
label_9003:;
    /* $9003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x985D, 12); return;
}

static void func_A000_b12_body(int _entry) { /* main_needle_man_j */
    switch (_entry) {
        case 1: goto label_A003;
    }
label_A000:; /* main_needle_man_j */
    /* $A000: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4F7 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A003:; /* main_doc_heat_j */
    /* $A003: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A005:;
    /* $A005: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A008:;
    /* $A008: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A00B:;
    /* $A00B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A00D:;
    /* $A00D: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A00F:; /* main_wily_machine_B */
    /* $A00F: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0404 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A012:; /* main_gemini_man_j */
    /* $A012: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCEC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A015:; /* main_gamma_B */
    /* $A015: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A017:;
    /* $A017: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A019:;
    /* $A019: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A01C:; /* main_needle_man */
    /* $A01C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A01F:;
    /* $A01F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A021:; /* main_teleporter */
    /* $A021: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A023:;
    /* $A023: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF404 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A026:;
    /* $A026: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFA0C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A029:;
    /* $A029: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF4 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A02B:;
    /* $A02B: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A02D:;
    /* $A02D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A030:; /* main_kamegoro_maker */
    /* $A030: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A033:;
    /* $A033: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A035:;
    /* $A035: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A037:;
    /* $A037: FC */ maybe_trigger_vblank(4); (void)nes_read((0xECFA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A03A:;
    /* $A03A: FA */ maybe_trigger_vblank(2); /* NOP */
label_A03B:;
    /* $A03B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A03D:;
    /* $A03D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A03F:; /* main_holograph */
    /* $A03F: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A042:;
    /* $A042: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A045:;
    /* $A045: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A047:;
    /* $A047: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A049:;
    /* $A049: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0CFA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A04C:;
    /* $A04C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A04E:;
    /* $A04E: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A050:;
    /* $A050: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A053:;
    /* $A053: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA053); return;
}

void func_A000_b12(void) { /* main_needle_man_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A000_b12");
#endif
    func_A000_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A003_b12(void) { /* main_doc_heat_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A003_b12");
#endif
    func_A000_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9410_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9410_b12");
#endif
label_9410:;
    /* $9410: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_9412:;
    /* $9412: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x00A2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9415:;
    /* $9415: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_941C;
label_9417:;
    /* $9417: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9419:;
    /* $9419: 99 */ maybe_trigger_vblank(5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_941C:;
    /* $941C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_941D:;
    /* $941D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9412;
    }
label_941F:;
    /* $941F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9421:;
    /* $9421: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9423:;
    /* $9423: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9428;
label_9425:;
    /* $9425: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9581, 12); return;
label_9428:;
    /* $9428: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x142A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9428, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_942B:;
    /* $942B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_942D:;
    /* $942D: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_942F:;
    /* $942F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1431); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x942F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9432:;
    /* $9432: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1434); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9435:;
    /* $9435: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x35; FLAG_NZ(g_cpu.A);
label_9437:;
    /* $9437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1439); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_943A:;
    /* $943A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x143C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9936, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x943A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_943D:;
    /* $943D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_943F:;
    /* $943F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9440:;
    /* $9440: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_9442:;
    /* $9442: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_9444:;
    /* $9444: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9446:;
    /* $9446: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1448); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9446, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9449:;
    /* $9449: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_944B:;
    /* $944B: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_944D:;
    /* $944D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x144F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x944D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9450:;
    /* $9450: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1452); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9453:;
    /* $9453: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9455:;
    /* $9455: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9449;
    }
label_9457:;
    /* $9457: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9458:;
    /* $9458: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_945A:;
    /* $945A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_945C:;
    /* $945C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_945E:;
    /* $945E: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9460:;
    /* $9460: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1462); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9460, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9463:;
    /* $9463: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1465); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9466:;
    /* $9466: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9468:;
    /* $9468: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9469:;
    /* $9469: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x06 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x06); g_cpu.A=r&0xFF; }
label_946B:;
    /* $946B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_946C:;
    /* $946C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x146E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x946C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_946F:;
    /* $946F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_9471:;
    /* $9471: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D46 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9474:;
    /* $9474: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9477:;
    /* $9477: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9478:;
    /* $9478: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9471;
    }
label_947A:;
    /* $947A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x147C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x947A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_947D:;
    /* $947D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_947F:;
    /* $947F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D16 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9482:;
    /* $9482: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9485:;
    /* $9485: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9486:;
    /* $9486: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_947F;
    }
label_9488:;
    /* $9488: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_948A:;
    /* $948A: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_948D:;
    /* $948D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_948F:;
    /* $948F: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_9492:;
    /* $9492: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9494:;
    /* $9494: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_9496:;
    /* $9496: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1498); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9496, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9499:;
    /* $9499: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_949C:;
    /* $949C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_949E:;
    /* $949E: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_94A1:;
    /* $94A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14A3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_94A4:;
    /* $94A4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14A6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94A4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94A7:;
    /* $94A7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_94AA:;
    /* $94AA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x74; g_cpu.C=(g_cpu.A>=0x74)?1:0; FLAG_NZ(r&0xFF); }
label_94AC:;
    /* $94AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94B9;
label_94AE:;
    /* $94AE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_94AF:;
    /* $94AF: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94B1:;
    /* $94B1: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_94B4:;
    /* $94B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94B6:;
    /* $94B6: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_94B9:;
    /* $94B9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05A0); FLAG_NZ(g_cpu.A);
label_94BC:;
    /* $94BC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_94BE:;
    /* $94BE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94C7;
label_94C0:;
    /* $94C0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_94C2:;
    /* $94C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_94C4:;
    /* $94C4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94C4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94C7:;
    /* $94C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94CA:;
    /* $94CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_94CD:;
    /* $94CD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_94CF:;
    /* $94CF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_94A7;
    }
label_94D1:;
    /* $94D1: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3C; FLAG_NZ(g_cpu.X);
label_94D3:;
    /* $94D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14D5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_94D6:;
    /* $94D6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_94D9:;
    /* $94D9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_94DB:;
    /* $94DB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94E9;
label_94DD:;
    /* $94DD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_94DE:;
    /* $94DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_94E0:;
    /* $94E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_94E3:;
    /* $94E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94E6:;
    /* $94E6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_94D6;
label_94E9:;
    /* $94E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3C; FLAG_NZ(g_cpu.X);
label_94EB:;
    /* $94EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_94EE:;
    /* $94EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94F0:;
    /* $94F0: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_94F2:;
    /* $94F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_94F4:;
    /* $94F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94F7:;
    /* $94F7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_94F9:;
    /* $94F9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14FB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94FC:;
    /* $94FC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_94FE:;
    /* $94FE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1500); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94FE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9501:;
    /* $9501: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB4; FLAG_NZ(g_cpu.X);
label_9503:;
    /* $9503: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1505); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9506:;
    /* $9506: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9581, 12); return;
}

static void func_985D_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_98A9;
        case 2: goto label_98A2;
        case 3: goto label_987F;
        case 4: goto label_98AD;
        case 5: goto label_98DC;
    }
label_985D:;
    /* $985D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x185F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x985D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9860:;
    /* $9860: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9862:;
    /* $9862: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_9864:;
    /* $9864: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1866); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9864, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9867:;
    /* $9867: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1869); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_986A:;
    /* $986A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_986C:;
    /* $986C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x186E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x986C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_986F:;
    /* $986F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1871); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9936, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x986F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9872:;
    /* $9872: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9874:;
    /* $9874: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_9876:;
    /* $9876: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9878:;
    /* $9878: 85 */ maybe_trigger_vblank(3); nes_write(0xFA, g_cpu.A);
label_987A:;
    /* $987A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_987C:;
    /* $987C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x187E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x987C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_987F:;
    /* $987F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9881:;
    /* $9881: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9883:;
    /* $9883: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1885); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9883, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9886:;
    /* $9886: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1888); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9889:;
    /* $9889: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_988B:;
    /* $988B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_987F;
    }
label_988D:;
    /* $988D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_988F:;
    /* $988F: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_9891:;
    /* $9891: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x76; FLAG_NZ(g_cpu.A);
label_9893:;
    /* $9893: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_9895:;
    /* $9895: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_9897:;
    /* $9897: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_9899:;
    /* $9899: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_989B:;
    /* $989B: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_989D:;
    /* $989D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x189F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x989D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98A0:;
    /* $98A0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_98A2:;
    /* $98A2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C43 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98A5:;
    /* $98A5: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98A8:;
    /* $98A8: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_98A9:;
    /* $98A9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98A2;
    }
label_98AB:;
    /* $98AB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_98AD:;
    /* $98AD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C23 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_98B0:;
    /* $98B0: 99 */ maybe_trigger_vblank(5); nes_write((0x0630 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_98B3:; /* main_cannon */
    /* $98B3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_98B4:;
    /* $98B4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98AD;
    }
label_98B6:;
    /* $98B6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18B8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_98B9:;
    /* $98B9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_98BB:;
    /* $98BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_98BD:;
    /* $98BD: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_98BF:;
    /* $98BF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18C1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98BF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98C2:;
    /* $98C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_98C4:;
    /* $98C4: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_98C6:;
    /* $98C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_98C8:;
    /* $98C8: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_98CA:;
    /* $98CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_98CC:;
    /* $98CC: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_98CE:;
    /* $98CE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18D0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98CE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98D1:;
    /* $98D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18D3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA8DD, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98D4:;
    /* $98D4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18D6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_98D7:;
    /* $98D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18D9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98DA:;
    /* $98DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_98DC:;
    /* $98DC: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_98DD:;
    /* $98DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18DF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_98E0:;
    /* $98E0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_98E1:;
    /* $98E1: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_98E2:;
    /* $98E2: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_98E4:;
    /* $98E4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_98DC;
    }
label_98E6:;
    /* $98E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_98E8:;
    /* $98E8: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_98EA:;
    /* $98EA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_98EC:;
    /* $98EC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18EE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98EC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98EF:;
    /* $98EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18F1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98F2:;
    /* $98F2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18F4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93FE, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98F2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98F5:;
    /* $98F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_98F7:;
    /* $98F7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_98F9:;
    /* $98F9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9901;
label_98FB:;
    /* $98FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18FD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_98FE:;
    /* $98FE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_98F2;
label_9901:;
    /* $9901: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0B; FLAG_NZ(g_cpu.X);
label_9903:;
    /* $9903: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA2 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9905:;
    /* $9905: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_990B;
label_9907:;
    /* $9907: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9909:;
    /* $9909: 95 */ maybe_trigger_vblank(4); nes_write((0xA2 + g_cpu.X) & 0xFF, g_cpu.A);
label_990B:;
    /* $990B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_990C:;
    /* $990C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9903;
    }
label_990E:;
    /* $990E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC7; g_cpu.C=(g_cpu.A>=0xC7)?1:0; FLAG_NZ(r&0xFF); }
label_9913:;
    /* $9913: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_991E;
label_9915:;
    /* $9915: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9917:;
    /* $9917: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9919:;
    /* $9919: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_992C;
label_991B:;
    /* $991B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x191D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9212, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x991B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_991E:;
    /* $991E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9920:;
    /* $9920: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_9922:;
    /* $9922: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_9924:;
    /* $9924: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_9926:;
    /* $9926: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_992B;
label_9928:;
    /* $9928: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9ABC, 12); return;
label_992B:;
    /* $992B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_992C:;
    /* $992C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_992E:;
    /* $992E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9930:;
    /* $9930: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1932); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9930, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9933:;
    /* $9933: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA879, 12); return;
}

void func_985D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_985D_b12");
#endif
    func_985D_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_98A9_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A9_b12");
#endif
    func_985D_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_98A2_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98A2_b12");
#endif
    func_985D_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_987F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_987F_b12");
#endif
    func_985D_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_98AD_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98AD_b12");
#endif
    func_985D_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_98DC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98DC_b12");
#endif
    func_985D_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_9581_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_958A;
        case 2: goto label_95AF;
        case 3: goto label_95E1;
        case 4: goto label_9604;
        case 5: goto label_960F;
        case 6: goto label_964D;
        case 7: goto label_9663;
    }
label_9581:;
    /* $9581: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9583:;
    /* $9583: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_9585:;
    /* $9585: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_958A;
label_9587:;
    /* $9587: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x968C, 12); return;
label_958A:;
    /* $958A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x158C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x958A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_958D:;
    /* $958D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_958F:;
    /* $958F: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_9591:;
    /* $9591: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1593); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9591, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9594:;
    /* $9594: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1596); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9597:;
    /* $9597: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1599); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9936, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9597, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_959A:;
    /* $959A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_959C:;
    /* $959C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x159E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x959C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_959F:;
    /* $959F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_95A1:;
    /* $95A1: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_95A3:;
    /* $95A3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15A5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95A3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95A6:;
    /* $95A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_95A8:;
    /* $95A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15AA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95A8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95AB:;
    /* $95AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_95AD:;
    /* $95AD: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_95AF:;
    /* $95AF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_95B1:;
    /* $95B1: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_95B3:;
    /* $95B3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15B5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95B3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95B6:;
    /* $95B6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15B8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_95B9:;
    /* $95B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_95BB:;
    /* $95BB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_95AF;
    }
label_95BD:;
    /* $95BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_95BF:;
    /* $95BF: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_95C1:;
    /* $95C1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15C3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x995C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95C1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95C4:;
    /* $95C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_95C6:;
    /* $95C6: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_95C8:;
    /* $95C8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_95CA:;
    /* $95CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15CC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95CD:;
    /* $95CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15CF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_95D0:;
    /* $95D0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_95D2:;
    /* $95D2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15D4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95D2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95D5:;
    /* $95D5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15D7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_95D8:;
    /* $95D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_95DA:;
    /* $95DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95DD:;
    /* $95DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_95DF:;
    /* $95DF: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_95E1:;
    /* $95E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_95E3:;
    /* $95E3: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_95E5:;
    /* $95E5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15E7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95E5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_95E8:;
    /* $95E8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x15EA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_95EB:;
    /* $95EB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_95ED:;
    /* $95ED: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_95E1;
    }
label_95EF:;
    /* $95EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_95F1:;
    /* $95F1: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_95F3:;
    /* $95F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7E; FLAG_NZ(g_cpu.A);
label_95F5:;
    /* $95F5: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_95F7:;
    /* $95F7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_95F9:;
    /* $95F9: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_95FB:;
    /* $95FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_95FD:;
    /* $95FD: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_95FF:;
    /* $95FF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1601); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x95FF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9602:;
    /* $9602: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_9604:;
    /* $9604: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C33 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9607:;
    /* $9607: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_960A:;
    /* $960A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_960B:;
    /* $960B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9604;
    }
label_960D:;
    /* $960D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_960F:;
    /* $960F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C23 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9612:;
    /* $9612: 99 */ maybe_trigger_vblank(5); nes_write((0x0630 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9615:;
    /* $9615: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9616:;
    /* $9616: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_960F;
    }
label_9618:;
    /* $9618: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x161A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_961B:;
    /* $961B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x161D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x99FA, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x961B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_961E:;
    /* $961E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9620:;
    /* $9620: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_9622:;
    /* $9622: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1624); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9625:;
    /* $9625: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_9627:;
    /* $9627: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_9629:;
    /* $9629: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_962B:;
    /* $962B: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_962D:;
    /* $962D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x162F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9630:;
    /* $9630: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1632); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9630, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9633:;
    /* $9633: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_9635:;
    /* $9635: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_964D;
label_9637:;
    /* $9637: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_9639:;
    /* $9639: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_963B:;
    /* $963B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_963D:;
    /* $963D: 84 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.Y);
label_963F:;
    /* $963F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x19; FLAG_NZ(g_cpu.X);
label_9641:;
    /* $9641: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1643); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x970B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9641, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9644:;
    /* $9644: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1646); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x97EC, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9644, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9647:;
    /* $9647: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1649); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9A87, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9647, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_964A:;
    /* $964A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9681, 12); return;
label_964D:;
    /* $964D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xF0; FLAG_NZ(g_cpu.X);
label_964F:;
    /* $964F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1651); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9652:;
    /* $9652: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_9654:;
    /* $9654: 85 */ maybe_trigger_vblank(3); nes_write(0x61, g_cpu.A);
label_9656:;
    /* $9656: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_9658:;
    /* $9658: 85 */ maybe_trigger_vblank(3); nes_write(0x60, g_cpu.A);
label_965A:;
    /* $965A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x74; FLAG_NZ(g_cpu.A);
label_965C:;
    /* $965C: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_965E:;
    /* $965E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1660); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x965E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9661:;
    /* $9661: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_9663:;
    /* $9663: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D36 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9666:;
    /* $9666: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9669:;
    /* $9669: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_966C:;
    /* $966C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_966D:;
    /* $966D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9663;
    }
label_966F:;
    /* $966F: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9671:;
    /* $9671: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9673:;
    /* $9673: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9675:;
    /* $9675: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_9677:;
    /* $9677: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x19; FLAG_NZ(g_cpu.X);
label_9679:;
    /* $9679: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x167B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x970B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9679, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_967C:;
    /* $967C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x19; FLAG_NZ(g_cpu.X);
label_967E:;
    /* $967E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1680); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9762, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x967E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9681:;
    /* $9681: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9683:;
    /* $9683: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_9685:;
    /* $9685: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9687:;
    /* $9687: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9689:;
    /* $9689: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9258, 12); return;
}

void func_9581_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9581_b12");
#endif
    func_9581_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_958A_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_958A_b12");
#endif
    func_9581_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95AF_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95AF_b12");
#endif
    func_9581_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_95E1_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_95E1_b12");
#endif
    func_9581_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9604_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9604_b12");
#endif
    func_9581_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_960F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_960F_b12");
#endif
    func_9581_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_964D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_964D_b12");
#endif
    func_9581_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9663_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9663_b12");
#endif
    func_9581_b12_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9936_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9936_b12");
#endif
label_9936:;
    /* $9936: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9938:;
    /* $9938: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_993B:;
    /* $993B: 85 */ maybe_trigger_vblank(3); nes_write(0x59, g_cpu.A);
label_993D:;
    /* $993D: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_993F:;
    /* $993F: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_9942:;
    /* $9942: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_9945:;
    /* $9945: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_9947:;
    /* $9947: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_9949:;
    /* $9949: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_994B:;
    /* $994B: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_994D:;
    /* $994D: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_994F:;
    /* $994F: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_9951:;
    /* $9951: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_9953:;
    /* $9953: 85 */ maybe_trigger_vblank(3); nes_write(0xA0, g_cpu.A);
label_9955:;
    /* $9955: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_9957:;
    /* $9957: 85 */ maybe_trigger_vblank(3); nes_write(0x9F, g_cpu.A);
label_9959:;
    /* $9959: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_995B:;
    /* $995B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_939E_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_93D2;
        case 2: goto label_93DE;
    }
label_939E:;
    /* $939E: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_93A0:;
    /* $93A0: 86 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.X);
label_93A2:;
    /* $93A2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF5); FLAG_NZ(g_cpu.A);
label_93A4:;
    /* $93A4: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_93A5:;
    /* $93A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_93A7:;
    /* $93A7: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_93A9:;
    /* $93A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93AC:;
    /* $93AC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x05); FLAG_NZ(g_cpu.X);
label_93AE:;
    /* $93AE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA56D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93B1:;
    /* $93B1: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_93B3:;
    /* $93B3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93B6:;
    /* $93B6: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_93B8:;
    /* $93B8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_93BA:;
    /* $93BA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93BC:;
    /* $93BC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_93BE:;
    /* $93BE: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93C1:;
    /* $93C1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_93DE;
label_93C3:;
    /* $93C3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93C4:;
    /* $93C4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93C6:;
    /* $93C6: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93C9:;
    /* $93C9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93CA:;
    /* $93CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93CC:;
    /* $93CC: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93CF:;
    /* $93CF: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_93D1:;
    /* $93D1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93D2:;
    /* $93D2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93D4:;
    /* $93D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93D7:;
    /* $93D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93D8:;
    /* $93D8: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_93DA:;
    /* $93DA: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_93D2;
    }
label_93DC:;
    /* $93DC: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_93BA;
    }
label_93DE:;
    /* $93DE: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_93E0:;
    /* $93E0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_93E1:;
    /* $93E1: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_93E3:;
    /* $93E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93E6:;
    /* $93E6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_93E8:;
    /* $93E8: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_939E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_939E_b12");
#endif
    func_939E_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_93D2_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93D2_b12");
#endif
    func_939E_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_93DE_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93DE_b12");
#endif
    func_939E_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94D6_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94D6_b12");
#endif
label_94D6:;
    /* $94D6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_94D9:;
    /* $94D9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_94DB:;
    /* $94DB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94E9;
label_94DD:;
    /* $94DD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_94DE:;
    /* $94DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_94E0:;
    /* $94E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_94E3:;
    /* $94E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94E6:;
    /* $94E6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_94D6;
label_94E9:;
    /* $94E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3C; FLAG_NZ(g_cpu.X);
label_94EB:;
    /* $94EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_94EE:;
    /* $94EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94F0:;
    /* $94F0: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_94F2:;
    /* $94F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_94F4:;
    /* $94F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94F7:;
    /* $94F7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_94F9:;
    /* $94F9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14FB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94FC:;
    /* $94FC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_94FE:;
    /* $94FE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1500); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94FE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9501:;
    /* $9501: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB4; FLAG_NZ(g_cpu.X);
label_9503:;
    /* $9503: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1505); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9506:;
    /* $9506: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9581, 12); return;
label_9509:; return;
label_950B:; return;
label_950D:; return;
label_950F:; return;
label_9511:; return;
label_9513:; return;
label_9515:; return;
label_9517:; return;
label_9518:; return;
label_9519:; return;
label_951A:; return;
label_951C:; return;
label_951D:; return;
label_9520:; return;
label_9523:; return;
label_9526:; return;
label_9529:; return;
label_952A:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9532:; return;
label_9535:; return;
label_9538:; return;
label_953B:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9545:; return;
label_9547:; return;
label_9549:; return;
label_954A:; return;
label_954C:; return;
label_954E:; return;
label_9550:; return;
label_9552:; return;
label_9554:; return;
label_9557:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955E:; return;
label_9561:; return;
label_9562:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956C:; return;
label_956E:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_9580:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_958A:; return;
label_958D:; return;
label_958F:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959C:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A8:; return;
label_95AB:; return;
label_95AD:; return;
label_95AF:; return;
label_95B1:; return;
label_95B3:; return;
label_95B6:; return;
label_95B9:; return;
label_95BB:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C4:; return;
label_95C6:; return;
label_95C8:; return;
label_95CA:; return;
label_95CD:; return;
label_95D0:; return;
label_95D2:; return;
label_95D5:; return;
label_95D8:; return;
label_95DA:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E3:; return;
label_95E5:; return;
label_95E8:; return;
label_95EB:; return;
label_95ED:; return;
label_95EF:; return;
label_95F1:; return;
label_95F3:; return;
label_95F5:; return;
label_95F7:; return;
label_95F9:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9602:; return;
label_9604:; return;
label_9607:; return;
label_960A:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_961B:; return;
label_961E:; return;
label_9620:; return;
label_9622:; return;
label_9625:; return;
label_9627:; return;
label_9629:; return;
label_962B:; return;
label_962D:; return;
label_9630:; return;
label_9633:; return;
label_9635:; return;
label_9637:; return;
label_9639:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9644:; return;
label_9647:; return;
label_964A:; return;
label_964D:; return;
label_964F:; return;
label_9652:; return;
label_9654:; return;
label_9656:; return;
label_9658:; return;
label_965A:; return;
label_965C:; return;
label_965E:; return;
label_9661:; return;
label_9663:; return;
label_9666:; return;
label_9669:; return;
label_966C:; return;
label_966D:; return;
label_966F:; return;
label_9671:; return;
label_9673:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967C:; return;
label_967E:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968C:; return;
label_968F:; return;
label_9691:; return;
label_9693:; return;
label_9696:; return;
label_9699:; return;
label_969C:; return;
label_969E:; return;
label_96A0:; return;
label_96A3:; return;
label_96A5:; return;
label_96A7:; return;
label_96A9:; return;
label_96AC:; return;
label_96AE:; return;
label_96B0:; return;
label_96B3:; return;
label_96B6:; return;
label_96B8:; return;
label_96BA:; return;
label_96BC:; return;
label_96BE:; return;
label_96C0:; return;
label_96C2:; return;
label_96C4:; return;
label_96C6:; return;
label_96C8:; return;
label_96CA:; return;
label_96CD:; return;
label_96CF:; return;
label_96D2:; return;
label_96D5:; return;
label_96D6:; return;
label_96D8:; return;
label_96DA:; return;
label_96DD:; return;
label_96E0:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F6:; return;
label_96F9:; return;
label_96FC:; return;
label_96FE:; return;
label_9700:; return;
label_9702:; return;
label_9705:; return;
label_9708:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9712:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971E:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9726:; return;
label_9729:; return;
label_972C:; return;
label_972E:; return;
label_9731:; return;
label_9732:; return;
label_9733:; return;
label_9736:; return;
label_9739:; return;
label_973B:; return;
label_973C:; return;
label_973F:; return;
label_9742:; return;
label_9743:; return;
label_9745:; return;
label_9747:; return;
label_9749:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9752:; return;
label_9755:; return;
label_9756:; return;
label_9757:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9761:; return;
label_9762:; return;
label_9764:; return;
label_9766:; return;
label_9769:; return;
label_976C:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9778:; return;
label_977B:; return;
label_977E:; return;
label_977F:; return;
label_9781:; return;
label_9783:; return;
label_9786:; return;
label_9788:; return;
label_978B:; return;
label_978E:; return;
label_9791:; return;
label_9794:; return;
label_9795:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A2:; return;
label_97A5:; return;
label_97A7:; return;
label_97AA:; return;
label_97AC:; return;
label_97AF:; return;
label_97B2:; return;
label_97B5:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C7:; return;
label_97C9:; return;
label_97CC:; return;
label_97CE:; return;
label_97D1:; return;
label_97D3:; return;
label_97D6:; return;
label_97D8:; return;
label_97D9:; return;
label_97DA:; return;
label_97DC:; return;
label_97DF:; return;
label_97E0:; return;
label_97E1:; return;
label_97E2:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EB:; return;
label_97EC:; return;
label_97EF:; return;
label_97F1:; return;
label_97F4:; return;
label_97F7:; return;
label_97FA:; return;
label_97FD:; return;
label_97FE:; return;
label_9801:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980B:; return;
label_980E:; return;
label_9810:; return;
label_9813:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_982A:; return;
label_982D:; return;
label_9830:; return;
label_9833:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9844:; return;
label_9845:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984F:; return;
label_9852:; return;
label_9854:; return;
label_9857:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_9860:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986C:; return;
label_986F:; return;
label_9872:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987C:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9886:; return;
label_9889:; return;
label_988B:; return;
label_988D:; return;
label_988F:; return;
label_9891:; return;
label_9893:; return;
label_9895:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989D:; return;
label_98A0:; return;
label_98A2:; return;
label_98A5:; return;
label_98A8:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98B0:; return;
label_98B3:; return;
label_98B4:; return;
label_98B6:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C4:; return;
label_98C6:; return;
label_98C8:; return;
label_98CA:; return;
label_98CC:; return;
label_98CE:; return;
label_98D1:; return;
label_98D4:; return;
label_98D7:; return;
label_98DA:; return;
label_98DC:; return;
label_98DD:; return;
label_98E0:; return;
label_98E1:; return;
label_98E2:; return;
label_98E4:; return;
label_98E6:; return;
label_98E8:; return;
label_98EA:; return;
label_98EC:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F7:; return;
label_98F9:; return;
label_98FB:; return;
label_98FE:; return;
label_9901:; return;
label_9903:; return;
label_9905:; return;
label_9907:; return;
label_9909:; return;
label_990B:; return;
label_990C:; return;
label_990E:; return;
label_9911:; return;
label_9913:; return;
label_9915:; return;
label_9917:; return;
label_9919:; return;
label_991B:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992B:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9933:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9966:; return;
label_9968:; return;
label_996A:; return;
label_996D:; return;
label_996F:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9982:; return;
label_9984:; return;
label_9987:; return;
label_9989:; return;
label_998C:; return;
label_998E:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9999:; return;
label_999C:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B7:; return;
label_99BA:; return;
label_99BB:; return;
label_99BD:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E2:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99EF:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0F:; return;
label_9A12:; return;
label_9A13:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A22:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2D:; return;
label_9A30:; return;
label_9A33:; return;
label_9A36:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A42:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A54:; return;
label_9A56:; return;
label_9A58:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7D:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8E:; return;
label_9A91:; return;
label_9A94:; return;
label_9A97:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9AC1:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9ACB:; return;
label_9ACE:; return;
label_9AD1:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD8:; return;
label_9ADA:; return;
label_9ADC:; return;
label_9ADE:; return;
label_9AE0:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B16:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B27:; return;
label_9B29:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B43:; return;
label_9B45:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B53:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5B:; return;
label_9B5D:; return;
label_9B60:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B74:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B83:; return;
label_9B86:; return;
label_9B89:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9BA1:; return;
label_9BA4:; return;
label_9BA6:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAE:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCC:; return;
label_9BCE:; return;
label_9BD0:; return;
label_9BD2:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDE:; return;
label_9BDF:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF8:; return;
label_9BFA:; return;
label_9BFD:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C03:; return;
label_9C06:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C13:; return;
label_9C16:; return;
label_9C18:; return;
label_9C1A:; return;
label_9C1C:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3F:; return;
label_9C42:; return;
label_9C44:; return;
label_9C47:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C52:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5E:; return;
label_9C60:; return;
label_9C63:; return;
label_9C65:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C86:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C90:; return;
label_9C92:; return;
label_9C94:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAE:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB4:; return;
label_9CB6:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CEA:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF6:; return;
label_9CF7:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0A:; return;
label_9D0B:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D11:; return;
label_9D13:; return;
label_9D14:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D20:; return;
label_9D23:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D33:; return;
label_9D35:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D42:; return;
label_9D45:; return;
label_9D47:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D50:; return;
label_9D53:; return;
label_9D56:; return;
label_9D59:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D66:; return;
label_9D68:; return;
label_9D6A:; return;
label_9D6C:; return;
label_9D6E:; return;
label_9D70:; return;
label_9D72:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7E:; return;
label_9D80:; return;
label_9D82:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D90:; return;
label_9D92:; return;
label_9D94:; return;
label_9D95:; return;
label_9D97:; return;
label_9D9A:; return;
label_9D9C:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA2:; return;
label_9DA4:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB1:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DBA:; return;
label_9DBD:; return;
label_9DC0:; return;
label_9DC3:; return;
label_9DC6:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEB:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF5:; return;
label_9DF7:; return;
label_9DF9:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9E00:; return;
label_9E01:; return;
label_9E04:; return;
label_9E05:; return;
label_9E07:; return;
label_9E09:; return;
label_9E0C:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E11:; return;
label_9E13:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1A:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E22:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2C:; return;
label_9E2E:; return;
label_9E31:; return;
label_9E33:; return;
label_9E36:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3E:; return;
label_9E41:; return;
label_9E43:; return;
label_9E46:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E51:; return;
label_9E52:; return;
label_9E53:; return;
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
label_9E61:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E66:; return;
label_9E67:; return;
label_9E68:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E70:; return;
label_9E71:; return;
label_9E72:; return;
label_9E73:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E77:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7D:; return;
label_9E7E:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E81:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E86:; return;
label_9E87:; return;
label_9E88:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E92:; return;
label_9E93:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA6:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB3:; return;
label_9EB4:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EBF:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECC:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED8:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE2:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEE:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF4:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFB:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F02:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F13:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F19:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1D:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F23:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F28:; return;
label_9F29:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F31:; return;
label_9F32:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F42:; return;
label_9F43:; return;
label_9F44:; return;
label_9F45:; return;
label_9F47:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4B:; return;
label_9F4C:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6D:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
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
label_9F86:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8B:; return;
label_9F8D:; return;
label_9F8E:; return;
label_9F8F:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
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
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
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
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFD:; return;
label_9FFE:; return;
label_A000:; return;
label_A003:; return;
label_A005:; return;
label_A008:; return;
label_A00B:; return;
label_A00D:; return;
label_A00F:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01C:; return;
label_A01F:; return;
label_A021:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02B:; return;
label_A02D:; return;
label_A030:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A03A:; return;
label_A03B:; return;
label_A03D:; return;
label_A03F:; return;
label_A042:; return;
label_A045:; return;
label_A047:; return;
label_A049:; return;
label_A04C:; return;
label_A04E:; return;
label_A050:; return;
label_A053:; return;
label_A054:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A069:; return;
label_A06A:; return;
label_A06C:; return;
label_A06F:; return;
label_A070:; return;
label_A073:; return;
label_A074:; return;
label_A077:; return;
label_A079:; return;
label_A07B:; return;
label_A07D:; return;
label_A080:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A08A:; return;
label_A08C:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A096:; return;
label_A098:; return;
label_A099:; return;
label_A09C:; return;
label_A09E:; return;
label_A0A1:; return;
label_A0A4:; return;
label_A0A6:; return;
label_A0A8:; return;
label_A0AA:; return;
label_A0AB:; return;
label_A0AE:; return;
label_A0B0:; return;
label_A0B3:; return;
label_A0B6:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BC:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C2:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CA:; return;
label_A0CC:; return;
label_A0CF:; return;
label_A0D0:; return;
label_A0D3:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0DB:; return;
label_A0DC:; return;
label_A0DE:; return;
label_A0E0:; return;
label_A0E2:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E8:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0F0:; return;
label_A0F2:; return;
label_A0F4:; return;
label_A0F6:; return;
label_A0F9:; return;
label_A0FB:; return;
label_A0FE:; return;
label_A101:; return;
label_A104:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A111:; return;
label_A113:; return;
label_A116:; return;
label_A119:; return;
label_A11A:; return;
label_A11C:; return;
label_A11F:; return;
label_A120:; return;
label_A122:; return;
label_A124:; return;
label_A126:; return;
label_A129:; return;
label_A12B:; return;
label_A12C:; return;
label_A12D:; return;
label_A130:; return;
label_A132:; return;
label_A135:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13F:; return;
label_A140:; return;
label_A142:; return;
label_A143:; return;
label_A146:; return;
label_A148:; return;
label_A14A:; return;
label_A14D:; return;
label_A150:; return;
label_A152:; return;
label_A154:; return;
label_A157:; return;
label_A15A:; return;
label_A15C:; return;
label_A15E:; return;
label_A161:; return;
label_A164:; return;
label_A166:; return;
label_A168:; return;
label_A16B:; return;
label_A16E:; return;
label_A170:; return;
label_A172:; return;
label_A175:; return;
label_A176:; return;
label_A178:; return;
label_A17A:; return;
label_A17C:; return;
label_A17E:; return;
label_A181:; return;
label_A183:; return;
label_A186:; return;
label_A188:; return;
label_A18B:; return;
label_A18C:; return;
label_A18E:; return;
label_A190:; return;
label_A192:; return;
label_A194:; return;
label_A197:; return;
label_A198:; return;
label_A19A:; return;
label_A19D:; return;
label_A1A0:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A8:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AB:; return;
label_A1AC:; return;
label_A1AF:; return;
label_A1B0:; return;
label_A1B1:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B7:; return;
label_A1B9:; return;
label_A1BB:; return;
label_A1BE:; return;
label_A1C1:; return;
label_A1C4:; return;
label_A1C5:; return;
label_A1C7:; return;
label_A1C9:; return;
label_A1CC:; return;
label_A1CF:; return;
label_A1D2:; return;
label_A1D4:; return;
label_A1D6:; return;
label_A1D8:; return;
label_A1DB:; return;
label_A1DD:; return;
label_A1DF:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E8:; return;
label_A1EA:; return;
label_A1EC:; return;
label_A1EE:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F8:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A202:; return;
label_A205:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20D:; return;
label_A20E:; return;
label_A210:; return;
label_A211:; return;
label_A214:; return;
label_A217:; return;
label_A218:; return;
label_A21A:; return;
label_A21D:; return;
label_A21E:; return;
label_A221:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22D:; return;
label_A22E:; return;
label_A230:; return;
label_A233:; return;
label_A234:; return;
label_A237:; return;
label_A239:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A249:; return;
label_A24A:; return;
label_A24C:; return;
label_A24E:; return;
label_A250:; return;
label_A252:; return;
label_A254:; return;
label_A257:; return;
label_A258:; return;
label_A25A:; return;
label_A25C:; return;
label_A25E:; return;
label_A260:; return;
label_A262:; return;
label_A264:; return;
label_A266:; return;
label_A269:; return;
label_A26B:; return;
label_A26E:; return;
label_A271:; return;
label_A272:; return;
label_A274:; return;
label_A276:; return;
label_A278:; return;
label_A27B:; return;
label_A27D:; return;
label_A280:; return;
label_A282:; return;
label_A284:; return;
label_A286:; return;
label_A288:; return;
label_A28A:; return;
label_A28D:; return;
label_A28F:; return;
label_A290:; return;
label_A293:; return;
label_A294:; return;
label_A297:; return;
label_A298:; return;
label_A29A:; return;
label_A29C:; return;
label_A29E:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A4:; return;
label_A2A7:; return;
label_A2A9:; return;
label_A2AA:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B5:; return;
label_A2B7:; return;
label_A2B9:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C1:; return;
label_A2C3:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2CA:; return;
label_A2CC:; return;
label_A2CF:; return;
label_A2D2:; return;
label_A2D5:; return;
label_A2D7:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DD:; return;
label_A2DE:; return;
label_A2DF:; return;
label_A2E0:; return;
label_A2E1:; return;
label_A2E2:; return;
label_A2E3:; return;
label_A2E5:; return;
label_A2E6:; return;
label_A2E7:; return;
label_A2E8:; return;
label_A2E9:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F3:; return;
label_A2F5:; return;
label_A2F6:; return;
label_A2F7:; return;
label_A2F8:; return;
label_A2F9:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A301:; return;
label_A304:; return;
label_A305:; return;
label_A306:; return;
label_A307:; return;
label_A309:; return;
label_A30A:; return;
label_A30B:; return;
label_A30D:; return;
label_A30E:; return;
label_A30F:; return;
label_A310:; return;
label_A311:; return;
label_A312:; return;
label_A313:; return;
label_A315:; return;
label_A316:; return;
label_A318:; return;
label_A31A:; return;
label_A31C:; return;
label_A31E:; return;
label_A320:; return;
label_A321:; return;
label_A323:; return;
label_A324:; return;
label_A325:; return;
label_A326:; return;
label_A327:; return;
label_A328:; return;
label_A32B:; return;
label_A32D:; return;
label_A330:; return;
label_A333:; return;
label_A336:; return;
label_A337:; return;
label_A338:; return;
label_A33A:; return;
label_A33C:; return;
label_A33F:; return;
label_A342:; return;
label_A343:; return;
label_A346:; return;
label_A348:; return;
label_A349:; return;
label_A34B:; return;
label_A34D:; return;
label_A34F:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35B:; return;
label_A35D:; return;
label_A35E:; return;
label_A35F:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A363:; return;
label_A365:; return;
label_A366:; return;
label_A367:; return;
label_A368:; return;
label_A369:; return;
label_A36A:; return;
label_A36B:; return;
label_A36D:; return;
label_A36E:; return;
label_A370:; return;
label_A372:; return;
label_A373:; return;
label_A375:; return;
label_A378:; return;
label_A37A:; return;
label_A37C:; return;
label_A37E:; return;
label_A380:; return;
label_A381:; return;
label_A382:; return;
label_A383:; return;
label_A384:; return;
label_A385:; return;
label_A386:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38B:; return;
label_A38C:; return;
label_A38D:; return;
label_A38E:; return;
label_A38F:; return;
label_A391:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A396:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A3A0:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A4:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A7:; return;
label_A3A8:; return;
label_A3A9:; return;
label_A3AB:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3AE:; return;
label_A3AF:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B3:; return;
label_A3B6:; return;
label_A3B8:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3BF:; return;
label_A3C1:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C6:; return;
label_A3C8:; return;
label_A3C9:; return;
label_A3CA:; return;
label_A3CB:; return;
label_A3CC:; return;
label_A3CD:; return;
label_A3CE:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D2:; return;
label_A3D3:; return;
label_A3D4:; return;
label_A3D5:; return;
label_A3D6:; return;
label_A3D7:; return;
label_A3D9:; return;
label_A3DB:; return;
label_A3DE:; return;
label_A3E0:; return;
label_A3E2:; return;
label_A3E4:; return;
label_A3E5:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F6:; return;
label_A3F8:; return;
label_A3FB:; return;
label_A3FC:; return;
label_A3FF:; return;
label_A400:; return;
label_A402:; return;
label_A404:; return;
label_A406:; return;
label_A408:; return;
label_A40B:; return;
label_A40C:; return;
label_A40F:; return;
label_A410:; return;
label_A413:; return;
label_A414:; return;
label_A417:; return;
label_A419:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A423:; return;
label_A424:; return;
label_A427:; return;
label_A429:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A430:; return;
label_A433:; return;
label_A434:; return;
label_A437:; return;
label_A439:; return;
label_A43A:; return;
label_A43B:; return;
label_A43C:; return;
label_A43D:; return;
label_A43E:; return;
label_A43F:; return;
label_A440:; return;
label_A441:; return;
label_A442:; return;
label_A443:; return;
label_A445:; return;
label_A446:; return;
label_A447:; return;
label_A449:; return;
label_A44A:; return;
label_A44C:; return;
label_A44D:; return;
label_A44F:; return;
label_A450:; return;
label_A451:; return;
label_A452:; return;
label_A453:; return;
label_A454:; return;
label_A456:; return;
label_A458:; return;
label_A459:; return;
label_A45A:; return;
label_A45B:; return;
label_A45D:; return;
label_A45E:; return;
label_A45F:; return;
label_A460:; return;
}

static void func_954A_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_955E;
    }
label_954A:;
    /* $954A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_954C:;
    /* $954C: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_954E:;
    /* $954E: 84 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.Y);
label_9550:;
    /* $9550: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x11); FLAG_NZ(g_cpu.Y);
label_9552:;
    /* $9552: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9554:;
    /* $9554: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9557:;
    /* $9557: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9558:;
    /* $9558: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_955A:;
    /* $955A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_955E;
label_955C:;
    /* $955C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_955E:;
    /* $955E: 99 */ maybe_trigger_vblank(5); nes_write((0x0604 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9561:;
    /* $9561: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9562:;
    /* $9562: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9563:;
    /* $9563: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9554;
    }
label_9565:;
    /* $9565: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9567:;
    /* $9567: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9569:;
    /* $9569: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x156B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_956C:;
    /* $956C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_956E:;
    /* $956E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_956F:;
    /* $956F: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9571:;
    /* $9571: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9573:;
    /* $9573: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9550;
    }
label_9575:;
    /* $9575: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_9577:;
    /* $9577: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9579:;
    /* $9579: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1509), 12); return; }
label_957B:;
    /* $957B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1E; FLAG_NZ(g_cpu.X);
label_957D:;
    /* $957D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x157F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9580:;
    /* $9580: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_954A_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_954A_b12");
#endif
    func_954A_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_955E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_955E_b12");
#endif
    func_954A_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8DD_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8DD_b12");
#endif
label_A8DD:;
    /* $A8DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x08DB), 12); return; }
label_A8DF:;
    /* $A8DF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8E0:;
    /* $A8E0: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEEF3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E3:;
    /* $A8E3: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x03EE + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E6:;
    /* $A8E6: EE */ maybe_trigger_vblank(6); { uint16_t a=0xF60B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E9:;
    /* $A8E9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF6) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8EB:;
    /* $A8EB: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x03F6 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8EE:;
    /* $A8EE: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F0:;
    /* $A8F0: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F3:;
    /* $A8F3: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x03FE + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8F6:;
    /* $A8F6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x060B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F9:;
    /* $A8F9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8FB:;
    /* $A8FB: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x0306 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8FE:;
    /* $A8FE: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A900:; /* shadow_damage_table */
    /* $A900: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0EEB; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A903:;
    /* $A903: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A905:;
    /* $A905: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x030E + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A908:;
    /* $A908: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xEE0B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A90B:;
    /* $A90B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_A90D:;
    /* $A90D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5EE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A910:;
    /* $A910: EE */ maybe_trigger_vblank(6); { uint16_t a=0xF6ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A913:;
    /* $A913: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF6); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5F6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A918:;
    /* $A918: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xED + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91A:;
    /* $A91A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91D:;
    /* $A91D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A920:;
    /* $A920: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x06ED + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A923:;
    /* $A923: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_A925:;
    /* $A925: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF506 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A928:;
    /* $A928: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92A:;
    /* $A92A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0E0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92D:;
    /* $A92D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_A92F:;
    /* $A92F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF50E + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A932:;
    /* $A932: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xF6ED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A935:;
    /* $A935: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A92D;
    }
label_A937:;
    /* $A937: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A938:;
    /* $A938: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93A:;
    /* $A93A: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93C:;
    /* $A93C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93F:;
    /* $A93F: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A940:;
    /* $A940: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A943:;
    /* $A943: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A944:;
    /* $A944: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A946:;
    /* $A946: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xF8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A948:;
    /* $A948: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94A:;
    /* $A94A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94C:;
    /* $A94C: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94E:;
    /* $A94E: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A950:;
    /* $A950: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A952:;
    /* $A952: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A954:;
    /* $A954: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A957:;
    /* $A957: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA957); return;
}

void func_88DD_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88DD_b12");
#endif
label_88DD:;
    /* $88DD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_93E9_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93E9_b12");
#endif
label_93E9:;
    /* $93E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB7; FLAG_NZ(g_cpu.A);
label_93EB:;
    /* $93EB: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_93EE:;
    /* $93EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xED; FLAG_NZ(g_cpu.A);
label_93F0:;
    /* $93F0: 8D */ maybe_trigger_vblank(4); nes_write(0x0201, g_cpu.A);
label_93F3:;
    /* $93F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_93F5:;
    /* $93F5: 8D */ maybe_trigger_vblank(4); nes_write(0x0202, g_cpu.A);
label_93F8:;
    /* $93F8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_93FA:;
    /* $93FA: 8D */ maybe_trigger_vblank(4); nes_write(0x0203, g_cpu.A);
label_93FD:;
    /* $93FD: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_93FE_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_940C;
        case 2: goto label_940F;
    }
label_93FE:;
    /* $93FE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9400:;
    /* $9400: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_9402:;
    /* $9402: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_940F;
label_9404:;
    /* $9404: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xB7; FLAG_NZ(g_cpu.Y);
label_9406:;
    /* $9406: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_9408:;
    /* $9408: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_940C;
label_940A:;
    /* $940A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xC7; FLAG_NZ(g_cpu.Y);
label_940C:;
    /* $940C: 8C */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.Y);
label_940F:;
    /* $940F: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_93FE_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93FE_b12");
#endif
    func_93FE_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_940C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_940C_b12");
#endif
    func_93FE_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_940F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_940F_b12");
#endif
    func_93FE_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_98F2_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9905;
        case 2: goto label_9901;
        case 3: goto label_990B;
        case 4: goto label_991E;
        case 5: goto label_992B;
        case 6: goto label_992C;
    }
label_98F2:;
    /* $98F2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18F4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93FE, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x98F2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_98F5:;
    /* $98F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_98F7:;
    /* $98F7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_98F9:;
    /* $98F9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9901;
label_98FB:;
    /* $98FB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18FD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_98FE:;
    /* $98FE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_98F2;
label_9901:;
    /* $9901: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0B; FLAG_NZ(g_cpu.X);
label_9903:;
    /* $9903: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA2 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9905:;
    /* $9905: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_990B;
label_9907:;
    /* $9907: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9909:;
    /* $9909: 95 */ maybe_trigger_vblank(4); nes_write((0xA2 + g_cpu.X) & 0xFF, g_cpu.A);
label_990B:;
    /* $990B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_990C:;
    /* $990C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9903;
    }
label_990E:;
    /* $990E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC7; g_cpu.C=(g_cpu.A>=0xC7)?1:0; FLAG_NZ(r&0xFF); }
label_9913:;
    /* $9913: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_991E;
label_9915:;
    /* $9915: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9917:;
    /* $9917: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9919:;
    /* $9919: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_992C;
label_991B:;
    /* $991B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x191D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9212, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x991B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_991E:;
    /* $991E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9920:;
    /* $9920: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_9922:;
    /* $9922: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_9924:;
    /* $9924: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_9926:;
    /* $9926: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_992B;
label_9928:;
    /* $9928: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9ABC, 12); return;
label_992B:;
    /* $992B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_992C:;
    /* $992C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_992E:;
    /* $992E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9930:;
    /* $9930: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1932); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9930, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9933:;
    /* $9933: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA879, 12); return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9966:; return;
label_9968:; return;
label_996A:; return;
label_996D:; return;
label_996F:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9982:; return;
label_9984:; return;
label_9987:; return;
label_9989:; return;
label_998C:; return;
label_998E:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9999:; return;
label_999C:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B7:; return;
label_99BA:; return;
label_99BB:; return;
label_99BD:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E2:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99EF:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0F:; return;
label_9A12:; return;
label_9A13:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A22:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2D:; return;
label_9A30:; return;
label_9A33:; return;
label_9A36:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A42:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A54:; return;
label_9A56:; return;
label_9A58:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7D:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8E:; return;
label_9A91:; return;
label_9A94:; return;
label_9A97:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9AC1:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9ACB:; return;
label_9ACE:; return;
label_9AD1:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD8:; return;
label_9ADA:; return;
label_9ADC:; return;
label_9ADE:; return;
label_9AE0:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B16:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B27:; return;
label_9B29:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B43:; return;
label_9B45:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B53:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5B:; return;
label_9B5D:; return;
label_9B60:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B74:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B83:; return;
label_9B86:; return;
label_9B89:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9BA1:; return;
label_9BA4:; return;
label_9BA6:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAE:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCC:; return;
label_9BCE:; return;
label_9BD0:; return;
label_9BD2:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDE:; return;
label_9BDF:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF8:; return;
label_9BFA:; return;
label_9BFD:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C03:; return;
label_9C06:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C13:; return;
label_9C16:; return;
label_9C18:; return;
label_9C1A:; return;
label_9C1C:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3F:; return;
label_9C42:; return;
label_9C44:; return;
label_9C47:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C52:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5E:; return;
label_9C60:; return;
label_9C63:; return;
label_9C65:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C86:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C90:; return;
label_9C92:; return;
label_9C94:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAE:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB4:; return;
label_9CB6:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CEA:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF6:; return;
label_9CF7:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0A:; return;
label_9D0B:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D11:; return;
label_9D13:; return;
label_9D14:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D20:; return;
label_9D23:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D33:; return;
label_9D35:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D42:; return;
label_9D45:; return;
label_9D47:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D50:; return;
label_9D53:; return;
label_9D56:; return;
label_9D59:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D66:; return;
label_9D68:; return;
label_9D6A:; return;
label_9D6C:; return;
label_9D6E:; return;
label_9D70:; return;
label_9D72:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7E:; return;
label_9D80:; return;
label_9D82:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D90:; return;
label_9D92:; return;
label_9D94:; return;
label_9D95:; return;
label_9D97:; return;
label_9D9A:; return;
label_9D9C:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA2:; return;
label_9DA4:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB1:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DBA:; return;
label_9DBD:; return;
label_9DC0:; return;
label_9DC3:; return;
label_9DC6:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEB:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF5:; return;
label_9DF7:; return;
label_9DF9:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9E00:; return;
label_9E01:; return;
label_9E04:; return;
label_9E05:; return;
label_9E07:; return;
label_9E09:; return;
label_9E0C:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E11:; return;
label_9E13:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1A:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E22:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2C:; return;
label_9E2E:; return;
label_9E31:; return;
label_9E33:; return;
label_9E36:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3E:; return;
label_9E41:; return;
label_9E43:; return;
label_9E46:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E51:; return;
label_9E52:; return;
label_9E53:; return;
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
label_9E61:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E66:; return;
label_9E67:; return;
label_9E68:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E70:; return;
label_9E71:; return;
label_9E72:; return;
label_9E73:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E77:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7D:; return;
label_9E7E:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E81:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E86:; return;
label_9E87:; return;
label_9E88:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E92:; return;
label_9E93:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA6:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB3:; return;
label_9EB4:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EBF:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECC:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED8:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE2:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEE:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF4:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFB:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F02:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F13:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F19:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1D:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F23:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F28:; return;
label_9F29:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F31:; return;
label_9F32:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F42:; return;
label_9F43:; return;
label_9F44:; return;
label_9F45:; return;
label_9F47:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4B:; return;
label_9F4C:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6D:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
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
label_9F86:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8B:; return;
label_9F8D:; return;
label_9F8E:; return;
label_9F8F:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
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
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
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
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFD:; return;
label_9FFE:; return;
label_A000:; return;
label_A003:; return;
label_A005:; return;
label_A008:; return;
label_A00B:; return;
label_A00D:; return;
label_A00F:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01C:; return;
label_A01F:; return;
label_A021:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02B:; return;
label_A02D:; return;
label_A030:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A03A:; return;
label_A03B:; return;
label_A03D:; return;
label_A03F:; return;
label_A042:; return;
label_A045:; return;
label_A047:; return;
label_A049:; return;
label_A04C:; return;
label_A04E:; return;
label_A050:; return;
label_A053:; return;
label_A054:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A069:; return;
label_A06A:; return;
label_A06C:; return;
label_A06F:; return;
label_A070:; return;
label_A073:; return;
label_A074:; return;
label_A077:; return;
label_A079:; return;
label_A07B:; return;
label_A07D:; return;
label_A080:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A08A:; return;
label_A08C:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A096:; return;
label_A098:; return;
label_A099:; return;
label_A09C:; return;
label_A09E:; return;
label_A0A1:; return;
label_A0A4:; return;
label_A0A6:; return;
label_A0A8:; return;
label_A0AA:; return;
label_A0AB:; return;
label_A0AE:; return;
label_A0B0:; return;
label_A0B3:; return;
label_A0B6:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BC:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C2:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CA:; return;
label_A0CC:; return;
label_A0CF:; return;
label_A0D0:; return;
label_A0D3:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0DB:; return;
label_A0DC:; return;
label_A0DE:; return;
label_A0E0:; return;
label_A0E2:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E8:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0F0:; return;
label_A0F2:; return;
label_A0F4:; return;
label_A0F6:; return;
label_A0F9:; return;
label_A0FB:; return;
label_A0FE:; return;
label_A101:; return;
label_A104:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A111:; return;
label_A113:; return;
label_A116:; return;
label_A119:; return;
label_A11A:; return;
label_A11C:; return;
label_A11F:; return;
label_A120:; return;
label_A122:; return;
label_A124:; return;
label_A126:; return;
label_A129:; return;
label_A12B:; return;
label_A12C:; return;
label_A12D:; return;
label_A130:; return;
label_A132:; return;
label_A135:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13F:; return;
label_A140:; return;
label_A142:; return;
label_A143:; return;
label_A146:; return;
label_A148:; return;
label_A14A:; return;
label_A14D:; return;
label_A150:; return;
label_A152:; return;
label_A154:; return;
label_A157:; return;
label_A15A:; return;
label_A15C:; return;
label_A15E:; return;
label_A161:; return;
label_A164:; return;
label_A166:; return;
label_A168:; return;
label_A16B:; return;
label_A16E:; return;
label_A170:; return;
label_A172:; return;
label_A175:; return;
label_A176:; return;
label_A178:; return;
label_A17A:; return;
label_A17C:; return;
label_A17E:; return;
label_A181:; return;
label_A183:; return;
label_A186:; return;
label_A188:; return;
label_A18B:; return;
label_A18C:; return;
label_A18E:; return;
label_A190:; return;
label_A192:; return;
label_A194:; return;
label_A197:; return;
label_A198:; return;
label_A19A:; return;
label_A19D:; return;
label_A1A0:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A8:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AB:; return;
label_A1AC:; return;
label_A1AF:; return;
label_A1B0:; return;
label_A1B1:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B7:; return;
label_A1B9:; return;
label_A1BB:; return;
label_A1BE:; return;
label_A1C1:; return;
label_A1C4:; return;
label_A1C5:; return;
label_A1C7:; return;
label_A1C9:; return;
label_A1CC:; return;
label_A1CF:; return;
label_A1D2:; return;
label_A1D4:; return;
label_A1D6:; return;
label_A1D8:; return;
label_A1DB:; return;
label_A1DD:; return;
label_A1DF:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E8:; return;
label_A1EA:; return;
label_A1EC:; return;
label_A1EE:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F8:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A202:; return;
label_A205:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20D:; return;
label_A20E:; return;
label_A210:; return;
label_A211:; return;
label_A214:; return;
label_A217:; return;
label_A218:; return;
label_A21A:; return;
label_A21D:; return;
label_A21E:; return;
label_A221:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22D:; return;
label_A22E:; return;
label_A230:; return;
label_A233:; return;
label_A234:; return;
label_A237:; return;
label_A239:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A249:; return;
label_A24A:; return;
label_A24C:; return;
label_A24E:; return;
label_A250:; return;
label_A252:; return;
label_A254:; return;
label_A257:; return;
label_A258:; return;
label_A25A:; return;
label_A25C:; return;
label_A25E:; return;
label_A260:; return;
label_A262:; return;
label_A264:; return;
label_A266:; return;
label_A269:; return;
label_A26B:; return;
label_A26E:; return;
label_A271:; return;
label_A272:; return;
label_A274:; return;
label_A276:; return;
label_A278:; return;
label_A27B:; return;
label_A27D:; return;
label_A280:; return;
label_A282:; return;
label_A284:; return;
label_A286:; return;
label_A288:; return;
label_A28A:; return;
label_A28D:; return;
label_A28F:; return;
label_A290:; return;
label_A293:; return;
label_A294:; return;
label_A297:; return;
label_A298:; return;
label_A29A:; return;
label_A29C:; return;
label_A29E:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A4:; return;
label_A2A7:; return;
label_A2A9:; return;
label_A2AA:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B5:; return;
label_A2B7:; return;
label_A2B9:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C1:; return;
label_A2C3:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2CA:; return;
label_A2CC:; return;
label_A2CF:; return;
label_A2D2:; return;
label_A2D5:; return;
label_A2D7:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DD:; return;
label_A2DE:; return;
label_A2DF:; return;
label_A2E0:; return;
label_A2E1:; return;
label_A2E2:; return;
label_A2E3:; return;
label_A2E5:; return;
label_A2E6:; return;
label_A2E7:; return;
label_A2E8:; return;
label_A2E9:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F3:; return;
label_A2F5:; return;
label_A2F6:; return;
label_A2F7:; return;
label_A2F8:; return;
label_A2F9:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A301:; return;
label_A304:; return;
label_A305:; return;
label_A306:; return;
label_A307:; return;
label_A309:; return;
label_A30A:; return;
label_A30B:; return;
label_A30D:; return;
label_A30E:; return;
label_A30F:; return;
label_A310:; return;
label_A311:; return;
label_A312:; return;
label_A313:; return;
label_A315:; return;
label_A316:; return;
label_A318:; return;
label_A31A:; return;
label_A31C:; return;
label_A31E:; return;
label_A320:; return;
label_A321:; return;
label_A323:; return;
label_A324:; return;
label_A325:; return;
label_A326:; return;
label_A327:; return;
label_A328:; return;
label_A32B:; return;
label_A32D:; return;
label_A330:; return;
label_A333:; return;
label_A336:; return;
label_A337:; return;
label_A338:; return;
label_A33A:; return;
label_A33C:; return;
label_A33F:; return;
label_A342:; return;
label_A343:; return;
label_A346:; return;
label_A348:; return;
label_A349:; return;
label_A34B:; return;
label_A34D:; return;
label_A34F:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35B:; return;
label_A35D:; return;
label_A35E:; return;
label_A35F:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A363:; return;
label_A365:; return;
label_A366:; return;
label_A367:; return;
label_A368:; return;
label_A369:; return;
label_A36A:; return;
label_A36B:; return;
label_A36D:; return;
label_A36E:; return;
label_A370:; return;
label_A372:; return;
label_A373:; return;
label_A375:; return;
label_A378:; return;
label_A37A:; return;
label_A37C:; return;
label_A37E:; return;
label_A380:; return;
label_A381:; return;
label_A382:; return;
label_A383:; return;
label_A384:; return;
label_A385:; return;
label_A386:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38B:; return;
label_A38C:; return;
label_A38D:; return;
label_A38E:; return;
label_A38F:; return;
label_A391:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A396:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A3A0:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A4:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A7:; return;
label_A3A8:; return;
label_A3A9:; return;
label_A3AB:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3AE:; return;
label_A3AF:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B3:; return;
label_A3B6:; return;
label_A3B8:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3BF:; return;
label_A3C1:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C6:; return;
label_A3C8:; return;
label_A3C9:; return;
label_A3CA:; return;
label_A3CB:; return;
label_A3CC:; return;
label_A3CD:; return;
label_A3CE:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D2:; return;
label_A3D3:; return;
label_A3D4:; return;
label_A3D5:; return;
label_A3D6:; return;
label_A3D7:; return;
label_A3D9:; return;
label_A3DB:; return;
label_A3DE:; return;
label_A3E0:; return;
label_A3E2:; return;
label_A3E4:; return;
label_A3E5:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F6:; return;
label_A3F8:; return;
label_A3FB:; return;
label_A3FC:; return;
label_A3FF:; return;
label_A400:; return;
label_A402:; return;
label_A404:; return;
label_A406:; return;
label_A408:; return;
label_A40B:; return;
label_A40C:; return;
label_A40F:; return;
label_A410:; return;
label_A413:; return;
label_A414:; return;
label_A417:; return;
label_A419:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A423:; return;
label_A424:; return;
label_A427:; return;
label_A429:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A430:; return;
label_A433:; return;
label_A434:; return;
label_A437:; return;
label_A439:; return;
label_A43A:; return;
label_A43B:; return;
label_A43C:; return;
label_A43D:; return;
label_A43E:; return;
label_A43F:; return;
label_A440:; return;
label_A441:; return;
label_A442:; return;
label_A443:; return;
label_A445:; return;
label_A446:; return;
label_A447:; return;
label_A449:; return;
label_A44A:; return;
label_A44C:; return;
label_A44D:; return;
label_A44F:; return;
label_A450:; return;
label_A451:; return;
label_A452:; return;
label_A453:; return;
label_A454:; return;
label_A456:; return;
label_A458:; return;
label_A459:; return;
label_A45A:; return;
label_A45B:; return;
label_A45D:; return;
label_A45E:; return;
label_A45F:; return;
label_A460:; return;
label_A461:; return;
label_A463:; return;
label_A464:; return;
label_A465:; return;
label_A466:; return;
label_A467:; return;
label_A468:; return;
label_A469:; return;
label_A46A:; return;
label_A46B:; return;
label_A46C:; return;
label_A46D:; return;
label_A46F:; return;
label_A470:; return;
label_A471:; return;
label_A473:; return;
label_A474:; return;
label_A476:; return;
label_A478:; return;
label_A479:; return;
label_A47A:; return;
label_A47B:; return;
label_A47C:; return;
label_A47D:; return;
label_A47E:; return;
label_A47F:; return;
label_A481:; return;
label_A482:; return;
label_A484:; return;
label_A485:; return;
label_A487:; return;
label_A488:; return;
label_A489:; return;
label_A48A:; return;
label_A48B:; return;
label_A48C:; return;
label_A48D:; return;
label_A48E:; return;
label_A48F:; return;
label_A491:; return;
label_A492:; return;
label_A494:; return;
label_A497:; return;
label_A498:; return;
label_A49B:; return;
label_A49C:; return;
label_A49E:; return;
label_A4A0:; return;
label_A4A3:; return;
label_A4A4:; return;
label_A4A7:; return;
label_A4A8:; return;
label_A4AA:; return;
label_A4AC:; return;
label_A4AF:; return;
label_A4B0:; return;
label_A4B2:; return;
label_A4B4:; return;
label_A4B6:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C5:; return;
label_A4C6:; return;
label_A4C9:; return;
label_A4CB:; return;
label_A4CC:; return;
label_A4CE:; return;
label_A4D1:; return;
label_A4D3:; return;
label_A4D6:; return;
label_A4D8:; return;
label_A4DB:; return;
label_A4DE:; return;
label_A4E0:; return;
label_A4E2:; return;
label_A4E5:; return;
label_A4E6:; return;
label_A4E8:; return;
label_A4EA:; return;
label_A4ED:; return;
label_A4F0:; return;
label_A4F2:; return;
label_A4F4:; return;
label_A4F7:; return;
label_A4F8:; return;
label_A4FA:; return;
label_A4FC:; return;
label_A4FF:; return;
label_A502:; return;
label_A504:; return;
label_A506:; return;
label_A508:; return;
label_A50A:; return;
label_A50C:; return;
label_A50F:; return;
label_A512:; return;
label_A514:; return;
label_A516:; return;
label_A518:; return;
label_A51A:; return;
label_A51C:; return;
label_A51F:; return;
label_A522:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52F:; return;
label_A532:; return;
label_A534:; return;
label_A536:; return;
label_A538:; return;
label_A539:; return;
label_A53B:; return;
label_A53E:; return;
label_A53F:; return;
label_A541:; return;
label_A544:; return;
label_A546:; return;
label_A547:; return;
label_A548:; return;
label_A549:; return;
label_A54A:; return;
label_A54B:; return;
label_A54D:; return;
label_A550:; return;
label_A551:; return;
label_A553:; return;
label_A556:; return;
label_A558:; return;
label_A559:; return;
label_A55A:; return;
label_A55B:; return;
label_A55C:; return;
label_A55E:; return;
label_A561:; return;
label_A564:; return;
label_A566:; return;
label_A568:; return;
label_A56A:; return;
label_A56C:; return;
label_A56E:; return;
label_A570:; return;
label_A573:; return;
label_A576:; return;
label_A578:; return;
label_A57A:; return;
label_A57C:; return;
label_A57E:; return;
label_A580:; return;
label_A581:; return;
label_A583:; return;
label_A586:; return;
label_A587:; return;
label_A58A:; return;
label_A58C:; return;
label_A58D:; return;
label_A58F:; return;
label_A591:; return;
label_A593:; return;
label_A596:; return;
label_A597:; return;
label_A59A:; return;
label_A59C:; return;
label_A59D:; return;
label_A59F:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A6:; return;
label_A5A7:; return;
label_A5AA:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B0:; return;
label_A5B1:; return;
label_A5B3:; return;
label_A5B6:; return;
label_A5B7:; return;
label_A5B9:; return;
label_A5BC:; return;
label_A5BD:; return;
label_A5BF:; return;
label_A5C2:; return;
label_A5C4:; return;
label_A5C5:; return;
label_A5C8:; return;
label_A5C9:; return;
label_A5CC:; return;
label_A5CD:; return;
label_A5CF:; return;
label_A5D1:; return;
label_A5D4:; return;
label_A5D6:; return;
label_A5D7:; return;
label_A5D9:; return;
label_A5DC:; return;
label_A5DD:; return;
label_A5DF:; return;
label_A5E2:; return;
label_A5E3:; return;
label_A5E5:; return;
label_A5E8:; return;
label_A5EA:; return;
label_A5EB:; return;
label_A5EE:; return;
label_A5EF:; return;
label_A5F0:; return;
label_A5F1:; return;
label_A5F2:; return;
label_A5F3:; return;
label_A5F4:; return;
label_A5F6:; return;
label_A5F8:; return;
label_A5F9:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FC:; return;
label_A5FD:; return;
label_A5FE:; return;
label_A5FF:; return;
label_A600:; return;
label_A601:; return;
label_A602:; return;
label_A603:; return;
label_A604:; return;
label_A605:; return;
label_A606:; return;
label_A607:; return;
label_A608:; return;
label_A60A:; return;
label_A60C:; return;
label_A60D:; return;
label_A60E:; return;
label_A60F:; return;
label_A610:; return;
label_A611:; return;
label_A612:; return;
label_A613:; return;
label_A614:; return;
label_A615:; return;
label_A618:; return;
label_A619:; return;
label_A61B:; return;
label_A61D:; return;
label_A620:; return;
label_A621:; return;
label_A623:; return;
label_A625:; return;
label_A627:; return;
label_A62A:; return;
label_A62B:; return;
label_A62E:; return;
label_A62F:; return;
label_A631:; return;
label_A633:; return;
label_A636:; return;
label_A637:; return;
label_A63A:; return;
label_A63B:; return;
label_A63E:; return;
label_A640:; return;
label_A642:; return;
label_A644:; return;
label_A645:; return;
label_A647:; return;
label_A649:; return;
label_A64B:; return;
label_A64E:; return;
label_A64F:; return;
label_A652:; return;
label_A653:; return;
label_A655:; return;
label_A657:; return;
label_A65A:; return;
label_A65B:; return;
label_A65E:; return;
label_A65F:; return;
label_A662:; return;
label_A663:; return;
label_A666:; return;
label_A668:; return;
label_A66A:; return;
label_A66C:; return;
label_A66E:; return;
label_A670:; return;
label_A671:; return;
label_A673:; return;
label_A676:; return;
label_A677:; return;
label_A679:; return;
label_A67C:; return;
label_A67D:; return;
label_A67F:; return;
label_A682:; return;
label_A683:; return;
label_A686:; return;
label_A687:; return;
label_A689:; return;
label_A68B:; return;
label_A68E:; return;
label_A690:; return;
label_A692:; return;
label_A694:; return;
label_A696:; return;
label_A698:; return;
label_A699:; return;
label_A69A:; return;
label_A69B:; return;
label_A69C:; return;
label_A69D:; return;
label_A69E:; return;
label_A69F:; return;
label_A6A0:; return;
label_A6A1:; return;
label_A6A2:; return;
label_A6A3:; return;
label_A6A4:; return;
label_A6A5:; return;
label_A6A7:; return;
label_A6AA:; return;
label_A6AB:; return;
label_A6AC:; return;
label_A6AE:; return;
label_A6B0:; return;
label_A6B2:; return;
label_A6B4:; return;
label_A6B6:; return;
label_A6B7:; return;
label_A6B9:; return;
label_A6BC:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C8:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CE:; return;
label_A6D0:; return;
label_A6D2:; return;
label_A6D4:; return;
label_A6D6:; return;
label_A6D7:; return;
label_A6D9:; return;
label_A6DC:; return;
label_A6DD:; return;
label_A6DF:; return;
label_A6E2:; return;
label_A6E3:; return;
label_A6E5:; return;
label_A6E8:; return;
label_A6E9:; return;
label_A6EB:; return;
label_A6EE:; return;
label_A6F0:; return;
label_A6F2:; return;
label_A6F3:; return;
label_A6F6:; return;
label_A6F7:; return;
label_A6FA:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A700:; return;
label_A701:; return;
label_A704:; return;
label_A705:; return;
label_A707:; return;
label_A709:; return;
label_A70C:; return;
label_A70D:; return;
label_A70E:; return;
label_A70F:; return;
label_A710:; return;
label_A711:; return;
label_A712:; return;
label_A713:; return;
label_A714:; return;
label_A715:; return;
label_A716:; return;
label_A717:; return;
label_A719:; return;
label_A71C:; return;
label_A71D:; return;
label_A71F:; return;
label_A722:; return;
label_A723:; return;
label_A726:; return;
label_A727:; return;
label_A728:; return;
label_A729:; return;
label_A72A:; return;
label_A72C:; return;
label_A72E:; return;
label_A72F:; return;
label_A730:; return;
label_A731:; return;
label_A732:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A739:; return;
label_A73A:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A741:; return;
label_A742:; return;
label_A743:; return;
label_A744:; return;
label_A745:; return;
label_A746:; return;
label_A747:; return;
label_A748:; return;
label_A749:; return;
label_A74A:; return;
label_A74B:; return;
label_A74C:; return;
label_A74E:; return;
label_A750:; return;
label_A751:; return;
label_A752:; return;
label_A753:; return;
label_A754:; return;
label_A756:; return;
label_A758:; return;
label_A75B:; return;
label_A75E:; return;
label_A75F:; return;
label_A762:; return;
label_A763:; return;
label_A766:; return;
label_A768:; return;
label_A76A:; return;
label_A76B:; return;
label_A76D:; return;
label_A770:; return;
label_A772:; return;
label_A775:; return;
label_A777:; return;
label_A77A:; return;
label_A77C:; return;
label_A77E:; return;
label_A780:; return;
label_A783:; return;
label_A785:; return;
label_A788:; return;
label_A78A:; return;
label_A78C:; return;
label_A78E:; return;
label_A790:; return;
label_A793:; return;
label_A795:; return;
label_A798:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
}

void func_98F2_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_98F2_b12");
#endif
    func_98F2_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9905_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9905_b12");
#endif
    func_98F2_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9901_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9901_b12");
#endif
    func_98F2_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_990B_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_990B_b12");
#endif
    func_98F2_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_991E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_991E_b12");
#endif
    func_98F2_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_992B_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_992B_b12");
#endif
    func_98F2_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_992C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_992C_b12");
#endif
    func_98F2_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9212_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9212_b12");
#endif
label_9212:;
    /* $9212: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_9214:;
    /* $9214: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9216:;
    /* $9216: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9219:;
    /* $9219: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921A:;
    /* $921A: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921B:;
    /* $921B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921C:;
    /* $921C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921D:;
    /* $921D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9216;
    }
label_921F:;
    /* $921F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9221:;
    /* $9221: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9223:;
    /* $9223: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1225); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9223, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9226:;
    /* $9226: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9228:;
    /* $9228: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x122A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9228, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_922B:;
    /* $922B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_922D:;
    /* $922D: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_922F:;
    /* $922F: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_9231:;
    /* $9231: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9233:;
    /* $9233: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1235); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9233, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9236:;
    /* $9236: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9238:;
    /* $9238: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_923A:;
    /* $923A: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_923C:;
    /* $923C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x123E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x923C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_923F:;
    /* $923F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1241); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9242:;
    /* $9242: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9244:;
    /* $9244: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9236;
    }
label_9246:;
    /* $9246: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9248:;
    /* $9248: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_924A:;
    /* $924A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_924C:;
    /* $924C: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_924E:;
    /* $924E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_9250:;
    /* $9250: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_9252:;
    /* $9252: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1254); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9252, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9255:;
    /* $9255: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9155, 12); return;
}

static void func_9ABC_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9ABE;
        case 2: goto label_9B0E;
        case 3: goto label_9B38;
    }
label_9ABC:;
    /* $9ABC: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9ABD:;
    /* $9ABD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9ABE:;
    /* $9ABE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AC0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9ABE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AC1:;
    /* $9AC1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AC3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9936, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AC4:;
    /* $9AC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9AC6:;
    /* $9AC6: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_9AC8:;
    /* $9AC8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1ACA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AC8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9ACB:;
    /* $9ACB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1ACD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9ACE:;
    /* $9ACE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AD0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9ACE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AD1:;
    /* $9AD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9AD3:;
    /* $9AD3: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_9AD6:;
    /* $9AD6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9AD8:;
    /* $9AD8: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_9ADA:;
    /* $9ADA: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_9ADC:;
    /* $9ADC: 85 */ maybe_trigger_vblank(3); nes_write(0x9F, g_cpu.A);
label_9ADE:;
    /* $9ADE: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_9AE0:;
    /* $9AE0: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_9AE3:;
    /* $9AE3: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_9AE6:;
    /* $9AE6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_9AE8:;
    /* $9AE8: 85 */ maybe_trigger_vblank(3); nes_write(0x29, g_cpu.A);
label_9AEA:;
    /* $9AEA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9AEC:;
    /* $9AEC: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_9AEE:;
    /* $9AEE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_9AF0:;
    /* $9AF0: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_9AF3:;
    /* $9AF3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9AF5:;
    /* $9AF5: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_9AF7:;
    /* $9AF7: 85 */ maybe_trigger_vblank(3); nes_write(0x23, g_cpu.A);
label_9AF9:;
    /* $9AF9: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_9AFB:;
    /* $9AFB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_9AFD:;
    /* $9AFD: 85 */ maybe_trigger_vblank(3); nes_write(0x2B, g_cpu.A);
label_9AFF:;
    /* $9AFF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9B01:;
    /* $9B01: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_9B03:;
    /* $9B03: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9B05:;
    /* $9B05: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B07); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B05, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B08:;
    /* $9B08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_9B0A:;
    /* $9B0A: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_9B0C:;
    /* $9B0C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_9B0E:;
    /* $9B0E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9B0F:;
    /* $9B0F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B11:;
    /* $9B11: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9B13:;
    /* $9B13: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B15); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4F1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B13, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B16:;
    /* $9B16: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B18); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9B19:;
    /* $9B19: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9B1A:;
    /* $9B1A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9B1B:;
    /* $9B1B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9B1D:;
    /* $9B1D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B0E;
    }
label_9B1F:;
    /* $9B1F: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_9B21:;
    /* $9B21: 85 */ maybe_trigger_vblank(3); nes_write(0x2D, g_cpu.A);
label_9B23:;
    /* $9B23: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_9B25:;
    /* $9B25: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_9B27:;
    /* $9B27: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x52; FLAG_NZ(g_cpu.A);
label_9B29:;
    /* $9B29: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_9B2B:;
    /* $9B2B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_9B2D:;
    /* $9B2D: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_9B2F:;
    /* $9B2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_9B31:;
    /* $9B31: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_9B33:;
    /* $9B33: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B35); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B33, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B36:;
    /* $9B36: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_9B38:;
    /* $9B38: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E2A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B3B:;
    /* $9B3B: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B3E:;
    /* $9B3E: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B3F:;
    /* $9B3F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B38;
    }
label_9B41:;
    /* $9B41: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x2A; FLAG_NZ(g_cpu.A);
label_9B43:;
    /* $9B43: 85 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.A);
label_9B45:;
    /* $9B45: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1F; FLAG_NZ(g_cpu.X);
label_9B47:;
    /* $9B47: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9B49:;
    /* $9B49: 8D */ maybe_trigger_vblank(4); nes_write(0x031F, g_cpu.A);
label_9B4C:;
    /* $9B4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x94; FLAG_NZ(g_cpu.A);
label_9B4E:;
    /* $9B4E: 8D */ maybe_trigger_vblank(4); nes_write(0x059F, g_cpu.A);
label_9B51:;
    /* $9B51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x53; FLAG_NZ(g_cpu.A);
label_9B53:;
    /* $9B53: 8D */ maybe_trigger_vblank(4); nes_write(0x033F, g_cpu.A);
label_9B56:;
    /* $9B56: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_9B58:;
    /* $9B58: 8D */ maybe_trigger_vblank(4); nes_write(0x04FF, g_cpu.A);
label_9B5B:;
    /* $9B5B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC2; FLAG_NZ(g_cpu.A);
label_9B5D:;
    /* $9B5D: 8D */ maybe_trigger_vblank(4); nes_write(0x049F, g_cpu.A);
label_9B60:;
    /* $9B60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9B62:;
    /* $9B62: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_9B65:;
    /* $9B65: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B67); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B65, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B68:;
    /* $9B68: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x99; FLAG_NZ(g_cpu.A);
label_9B6A:;
    /* $9B6A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B6C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B6A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B6D:;
    /* $9B6D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_9B6F:;
    /* $9B6F: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_9B71:;
    /* $9B71: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_9B74:;
    /* $9B74: 8D */ maybe_trigger_vblank(4); nes_write(0x039F, g_cpu.A);
label_9B77:;
    /* $9B77: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_9B79:;
    /* $9B79: 8D */ maybe_trigger_vblank(4); nes_write(0x037F, g_cpu.A);
label_9B7C:;
    /* $9B7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9B7E:;
    /* $9B7E: 8D */ maybe_trigger_vblank(4); nes_write(0x04BF, g_cpu.A);
label_9B81:;
    /* $9B81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B83:;
    /* $9B83: 8D */ maybe_trigger_vblank(4); nes_write(0x041F, g_cpu.A);
label_9B86:;
    /* $9B86: 8D */ maybe_trigger_vblank(4); nes_write(0x03FF, g_cpu.A);
label_9B89:;
    /* $9B89: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_9B8C:;
    /* $9B8C: 8D */ maybe_trigger_vblank(4); nes_write(0x051F, g_cpu.A);
label_9B8F:;
    /* $9B8F: 8D */ maybe_trigger_vblank(4); nes_write(0x053F, g_cpu.A);
label_9B92:;
    /* $9B92: 8D */ maybe_trigger_vblank(4); nes_write(0x055F, g_cpu.A);
label_9B95:;
    /* $9B95: 8D */ maybe_trigger_vblank(4); nes_write(0x057F, g_cpu.A);
label_9B98:;
    /* $9B98: 8D */ maybe_trigger_vblank(4); nes_write(0x0100, g_cpu.A);
label_9B9B:;
    /* $9B9B: 8D */ maybe_trigger_vblank(4); nes_write(0x0101, g_cpu.A);
label_9B9E:;
    /* $9B9E: 8D */ maybe_trigger_vblank(4); nes_write(0x0102, g_cpu.A);
label_9BA1:;
    /* $9BA1: 8D */ maybe_trigger_vblank(4); nes_write(0x0103, g_cpu.A);
label_9BA4:;
    /* $9BA4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_9BA6:;
    /* $9BA6: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_9BA9:;
    /* $9BA9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_9BAB:;
    /* $9BAB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BAD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BAB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BAE:;
    /* $9BAE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BB0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9BB1:;
    /* $9BB1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1BB3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9BB1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9BB4:;
    /* $9BB4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC9B3, -1); return;
}

void func_9ABC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ABC_b12");
#endif
    func_9ABC_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9ABE_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ABE_b12");
#endif
    func_9ABC_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B0E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B0E_b12");
#endif
    func_9ABC_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9B38_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9B38_b12");
#endif
    func_9ABC_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A879_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A879_b12");
#endif
label_A879:;
    /* $A879: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A87A:;
    /* $A87A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87A); return;
}

void func_8879_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8879_b12");
#endif
label_8879:;
    /* $8879: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_887A:;
    /* $887A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0E0A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_887D:;
    /* $887D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_887F:;
    /* $887F: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_8880:;
    /* $8880: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8882:;
    /* $8882: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x04) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8884:;
    /* $8884: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_8886:;
    /* $8886: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0208 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8889:;
    /* $8889: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0203 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_888C:;
    /* $888C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x803A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_888F:;
    /* $888F: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x4FFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8892:;
    /* $8892: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8893:;
    /* $8893: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x1D); FLAG_NZ(g_cpu.A);
label_8895:;
    /* $8895: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8896:;
    /* $8896: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x37 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8898:;
    /* $8898: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_889A:;
    /* $889A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_889B:;
    /* $889B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_889C:;
    /* $889C: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x32 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_889E:;
    /* $889E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_889F:;
    /* $889F: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x8039; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88A2:;
    /* $88A2: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3E8F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88A5:;
    /* $88A5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xC800 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88A8:;
    /* $88A8: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xEEC8); FLAG_NZ(g_cpu.A);
label_88AB:;
    /* $88AB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x37; g_cpu.C=(g_cpu.A>=0x37)?1:0; FLAG_NZ(r&0xFF); }
label_88AD:;
    /* $88AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x7E; g_cpu.C=(g_cpu.A>=0x7E)?1:0; FLAG_NZ(r&0xFF); }
label_88AF:;
    /* $88AF: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_88B1:;
    /* $88B1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x88B1); return;
}

static void func_968C_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_96AC;
        case 2: goto label_96CF;
        case 3: goto label_96DA;
    }
label_968C:;
    /* $968C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x168E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x968C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_968F:;
    /* $968F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9691:;
    /* $9691: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_9693:;
    /* $9693: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1695); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9693, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9696:;
    /* $9696: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1698); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9699:;
    /* $9699: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x169B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9936, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9699, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_969C:;
    /* $969C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_96A0:;
    /* $96A0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16A2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96A0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96A3:;
    /* $96A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_96A5:;
    /* $96A5: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_96A7:;
    /* $96A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_96A9:;
    /* $96A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96AC:;
    /* $96AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_96AE:;
    /* $96AE: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_96B0:;
    /* $96B0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16B2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96B0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96B3:;
    /* $96B3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16B5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_96B6:;
    /* $96B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_96B8:;
    /* $96B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_96AC;
    }
label_96BA:;
    /* $96BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_96BE:;
    /* $96BE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x76; FLAG_NZ(g_cpu.A);
label_96C0:;
    /* $96C0: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_96C2:;
    /* $96C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_96C4:;
    /* $96C4: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_96C6:;
    /* $96C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_96C8:;
    /* $96C8: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_96CA:;
    /* $96CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16CC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96CD:;
    /* $96CD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_96CF:;
    /* $96CF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C43 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96D2:;
    /* $96D2: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_96D5:;
    /* $96D5: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_96D6:;
    /* $96D6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_96CF;
    }
label_96D8:;
    /* $96D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_96DA:;
    /* $96DA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C23 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96DD:;
    /* $96DD: 99 */ maybe_trigger_vblank(5); nes_write((0x0630 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_96E0:;
    /* $96E0: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_96E1:;
    /* $96E1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_96DA;
    }
label_96E3:;
    /* $96E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_96E5:;
    /* $96E5: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_96E7:;
    /* $96E7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x12; FLAG_NZ(g_cpu.X);
label_96E9:;
    /* $96E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96EC:;
    /* $96EC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16EE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_96EF:;
    /* $96EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_96F1:;
    /* $96F1: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_96F3:;
    /* $96F3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16F5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96F3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96F6:;
    /* $96F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA8DD, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96F9:;
    /* $96F9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16FB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96F9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96FC:;
    /* $96FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_96FE:;
    /* $96FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A);
label_9700:;
    /* $9700: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9708;
label_9702:;
    /* $9702: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1704); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9705:;
    /* $9705: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_96FC;
label_9708:;
    /* $9708: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9212, 12); return;
}

void func_968C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_968C_b12");
#endif
    func_968C_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_96AC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96AC_b12");
#endif
    func_968C_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_96CF_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96CF_b12");
#endif
    func_968C_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_96DA_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96DA_b12");
#endif
    func_968C_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_995C_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_99DC;
        case 2: goto label_99A3;
        case 3: goto label_99CB;
        case 4: goto label_99CC;
        case 5: goto label_99F4;
        case 6: goto label_99F9;
    }
label_995C:;
    /* $995C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x195E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x99DC, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x995C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_995F:;
    /* $995F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x08; FLAG_NZ(g_cpu.X);
label_9961:;
    /* $9961: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DED + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9964:;
    /* $9964: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99CC;
label_9966:;
    /* $9966: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9968:;
    /* $9968: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99BA;
label_996A:;
    /* $996A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DC9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_996D:;
    /* $996D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_996F:;
    /* $996F: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_9972:;
    /* $9972: 8D */ maybe_trigger_vblank(4); nes_write(0x0787, g_cpu.A);
label_9975:;
    /* $9975: 8D */ maybe_trigger_vblank(4); nes_write(0x078E, g_cpu.A);
label_9978:;
    /* $9978: 8D */ maybe_trigger_vblank(4); nes_write(0x0795, g_cpu.A);
label_997B:;
    /* $997B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_997C:;
    /* $997C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DD2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_997F:;
    /* $997F: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_9982:;
    /* $9982: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9984:;
    /* $9984: 8D */ maybe_trigger_vblank(4); nes_write(0x0788, g_cpu.A);
label_9987:;
    /* $9987: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9989:;
    /* $9989: 8D */ maybe_trigger_vblank(4); nes_write(0x078F, g_cpu.A);
label_998C:;
    /* $998C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_998E:;
    /* $998E: 8D */ maybe_trigger_vblank(4); nes_write(0x0796, g_cpu.A);
label_9991:;
    /* $9991: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9993:;
    /* $9993: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_9996:;
    /* $9996: 8D */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.A);
label_9999:;
    /* $9999: 8D */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.A);
label_999C:;
    /* $999C: 8D */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.A);
label_999F:;
    /* $999F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_99A1:;
    /* $99A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_99A3:;
    /* $99A3: 99 */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99A6:;
    /* $99A6: 99 */ maybe_trigger_vblank(5); nes_write((0x078A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99A9:;
    /* $99A9: 99 */ maybe_trigger_vblank(5); nes_write((0x0791 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99AC:;
    /* $99AC: 99 */ maybe_trigger_vblank(5); nes_write((0x0798 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99AF:;
    /* $99AF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99B0:;
    /* $99B0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99A3;
    }
label_99B2:;
    /* $99B2: 8C */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.Y);
label_99B5:;
    /* $99B5: 84 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.Y);
label_99B7:;
    /* $99B7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19B9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_99BA:;
    /* $99BA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_99BB:;
    /* $99BB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9961;
    }
label_99BD:;
    /* $99BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99BF:;
    /* $99BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99CB;
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:; /* main_metall_dx */
    /* $99C3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_99CB;
label_99C5:;
    /* $99C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x97EC, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:;
    /* $99C8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19CA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_99CB:;
    /* $99CB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_99CC:;
    /* $99CC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99BA;
    }
label_99D0:;
    /* $99D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99D2:;
    /* $99D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_996A;
    }
label_99D4:;
    /* $99D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_99D6:;
    /* $99D6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_99D8:;
    /* $99D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99BA;
    }
label_99DA:;
    /* $99DA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_996A;
    }
label_99DC:;
    /* $99DC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99DE:;
    /* $99DE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99F9;
label_99E0:;
    /* $99E0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_99E2:;
    /* $99E2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_99E4:;
    /* $99E4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19E6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x970B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99E4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99E7:;
    /* $99E7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99E9:;
    /* $99E9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99EB:;
    /* $99EB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_99F4;
label_99ED:;
    /* $99ED: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_99EF:;
    /* $99EF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_99F1:;
    /* $99F1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19F3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x970B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F4:;
    /* $99F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_99F6:;
    /* $99F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9762, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F9:;
    /* $99F9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_995C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_995C_b12");
#endif
    func_995C_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99DC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99DC_b12");
#endif
    func_995C_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99A3_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99A3_b12");
#endif
    func_995C_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99CB_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99CB_b12");
#endif
    func_995C_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99CC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99CC_b12");
#endif
    func_995C_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99F4_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F4_b12");
#endif
    func_995C_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_99F9_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99F9_b12");
#endif
    func_995C_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_99FA_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9A09;
        case 2: goto label_9A19;
        case 3: goto label_9A27;
        case 4: goto label_9A62;
        case 5: goto label_9A71;
        case 6: goto label_9A81;
    }
label_99FA:;
    /* $99FA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_99FC:;
    /* $99FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99FE:;
    /* $99FE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A19;
label_9A00:;
    /* $9A00: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x74; FLAG_NZ(g_cpu.A);
label_9A02:;
    /* $9A02: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_9A04:;
    /* $9A04: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A06); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A04, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A07:;
    /* $9A07: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_9A09:;
    /* $9A09: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D36 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A0C:;
    /* $9A0C: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A0F:;
    /* $9A0F: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A12:;
    /* $9A12: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A13:;
    /* $9A13: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A09;
    }
label_9A15:;
    /* $9A15: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9A17:;
    /* $9A17: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x98; FLAG_NZ(g_cpu.X);
label_9A19:;
    /* $9A19: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_9A1B:;
    /* $9A1B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF5); FLAG_NZ(g_cpu.A);
label_9A1D:;
    /* $9A1D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9A1E:;
    /* $9A1E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9A20:;
    /* $9A20: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9A22:;
    /* $9A22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A24); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A25:;
    /* $9A25: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_9A27:;
    /* $9A27: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA231 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A2A:;
    /* $9A2A: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A2D:;
    /* $9A2D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA232 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A30:;
    /* $9A30: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A33:;
    /* $9A33: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA233 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A36:;
    /* $9A36: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A39:;
    /* $9A39: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA234 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A3C:;
    /* $9A3C: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9A3F:;
    /* $9A3F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A40:;
    /* $9A40: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A41:;
    /* $9A41: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A42:;
    /* $9A42: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A43:;
    /* $9A43: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xCC; g_cpu.C=(g_cpu.X>=0xCC)?1:0; FLAG_NZ(r&0xFF); }
label_9A45:;
    /* $9A45: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A27;
    }
label_9A47:;
    /* $9A47: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9A48:;
    /* $9A48: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9A4A:;
    /* $9A4A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A4C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A4A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A4D:;
    /* $9A4D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x08; FLAG_NZ(g_cpu.X);
label_9A4F:;
    /* $9A4F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DED + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A52:;
    /* $9A52: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A71;
label_9A54:;
    /* $9A54: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9A56:;
    /* $9A56: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A6D;
label_9A58:;
    /* $9A58: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x9DDB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A5B:;
    /* $9A5B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DE4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A5E:;
    /* $9A5E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9A60:;
    /* $9A60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9A62:;
    /* $9A62: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A65:;
    /* $9A65: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A66:;
    /* $9A66: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A67:;
    /* $9A67: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A68:;
    /* $9A68: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A69:;
    /* $9A69: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A6B:;
    /* $9A6B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A62;
    }
label_9A6D:;
    /* $9A6D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A6E:;
    /* $9A6E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A4F;
    }
label_9A70:;
    /* $9A70: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9A71:;
    /* $9A71: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_9A73:;
    /* $9A73: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A6D;
    }
label_9A75:;
    /* $9A75: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_9A77:;
    /* $9A77: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A81;
label_9A79:;
    /* $9A79: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9A7B:;
    /* $9A7B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_9A7D:;
    /* $9A7D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A6D;
    }
label_9A7F:;
    /* $9A7F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A58;
    }
label_9A81:;
    /* $9A81: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A83); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9A87, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A81, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A84:;
    /* $9A84: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_9A58;
}

void func_99FA_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99FA_b12");
#endif
    func_99FA_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A09_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A09_b12");
#endif
    func_99FA_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A19_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A19_b12");
#endif
    func_99FA_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A27_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A27_b12");
#endif
    func_99FA_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A62_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A62_b12");
#endif
    func_99FA_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A71_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A71_b12");
#endif
    func_99FA_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A81_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A81_b12");
#endif
    func_99FA_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_970B_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_973C;
        case 2: goto label_9749;
        case 3: goto label_9757;
    }
label_970B:;
    /* $970B: 86 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.X);
label_970D:;
    /* $970D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D4C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9710:;
    /* $9710: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9712:;
    /* $9712: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9715:;
    /* $9715: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_9717:;
    /* $9717: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9719:;
    /* $9719: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_971B:;
    /* $971B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_971E:;
    /* $971E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9749;
label_9720:;
    /* $9720: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9723:;
    /* $9723: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9724:;
    /* $9724: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9726:;
    /* $9726: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9729:;
    /* $9729: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_972C:;
    /* $972C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_972E:;
    /* $972E: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9731:;
    /* $9731: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9732:;
    /* $9732: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9733:;
    /* $9733: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9736:;
    /* $9736: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9739:;
    /* $9739: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_973B:;
    /* $973B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_973C:;
    /* $973C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_973F:;
    /* $973F: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9742:;
    /* $9742: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9743:;
    /* $9743: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9745:;
    /* $9745: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_973C;
    }
label_9747:;
    /* $9747: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_971B;
    }
label_9749:;
    /* $9749: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_974C:;
    /* $974C: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_974E:;
    /* $974E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_974F:;
    /* $974F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9750:;
    /* $9750: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_9752:;
    /* $9752: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1754); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9755:;
    /* $9755: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9756:;
    /* $9756: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9757:;
    /* $9757: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9758:;
    /* $9758: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9759:;
    /* $9759: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_975B:;
    /* $975B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9757;
    }
label_975D:;
    /* $975D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x09; g_cpu.C=(g_cpu.Y>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_975F:;
    /* $975F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_970D;
    }
label_9761:;
    /* $9761: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_970B_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_970B_b12");
#endif
    func_970B_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_973C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_973C_b12");
#endif
    func_970B_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9749_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9749_b12");
#endif
    func_970B_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9757_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9757_b12");
#endif
    func_970B_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_97EC_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9821;
        case 2: goto label_983E;
    }
label_97EC:;
    /* $97EC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x9DB2); FLAG_NZ(g_cpu.A);
label_97EF:;
    /* $97EF: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_97F1:;
    /* $97F1: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_97F4:;
    /* $97F4: 8D */ maybe_trigger_vblank(4); nes_write(0x0787, g_cpu.A);
label_97F7:;
    /* $97F7: 8D */ maybe_trigger_vblank(4); nes_write(0x078E, g_cpu.A);
label_97FA:;
    /* $97FA: 8D */ maybe_trigger_vblank(4); nes_write(0x0795, g_cpu.A);
label_97FD:;
    /* $97FD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_97FE:;
    /* $97FE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x9DB3); FLAG_NZ(g_cpu.A);
label_9801:;
    /* $9801: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_9804:;
    /* $9804: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9806:;
    /* $9806: 8D */ maybe_trigger_vblank(4); nes_write(0x0788, g_cpu.A);
label_9809:;
    /* $9809: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_980B:;
    /* $980B: 8D */ maybe_trigger_vblank(4); nes_write(0x078F, g_cpu.A);
label_980E:;
    /* $980E: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9810:;
    /* $9810: 8D */ maybe_trigger_vblank(4); nes_write(0x0796, g_cpu.A);
label_9813:;
    /* $9813: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9815:;
    /* $9815: 8E */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.X);
label_9818:;
    /* $9818: 8E */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.X);
label_981B:;
    /* $981B: 8E */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.X);
label_981E:;
    /* $981E: 8E */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.X);
label_9821:;
    /* $9821: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DB4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9824:;
    /* $9824: 9D */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9827:;
    /* $9827: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DB8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_982A:;
    /* $982A: 9D */ maybe_trigger_vblank(5); nes_write((0x078A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_982D:;
    /* $982D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DBC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9830:;
    /* $9830: 9D */ maybe_trigger_vblank(5); nes_write((0x0791 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9833:;
    /* $9833: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DC0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9836:;
    /* $9836: 9D */ maybe_trigger_vblank(5); nes_write((0x0798 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9839:;
    /* $9839: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_983A:;
    /* $983A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9821;
    }
label_983C:;
    /* $983C: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_983E:;
    /* $983E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DC4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9841:;
    /* $9841: 9D */ maybe_trigger_vblank(5); nes_write((0x079C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9844:;
    /* $9844: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9845:;
    /* $9845: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_983E;
    }
label_9847:;
    /* $9847: 8D */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.A);
label_984A:;
    /* $984A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_984C:;
    /* $984C: 8D */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.A);
label_984F:;
    /* $984F: 8E */ maybe_trigger_vblank(4); nes_write(0x07A1, g_cpu.X);
label_9852:;
    /* $9852: 86 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.X);
label_9854:;
    /* $9854: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1856); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9857:;
    /* $9857: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0E; FLAG_NZ(g_cpu.X);
label_9859:;
    /* $9859: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x185B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9859, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_985C:;
    /* $985C: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_97EC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_97EC_b12");
#endif
    func_97EC_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9821_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9821_b12");
#endif
    func_97EC_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_983E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_983E_b12");
#endif
    func_97EC_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_9A87_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9A8B;
        case 2: goto label_9AAB;
    }
label_9A87:;
    /* $9A87: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_9A89:;
    /* $9A89: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_9A8B:;
    /* $9A8B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DF6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A8E:;
    /* $9A8E: 99 */ maybe_trigger_vblank(5); nes_write((0x02DC + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A91:;
    /* $9A91: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DF7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A94:;
    /* $9A94: 99 */ maybe_trigger_vblank(5); nes_write((0x02DD + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A97:;
    /* $9A97: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DF8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A9A:;
    /* $9A9A: 99 */ maybe_trigger_vblank(5); nes_write((0x02DE + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A9D:;
    /* $9A9D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DF9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AA0:;
    /* $9AA0: 99 */ maybe_trigger_vblank(5); nes_write((0x02DF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9AA3:;
    /* $9AA3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9AA4:;
    /* $9AA4: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9AA5:;
    /* $9AA5: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9AA6:;
    /* $9AA6: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9AA7:;
    /* $9AA7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A8B;
    }
label_9AA9:;
    /* $9AA9: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_9AAB:;
    /* $9AAB: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9E1A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9AAE:;
    /* $9AAE: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9AB1:;
    /* $9AB1: 99 */ maybe_trigger_vblank(5); nes_write((0x0630 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9AB4:;
    /* $9AB4: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9AB5:;
    /* $9AB5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9AAB;
    }
label_9AB7:;
    /* $9AB7: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9AB9:;
    /* $9AB9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_9ABB:; /* main_mag_fly */
    /* $9ABB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A87_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A87_b12");
#endif
    func_9A87_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A8B_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A8B_b12");
#endif
    func_9A87_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9AAB_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9AAB_b12");
#endif
    func_9A87_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9681_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9681_b12");
#endif
label_9681:;
    /* $9681: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9683:;
    /* $9683: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_9685:;
    /* $9685: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9687:;
    /* $9687: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_9689:;
    /* $9689: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9258, 12); return;
}

static void func_9762_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9766;
        case 2: goto label_97E1;
    }
label_9762:;
    /* $9762: 86 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.X);
label_9764:;
    /* $9764: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9766:;
    /* $9766: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D99 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9769:;
    /* $9769: 9D */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_976C:;
    /* $976C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D9D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_976F:;
    /* $976F: 9D */ maybe_trigger_vblank(5); nes_write((0x078A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9772:;
    /* $9772: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9775:;
    /* $9775: 9D */ maybe_trigger_vblank(5); nes_write((0x0791 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9778:;
    /* $9778: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DA5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_977B:;
    /* $977B: 9D */ maybe_trigger_vblank(5); nes_write((0x0798 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_977E:;
    /* $977E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_977F:;
    /* $977F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9766;
    }
label_9781:;
    /* $9781: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9783:; /* main_met */
    /* $9783: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DC9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9786:;
    /* $9786: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_9788:;
    /* $9788: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_978B:;
    /* $978B: 8D */ maybe_trigger_vblank(4); nes_write(0x0787, g_cpu.A);
label_978E:;
    /* $978E: 8D */ maybe_trigger_vblank(4); nes_write(0x078E, g_cpu.A);
label_9791:;
    /* $9791: 8D */ maybe_trigger_vblank(4); nes_write(0x0795, g_cpu.A);
label_9794:;
    /* $9794: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9795:;
    /* $9795: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DD2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9798:;
    /* $9798: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_979B:;
    /* $979B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_979D:;
    /* $979D: 8D */ maybe_trigger_vblank(4); nes_write(0x0788, g_cpu.A);
label_97A0:;
    /* $97A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_97A2:;
    /* $97A2: 8D */ maybe_trigger_vblank(4); nes_write(0x078F, g_cpu.A);
label_97A5:;
    /* $97A5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_97A7:;
    /* $97A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0796, g_cpu.A);
label_97AA:;
    /* $97AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_97AC:;
    /* $97AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_97AF:;
    /* $97AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.A);
label_97B2:;
    /* $97B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.A);
label_97B5:;
    /* $97B5: 8D */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.A);
label_97B8:;
    /* $97B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_97BA:;
    /* $97BA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_97BC:;
    /* $97BC: 8D */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.A);
label_97BF:;
    /* $97BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_97C1:;
    /* $97C1: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x9DA9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97C4:;
    /* $97C4: 8D */ maybe_trigger_vblank(4); nes_write(0x079D, g_cpu.A);
label_97C7:;
    /* $97C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_97C9:;
    /* $97C9: 8D */ maybe_trigger_vblank(4); nes_write(0x079E, g_cpu.A);
label_97CC:;
    /* $97CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x55; FLAG_NZ(g_cpu.A);
label_97CE:;
    /* $97CE: 8D */ maybe_trigger_vblank(4); nes_write(0x079F, g_cpu.A);
label_97D1:;
    /* $97D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_97D3:;
    /* $97D3: 8D */ maybe_trigger_vblank(4); nes_write(0x07A0, g_cpu.A);
label_97D6:;
    /* $97D6: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_97D8:;
    /* $97D8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_97D9:;
    /* $97D9: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_97DA:;
    /* $97DA: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_97DC:;
    /* $97DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x17DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_97DF:;
    /* $97DF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_97E0:;
    /* $97E0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_97E1:;
    /* $97E1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_97E2:;
    /* $97E2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_97E3:;
    /* $97E3: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_97E5:;
    /* $97E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_97E1;
    }
label_97E7:;
    /* $97E7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x09; g_cpu.C=(g_cpu.Y>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_97E9:;
    /* $97E9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9783;
    }
label_97EB:;
    /* $97EB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9762_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9762_b12");
#endif
    func_9762_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9766_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9766_b12");
#endif
    func_9762_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_97E1_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_97E1_b12");
#endif
    func_9762_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_9258_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9261;
        case 2: goto label_9279;
        case 3: goto label_9291;
        case 4: goto label_92A2;
        case 5: goto label_92D4;
    }
label_9258:;
    /* $9258: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_925A:;
    /* $925A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A);
label_925C:;
    /* $925C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9261;
label_925E:;
    /* $925E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9300, 12); return;
label_9261:;
    /* $9261: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_9263:;
    /* $9263: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_9265:;
    /* $9265: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9279;
label_9267:;
    /* $9267: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9268:;
    /* $9268: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_926A:;
    /* $926A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_926B:;
    /* $926B: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9D0D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_926E:;
    /* $926E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_9270:;
    /* $9270: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9279;
label_9272:;
    /* $9272: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_9274:;
    /* $9274: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_9276:;
    /* $9276: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1278); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9276, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9279:;
    /* $9279: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_927B:;
    /* $927B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_927D:;
    /* $927D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9291;
label_927F:;
    /* $927F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9280:;
    /* $9280: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_9282:;
    /* $9282: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9283:;
    /* $9283: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9D0D + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9286:;
    /* $9286: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9288:;
    /* $9288: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_9291;
label_928A:;
    /* $928A: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_928C:;
    /* $928C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1B; FLAG_NZ(g_cpu.A);
label_928E:;
    /* $928E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1290); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x928E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9291:;
    /* $9291: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_9293:;
    /* $9293: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9294:;
    /* $9294: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9296:;
    /* $9296: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9298:;
    /* $9298: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9299:;
    /* $9299: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_929A:;
    /* $929A: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_929C:;
    /* $929C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_929D:;
    /* $929D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_929F:;
    /* $929F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_92A0:;
    /* $92A0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_92A2:;
    /* $92A2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C75 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92A5:;
    /* $92A5: 99 */ maybe_trigger_vblank(5); nes_write((0x0299 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_92A8:;
    /* $92A8: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C76 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92AB:;
    /* $92AB: 99 */ maybe_trigger_vblank(5); nes_write((0x029A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_92AE:;
    /* $92AE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_92AF:;
    /* $92AF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_92B0:;
    /* $92B0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92B1:;
    /* $92B1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92B2:;
    /* $92B2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92B3:;
    /* $92B3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92B4:;
    /* $92B4: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x18; g_cpu.C=(g_cpu.Y>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_92B6:; /* main_chibee */
    /* $92B6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_92A2;
    }
label_92B8:;
    /* $92B8: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_92BA:;
    /* $92BA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CF3 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92BD:;
    /* $92BD: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_92BF:;
    /* $92BF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CFC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92C2:;
    /* $92C2: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_92C4:;
    /* $92C4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_92C6:;
    /* $92C6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_92C7:;
    /* $92C7: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_92C8:;
    /* $92C8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_92C9:;
    /* $92C9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_92CB:;
    /* $92CB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_92CC:;
    /* $92CC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xE4 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xE4); g_cpu.A=r&0xFF; }
label_92CE:;
    /* $92CE: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_92D0:;
    /* $92D0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_92D2:;
    /* $92D2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xC8; FLAG_NZ(g_cpu.Y);
label_92D4:;
    /* $92D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_92D6:;
    /* $92D6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_92D7:;
    /* $92D7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9D05 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_92DA:;
    /* $92DA: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_92DD:;
    /* $92DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_92DF:;
    /* $92DF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_92E0:;
    /* $92E0: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9D09 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_92E3:;
    /* $92E3: 99 */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_92E6:;
    /* $92E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_92E8:;
    /* $92E8: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_92EB:;
    /* $92EB: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92EC:;
    /* $92EC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92ED:;
    /* $92ED: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92EE:;
    /* $92EE: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92EF:;
    /* $92EF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_92F0:;
    /* $92F0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_92D4;
    }
label_92F2:;
    /* $92F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_92F4:;
    /* $92F4: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_92F6:;
    /* $92F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_92F9:;
    /* $92F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92FB:;
    /* $92FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92FD:;
    /* $92FD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_9258;
label_9300:; return;
label_9303:; return;
label_9305:; return;
label_9306:; return;
label_9308:; return;
label_9309:; return;
label_930B:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9313:; return;
label_9316:; return;
label_9318:; return;
label_931B:; return;
label_931D:; return;
label_931F:; return;
label_9321:; return;
label_9323:; return;
label_9324:; return;
label_9325:; return;
label_9327:; return;
label_9328:; return;
label_932B:; return;
label_932D:; return;
label_932F:; return;
label_9331:; return;
label_9333:; return;
label_9335:; return;
label_9338:; return;
label_933A:; return;
label_933C:; return;
label_933F:; return;
label_9341:; return;
label_9343:; return;
label_9346:; return;
label_9348:; return;
label_9349:; return;
label_934B:; return;
label_934D:; return;
label_934E:; return;
label_9350:; return;
label_9351:; return;
label_9352:; return;
label_9354:; return;
label_9356:; return;
label_9359:; return;
label_935B:; return;
label_935D:; return;
label_935F:; return;
label_9361:; return;
label_9362:; return;
label_9365:; return;
label_9368:; return;
label_9369:; return;
label_936B:; return;
label_936D:; return;
label_936F:; return;
label_9371:; return;
label_9374:; return;
label_9377:; return;
label_937A:; return;
label_937B:; return;
label_937D:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9386:; return;
label_9388:; return;
label_938B:; return;
label_938C:; return;
label_938E:; return;
label_9390:; return;
label_9393:; return;
label_9394:; return;
label_9397:; return;
label_9399:; return;
label_939B:; return;
label_939E:; return;
label_93A0:; return;
label_93A2:; return;
label_93A4:; return;
label_93A5:; return;
label_93A7:; return;
label_93A9:; return;
label_93AC:; return;
label_93AE:; return;
label_93B1:; return;
label_93B3:; return;
label_93B6:; return;
label_93B8:; return;
label_93BA:; return;
label_93BC:; return;
label_93BE:; return;
label_93C1:; return;
label_93C3:; return;
label_93C4:; return;
label_93C6:; return;
label_93C9:; return;
label_93CA:; return;
label_93CC:; return;
label_93CF:; return;
label_93D1:; return;
label_93D2:; return;
label_93D4:; return;
label_93D7:; return;
label_93D8:; return;
label_93DA:; return;
label_93DC:; return;
label_93DE:; return;
label_93E0:; return;
label_93E1:; return;
label_93E3:; return;
label_93E6:; return;
label_93E8:; return;
label_93E9:; return;
label_93EB:; return;
label_93EE:; return;
label_93F0:; return;
label_93F3:; return;
label_93F5:; return;
label_93F8:; return;
label_93FA:; return;
label_93FD:; return;
label_93FE:; return;
label_9400:; return;
label_9402:; return;
label_9404:; return;
label_9406:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940F:; return;
label_9410:; return;
label_9412:; return;
label_9415:; return;
label_9417:; return;
label_9419:; return;
label_941C:; return;
label_941D:; return;
label_941F:; return;
label_9421:; return;
label_9423:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942D:; return;
label_942F:; return;
label_9432:; return;
label_9435:; return;
label_9437:; return;
label_943A:; return;
label_943D:; return;
label_943F:; return;
label_9440:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9449:; return;
label_944B:; return;
label_944D:; return;
label_9450:; return;
label_9453:; return;
label_9455:; return;
label_9457:; return;
label_9458:; return;
label_945A:; return;
label_945C:; return;
label_945E:; return;
label_9460:; return;
label_9463:; return;
label_9466:; return;
label_9468:; return;
label_9469:; return;
label_946B:; return;
label_946C:; return;
label_946F:; return;
label_9471:; return;
label_9474:; return;
label_9477:; return;
label_9478:; return;
label_947A:; return;
label_947D:; return;
label_947F:; return;
label_9482:; return;
label_9485:; return;
label_9486:; return;
label_9488:; return;
label_948A:; return;
label_948D:; return;
label_948F:; return;
label_9492:; return;
label_9494:; return;
label_9496:; return;
label_9499:; return;
label_949C:; return;
label_949E:; return;
label_94A1:; return;
label_94A4:; return;
label_94A7:; return;
label_94AA:; return;
label_94AC:; return;
label_94AE:; return;
label_94AF:; return;
label_94B1:; return;
label_94B4:; return;
label_94B6:; return;
label_94B9:; return;
label_94BC:; return;
label_94BE:; return;
label_94C0:; return;
label_94C2:; return;
label_94C4:; return;
label_94C7:; return;
label_94CA:; return;
label_94CD:; return;
label_94CF:; return;
label_94D1:; return;
label_94D3:; return;
label_94D6:; return;
label_94D9:; return;
label_94DB:; return;
label_94DD:; return;
label_94DE:; return;
label_94E0:; return;
label_94E3:; return;
label_94E6:; return;
label_94E9:; return;
label_94EB:; return;
label_94EE:; return;
label_94F0:; return;
label_94F2:; return;
label_94F4:; return;
label_94F7:; return;
label_94F9:; return;
label_94FC:; return;
label_94FE:; return;
label_9501:; return;
label_9503:; return;
label_9506:; return;
label_9509:; return;
label_950B:; return;
label_950D:; return;
label_950F:; return;
label_9511:; return;
label_9513:; return;
label_9515:; return;
label_9517:; return;
label_9518:; return;
label_9519:; return;
label_951A:; return;
label_951C:; return;
label_951D:; return;
label_9520:; return;
label_9523:; return;
label_9526:; return;
label_9529:; return;
label_952A:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9532:; return;
label_9535:; return;
label_9538:; return;
label_953B:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9545:; return;
label_9547:; return;
label_9549:; return;
label_954A:; return;
label_954C:; return;
label_954E:; return;
label_9550:; return;
label_9552:; return;
label_9554:; return;
label_9557:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955E:; return;
label_9561:; return;
label_9562:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956C:; return;
label_956E:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_9580:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_958A:; return;
label_958D:; return;
label_958F:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959C:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A8:; return;
label_95AB:; return;
label_95AD:; return;
label_95AF:; return;
label_95B1:; return;
label_95B3:; return;
label_95B6:; return;
label_95B9:; return;
label_95BB:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C4:; return;
label_95C6:; return;
label_95C8:; return;
label_95CA:; return;
label_95CD:; return;
label_95D0:; return;
label_95D2:; return;
label_95D5:; return;
label_95D8:; return;
label_95DA:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E3:; return;
label_95E5:; return;
label_95E8:; return;
label_95EB:; return;
label_95ED:; return;
label_95EF:; return;
label_95F1:; return;
label_95F3:; return;
label_95F5:; return;
label_95F7:; return;
label_95F9:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9602:; return;
label_9604:; return;
label_9607:; return;
label_960A:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_961B:; return;
label_961E:; return;
label_9620:; return;
label_9622:; return;
label_9625:; return;
label_9627:; return;
label_9629:; return;
label_962B:; return;
label_962D:; return;
label_9630:; return;
label_9633:; return;
label_9635:; return;
label_9637:; return;
label_9639:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9644:; return;
label_9647:; return;
label_964A:; return;
label_964D:; return;
label_964F:; return;
label_9652:; return;
label_9654:; return;
label_9656:; return;
label_9658:; return;
label_965A:; return;
label_965C:; return;
label_965E:; return;
label_9661:; return;
label_9663:; return;
label_9666:; return;
label_9669:; return;
label_966C:; return;
label_966D:; return;
label_966F:; return;
label_9671:; return;
label_9673:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967C:; return;
label_967E:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968C:; return;
label_968F:; return;
label_9691:; return;
label_9693:; return;
label_9696:; return;
label_9699:; return;
label_969C:; return;
label_969E:; return;
label_96A0:; return;
label_96A3:; return;
label_96A5:; return;
label_96A7:; return;
label_96A9:; return;
label_96AC:; return;
label_96AE:; return;
label_96B0:; return;
label_96B3:; return;
label_96B6:; return;
label_96B8:; return;
label_96BA:; return;
label_96BC:; return;
label_96BE:; return;
label_96C0:; return;
label_96C2:; return;
label_96C4:; return;
label_96C6:; return;
label_96C8:; return;
label_96CA:; return;
label_96CD:; return;
label_96CF:; return;
label_96D2:; return;
label_96D5:; return;
label_96D6:; return;
label_96D8:; return;
label_96DA:; return;
label_96DD:; return;
label_96E0:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F6:; return;
label_96F9:; return;
label_96FC:; return;
label_96FE:; return;
label_9700:; return;
label_9702:; return;
label_9705:; return;
label_9708:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9712:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971E:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9726:; return;
label_9729:; return;
label_972C:; return;
label_972E:; return;
label_9731:; return;
label_9732:; return;
label_9733:; return;
label_9736:; return;
label_9739:; return;
label_973B:; return;
label_973C:; return;
label_973F:; return;
label_9742:; return;
label_9743:; return;
label_9745:; return;
label_9747:; return;
label_9749:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9752:; return;
label_9755:; return;
label_9756:; return;
label_9757:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9761:; return;
label_9762:; return;
label_9764:; return;
label_9766:; return;
label_9769:; return;
label_976C:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9778:; return;
label_977B:; return;
label_977E:; return;
label_977F:; return;
label_9781:; return;
label_9783:; return;
label_9786:; return;
label_9788:; return;
label_978B:; return;
label_978E:; return;
label_9791:; return;
label_9794:; return;
label_9795:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A2:; return;
label_97A5:; return;
label_97A7:; return;
label_97AA:; return;
label_97AC:; return;
label_97AF:; return;
label_97B2:; return;
label_97B5:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C7:; return;
label_97C9:; return;
label_97CC:; return;
label_97CE:; return;
label_97D1:; return;
label_97D3:; return;
label_97D6:; return;
label_97D8:; return;
label_97D9:; return;
label_97DA:; return;
label_97DC:; return;
label_97DF:; return;
label_97E0:; return;
label_97E1:; return;
label_97E2:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EB:; return;
label_97EC:; return;
label_97EF:; return;
label_97F1:; return;
label_97F4:; return;
label_97F7:; return;
label_97FA:; return;
label_97FD:; return;
label_97FE:; return;
label_9801:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980B:; return;
label_980E:; return;
label_9810:; return;
label_9813:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_982A:; return;
label_982D:; return;
label_9830:; return;
label_9833:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9844:; return;
label_9845:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984F:; return;
label_9852:; return;
label_9854:; return;
label_9857:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_9860:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986C:; return;
label_986F:; return;
label_9872:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987C:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9886:; return;
label_9889:; return;
label_988B:; return;
label_988D:; return;
label_988F:; return;
label_9891:; return;
label_9893:; return;
label_9895:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989D:; return;
label_98A0:; return;
label_98A2:; return;
label_98A5:; return;
label_98A8:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98B0:; return;
label_98B3:; return;
label_98B4:; return;
label_98B6:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C4:; return;
label_98C6:; return;
label_98C8:; return;
label_98CA:; return;
label_98CC:; return;
label_98CE:; return;
label_98D1:; return;
label_98D4:; return;
label_98D7:; return;
label_98DA:; return;
label_98DC:; return;
label_98DD:; return;
label_98E0:; return;
label_98E1:; return;
label_98E2:; return;
label_98E4:; return;
label_98E6:; return;
label_98E8:; return;
label_98EA:; return;
label_98EC:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F7:; return;
label_98F9:; return;
label_98FB:; return;
label_98FE:; return;
label_9901:; return;
label_9903:; return;
label_9905:; return;
label_9907:; return;
label_9909:; return;
label_990B:; return;
label_990C:; return;
label_990E:; return;
label_9911:; return;
label_9913:; return;
label_9915:; return;
label_9917:; return;
label_9919:; return;
label_991B:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992B:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9933:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9966:; return;
label_9968:; return;
label_996A:; return;
label_996D:; return;
label_996F:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9982:; return;
label_9984:; return;
label_9987:; return;
label_9989:; return;
label_998C:; return;
label_998E:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9999:; return;
label_999C:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B7:; return;
label_99BA:; return;
label_99BB:; return;
label_99BD:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E2:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99EF:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0F:; return;
label_9A12:; return;
label_9A13:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A22:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2D:; return;
label_9A30:; return;
label_9A33:; return;
label_9A36:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A42:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A54:; return;
label_9A56:; return;
label_9A58:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7D:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8E:; return;
label_9A91:; return;
label_9A94:; return;
label_9A97:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9AC1:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9ACB:; return;
label_9ACE:; return;
label_9AD1:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD8:; return;
label_9ADA:; return;
label_9ADC:; return;
label_9ADE:; return;
label_9AE0:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B16:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B27:; return;
label_9B29:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B43:; return;
label_9B45:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B53:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5B:; return;
label_9B5D:; return;
label_9B60:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B74:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B83:; return;
label_9B86:; return;
label_9B89:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9BA1:; return;
label_9BA4:; return;
label_9BA6:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAE:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCC:; return;
label_9BCE:; return;
label_9BD0:; return;
label_9BD2:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDE:; return;
label_9BDF:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF8:; return;
label_9BFA:; return;
label_9BFD:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C03:; return;
label_9C06:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C13:; return;
label_9C16:; return;
label_9C18:; return;
label_9C1A:; return;
label_9C1C:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3F:; return;
label_9C42:; return;
label_9C44:; return;
label_9C47:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C52:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5E:; return;
label_9C60:; return;
label_9C63:; return;
label_9C65:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C86:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C90:; return;
label_9C92:; return;
label_9C94:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAE:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB4:; return;
label_9CB6:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CEA:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF6:; return;
label_9CF7:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0A:; return;
label_9D0B:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D11:; return;
label_9D13:; return;
label_9D14:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D20:; return;
label_9D23:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D33:; return;
label_9D35:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D42:; return;
label_9D45:; return;
label_9D47:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D50:; return;
label_9D53:; return;
label_9D56:; return;
label_9D59:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D66:; return;
label_9D68:; return;
label_9D6A:; return;
label_9D6C:; return;
label_9D6E:; return;
label_9D70:; return;
label_9D72:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7E:; return;
label_9D80:; return;
label_9D82:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D90:; return;
label_9D92:; return;
label_9D94:; return;
label_9D95:; return;
label_9D97:; return;
label_9D9A:; return;
label_9D9C:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA2:; return;
label_9DA4:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB1:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DBA:; return;
label_9DBD:; return;
label_9DC0:; return;
label_9DC3:; return;
label_9DC6:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEB:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF5:; return;
label_9DF7:; return;
label_9DF9:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9E00:; return;
label_9E01:; return;
label_9E04:; return;
label_9E05:; return;
label_9E07:; return;
label_9E09:; return;
label_9E0C:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E11:; return;
label_9E13:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1A:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E22:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2C:; return;
label_9E2E:; return;
label_9E31:; return;
label_9E33:; return;
label_9E36:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3E:; return;
label_9E41:; return;
label_9E43:; return;
label_9E46:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E51:; return;
label_9E52:; return;
label_9E53:; return;
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
label_9E61:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E66:; return;
label_9E67:; return;
label_9E68:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E70:; return;
label_9E71:; return;
label_9E72:; return;
label_9E73:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E77:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7D:; return;
label_9E7E:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E81:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E86:; return;
label_9E87:; return;
label_9E88:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E92:; return;
label_9E93:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA6:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB3:; return;
label_9EB4:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EBF:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECC:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED8:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE2:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEE:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF4:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFB:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F02:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F13:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F19:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1D:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F23:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F28:; return;
label_9F29:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F31:; return;
label_9F32:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F42:; return;
label_9F43:; return;
label_9F44:; return;
label_9F45:; return;
label_9F47:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4B:; return;
label_9F4C:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6D:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
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
label_9F86:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8B:; return;
label_9F8D:; return;
label_9F8E:; return;
label_9F8F:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
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
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
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
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFD:; return;
label_9FFE:; return;
label_A000:; return;
label_A003:; return;
label_A005:; return;
label_A008:; return;
label_A00B:; return;
label_A00D:; return;
label_A00F:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01C:; return;
label_A01F:; return;
label_A021:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02B:; return;
label_A02D:; return;
label_A030:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A03A:; return;
label_A03B:; return;
label_A03D:; return;
label_A03F:; return;
label_A042:; return;
label_A045:; return;
label_A047:; return;
label_A049:; return;
label_A04C:; return;
label_A04E:; return;
label_A050:; return;
label_A053:; return;
label_A054:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A069:; return;
label_A06A:; return;
label_A06C:; return;
label_A06F:; return;
label_A070:; return;
label_A073:; return;
label_A074:; return;
label_A077:; return;
label_A079:; return;
label_A07B:; return;
label_A07D:; return;
label_A080:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A08A:; return;
label_A08C:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A096:; return;
label_A098:; return;
label_A099:; return;
label_A09C:; return;
label_A09E:; return;
label_A0A1:; return;
label_A0A4:; return;
label_A0A6:; return;
label_A0A8:; return;
label_A0AA:; return;
label_A0AB:; return;
label_A0AE:; return;
label_A0B0:; return;
label_A0B3:; return;
label_A0B6:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BC:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C2:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CA:; return;
label_A0CC:; return;
label_A0CF:; return;
label_A0D0:; return;
label_A0D3:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0DB:; return;
label_A0DC:; return;
label_A0DE:; return;
label_A0E0:; return;
label_A0E2:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E8:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0F0:; return;
label_A0F2:; return;
label_A0F4:; return;
label_A0F6:; return;
label_A0F9:; return;
label_A0FB:; return;
label_A0FE:; return;
label_A101:; return;
label_A104:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A111:; return;
label_A113:; return;
label_A116:; return;
label_A119:; return;
label_A11A:; return;
label_A11C:; return;
label_A11F:; return;
label_A120:; return;
label_A122:; return;
label_A124:; return;
label_A126:; return;
label_A129:; return;
label_A12B:; return;
label_A12C:; return;
label_A12D:; return;
label_A130:; return;
label_A132:; return;
label_A135:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13F:; return;
label_A140:; return;
label_A142:; return;
label_A143:; return;
label_A146:; return;
label_A148:; return;
label_A14A:; return;
label_A14D:; return;
label_A150:; return;
label_A152:; return;
label_A154:; return;
label_A157:; return;
label_A15A:; return;
label_A15C:; return;
label_A15E:; return;
label_A161:; return;
label_A164:; return;
label_A166:; return;
label_A168:; return;
label_A16B:; return;
label_A16E:; return;
label_A170:; return;
label_A172:; return;
label_A175:; return;
label_A176:; return;
label_A178:; return;
label_A17A:; return;
label_A17C:; return;
label_A17E:; return;
label_A181:; return;
label_A183:; return;
label_A186:; return;
label_A188:; return;
label_A18B:; return;
label_A18C:; return;
label_A18E:; return;
label_A190:; return;
label_A192:; return;
label_A194:; return;
label_A197:; return;
label_A198:; return;
label_A19A:; return;
label_A19D:; return;
label_A1A0:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A8:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AB:; return;
label_A1AC:; return;
label_A1AF:; return;
label_A1B0:; return;
label_A1B1:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B7:; return;
label_A1B9:; return;
label_A1BB:; return;
label_A1BE:; return;
label_A1C1:; return;
label_A1C4:; return;
label_A1C5:; return;
label_A1C7:; return;
label_A1C9:; return;
label_A1CC:; return;
label_A1CF:; return;
label_A1D2:; return;
label_A1D4:; return;
label_A1D6:; return;
label_A1D8:; return;
label_A1DB:; return;
label_A1DD:; return;
label_A1DF:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E8:; return;
label_A1EA:; return;
label_A1EC:; return;
label_A1EE:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F8:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A202:; return;
label_A205:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20D:; return;
label_A20E:; return;
label_A210:; return;
label_A211:; return;
label_A214:; return;
label_A217:; return;
label_A218:; return;
label_A21A:; return;
label_A21D:; return;
label_A21E:; return;
label_A221:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22D:; return;
label_A22E:; return;
label_A230:; return;
label_A233:; return;
label_A234:; return;
label_A237:; return;
label_A239:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A249:; return;
label_A24A:; return;
label_A24C:; return;
label_A24E:; return;
label_A250:; return;
label_A252:; return;
label_A254:; return;
label_A257:; return;
label_A258:; return;
label_A25A:; return;
label_A25C:; return;
label_A25E:; return;
label_A260:; return;
label_A262:; return;
label_A264:; return;
}

void func_9258_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9258_b12");
#endif
    func_9258_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9261_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9261_b12");
#endif
    func_9258_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9279_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9279_b12");
#endif
    func_9258_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9291_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9291_b12");
#endif
    func_9258_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_92A2_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92A2_b12");
#endif
    func_9258_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_92D4_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92D4_b12");
#endif
    func_9258_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_9509_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_951D;
        case 2: goto label_952F;
        case 3: goto label_953E;
    }
label_9509:;
    /* $9509: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_950B:;
    /* $950B: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_950D:;
    /* $950D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_950F:;
    /* $950F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_9511:;
    /* $9511: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9513:;
    /* $9513: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_952F;
label_9515:;
    /* $9515: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9517:;
    /* $9517: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9518:;
    /* $9518: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9519:;
    /* $9519: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_951A:;
    /* $951A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_951C:;
    /* $951C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_951D:;
    /* $951D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BB7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9520:;
    /* $9520: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9523:;
    /* $9523: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BBB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9526:;
    /* $9526: 99 */ maybe_trigger_vblank(5); nes_write((0x0618 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9529:;
    /* $9529: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_952A:;
    /* $952A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_952B:;
    /* $952B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_951D;
    }
label_952D:;
    /* $952D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_953E;
label_952F:; /* main_junk_block */
    /* $952F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9532:;
    /* $9532: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9535:;
    /* $9535: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0638 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9538:;
    /* $9538: 99 */ maybe_trigger_vblank(5); nes_write((0x0618 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_953B:;
    /* $953B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_953C:;
    /* $953C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_952F;
    }
label_953E:;
    /* $953E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9540:;
    /* $9540: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_9542:;
    /* $9542: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1544); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9545:;
    /* $9545: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9547:;
    /* $9547: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_950D;
    }
label_9549:;
    /* $9549: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9509_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9509_b12");
#endif
    func_9509_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_951D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_951D_b12");
#endif
    func_9509_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_952F_b12(void) { /* main_junk_block */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_952F_b12");
#endif
    func_9509_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_953E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_953E_b12");
#endif
    func_9509_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8DB_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8DB_b12");
#endif
label_A8DB:;
    /* $A8DB: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A8DC:;
    /* $A8DC: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8DF:;
    /* $A8DF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8E0:;
    /* $A8E0: EE */ maybe_trigger_vblank(6); { uint16_t a=0xEEF3; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E3:;
    /* $A8E3: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x03EE + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8E6:;
    /* $A8E6: EE */ maybe_trigger_vblank(6); { uint16_t a=0xF60B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8E9:;
    /* $A8E9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF6) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8EB:;
    /* $A8EB: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x03F6 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8EE:;
    /* $A8EE: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F0:;
    /* $A8F0: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF3 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F3:;
    /* $A8F3: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x03FE + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8F6:;
    /* $A8F6: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x060B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F9:;
    /* $A8F9: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x06) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8FB:;
    /* $A8FB: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x0306 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8FE:;
    /* $A8FE: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A900:; /* shadow_damage_table */
    /* $A900: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0EEB; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A903:;
    /* $A903: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A905:;
    /* $A905: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x030E + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A908:;
    /* $A908: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xEE0B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A90B:;
    /* $A90B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_A90D:;
    /* $A90D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5EE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A910:;
    /* $A910: EE */ maybe_trigger_vblank(6); { uint16_t a=0xF6ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A913:;
    /* $A913: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF6); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5F6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A918:;
    /* $A918: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xED + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91A:;
    /* $A91A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91D:;
    /* $A91D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A920:;
    /* $A920: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x06ED + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A923:;
    /* $A923: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_A925:;
    /* $A925: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF506 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A928:;
    /* $A928: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92A:;
    /* $A92A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0E0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92D:;
    /* $A92D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_A92F:;
    /* $A92F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF50E + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A932:;
    /* $A932: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xF6ED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A935:;
    /* $A935: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A92D;
    }
label_A937:;
    /* $A937: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A938:;
    /* $A938: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93A:;
    /* $A93A: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93C:;
    /* $A93C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93F:;
    /* $A93F: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A940:;
    /* $A940: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A943:;
    /* $A943: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A944:;
    /* $A944: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A946:;
    /* $A946: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xF8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A948:;
    /* $A948: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94A:;
    /* $A94A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94C:;
    /* $A94C: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94E:;
    /* $A94E: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A950:;
    /* $A950: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A952:;
    /* $A952: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A954:;
    /* $A954: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A957:;
    /* $A957: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA957); return;
}

void func_9155_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9155_b12");
#endif
label_9155:;
    /* $9155: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9157:;
    /* $9157: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_915A:;
    /* $915A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_915C:;
    /* $915C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_915E:;
    /* $915E: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_9160:;
    /* $9160: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9162:;
    /* $9162: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_9164:;
    /* $9164: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9166:;
    /* $9166: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9167:;
    /* $9167: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9169:;
    /* $9169: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_916B:;
    /* $916B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_916D:;
    /* $916D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_916F:;
    /* $916F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9171:;
    /* $9171: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_9173:;
    /* $9173: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9175:;
    /* $9175: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_9177:;
    /* $9177: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1179); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_917A:;
    /* $917A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_917C:;
    /* $917C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_917E:;
    /* $917E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9164;
    }
label_9180:;
    /* $9180: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9182:;
    /* $9182: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_9184:;
    /* $9184: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_91C8;
label_9186:;
    /* $9186: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_9188:;
    /* $9188: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_918A:;
    /* $918A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_918B:;
    /* $918B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_918C:;
    /* $918C: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_918E:;
    /* $918E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9190:;
    /* $9190: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1192); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9190, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9193:;
    /* $9193: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9195:;
    /* $9195: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_9197:;
    /* $9197: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_9199:;
    /* $9199: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_919B:;
    /* $919B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_919C:;
    /* $919C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x119E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x919C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_919F:;
    /* $919F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_91A0:;
    /* $91A0: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_91A2:;
    /* $91A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11A4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91A5:;
    /* $91A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_91A7:;
    /* $91A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9199;
    }
label_91A9:;
    /* $91A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x995C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91AC:;
    /* $91AC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_91AE:;
    /* $91AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91B1:;
    /* $91B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91B4:;
    /* $91B4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_91B6:;
    /* $91B6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91B6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91B9:;
    /* $91B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_91BB:;
    /* $91BB: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_91BD:;
    /* $91BD: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_91BF:;
    /* $91BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_91C1:;
    /* $91C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7E; FLAG_NZ(g_cpu.A);
label_91C3:;
    /* $91C3: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_91C5:;
    /* $91C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91C8:;
    /* $91C8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_91CA:;
    /* $91CA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C33 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91CD:;
    /* $91CD: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_91D0:;
    /* $91D0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_91D1:;
    /* $91D1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_91D2:;
    /* $91D2: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_91D4:;
    /* $91D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91CA;
    }
label_91D6:;
    /* $91D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_91D8:;
    /* $91D8: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_91DA:;
    /* $91DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_91DC:;
    /* $91DC: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_91DE:;
    /* $91DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_91E0:;
    /* $91E0: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_91E2:;
    /* $91E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_91E4:;
    /* $91E4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_91EC;
label_91E6:;
    /* $91E6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11E8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x99FA, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91E6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91E9:;
    /* $91E9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9258, 12); return;
label_91EC:;
    /* $91EC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11EE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91EC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91EF:;
    /* $91EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11F1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93FE, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91F2:;
    /* $91F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_91F4:;
    /* $91F4: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_91F6:;
    /* $91F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91F9:;
    /* $91F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FB:;
    /* $91FB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_91FD:;
    /* $91FD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_91FF:;
    /* $91FF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91EF;
    }
label_9201:;
    /* $9201: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_9204:;
    /* $9204: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB7; g_cpu.C=(g_cpu.A>=0xB7)?1:0; FLAG_NZ(r&0xFF); }
label_9206:;
    /* $9206: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9212;
label_9208:;
    /* $9208: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_920A:;
    /* $920A: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_920C:;
    /* $920C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x120E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x920C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_920F:;
    /* $920F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA593, 12); return;
label_9212:;
    /* $9212: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_9214:;
    /* $9214: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9216:;
    /* $9216: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9219:;
    /* $9219: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921A:;
    /* $921A: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921B:;
    /* $921B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921C:;
    /* $921C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921D:;
    /* $921D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9216;
    }
label_921F:;
    /* $921F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9221:;
    /* $9221: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9223:;
    /* $9223: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1225); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9223, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9226:;
    /* $9226: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9228:;
    /* $9228: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x122A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9228, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_922B:;
    /* $922B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_922D:;
    /* $922D: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_922F:;
    /* $922F: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_9231:;
    /* $9231: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9233:;
    /* $9233: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1235); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9233, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9236:;
    /* $9236: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9238:;
    /* $9238: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_923A:;
    /* $923A: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_923C:;
    /* $923C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x123E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x923C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_923F:;
    /* $923F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1241); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9242:;
    /* $9242: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9244:;
    /* $9244: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9236;
    }
label_9246:;
    /* $9246: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9248:;
    /* $9248: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_924A:;
    /* $924A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_924C:;
    /* $924C: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_924E:;
    /* $924E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_9250:;
    /* $9250: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_9252:;
    /* $9252: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1254); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9252, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9255:;
    /* $9255: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_9155;
label_9258:; return;
label_925A:; return;
label_925C:; return;
label_925E:; return;
label_9261:; return;
label_9263:; return;
label_9265:; return;
label_9267:; return;
label_9268:; return;
label_926A:; return;
label_926B:; return;
label_926E:; return;
label_9270:; return;
label_9272:; return;
label_9274:; return;
label_9276:; return;
label_9279:; return;
label_927B:; return;
label_927D:; return;
label_927F:; return;
label_9280:; return;
label_9282:; return;
label_9283:; return;
label_9286:; return;
label_9288:; return;
label_928A:; return;
label_928C:; return;
label_928E:; return;
label_9291:; return;
label_9293:; return;
label_9294:; return;
label_9296:; return;
label_9298:; return;
label_9299:; return;
label_929A:; return;
label_929C:; return;
label_929D:; return;
label_929F:; return;
label_92A0:; return;
label_92A2:; return;
label_92A5:; return;
label_92A8:; return;
label_92AB:; return;
label_92AE:; return;
label_92AF:; return;
label_92B0:; return;
label_92B1:; return;
label_92B2:; return;
label_92B3:; return;
label_92B4:; return;
label_92B6:; return;
label_92B8:; return;
label_92BA:; return;
label_92BD:; return;
label_92BF:; return;
label_92C2:; return;
label_92C4:; return;
label_92C6:; return;
label_92C7:; return;
label_92C8:; return;
label_92C9:; return;
label_92CB:; return;
label_92CC:; return;
label_92CE:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D6:; return;
label_92D7:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E0:; return;
label_92E3:; return;
label_92E6:; return;
label_92E8:; return;
label_92EB:; return;
label_92EC:; return;
label_92ED:; return;
label_92EE:; return;
label_92EF:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F9:; return;
label_92FB:; return;
label_92FD:; return;
label_9300:; return;
label_9303:; return;
label_9305:; return;
label_9306:; return;
label_9308:; return;
label_9309:; return;
label_930B:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9313:; return;
label_9316:; return;
label_9318:; return;
label_931B:; return;
label_931D:; return;
label_931F:; return;
label_9321:; return;
label_9323:; return;
label_9324:; return;
label_9325:; return;
label_9327:; return;
label_9328:; return;
label_932B:; return;
label_932D:; return;
label_932F:; return;
label_9331:; return;
label_9333:; return;
label_9335:; return;
label_9338:; return;
label_933A:; return;
label_933C:; return;
label_933F:; return;
label_9341:; return;
label_9343:; return;
label_9346:; return;
label_9348:; return;
label_9349:; return;
label_934B:; return;
label_934D:; return;
label_934E:; return;
label_9350:; return;
label_9351:; return;
label_9352:; return;
label_9354:; return;
label_9356:; return;
label_9359:; return;
label_935B:; return;
label_935D:; return;
label_935F:; return;
label_9361:; return;
label_9362:; return;
label_9365:; return;
label_9368:; return;
label_9369:; return;
label_936B:; return;
label_936D:; return;
label_936F:; return;
label_9371:; return;
label_9374:; return;
label_9377:; return;
label_937A:; return;
label_937B:; return;
label_937D:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9386:; return;
label_9388:; return;
label_938B:; return;
label_938C:; return;
label_938E:; return;
label_9390:; return;
label_9393:; return;
label_9394:; return;
label_9397:; return;
label_9399:; return;
label_939B:; return;
label_939E:; return;
label_93A0:; return;
label_93A2:; return;
label_93A4:; return;
label_93A5:; return;
label_93A7:; return;
label_93A9:; return;
label_93AC:; return;
label_93AE:; return;
label_93B1:; return;
label_93B3:; return;
label_93B6:; return;
label_93B8:; return;
label_93BA:; return;
label_93BC:; return;
label_93BE:; return;
label_93C1:; return;
label_93C3:; return;
label_93C4:; return;
label_93C6:; return;
label_93C9:; return;
label_93CA:; return;
label_93CC:; return;
label_93CF:; return;
label_93D1:; return;
label_93D2:; return;
label_93D4:; return;
label_93D7:; return;
label_93D8:; return;
label_93DA:; return;
label_93DC:; return;
label_93DE:; return;
label_93E0:; return;
label_93E1:; return;
label_93E3:; return;
label_93E6:; return;
label_93E8:; return;
label_93E9:; return;
label_93EB:; return;
label_93EE:; return;
label_93F0:; return;
label_93F3:; return;
label_93F5:; return;
label_93F8:; return;
label_93FA:; return;
label_93FD:; return;
label_93FE:; return;
label_9400:; return;
label_9402:; return;
label_9404:; return;
label_9406:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940F:; return;
label_9410:; return;
label_9412:; return;
label_9415:; return;
label_9417:; return;
label_9419:; return;
label_941C:; return;
label_941D:; return;
label_941F:; return;
label_9421:; return;
label_9423:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942D:; return;
label_942F:; return;
label_9432:; return;
label_9435:; return;
label_9437:; return;
label_943A:; return;
label_943D:; return;
label_943F:; return;
label_9440:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9449:; return;
label_944B:; return;
label_944D:; return;
label_9450:; return;
label_9453:; return;
label_9455:; return;
label_9457:; return;
label_9458:; return;
label_945A:; return;
label_945C:; return;
label_945E:; return;
label_9460:; return;
label_9463:; return;
label_9466:; return;
label_9468:; return;
label_9469:; return;
label_946B:; return;
label_946C:; return;
label_946F:; return;
label_9471:; return;
label_9474:; return;
label_9477:; return;
label_9478:; return;
label_947A:; return;
label_947D:; return;
label_947F:; return;
label_9482:; return;
label_9485:; return;
label_9486:; return;
label_9488:; return;
label_948A:; return;
label_948D:; return;
label_948F:; return;
label_9492:; return;
label_9494:; return;
label_9496:; return;
label_9499:; return;
label_949C:; return;
label_949E:; return;
label_94A1:; return;
label_94A4:; return;
label_94A7:; return;
label_94AA:; return;
label_94AC:; return;
label_94AE:; return;
label_94AF:; return;
label_94B1:; return;
label_94B4:; return;
label_94B6:; return;
label_94B9:; return;
label_94BC:; return;
label_94BE:; return;
label_94C0:; return;
label_94C2:; return;
label_94C4:; return;
label_94C7:; return;
label_94CA:; return;
label_94CD:; return;
label_94CF:; return;
label_94D1:; return;
label_94D3:; return;
label_94D6:; return;
label_94D9:; return;
label_94DB:; return;
label_94DD:; return;
label_94DE:; return;
label_94E0:; return;
label_94E3:; return;
label_94E6:; return;
label_94E9:; return;
label_94EB:; return;
label_94EE:; return;
label_94F0:; return;
label_94F2:; return;
label_94F4:; return;
label_94F7:; return;
label_94F9:; return;
label_94FC:; return;
label_94FE:; return;
label_9501:; return;
label_9503:; return;
label_9506:; return;
label_9509:; return;
label_950B:; return;
label_950D:; return;
label_950F:; return;
label_9511:; return;
label_9513:; return;
label_9515:; return;
label_9517:; return;
label_9518:; return;
label_9519:; return;
label_951A:; return;
label_951C:; return;
label_951D:; return;
label_9520:; return;
label_9523:; return;
label_9526:; return;
label_9529:; return;
label_952A:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9532:; return;
label_9535:; return;
label_9538:; return;
label_953B:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9545:; return;
label_9547:; return;
label_9549:; return;
label_954A:; return;
label_954C:; return;
label_954E:; return;
label_9550:; return;
label_9552:; return;
label_9554:; return;
label_9557:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955E:; return;
label_9561:; return;
label_9562:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956C:; return;
label_956E:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_9580:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_958A:; return;
label_958D:; return;
label_958F:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959C:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A8:; return;
label_95AB:; return;
label_95AD:; return;
label_95AF:; return;
label_95B1:; return;
label_95B3:; return;
label_95B6:; return;
label_95B9:; return;
label_95BB:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C4:; return;
label_95C6:; return;
label_95C8:; return;
label_95CA:; return;
label_95CD:; return;
label_95D0:; return;
label_95D2:; return;
label_95D5:; return;
label_95D8:; return;
label_95DA:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E3:; return;
label_95E5:; return;
label_95E8:; return;
label_95EB:; return;
label_95ED:; return;
label_95EF:; return;
label_95F1:; return;
label_95F3:; return;
label_95F5:; return;
label_95F7:; return;
label_95F9:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9602:; return;
label_9604:; return;
label_9607:; return;
label_960A:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_961B:; return;
label_961E:; return;
label_9620:; return;
label_9622:; return;
label_9625:; return;
label_9627:; return;
label_9629:; return;
label_962B:; return;
label_962D:; return;
label_9630:; return;
label_9633:; return;
label_9635:; return;
label_9637:; return;
label_9639:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9644:; return;
label_9647:; return;
label_964A:; return;
label_964D:; return;
label_964F:; return;
label_9652:; return;
label_9654:; return;
label_9656:; return;
label_9658:; return;
label_965A:; return;
label_965C:; return;
label_965E:; return;
label_9661:; return;
label_9663:; return;
label_9666:; return;
label_9669:; return;
label_966C:; return;
label_966D:; return;
label_966F:; return;
label_9671:; return;
label_9673:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967C:; return;
label_967E:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968C:; return;
label_968F:; return;
label_9691:; return;
label_9693:; return;
label_9696:; return;
label_9699:; return;
label_969C:; return;
label_969E:; return;
label_96A0:; return;
label_96A3:; return;
label_96A5:; return;
label_96A7:; return;
label_96A9:; return;
label_96AC:; return;
label_96AE:; return;
label_96B0:; return;
label_96B3:; return;
label_96B6:; return;
label_96B8:; return;
label_96BA:; return;
label_96BC:; return;
label_96BE:; return;
label_96C0:; return;
label_96C2:; return;
label_96C4:; return;
label_96C6:; return;
label_96C8:; return;
label_96CA:; return;
label_96CD:; return;
label_96CF:; return;
label_96D2:; return;
label_96D5:; return;
label_96D6:; return;
label_96D8:; return;
label_96DA:; return;
label_96DD:; return;
label_96E0:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F6:; return;
label_96F9:; return;
label_96FC:; return;
label_96FE:; return;
label_9700:; return;
label_9702:; return;
label_9705:; return;
label_9708:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9712:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971E:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9726:; return;
label_9729:; return;
label_972C:; return;
label_972E:; return;
label_9731:; return;
label_9732:; return;
label_9733:; return;
label_9736:; return;
label_9739:; return;
label_973B:; return;
label_973C:; return;
label_973F:; return;
label_9742:; return;
label_9743:; return;
label_9745:; return;
label_9747:; return;
label_9749:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9752:; return;
label_9755:; return;
label_9756:; return;
label_9757:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9761:; return;
label_9762:; return;
label_9764:; return;
label_9766:; return;
label_9769:; return;
label_976C:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9778:; return;
label_977B:; return;
label_977E:; return;
label_977F:; return;
label_9781:; return;
label_9783:; return;
label_9786:; return;
label_9788:; return;
label_978B:; return;
label_978E:; return;
label_9791:; return;
label_9794:; return;
label_9795:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A2:; return;
label_97A5:; return;
label_97A7:; return;
label_97AA:; return;
label_97AC:; return;
label_97AF:; return;
label_97B2:; return;
label_97B5:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C7:; return;
label_97C9:; return;
label_97CC:; return;
label_97CE:; return;
label_97D1:; return;
label_97D3:; return;
label_97D6:; return;
label_97D8:; return;
label_97D9:; return;
label_97DA:; return;
label_97DC:; return;
label_97DF:; return;
label_97E0:; return;
label_97E1:; return;
label_97E2:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EB:; return;
label_97EC:; return;
label_97EF:; return;
label_97F1:; return;
label_97F4:; return;
label_97F7:; return;
label_97FA:; return;
label_97FD:; return;
label_97FE:; return;
label_9801:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980B:; return;
label_980E:; return;
label_9810:; return;
label_9813:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_982A:; return;
label_982D:; return;
label_9830:; return;
label_9833:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9844:; return;
label_9845:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984F:; return;
label_9852:; return;
label_9854:; return;
label_9857:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_9860:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986C:; return;
label_986F:; return;
label_9872:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987C:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9886:; return;
label_9889:; return;
label_988B:; return;
label_988D:; return;
label_988F:; return;
label_9891:; return;
label_9893:; return;
label_9895:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989D:; return;
label_98A0:; return;
label_98A2:; return;
label_98A5:; return;
label_98A8:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98B0:; return;
label_98B3:; return;
label_98B4:; return;
label_98B6:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C4:; return;
label_98C6:; return;
label_98C8:; return;
label_98CA:; return;
label_98CC:; return;
label_98CE:; return;
label_98D1:; return;
label_98D4:; return;
label_98D7:; return;
label_98DA:; return;
label_98DC:; return;
label_98DD:; return;
label_98E0:; return;
label_98E1:; return;
label_98E2:; return;
label_98E4:; return;
label_98E6:; return;
label_98E8:; return;
label_98EA:; return;
label_98EC:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F7:; return;
label_98F9:; return;
label_98FB:; return;
label_98FE:; return;
label_9901:; return;
label_9903:; return;
label_9905:; return;
label_9907:; return;
label_9909:; return;
label_990B:; return;
label_990C:; return;
label_990E:; return;
label_9911:; return;
label_9913:; return;
label_9915:; return;
label_9917:; return;
label_9919:; return;
label_991B:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992B:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9933:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9966:; return;
label_9968:; return;
label_996A:; return;
label_996D:; return;
label_996F:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9982:; return;
label_9984:; return;
label_9987:; return;
label_9989:; return;
label_998C:; return;
label_998E:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9999:; return;
label_999C:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B7:; return;
label_99BA:; return;
label_99BB:; return;
label_99BD:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E2:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99EF:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0F:; return;
label_9A12:; return;
label_9A13:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A22:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2D:; return;
label_9A30:; return;
label_9A33:; return;
label_9A36:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A42:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A54:; return;
label_9A56:; return;
label_9A58:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7D:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8E:; return;
label_9A91:; return;
label_9A94:; return;
label_9A97:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9AC1:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9ACB:; return;
label_9ACE:; return;
label_9AD1:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD8:; return;
label_9ADA:; return;
label_9ADC:; return;
label_9ADE:; return;
label_9AE0:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B16:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B27:; return;
label_9B29:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B43:; return;
label_9B45:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B53:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5B:; return;
label_9B5D:; return;
label_9B60:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B74:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B83:; return;
label_9B86:; return;
label_9B89:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9BA1:; return;
label_9BA4:; return;
label_9BA6:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAE:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCC:; return;
label_9BCE:; return;
label_9BD0:; return;
label_9BD2:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDE:; return;
label_9BDF:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF8:; return;
label_9BFA:; return;
label_9BFD:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C03:; return;
label_9C06:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C13:; return;
label_9C16:; return;
label_9C18:; return;
label_9C1A:; return;
label_9C1C:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3F:; return;
label_9C42:; return;
label_9C44:; return;
label_9C47:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C52:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5E:; return;
label_9C60:; return;
label_9C63:; return;
label_9C65:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C86:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C90:; return;
label_9C92:; return;
label_9C94:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAE:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB4:; return;
label_9CB6:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CEA:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF6:; return;
label_9CF7:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0A:; return;
label_9D0B:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D11:; return;
label_9D13:; return;
label_9D14:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D20:; return;
label_9D23:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D33:; return;
label_9D35:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D42:; return;
label_9D45:; return;
label_9D47:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D50:; return;
label_9D53:; return;
label_9D56:; return;
label_9D59:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D66:; return;
label_9D68:; return;
label_9D6A:; return;
label_9D6C:; return;
label_9D6E:; return;
label_9D70:; return;
label_9D72:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7E:; return;
label_9D80:; return;
label_9D82:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D90:; return;
label_9D92:; return;
label_9D94:; return;
label_9D95:; return;
label_9D97:; return;
label_9D9A:; return;
label_9D9C:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA2:; return;
label_9DA4:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB1:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DBA:; return;
label_9DBD:; return;
label_9DC0:; return;
label_9DC3:; return;
label_9DC6:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEB:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF5:; return;
label_9DF7:; return;
label_9DF9:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9E00:; return;
label_9E01:; return;
label_9E04:; return;
label_9E05:; return;
label_9E07:; return;
label_9E09:; return;
label_9E0C:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E11:; return;
label_9E13:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1A:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E22:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2C:; return;
label_9E2E:; return;
label_9E31:; return;
label_9E33:; return;
label_9E36:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3E:; return;
label_9E41:; return;
label_9E43:; return;
label_9E46:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E51:; return;
label_9E52:; return;
label_9E53:; return;
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
label_9E61:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E66:; return;
label_9E67:; return;
label_9E68:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E70:; return;
label_9E71:; return;
label_9E72:; return;
label_9E73:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E77:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7D:; return;
label_9E7E:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E81:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E86:; return;
label_9E87:; return;
label_9E88:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E92:; return;
label_9E93:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA6:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB3:; return;
label_9EB4:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EBF:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECC:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED8:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE2:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEE:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF4:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFB:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F02:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F13:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F19:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1D:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F23:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F28:; return;
label_9F29:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F31:; return;
label_9F32:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F42:; return;
label_9F43:; return;
label_9F44:; return;
label_9F45:; return;
label_9F47:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4B:; return;
label_9F4C:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6D:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
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
label_9F86:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8B:; return;
label_9F8D:; return;
label_9F8E:; return;
label_9F8F:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
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
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
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
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFD:; return;
label_9FFE:; return;
label_A000:; return;
label_A003:; return;
label_A005:; return;
label_A008:; return;
label_A00B:; return;
label_A00D:; return;
label_A00F:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01C:; return;
label_A01F:; return;
label_A021:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02B:; return;
label_A02D:; return;
label_A030:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A03A:; return;
label_A03B:; return;
label_A03D:; return;
label_A03F:; return;
label_A042:; return;
label_A045:; return;
label_A047:; return;
label_A049:; return;
label_A04C:; return;
label_A04E:; return;
label_A050:; return;
label_A053:; return;
label_A054:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A069:; return;
label_A06A:; return;
label_A06C:; return;
label_A06F:; return;
label_A070:; return;
label_A073:; return;
label_A074:; return;
label_A077:; return;
label_A079:; return;
label_A07B:; return;
label_A07D:; return;
label_A080:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A08A:; return;
label_A08C:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A096:; return;
label_A098:; return;
label_A099:; return;
label_A09C:; return;
label_A09E:; return;
label_A0A1:; return;
label_A0A4:; return;
label_A0A6:; return;
label_A0A8:; return;
label_A0AA:; return;
label_A0AB:; return;
label_A0AE:; return;
label_A0B0:; return;
label_A0B3:; return;
label_A0B6:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BC:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C2:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CA:; return;
label_A0CC:; return;
label_A0CF:; return;
label_A0D0:; return;
label_A0D3:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0DB:; return;
label_A0DC:; return;
label_A0DE:; return;
label_A0E0:; return;
label_A0E2:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E8:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0F0:; return;
label_A0F2:; return;
label_A0F4:; return;
label_A0F6:; return;
label_A0F9:; return;
label_A0FB:; return;
label_A0FE:; return;
label_A101:; return;
label_A104:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A111:; return;
label_A113:; return;
label_A116:; return;
label_A119:; return;
label_A11A:; return;
label_A11C:; return;
label_A11F:; return;
label_A120:; return;
label_A122:; return;
label_A124:; return;
label_A126:; return;
label_A129:; return;
label_A12B:; return;
label_A12C:; return;
label_A12D:; return;
label_A130:; return;
label_A132:; return;
label_A135:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13F:; return;
label_A140:; return;
label_A142:; return;
label_A143:; return;
label_A146:; return;
label_A148:; return;
label_A14A:; return;
label_A14D:; return;
label_A150:; return;
label_A152:; return;
label_A154:; return;
label_A157:; return;
label_A15A:; return;
label_A15C:; return;
label_A15E:; return;
label_A161:; return;
label_A164:; return;
label_A166:; return;
label_A168:; return;
}

static void func_96FC_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9708;
    }
label_96FC:;
    /* $96FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_96FE:;
    /* $96FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A);
label_9700:;
    /* $9700: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9708;
label_9702:;
    /* $9702: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1704); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9705:;
    /* $9705: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_96FC;
label_9708:;
    /* $9708: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9212, 12); return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9712:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971E:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9726:; return;
label_9729:; return;
label_972C:; return;
label_972E:; return;
label_9731:; return;
label_9732:; return;
label_9733:; return;
label_9736:; return;
label_9739:; return;
label_973B:; return;
label_973C:; return;
label_973F:; return;
label_9742:; return;
label_9743:; return;
label_9745:; return;
label_9747:; return;
label_9749:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9752:; return;
label_9755:; return;
label_9756:; return;
label_9757:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9761:; return;
label_9762:; return;
label_9764:; return;
label_9766:; return;
label_9769:; return;
label_976C:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9778:; return;
label_977B:; return;
label_977E:; return;
label_977F:; return;
label_9781:; return;
label_9783:; return;
label_9786:; return;
label_9788:; return;
label_978B:; return;
label_978E:; return;
label_9791:; return;
label_9794:; return;
label_9795:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A2:; return;
label_97A5:; return;
label_97A7:; return;
label_97AA:; return;
label_97AC:; return;
label_97AF:; return;
label_97B2:; return;
label_97B5:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C7:; return;
label_97C9:; return;
label_97CC:; return;
label_97CE:; return;
label_97D1:; return;
label_97D3:; return;
label_97D6:; return;
label_97D8:; return;
label_97D9:; return;
label_97DA:; return;
label_97DC:; return;
label_97DF:; return;
label_97E0:; return;
label_97E1:; return;
label_97E2:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EB:; return;
label_97EC:; return;
label_97EF:; return;
label_97F1:; return;
label_97F4:; return;
label_97F7:; return;
label_97FA:; return;
label_97FD:; return;
label_97FE:; return;
label_9801:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980B:; return;
label_980E:; return;
label_9810:; return;
label_9813:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_982A:; return;
label_982D:; return;
label_9830:; return;
label_9833:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9844:; return;
label_9845:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984F:; return;
label_9852:; return;
label_9854:; return;
label_9857:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_9860:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986C:; return;
label_986F:; return;
label_9872:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987C:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9886:; return;
label_9889:; return;
label_988B:; return;
label_988D:; return;
label_988F:; return;
label_9891:; return;
label_9893:; return;
label_9895:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989D:; return;
label_98A0:; return;
label_98A2:; return;
label_98A5:; return;
label_98A8:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98B0:; return;
label_98B3:; return;
label_98B4:; return;
label_98B6:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C4:; return;
label_98C6:; return;
label_98C8:; return;
label_98CA:; return;
label_98CC:; return;
label_98CE:; return;
label_98D1:; return;
label_98D4:; return;
label_98D7:; return;
label_98DA:; return;
label_98DC:; return;
label_98DD:; return;
label_98E0:; return;
label_98E1:; return;
label_98E2:; return;
label_98E4:; return;
label_98E6:; return;
label_98E8:; return;
label_98EA:; return;
label_98EC:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F7:; return;
label_98F9:; return;
label_98FB:; return;
label_98FE:; return;
label_9901:; return;
label_9903:; return;
label_9905:; return;
label_9907:; return;
label_9909:; return;
label_990B:; return;
label_990C:; return;
label_990E:; return;
label_9911:; return;
label_9913:; return;
label_9915:; return;
label_9917:; return;
label_9919:; return;
label_991B:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992B:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9933:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9966:; return;
label_9968:; return;
label_996A:; return;
label_996D:; return;
label_996F:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9982:; return;
label_9984:; return;
label_9987:; return;
label_9989:; return;
label_998C:; return;
label_998E:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9999:; return;
label_999C:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B7:; return;
label_99BA:; return;
label_99BB:; return;
label_99BD:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E2:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99EF:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0F:; return;
label_9A12:; return;
label_9A13:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A22:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2D:; return;
label_9A30:; return;
label_9A33:; return;
label_9A36:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A42:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A54:; return;
label_9A56:; return;
label_9A58:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7D:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8E:; return;
label_9A91:; return;
label_9A94:; return;
label_9A97:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9AC1:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9ACB:; return;
label_9ACE:; return;
label_9AD1:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD8:; return;
label_9ADA:; return;
label_9ADC:; return;
label_9ADE:; return;
label_9AE0:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B16:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B27:; return;
label_9B29:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B43:; return;
label_9B45:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B53:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5B:; return;
label_9B5D:; return;
label_9B60:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B74:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B83:; return;
label_9B86:; return;
label_9B89:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9BA1:; return;
label_9BA4:; return;
label_9BA6:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAE:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCC:; return;
label_9BCE:; return;
label_9BD0:; return;
label_9BD2:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDE:; return;
label_9BDF:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF8:; return;
label_9BFA:; return;
label_9BFD:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C03:; return;
label_9C06:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C13:; return;
label_9C16:; return;
label_9C18:; return;
label_9C1A:; return;
label_9C1C:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3F:; return;
label_9C42:; return;
label_9C44:; return;
label_9C47:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C52:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5E:; return;
label_9C60:; return;
label_9C63:; return;
label_9C65:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C86:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C90:; return;
label_9C92:; return;
label_9C94:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAE:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB4:; return;
label_9CB6:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CEA:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF6:; return;
label_9CF7:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0A:; return;
label_9D0B:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D11:; return;
label_9D13:; return;
label_9D14:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D20:; return;
label_9D23:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D33:; return;
label_9D35:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D42:; return;
label_9D45:; return;
label_9D47:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D50:; return;
label_9D53:; return;
label_9D56:; return;
label_9D59:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D66:; return;
label_9D68:; return;
label_9D6A:; return;
label_9D6C:; return;
label_9D6E:; return;
label_9D70:; return;
label_9D72:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7E:; return;
label_9D80:; return;
label_9D82:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D90:; return;
label_9D92:; return;
label_9D94:; return;
label_9D95:; return;
label_9D97:; return;
label_9D9A:; return;
label_9D9C:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA2:; return;
label_9DA4:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB1:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DBA:; return;
label_9DBD:; return;
label_9DC0:; return;
label_9DC3:; return;
label_9DC6:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEB:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF5:; return;
label_9DF7:; return;
label_9DF9:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9E00:; return;
label_9E01:; return;
label_9E04:; return;
label_9E05:; return;
label_9E07:; return;
label_9E09:; return;
label_9E0C:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E11:; return;
label_9E13:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1A:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E22:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2C:; return;
label_9E2E:; return;
label_9E31:; return;
label_9E33:; return;
label_9E36:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3E:; return;
label_9E41:; return;
label_9E43:; return;
label_9E46:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E51:; return;
label_9E52:; return;
label_9E53:; return;
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
label_9E61:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E66:; return;
label_9E67:; return;
label_9E68:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E70:; return;
label_9E71:; return;
label_9E72:; return;
label_9E73:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E77:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7D:; return;
label_9E7E:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E81:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E86:; return;
label_9E87:; return;
label_9E88:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E92:; return;
label_9E93:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA6:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB3:; return;
label_9EB4:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EBF:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECC:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED8:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE2:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEE:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF4:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFB:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F02:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F13:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F19:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1D:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F23:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F28:; return;
label_9F29:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F31:; return;
label_9F32:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F42:; return;
label_9F43:; return;
label_9F44:; return;
label_9F45:; return;
label_9F47:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4B:; return;
label_9F4C:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6D:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
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
label_9F86:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8B:; return;
label_9F8D:; return;
label_9F8E:; return;
label_9F8F:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
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
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
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
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFD:; return;
label_9FFE:; return;
label_A000:; return;
label_A003:; return;
label_A005:; return;
label_A008:; return;
label_A00B:; return;
label_A00D:; return;
label_A00F:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01C:; return;
label_A01F:; return;
label_A021:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02B:; return;
label_A02D:; return;
label_A030:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A03A:; return;
label_A03B:; return;
label_A03D:; return;
label_A03F:; return;
label_A042:; return;
label_A045:; return;
label_A047:; return;
label_A049:; return;
label_A04C:; return;
label_A04E:; return;
label_A050:; return;
label_A053:; return;
label_A054:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A069:; return;
label_A06A:; return;
label_A06C:; return;
label_A06F:; return;
label_A070:; return;
label_A073:; return;
label_A074:; return;
label_A077:; return;
label_A079:; return;
label_A07B:; return;
label_A07D:; return;
label_A080:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A08A:; return;
label_A08C:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A096:; return;
label_A098:; return;
label_A099:; return;
label_A09C:; return;
label_A09E:; return;
label_A0A1:; return;
label_A0A4:; return;
label_A0A6:; return;
label_A0A8:; return;
label_A0AA:; return;
label_A0AB:; return;
label_A0AE:; return;
label_A0B0:; return;
label_A0B3:; return;
label_A0B6:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BC:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C2:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C8:; return;
label_A0CA:; return;
label_A0CC:; return;
label_A0CF:; return;
label_A0D0:; return;
label_A0D3:; return;
label_A0D6:; return;
label_A0D8:; return;
label_A0DB:; return;
label_A0DC:; return;
label_A0DE:; return;
label_A0E0:; return;
label_A0E2:; return;
label_A0E5:; return;
label_A0E7:; return;
label_A0E8:; return;
label_A0EB:; return;
label_A0ED:; return;
label_A0F0:; return;
label_A0F2:; return;
label_A0F4:; return;
label_A0F6:; return;
label_A0F9:; return;
label_A0FB:; return;
label_A0FE:; return;
label_A101:; return;
label_A104:; return;
label_A106:; return;
label_A108:; return;
label_A10A:; return;
label_A10C:; return;
label_A10E:; return;
label_A111:; return;
label_A113:; return;
label_A116:; return;
label_A119:; return;
label_A11A:; return;
label_A11C:; return;
label_A11F:; return;
label_A120:; return;
label_A122:; return;
label_A124:; return;
label_A126:; return;
label_A129:; return;
label_A12B:; return;
label_A12C:; return;
label_A12D:; return;
label_A130:; return;
label_A132:; return;
label_A135:; return;
label_A136:; return;
label_A138:; return;
label_A13A:; return;
label_A13C:; return;
label_A13F:; return;
label_A140:; return;
label_A142:; return;
label_A143:; return;
label_A146:; return;
label_A148:; return;
label_A14A:; return;
label_A14D:; return;
label_A150:; return;
label_A152:; return;
label_A154:; return;
label_A157:; return;
label_A15A:; return;
label_A15C:; return;
label_A15E:; return;
label_A161:; return;
label_A164:; return;
label_A166:; return;
label_A168:; return;
label_A16B:; return;
label_A16E:; return;
label_A170:; return;
label_A172:; return;
label_A175:; return;
label_A176:; return;
label_A178:; return;
label_A17A:; return;
label_A17C:; return;
label_A17E:; return;
label_A181:; return;
label_A183:; return;
label_A186:; return;
label_A188:; return;
label_A18B:; return;
label_A18C:; return;
label_A18E:; return;
label_A190:; return;
label_A192:; return;
label_A194:; return;
label_A197:; return;
label_A198:; return;
label_A19A:; return;
label_A19D:; return;
label_A1A0:; return;
label_A1A2:; return;
label_A1A5:; return;
label_A1A8:; return;
label_A1A9:; return;
label_A1AA:; return;
label_A1AB:; return;
label_A1AC:; return;
label_A1AF:; return;
label_A1B0:; return;
label_A1B1:; return;
label_A1B2:; return;
label_A1B3:; return;
label_A1B4:; return;
label_A1B7:; return;
label_A1B9:; return;
label_A1BB:; return;
label_A1BE:; return;
label_A1C1:; return;
label_A1C4:; return;
label_A1C5:; return;
label_A1C7:; return;
label_A1C9:; return;
label_A1CC:; return;
label_A1CF:; return;
label_A1D2:; return;
label_A1D4:; return;
label_A1D6:; return;
label_A1D8:; return;
label_A1DB:; return;
label_A1DD:; return;
label_A1DF:; return;
label_A1E2:; return;
label_A1E5:; return;
label_A1E8:; return;
label_A1EA:; return;
label_A1EC:; return;
label_A1EE:; return;
label_A1F1:; return;
label_A1F2:; return;
label_A1F5:; return;
label_A1F6:; return;
label_A1F8:; return;
label_A1FB:; return;
label_A1FC:; return;
label_A1FE:; return;
label_A1FF:; return;
label_A202:; return;
label_A205:; return;
label_A206:; return;
label_A208:; return;
label_A20A:; return;
label_A20D:; return;
label_A20E:; return;
label_A210:; return;
label_A211:; return;
label_A214:; return;
label_A217:; return;
label_A218:; return;
label_A21A:; return;
label_A21D:; return;
label_A21E:; return;
label_A221:; return;
label_A222:; return;
label_A224:; return;
label_A226:; return;
label_A228:; return;
label_A22A:; return;
label_A22D:; return;
label_A22E:; return;
label_A230:; return;
label_A233:; return;
label_A234:; return;
label_A237:; return;
label_A239:; return;
label_A23A:; return;
label_A23C:; return;
label_A23E:; return;
label_A240:; return;
label_A242:; return;
label_A244:; return;
label_A246:; return;
label_A249:; return;
label_A24A:; return;
label_A24C:; return;
label_A24E:; return;
label_A250:; return;
label_A252:; return;
label_A254:; return;
label_A257:; return;
label_A258:; return;
label_A25A:; return;
label_A25C:; return;
label_A25E:; return;
label_A260:; return;
label_A262:; return;
label_A264:; return;
label_A266:; return;
label_A269:; return;
label_A26B:; return;
label_A26E:; return;
label_A271:; return;
label_A272:; return;
label_A274:; return;
label_A276:; return;
label_A278:; return;
label_A27B:; return;
label_A27D:; return;
label_A280:; return;
label_A282:; return;
label_A284:; return;
label_A286:; return;
label_A288:; return;
label_A28A:; return;
label_A28D:; return;
label_A28F:; return;
label_A290:; return;
label_A293:; return;
label_A294:; return;
label_A297:; return;
label_A298:; return;
label_A29A:; return;
label_A29C:; return;
label_A29E:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A4:; return;
label_A2A7:; return;
label_A2A9:; return;
label_A2AA:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B5:; return;
label_A2B7:; return;
label_A2B9:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BE:; return;
label_A2C1:; return;
label_A2C3:; return;
label_A2C6:; return;
label_A2C8:; return;
label_A2CA:; return;
label_A2CC:; return;
label_A2CF:; return;
label_A2D2:; return;
label_A2D5:; return;
label_A2D7:; return;
label_A2DA:; return;
label_A2DB:; return;
label_A2DD:; return;
label_A2DE:; return;
label_A2DF:; return;
label_A2E0:; return;
label_A2E1:; return;
label_A2E2:; return;
label_A2E3:; return;
label_A2E5:; return;
label_A2E6:; return;
label_A2E7:; return;
label_A2E8:; return;
label_A2E9:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EE:; return;
label_A2F0:; return;
label_A2F2:; return;
label_A2F3:; return;
label_A2F5:; return;
label_A2F6:; return;
label_A2F7:; return;
label_A2F8:; return;
label_A2F9:; return;
label_A2FA:; return;
label_A2FC:; return;
label_A2FE:; return;
label_A300:; return;
label_A301:; return;
label_A304:; return;
label_A305:; return;
label_A306:; return;
label_A307:; return;
label_A309:; return;
label_A30A:; return;
label_A30B:; return;
label_A30D:; return;
label_A30E:; return;
label_A30F:; return;
label_A310:; return;
label_A311:; return;
label_A312:; return;
label_A313:; return;
label_A315:; return;
label_A316:; return;
label_A318:; return;
label_A31A:; return;
label_A31C:; return;
label_A31E:; return;
label_A320:; return;
label_A321:; return;
label_A323:; return;
label_A324:; return;
label_A325:; return;
label_A326:; return;
label_A327:; return;
label_A328:; return;
label_A32B:; return;
label_A32D:; return;
label_A330:; return;
label_A333:; return;
label_A336:; return;
label_A337:; return;
label_A338:; return;
label_A33A:; return;
label_A33C:; return;
label_A33F:; return;
label_A342:; return;
label_A343:; return;
label_A346:; return;
label_A348:; return;
label_A349:; return;
label_A34B:; return;
label_A34D:; return;
label_A34F:; return;
label_A352:; return;
label_A354:; return;
label_A356:; return;
label_A358:; return;
label_A35A:; return;
label_A35B:; return;
label_A35D:; return;
label_A35E:; return;
label_A35F:; return;
label_A360:; return;
label_A361:; return;
label_A362:; return;
label_A363:; return;
label_A365:; return;
label_A366:; return;
label_A367:; return;
label_A368:; return;
label_A369:; return;
label_A36A:; return;
label_A36B:; return;
label_A36D:; return;
label_A36E:; return;
label_A370:; return;
label_A372:; return;
label_A373:; return;
label_A375:; return;
label_A378:; return;
label_A37A:; return;
label_A37C:; return;
label_A37E:; return;
label_A380:; return;
label_A381:; return;
label_A382:; return;
label_A383:; return;
label_A384:; return;
label_A385:; return;
label_A386:; return;
label_A387:; return;
label_A389:; return;
label_A38A:; return;
label_A38B:; return;
label_A38C:; return;
label_A38D:; return;
label_A38E:; return;
label_A38F:; return;
label_A391:; return;
label_A392:; return;
label_A393:; return;
label_A395:; return;
label_A396:; return;
label_A398:; return;
label_A39A:; return;
label_A39C:; return;
label_A39E:; return;
label_A3A0:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A4:; return;
label_A3A5:; return;
label_A3A6:; return;
label_A3A7:; return;
label_A3A8:; return;
label_A3A9:; return;
label_A3AB:; return;
label_A3AC:; return;
label_A3AD:; return;
label_A3AE:; return;
label_A3AF:; return;
label_A3B0:; return;
label_A3B1:; return;
label_A3B3:; return;
label_A3B6:; return;
label_A3B8:; return;
label_A3BA:; return;
label_A3BC:; return;
label_A3BD:; return;
label_A3BF:; return;
label_A3C1:; return;
label_A3C2:; return;
label_A3C4:; return;
label_A3C6:; return;
label_A3C8:; return;
label_A3C9:; return;
label_A3CA:; return;
label_A3CB:; return;
label_A3CC:; return;
label_A3CD:; return;
label_A3CE:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D2:; return;
label_A3D3:; return;
label_A3D4:; return;
label_A3D5:; return;
label_A3D6:; return;
label_A3D7:; return;
label_A3D9:; return;
label_A3DB:; return;
label_A3DE:; return;
label_A3E0:; return;
label_A3E2:; return;
label_A3E4:; return;
label_A3E5:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3EC:; return;
label_A3EF:; return;
label_A3F0:; return;
label_A3F2:; return;
label_A3F4:; return;
label_A3F6:; return;
label_A3F8:; return;
label_A3FB:; return;
label_A3FC:; return;
label_A3FF:; return;
label_A400:; return;
label_A402:; return;
label_A404:; return;
label_A406:; return;
label_A408:; return;
label_A40B:; return;
label_A40C:; return;
label_A40F:; return;
label_A410:; return;
label_A413:; return;
label_A414:; return;
label_A417:; return;
label_A419:; return;
label_A41A:; return;
label_A41C:; return;
label_A41E:; return;
label_A420:; return;
label_A423:; return;
label_A424:; return;
label_A427:; return;
label_A429:; return;
label_A42A:; return;
label_A42C:; return;
label_A42E:; return;
label_A430:; return;
label_A433:; return;
label_A434:; return;
label_A437:; return;
label_A439:; return;
label_A43A:; return;
label_A43B:; return;
label_A43C:; return;
label_A43D:; return;
label_A43E:; return;
label_A43F:; return;
label_A440:; return;
label_A441:; return;
label_A442:; return;
label_A443:; return;
label_A445:; return;
label_A446:; return;
label_A447:; return;
label_A449:; return;
label_A44A:; return;
label_A44C:; return;
label_A44D:; return;
label_A44F:; return;
label_A450:; return;
label_A451:; return;
label_A452:; return;
label_A453:; return;
label_A454:; return;
label_A456:; return;
label_A458:; return;
label_A459:; return;
label_A45A:; return;
label_A45B:; return;
label_A45D:; return;
label_A45E:; return;
label_A45F:; return;
label_A460:; return;
label_A461:; return;
label_A463:; return;
label_A464:; return;
label_A465:; return;
label_A466:; return;
label_A467:; return;
label_A468:; return;
label_A469:; return;
label_A46A:; return;
label_A46B:; return;
label_A46C:; return;
label_A46D:; return;
label_A46F:; return;
label_A470:; return;
label_A471:; return;
label_A473:; return;
label_A474:; return;
label_A476:; return;
label_A478:; return;
label_A479:; return;
label_A47A:; return;
label_A47B:; return;
label_A47C:; return;
label_A47D:; return;
label_A47E:; return;
label_A47F:; return;
label_A481:; return;
label_A482:; return;
label_A484:; return;
label_A485:; return;
label_A487:; return;
label_A488:; return;
label_A489:; return;
label_A48A:; return;
label_A48B:; return;
label_A48C:; return;
label_A48D:; return;
label_A48E:; return;
label_A48F:; return;
label_A491:; return;
label_A492:; return;
label_A494:; return;
label_A497:; return;
label_A498:; return;
label_A49B:; return;
label_A49C:; return;
label_A49E:; return;
label_A4A0:; return;
label_A4A3:; return;
label_A4A4:; return;
label_A4A7:; return;
label_A4A8:; return;
label_A4AA:; return;
label_A4AC:; return;
label_A4AF:; return;
label_A4B0:; return;
label_A4B2:; return;
label_A4B4:; return;
label_A4B6:; return;
label_A4B9:; return;
label_A4BA:; return;
label_A4BD:; return;
label_A4BE:; return;
label_A4C0:; return;
label_A4C2:; return;
label_A4C5:; return;
label_A4C6:; return;
label_A4C9:; return;
label_A4CB:; return;
label_A4CC:; return;
label_A4CE:; return;
label_A4D1:; return;
label_A4D3:; return;
label_A4D6:; return;
label_A4D8:; return;
label_A4DB:; return;
label_A4DE:; return;
label_A4E0:; return;
label_A4E2:; return;
label_A4E5:; return;
label_A4E6:; return;
label_A4E8:; return;
label_A4EA:; return;
label_A4ED:; return;
label_A4F0:; return;
label_A4F2:; return;
label_A4F4:; return;
label_A4F7:; return;
label_A4F8:; return;
label_A4FA:; return;
label_A4FC:; return;
label_A4FF:; return;
label_A502:; return;
label_A504:; return;
label_A506:; return;
label_A508:; return;
label_A50A:; return;
label_A50C:; return;
label_A50F:; return;
label_A512:; return;
label_A514:; return;
label_A516:; return;
label_A518:; return;
label_A51A:; return;
label_A51C:; return;
label_A51F:; return;
label_A522:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52F:; return;
label_A532:; return;
label_A534:; return;
label_A536:; return;
label_A538:; return;
label_A539:; return;
label_A53B:; return;
label_A53E:; return;
label_A53F:; return;
label_A541:; return;
label_A544:; return;
label_A546:; return;
label_A547:; return;
label_A548:; return;
label_A549:; return;
label_A54A:; return;
label_A54B:; return;
label_A54D:; return;
label_A550:; return;
label_A551:; return;
label_A553:; return;
label_A556:; return;
label_A558:; return;
label_A559:; return;
label_A55A:; return;
label_A55B:; return;
label_A55C:; return;
label_A55E:; return;
label_A561:; return;
label_A564:; return;
label_A566:; return;
label_A568:; return;
label_A56A:; return;
label_A56C:; return;
label_A56E:; return;
label_A570:; return;
label_A573:; return;
label_A576:; return;
label_A578:; return;
label_A57A:; return;
label_A57C:; return;
label_A57E:; return;
label_A580:; return;
label_A581:; return;
label_A583:; return;
label_A586:; return;
label_A587:; return;
label_A58A:; return;
label_A58C:; return;
label_A58D:; return;
label_A58F:; return;
label_A591:; return;
label_A593:; return;
label_A596:; return;
label_A597:; return;
label_A59A:; return;
label_A59C:; return;
label_A59D:; return;
label_A59F:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A6:; return;
label_A5A7:; return;
label_A5AA:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B0:; return;
label_A5B1:; return;
label_A5B3:; return;
label_A5B6:; return;
label_A5B7:; return;
label_A5B9:; return;
label_A5BC:; return;
label_A5BD:; return;
label_A5BF:; return;
label_A5C2:; return;
label_A5C4:; return;
label_A5C5:; return;
label_A5C8:; return;
label_A5C9:; return;
label_A5CC:; return;
label_A5CD:; return;
label_A5CF:; return;
label_A5D1:; return;
label_A5D4:; return;
label_A5D6:; return;
label_A5D7:; return;
label_A5D9:; return;
label_A5DC:; return;
label_A5DD:; return;
label_A5DF:; return;
label_A5E2:; return;
label_A5E3:; return;
label_A5E5:; return;
label_A5E8:; return;
label_A5EA:; return;
label_A5EB:; return;
label_A5EE:; return;
label_A5EF:; return;
label_A5F0:; return;
label_A5F1:; return;
label_A5F2:; return;
label_A5F3:; return;
label_A5F4:; return;
label_A5F6:; return;
label_A5F8:; return;
label_A5F9:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FC:; return;
label_A5FD:; return;
label_A5FE:; return;
label_A5FF:; return;
label_A600:; return;
label_A601:; return;
label_A602:; return;
label_A603:; return;
label_A604:; return;
label_A605:; return;
label_A606:; return;
label_A607:; return;
label_A608:; return;
label_A60A:; return;
label_A60C:; return;
label_A60D:; return;
label_A60E:; return;
label_A60F:; return;
label_A610:; return;
label_A611:; return;
label_A612:; return;
label_A613:; return;
label_A614:; return;
}

void func_96FC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_96FC_b12");
#endif
    func_96FC_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9708_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9708_b12");
#endif
    func_96FC_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9A58_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A58_b12");
#endif
label_9A58:;
    /* $9A58: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x9DDB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A5B:;
    /* $9A5B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DE4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A5E:;
    /* $9A5E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9A60:;
    /* $9A60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9A62:;
    /* $9A62: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A65:;
    /* $9A65: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A66:;
    /* $9A66: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A67:;
    /* $9A67: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A68:;
    /* $9A68: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A69:;
    /* $9A69: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A6B:;
    /* $9A6B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A62;
    }
label_9A6D:;
    /* $9A6D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A6E:;
    /* $9A6E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1A4F), 12); return; }
label_9A70:;
    /* $9A70: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_9300_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9316;
        case 2: goto label_935F;
        case 3: goto label_9371;
    }
label_9300:;
    /* $9300: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1302); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9300, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9303:;
    /* $9303: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_9305:;
    /* $9305: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9306:;
    /* $9306: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x13); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9308:;
    /* $9308: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9309:;
    /* $9309: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_930B:;
    /* $930B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9316;
label_930D:;
    /* $930D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_930F:;
    /* $930F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_9311:;
    /* $9311: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9316;
label_9313:;
    /* $9313: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9ABC, 12); return;
label_9316:;
    /* $9316: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9318:;
    /* $9318: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x9DED + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_931B:;
    /* $931B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x12F2), 12); return; }
label_931D:;
    /* $931D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_931F:;
    /* $931F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0A; g_cpu.C=(g_cpu.A>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_9321:;
    /* $9321: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x12F2), 12); return; }
label_9323:;
    /* $9323: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_9324:;
    /* $9324: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9325:;
    /* $9325: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x60); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9327:;
    /* $9327: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9328:;
    /* $9328: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9CE1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_932B:;
    /* $932B: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x12F2), 12); return; }
label_932D:;
    /* $932D: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_932F:;
    /* $932F: 84 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.Y);
label_9331:;
    /* $9331: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9333:;
    /* $9333: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9335:;
    /* $9335: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1337); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9335, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9338:;
    /* $9338: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_933A:;
    /* $933A: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_933C:;
    /* $933C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x133E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x933C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_933F:;
    /* $933F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x76; FLAG_NZ(g_cpu.A);
label_9341:;
    /* $9341: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_9343:;
    /* $9343: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1345); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9343, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9346:;
    /* $9346: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_9348:;
    /* $9348: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9349:;
    /* $9349: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_934B:;
    /* $934B: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_934D:;
    /* $934D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_934E:;
    /* $934E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9350:;
    /* $9350: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9351:;
    /* $9351: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9352:;
    /* $9352: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9354:;
    /* $9354: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9356:;
    /* $9356: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1358); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9356, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9359:;
    /* $9359: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_935B:;
    /* $935B: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_935D:;
    /* $935D: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_935F:;
    /* $935F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_9361:;
    /* $9361: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9362:;
    /* $9362: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1364); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9362, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9365:;
    /* $9365: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1367); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9368:;
    /* $9368: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9369:;
    /* $9369: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_936B:;
    /* $936B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_936D:;
    /* $936D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_935F;
    }
label_936F:;
    /* $936F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_9371:;
    /* $9371: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C53 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9374:;
    /* $9374: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9377:;
    /* $9377: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_937A:;
    /* $937A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_937B:;
    /* $937B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9371;
    }
label_937D:;
    /* $937D: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_937F:;
    /* $937F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9381:;
    /* $9381: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9383:;
    /* $9383: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1385); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9383, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9386:;
    /* $9386: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x0F); FLAG_NZ(g_cpu.Y);
label_9388:;
    /* $9388: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA000, 12); return;
}

void func_9300_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9300_b12");
#endif
    func_9300_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9316_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9316_b12");
#endif
    func_9300_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_935F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_935F_b12");
#endif
    func_9300_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9371_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9371_b12");
#endif
    func_9300_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A593_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A593_b12");
#endif
label_A593:;
    /* $A593: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A596:;
    /* $A596: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA596); return;
}

void func_8593_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8593_b12");
#endif
label_8593:;
    /* $8593: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8593); return;
}

void func_9A4F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A4F_b12");
#endif
label_9A4F:;
    /* $9A4F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DED + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A52:;
    /* $9A52: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A71;
label_9A54:;
    /* $9A54: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9A56:;
    /* $9A56: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A6D;
label_9A58:;
    /* $9A58: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x9DDB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9A5B:;
    /* $9A5B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DE4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9A5E:;
    /* $9A5E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9A60:;
    /* $9A60: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9A62:;
    /* $9A62: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9A65:;
    /* $9A65: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A66:;
    /* $9A66: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A67:;
    /* $9A67: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A68:;
    /* $9A68: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9A69:;
    /* $9A69: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9A6B:;
    /* $9A6B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A62;
    }
label_9A6D:;
    /* $9A6D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A6E:;
    /* $9A6E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A4F;
    }
label_9A70:;
    /* $9A70: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9A71:;
    /* $9A71: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_9A73:;
    /* $9A73: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A6D;
    }
label_9A75:;
    /* $9A75: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_9A77:;
    /* $9A77: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9A81;
label_9A79:;
    /* $9A79: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9A7B:;
    /* $9A7B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_9A7D:;
    /* $9A7D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A6D;
    }
label_9A7F:;
    /* $9A7F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9A58;
    }
label_9A81:;
    /* $9A81: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A83); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9A87, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9A81, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9A84:;
    /* $9A84: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_9A58;
}

void func_92F2_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_92F2_b12");
#endif
label_92F2:;
    /* $92F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_92F4:;
    /* $92F4: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_92F6:;
    /* $92F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_92F9:;
    /* $92F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92FB:;
    /* $92FB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92FD:;
    /* $92FD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9258, 12); return;
}

void func_A006_b12(void) { /* main_doc_quick_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A006_b12");
#endif
label_A006:; /* main_doc_quick_j */
    /* $A006: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF4 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A009:; /* main_shadow_man_j */
    /* $A009: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A00C:; /* main_snake_man_j */
    /* $A00C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A00E:;
    /* $A00E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A010:;
    /* $A010: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A012:; /* main_gemini_man_j */
    /* $A012: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCEC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A015:; /* main_gamma_B */
    /* $A015: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A017:;
    /* $A017: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A019:;
    /* $A019: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A01C:; /* main_needle_man */
    /* $A01C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A01F:;
    /* $A01F: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A021:; /* main_teleporter */
    /* $A021: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A023:;
    /* $A023: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF404 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A026:;
    /* $A026: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFA0C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A029:;
    /* $A029: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xF4 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A02B:;
    /* $A02B: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A02D:;
    /* $A02D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A030:; /* main_kamegoro_maker */
    /* $A030: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A033:;
    /* $A033: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A035:;
    /* $A035: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A037:;
    /* $A037: FC */ maybe_trigger_vblank(4); (void)nes_read((0xECFA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A03A:;
    /* $A03A: FA */ maybe_trigger_vblank(2); /* NOP */
label_A03B:;
    /* $A03B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xF4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A03D:;
    /* $A03D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF4); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A03F:; /* main_holograph */
    /* $A03F: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04FC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A042:;
    /* $A042: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCFC + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A045:;
    /* $A045: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A047:;
    /* $A047: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A049:;
    /* $A049: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0CFA + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A04C:;
    /* $A04C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A04E:;
    /* $A04E: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A050:;
    /* $A050: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A053:;
    /* $A053: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA053); return;
}

static void func_9009_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_9014;
        case 2: goto label_902E;
        case 3: goto label_905E;
        case 4: goto label_9075;
        case 5: goto label_908C;
        case 6: goto label_909D;
        case 7: goto label_900F;
    }
label_9009:;
    /* $9009: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x100B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9009, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_900C:;
    /* $900C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x100E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_900F:;
    /* $900F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1011); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC531, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x900F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9012:;
    /* $9012: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_9014:;
    /* $9014: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BF7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9017:;
    /* $9017: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_901A:;
    /* $901A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_901B:;
    /* $901B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9014;
    }
label_901D:;
    /* $901D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x101F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x901D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9020:;
    /* $9020: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_9022:;
    /* $9022: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x24; FLAG_NZ(g_cpu.X);
label_9024:;
    /* $9024: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9026:;
    /* $9026: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1028); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC59D, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9026, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9029:;
    /* $9029: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x102B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC53B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9029, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_902C:;
    /* $902C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_902E:;
    /* $902E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C03 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9031:;
    /* $9031: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9034:;
    /* $9034: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9035:;
    /* $9035: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_902E;
    }
label_9037:;
    /* $9037: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9039:;
    /* $9039: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_903B:;
    /* $903B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_903D:;
    /* $903D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x103F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x903D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9040:;
    /* $9040: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1042); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9043:;
    /* $9043: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x11; FLAG_NZ(g_cpu.X);
label_9045:;
    /* $9045: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1047); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9045, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9048:;
    /* $9048: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x104A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_904B:;
    /* $904B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x104D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x904B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_904E:;
    /* $904E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB4; FLAG_NZ(g_cpu.X);
label_9050:;
    /* $9050: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1052); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9053:;
    /* $9053: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1055); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9053, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9056:;
    /* $9056: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1058); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9059:;
    /* $9059: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x105B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC531, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9059, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_905C:;
    /* $905C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_905E:;
    /* $905E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BF7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9061:;
    /* $9061: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9064:;
    /* $9064: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9065:;
    /* $9065: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_905E;
    }
label_9067:;
    /* $9067: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1069); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9067, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_906A:;
    /* $906A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_906C:;
    /* $906C: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_906E:;
    /* $906E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1070); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x906E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9071:;
    /* $9071: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9073:;
    /* $9073: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_9075:;
    /* $9075: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9077:;
    /* $9077: 84 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.Y);
label_9079:;
    /* $9079: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x107B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EEAB(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9079, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_907C:;
    /* $907C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x107E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC4F8, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x907C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_907F:;
    /* $907F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1081); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9082:;
    /* $9082: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9084:;
    /* $9084: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_9086:;
    /* $9086: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_9088:;
    /* $9088: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9075;
    }
label_908A:;
    /* $908A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_908C:;
    /* $908C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C03 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_908F:;
    /* $908F: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9092:;
    /* $9092: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9093:;
    /* $9093: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_908C;
    }
label_9095:;
    /* $9095: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1097); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9098:;
    /* $9098: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x109A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC53B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9098, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_909B:;
    /* $909B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_909D:;
    /* $909D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C69 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90A0:;
    /* $90A0: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_90A3:;
    /* $90A3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_90A4:;
    /* $90A4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_909D;
    }
label_90A6:;
    /* $90A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90A8:;
    /* $90A8: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_90AA:;
    /* $90AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_90AC:;
    /* $90AC: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_90AE:;
    /* $90AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90B1:;
    /* $90B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10B3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90B4:;
    /* $90B4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_90B6:;
    /* $90B6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_90B8:;
    /* $90B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90D0;
label_90BA:;
    /* $90BA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_90BC:;
    /* $90BC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_90BE:;
    /* $90BE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_90CA;
label_90C0:;
    /* $90C0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_90C1:;
    /* $90C1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_90C2:;
    /* $90C2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_90C3:;
    /* $90C3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_90C4:;
    /* $90C4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90C7:;
    /* $90C7: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_90CA:;
    /* $90CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10CC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_90CD:;
    /* $90CD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_90B4;
label_90D0:;
    /* $90D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_90D2:;
    /* $90D2: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_90D4:;
    /* $90D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_90D6:;
    /* $90D6: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_90D8:;
    /* $90D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10DA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90DB:;
    /* $90DB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_90DD:;
    /* $90DD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C23 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90E0:;
    /* $90E0: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90E3:;
    /* $90E3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90E4:;
    /* $90E4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_90DD;
    }
label_90E6:;
    /* $90E6: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_90E8:;
    /* $90E8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_90EA:;
    /* $90EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_90ED:;
    /* $90ED: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x97; g_cpu.C=(g_cpu.A>=0x97)?1:0; FLAG_NZ(r&0xFF); }
label_90EF:;
    /* $90EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_90F2;
label_90F1:;
    /* $90F1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90F2:;
    /* $90F2: 84 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.Y);
label_90F4:;
    /* $90F4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BFD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90F7:;
    /* $90F7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10F9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90F7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90FA:;
    /* $90FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90FC:;
    /* $90FC: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_90FE:;
    /* $90FE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C63 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9101:;
    /* $9101: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1103); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9104:;
    /* $9104: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9106:;
    /* $9106: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_9108:;
    /* $9108: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x110A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9108, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_910B:;
    /* $910B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_910D:;
    /* $910D: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_910F:;
    /* $910F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1111); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x910F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9112:;
    /* $9112: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1114); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9115:;
    /* $9115: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9117:;
    /* $9117: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_910B;
    }
label_9119:;
    /* $9119: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x0F); FLAG_NZ(g_cpu.Y);
label_911B:;
    /* $911B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9126;
label_911D:;
    /* $911D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_911F:;
    /* $911F: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9121:;
    /* $9121: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9123:;
    /* $9123: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1125); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9123, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9126:;
    /* $9126: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C65 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9129:;
    /* $9129: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_912B:;
    /* $912B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C67 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_912E:;
    /* $912E: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_9130:;
    /* $9130: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1132); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC531, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9133:;
    /* $9133: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x9C01 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9136:;
    /* $9136: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9138:;
    /* $9138: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_913B:;
    /* $913B: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_913E:;
    /* $913E: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9141:;
    /* $9141: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9142:;
    /* $9142: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9143:;
    /* $9143: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x10; g_cpu.C=(g_cpu.Y>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_9145:;
    /* $9145: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9138;
    }
label_9147:;
    /* $9147: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9149:;
    /* $9149: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_914B:;
    /* $914B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x24; FLAG_NZ(g_cpu.X);
label_914D:;
    /* $914D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_914F:;
    /* $914F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1151); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC59D, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x914F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9152:;
    /* $9152: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1154); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC53B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9152, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9155:;
    /* $9155: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9157:;
    /* $9157: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_915A:;
    /* $915A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_915C:;
    /* $915C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_915E:;
    /* $915E: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_9160:;
    /* $9160: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9162:;
    /* $9162: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_9164:;
    /* $9164: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9166:;
    /* $9166: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9167:;
    /* $9167: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9169:;
    /* $9169: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_916B:;
    /* $916B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_916D:;
    /* $916D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_916F:;
    /* $916F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9171:;
    /* $9171: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_9173:;
    /* $9173: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9175:;
    /* $9175: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_9177:;
    /* $9177: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1179); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_917A:;
    /* $917A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_917C:;
    /* $917C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_917E:;
    /* $917E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9164;
    }
label_9180:;
    /* $9180: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9182:;
    /* $9182: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_9184:;
    /* $9184: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_91C8;
label_9186:;
    /* $9186: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_9188:;
    /* $9188: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_918A:;
    /* $918A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_918B:;
    /* $918B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_918C:;
    /* $918C: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_918E:;
    /* $918E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9190:;
    /* $9190: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1192); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9190, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9193:;
    /* $9193: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9195:;
    /* $9195: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_9197:;
    /* $9197: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_9199:;
    /* $9199: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_919B:;
    /* $919B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_919C:;
    /* $919C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x119E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x919C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_919F:;
    /* $919F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_91A0:;
    /* $91A0: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_91A2:;
    /* $91A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11A4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91A5:;
    /* $91A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_91A7:;
    /* $91A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9199;
    }
label_91A9:;
    /* $91A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x995C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91AC:;
    /* $91AC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_91AE:;
    /* $91AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91B1:;
    /* $91B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91B4:;
    /* $91B4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_91B6:;
    /* $91B6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91B6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91B9:;
    /* $91B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_91BB:;
    /* $91BB: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_91BD:;
    /* $91BD: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_91BF:;
    /* $91BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_91C1:;
    /* $91C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7E; FLAG_NZ(g_cpu.A);
label_91C3:;
    /* $91C3: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_91C5:;
    /* $91C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91C8:;
    /* $91C8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_91CA:;
    /* $91CA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C33 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91CD:;
    /* $91CD: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_91D0:;
    /* $91D0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_91D1:;
    /* $91D1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_91D2:;
    /* $91D2: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_91D4:;
    /* $91D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91CA;
    }
label_91D6:;
    /* $91D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_91D8:;
    /* $91D8: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_91DA:;
    /* $91DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_91DC:;
    /* $91DC: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_91DE:;
    /* $91DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_91E0:;
    /* $91E0: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_91E2:;
    /* $91E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_91E4:;
    /* $91E4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_91EC;
label_91E6:;
    /* $91E6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11E8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x99FA, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91E6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91E9:;
    /* $91E9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9258, 12); return;
label_91EC:;
    /* $91EC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11EE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91EC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91EF:;
    /* $91EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11F1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93FE, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91F2:;
    /* $91F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_91F4:;
    /* $91F4: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_91F6:;
    /* $91F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91F9:;
    /* $91F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FB:;
    /* $91FB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_91FD:;
    /* $91FD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_91FF:;
    /* $91FF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91EF;
    }
label_9201:;
    /* $9201: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_9204:;
    /* $9204: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB7; g_cpu.C=(g_cpu.A>=0xB7)?1:0; FLAG_NZ(r&0xFF); }
label_9206:;
    /* $9206: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9212;
label_9208:;
    /* $9208: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_920A:;
    /* $920A: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_920C:;
    /* $920C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x120E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x920C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_920F:;
    /* $920F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA593, 12); return;
label_9212:;
    /* $9212: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_9214:;
    /* $9214: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9216:;
    /* $9216: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9219:;
    /* $9219: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921A:;
    /* $921A: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921B:;
    /* $921B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921C:;
    /* $921C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921D:;
    /* $921D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9216;
    }
label_921F:;
    /* $921F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9221:;
    /* $9221: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9223:;
    /* $9223: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1225); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9223, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9226:;
    /* $9226: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9228:;
    /* $9228: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x122A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9228, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_922B:;
    /* $922B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_922D:;
    /* $922D: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_922F:;
    /* $922F: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_9231:;
    /* $9231: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9233:;
    /* $9233: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1235); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9233, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9236:;
    /* $9236: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9238:;
    /* $9238: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_923A:;
    /* $923A: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_923C:;
    /* $923C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x123E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x923C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_923F:;
    /* $923F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1241); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9242:;
    /* $9242: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9244:;
    /* $9244: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9236;
    }
label_9246:;
    /* $9246: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9248:;
    /* $9248: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_924A:;
    /* $924A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_924C:;
    /* $924C: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_924E:;
    /* $924E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_9250:;
    /* $9250: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_9252:;
    /* $9252: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1254); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9252, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9255:;
    /* $9255: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_9155;
}

void func_9009_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9009_b12");
#endif
    func_9009_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9014_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9014_b12");
#endif
    func_9009_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_902E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_902E_b12");
#endif
    func_9009_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_905E_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_905E_b12");
#endif
    func_9009_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9075_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9075_b12");
#endif
    func_9009_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_908C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_908C_b12");
#endif
    func_9009_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_909D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_909D_b12");
#endif
    func_9009_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_900F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_900F_b12");
#endif
    func_9009_b12_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B9A5_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9A5_b12");
#endif
label_B9A5:;
    /* $B9A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9A5); return;
}

void func_968D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_968D_b12");
#endif
label_968D:;
    /* $968D: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_968E:;
    /* $968E: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9690:;
    /* $9690: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x85); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9692:;
    /* $9692: 97 */ maybe_trigger_vblank(4); nes_write((0x20 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_9694:;
    /* $9694: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xC5; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9696:;
    /* $9696: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1698); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9699:;
    /* $9699: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x169B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9936, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9699, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_969C:;
    /* $969C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_969E:;
    /* $969E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_96A0:;
    /* $96A0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16A2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96A0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96A3:;
    /* $96A3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_96A5:;
    /* $96A5: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_96A7:;
    /* $96A7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_96A9:;
    /* $96A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96AC:;
    /* $96AC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_96AE:;
    /* $96AE: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_96B0:;
    /* $96B0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16B2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96B0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96B3:;
    /* $96B3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16B5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_96B6:;
    /* $96B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_96B8:;
    /* $96B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_96AC;
    }
label_96BA:;
    /* $96BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_96BC:;
    /* $96BC: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_96BE:;
    /* $96BE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x76; FLAG_NZ(g_cpu.A);
label_96C0:;
    /* $96C0: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_96C2:;
    /* $96C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_96C4:;
    /* $96C4: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_96C6:;
    /* $96C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_96C8:;
    /* $96C8: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_96CA:;
    /* $96CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16CC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96CA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96CD:;
    /* $96CD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_96CF:;
    /* $96CF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C43 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96D2:;
    /* $96D2: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_96D5:;
    /* $96D5: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_96D6:;
    /* $96D6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_96CF;
    }
label_96D8:;
    /* $96D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_96DA:;
    /* $96DA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C23 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_96DD:;
    /* $96DD: 99 */ maybe_trigger_vblank(5); nes_write((0x0630 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_96E0:;
    /* $96E0: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_96E1:;
    /* $96E1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_96DA;
    }
label_96E3:;
    /* $96E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_96E5:;
    /* $96E5: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_96E7:;
    /* $96E7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x12; FLAG_NZ(g_cpu.X);
label_96E9:;
    /* $96E9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16EB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96E9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96EC:;
    /* $96EC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16EE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_96EF:;
    /* $96EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_96F1:;
    /* $96F1: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_96F3:;
    /* $96F3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16F5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96F3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96F6:;
    /* $96F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA8DD, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96F9:;
    /* $96F9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16FB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x96F9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_96FC:;
    /* $96FC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_96FE:;
    /* $96FE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x90; FLAG_NZ(g_cpu.A);
label_9700:;
    /* $9700: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_9708;
label_9702:;
    /* $9702: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1704); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9705:;
    /* $9705: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_96FC;
label_9708:;
    /* $9708: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9212, 12); return;
}

void func_AD05_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD05_b12");
#endif
label_AD05:;
    /* $AD05: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD07:;
    /* $AD07: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04F0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD0A:;
    /* $AD0A: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_AD0B:;
    /* $AD0B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD0D:;
    /* $AD0D: FC */ maybe_trigger_vblank(4); (void)nes_read((0xF4F8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD10:;
    /* $AD10: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD10); return;
}

static void func_90B4_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_90CA;
        case 2: goto label_90D0;
        case 3: goto label_90DD;
        case 4: goto label_90F2;
        case 5: goto label_910B;
        case 6: goto label_9126;
        case 7: goto label_9138;
        case 8: goto label_9164;
        case 9: goto label_9199;
        case 10: goto label_91C8;
        case 11: goto label_91CA;
        case 12: goto label_91EC;
        case 13: goto label_91EF;
        case 14: goto label_9216;
        case 15: goto label_9236;
    }
label_90B4:;
    /* $90B4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_90B6:;
    /* $90B6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_90B8:;
    /* $90B8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_90D0;
label_90BA:;
    /* $90BA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_90BC:;
    /* $90BC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_90BE:;
    /* $90BE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_90CA;
label_90C0:;
    /* $90C0: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_90C1:;
    /* $90C1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_90C2:;
    /* $90C2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_90C3:;
    /* $90C3: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_90C4:;
    /* $90C4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BFF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90C7:;
    /* $90C7: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_90CA:;
    /* $90CA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10CC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_90CD:;
    /* $90CD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_90B4;
label_90D0:;
    /* $90D0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x36; FLAG_NZ(g_cpu.A);
label_90D2:;
    /* $90D2: 85 */ maybe_trigger_vblank(3); nes_write(0xEC, g_cpu.A);
label_90D4:;
    /* $90D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x34; FLAG_NZ(g_cpu.A);
label_90D6:;
    /* $90D6: 85 */ maybe_trigger_vblank(3); nes_write(0xED, g_cpu.A);
label_90D8:;
    /* $90D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10DA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90DB:;
    /* $90DB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_90DD:;
    /* $90DD: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C23 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90E0:;
    /* $90E0: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_90E3:;
    /* $90E3: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90E4:;
    /* $90E4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_90DD;
    }
label_90E6:;
    /* $90E6: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_90E8:;
    /* $90E8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_90EA:;
    /* $90EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_90ED:;
    /* $90ED: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x97; g_cpu.C=(g_cpu.A>=0x97)?1:0; FLAG_NZ(r&0xFF); }
label_90EF:;
    /* $90EF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_90F2;
label_90F1:;
    /* $90F1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_90F2:;
    /* $90F2: 84 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.Y);
label_90F4:;
    /* $90F4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BFD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_90F7:;
    /* $90F7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10F9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90F7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90FA:;
    /* $90FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_90FC:;
    /* $90FC: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_90FE:;
    /* $90FE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C63 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9101:;
    /* $9101: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1103); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9101, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9104:;
    /* $9104: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9106:;
    /* $9106: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_9108:;
    /* $9108: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x110A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9108, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_910B:;
    /* $910B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_910D:;
    /* $910D: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_910F:;
    /* $910F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1111); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x910F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9112:;
    /* $9112: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1114); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9115:;
    /* $9115: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9117:;
    /* $9117: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_910B;
    }
label_9119:;
    /* $9119: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x0F); FLAG_NZ(g_cpu.Y);
label_911B:;
    /* $911B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9126;
label_911D:;
    /* $911D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_911F:;
    /* $911F: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9121:;
    /* $9121: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9123:;
    /* $9123: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1125); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9123, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9126:;
    /* $9126: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C65 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9129:;
    /* $9129: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_912B:;
    /* $912B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C67 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_912E:;
    /* $912E: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_9130:;
    /* $9130: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1132); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC531, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9130, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9133:;
    /* $9133: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x9C01 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9136:;
    /* $9136: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9138:;
    /* $9138: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C03 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_913B:;
    /* $913B: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_913E:;
    /* $913E: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9141:;
    /* $9141: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9142:;
    /* $9142: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9143:;
    /* $9143: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x10; g_cpu.C=(g_cpu.Y>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_9145:;
    /* $9145: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9138;
    }
label_9147:;
    /* $9147: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9149:;
    /* $9149: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_914B:;
    /* $914B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x24; FLAG_NZ(g_cpu.X);
label_914D:;
    /* $914D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_914F:;
    /* $914F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1151); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC59D, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x914F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9152:;
    /* $9152: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1154); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC53B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9152, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9155:;
    /* $9155: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9157:;
    /* $9157: 8D */ maybe_trigger_vblank(4); nes_write(0x0200, g_cpu.A);
label_915A:;
    /* $915A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_915C:;
    /* $915C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_915E:;
    /* $915E: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_9160:;
    /* $9160: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9162:;
    /* $9162: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_9164:;
    /* $9164: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_9166:;
    /* $9166: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9167:;
    /* $9167: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9169:;
    /* $9169: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_916B:;
    /* $916B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_916D:;
    /* $916D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_916F:;
    /* $916F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9171:;
    /* $9171: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_9173:;
    /* $9173: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9175:;
    /* $9175: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_9177:;
    /* $9177: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1179); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_917A:;
    /* $917A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_917C:;
    /* $917C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_917E:;
    /* $917E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9164;
    }
label_9180:;
    /* $9180: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_9182:;
    /* $9182: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_9184:;
    /* $9184: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_91C8;
label_9186:;
    /* $9186: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_9188:;
    /* $9188: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_918A:;
    /* $918A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_918B:;
    /* $918B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_918C:;
    /* $918C: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_918E:;
    /* $918E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9190:;
    /* $9190: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1192); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9190, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9193:;
    /* $9193: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9195:;
    /* $9195: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_9197:;
    /* $9197: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_9199:;
    /* $9199: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_919B:;
    /* $919B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_919C:;
    /* $919C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x119E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x919C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_919F:;
    /* $919F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_91A0:;
    /* $91A0: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_91A2:;
    /* $91A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11A4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91A5:;
    /* $91A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_91A7:;
    /* $91A7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9199;
    }
label_91A9:;
    /* $91A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x995C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91AC:;
    /* $91AC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_91AE:;
    /* $91AE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91AE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91B1:;
    /* $91B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91B4:;
    /* $91B4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_91B6:;
    /* $91B6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11B8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91B6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91B9:;
    /* $91B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_91BB:;
    /* $91BB: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_91BD:;
    /* $91BD: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_91BF:;
    /* $91BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_91C1:;
    /* $91C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7E; FLAG_NZ(g_cpu.A);
label_91C3:;
    /* $91C3: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_91C5:;
    /* $91C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91C8:;
    /* $91C8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_91CA:;
    /* $91CA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C33 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_91CD:;
    /* $91CD: 9D */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_91D0:;
    /* $91D0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_91D1:;
    /* $91D1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_91D2:;
    /* $91D2: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_91D4:;
    /* $91D4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91CA;
    }
label_91D6:;
    /* $91D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_91D8:;
    /* $91D8: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_91DA:;
    /* $91DA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_91DC:;
    /* $91DC: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_91DE:;
    /* $91DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_91E0:;
    /* $91E0: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_91E2:;
    /* $91E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_91E4:;
    /* $91E4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_91EC;
label_91E6:;
    /* $91E6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11E8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x99FA, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91E6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91E9:;
    /* $91E9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9258, 12); return;
label_91EC:;
    /* $91EC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11EE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91EC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91EF:;
    /* $91EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11F1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x93FE, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x91EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_91F2:;
    /* $91F2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_91F4:;
    /* $91F4: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_91F6:;
    /* $91F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x11F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_91F9:;
    /* $91F9: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_91FB:;
    /* $91FB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_91FD:;
    /* $91FD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_91FF:;
    /* $91FF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_91EF;
    }
label_9201:;
    /* $9201: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_9204:;
    /* $9204: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB7; g_cpu.C=(g_cpu.A>=0xB7)?1:0; FLAG_NZ(r&0xFF); }
label_9206:;
    /* $9206: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_9212;
label_9208:;
    /* $9208: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_920A:;
    /* $920A: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_920C:;
    /* $920C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x120E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x920C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_920F:;
    /* $920F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA593, 12); return;
label_9212:;
    /* $9212: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_9214:;
    /* $9214: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_9216:;
    /* $9216: 99 */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9219:;
    /* $9219: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921A:;
    /* $921A: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921B:;
    /* $921B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921C:;
    /* $921C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_921D:;
    /* $921D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9216;
    }
label_921F:;
    /* $921F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9221:;
    /* $9221: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9223:;
    /* $9223: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1225); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9223, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9226:;
    /* $9226: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_9228:;
    /* $9228: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x122A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9228, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_922B:;
    /* $922B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_922D:;
    /* $922D: 85 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.A);
label_922F:;
    /* $922F: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_9231:;
    /* $9231: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9233:;
    /* $9233: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1235); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9233, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9236:;
    /* $9236: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9238:;
    /* $9238: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_923A:;
    /* $923A: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_923C:;
    /* $923C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x123E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x923C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_923F:;
    /* $923F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1241); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9242:;
    /* $9242: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9244:;
    /* $9244: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9236;
    }
label_9246:;
    /* $9246: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9248:;
    /* $9248: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_924A:;
    /* $924A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_924C:;
    /* $924C: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_924E:;
    /* $924E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_9250:;
    /* $9250: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_9252:;
    /* $9252: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1254); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9252, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9255:;
    /* $9255: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_9155;
label_9258:; return;
label_925A:; return;
label_925C:; return;
label_925E:; return;
label_9261:; return;
label_9263:; return;
label_9265:; return;
label_9267:; return;
label_9268:; return;
label_926A:; return;
label_926B:; return;
label_926E:; return;
label_9270:; return;
label_9272:; return;
label_9274:; return;
label_9276:; return;
label_9279:; return;
label_927B:; return;
label_927D:; return;
label_927F:; return;
label_9280:; return;
label_9282:; return;
label_9283:; return;
label_9286:; return;
label_9288:; return;
label_928A:; return;
label_928C:; return;
label_928E:; return;
label_9291:; return;
label_9293:; return;
label_9294:; return;
label_9296:; return;
label_9298:; return;
label_9299:; return;
label_929A:; return;
label_929C:; return;
label_929D:; return;
label_929F:; return;
label_92A0:; return;
label_92A2:; return;
label_92A5:; return;
label_92A8:; return;
label_92AB:; return;
label_92AE:; return;
label_92AF:; return;
label_92B0:; return;
label_92B1:; return;
label_92B2:; return;
label_92B3:; return;
label_92B4:; return;
label_92B6:; return;
label_92B8:; return;
label_92BA:; return;
label_92BD:; return;
label_92BF:; return;
label_92C2:; return;
label_92C4:; return;
label_92C6:; return;
label_92C7:; return;
label_92C8:; return;
label_92C9:; return;
label_92CB:; return;
label_92CC:; return;
label_92CE:; return;
label_92D0:; return;
label_92D2:; return;
label_92D4:; return;
label_92D6:; return;
label_92D7:; return;
label_92DA:; return;
label_92DD:; return;
label_92DF:; return;
label_92E0:; return;
label_92E3:; return;
label_92E6:; return;
label_92E8:; return;
label_92EB:; return;
label_92EC:; return;
label_92ED:; return;
label_92EE:; return;
label_92EF:; return;
label_92F0:; return;
label_92F2:; return;
label_92F4:; return;
label_92F6:; return;
label_92F9:; return;
label_92FB:; return;
label_92FD:; return;
label_9300:; return;
label_9303:; return;
label_9305:; return;
label_9306:; return;
label_9308:; return;
label_9309:; return;
label_930B:; return;
label_930D:; return;
label_930F:; return;
label_9311:; return;
label_9313:; return;
label_9316:; return;
label_9318:; return;
label_931B:; return;
label_931D:; return;
label_931F:; return;
label_9321:; return;
label_9323:; return;
label_9324:; return;
label_9325:; return;
label_9327:; return;
label_9328:; return;
label_932B:; return;
label_932D:; return;
label_932F:; return;
label_9331:; return;
label_9333:; return;
label_9335:; return;
label_9338:; return;
label_933A:; return;
label_933C:; return;
label_933F:; return;
label_9341:; return;
label_9343:; return;
label_9346:; return;
label_9348:; return;
label_9349:; return;
label_934B:; return;
label_934D:; return;
label_934E:; return;
label_9350:; return;
label_9351:; return;
label_9352:; return;
label_9354:; return;
label_9356:; return;
label_9359:; return;
label_935B:; return;
label_935D:; return;
label_935F:; return;
label_9361:; return;
label_9362:; return;
label_9365:; return;
label_9368:; return;
label_9369:; return;
label_936B:; return;
label_936D:; return;
label_936F:; return;
label_9371:; return;
label_9374:; return;
label_9377:; return;
label_937A:; return;
label_937B:; return;
label_937D:; return;
label_937F:; return;
label_9381:; return;
label_9383:; return;
label_9386:; return;
label_9388:; return;
label_938B:; return;
label_938C:; return;
label_938E:; return;
label_9390:; return;
label_9393:; return;
label_9394:; return;
label_9397:; return;
label_9399:; return;
label_939B:; return;
label_939E:; return;
label_93A0:; return;
label_93A2:; return;
label_93A4:; return;
label_93A5:; return;
label_93A7:; return;
label_93A9:; return;
label_93AC:; return;
label_93AE:; return;
label_93B1:; return;
label_93B3:; return;
label_93B6:; return;
label_93B8:; return;
label_93BA:; return;
label_93BC:; return;
label_93BE:; return;
label_93C1:; return;
label_93C3:; return;
label_93C4:; return;
label_93C6:; return;
label_93C9:; return;
label_93CA:; return;
label_93CC:; return;
label_93CF:; return;
label_93D1:; return;
label_93D2:; return;
label_93D4:; return;
label_93D7:; return;
label_93D8:; return;
label_93DA:; return;
label_93DC:; return;
label_93DE:; return;
label_93E0:; return;
label_93E1:; return;
label_93E3:; return;
label_93E6:; return;
label_93E8:; return;
label_93E9:; return;
label_93EB:; return;
label_93EE:; return;
label_93F0:; return;
label_93F3:; return;
label_93F5:; return;
label_93F8:; return;
label_93FA:; return;
label_93FD:; return;
label_93FE:; return;
label_9400:; return;
label_9402:; return;
label_9404:; return;
label_9406:; return;
label_9408:; return;
label_940A:; return;
label_940C:; return;
label_940F:; return;
label_9410:; return;
label_9412:; return;
label_9415:; return;
label_9417:; return;
label_9419:; return;
label_941C:; return;
label_941D:; return;
label_941F:; return;
label_9421:; return;
label_9423:; return;
label_9425:; return;
label_9428:; return;
label_942B:; return;
label_942D:; return;
label_942F:; return;
label_9432:; return;
label_9435:; return;
label_9437:; return;
label_943A:; return;
label_943D:; return;
label_943F:; return;
label_9440:; return;
label_9442:; return;
label_9444:; return;
label_9446:; return;
label_9449:; return;
label_944B:; return;
label_944D:; return;
label_9450:; return;
label_9453:; return;
label_9455:; return;
label_9457:; return;
label_9458:; return;
label_945A:; return;
label_945C:; return;
label_945E:; return;
label_9460:; return;
label_9463:; return;
label_9466:; return;
label_9468:; return;
label_9469:; return;
label_946B:; return;
label_946C:; return;
label_946F:; return;
label_9471:; return;
label_9474:; return;
label_9477:; return;
label_9478:; return;
label_947A:; return;
label_947D:; return;
label_947F:; return;
label_9482:; return;
label_9485:; return;
label_9486:; return;
label_9488:; return;
label_948A:; return;
label_948D:; return;
label_948F:; return;
label_9492:; return;
label_9494:; return;
label_9496:; return;
label_9499:; return;
label_949C:; return;
label_949E:; return;
label_94A1:; return;
label_94A4:; return;
label_94A7:; return;
label_94AA:; return;
label_94AC:; return;
label_94AE:; return;
label_94AF:; return;
label_94B1:; return;
label_94B4:; return;
label_94B6:; return;
label_94B9:; return;
label_94BC:; return;
label_94BE:; return;
label_94C0:; return;
label_94C2:; return;
label_94C4:; return;
label_94C7:; return;
label_94CA:; return;
label_94CD:; return;
label_94CF:; return;
label_94D1:; return;
label_94D3:; return;
label_94D6:; return;
label_94D9:; return;
label_94DB:; return;
label_94DD:; return;
label_94DE:; return;
label_94E0:; return;
label_94E3:; return;
label_94E6:; return;
label_94E9:; return;
label_94EB:; return;
label_94EE:; return;
label_94F0:; return;
label_94F2:; return;
label_94F4:; return;
label_94F7:; return;
label_94F9:; return;
label_94FC:; return;
label_94FE:; return;
label_9501:; return;
label_9503:; return;
label_9506:; return;
label_9509:; return;
label_950B:; return;
label_950D:; return;
label_950F:; return;
label_9511:; return;
label_9513:; return;
label_9515:; return;
label_9517:; return;
label_9518:; return;
label_9519:; return;
label_951A:; return;
label_951C:; return;
label_951D:; return;
label_9520:; return;
label_9523:; return;
label_9526:; return;
label_9529:; return;
label_952A:; return;
label_952B:; return;
label_952D:; return;
label_952F:; return;
label_9532:; return;
label_9535:; return;
label_9538:; return;
label_953B:; return;
label_953C:; return;
label_953E:; return;
label_9540:; return;
label_9542:; return;
label_9545:; return;
label_9547:; return;
label_9549:; return;
label_954A:; return;
label_954C:; return;
label_954E:; return;
label_9550:; return;
label_9552:; return;
label_9554:; return;
label_9557:; return;
label_9558:; return;
label_955A:; return;
label_955C:; return;
label_955E:; return;
label_9561:; return;
label_9562:; return;
label_9563:; return;
label_9565:; return;
label_9567:; return;
label_9569:; return;
label_956C:; return;
label_956E:; return;
label_956F:; return;
label_9571:; return;
label_9573:; return;
label_9575:; return;
label_9577:; return;
label_9579:; return;
label_957B:; return;
label_957D:; return;
label_9580:; return;
label_9581:; return;
label_9583:; return;
label_9585:; return;
label_9587:; return;
label_958A:; return;
label_958D:; return;
label_958F:; return;
label_9591:; return;
label_9594:; return;
label_9597:; return;
label_959A:; return;
label_959C:; return;
label_959F:; return;
label_95A1:; return;
label_95A3:; return;
label_95A6:; return;
label_95A8:; return;
label_95AB:; return;
label_95AD:; return;
label_95AF:; return;
label_95B1:; return;
label_95B3:; return;
label_95B6:; return;
label_95B9:; return;
label_95BB:; return;
label_95BD:; return;
label_95BF:; return;
label_95C1:; return;
label_95C4:; return;
label_95C6:; return;
label_95C8:; return;
label_95CA:; return;
label_95CD:; return;
label_95D0:; return;
label_95D2:; return;
label_95D5:; return;
label_95D8:; return;
label_95DA:; return;
label_95DD:; return;
label_95DF:; return;
label_95E1:; return;
label_95E3:; return;
label_95E5:; return;
label_95E8:; return;
label_95EB:; return;
label_95ED:; return;
label_95EF:; return;
label_95F1:; return;
label_95F3:; return;
label_95F5:; return;
label_95F7:; return;
label_95F9:; return;
label_95FB:; return;
label_95FD:; return;
label_95FF:; return;
label_9602:; return;
label_9604:; return;
label_9607:; return;
label_960A:; return;
label_960B:; return;
label_960D:; return;
label_960F:; return;
label_9612:; return;
label_9615:; return;
label_9616:; return;
label_9618:; return;
label_961B:; return;
label_961E:; return;
label_9620:; return;
label_9622:; return;
label_9625:; return;
label_9627:; return;
label_9629:; return;
label_962B:; return;
label_962D:; return;
label_9630:; return;
label_9633:; return;
label_9635:; return;
label_9637:; return;
label_9639:; return;
label_963B:; return;
label_963D:; return;
label_963F:; return;
label_9641:; return;
label_9644:; return;
label_9647:; return;
label_964A:; return;
label_964D:; return;
label_964F:; return;
label_9652:; return;
label_9654:; return;
label_9656:; return;
label_9658:; return;
label_965A:; return;
label_965C:; return;
label_965E:; return;
label_9661:; return;
label_9663:; return;
label_9666:; return;
label_9669:; return;
label_966C:; return;
label_966D:; return;
label_966F:; return;
label_9671:; return;
label_9673:; return;
label_9675:; return;
label_9677:; return;
label_9679:; return;
label_967C:; return;
label_967E:; return;
label_9681:; return;
label_9683:; return;
label_9685:; return;
label_9687:; return;
label_9689:; return;
label_968C:; return;
label_968F:; return;
label_9691:; return;
label_9693:; return;
label_9696:; return;
label_9699:; return;
label_969C:; return;
label_969E:; return;
label_96A0:; return;
label_96A3:; return;
label_96A5:; return;
label_96A7:; return;
label_96A9:; return;
label_96AC:; return;
label_96AE:; return;
label_96B0:; return;
label_96B3:; return;
label_96B6:; return;
label_96B8:; return;
label_96BA:; return;
label_96BC:; return;
label_96BE:; return;
label_96C0:; return;
label_96C2:; return;
label_96C4:; return;
label_96C6:; return;
label_96C8:; return;
label_96CA:; return;
label_96CD:; return;
label_96CF:; return;
label_96D2:; return;
label_96D5:; return;
label_96D6:; return;
label_96D8:; return;
label_96DA:; return;
label_96DD:; return;
label_96E0:; return;
label_96E1:; return;
label_96E3:; return;
label_96E5:; return;
label_96E7:; return;
label_96E9:; return;
label_96EC:; return;
label_96EF:; return;
label_96F1:; return;
label_96F3:; return;
label_96F6:; return;
label_96F9:; return;
label_96FC:; return;
label_96FE:; return;
label_9700:; return;
label_9702:; return;
label_9705:; return;
label_9708:; return;
label_970B:; return;
label_970D:; return;
label_9710:; return;
label_9712:; return;
label_9715:; return;
label_9717:; return;
label_9719:; return;
label_971B:; return;
label_971E:; return;
label_9720:; return;
label_9723:; return;
label_9724:; return;
label_9726:; return;
label_9729:; return;
label_972C:; return;
label_972E:; return;
label_9731:; return;
label_9732:; return;
label_9733:; return;
label_9736:; return;
label_9739:; return;
label_973B:; return;
label_973C:; return;
label_973F:; return;
label_9742:; return;
label_9743:; return;
label_9745:; return;
label_9747:; return;
label_9749:; return;
label_974C:; return;
label_974E:; return;
label_974F:; return;
label_9750:; return;
label_9752:; return;
label_9755:; return;
label_9756:; return;
label_9757:; return;
label_9758:; return;
label_9759:; return;
label_975B:; return;
label_975D:; return;
label_975F:; return;
label_9761:; return;
label_9762:; return;
label_9764:; return;
label_9766:; return;
label_9769:; return;
label_976C:; return;
label_976F:; return;
label_9772:; return;
label_9775:; return;
label_9778:; return;
label_977B:; return;
label_977E:; return;
label_977F:; return;
label_9781:; return;
label_9783:; return;
label_9786:; return;
label_9788:; return;
label_978B:; return;
label_978E:; return;
label_9791:; return;
label_9794:; return;
label_9795:; return;
label_9798:; return;
label_979B:; return;
label_979D:; return;
label_97A0:; return;
label_97A2:; return;
label_97A5:; return;
label_97A7:; return;
label_97AA:; return;
label_97AC:; return;
label_97AF:; return;
label_97B2:; return;
label_97B5:; return;
label_97B8:; return;
label_97BA:; return;
label_97BC:; return;
label_97BF:; return;
label_97C1:; return;
label_97C4:; return;
label_97C7:; return;
label_97C9:; return;
label_97CC:; return;
label_97CE:; return;
label_97D1:; return;
label_97D3:; return;
label_97D6:; return;
label_97D8:; return;
label_97D9:; return;
label_97DA:; return;
label_97DC:; return;
label_97DF:; return;
label_97E0:; return;
label_97E1:; return;
label_97E2:; return;
label_97E3:; return;
label_97E5:; return;
label_97E7:; return;
label_97E9:; return;
label_97EB:; return;
label_97EC:; return;
label_97EF:; return;
label_97F1:; return;
label_97F4:; return;
label_97F7:; return;
label_97FA:; return;
label_97FD:; return;
label_97FE:; return;
label_9801:; return;
label_9804:; return;
label_9806:; return;
label_9809:; return;
label_980B:; return;
label_980E:; return;
label_9810:; return;
label_9813:; return;
label_9815:; return;
label_9818:; return;
label_981B:; return;
label_981E:; return;
label_9821:; return;
label_9824:; return;
label_9827:; return;
label_982A:; return;
label_982D:; return;
label_9830:; return;
label_9833:; return;
label_9836:; return;
label_9839:; return;
label_983A:; return;
label_983C:; return;
label_983E:; return;
label_9841:; return;
label_9844:; return;
label_9845:; return;
label_9847:; return;
label_984A:; return;
label_984C:; return;
label_984F:; return;
label_9852:; return;
label_9854:; return;
label_9857:; return;
label_9859:; return;
label_985C:; return;
label_985D:; return;
label_9860:; return;
label_9862:; return;
label_9864:; return;
label_9867:; return;
label_986A:; return;
label_986C:; return;
label_986F:; return;
label_9872:; return;
label_9874:; return;
label_9876:; return;
label_9878:; return;
label_987A:; return;
label_987C:; return;
label_987F:; return;
label_9881:; return;
label_9883:; return;
label_9886:; return;
label_9889:; return;
label_988B:; return;
label_988D:; return;
label_988F:; return;
label_9891:; return;
label_9893:; return;
label_9895:; return;
label_9897:; return;
label_9899:; return;
label_989B:; return;
label_989D:; return;
label_98A0:; return;
label_98A2:; return;
label_98A5:; return;
label_98A8:; return;
label_98A9:; return;
label_98AB:; return;
label_98AD:; return;
label_98B0:; return;
label_98B3:; return;
label_98B4:; return;
label_98B6:; return;
label_98B9:; return;
label_98BB:; return;
label_98BD:; return;
label_98BF:; return;
label_98C2:; return;
label_98C4:; return;
label_98C6:; return;
label_98C8:; return;
label_98CA:; return;
label_98CC:; return;
label_98CE:; return;
label_98D1:; return;
label_98D4:; return;
label_98D7:; return;
label_98DA:; return;
label_98DC:; return;
label_98DD:; return;
label_98E0:; return;
label_98E1:; return;
label_98E2:; return;
label_98E4:; return;
label_98E6:; return;
label_98E8:; return;
label_98EA:; return;
label_98EC:; return;
label_98EF:; return;
label_98F2:; return;
label_98F5:; return;
label_98F7:; return;
label_98F9:; return;
label_98FB:; return;
label_98FE:; return;
label_9901:; return;
label_9903:; return;
label_9905:; return;
label_9907:; return;
label_9909:; return;
label_990B:; return;
label_990C:; return;
label_990E:; return;
label_9911:; return;
label_9913:; return;
label_9915:; return;
label_9917:; return;
label_9919:; return;
label_991B:; return;
label_991E:; return;
label_9920:; return;
label_9922:; return;
label_9924:; return;
label_9926:; return;
label_9928:; return;
label_992B:; return;
label_992C:; return;
label_992E:; return;
label_9930:; return;
label_9933:; return;
label_9936:; return;
label_9938:; return;
label_993B:; return;
label_993D:; return;
label_993F:; return;
label_9942:; return;
label_9945:; return;
label_9947:; return;
label_9949:; return;
label_994B:; return;
label_994D:; return;
label_994F:; return;
label_9951:; return;
label_9953:; return;
label_9955:; return;
label_9957:; return;
label_9959:; return;
label_995B:; return;
label_995C:; return;
label_995F:; return;
label_9961:; return;
label_9964:; return;
label_9966:; return;
label_9968:; return;
label_996A:; return;
label_996D:; return;
label_996F:; return;
label_9972:; return;
label_9975:; return;
label_9978:; return;
label_997B:; return;
label_997C:; return;
label_997F:; return;
label_9982:; return;
label_9984:; return;
label_9987:; return;
label_9989:; return;
label_998C:; return;
label_998E:; return;
label_9991:; return;
label_9993:; return;
label_9996:; return;
label_9999:; return;
label_999C:; return;
label_999F:; return;
label_99A1:; return;
label_99A3:; return;
label_99A6:; return;
label_99A9:; return;
label_99AC:; return;
label_99AF:; return;
label_99B0:; return;
label_99B2:; return;
label_99B5:; return;
label_99B7:; return;
label_99BA:; return;
label_99BB:; return;
label_99BD:; return;
label_99BF:; return;
label_99C1:; return;
label_99C3:; return;
label_99C5:; return;
label_99C8:; return;
label_99CB:; return;
label_99CC:; return;
label_99CE:; return;
label_99D0:; return;
label_99D2:; return;
label_99D4:; return;
label_99D6:; return;
label_99D8:; return;
label_99DA:; return;
label_99DC:; return;
label_99DE:; return;
label_99E0:; return;
label_99E2:; return;
label_99E4:; return;
label_99E7:; return;
label_99E9:; return;
label_99EB:; return;
label_99ED:; return;
label_99EF:; return;
label_99F1:; return;
label_99F4:; return;
label_99F6:; return;
label_99F9:; return;
label_99FA:; return;
label_99FC:; return;
label_99FE:; return;
label_9A00:; return;
label_9A02:; return;
label_9A04:; return;
label_9A07:; return;
label_9A09:; return;
label_9A0C:; return;
label_9A0F:; return;
label_9A12:; return;
label_9A13:; return;
label_9A15:; return;
label_9A17:; return;
label_9A19:; return;
label_9A1B:; return;
label_9A1D:; return;
label_9A1E:; return;
label_9A20:; return;
label_9A22:; return;
label_9A25:; return;
label_9A27:; return;
label_9A2A:; return;
label_9A2D:; return;
label_9A30:; return;
label_9A33:; return;
label_9A36:; return;
label_9A39:; return;
label_9A3C:; return;
label_9A3F:; return;
label_9A40:; return;
label_9A41:; return;
label_9A42:; return;
label_9A43:; return;
label_9A45:; return;
label_9A47:; return;
label_9A48:; return;
label_9A4A:; return;
label_9A4D:; return;
label_9A4F:; return;
label_9A52:; return;
label_9A54:; return;
label_9A56:; return;
label_9A58:; return;
label_9A5B:; return;
label_9A5E:; return;
label_9A60:; return;
label_9A62:; return;
label_9A65:; return;
label_9A66:; return;
label_9A67:; return;
label_9A68:; return;
label_9A69:; return;
label_9A6B:; return;
label_9A6D:; return;
label_9A6E:; return;
label_9A70:; return;
label_9A71:; return;
label_9A73:; return;
label_9A75:; return;
label_9A77:; return;
label_9A79:; return;
label_9A7B:; return;
label_9A7D:; return;
label_9A7F:; return;
label_9A81:; return;
label_9A84:; return;
label_9A87:; return;
label_9A89:; return;
label_9A8B:; return;
label_9A8E:; return;
label_9A91:; return;
label_9A94:; return;
label_9A97:; return;
label_9A9A:; return;
label_9A9D:; return;
label_9AA0:; return;
label_9AA3:; return;
label_9AA4:; return;
label_9AA5:; return;
label_9AA6:; return;
label_9AA7:; return;
label_9AA9:; return;
label_9AAB:; return;
label_9AAE:; return;
label_9AB1:; return;
label_9AB4:; return;
label_9AB5:; return;
label_9AB7:; return;
label_9AB9:; return;
label_9ABB:; return;
label_9ABC:; return;
label_9ABD:; return;
label_9ABE:; return;
label_9AC1:; return;
label_9AC4:; return;
label_9AC6:; return;
label_9AC8:; return;
label_9ACB:; return;
label_9ACE:; return;
label_9AD1:; return;
label_9AD3:; return;
label_9AD6:; return;
label_9AD8:; return;
label_9ADA:; return;
label_9ADC:; return;
label_9ADE:; return;
label_9AE0:; return;
label_9AE3:; return;
label_9AE6:; return;
label_9AE8:; return;
label_9AEA:; return;
label_9AEC:; return;
label_9AEE:; return;
label_9AF0:; return;
label_9AF3:; return;
label_9AF5:; return;
label_9AF7:; return;
label_9AF9:; return;
label_9AFB:; return;
label_9AFD:; return;
label_9AFF:; return;
label_9B01:; return;
label_9B03:; return;
label_9B05:; return;
label_9B08:; return;
label_9B0A:; return;
label_9B0C:; return;
label_9B0E:; return;
label_9B0F:; return;
label_9B11:; return;
label_9B13:; return;
label_9B16:; return;
label_9B19:; return;
label_9B1A:; return;
label_9B1B:; return;
label_9B1D:; return;
label_9B1F:; return;
label_9B21:; return;
label_9B23:; return;
label_9B25:; return;
label_9B27:; return;
label_9B29:; return;
label_9B2B:; return;
label_9B2D:; return;
label_9B2F:; return;
label_9B31:; return;
label_9B33:; return;
label_9B36:; return;
label_9B38:; return;
label_9B3B:; return;
label_9B3E:; return;
label_9B3F:; return;
label_9B41:; return;
label_9B43:; return;
label_9B45:; return;
label_9B47:; return;
label_9B49:; return;
label_9B4C:; return;
label_9B4E:; return;
label_9B51:; return;
label_9B53:; return;
label_9B56:; return;
label_9B58:; return;
label_9B5B:; return;
label_9B5D:; return;
label_9B60:; return;
label_9B62:; return;
label_9B65:; return;
label_9B68:; return;
label_9B6A:; return;
label_9B6D:; return;
label_9B6F:; return;
label_9B71:; return;
label_9B74:; return;
label_9B77:; return;
label_9B79:; return;
label_9B7C:; return;
label_9B7E:; return;
label_9B81:; return;
label_9B83:; return;
label_9B86:; return;
label_9B89:; return;
label_9B8C:; return;
label_9B8F:; return;
label_9B92:; return;
label_9B95:; return;
label_9B98:; return;
label_9B9B:; return;
label_9B9E:; return;
label_9BA1:; return;
label_9BA4:; return;
label_9BA6:; return;
label_9BA9:; return;
label_9BAB:; return;
label_9BAE:; return;
label_9BB1:; return;
label_9BB4:; return;
label_9BB7:; return;
label_9BBA:; return;
label_9BBC:; return;
label_9BBE:; return;
label_9BC0:; return;
label_9BC2:; return;
label_9BC4:; return;
label_9BC6:; return;
label_9BC8:; return;
label_9BCA:; return;
label_9BCC:; return;
label_9BCE:; return;
label_9BD0:; return;
label_9BD2:; return;
label_9BD4:; return;
label_9BD7:; return;
label_9BDA:; return;
label_9BDB:; return;
label_9BDE:; return;
label_9BDF:; return;
label_9BE2:; return;
label_9BE5:; return;
label_9BE7:; return;
label_9BEA:; return;
label_9BEC:; return;
label_9BEE:; return;
label_9BF0:; return;
label_9BF2:; return;
label_9BF4:; return;
label_9BF6:; return;
label_9BF8:; return;
label_9BFA:; return;
label_9BFD:; return;
label_9BFF:; return;
label_9C01:; return;
label_9C03:; return;
label_9C06:; return;
label_9C09:; return;
label_9C0C:; return;
label_9C0E:; return;
label_9C10:; return;
label_9C13:; return;
label_9C16:; return;
label_9C18:; return;
label_9C1A:; return;
label_9C1C:; return;
label_9C1E:; return;
label_9C20:; return;
label_9C22:; return;
label_9C24:; return;
label_9C26:; return;
label_9C28:; return;
label_9C2A:; return;
label_9C2C:; return;
label_9C2E:; return;
label_9C30:; return;
label_9C32:; return;
label_9C35:; return;
label_9C37:; return;
label_9C3A:; return;
label_9C3C:; return;
label_9C3F:; return;
label_9C42:; return;
label_9C44:; return;
label_9C47:; return;
label_9C4A:; return;
label_9C4C:; return;
label_9C4F:; return;
label_9C52:; return;
label_9C55:; return;
label_9C57:; return;
label_9C5A:; return;
label_9C5C:; return;
label_9C5E:; return;
label_9C60:; return;
label_9C63:; return;
label_9C65:; return;
label_9C67:; return;
label_9C68:; return;
label_9C6B:; return;
label_9C6D:; return;
label_9C6F:; return;
label_9C71:; return;
label_9C73:; return;
label_9C75:; return;
label_9C77:; return;
label_9C79:; return;
label_9C7A:; return;
label_9C7C:; return;
label_9C7E:; return;
label_9C80:; return;
label_9C82:; return;
label_9C84:; return;
label_9C86:; return;
label_9C88:; return;
label_9C8A:; return;
label_9C8C:; return;
label_9C8E:; return;
label_9C90:; return;
label_9C92:; return;
label_9C94:; return;
label_9C96:; return;
label_9C98:; return;
label_9C9A:; return;
label_9C9C:; return;
label_9C9E:; return;
label_9CA0:; return;
label_9CA2:; return;
label_9CA4:; return;
label_9CA6:; return;
label_9CA8:; return;
label_9CAA:; return;
label_9CAC:; return;
label_9CAE:; return;
label_9CB0:; return;
label_9CB2:; return;
label_9CB4:; return;
label_9CB6:; return;
label_9CB8:; return;
label_9CBA:; return;
label_9CBC:; return;
label_9CBE:; return;
label_9CC0:; return;
label_9CC2:; return;
label_9CC4:; return;
label_9CC6:; return;
label_9CC8:; return;
label_9CCA:; return;
label_9CCC:; return;
label_9CCE:; return;
label_9CD0:; return;
label_9CD2:; return;
label_9CD4:; return;
label_9CD6:; return;
label_9CD8:; return;
label_9CDA:; return;
label_9CDC:; return;
label_9CDE:; return;
label_9CE0:; return;
label_9CE2:; return;
label_9CE4:; return;
label_9CE6:; return;
label_9CE8:; return;
label_9CEA:; return;
label_9CEB:; return;
label_9CEE:; return;
label_9CF1:; return;
label_9CF4:; return;
label_9CF5:; return;
label_9CF6:; return;
label_9CF7:; return;
label_9CF8:; return;
label_9CF9:; return;
label_9CFA:; return;
label_9CFB:; return;
label_9CFC:; return;
label_9CFE:; return;
label_9D00:; return;
label_9D02:; return;
label_9D04:; return;
label_9D06:; return;
label_9D07:; return;
label_9D09:; return;
label_9D0A:; return;
label_9D0B:; return;
label_9D0C:; return;
label_9D0D:; return;
label_9D0E:; return;
label_9D10:; return;
label_9D11:; return;
label_9D13:; return;
label_9D14:; return;
label_9D15:; return;
label_9D18:; return;
label_9D1A:; return;
label_9D1D:; return;
label_9D20:; return;
label_9D23:; return;
label_9D26:; return;
label_9D29:; return;
label_9D2B:; return;
label_9D2D:; return;
label_9D2F:; return;
label_9D31:; return;
label_9D33:; return;
label_9D35:; return;
label_9D37:; return;
label_9D3A:; return;
label_9D3D:; return;
label_9D3F:; return;
label_9D42:; return;
label_9D45:; return;
label_9D47:; return;
label_9D4A:; return;
label_9D4C:; return;
label_9D4D:; return;
label_9D50:; return;
label_9D53:; return;
label_9D56:; return;
label_9D59:; return;
label_9D5B:; return;
label_9D5C:; return;
label_9D5D:; return;
label_9D5E:; return;
label_9D5F:; return;
label_9D60:; return;
label_9D62:; return;
label_9D64:; return;
label_9D66:; return;
label_9D68:; return;
label_9D6A:; return;
label_9D6C:; return;
label_9D6E:; return;
label_9D70:; return;
label_9D72:; return;
label_9D73:; return;
label_9D75:; return;
label_9D77:; return;
label_9D79:; return;
label_9D7B:; return;
label_9D7C:; return;
label_9D7E:; return;
label_9D80:; return;
label_9D82:; return;
label_9D84:; return;
label_9D85:; return;
label_9D87:; return;
label_9D89:; return;
label_9D8B:; return;
label_9D8D:; return;
label_9D8E:; return;
label_9D90:; return;
label_9D92:; return;
label_9D94:; return;
label_9D95:; return;
label_9D97:; return;
label_9D9A:; return;
label_9D9C:; return;
label_9D9E:; return;
label_9DA1:; return;
label_9DA2:; return;
label_9DA4:; return;
label_9DA6:; return;
label_9DA9:; return;
label_9DAB:; return;
label_9DAE:; return;
label_9DAF:; return;
label_9DB1:; return;
label_9DB4:; return;
label_9DB7:; return;
label_9DBA:; return;
label_9DBD:; return;
label_9DC0:; return;
label_9DC3:; return;
label_9DC6:; return;
label_9DC8:; return;
label_9DC9:; return;
label_9DCC:; return;
label_9DCE:; return;
label_9DD0:; return;
label_9DD1:; return;
label_9DD2:; return;
label_9DD4:; return;
label_9DD5:; return;
label_9DD7:; return;
label_9DD8:; return;
label_9DDA:; return;
label_9DDB:; return;
label_9DDC:; return;
label_9DDE:; return;
label_9DDF:; return;
label_9DE0:; return;
label_9DE1:; return;
label_9DE2:; return;
label_9DE4:; return;
label_9DE6:; return;
label_9DE8:; return;
label_9DE9:; return;
label_9DEB:; return;
label_9DED:; return;
label_9DEE:; return;
label_9DF1:; return;
label_9DF2:; return;
label_9DF4:; return;
label_9DF5:; return;
label_9DF7:; return;
label_9DF9:; return;
label_9DFC:; return;
label_9DFE:; return;
label_9E00:; return;
label_9E01:; return;
label_9E04:; return;
label_9E05:; return;
label_9E07:; return;
label_9E09:; return;
label_9E0C:; return;
label_9E0E:; return;
label_9E10:; return;
label_9E11:; return;
label_9E13:; return;
label_9E15:; return;
label_9E18:; return;
label_9E1A:; return;
label_9E1D:; return;
label_9E1F:; return;
label_9E22:; return;
label_9E25:; return;
label_9E27:; return;
label_9E29:; return;
label_9E2C:; return;
label_9E2E:; return;
label_9E31:; return;
label_9E33:; return;
label_9E36:; return;
label_9E39:; return;
label_9E3B:; return;
label_9E3E:; return;
label_9E41:; return;
label_9E43:; return;
label_9E46:; return;
label_9E49:; return;
label_9E4A:; return;
label_9E4D:; return;
label_9E4E:; return;
label_9E51:; return;
label_9E52:; return;
label_9E53:; return;
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
label_9E61:; return;
label_9E62:; return;
label_9E63:; return;
label_9E64:; return;
label_9E65:; return;
label_9E66:; return;
label_9E67:; return;
label_9E68:; return;
label_9E69:; return;
label_9E6B:; return;
label_9E6C:; return;
label_9E6D:; return;
label_9E6E:; return;
label_9E6F:; return;
label_9E70:; return;
label_9E71:; return;
label_9E72:; return;
label_9E73:; return;
label_9E74:; return;
label_9E75:; return;
label_9E76:; return;
label_9E77:; return;
label_9E78:; return;
label_9E79:; return;
label_9E7A:; return;
label_9E7B:; return;
label_9E7C:; return;
label_9E7D:; return;
label_9E7E:; return;
label_9E7F:; return;
label_9E80:; return;
label_9E81:; return;
label_9E83:; return;
label_9E84:; return;
label_9E85:; return;
label_9E86:; return;
label_9E87:; return;
label_9E88:; return;
label_9E8B:; return;
label_9E8C:; return;
label_9E8D:; return;
label_9E8E:; return;
label_9E8F:; return;
label_9E90:; return;
label_9E92:; return;
label_9E93:; return;
label_9E95:; return;
label_9E96:; return;
label_9E97:; return;
label_9E98:; return;
label_9E99:; return;
label_9E9A:; return;
label_9E9B:; return;
label_9E9C:; return;
label_9E9D:; return;
label_9E9E:; return;
label_9EA0:; return;
label_9EA1:; return;
label_9EA3:; return;
label_9EA4:; return;
label_9EA5:; return;
label_9EA6:; return;
label_9EA7:; return;
label_9EA8:; return;
label_9EA9:; return;
label_9EAB:; return;
label_9EAD:; return;
label_9EAE:; return;
label_9EAF:; return;
label_9EB0:; return;
label_9EB1:; return;
label_9EB2:; return;
label_9EB3:; return;
label_9EB4:; return;
label_9EB5:; return;
label_9EB6:; return;
label_9EB7:; return;
label_9EB8:; return;
label_9EB9:; return;
label_9EBB:; return;
label_9EBC:; return;
label_9EBD:; return;
label_9EBE:; return;
label_9EBF:; return;
label_9EC0:; return;
label_9EC1:; return;
label_9EC3:; return;
label_9EC4:; return;
label_9EC5:; return;
label_9EC7:; return;
label_9EC8:; return;
label_9EC9:; return;
label_9ECB:; return;
label_9ECC:; return;
label_9ECD:; return;
label_9ECE:; return;
label_9ED0:; return;
label_9ED1:; return;
label_9ED2:; return;
label_9ED3:; return;
label_9ED4:; return;
label_9ED5:; return;
label_9ED6:; return;
label_9ED7:; return;
label_9ED8:; return;
label_9ED9:; return;
label_9EDA:; return;
label_9EDC:; return;
label_9EDD:; return;
label_9EDF:; return;
label_9EE0:; return;
label_9EE2:; return;
label_9EE5:; return;
label_9EE6:; return;
label_9EE7:; return;
label_9EE8:; return;
label_9EE9:; return;
label_9EEA:; return;
label_9EEB:; return;
label_9EEC:; return;
label_9EED:; return;
label_9EEE:; return;
label_9EEF:; return;
label_9EF0:; return;
label_9EF1:; return;
label_9EF2:; return;
label_9EF3:; return;
label_9EF4:; return;
label_9EF5:; return;
label_9EF6:; return;
label_9EF7:; return;
label_9EF8:; return;
label_9EF9:; return;
label_9EFA:; return;
label_9EFB:; return;
label_9EFC:; return;
label_9EFD:; return;
label_9EFE:; return;
label_9EFF:; return;
label_9F01:; return;
label_9F02:; return;
label_9F04:; return;
label_9F05:; return;
label_9F06:; return;
label_9F08:; return;
label_9F0A:; return;
label_9F0B:; return;
label_9F0C:; return;
label_9F0D:; return;
label_9F0F:; return;
label_9F10:; return;
label_9F11:; return;
label_9F12:; return;
label_9F13:; return;
label_9F14:; return;
label_9F16:; return;
label_9F17:; return;
label_9F19:; return;
label_9F1A:; return;
label_9F1B:; return;
label_9F1C:; return;
label_9F1D:; return;
label_9F1F:; return;
label_9F20:; return;
label_9F23:; return;
label_9F24:; return;
label_9F25:; return;
label_9F26:; return;
label_9F28:; return;
label_9F29:; return;
label_9F2B:; return;
label_9F2C:; return;
label_9F2D:; return;
label_9F2E:; return;
label_9F2F:; return;
label_9F31:; return;
label_9F32:; return;
label_9F34:; return;
label_9F35:; return;
label_9F36:; return;
label_9F37:; return;
label_9F38:; return;
label_9F39:; return;
label_9F3A:; return;
label_9F3B:; return;
label_9F3C:; return;
label_9F3E:; return;
label_9F40:; return;
label_9F42:; return;
label_9F43:; return;
label_9F44:; return;
label_9F45:; return;
label_9F47:; return;
label_9F48:; return;
label_9F4A:; return;
label_9F4B:; return;
label_9F4C:; return;
label_9F4D:; return;
label_9F4E:; return;
label_9F50:; return;
label_9F52:; return;
label_9F53:; return;
label_9F54:; return;
label_9F55:; return;
label_9F57:; return;
label_9F58:; return;
label_9F59:; return;
label_9F5B:; return;
label_9F5C:; return;
label_9F5D:; return;
label_9F5E:; return;
label_9F5F:; return;
label_9F60:; return;
label_9F63:; return;
label_9F64:; return;
label_9F65:; return;
label_9F66:; return;
label_9F67:; return;
label_9F69:; return;
label_9F6A:; return;
label_9F6B:; return;
label_9F6C:; return;
label_9F6D:; return;
label_9F6E:; return;
label_9F6F:; return;
label_9F70:; return;
label_9F71:; return;
label_9F72:; return;
label_9F73:; return;
label_9F74:; return;
label_9F75:; return;
label_9F76:; return;
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
label_9F86:; return;
label_9F88:; return;
label_9F8A:; return;
label_9F8B:; return;
label_9F8D:; return;
label_9F8E:; return;
label_9F8F:; return;
label_9F91:; return;
label_9F92:; return;
label_9F93:; return;
label_9F94:; return;
label_9F95:; return;
label_9F96:; return;
label_9F97:; return;
label_9F99:; return;
label_9F9A:; return;
label_9F9B:; return;
label_9F9C:; return;
label_9F9E:; return;
label_9F9F:; return;
label_9FA0:; return;
label_9FA1:; return;
label_9FA2:; return;
label_9FA5:; return;
label_9FA7:; return;
label_9FA8:; return;
label_9FA9:; return;
label_9FAA:; return;
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
label_9FBF:; return;
label_9FC0:; return;
label_9FC1:; return;
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
label_9FDF:; return;
label_9FE0:; return;
label_9FE1:; return;
label_9FE2:; return;
label_9FE3:; return;
label_9FE4:; return;
label_9FE6:; return;
label_9FE7:; return;
label_9FE8:; return;
label_9FE9:; return;
label_9FEA:; return;
label_9FEB:; return;
label_9FEC:; return;
label_9FED:; return;
label_9FEE:; return;
label_9FEF:; return;
label_9FF0:; return;
label_9FF1:; return;
label_9FF2:; return;
label_9FF3:; return;
label_9FF4:; return;
label_9FF5:; return;
label_9FF6:; return;
label_9FF7:; return;
label_9FF8:; return;
label_9FF9:; return;
label_9FFA:; return;
label_9FFD:; return;
label_9FFE:; return;
label_A000:; return;
label_A003:; return;
label_A005:; return;
label_A008:; return;
label_A00B:; return;
label_A00D:; return;
label_A00F:; return;
label_A012:; return;
label_A015:; return;
label_A017:; return;
label_A019:; return;
label_A01C:; return;
label_A01F:; return;
label_A021:; return;
label_A023:; return;
label_A026:; return;
label_A029:; return;
label_A02B:; return;
label_A02D:; return;
label_A030:; return;
label_A033:; return;
label_A035:; return;
label_A037:; return;
label_A03A:; return;
label_A03B:; return;
label_A03D:; return;
label_A03F:; return;
label_A042:; return;
label_A045:; return;
label_A047:; return;
label_A049:; return;
label_A04C:; return;
label_A04E:; return;
label_A050:; return;
label_A053:; return;
label_A054:; return;
label_A056:; return;
label_A058:; return;
label_A05B:; return;
label_A05C:; return;
label_A05E:; return;
label_A061:; return;
label_A062:; return;
label_A064:; return;
label_A066:; return;
label_A069:; return;
label_A06A:; return;
label_A06C:; return;
label_A06F:; return;
label_A070:; return;
label_A073:; return;
label_A074:; return;
label_A077:; return;
label_A079:; return;
label_A07B:; return;
label_A07D:; return;
label_A080:; return;
label_A083:; return;
label_A085:; return;
label_A087:; return;
label_A08A:; return;
label_A08C:; return;
label_A08E:; return;
label_A091:; return;
label_A094:; return;
label_A096:; return;
label_A098:; return;
label_A099:; return;
label_A09C:; return;
label_A09E:; return;
label_A0A1:; return;
label_A0A4:; return;
label_A0A6:; return;
label_A0A8:; return;
label_A0AA:; return;
label_A0AB:; return;
label_A0AE:; return;
label_A0B0:; return;
label_A0B3:; return;
label_A0B6:; return;
label_A0B8:; return;
label_A0BA:; return;
label_A0BC:; return;
label_A0BD:; return;
label_A0C0:; return;
label_A0C2:; return;
label_A0C5:; return;
label_A0C6:; return;
label_A0C8:; return;
}

void func_90B4_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90B4_b12");
#endif
    func_90B4_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90CA_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90CA_b12");
#endif
    func_90B4_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90D0_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90D0_b12");
#endif
    func_90B4_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90DD_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90DD_b12");
#endif
    func_90B4_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_90F2_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90F2_b12");
#endif
    func_90B4_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_910B_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_910B_b12");
#endif
    func_90B4_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9126_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9126_b12");
#endif
    func_90B4_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9138_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9138_b12");
#endif
    func_90B4_b12_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9164_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9164_b12");
#endif
    func_90B4_b12_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9199_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9199_b12");
#endif
    func_90B4_b12_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91C8_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91C8_b12");
#endif
    func_90B4_b12_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91CA_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91CA_b12");
#endif
    func_90B4_b12_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91EC_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91EC_b12");
#endif
    func_90B4_b12_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_91EF_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_91EF_b12");
#endif
    func_90B4_b12_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9216_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9216_b12");
#endif
    func_90B4_b12_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9236_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9236_b12");
#endif
    func_90B4_b12_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9903_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9903_b12");
#endif
label_9903:;
    /* $9903: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA2 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9905:;
    /* $9905: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_990B;
label_9907:;
    /* $9907: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9909:;
    /* $9909: 95 */ maybe_trigger_vblank(4); nes_write((0xA2 + g_cpu.X) & 0xFF, g_cpu.A);
label_990B:;
    /* $990B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_990C:;
    /* $990C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9903;
    }
label_990E:;
    /* $990E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0200); FLAG_NZ(g_cpu.A);
label_9911:;
    /* $9911: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC7; g_cpu.C=(g_cpu.A>=0xC7)?1:0; FLAG_NZ(r&0xFF); }
label_9913:;
    /* $9913: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_991E;
label_9915:;
    /* $9915: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9917:;
    /* $9917: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_9919:;
    /* $9919: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_992C;
label_991B:;
    /* $991B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x191D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9212, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x991B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_991E:;
    /* $991E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9920:;
    /* $9920: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_9922:;
    /* $9922: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_9924:;
    /* $9924: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_9926:;
    /* $9926: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_992B;
label_9928:;
    /* $9928: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9ABC, 12); return;
label_992B:;
    /* $992B: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_992C:;
    /* $992C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_992E:;
    /* $992E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9930:;
    /* $9930: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1932); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9930, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9933:;
    /* $9933: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA879, 12); return;
}

void func_9785_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9785_b12");
#endif
label_9785:;
    /* $9785: 9D */ maybe_trigger_vblank(5); nes_write((0x1005 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9788:;
    /* $9788: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_978B:;
    /* $978B: 8D */ maybe_trigger_vblank(4); nes_write(0x0787, g_cpu.A);
label_978E:;
    /* $978E: 8D */ maybe_trigger_vblank(4); nes_write(0x078E, g_cpu.A);
label_9791:;
    /* $9791: 8D */ maybe_trigger_vblank(4); nes_write(0x0795, g_cpu.A);
label_9794:;
    /* $9794: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9795:;
    /* $9795: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DD2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9798:;
    /* $9798: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_979B:;
    /* $979B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_979D:;
    /* $979D: 8D */ maybe_trigger_vblank(4); nes_write(0x0788, g_cpu.A);
label_97A0:;
    /* $97A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_97A2:;
    /* $97A2: 8D */ maybe_trigger_vblank(4); nes_write(0x078F, g_cpu.A);
label_97A5:;
    /* $97A5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_97A7:;
    /* $97A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0796, g_cpu.A);
label_97AA:;
    /* $97AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_97AC:;
    /* $97AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_97AF:;
    /* $97AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.A);
label_97B2:;
    /* $97B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.A);
label_97B5:;
    /* $97B5: 8D */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.A);
label_97B8:;
    /* $97B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_97BA:;
    /* $97BA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_97BC:;
    /* $97BC: 8D */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.A);
label_97BF:;
    /* $97BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_97C1:;
    /* $97C1: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x9DA9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97C4:;
    /* $97C4: 8D */ maybe_trigger_vblank(4); nes_write(0x079D, g_cpu.A);
label_97C7:;
    /* $97C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_97C9:;
    /* $97C9: 8D */ maybe_trigger_vblank(4); nes_write(0x079E, g_cpu.A);
label_97CC:;
    /* $97CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x55; FLAG_NZ(g_cpu.A);
label_97CE:;
    /* $97CE: 8D */ maybe_trigger_vblank(4); nes_write(0x079F, g_cpu.A);
label_97D1:;
    /* $97D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_97D3:;
    /* $97D3: 8D */ maybe_trigger_vblank(4); nes_write(0x07A0, g_cpu.A);
label_97D6:;
    /* $97D6: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_97D8:;
    /* $97D8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_97D9:;
    /* $97D9: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_97DA:;
    /* $97DA: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_97DC:;
    /* $97DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x17DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_97DF:;
    /* $97DF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_97E0:;
    /* $97E0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_97E1:;
    /* $97E1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_97E2:;
    /* $97E2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_97E3:;
    /* $97E3: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_97E5:;
    /* $97E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_97E1;
    }
label_97E7:;
    /* $97E7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x09; g_cpu.C=(g_cpu.Y>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_97E9:;
    /* $97E9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1783), 12); return; }
label_97EB:;
    /* $97EB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8D05_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D05_b12");
#endif
label_8D05:;
    /* $8D05: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8D06:;
    /* $8D06: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x06; FLAG_NZ(g_cpu.A);
label_8D08:;
    /* $8D08: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0C07 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D0B:;
    /* $8D0B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D0D:;
    /* $8D0D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D0F:;
    /* $8D0F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D10:;
    /* $8D10: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D12:;
    /* $8D12: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D13:;
    /* $8D13: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D15:;
    /* $8D15: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D16:;
    /* $8D16: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D18:;
    /* $8D18: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8D19:;
    /* $8D19: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D1B:;
    /* $8D1B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8D1D:;
    /* $8D1D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8D1F:;
    /* $8D1F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xCD27); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D22:;
    /* $8D22: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x90CD + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8D25:;
    /* $8D25: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05BE); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D28:;
    /* $8D28: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8D29:;
    /* $8D29: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D29); return;
}

void func_A904_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b12");
#endif
label_A904:;
    /* $A904: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0EFB; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A907:;
    /* $A907: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A909:;
    /* $A909: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0xEE; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A90B:;
    /* $A90B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_A90D:;
    /* $A90D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5EE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A910:;
    /* $A910: EE */ maybe_trigger_vblank(6); { uint16_t a=0xF6ED; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A913:;
    /* $A913: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF6); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5F6 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A918:;
    /* $A918: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xED + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91A:;
    /* $A91A: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE05 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91D:;
    /* $A91D: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FE + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A920:;
    /* $A920: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x06ED + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A923:;
    /* $A923: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_A925:;
    /* $A925: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF506 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A928:;
    /* $A928: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92A:;
    /* $A92A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0E0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92D:;
    /* $A92D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x0E); FLAG_NZ(g_cpu.A);
label_A92F:;
    /* $A92F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF50E + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A932:;
    /* $A932: 0E */ maybe_trigger_vblank(6); { uint16_t a=0xF6ED; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A935:;
    /* $A935: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A92D;
    }
label_A937:;
    /* $A937: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A938:;
    /* $A938: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93A:;
    /* $A93A: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93C:;
    /* $A93C: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFEF0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A93F:;
    /* $A93F: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A940:;
    /* $A940: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE00 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A943:;
    /* $A943: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A944:;
    /* $A944: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A946:;
    /* $A946: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xF8; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A948:;
    /* $A948: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94A:;
    /* $A94A: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94C:;
    /* $A94C: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A94E:;
    /* $A94E: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A950:;
    /* $A950: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A952:;
    /* $A952: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A954:;
    /* $A954: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFE08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A957:;
    /* $A957: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA957); return;
}

void func_A504_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A504_b12");
#endif
label_A504:;
    /* $A504: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A506:;
    /* $A506: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A508:;
    /* $A508: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A50A:;
    /* $A50A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF7 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A50C:;
    /* $A50C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFC03 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A50F:;
    /* $A50F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xF3FC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A512:;
    /* $A512: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A514:;
    /* $A514: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A516:;
    /* $A516: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF7); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A518:;
    /* $A518: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF7 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51A:;
    /* $A51A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51C:;
    /* $A51C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFCF3 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51F:;
    /* $A51F: FB */ maybe_trigger_vblank(7); { uint16_t a=(0x03FC + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A522:;
    /* $A522: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF7); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A524:;
    /* $A524: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A526:;
    /* $A526: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A528:;
    /* $A528: F4 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52A:;
    /* $A52A: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52C:;
    /* $A52C: FC */ maybe_trigger_vblank(4); (void)nes_read((0xFC05 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52F:;
    /* $A52F: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FC + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A532:;
    /* $A532: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A534:;
    /* $A534: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A536:;
    /* $A536: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xF1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A538:;
    /* $A538: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_A539:;
    /* $A539: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xF8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A53B:;
    /* $A53B: FC */ maybe_trigger_vblank(4); (void)nes_read((0x04F8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A53E:;
    /* $A53E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA53E); return;
}

void func_88E8_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_88E8_b12");
#endif
label_88E8:;
    /* $88E8: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x73 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_88EA:;
    /* $88EA: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7102; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88ED:;
    /* $88ED: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x06 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88EF:;
    /* $88EF: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_88F0:;
    /* $88F0: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88F2:;
    /* $88F2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_88F3:;
    /* $88F3: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88F5:;
    /* $88F5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_88F6:;
    /* $88F6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_88F7:;
    /* $88F7: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9783_b12(void) { /* main_met */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9783_b12");
#endif
label_9783:; /* main_met */
    /* $9783: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DC9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9786:;
    /* $9786: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_9788:;
    /* $9788: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_978B:;
    /* $978B: 8D */ maybe_trigger_vblank(4); nes_write(0x0787, g_cpu.A);
label_978E:;
    /* $978E: 8D */ maybe_trigger_vblank(4); nes_write(0x078E, g_cpu.A);
label_9791:;
    /* $9791: 8D */ maybe_trigger_vblank(4); nes_write(0x0795, g_cpu.A);
label_9794:;
    /* $9794: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9795:;
    /* $9795: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DD2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9798:;
    /* $9798: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_979B:;
    /* $979B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_979D:;
    /* $979D: 8D */ maybe_trigger_vblank(4); nes_write(0x0788, g_cpu.A);
label_97A0:;
    /* $97A0: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_97A2:;
    /* $97A2: 8D */ maybe_trigger_vblank(4); nes_write(0x078F, g_cpu.A);
label_97A5:;
    /* $97A5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_97A7:;
    /* $97A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0796, g_cpu.A);
label_97AA:;
    /* $97AA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_97AC:;
    /* $97AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_97AF:;
    /* $97AF: 8D */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.A);
label_97B2:;
    /* $97B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.A);
label_97B5:;
    /* $97B5: 8D */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.A);
label_97B8:;
    /* $97B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_97BA:;
    /* $97BA: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_97BC:;
    /* $97BC: 8D */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.A);
label_97BF:;
    /* $97BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_97C1:;
    /* $97C1: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x9DA9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97C4:;
    /* $97C4: 8D */ maybe_trigger_vblank(4); nes_write(0x079D, g_cpu.A);
label_97C7:;
    /* $97C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_97C9:;
    /* $97C9: 8D */ maybe_trigger_vblank(4); nes_write(0x079E, g_cpu.A);
label_97CC:;
    /* $97CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x55; FLAG_NZ(g_cpu.A);
label_97CE:;
    /* $97CE: 8D */ maybe_trigger_vblank(4); nes_write(0x079F, g_cpu.A);
label_97D1:;
    /* $97D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_97D3:;
    /* $97D3: 8D */ maybe_trigger_vblank(4); nes_write(0x07A0, g_cpu.A);
label_97D6:;
    /* $97D6: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_97D8:;
    /* $97D8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_97D9:;
    /* $97D9: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_97DA:;
    /* $97DA: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_97DC:;
    /* $97DC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x17DE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_97DF:;
    /* $97DF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_97E0:;
    /* $97E0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_97E1:;
    /* $97E1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_97E2:;
    /* $97E2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_97E3:;
    /* $97E3: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_97E5:;
    /* $97E5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_97E1;
    }
label_97E7:;
    /* $97E7: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x09; g_cpu.C=(g_cpu.Y>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_97E9:;
    /* $97E9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9783;
    }
label_97EB:;
    /* $97EB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_80F6_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F6_b12");
#endif
label_80F6:;
    /* $80F6: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0128); FLAG_NZ(g_cpu.A);
label_80F9:;
    /* $80F9: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_80FB:;
    /* $80FB: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x0102); FLAG_NZ(g_cpu.A);
label_80FE:;
    /* $80FE: 8D */ maybe_trigger_vblank(4); nes_write(0x000D, g_cpu.A);
label_8101:;
    /* $8101: 8C */ maybe_trigger_vblank(4); nes_write(0x026A, g_cpu.Y);
label_8104:;
    /* $8104: 8C */ maybe_trigger_vblank(4); nes_write(0x010E, g_cpu.Y);
label_8107:;
    /* $8107: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xCF; g_cpu.C=(g_cpu.Y>=0xCF)?1:0; FLAG_NZ(r&0xFF); }
label_8109:;
    /* $8109: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x02; FLAG_NZ(g_cpu.A);
label_810B:;
    /* $810B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x34 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_810D:;
    /* $810D: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x3628); FLAG_NZ(g_cpu.A);
label_8110:;
    /* $8110: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x01 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8112:;
    /* $8112: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8114:;
    /* $8114: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8115:;
    /* $8115: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_8116:;
    /* $8116: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_8118:;
    /* $8118: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xCD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_811A:;
    /* $811A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x8D + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_811C:;
    /* $811C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0900); FLAG_NZ(g_cpu.A);
label_811F:;
    /* $811F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8120:;
    /* $8120: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8121:;
    /* $8121: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8123:;
    /* $8123: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x2A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8125:;
    /* $8125: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0100); FLAG_NZ(g_cpu.A);
label_8128:;
    /* $8128: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_812A:;
    /* $812A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD1 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_812C:;
    /* $812C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_812D:;
    /* $812D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_812F:;
    /* $812F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x812F); return;
}

void func_81AA_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81AA_b12");
#endif
label_81AA:;
    /* $81AA: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_81AB:;
    /* $81AB: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_81AC:;
    /* $81AC: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x68 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81AE:;
    /* $81AE: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x6800); FLAG_NZ(g_cpu.A);
label_81B1:;
    /* $81B1: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81B2:;
    /* $81B2: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81B3:;
    /* $81B3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_81B4:;
    /* $81B4: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81B5:;
    /* $81B5: 86 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.X);
label_81B7:;
    /* $81B7: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_81B9:;
    /* $81B9: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_81BA:;
    /* $81BA: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x9698 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_81BD:;
    /* $81BD: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_81BF:;
    /* $81BF: 80 */ maybe_trigger_vblank(2); /* NOP */
label_81C1:;
    /* $81C1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x81C1); return;
}

void func_81E1_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_81E1_b12");
#endif
label_81E1:;
    /* $81E1: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x03 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_81E3:;
    /* $81E3: 97 */ maybe_trigger_vblank(4); nes_write((0x02 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_81E5:;
    /* $81E5: 99 */ maybe_trigger_vblank(5); nes_write((0x9B99 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_81E8:;
    /* $81E8: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_81EB:;
    /* $81EB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x03 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81ED:;
    /* $81ED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0D; FLAG_NZ(g_cpu.A);
label_81EF:;
    /* $81EF: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_81F0:;
    /* $81F0: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4B; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_81F2:;
    /* $81F2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x6B + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_81F4:;
    /* $81F4: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x8900); FLAG_NZ(g_cpu.A);
label_81F7:;
    /* $81F7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_81F8:;
    /* $81F8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x60); FLAG_NZ(g_cpu.X);
label_81FA:;
    /* $81FA: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x68; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81FC:;
    /* $81FC: 66 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_81FE:;
    /* $81FE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x60; FLAG_NZ(g_cpu.Y);
label_8200:;
    /* $8200: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x76 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8202:;
    /* $8202: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x007B + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8205:;
    /* $8205: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x3C0D + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8208:;
    /* $8208: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8208); return;
}

void func_8354_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8354_b12");
#endif
label_8354:;
    /* $8354: 8D */ maybe_trigger_vblank(4); nes_write(0x9491, g_cpu.A);
label_8357:;
    /* $8357: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8359:;
    /* $8359: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_835B:;
    /* $835B: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_835D:;
    /* $835D: 95 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.X) & 0xFF, g_cpu.A);
label_835F:;
    /* $835F: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_8362:;
    /* $8362: 92 */ maybe_trigger_vblank(2); /* ILLEGAL $92 — skip 1 */
label_8363:;
    /* $8363: 95 */ maybe_trigger_vblank(4); nes_write((0x90 + g_cpu.X) & 0xFF, g_cpu.A);
label_8365:;
    /* $8365: 94 */ maybe_trigger_vblank(4); nes_write((0x97 + g_cpu.X) & 0xFF, g_cpu.Y);
label_8367:;
    /* $8367: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_836A:;
    /* $836A: 99 */ maybe_trigger_vblank(5); nes_write((0x929C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_836D:;
    /* $836D: 95 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.X) & 0xFF, g_cpu.A);
label_836F:;
    /* $836F: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_8372:;
    /* $8372: 99 */ maybe_trigger_vblank(5); nes_write((0x999C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8375:;
    /* $8375: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_8378:;
    /* $8378: 86 */ maybe_trigger_vblank(3); nes_write(0x81, g_cpu.X);
label_837A:;
    /* $837A: 85 */ maybe_trigger_vblank(3); nes_write(0x88, g_cpu.A);
label_837C:;
    /* $837C: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_837E:;
    /* $837E: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8380:;
    /* $8380: 9D */ maybe_trigger_vblank(5); nes_write((0x9599 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8383:;
    /* $8383: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8384:;
    /* $8384: 9D */ maybe_trigger_vblank(5); nes_write((0x9498 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8387:;
    /* $8387: 97 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8389:;
    /* $8389: 9D */ maybe_trigger_vblank(5); nes_write((0x9693 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_838C:;
    /* $838C: 99 */ maybe_trigger_vblank(5); nes_write((0x929D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_838F:;
    /* $838F: 96 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.Y) & 0xFF, g_cpu.X);
label_8391:;
    /* $8391: 9D */ maybe_trigger_vblank(5); nes_write((0x9894 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8394:;
    /* $8394: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_8397:;
    /* $8397: 8E */ maybe_trigger_vblank(4); nes_write(0x9691, g_cpu.X);
label_839A:;
    /* $839A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_839B:;
    /* $839B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x7603 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_839E:;
    /* $839E: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x76 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_83A0:;
    /* $83A0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x76 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_83A2:;
    /* $83A2: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xB6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_83A4:;
    /* $83A4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_83A5:;
    /* $83A5: 80 */ maybe_trigger_vblank(2); /* NOP */
label_83A7:;
    /* $83A7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x83A7); return;
}

void func_850F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_850F_b12");
#endif
label_850F:;
    /* $850F: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x65); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8511:;
    /* $8511: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x68; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8513:;
    /* $8513: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xA5 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8515:;
    /* $8515: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x65 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8517:;
    /* $8517: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8519:;
    /* $8519: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xA8AA); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_8566_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8566_b12");
#endif
label_8566:;
    /* $8566: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x02 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8568:;
    /* $8568: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8568); return;
}

void func_93BA_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93BA_b12");
#endif
label_93BA:;
    /* $93BA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93BC:;
    /* $93BC: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_93BE:;
    /* $93BE: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93C1:;
    /* $93C1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_93DE;
label_93C3:;
    /* $93C3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93C4:;
    /* $93C4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93C6:;
    /* $93C6: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93C9:;
    /* $93C9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93CA:;
    /* $93CA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93CC:;
    /* $93CC: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93CF:;
    /* $93CF: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_93D1:;
    /* $93D1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93D2:;
    /* $93D2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93D4:;
    /* $93D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_93D7:;
    /* $93D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_93D8:;
    /* $93D8: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_93DA:;
    /* $93DA: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_93D2;
    }
label_93DC:;
    /* $93DC: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_93BA;
    }
label_93DE:;
    /* $93DE: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_93E0:;
    /* $93E0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_93E1:;
    /* $93E1: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_93E3:;
    /* $93E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x93E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_93E6:;
    /* $93E6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_93E8:;
    /* $93E8: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_9412_b12_body(int _entry) {
    switch (_entry) {
        case 1: goto label_941C;
        case 2: goto label_9428;
        case 3: goto label_9449;
        case 4: goto label_9471;
        case 5: goto label_947F;
        case 6: goto label_94B9;
        case 7: goto label_94C7;
        case 8: goto label_94E9;
    }
label_9412:;
    /* $9412: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x00A2 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9415:;
    /* $9415: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_941C;
label_9417:;
    /* $9417: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_9419:;
    /* $9419: 99 */ maybe_trigger_vblank(5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_941C:;
    /* $941C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_941D:;
    /* $941D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9412;
    }
label_941F:;
    /* $941F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9421:;
    /* $9421: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_9423:;
    /* $9423: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_9428;
label_9425:;
    /* $9425: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9581, 12); return;
label_9428:;
    /* $9428: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x142A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9428, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_942B:;
    /* $942B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_942D:;
    /* $942D: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_942F:;
    /* $942F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1431); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x942F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9432:;
    /* $9432: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1434); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9435:;
    /* $9435: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x35; FLAG_NZ(g_cpu.A);
label_9437:;
    /* $9437: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1439); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9437, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_943A:;
    /* $943A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x143C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9936, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x943A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_943D:;
    /* $943D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_943F:;
    /* $943F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9440:;
    /* $9440: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_9442:;
    /* $9442: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_9444:;
    /* $9444: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_9446:;
    /* $9446: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1448); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9446, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9449:;
    /* $9449: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_944B:;
    /* $944B: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_944D:;
    /* $944D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x144F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x944D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9450:;
    /* $9450: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1452); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9453:;
    /* $9453: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x70); FLAG_NZ(g_cpu.A);
label_9455:;
    /* $9455: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9449;
    }
label_9457:;
    /* $9457: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9458:;
    /* $9458: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_945A:;
    /* $945A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x05; FLAG_NZ(g_cpu.X);
label_945C:;
    /* $945C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_945E:;
    /* $945E: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9460:;
    /* $9460: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1462); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9460, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9463:;
    /* $9463: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1465); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_9466:;
    /* $9466: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9468:;
    /* $9468: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9469:;
    /* $9469: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x06 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x06); g_cpu.A=r&0xFF; }
label_946B:;
    /* $946B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_946C:;
    /* $946C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x146E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x939E, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x946C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_946F:;
    /* $946F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_9471:;
    /* $9471: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D46 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9474:;
    /* $9474: 99 */ maybe_trigger_vblank(5); nes_write((0x00E8 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9477:;
    /* $9477: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9478:;
    /* $9478: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9471;
    }
label_947A:;
    /* $947A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x147C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x947A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_947D:;
    /* $947D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_947F:;
    /* $947F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D16 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9482:;
    /* $9482: 99 */ maybe_trigger_vblank(5); nes_write((0x0620 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9485:;
    /* $9485: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9486:;
    /* $9486: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_947F;
    }
label_9488:;
    /* $9488: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_948A:;
    /* $948A: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_948D:;
    /* $948D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_948F:;
    /* $948F: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_9492:;
    /* $9492: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9494:;
    /* $9494: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_9496:;
    /* $9496: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1498); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9496, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9499:;
    /* $9499: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_949C:;
    /* $949C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_949E:;
    /* $949E: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_94A1:;
    /* $94A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14A3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_94A4:;
    /* $94A4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14A6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94A4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94A7:;
    /* $94A7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_94AA:;
    /* $94AA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x74; g_cpu.C=(g_cpu.A>=0x74)?1:0; FLAG_NZ(r&0xFF); }
label_94AC:;
    /* $94AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94B9;
label_94AE:;
    /* $94AE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_94AF:;
    /* $94AF: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94B1:;
    /* $94B1: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_94B4:;
    /* $94B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94B6:;
    /* $94B6: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_94B9:;
    /* $94B9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05A0); FLAG_NZ(g_cpu.A);
label_94BC:;
    /* $94BC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_94BE:;
    /* $94BE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94C7;
label_94C0:;
    /* $94C0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_94C2:;
    /* $94C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_94C4:;
    /* $94C4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94C4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94C7:;
    /* $94C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94CA:;
    /* $94CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_94CD:;
    /* $94CD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_94CF:;
    /* $94CF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_94A7;
    }
label_94D1:;
    /* $94D1: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3C; FLAG_NZ(g_cpu.X);
label_94D3:;
    /* $94D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14D5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_94D6:;
    /* $94D6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_94D9:;
    /* $94D9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_94DB:;
    /* $94DB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94E9;
label_94DD:;
    /* $94DD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_94DE:;
    /* $94DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_94E0:;
    /* $94E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_94E3:;
    /* $94E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94E6:;
    /* $94E6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_94D6;
label_94E9:;
    /* $94E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3C; FLAG_NZ(g_cpu.X);
label_94EB:;
    /* $94EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_94EE:;
    /* $94EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94F0:;
    /* $94F0: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_94F2:;
    /* $94F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_94F4:;
    /* $94F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94F7:;
    /* $94F7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_94F9:;
    /* $94F9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14FB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94FC:;
    /* $94FC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_94FE:;
    /* $94FE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1500); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94FE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9501:;
    /* $9501: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB4; FLAG_NZ(g_cpu.X);
label_9503:;
    /* $9503: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1505); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9506:;
    /* $9506: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9581, 12); return;
}

void func_9412_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9412_b12");
#endif
    func_9412_b12_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_941C_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_941C_b12");
#endif
    func_9412_b12_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9428_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9428_b12");
#endif
    func_9412_b12_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9449_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9449_b12");
#endif
    func_9412_b12_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_9471_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9471_b12");
#endif
    func_9412_b12_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_947F_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_947F_b12");
#endif
    func_9412_b12_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94B9_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94B9_b12");
#endif
    func_9412_b12_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94C7_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94C7_b12");
#endif
    func_9412_b12_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94E9_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94E9_b12");
#endif
    func_9412_b12_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_94A7_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_94A7_b12");
#endif
label_94A7:;
    /* $94A7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_94AA:;
    /* $94AA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x74; g_cpu.C=(g_cpu.A>=0x74)?1:0; FLAG_NZ(r&0xFF); }
label_94AC:;
    /* $94AC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94B9;
label_94AE:;
    /* $94AE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_94AF:;
    /* $94AF: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x04; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_94B1:;
    /* $94B1: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_94B4:;
    /* $94B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94B6:;
    /* $94B6: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_94B9:;
    /* $94B9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05A0); FLAG_NZ(g_cpu.A);
label_94BC:;
    /* $94BC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_94BE:;
    /* $94BE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_94C7;
label_94C0:;
    /* $94C0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_94C2:;
    /* $94C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_94C4:;
    /* $94C4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94C4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94C7:;
    /* $94C7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14C9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94C7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94CA:;
    /* $94CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_94CD:;
    /* $94CD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_94CF:;
    /* $94CF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_94A7;
    }
label_94D1:;
    /* $94D1: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3C; FLAG_NZ(g_cpu.X);
label_94D3:;
    /* $94D3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14D5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_94D6:;
    /* $94D6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_94D9:;
    /* $94D9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_94DB:;
    /* $94DB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_94E9;
label_94DD:;
    /* $94DD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_94DE:;
    /* $94DE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_94E0:;
    /* $94E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_94E3:;
    /* $94E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FD6E(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94E6:;
    /* $94E6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2);
    goto label_94D6;
label_94E9:;
    /* $94E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x3C; FLAG_NZ(g_cpu.X);
label_94EB:;
    /* $94EB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14ED); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_94EE:;
    /* $94EE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_94F0:;
    /* $94F0: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_94F2:;
    /* $94F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_94F4:;
    /* $94F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94F7:;
    /* $94F7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_94F9:;
    /* $94F9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x14FB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94F9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_94FC:;
    /* $94FC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0B; FLAG_NZ(g_cpu.Y);
label_94FE:;
    /* $94FE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1500); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x954A, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x94FE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9501:;
    /* $9501: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB4; FLAG_NZ(g_cpu.X);
label_9503:;
    /* $9503: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1505); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9506:;
    /* $9506: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9581, 12); return;
}

void func_950D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_950D_b12");
#endif
label_950D:;
    /* $950D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_950F:;
    /* $950F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_9511:;
    /* $9511: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_9513:;
    /* $9513: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_952F;
label_9515:;
    /* $9515: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_9517:;
    /* $9517: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9518:;
    /* $9518: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9519:;
    /* $9519: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_951A:;
    /* $951A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_951C:;
    /* $951C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_951D:;
    /* $951D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BB7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9520:;
    /* $9520: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9523:;
    /* $9523: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9BBB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9526:;
    /* $9526: 99 */ maybe_trigger_vblank(5); nes_write((0x0618 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9529:;
    /* $9529: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_952A:;
    /* $952A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_952B:;
    /* $952B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_951D;
    }
label_952D:;
    /* $952D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_953E;
label_952F:; /* main_junk_block */
    /* $952F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0630 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9532:;
    /* $9532: 99 */ maybe_trigger_vblank(5); nes_write((0x0610 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9535:;
    /* $9535: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0638 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9538:;
    /* $9538: 99 */ maybe_trigger_vblank(5); nes_write((0x0618 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_953B:;
    /* $953B: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_953C:;
    /* $953C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_952F;
    }
label_953E:;
    /* $953E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9540:;
    /* $9540: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_9542:;
    /* $9542: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1544); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9545:;
    /* $9545: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9547:;
    /* $9547: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_950D;
    }
label_9549:;
    /* $9549: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9550_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9550_b12");
#endif
label_9550:;
    /* $9550: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x11); FLAG_NZ(g_cpu.Y);
label_9552:;
    /* $9552: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_9554:;
    /* $9554: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9557:;
    /* $9557: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9558:;
    /* $9558: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_955A:;
    /* $955A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_955E;
label_955C:;
    /* $955C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_955E:;
    /* $955E: 99 */ maybe_trigger_vblank(5); nes_write((0x0604 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9561:;
    /* $9561: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9562:;
    /* $9562: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9563:;
    /* $9563: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9554;
    }
label_9565:;
    /* $9565: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9567:;
    /* $9567: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9569:;
    /* $9569: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x156B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_956C:;
    /* $956C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_956E:;
    /* $956E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_956F:;
    /* $956F: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9571:;
    /* $9571: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9573:;
    /* $9573: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9550;
    }
label_9575:;
    /* $9575: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_9577:;
    /* $9577: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9579:;
    /* $9579: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1509), 12); return; }
label_957B:;
    /* $957B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1E; FLAG_NZ(g_cpu.X);
label_957D:;
    /* $957D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x157F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9580:;
    /* $9580: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9554_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9554_b12");
#endif
label_9554:;
    /* $9554: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9557:;
    /* $9557: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9558:;
    /* $9558: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_955A:;
    /* $955A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_955E;
label_955C:;
    /* $955C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_955E:;
    /* $955E: 99 */ maybe_trigger_vblank(5); nes_write((0x0604 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9561:;
    /* $9561: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9562:;
    /* $9562: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9563:;
    /* $9563: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9554;
    }
label_9565:;
    /* $9565: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_9567:;
    /* $9567: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9569:;
    /* $9569: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x156B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_956C:;
    /* $956C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_956E:;
    /* $956E: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_956F:;
    /* $956F: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9571:;
    /* $9571: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_9573:;
    /* $9573: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1550), 12); return; }
label_9575:;
    /* $9575: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_9577:;
    /* $9577: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_9579:;
    /* $9579: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1509), 12); return; }
label_957B:;
    /* $957B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1E; FLAG_NZ(g_cpu.X);
label_957D:;
    /* $957D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x157F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9580:;
    /* $9580: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_970D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_970D_b12");
#endif
label_970D:;
    /* $970D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D4C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9710:;
    /* $9710: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_9712:;
    /* $9712: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D55 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9715:;
    /* $9715: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_9717:;
    /* $9717: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_9719:;
    /* $9719: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_971B:;
    /* $971B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_971E:;
    /* $971E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9749;
label_9720:;
    /* $9720: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9723:;
    /* $9723: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9724:;
    /* $9724: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9726:;
    /* $9726: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9729:;
    /* $9729: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_972C:;
    /* $972C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_972E:;
    /* $972E: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9731:;
    /* $9731: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9732:;
    /* $9732: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9733:;
    /* $9733: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9736:;
    /* $9736: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9739:;
    /* $9739: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_973B:;
    /* $973B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_973C:;
    /* $973C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_973F:;
    /* $973F: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9742:;
    /* $9742: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9743:;
    /* $9743: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9745:;
    /* $9745: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_973C;
    }
label_9747:;
    /* $9747: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_971B;
    }
label_9749:;
    /* $9749: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_974C:;
    /* $974C: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_974E:;
    /* $974E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_974F:;
    /* $974F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9750:;
    /* $9750: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_9752:;
    /* $9752: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1754); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9755:;
    /* $9755: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9756:;
    /* $9756: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9757:;
    /* $9757: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9758:;
    /* $9758: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9759:;
    /* $9759: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_975B:;
    /* $975B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9757;
    }
label_975D:;
    /* $975D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x09; g_cpu.C=(g_cpu.Y>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_975F:;
    /* $975F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_970D;
    }
label_9761:;
    /* $9761: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_971B_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_971B_b12");
#endif
label_971B:;
    /* $971B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_971E:;
    /* $971E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_9749;
label_9720:;
    /* $9720: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9723:;
    /* $9723: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_9724:;
    /* $9724: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9726:;
    /* $9726: 9D */ maybe_trigger_vblank(5); nes_write((0x0781 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9729:;
    /* $9729: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_972C:;
    /* $972C: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_972E:;
    /* $972E: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9731:;
    /* $9731: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9732:;
    /* $9732: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9733:;
    /* $9733: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9736:;
    /* $9736: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9739:;
    /* $9739: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_973B:;
    /* $973B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_973C:;
    /* $973C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9D5E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_973F:;
    /* $973F: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_9742:;
    /* $9742: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_9743:;
    /* $9743: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9745:;
    /* $9745: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_973C;
    }
label_9747:;
    /* $9747: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_971B;
    }
label_9749:;
    /* $9749: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_974C:;
    /* $974C: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_974E:;
    /* $974E: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_974F:;
    /* $974F: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9750:;
    /* $9750: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x0F); FLAG_NZ(g_cpu.X);
label_9752:;
    /* $9752: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1754); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF1A(); g_code_window_base = _swb; }
}
label_9755:;
    /* $9755: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9756:;
    /* $9756: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_9757:;
    /* $9757: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9758:;
    /* $9758: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9759:;
    /* $9759: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_975B:;
    /* $975B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9757;
    }
label_975D:;
    /* $975D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x09; g_cpu.C=(g_cpu.Y>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_975F:;
    /* $975F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x170D), 12); return; }
label_9761:;
    /* $9761: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9961_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9961_b12");
#endif
label_9961:;
    /* $9961: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DED + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9964:;
    /* $9964: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99CC;
label_9966:;
    /* $9966: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x61); FLAG_NZ(g_cpu.A);
label_9968:;
    /* $9968: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99BA;
label_996A:;
    /* $996A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DC9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_996D:;
    /* $996D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_996F:;
    /* $996F: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_9972:;
    /* $9972: 8D */ maybe_trigger_vblank(4); nes_write(0x0787, g_cpu.A);
label_9975:;
    /* $9975: 8D */ maybe_trigger_vblank(4); nes_write(0x078E, g_cpu.A);
label_9978:;
    /* $9978: 8D */ maybe_trigger_vblank(4); nes_write(0x0795, g_cpu.A);
label_997B:;
    /* $997B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_997C:;
    /* $997C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DD2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_997F:;
    /* $997F: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_9982:;
    /* $9982: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9984:;
    /* $9984: 8D */ maybe_trigger_vblank(4); nes_write(0x0788, g_cpu.A);
label_9987:;
    /* $9987: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9989:;
    /* $9989: 8D */ maybe_trigger_vblank(4); nes_write(0x078F, g_cpu.A);
label_998C:;
    /* $998C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_998E:;
    /* $998E: 8D */ maybe_trigger_vblank(4); nes_write(0x0796, g_cpu.A);
label_9991:;
    /* $9991: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9993:;
    /* $9993: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_9996:;
    /* $9996: 8D */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.A);
label_9999:;
    /* $9999: 8D */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.A);
label_999C:;
    /* $999C: 8D */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.A);
label_999F:;
    /* $999F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_99A1:;
    /* $99A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_99A3:;
    /* $99A3: 99 */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99A6:;
    /* $99A6: 99 */ maybe_trigger_vblank(5); nes_write((0x078A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99A9:;
    /* $99A9: 99 */ maybe_trigger_vblank(5); nes_write((0x0791 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99AC:;
    /* $99AC: 99 */ maybe_trigger_vblank(5); nes_write((0x0798 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99AF:;
    /* $99AF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99B0:;
    /* $99B0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99A3;
    }
label_99B2:;
    /* $99B2: 8C */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.Y);
label_99B5:;
    /* $99B5: 84 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.Y);
label_99B7:;
    /* $99B7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19B9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_99BA:;
    /* $99BA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_99BB:;
    /* $99BB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9961;
    }
label_99BD:;
    /* $99BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99BF:;
    /* $99BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99CB;
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:; /* main_metall_dx */
    /* $99C3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_99CB;
label_99C5:;
    /* $99C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x97EC, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:;
    /* $99C8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19CA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_99CB:;
    /* $99CB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_99CC:;
    /* $99CC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99CE:;
    /* $99CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99BA;
    }
label_99D0:;
    /* $99D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99D2:;
    /* $99D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_996A;
    }
label_99D4:;
    /* $99D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x61); FLAG_NZ(g_cpu.A);
label_99D6:;
    /* $99D6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_99D8:;
    /* $99D8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99BA;
    }
label_99DA:;
    /* $99DA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_996A;
    }
label_99DC:;
    /* $99DC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99DE:;
    /* $99DE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99F9;
label_99E0:;
    /* $99E0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_99E2:;
    /* $99E2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_99E4:;
    /* $99E4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19E6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x970B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99E4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99E7:;
    /* $99E7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99E9:;
    /* $99E9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99EB:;
    /* $99EB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_99F4;
label_99ED:;
    /* $99ED: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_99EF:;
    /* $99EF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_99F1:;
    /* $99F1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19F3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x970B, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F4:;
    /* $99F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_99F6:;
    /* $99F6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19F8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9762, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99F6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99F9:;
    /* $99F9: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_996A_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_996A_b12");
#endif
label_996A:;
    /* $996A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DC9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_996D:;
    /* $996D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_996F:;
    /* $996F: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_9972:;
    /* $9972: 8D */ maybe_trigger_vblank(4); nes_write(0x0787, g_cpu.A);
label_9975:;
    /* $9975: 8D */ maybe_trigger_vblank(4); nes_write(0x078E, g_cpu.A);
label_9978:;
    /* $9978: 8D */ maybe_trigger_vblank(4); nes_write(0x0795, g_cpu.A);
label_997B:;
    /* $997B: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_997C:;
    /* $997C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9DD2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_997F:;
    /* $997F: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_9982:;
    /* $9982: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9984:;
    /* $9984: 8D */ maybe_trigger_vblank(4); nes_write(0x0788, g_cpu.A);
label_9987:;
    /* $9987: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_9989:;
    /* $9989: 8D */ maybe_trigger_vblank(4); nes_write(0x078F, g_cpu.A);
label_998C:;
    /* $998C: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_998E:;
    /* $998E: 8D */ maybe_trigger_vblank(4); nes_write(0x0796, g_cpu.A);
label_9991:;
    /* $9991: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9993:;
    /* $9993: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_9996:;
    /* $9996: 8D */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.A);
label_9999:;
    /* $9999: 8D */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.A);
label_999C:;
    /* $999C: 8D */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.A);
label_999F:;
    /* $999F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_99A1:;
    /* $99A1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_99A3:;
    /* $99A3: 99 */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99A6:;
    /* $99A6: 99 */ maybe_trigger_vblank(5); nes_write((0x078A + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99A9:;
    /* $99A9: 99 */ maybe_trigger_vblank(5); nes_write((0x0791 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99AC:;
    /* $99AC: 99 */ maybe_trigger_vblank(5); nes_write((0x0798 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_99AF:;
    /* $99AF: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_99B0:;
    /* $99B0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_99A3;
    }
label_99B2:;
    /* $99B2: 8C */ maybe_trigger_vblank(4); nes_write(0x079C, g_cpu.Y);
label_99B5:;
    /* $99B5: 84 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.Y);
label_99B7:;
    /* $99B7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19B9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_99BA:;
    /* $99BA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_99BB:;
    /* $99BB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1961), 12); return; }
label_99BD:;
    /* $99BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99BF:;
    /* $99BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99CB;
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:; /* main_metall_dx */
    /* $99C3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_99CB;
label_99C5:;
    /* $99C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x97EC, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:;
    /* $99C8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19CA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_99CB:;
    /* $99CB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_99BA_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_99BA_b12");
#endif
label_99BA:;
    /* $99BA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_99BB:;
    /* $99BB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1961), 12); return; }
label_99BD:;
    /* $99BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_99BF:;
    /* $99BF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_99CB;
label_99C1:;
    /* $99C1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_99C3:; /* main_metall_dx */
    /* $99C3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_99CB;
label_99C5:;
    /* $99C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x97EC, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x99C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_99C8:;
    /* $99C8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19CA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_99CB:;
    /* $99CB: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9A6D_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9A6D_b12");
#endif
label_9A6D:;
    /* $9A6D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9A6E:;
    /* $9A6E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x1A4F), 12); return; }
label_9A70:;
    /* $9A70: 60 */ maybe_trigger_vblank(6); g_cpu.S += 2; /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_938B_b12(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_938B_b12");
#endif
label_938B:;
    /* $938B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_938C:;
    /* $938C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_938E:;
    /* $938E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_9390:;
    /* $9390: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1392); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9390, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9393:;
    /* $9393: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_9394:;
    /* $9394: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1396); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA000, 12)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9394, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9397:;
    /* $9397: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9399:;
    /* $9399: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_939B:;
    /* $939B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; } return;
}

