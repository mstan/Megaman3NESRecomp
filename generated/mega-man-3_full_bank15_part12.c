/* mega-man-3_full_bank15_part12.c — PRG bank 15 function bodies (sub-part 12).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_DCB9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DCB9");
#endif
label_DCB9:;
    /* $DCB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xDCB9); return;
}

void func_E78B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E78B");
#endif
label_E78B:;
    /* $E78B: 82 */ maybe_trigger_vblank(2); /* NOP */
label_E78D:;
    /* $E78D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x23); FLAG_NZ(g_cpu.A);
label_E78F:;
    /* $E78F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_E791:;
    /* $E791: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E792:;
    /* $E792: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E793:;
    /* $E793: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E794:;
    /* $E794: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xE7ED + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_E797:;
    /* $E797: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_E799:;
    /* $E799: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E79C:;
    /* $E79C: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_E79E:;
    /* $E79E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ECD2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ECD2");
#endif
label_ECD2:;
    /* $ECD2: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0BF5 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ECD5:;
    /* $ECD5: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ECD7:;
    /* $ECD7: DC */ maybe_trigger_vblank(4); (void)nes_read((0x0BF5 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ECDA:;
    /* $ECDA: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ECDC:;
    /* $ECDC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ECDE:;
    /* $ECDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xECDE); return;
}

void func_ECCA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ECCA");
#endif
label_ECCA:;
    /* $ECCA: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x020F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ECCD:;
    /* $ECCD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ECCE:;
    /* $ECCE: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0F) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ECD0:;
    /* $ECD0: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1C02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ECD3:;
    /* $ECD3: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0B + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ECD5:;
    /* $ECD5: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ECD7:;
    /* $ECD7: DC */ maybe_trigger_vblank(4); (void)nes_read((0x0BF5 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ECDA:;
    /* $ECDA: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_ECDC:;
    /* $ECDC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ECDE:;
    /* $ECDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xECDE); return;
}

void func_E0DB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0DB");
#endif
label_E0DB:;
    /* $E0DB: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_E0DD:;
    /* $E0DD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xE0DD); return;
}

void func_E3DC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E3DC");
#endif
label_E3DC:;
    /* $E3DC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_E3DD:;
    /* $E3DD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2A); FLAG_NZ(g_cpu.A);
label_E3DF:;
    /* $E3DF: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E3E1:;
    /* $E3E1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E403; }
label_E3E3:;
    /* $E3E3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_E411; }
label_E3E5:;
    /* $E3E5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_E3E7:;
    /* $E3E7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E3FF; }
label_E3E9:;
    /* $E3E9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E3EC:;
    /* $E3EC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_E3EE:;
    /* $E3EE: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E3F0:;
    /* $E3F0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E403; }
label_E3F2:;
    /* $E3F2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA3F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E3F5:;
    /* $E3F5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_E3F7:;
    /* $E3F7: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xC0; FLAG_NZ(g_cpu.A);
label_E3F9:;
    /* $E3F9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E3FB:;
    /* $E3FB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E411; }
label_E3FD:;
    /* $E3FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_E465; }
label_E3FF:;
    /* $E3FF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_E401:;
    /* $E401: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E411; }
label_E403:;
    /* $E403: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E404:;
    /* $E404: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA40 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E407:;
    /* $E407: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_E409:;
    /* $E409: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E40B:;
    /* $E40B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E465; }
label_E40D:;
    /* $E40D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E40F:;
    /* $E40F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E430; }
label_E411:;
    /* $E411: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA40 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E414:;
    /* $E414: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_E416:;
    /* $E416: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E465; }
label_E418:;
    /* $E418: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E419:;
    /* $E419: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_E465; }
label_E41B:;
    /* $E41B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA40 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E41E:;
    /* $E41E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_E420:;
    /* $E420: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E425; }
label_E422:;
    /* $E422: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E425:;
    /* $E425: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xC0; FLAG_NZ(g_cpu.A);
label_E427:;
    /* $E427: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x10); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E429:;
    /* $E429: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E425;
    }
label_E42B:;
    /* $E42B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E42D:;
    /* $E42D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA40 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E430:;
    /* $E430: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_E432:;
    /* $E432: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E434:;
    /* $E434: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_E436:;
    /* $E436: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2B); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E438:;
    /* $E438: 84 */ maybe_trigger_vblank(3); nes_write(0x2B, g_cpu.Y);
label_E43A:;
    /* $E43A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E440; }
label_E43C:;
    /* $E43C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_E43E:;
    /* $E43E: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_E440:;
    /* $E440: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA40 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E443:;
    /* $E443: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_E445:;
    /* $E445: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_E447:;
    /* $E447: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_E449:;
    /* $E449: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF9); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E44B:;
    /* $E44B: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E44F; }
label_E44D:;
    /* $E44D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E44F:;
    /* $E44F: 85 */ maybe_trigger_vblank(3); nes_write(0x2D, g_cpu.A);
label_E451:;
    /* $E451: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_E453:;
    /* $E453: 85 */ maybe_trigger_vblank(3); nes_write(0x29, g_cpu.A);
label_E455:;
    /* $E455: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_E457:;
    /* $E457: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_E45A:;
    /* $E45A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E45C:;
    /* $E45C: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_E45F:;
    /* $E45F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x26; FLAG_NZ(g_cpu.A);
label_E461:;
    /* $E461: 85 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.A);
label_E463:;
    /* $E463: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_E464:;
    /* $E464: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E465:;
    /* $E465: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E466:;
    /* $E466: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F53E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F53E");
#endif
label_F53E:;
    /* $F53E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F53F:;
    /* $F53F: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xE0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F541:;
    /* $F541: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xE7); FLAG_NZ(g_cpu.A);
label_F543:;
    /* $F543: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x05 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F545:;
    /* $F545: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x04 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F547:;
    /* $F547: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xF6 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F549:;
    /* $F549: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC3); FLAG_NZ(g_cpu.A);
label_F54B:;
    /* $F54B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F550; }
label_F54D:;
    /* $F54D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xF54D; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F54E:;
    /* $F54E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F54F:;
    /* $F54F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xF54F; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F550:;
    /* $F550: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_F551:;
    /* $F551: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x66 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_F553:;
    /* $F553: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xDB); FLAG_NZ(g_cpu.A);
label_F555:;
    /* $F555: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x0C); FLAG_NZ(g_cpu.A);
label_F557:;
    /* $F557: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x3D + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F559:;
    /* $F559: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x80); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F55B:;
    /* $F55B: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1567), -1); return; }
label_F55D:;
    /* $F55D: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xAC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F55F:;
    /* $F55F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xEE) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F561:;
    /* $F561: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xF561; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F562:; return;
label_F564:; return;
label_F566:; return;
label_F568:; return;
label_F56B:; return;
label_F56D:; return;
label_F56F:; return;
label_F571:; return;
label_F573:; return;
label_F575:; return;
label_F577:; return;
label_F579:; return;
label_F57B:; return;
label_F57D:; return;
label_F57F:; return;
label_F581:; return;
label_F583:; return;
label_F585:; return;
label_F588:; return;
label_F58A:; return;
label_F58C:; return;
label_F58F:; return;
label_F591:; return;
label_F594:; return;
label_F596:; return;
label_F599:; return;
label_F59B:; return;
label_F59D:; return;
label_F5A0:; return;
label_F5A2:; return;
label_F5A5:; return;
label_F5A8:; return;
label_F5A9:; return;
label_F5AA:; return;
label_F5AC:; return;
label_F5AE:; return;
label_F5AF:; return;
label_F5B2:; return;
label_F5B5:; return;
label_F5B8:; return;
label_F5B9:; return;
label_F5BB:; return;
label_F5BD:; return;
label_F5BF:; return;
label_F5C2:; return;
label_F5C3:; return;
label_F5C4:; return;
label_F5C7:; return;
label_F5C9:; return;
label_F5CC:; return;
label_F5CE:; return;
label_F5D0:; return;
label_F5D3:; return;
label_F5D5:; return;
label_F5D8:; return;
label_F5DA:; return;
label_F5DD:; return;
label_F5DF:; return;
label_F5E1:; return;
label_F5E4:; return;
label_F5E6:; return;
label_F5E9:; return;
label_F5EC:; return;
label_F5ED:; return;
label_F5EE:; return;
label_F5F0:; return;
label_F5F1:; return;
label_F5F4:; return;
label_F5F7:; return;
label_F5FA:; return;
label_F5FB:; return;
label_F5FD:; return;
label_F5FF:; return;
label_F601:; return;
label_F604:; return;
label_F605:; return;
label_F606:; return;
label_F608:; return;
label_F60A:; return;
label_F60D:; return;
label_F60F:; return;
label_F612:; return;
label_F614:; return;
label_F617:; return;
label_F619:; return;
label_F61B:; return;
label_F61E:; return;
label_F620:; return;
label_F623:; return;
label_F626:; return;
label_F627:; return;
label_F628:; return;
label_F62A:; return;
label_F62C:; return;
label_F62D:; return;
label_F630:; return;
label_F633:; return;
label_F636:; return;
label_F637:; return;
label_F639:; return;
label_F63B:; return;
label_F63D:; return;
label_F640:; return;
label_F641:; return;
label_F642:; return;
label_F644:; return;
label_F646:; return;
label_F649:; return;
label_F64B:; return;
label_F64E:; return;
label_F650:; return;
label_F653:; return;
label_F655:; return;
label_F657:; return;
label_F65A:; return;
label_F65C:; return;
label_F65F:; return;
label_F662:; return;
label_F663:; return;
label_F664:; return;
label_F666:; return;
label_F667:; return;
label_F66A:; return;
label_F66D:; return;
label_F670:; return;
label_F671:; return;
label_F673:; return;
label_F675:; return;
label_F677:; return;
label_F67A:; return;
label_F67B:; return;
label_F67C:; return;
label_F67E:; return;
label_F680:; return;
label_F683:; return;
label_F685:; return;
label_F688:; return;
label_F68A:; return;
label_F68D:; return;
label_F68F:; return;
label_F692:; return;
label_F694:; return;
label_F696:; return;
label_F699:; return;
label_F69B:; return;
label_F69E:; return;
label_F6A1:; return;
label_F6AC:; return;
label_F6AF:; return;
label_F6B2:; return;
label_F6B5:; return;
label_F6B7:; return;
label_F6B9:; return;
label_F6BB:; return;
label_F6BD:; return;
label_F6BF:; return;
label_F6C1:; return;
label_F6C3:; return;
label_F6C5:; return;
label_F6C8:; return;
label_F6CB:; return;
label_F6CC:; return;
label_F6CD:; return;
label_F6CE:; return;
label_F6D1:; return;
label_F6D3:; return;
label_F6D5:; return;
label_F6D8:; return;
label_F6DA:; return;
label_F6DD:; return;
label_F6E0:; return;
label_F6E9:; return;
label_F6EC:; return;
label_F6EF:; return;
label_F6F2:; return;
label_F6F4:; return;
label_F6F6:; return;
label_F6F8:; return;
label_F6FB:; return;
label_F6FE:; return;
label_F6FF:; return;
label_F700:; return;
label_F702:; return;
label_F704:; return;
label_F706:; return;
label_F709:; return;
label_F70B:; return;
label_F70E:; return;
label_F710:; return;
label_F712:; return;
label_F714:; return;
label_F717:; return;
label_F719:; return;
label_F71C:; return;
label_F71D:; return;
label_F720:; return;
label_F721:; return;
label_F724:; return;
label_F727:; return;
label_F72A:; return;
label_F72D:; return;
label_F730:; return;
label_F732:; return;
label_F735:; return;
label_F737:; return;
label_F73A:; return;
label_F73B:; return;
label_F73E:; return;
label_F73F:; return;
label_F742:; return;
label_F745:; return;
label_F748:; return;
label_F74B:; return;
label_F74E:; return;
label_F750:; return;
label_F753:; return;
label_F755:; return;
label_F758:; return;
label_F759:; return;
label_F75C:; return;
label_F75D:; return;
label_F760:; return;
label_F763:; return;
label_F766:; return;
label_F769:; return;
label_F76C:; return;
label_F76E:; return;
label_F770:; return;
label_F772:; return;
label_F775:; return;
label_F778:; return;
label_F779:; return;
label_F77C:; return;
label_F77D:; return;
label_F780:; return;
label_F783:; return;
label_F786:; return;
label_F789:; return;
label_F78C:; return;
label_F78E:; return;
label_F790:; return;
label_F793:; return;
label_F796:; return;
label_F797:; return;
label_F79A:; return;
label_F79C:; return;
label_F79F:; return;
label_F7A2:; return;
label_F7A5:; return;
label_F7A8:; return;
label_F7AB:; return;
label_F7AC:; return;
label_F7AF:; return;
label_F7B2:; return;
label_F7B5:; return;
label_F7B8:; return;
label_F7BB:; return;
label_F7BD:; return;
label_F7BF:; return;
label_F7C1:; return;
label_F7C4:; return;
label_F7C7:; return;
label_F7C8:; return;
label_F7CB:; return;
label_F7CC:; return;
label_F7CF:; return;
label_F7D2:; return;
label_F7D5:; return;
label_F7D8:; return;
label_F7DB:; return;
label_F7DD:; return;
label_F7DF:; return;
label_F7E2:; return;
label_F7E5:; return;
label_F7E6:; return;
label_F7E8:; return;
label_F7EA:; return;
label_F7EC:; return;
label_F7EE:; return;
label_F7F0:; return;
label_F7F2:; return;
label_F7F5:; return;
label_F7F6:; return;
label_F7F8:; return;
label_F7FB:; return;
label_F7FE:; return;
label_F800:; return;
label_F803:; return;
label_F805:; return;
label_F807:; return;
label_F809:; return;
label_F80C:; return;
label_F80E:; return;
label_F810:; return;
label_F812:; return;
label_F815:; return;
label_F817:; return;
label_F81A:; return;
label_F81B:; return;
label_F81D:; return;
label_F81F:; return;
label_F821:; return;
label_F824:; return;
label_F826:; return;
label_F829:; return;
label_F82A:; return;
label_F82C:; return;
label_F82F:; return;
label_F831:; return;
label_F834:; return;
label_F835:; return;
label_F838:; return;
label_F83A:; return;
label_F83D:; return;
label_F840:; return;
label_F842:; return;
label_F845:; return;
label_F846:; return;
label_F849:; return;
label_F84B:; return;
label_F84E:; return;
label_F851:; return;
label_F854:; return;
label_F856:; return;
label_F858:; return;
label_F85B:; return;
label_F85D:; return;
label_F860:; return;
label_F863:; return;
label_F865:; return;
label_F868:; return;
label_F869:; return;
label_F86B:; return;
label_F86E:; return;
label_F871:; return;
label_F872:; return;
label_F875:; return;
label_F878:; return;
label_F87B:; return;
label_F87D:; return;
label_F87F:; return;
label_F882:; return;
label_F883:; return;
label_F886:; return;
label_F887:; return;
label_F888:; return;
label_F889:; return;
label_F88B:; return;
label_F88D:; return;
label_F890:; return;
label_F892:; return;
label_F894:; return;
label_F897:; return;
label_F898:; return;
label_F89A:; return;
label_F89C:; return;
label_F89E:; return;
label_F8A0:; return;
label_F8A2:; return;
label_F8A4:; return;
label_F8A6:; return;
label_F8A8:; return;
label_F8AA:; return;
label_F8AB:; return;
label_F8AC:; return;
label_F8AE:; return;
label_F8B0:; return;
label_F8B2:; return;
label_F8B3:; return;
label_F8B6:; return;
label_F8B7:; return;
label_F8BA:; return;
label_F8BC:; return;
label_F8BE:; return;
label_F8C0:; return;
label_F8C1:; return;
label_F8C2:; return;
label_F8C5:; return;
label_F8C6:; return;
label_F8C9:; return;
label_F8CA:; return;
label_F8CD:; return;
label_F8D0:; return;
label_F8D1:; return;
label_F8D3:; return;
label_F8D5:; return;
label_F8D7:; return;
label_F8D8:; return;
label_F8D9:; return;
label_F8DB:; return;
label_F8DE:; return;
label_F8DF:; return;
label_F8E2:; return;
label_F8E4:; return;
label_F8E6:; return;
label_F8E8:; return;
label_F8EA:; return;
label_F8EC:; return;
label_F8EE:; return;
label_F8F1:; return;
label_F8F2:; return;
label_F8F5:; return;
label_F8F6:; return;
label_F8F9:; return;
label_F8FC:; return;
label_F8FD:; return;
label_F8FF:; return;
label_F901:; return;
label_F903:; return;
label_F904:; return;
label_F905:; return;
label_F907:; return;
label_F909:; return;
label_F90B:; return;
label_F90C:; return;
label_F90E:; return;
label_F910:; return;
label_F911:; return;
label_F913:; return;
label_F914:; return;
label_F916:; return;
label_F918:; return;
label_F91A:; return;
label_F91B:; return;
label_F91C:; return;
label_F91E:; return;
label_F920:; return;
label_F922:; return;
label_F923:; return;
label_F925:; return;
label_F927:; return;
label_F929:; return;
label_F92A:; return;
label_F92B:; return;
label_F92C:; return;
label_F92D:; return;
label_F92F:; return;
label_F930:; return;
label_F933:; return;
label_F934:; return;
label_F936:; return;
label_F938:; return;
label_F939:; return;
label_F93B:; return;
label_F93D:; return;
label_F93F:; return;
label_F941:; return;
label_F943:; return;
label_F945:; return;
label_F947:; return;
label_F949:; return;
label_F94B:; return;
label_F94D:; return;
label_F950:; return;
label_F951:; return;
label_F954:; return;
label_F957:; return;
label_F959:; return;
label_F95C:; return;
label_F95D:; return;
label_F95F:; return;
label_F961:; return;
label_F962:; return;
label_F964:; return;
label_F966:; return;
label_F967:; return;
label_F969:; return;
label_F96B:; return;
label_F96D:; return;
label_F970:; return;
label_F972:; return;
label_F975:; return;
label_F978:; return;
label_F97A:; return;
label_F97D:; return;
label_F97E:; return;
label_F981:; return;
label_F983:; return;
label_F985:; return;
label_F987:; return;
label_F989:; return;
label_F98C:; return;
label_F98E:; return;
label_F991:; return;
label_F993:; return;
label_F996:; return;
label_F998:; return;
label_F99A:; return;
label_F99D:; return;
label_F99F:; return;
label_F9A1:; return;
label_F9A3:; return;
label_F9A5:; return;
label_F9A8:; return;
label_F9AA:; return;
label_F9AD:; return;
label_F9B0:; return;
label_F9B2:; return;
label_F9B5:; return;
label_F9B7:; return;
label_F9B9:; return;
label_F9BC:; return;
label_F9BE:; return;
label_F9BF:; return;
label_F9C1:; return;
label_F9C4:; return;
label_F9C6:; return;
label_F9C7:; return;
label_F9CA:; return;
label_F9CC:; return;
label_F9CE:; return;
label_F9D0:; return;
label_F9D2:; return;
label_F9D4:; return;
label_F9D6:; return;
label_F9D8:; return;
label_F9DA:; return;
label_F9DD:; return;
label_F9DF:; return;
label_F9E1:; return;
label_F9E4:; return;
label_F9E6:; return;
label_F9E9:; return;
label_F9EB:; return;
label_F9EE:; return;
label_F9F0:; return;
label_F9F2:; return;
label_F9F4:; return;
label_F9F5:; return;
label_F9F6:; return;
label_F9F8:; return;
label_F9FA:; return;
label_F9FC:; return;
label_F9FE:; return;
label_F9FF:; return;
label_FA00:; return;
label_FA03:; return;
label_FA05:; return;
label_FA07:; return;
label_FA09:; return;
label_FA0B:; return;
label_FA0E:; return;
label_FA10:; return;
label_FA13:; return;
label_FA15:; return;
label_FA17:; return;
label_FA1A:; return;
label_FA1C:; return;
label_FA1E:; return;
label_FA21:; return;
label_FA24:; return;
label_FA27:; return;
label_FA29:; return;
label_FA2A:; return;
label_FA2C:; return;
label_FA2F:; return;
label_FA31:; return;
label_FA32:; return;
label_FA35:; return;
label_FA37:; return;
label_FA39:; return;
label_FA3B:; return;
label_FA3D:; return;
label_FA3F:; return;
label_FA41:; return;
label_FA43:; return;
label_FA45:; return;
label_FA47:; return;
label_FA48:; return;
label_FA49:; return;
label_FA4B:; return;
label_FA4D:; return;
label_FA4F:; return;
label_FA51:; return;
label_FA52:; return;
label_FA53:; return;
label_FA56:; return;
label_FA57:; return;
label_FA5A:; return;
label_FA5B:; return;
label_FA5E:; return;
label_FA61:; return;
label_FA62:; return;
label_FA64:; return;
label_FA66:; return;
label_FA68:; return;
label_FA69:; return;
label_FA6B:; return;
label_FA6C:; return;
label_FA6F:; return;
label_FA70:; return;
label_FA73:; return;
label_FA75:; return;
label_FA77:; return;
label_FA79:; return;
label_FA7A:; return;
label_FA7C:; return;
label_FA7D:; return;
label_FA7E:; return;
label_FA81:; return;
label_FA83:; return;
label_FA86:; return;
label_FA89:; return;
label_FA8B:; return;
label_FA8E:; return;
label_FA91:; return;
label_FA92:; return;
label_FA95:; return;
label_FA97:; return;
label_FA9A:; return;
label_FA9D:; return;
label_FA9F:; return;
label_FAA2:; return;
label_FAA3:; return;
label_FAA5:; return;
label_FAA8:; return;
label_FAAA:; return;
label_FAAD:; return;
label_FAAE:; return;
label_FAAF:; return;
label_FAB2:; return;
label_FAB4:; return;
label_FAB7:; return;
label_FAB9:; return;
label_FABC:; return;
label_FAD6:; return;
label_FAD7:; return;
label_FAD9:; return;
label_FADC:; return;
label_FADE:; return;
label_FAE1:; return;
label_FAE2:; return;
label_FAE4:; return;
label_FAE6:; return;
label_FAE8:; return;
label_FAEA:; return;
label_FAEC:; return;
label_FAED:; return;
label_FAF0:; return;
label_FAF2:; return;
label_FAF4:; return;
label_FAF6:; return;
label_FAF9:; return;
label_FAFB:; return;
label_FAFC:; return;
label_FAFF:; return;
label_FB01:; return;
label_FB04:; return;
label_FB06:; return;
label_FB08:; return;
label_FB0A:; return;
label_FB0B:; return;
label_FB0D:; return;
label_FB0F:; return;
label_FB12:; return;
label_FB13:; return;
label_FB16:; return;
label_FB17:; return;
label_FB1A:; return;
label_FB1D:; return;
label_FB1E:; return;
label_FB20:; return;
label_FB22:; return;
label_FB24:; return;
label_FB27:; return;
label_FB29:; return;
label_FB2C:; return;
label_FB2D:; return;
label_FB30:; return;
label_FB32:; return;
label_FB34:; return;
label_FB36:; return;
label_FB38:; return;
label_FB3A:; return;
label_FB3B:; return;
label_FB3D:; return;
label_FB3E:; return;
label_FB40:; return;
label_FB41:; return;
label_FB43:; return;
label_FB44:; return;
label_FB45:; return;
label_FB48:; return;
label_FB4A:; return;
label_FB4C:; return;
label_FB4F:; return;
label_FB52:; return;
label_FB54:; return;
label_FB57:; return;
label_FB5A:; return;
label_FB5D:; return;
label_FB5F:; return;
label_FB61:; return;
label_FB62:; return;
label_FB64:; return;
label_FB65:; return;
label_FB66:; return;
label_FB69:; return;
label_FB6B:; return;
label_FB6E:; return;
label_FB71:; return;
label_FB74:; return;
label_FB75:; return;
label_FB76:; return;
label_FB79:; return;
label_FB7A:; return;
label_FB7B:; return;
label_FB7D:; return;
label_FB7F:; return;
label_FB81:; return;
label_FB83:; return;
label_FB85:; return;
label_FB87:; return;
label_FB89:; return;
label_FB8B:; return;
label_FB8E:; return;
label_FB90:; return;
label_FB93:; return;
label_FB95:; return;
label_FB98:; return;
label_FB9A:; return;
label_FB9C:; return;
label_FB9F:; return;
label_FBA1:; return;
label_FBA3:; return;
label_FBA5:; return;
label_FBA7:; return;
label_FBA9:; return;
label_FBAB:; return;
label_FBAD:; return;
label_FBAF:; return;
label_FBB2:; return;
label_FBB4:; return;
label_FBB6:; return;
label_FBB8:; return;
label_FBBB:; return;
label_FBBD:; return;
label_FBC0:; return;
label_FBC2:; return;
label_FBC5:; return;
label_FBC7:; return;
label_FBCA:; return;
label_FBCC:; return;
label_FBCE:; return;
label_FBD0:; return;
label_FBD1:; return;
label_FBD2:; return;
label_FBD3:; return;
label_FBD6:; return;
label_FBD8:; return;
label_FBD9:; return;
label_FBDB:; return;
label_FBDC:; return;
label_FBDF:; return;
label_FBE0:; return;
label_FBE2:; return;
label_FBE5:; return;
label_FBE6:; return;
label_FBE8:; return;
label_FBEA:; return;
label_FBEC:; return;
label_FBEF:; return;
label_FBF1:; return;
label_FBF3:; return;
label_FBF4:; return;
label_FBF7:; return;
label_FBF9:; return;
label_FBFB:; return;
label_FBFD:; return;
label_FC00:; return;
label_FC02:; return;
label_FC03:; return;
label_FC04:; return;
label_FC05:; return;
label_FC08:; return;
label_FC0B:; return;
label_FC0E:; return;
label_FC10:; return;
label_FC11:; return;
label_FC12:; return;
label_FC13:; return;
label_FC15:; return;
label_FC16:; return;
label_FC19:; return;
label_FC1A:; return;
label_FC1B:; return;
label_FC1C:; return;
label_FC1E:; return;
label_FC1F:; return;
label_FC20:; return;
label_FC21:; return;
label_FC22:; return;
label_FC23:; return;
label_FC25:; return;
label_FC28:; return;
label_FC2A:; return;
label_FC2C:; return;
label_FC2E:; return;
label_FC30:; return;
label_FC33:; return;
label_FC35:; return;
label_FC37:; return;
label_FC39:; return;
label_FC3B:; return;
label_FC3D:; return;
label_FC3F:; return;
label_FC41:; return;
label_FC43:; return;
label_FC45:; return;
label_FC48:; return;
label_FC4A:; return;
label_FC4B:; return;
label_FC4D:; return;
label_FC4F:; return;
label_FC50:; return;
label_FC51:; return;
label_FC52:; return;
label_FC53:; return;
label_FC55:; return;
label_FC58:; return;
label_FC5A:; return;
label_FC5B:; return;
label_FC5D:; return;
label_FC5F:; return;
label_FC60:; return;
label_FC61:; return;
label_FC62:; return;
label_FC63:; return;
label_FC66:; return;
label_FC68:; return;
label_FC6A:; return;
label_FC6C:; return;
label_FC6E:; return;
label_FC70:; return;
label_FC73:; return;
label_FC75:; return;
label_FC77:; return;
label_FC79:; return;
label_FC7B:; return;
label_FC7D:; return;
label_FC7F:; return;
label_FC81:; return;
label_FC83:; return;
label_FC85:; return;
label_FC87:; return;
label_FC8A:; return;
label_FC8C:; return;
label_FC8F:; return;
label_FC91:; return;
label_FC93:; return;
label_FC95:; return;
label_FC97:; return;
label_FC9A:; return;
label_FC9C:; return;
label_FC9E:; return;
label_FCA0:; return;
label_FCA2:; return;
label_FCA4:; return;
label_FCA6:; return;
label_FCA8:; return;
label_FCAA:; return;
label_FCAD:; return;
label_FCAF:; return;
label_FCB2:; return;
label_FCB4:; return;
label_FCB7:; return;
label_FCB8:; return;
label_FCBA:; return;
label_FCBD:; return;
label_FCBF:; return;
label_FCC2:; return;
label_FCC4:; return;
label_FCC6:; return;
label_FCC8:; return;
label_FCCA:; return;
label_FCCD:; return;
label_FCCF:; return;
label_FCD1:; return;
label_FCD3:; return;
label_FCD5:; return;
label_FCD7:; return;
label_FCD9:; return;
label_FCDB:; return;
label_FCDD:; return;
label_FCE0:; return;
label_FCE2:; return;
label_FCE5:; return;
label_FCE7:; return;
label_FCEA:; return;
label_FCEB:; return;
label_FCED:; return;
label_FCEF:; return;
label_FCF1:; return;
label_FCF3:; return;
label_FCF5:; return;
label_FCF7:; return;
label_FCF9:; return;
label_FCFA:; return;
label_FCFC:; return;
label_FCFE:; return;
label_FD00:; return;
label_FD02:; return;
label_FD03:; return;
label_FD05:; return;
label_FD07:; return;
label_FD09:; return;
label_FD0B:; return;
label_FD0D:; return;
label_FD0E:; return;
label_FD10:; return;
label_FD11:; return;
label_FD13:; return;
label_FD15:; return;
label_FD17:; return;
label_FD19:; return;
label_FD1B:; return;
label_FD1D:; return;
label_FD1F:; return;
label_FD21:; return;
label_FD23:; return;
label_FD25:; return;
label_FD26:; return;
label_FD28:; return;
label_FD2A:; return;
label_FD2C:; return;
label_FD2E:; return;
label_FD30:; return;
label_FD32:; return;
label_FD33:; return;
label_FD35:; return;
label_FD37:; return;
label_FD38:; return;
label_FD3A:; return;
label_FD3C:; return;
label_FD3E:; return;
label_FD40:; return;
label_FD42:; return;
label_FD44:; return;
label_FD45:; return;
label_FD47:; return;
label_FD49:; return;
label_FD4B:; return;
label_FD4D:; return;
label_FD4F:; return;
label_FD51:; return;
label_FD52:; return;
label_FD54:; return;
label_FD56:; return;
label_FD58:; return;
label_FD59:; return;
label_FD5B:; return;
label_FD5D:; return;
label_FD60:; return;
label_FD62:; return;
label_FD64:; return;
label_FD66:; return;
label_FD68:; return;
label_FD69:; return;
label_FD6B:; return;
label_FD6E:; return;
label_FD70:; return;
label_FD71:; return;
label_FD73:; return;
label_FD74:; return;
label_FD77:; return;
label_FD78:; return;
label_FD7A:; return;
label_FD7B:; return;
label_FD7D:; return;
label_FD80:; return;
label_FD82:; return;
label_FD83:; return;
label_FD85:; return;
label_FD86:; return;
label_FD89:; return;
label_FD8C:; return;
label_FD8E:; return;
label_FD90:; return;
label_FD91:; return;
label_FD93:; return;
label_FD95:; return;
label_FD98:; return;
label_FD9A:; return;
label_FD9D:; return;
label_FD9E:; return;
label_FDA0:; return;
label_FDA3:; return;
label_FDA5:; return;
label_FDA6:; return;
label_FDA8:; return;
label_FDAA:; return;
label_FDAB:; return;
label_FDAD:; return;
label_FDAF:; return;
label_FDB2:; return;
label_FDB5:; return;
label_FDB8:; return;
label_FDB9:; return;
label_FDBA:; return;
label_FDBC:; return;
label_FDBF:; return;
label_FDC1:; return;
label_FDC3:; return;
label_FDC5:; return;
label_FDC6:; return;
label_FDC8:; return;
label_FDCA:; return;
label_FDCC:; return;
label_FDCD:; return;
label_FDCF:; return;
label_FDD1:; return;
label_FDD2:; return;
label_FDD4:; return;
label_FDD7:; return;
label_FDD9:; return;
label_FDDA:; return;
label_FDDD:; return;
label_FDDF:; return;
label_FDE1:; return;
label_FDE3:; return;
label_FDE4:; return;
label_FDE7:; return;
label_FDE9:; return;
label_FDEB:; return;
label_FDED:; return;
label_FDEE:; return;
label_FDF0:; return;
label_FDF1:; return;
label_FDF3:; return;
label_FDF5:; return;
label_FDF7:; return;
label_FDF9:; return;
label_FDFB:; return;
label_FDFC:; return;
label_FDFE:; return;
label_FE01:; return;
label_FE02:; return;
label_FE04:; return;
label_FE07:; return;
label_FE09:; return;
label_FE0C:; return;
label_FE0E:; return;
label_FE11:; return;
label_FE14:; return;
label_FE17:; return;
label_FE18:; return;
label_FE19:; return;
label_FE1B:; return;
label_FE1E:; return;
label_FE20:; return;
label_FE23:; return;
label_FE25:; return;
label_FE26:; return;
label_FE28:; return;
label_FE2B:; return;
label_FE2D:; return;
label_FE2E:; return;
label_FE31:; return;
label_FE34:; return;
label_FE36:; return;
label_FE37:; return;
label_FE39:; return;
label_FE3A:; return;
label_FE3D:; return;
label_FE3E:; return;
label_FE40:; return;
label_FE42:; return;
label_FE44:; return;
label_FE45:; return;
label_FE47:; return;
label_FE49:; return;
label_FE4B:; return;
label_FE4D:; return;
label_FE4F:; return;
label_FE51:; return;
label_FE53:; return;
label_FE54:; return;
label_FE56:; return;
label_FE58:; return;
label_FE5A:; return;
label_FE5C:; return;
label_FE5F:; return;
label_FE61:; return;
label_FE63:; return;
label_FE64:; return;
label_FE66:; return;
label_FE69:; return;
label_FE6B:; return;
label_FE6D:; return;
label_FE6F:; return;
label_FE71:; return;
label_FE73:; return;
label_FE75:; return;
label_FE77:; return;
label_FE79:; return;
label_FE7B:; return;
label_FE7D:; return;
label_FE7F:; return;
label_FE81:; return;
label_FE84:; return;
label_FE87:; return;
label_FE89:; return;
label_FE8B:; return;
label_FE8D:; return;
label_FE90:; return;
label_FE92:; return;
label_FE94:; return;
label_FE96:; return;
label_FE99:; return;
label_FE9B:; return;
label_FE9D:; return;
label_FE9F:; return;
label_FEA1:; return;
label_FEA3:; return;
label_FEA6:; return;
label_FEA8:; return;
label_FEAA:; return;
label_FEAC:; return;
label_FEAD:; return;
label_FEAF:; return;
label_FEB1:; return;
label_FEB3:; return;
label_FEB5:; return;
label_FEB7:; return;
label_FEB9:; return;
label_FEBA:; return;
label_FEBB:; return;
label_FEBC:; return;
label_FEBD:; return;
label_FEBE:; return;
label_FEC0:; return;
label_FEC3:; return;
label_FEC5:; return;
label_FEC7:; return;
label_FEC8:; return;
label_FEC9:; return;
label_FECB:; return;
label_FECD:; return;
label_FECF:; return;
label_FED1:; return;
label_FED3:; return;
label_FED5:; return;
label_FED7:; return;
label_FED9:; return;
label_FEDB:; return;
label_FEDD:; return;
label_FEDF:; return;
label_FEE2:; return;
label_FEE4:; return;
label_FEE5:; return;
label_FEE6:; return;
label_FEE8:; return;
label_FEEA:; return;
label_FEED:; return;
label_FEEE:; return;
label_FEEF:; return;
label_FEF0:; return;
label_FEF1:; return;
label_FEF2:; return;
label_FEF5:; return;
label_FEF7:; return;
label_FEF9:; return;
label_FEFB:; return;
label_FEFD:; return;
label_FEFF:; return;
label_FF01:; return;
label_FF02:; return;
label_FF05:; return;
label_FF07:; return;
label_FF09:; return;
label_FF0A:; return;
label_FF0D:; return;
label_FF0F:; return;
label_FF11:; return;
label_FF14:; return;
label_FF16:; return;
label_FF17:; return;
label_FF18:; return;
label_FF19:; return;
label_FF1A:; return;
label_FF1D:; return;
label_FF1E:; return;
label_FF20:; return;
label_FF21:; return;
label_FF23:; return;
label_FF25:; return;
label_FF26:; return;
label_FF27:; return;
label_FF28:; return;
label_FF29:; return;
label_FF2C:; return;
label_FF2E:; return;
label_FF30:; return;
label_FF32:; return;
label_FF34:; return;
label_FF35:; return;
label_FF36:; return;
label_FF37:; return;
label_FF39:; return;
label_FF3C:; return;
label_FF3E:; return;
label_FF40:; return;
label_FF41:; return;
label_FF43:; return;
label_FF45:; return;
label_FF47:; return;
label_FF49:; return;
label_FF4C:; return;
label_FF4E:; return;
label_FF51:; return;
label_FF52:; return;
label_FF54:; return;
label_FF56:; return;
label_FF57:; return;
label_FF59:; return;
label_FF5B:; return;
label_FF5E:; return;
label_FF61:; return;
label_FF63:; return;
label_FF65:; return;
label_FF68:; return;
label_FF6A:; return;
label_FF6B:; return;
label_FF6D:; return;
label_FF6F:; return;
label_FF71:; return;
label_FF74:; return;
label_FF76:; return;
label_FF78:; return;
label_FF7B:; return;
label_FF7D:; return;
label_FF7F:; return;
label_FF82:; return;
label_FF84:; return;
label_FF86:; return;
label_FF89:; return;
label_FF8B:; return;
label_FF8D:; return;
label_FF8F:; return;
label_FF90:; return;
label_FF92:; return;
label_FF94:; return;
label_FF96:; return;
label_FF99:; return;
label_FF9B:; return;
label_FF9E:; return;
label_FFA0:; return;
label_FFA3:; return;
label_FFA5:; return;
label_FFA8:; return;
label_FFAA:; return;
label_FFAC:; return;
label_FFAE:; return;
label_FFB0:; return;
label_FFB1:; return;
label_FFB3:; return;
label_FFB5:; return;
label_FFB6:; return;
label_FFB7:; return;
label_FFB9:; return;
label_FFBB:; return;
label_FFBC:; return;
label_FFBF:; return;
label_FFC2:; return;
label_FFC5:; return;
label_FFC7:; return;
label_FFC9:; return;
label_FFCC:; return;
label_FFCE:; return;
label_FFCF:; return;
label_FFD1:; return;
label_FFD3:; return;
label_FFD5:; return;
label_FFD8:; return;
label_FFDA:; return;
label_FFDD:; return;
label_FFDF:; return;
label_FFE1:; return;
label_FFE2:; return;
label_FFE4:; return;
label_FFE7:; return;
label_FFE9:; return;
label_FFEB:; return;
label_FFEC:; return;
label_FFEE:; return;
label_FFF0:; return;
label_FFF3:; return;
label_FFF5:; return;
label_FFF7:; return;
label_FFF8:; return;
label_FFF9:; return;
label_FFFB:; return;
label_FFFD:; return;
}

void func_CA60(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CA60");
#endif
label_CA60:;
    /* $CA60: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x608D + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CA63:;
    /* $CA63: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA2); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_CA65:;
    /* $CA65: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xCA65); return;
}

void func_C88D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C88D");
#endif
label_C88D:;
    /* $C88D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x20 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C88F:;
    /* $C88F: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0xFF; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_C891:;
    /* $C891: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C892:;
    /* $C892: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0894); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC892, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C895:;
    /* $C895: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; } return;
}

void func_DE44(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DE44");
#endif
label_DE44:;
    /* $DE44: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xA2C7, -1); return;
}

void func_FD31_body(int _entry) {
    switch (_entry) {
        case 1: goto label_FD44;
    }
label_FD31:;
    /* $FD31: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x38; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_FD33:;
    /* $FD33: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_FD35:;
    /* $FD35: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD37:;
    /* $FD37: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_FD38:;
    /* $FD38: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x07); FLAG_NZ(g_cpu.A);
label_FD3A:;
    /* $FD3A: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_FD3C:;
    /* $FD3C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_FD44; }
label_FD3E:;
    /* $FD3E: 86 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.X);
label_FD40:;
    /* $FD40: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_FD42:;
    /* $FD42: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_FD44:;
    /* $FD44: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_FD45:;
    /* $FD45: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1D2A), -1); return; }
label_FD47:;
    /* $FD47: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_FD49:;
    /* $FD49: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_FD4B:;
    /* $FD4B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_FD4D:;
    /* $FD4D: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_FD4F:;
    /* $FD4F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x09); FLAG_NZ(g_cpu.X);
label_FD51:;
    /* $FD51: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FD31(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD31");
#endif
    func_FD31_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_FD44(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FD44");
#endif
    func_FD31_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D397_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D39F;
    }
label_D397:;
    /* $D397: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA5); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_D399:;
    /* $D399: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x29) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D39B:;
    /* $D39B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D39D:;
    /* $D39D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC8 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_D39F:;
    /* $D39F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13A1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD39F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D3A2:;
    /* $D3A2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D3A4:;
    /* $D3A4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_D3A6:;
    /* $D3A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D3A9; }
label_D3A8:;
    /* $D3A8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D3A9:;
    /* $D3A9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D3AB:;
    /* $D3AB: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D3AD:;
    /* $D3AD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_D3AF:;
    /* $D3AF: 85 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.A);
label_D3B1:;
    /* $D3B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_D3B3:;
    /* $D3B3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13B5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD3B3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D3B6:;
    /* $D3B6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_D3B9:;
    /* $D3B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D3BA:;
    /* $D3BA: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_D3BC:;
    /* $D3BC: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_D3BF:;
    /* $D3BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_D3C1:;
    /* $D3C1: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D3C4:;
    /* $D3C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D3C6:;
    /* $D3C6: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D3C9:;
    /* $D3C9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_D3CB:;
    /* $D3CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0304, g_cpu.A);
label_D3CE:;
    /* $D3CE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_D3D1:;
    /* $D3D1: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_D3D4:;
    /* $D3D4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_D3D6:;
    /* $D3D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_D3D8:;
    /* $D3D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13DA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD3D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D3DB:;
    /* $D3DB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_D3DE:;
    /* $D3DE: 8D */ maybe_trigger_vblank(4); nes_write(0x0364, g_cpu.A);
label_D3E1:;
    /* $D3E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_D3E4:;
    /* $D3E4: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_D3E7:;
    /* $D3E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_D3EA:;
    /* $D3EA: 8D */ maybe_trigger_vblank(4); nes_write(0x03C4, g_cpu.A);
label_D3ED:;
    /* $D3ED: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_D3F0:;
    /* $D3F0: 8D */ maybe_trigger_vblank(4); nes_write(0x03E4, g_cpu.A);
label_D3F3:;
    /* $D3F3: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D3F5:;
    /* $D3F5: 8E */ maybe_trigger_vblank(4); nes_write(0x0484, g_cpu.X);
label_D3F8:;
    /* $D3F8: 8E */ maybe_trigger_vblank(4); nes_write(0x0324, g_cpu.X);
label_D3FB:;
    /* $D3FB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D412; }
label_D3FD:;
    /* $D3FD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_D3FF:;
    /* $D3FF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1401); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD3FF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D402:;
    /* $D402: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D455; }
label_D404:;
    /* $D404: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_D406:;
    /* $D406: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D408:;
    /* $D408: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D412; }
label_D40A:;
    /* $D40A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x31); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D40C:;
    /* $D40C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D412; }
label_D40E:;
    /* $D40E: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_D410:;
    /* $D410: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D412:;
    /* $D412: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x31); FLAG_NZ(g_cpu.A);
label_D414:;
    /* $D414: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_D416:;
    /* $D416: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D420; }
label_D418:;
    /* $D418: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_D41A:;
    /* $D41A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x141C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD41A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D41D:;
    /* $D41D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD425, -1); return;
label_D420:;
    /* $D420: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_D422:;
    /* $D422: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1424); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD422, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D425:;
    /* $D425: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D427:;
    /* $D427: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_D429:;
    /* $D429: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D42B:;
    /* $D42B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_D42D:;
    /* $D42D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D42F:;
    /* $D42F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D431:;
    /* $D431: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_D433:;
    /* $D433: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_D435:;
    /* $D435: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D43D; }
label_D437:;
    /* $D437: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D439:;
    /* $D439: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D43B:;
    /* $D43B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D43D:;
    /* $D43D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D43E:;
    /* $D43E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D440:;
    /* $D440: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1442); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD440, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D443:;
    /* $D443: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D445:;
    /* $D445: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_D447:;
    /* $D447: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D470; }
label_D449:;
    /* $D449: 85 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.A);
label_D44B:;
    /* $D44B: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D44D:;
    /* $D44D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D44F:;
    /* $D44F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D451:;
    /* $D451: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D471; }
label_D453:;
    /* $D453: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D45D; }
label_D455:;
    /* $D455: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D457:;
    /* $D457: 85 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.A);
label_D459:;
    /* $D459: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D45B:;
    /* $D45B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D45F; }
label_D45D:;
    /* $D45D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D45F:;
    /* $D45F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1461); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD45F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D462:;
    /* $D462: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_D464:;
    /* $D464: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D467:;
    /* $D467: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D469:;
    /* $D469: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D46C:;
    /* $D46C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D46E:;
    /* $D46E: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D470:;
    /* $D470: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D471:;
    /* $D471: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_D473:;
    /* $D473: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D476:;
    /* $D476: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D478:;
    /* $D478: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D47B:;
    /* $D47B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCEAD, -1); return;
}

void func_D397(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D397");
#endif
    func_D397_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D39F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D39F");
#endif
    func_D397_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C0C4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C0C4");
#endif
label_C0C4:;
    /* $C0C4: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x8D; g_cpu.C=(g_cpu.Y>=0x8D)?1:0; FLAG_NZ(r&0xFF); }
label_C0C6:;
    /* $C0C6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_C0C8:;
    /* $C0C8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x9B); FLAG_NZ(g_cpu.X);
label_C0CA:;
    /* $C0CA: 9D */ maybe_trigger_vblank(5); nes_write((0xE000 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C0CD:;
    /* $C0CD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0E7; }
label_C0CF:;
    /* $C0CF: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x78); FLAG_NZ(g_cpu.X);
label_C0D1:;
    /* $C0D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_C0D3:;
    /* $C0D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0DD; }
label_C0D5:;
    /* $C0D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_C0D7:;
    /* $C0D7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x51); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C0D9:;
    /* $C0D9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C0DD; }
label_C0DB:;
    /* $C0DB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_C0DD:;
    /* $C0DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C0E0:;
    /* $C0E0: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C0E2:;
    /* $C0E2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4DA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C0E5:;
    /* $C0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C0E7:;
    /* $C0E7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C0E9:;
    /* $C0E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_C0EB:;
    /* $C0EB: 86 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.X);
label_C0ED:;
    /* $C0ED: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C0EE:;
    /* $C0EE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_C0F0:;
    /* $C0F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C0F2:;
    /* $C0F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_C0F4:;
    /* $C0F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0FE; }
label_C0F6:;
    /* $C0F6: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C0F8:;
    /* $C0F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0FE; }
label_C0FA:;
    /* $C0FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C0FC:;
    /* $C0FC: 95 */ maybe_trigger_vblank(4); nes_write((0x80 + g_cpu.X) & 0xFF, g_cpu.A);
label_C0FE:;
    /* $C0FE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C0FF:;
    /* $C0FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C100:;
    /* $C100: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C101:;
    /* $C101: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C102:;
    /* $C102: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C103:;
    /* $C103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C0F0;
    }
label_C105:;
    /* $C105: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_C106:;
    /* $C106: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0107 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C109:;
    /* $C109: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_C10B:;
    /* $C10B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C10E:;
    /* $C10E: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_C110:;
    /* $C110: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_C112:;
    /* $C112: 9D */ maybe_trigger_vblank(5); nes_write((0x0107 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C115:;
    /* $C115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_C117:;
    /* $C117: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C11A:;
    /* $C11A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C11B:;
    /* $C11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C11C:;
    /* $C11C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C11D:;
    /* $C11D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C11E:;
    /* $C11E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C11F:;
    /* $C11F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_C120:;
    /* $C120: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC120; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F6B4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F6B4");
#endif
label_F6B4:;
    /* $F6B4: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xE0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_F6B6:;
    /* $F6B6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xF6B6); return;
}

void func_DA4B_body(int _entry) {
    switch (_entry) {
        case 1: goto label_DA55;
        case 2: goto label_DA70;
        case 3: goto label_DA6C;
        case 4: goto label_DA7A;
        case 5: goto label_DA82;
        case 6: goto label_DABE;
        case 7: goto label_DAB9;
        case 8: goto label_DAAA;
        case 9: goto label_DACA;
        case 10: goto label_DB02;
        case 11: goto label_DB06;
        case 12: goto label_DA86;
        case 13: goto label_DB86;
        case 14: goto label_DA7F;
        case 15: goto label_DB14;
        case 16: goto label_DB51;
        case 17: goto label_DAD8;
        case 18: goto label_DB28;
        case 19: goto label_DAA8;
        case 20: goto label_DAD3;
        case 21: goto label_DADC;
        case 22: goto label_DADE;
        case 23: goto label_DB7C;
        case 24: goto label_DB40;
        case 25: goto label_DB4C;
        case 26: goto label_DA9A;
        case 27: goto label_DACE;
        case 28: goto label_DA7D;
        case 29: goto label_DAC4;
        case 30: goto label_DB83;
        case 31: goto label_DB60;
    }
label_DA4B:;
    /* $DA4B: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x49; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA4D:;
    /* $DA4D: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x108D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_DA50:;
    /* $DA50: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA52:;
    /* $DA52: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x1885 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_DA55:;
    /* $DA55: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DA57:;
    /* $DA57: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A59); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDA57, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DA5A:;
    /* $DA5A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DA6C; }
label_DA5C:;
    /* $DA5C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_DA5F:;
    /* $DA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA6C; }
label_DA61:;
    /* $DA61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_DA63:;
    /* $DA63: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DA66:;
    /* $DA66: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA6C; }
label_DA68:;
    /* $DA68: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A6A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDA68, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DA6B:;
    /* $DA6B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DA6C:;
    /* $DA6C: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA6E:;
    /* $DA6E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_DA70:;
    /* $DA70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DA72:;
    /* $DA72: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_DA74:;
    /* $DA74: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA7A; }
label_DA76:;
    /* $DA76: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_DA78:;
    /* $DA78: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA82; }
label_DA7A:;
    /* $DA7A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0310 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA7D:;
    /* $DA7D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1A02), -1); return; }
label_DA7F:;
    /* $DA7F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DA80:;
    /* $DA80: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA70;
    }
label_DA82:;
    /* $DA82: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DA84:;
    /* $DA84: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_DA86:;
    /* $DA86: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DA92; }
label_DA88:;
    /* $DA88: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_DA8A:;
    /* $DA8A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DA92; }
label_DA8C:;
    /* $DA8C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_DA8E:;
    /* $DA8E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x18; g_cpu.C=(g_cpu.A>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_DA90:;
    /* $DA90: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DA92:;
    /* $DA92: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DA94:;
    /* $DA94: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_DA96:;
    /* $DA96: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAA6; }
label_DA98:;
    /* $DA98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x37; FLAG_NZ(g_cpu.A);
label_DA9A:;
    /* $DA9A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DA9C:;
    /* $DA9C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAB4; }
label_DA9E:;
    /* $DA9E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DAA0:;
    /* $DAA0: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_DAA2:;
    /* $DAA2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x37; FLAG_NZ(g_cpu.A);
label_DAA4:;
    /* $DAA4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAAC; }
label_DAA6:;
    /* $DAA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_DAA8:;
    /* $DAA8: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAAA:;
    /* $DAAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAB4; }
label_DAAC:;
    /* $DAAC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AAE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDAAC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAAF:;
    /* $DAAF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_DAB1:;
    /* $DAB1: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_DAB4:;
    /* $DAB4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_DAB7:;
    /* $DAB7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DAB9:;
    /* $DAB9: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DABC:;
    /* $DABC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DB2B; }
label_DABE:;
    /* $DABE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DAC0:;
    /* $DAC0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_DAC2:;
    /* $DAC2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DAC4:;
    /* $DAC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DAC6:;
    /* $DAC6: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_DAC8:;
    /* $DAC8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DACA:;
    /* $DACA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_DACC:;
    /* $DACC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAD1; }
label_DACE:;
    /* $DACE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xDB89, -1); return;
label_DAD1:;
    /* $DAD1: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_DAD3:;
    /* $DAD3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_DAD6:;
    /* $DAD6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DAD8:;
    /* $DAD8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_DB00; }
label_DADA:;
    /* $DADA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DAEF; }
label_DADC:;
    /* $DADC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DADE:;
    /* $DADE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AE0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDADE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAE1:;
    /* $DAE1: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DAE3:;
    /* $DAE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DAE5:;
    /* $DAE5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAE8:;
    /* $DAE8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAEA:;
    /* $DAEA: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_DAED:;
    /* $DAED: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAEF:;
    /* $DAEF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_DAF1:;
    /* $DAF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AF3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDAF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAF4:;
    /* $DAF4: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DAF6:;
    /* $DAF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DAF8:;
    /* $DAF8: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAFB:;
    /* $DAFB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAFD:;
    /* $DAFD: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_DB00:;
    /* $DB00: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DB02:;
    /* $DB02: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DB04:;
    /* $DB04: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DB07; }
label_DB06:;
    /* $DB06: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB07:;
    /* $DB07: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB0A:;
    /* $DB0A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DB0D:;
    /* $DB0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB12; }
label_DB0F:;
    /* $DB0F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B11); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB0F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB12:;
    /* $DB12: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_DB14:;
    /* $DB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB88; }
label_DB16:;
    /* $DB16: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DB18:;
    /* $DB18: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DB88; }
label_DB1A:;
    /* $DB1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_DB1D:;
    /* $DB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DB1F:;
    /* $DB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB2C; }
label_DB21:;
    /* $DB21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_DB23:;
    /* $DB23: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DB26:;
    /* $DB26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_DB28:;
    /* $DB28: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DB2B:;
    /* $DB2B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DB2C:;
    /* $DB2C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB2E:;
    /* $DB2E: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DB31:;
    /* $DB31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_DB33:;
    /* $DB33: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DB36:;
    /* $DB36: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DB39:;
    /* $DB39: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DB3A:;
    /* $DB3A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0500); FLAG_NZ(g_cpu.Y);
label_DB3D:;
    /* $DB3D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xDD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_DB40:;
    /* $DB40: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_DB42:;
    /* $DB42: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5B; FLAG_NZ(g_cpu.A);
label_DB44:;
    /* $DB44: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B46); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB44, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB47:;
    /* $DB47: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB49:;
    /* $DB49: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB4C:;
    /* $DB4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_DB4E:;
    /* $DB4E: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB51:;
    /* $DB51: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCE1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB54:;
    /* $DB54: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB57:;
    /* $DB57: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_DB5A:;
    /* $DB5A: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB5D:;
    /* $DB5D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCD1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB60:;
    /* $DB60: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB63:;
    /* $DB63: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC71 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB66:;
    /* $DB66: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB69:;
    /* $DB69: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC89 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB6C:;
    /* $DB6C: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB6F:;
    /* $DB6F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB72:;
    /* $DB72: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB75:;
    /* $DB75: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB78:;
    /* $DB78: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB7B:;
    /* $DB7B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_DB7C:;
    /* $DB7C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB7D:;
    /* $DB7D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_DB7F:;
    /* $DB7F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DB42;
    }
label_DB81:;
    /* $DB81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_DB83:;
    /* $DB83: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B85); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB83, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB86:;
    /* $DB86: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_DB88:;
    /* $DB88: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DA4B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA4B");
#endif
    func_DA4B_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA55(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA55");
#endif
    func_DA4B_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA70(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA70");
#endif
    func_DA4B_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA6C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA6C");
#endif
    func_DA4B_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA7A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA7A");
#endif
    func_DA4B_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA82(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA82");
#endif
    func_DA4B_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DABE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DABE");
#endif
    func_DA4B_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DAB9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAB9");
#endif
    func_DA4B_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DAAA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAAA");
#endif
    func_DA4B_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DACA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DACA");
#endif
    func_DA4B_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB02(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB02");
#endif
    func_DA4B_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB06(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB06");
#endif
    func_DA4B_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA86(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA86");
#endif
    func_DA4B_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB86(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB86");
#endif
    func_DA4B_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA7F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA7F");
#endif
    func_DA4B_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB14");
#endif
    func_DA4B_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB51(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB51");
#endif
    func_DA4B_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DAD8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAD8");
#endif
    func_DA4B_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB28(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB28");
#endif
    func_DA4B_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DAA8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAA8");
#endif
    func_DA4B_body(19);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DAD3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAD3");
#endif
    func_DA4B_body(20);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DADC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DADC");
#endif
    func_DA4B_body(21);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DADE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DADE");
#endif
    func_DA4B_body(22);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB7C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB7C");
#endif
    func_DA4B_body(23);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB40(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB40");
#endif
    func_DA4B_body(24);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB4C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB4C");
#endif
    func_DA4B_body(25);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA9A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA9A");
#endif
    func_DA4B_body(26);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DACE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DACE");
#endif
    func_DA4B_body(27);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA7D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA7D");
#endif
    func_DA4B_body(28);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DAC4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAC4");
#endif
    func_DA4B_body(29);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB83(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB83");
#endif
    func_DA4B_body(30);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DB60(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DB60");
#endif
    func_DA4B_body(31);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EEFE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EEFE");
#endif
label_EEFE:;
    /* $EEFE: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_EF01:;
    /* $EF01: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_EF03:;
    /* $EF03: 82 */ maybe_trigger_vblank(2); /* NOP */
label_EF05:;
    /* $EF05: 8D */ maybe_trigger_vblank(4); nes_write(0x0789, g_cpu.A);
label_EF08:;
    /* $EF08: 8D */ maybe_trigger_vblank(4); nes_write(0x0790, g_cpu.A);
label_EF0B:;
    /* $EF0B: 8D */ maybe_trigger_vblank(4); nes_write(0x0797, g_cpu.A);
label_EF0E:;
    /* $EF0E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EF10:;
    /* $EF10: 8D */ maybe_trigger_vblank(4); nes_write(0x079E, g_cpu.A);
label_EF13:;
    /* $EF13: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x68); FLAG_NZ(g_cpu.A);
label_EF15:;
    /* $EF15: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_EF26; }
label_EF17:;
    /* $EF17: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_EF19:;
    /* $EF19: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_EF1B:;
    /* $EF1B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_EF1D:;
    /* $EF1D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F1F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E88D(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEF1D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EF20:;
    /* $EF20: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F22); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E7F4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEF20, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EF23:;
    /* $EF23: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF2D(); g_code_window_base = _swb; } return;
label_EF26:;
    /* $EF26: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_EF27:;
    /* $EF27: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F29); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEF27, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EF2A:;
    /* $EF2A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0F2C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E7F1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xEF2A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_EF2D:;
    /* $EF2D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_EF2F:;
    /* $EF2F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EF32:;
    /* $EF32: 9D */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EF35:;
    /* $EF35: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EF38:;
    /* $EF38: 9D */ maybe_trigger_vblank(5); nes_write((0x078A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EF3B:;
    /* $EF3B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EF3E:;
    /* $EF3E: 9D */ maybe_trigger_vblank(5); nes_write((0x0791 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EF41:;
    /* $EF41: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06CC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EF44:;
    /* $EF44: 9D */ maybe_trigger_vblank(5); nes_write((0x0798 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EF47:;
    /* $EF47: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_EF48:;
    /* $EF48: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EF2F;
    }
label_EF4A:;
    /* $EF4A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_EF4C:;
    /* $EF4C: 8D */ maybe_trigger_vblank(4); nes_write(0x079F, g_cpu.A);
label_EF4F:;
    /* $EF4F: 8E */ maybe_trigger_vblank(4); nes_write(0x07A0, g_cpu.X);
label_EF52:;
    /* $EF52: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_EF54:;
    /* $EF54: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_EF56:;
    /* $EF56: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_EF58:;
    /* $EF58: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_EF65; }
label_EF5A:;
    /* $EF5A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_EF5C:;
    /* $EF5C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x079C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_EF5F:;
    /* $EF5F: 9D */ maybe_trigger_vblank(5); nes_write((0x078E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_EF62:;
    /* $EF62: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_EF63:;
    /* $EF63: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_EF5C;
    }
label_EF65:;
    /* $EF65: 86 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.X);
label_EF67:;
    /* $EF67: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D09D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D09D");
#endif
label_D09D:;
    /* $D09D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x05; FLAG_NZ(g_cpu.Y);
label_D09F:;
    /* $D09F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x32); FLAG_NZ(g_cpu.A);
label_D0A1:;
    /* $D0A1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D0A6; }
label_D0A3:;
    /* $D0A3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10A5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD370, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD0A3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D0A6:;
    /* $D0A6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E01C_body(int _entry) {
    switch (_entry) {
        case 1: goto label_E022;
        case 2: goto label_E020;
    }
label_E01C:;
    /* $E01C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA9); FLAG_NZ(g_cpu.A);
label_E01E:;
    /* $E01E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E020:;
    /* $E020: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_E022:;
    /* $E022: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E01C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E01C");
#endif
    func_E01C_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E022(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E022");
#endif
    func_E01C_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E020(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E020");
#endif
    func_E01C_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C0A3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C0A3");
#endif
label_C0A3:;
    /* $C0A3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x20); FLAG_NZ(g_cpu.A);
label_C0A5:;
    /* $C0A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFA); FLAG_NZ(g_cpu.A);
label_C0A7:;
    /* $C0A7: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C0AA:;
    /* $C0AA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_C0AC:;
    /* $C0AC: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_C0AF:;
    /* $C0AF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_C0B1:;
    /* $C0B1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_C0B3:;
    /* $C0B3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C0B5:;
    /* $C0B5: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C0B8:;
    /* $C0B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00BA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF41(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC0B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C0BB:;
    /* $C0BB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_C0BD:;
    /* $C0BD: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C0C0:;
    /* $C0C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_C0C2:;
    /* $C0C2: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C0C5:;
    /* $C0C5: 8D */ maybe_trigger_vblank(4); nes_write(0xC001, g_cpu.A);
label_C0C8:;
    /* $C0C8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x9B); FLAG_NZ(g_cpu.X);
label_C0CA:;
    /* $C0CA: 9D */ maybe_trigger_vblank(5); nes_write((0xE000 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C0CD:;
    /* $C0CD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0E7; }
label_C0CF:;
    /* $C0CF: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x78); FLAG_NZ(g_cpu.X);
label_C0D1:;
    /* $C0D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_C0D3:;
    /* $C0D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0DD; }
label_C0D5:;
    /* $C0D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_C0D7:;
    /* $C0D7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x51); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_C0D9:;
    /* $C0D9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_C0DD; }
label_C0DB:;
    /* $C0DB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_C0DD:;
    /* $C0DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C0E0:;
    /* $C0E0: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C0E2:;
    /* $C0E2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4DA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C0E5:;
    /* $C0E5: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C0E7:;
    /* $C0E7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C0E9:;
    /* $C0E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_C0EB:;
    /* $C0EB: 86 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.X);
label_C0ED:;
    /* $C0ED: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C0EE:;
    /* $C0EE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_C0F0:;
    /* $C0F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_C0F2:;
    /* $C0F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_C0F4:;
    /* $C0F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0FE; }
label_C0F6:;
    /* $C0F6: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C0F8:;
    /* $C0F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C0FE; }
label_C0FA:;
    /* $C0FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C0FC:;
    /* $C0FC: 95 */ maybe_trigger_vblank(4); nes_write((0x80 + g_cpu.X) & 0xFF, g_cpu.A);
label_C0FE:;
    /* $C0FE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C0FF:;
    /* $C0FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C100:;
    /* $C100: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C101:;
    /* $C101: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_C102:;
    /* $C102: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C103:;
    /* $C103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C0F0;
    }
label_C105:;
    /* $C105: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_C106:;
    /* $C106: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0107 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C109:;
    /* $C109: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_C10B:;
    /* $C10B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C10E:;
    /* $C10E: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_C110:;
    /* $C110: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_C112:;
    /* $C112: 9D */ maybe_trigger_vblank(5); nes_write((0x0107 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C115:;
    /* $C115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_C117:;
    /* $C117: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C11A:;
    /* $C11A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C11B:;
    /* $C11B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C11C:;
    /* $C11C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C11D:;
    /* $C11D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C11E:;
    /* $C11E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C11F:;
    /* $C11F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_C120:;
    /* $C120: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC120; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F804(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F804");
#endif
label_F804:;
    /* $F804: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC9 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_F806:;
    /* $F806: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x11B0 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F809:;
    /* $F809: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F80C:;
    /* $F80C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_F80E:;
    /* $F80E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F81A; }
label_F810:;
    /* $F810: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_F812:;
    /* $F812: 9D */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F815:;
    /* $F815: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_F817:;
    /* $F817: 9D */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F81A:;
    /* $F81A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E00B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E00B");
#endif
label_E00B:;
    /* $E00B: 80 */ maybe_trigger_vblank(2); /* NOP */
label_E00D:;
    /* $E00D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_E00F:;
    /* $E00F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_E012:;
    /* $E012: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E015:;
    /* $E015: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_E018:;
    /* $E018: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E023; }
label_E01A:;
    /* $E01A: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E01D:;
    /* $E01D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E01F:;
    /* $E01F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0021); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE01F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E022:;
    /* $E022: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E023:;
    /* $E023: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_E026:;
    /* $E026: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_E028:;
    /* $E028: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_E02A:;
    /* $E02A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E068; }
label_E02C:;
    /* $E02C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_E02F:;
    /* $E02F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_E031:;
    /* $E031: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E05A; }
label_E033:;
    /* $E033: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_E035:;
    /* $E035: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E038:;
    /* $E038: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E03D; }
label_E03A:;
    /* $E03A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x003C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE03A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E03D:;
    /* $E03D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E040:;
    /* $E040: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_E043:;
    /* $E043: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_E045:;
    /* $E045: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E08B; }
label_E047:;
    /* $E047: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_E049:;
    /* $E049: 8D */ maybe_trigger_vblank(4); nes_write(0x05DF, g_cpu.A);
label_E04C:;
    /* $E04C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E04E:;
    /* $E04E: 8D */ maybe_trigger_vblank(4); nes_write(0x05FF, g_cpu.A);
label_E051:;
    /* $E051: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_E054:;
    /* $E054: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_E056:;
    /* $E056: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_E059:;
    /* $E059: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E05A:;
    /* $E05A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_E05C:;
    /* $E05C: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_E05F:;
    /* $E05F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_E061:;
    /* $E061: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_E064:;
    /* $E064: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E067:;
    /* $E067: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E068:;
    /* $E068: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_E06A:;
    /* $E06A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_E079; }
label_E06C:;
    /* $E06C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_E06F:;
    /* $E06F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_E07D; }
label_E071:;
    /* $E071: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E074:;
    /* $E074: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_E076:;
    /* $E076: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_E079:;
    /* $E079: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E07C:;
    /* $E07C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E07D:;
    /* $E07D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_E07F:;
    /* $E07F: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_E082:;
    /* $E082: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E084:;
    /* $E084: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_E087:;
    /* $E087: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_E089:;
    /* $E089: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_E08B:;
    /* $E08B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E0A2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0A2");
#endif
label_E0A2:;
    /* $E0A2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E0A0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_E0AE;
        case 2: goto label_E0A1;
    }
label_E0A0:;
    /* $E0A0: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_E0A1:;
    /* $E0A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_E0A4:;
    /* $E0A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x68; g_cpu.C=(g_cpu.A>=0x68)?1:0; FLAG_NZ(r&0xFF); }
label_E0A6:;
    /* $E0A6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0B2; }
label_E0A8:;
    /* $E0A8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_E0AE; }
label_E0AA:;
    /* $E0AA: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E0AD:;
    /* $E0AD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E0AE:;
    /* $E0AE: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E0B1:;
    /* $E0B1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_E0B2:;
    /* $E0B2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_E0B4:;
    /* $E0B4: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E0B7:;
    /* $E0B7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E0BC; }
label_E0B9:;
    /* $E0B9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00BB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0B9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0BC:;
    /* $E0BC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E0BF:;
    /* $E0BF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_E119; }
label_E0C1:;
    /* $E0C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_E0C3:;
    /* $E0C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_E0C6:;
    /* $E0C6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_E0C9:;
    /* $E0C9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_E0CB:;
    /* $E0CB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_E119; }
label_E0CD:;
    /* $E0CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00CF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE0CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E0D0:;
    /* $E0D0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_E119; }
label_E0D2:;
    /* $E0D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_E0D4:;
    /* $E0D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0D7:;
    /* $E0D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_E0D9:;
    /* $E0D9: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0DC:;
    /* $E0DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E0DE:;
    /* $E0DE: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0E1:;
    /* $E0E1: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0E4:;
    /* $E0E4: 99 */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0E7:;
    /* $E0E7: 99 */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0EA:;
    /* $E0EA: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0ED:;
    /* $E0ED: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0F0:;
    /* $E0F0: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0F3:;
    /* $E0F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_E0F5:;
    /* $E0F5: 99 */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0F8:;
    /* $E0F8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_E0FA:;
    /* $E0FA: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E0FD:;
    /* $E0FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC4; FLAG_NZ(g_cpu.A);
label_E0FF:;
    /* $E0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E102:;
    /* $E102: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_E105:;
    /* $E105: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E108:;
    /* $E108: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E109:;
    /* $E109: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E10C:;
    /* $E10C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE166 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E10F:;
    /* $E10F: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E112:;
    /* $E112: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_E114:;
    /* $E114: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E117:;
    /* $E117: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_E119:;
    /* $E119: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E0A0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0A0");
#endif
    func_E0A0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E0AE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0AE");
#endif
    func_E0A0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E0A1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E0A1");
#endif
    func_E0A0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EF60_body(int _entry) {
    switch (_entry) {
        case 1: goto label_EF65;
    }
label_EF60:;
    /* $EF60: 8E */ maybe_trigger_vblank(4); nes_write(0xCA07, g_cpu.X);
label_EF63:;
    /* $EF63: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0F5C), -1); return; }
label_EF65:;
    /* $EF65: 86 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.X);
label_EF67:;
    /* $EF67: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_EF60(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF60");
#endif
    func_EF60_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_EF65(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_EF65");
#endif
    func_EF60_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F1C9_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F1CE;
    }
label_F1C9:;
    /* $F1C9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F1CB:;
    /* $F1CB: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x16D0); FLAG_NZ(g_cpu.A);
label_F1CE:;
    /* $F1CE: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05A0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1D1:;
    /* $F1D1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_F1D3:;
    /* $F1D3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F1D4:;
    /* $F1D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_F1D6:;
    /* $F1D6: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F1D7:;
    /* $F1D7: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1D9:;
    /* $F1D9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F1E4; }
label_F1DB:;
    /* $F1DB: 9D */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F1DE:;
    /* $F1DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_F1E0:;
    /* $F1E0: 9D */ maybe_trigger_vblank(5); nes_write((0x04C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F1E3:;
    /* $F1E3: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F1E4:;
    /* $F1E4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F1E5:;
    /* $F1E5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8100 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1E8:;
    /* $F1E8: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_F1EA:;
    /* $F1EA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1ED:;
    /* $F1ED: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_F1EF:;
    /* $F1EF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_F1F1:;
    /* $F1F1: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F1F3:;
    /* $F1F3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_F1F4:;
    /* $F1F4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x19; FLAG_NZ(g_cpu.Y);
label_F1F6:;
    /* $F1F6: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F1F7:;
    /* $F1F7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_F1FD; }
label_F1F9:;
    /* $F1F9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_F1FB:;
    /* $F1FB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x14; FLAG_NZ(g_cpu.Y);
label_F1FD:;
    /* $F1FD: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_F1FF:;
    /* $F1FF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF5); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F201:;
    /* $F201: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F20C; }
label_F203:;
    /* $F203: 84 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.Y);
label_F205:;
    /* $F205: 86 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.X);
label_F207:;
    /* $F207: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1209); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF207, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F20A:;
    /* $F20A: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x05); FLAG_NZ(g_cpu.X);
label_F20C:;
    /* $F20C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_F20E:;
    /* $F20E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F210:;
    /* $F210: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F211:;
    /* $F211: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F213:;
    /* $F213: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_F214:;
    /* $F214: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F217:;
    /* $F217: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_F219:;
    /* $F219: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_F21B:;
    /* $F21B: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F21C:;
    /* $F21C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_F21D:;
    /* $F21D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBE00 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F220:;
    /* $F220: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_F221:;
    /* $F221: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x02; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F223:;
    /* $F223: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_F225:;
    /* $F225: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF00 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F228:;
    /* $F228: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F22A:;
    /* $F22A: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_F22C:;
    /* $F22C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x97); FLAG_NZ(g_cpu.X);
label_F22E:;
    /* $F22E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F28F; }
label_F230:;
    /* $F230: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_F232:;
    /* $F232: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_F234:;
    /* $F234: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_F236:;
    /* $F236: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_F238:;
    /* $F238: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F248; }
label_F23A:;
    /* $F23A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_F23C:;
    /* $F23C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_F23E:;
    /* $F23E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F244; }
label_F240:;
    /* $F240: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_F242:;
    /* $F242: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F248; }
label_F244:;
    /* $F244: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB0; FLAG_NZ(g_cpu.A);
label_F246:;
    /* $F246: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_F248:;
    /* $F248: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F249:;
    /* $F249: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F24B:;
    /* $F24B: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F24E:;
    /* $F24E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_F250:;
    /* $F250: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F251:;
    /* $F251: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F253:;
    /* $F253: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F256:;
    /* $F256: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F258:;
    /* $F258: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F25E; }
label_F25A:;
    /* $F25A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F260; }
label_F25C:;
    /* $F25C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F290; }
label_F25E:;
    /* $F25E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F290; }
label_F260:;
    /* $F260: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0200 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F263:;
    /* $F263: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F265:;
    /* $F265: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F290; }
label_F267:;
    /* $F267: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F268:;
    /* $F268: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F26A:;
    /* $F26A: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_F26C:;
    /* $F26C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x11); FLAG_NZ(g_cpu.A);
label_F26E:;
    /* $F26E: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F271:;
    /* $F271: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x13); FLAG_NZ(g_cpu.A);
label_F273:;
    /* $F273: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F274:;
    /* $F274: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F276:;
    /* $F276: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F279:;
    /* $F279: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x05) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F27B:;
    /* $F27B: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F281; }
label_F27D:;
    /* $F27D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F283; }
label_F27F:;
    /* $F27F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F291; }
label_F281:;
    /* $F281: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F291; }
label_F283:;
    /* $F283: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_F284:;
    /* $F284: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_F285:;
    /* $F285: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_F286:;
    /* $F286: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_F287:;
    /* $F287: 86 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.X);
label_F289:;
    /* $F289: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F28F; }
label_F28B:;
    /* $F28B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F28D:;
    /* $F28D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F230;
    }
label_F28F:;
    /* $F28F: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F290:;
    /* $F290: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_F291:;
    /* $F291: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_F293:;
    /* $F293: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F296:;
    /* $F296: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F28B;
    }
label_F298:;
    /* $F298: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_F29A:;
    /* $F29A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_F29B:;
    /* $F29B: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F2AD; }
label_F29D:;
    /* $F29D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_F29F:;
    /* $F29F: 86 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.X);
label_F2A1:;
    /* $F2A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12A3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F2BB(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF2A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F2A4:;
    /* $F2A4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F2A6:;
    /* $F2A6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x10); FLAG_NZ(g_cpu.X);
label_F2A8:;
    /* $F2A8: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_F2AA:;
    /* $F2AA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F2A1;
    }
label_F2AC:;
    /* $F2AC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F2AD:;
    /* $F2AD: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x02; FLAG_NZ(g_cpu.X);
label_F2AF:;
    /* $F2AF: 86 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.X);
label_F2B1:;
    /* $F2B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12B3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F2BB(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF2B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F2B4:;
    /* $F2B4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F2B6:;
    /* $F2B6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x10); FLAG_NZ(g_cpu.X);
label_F2B8:;
    /* $F2B8: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_F2B1;
    }
label_F2BA:;
    /* $F2BA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F1C9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1C9");
#endif
    func_F1C9_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F1CE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F1CE");
#endif
    func_F1C9_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F7FA_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F7FC;
    }
label_F7FA:;
    /* $F7FA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xBD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F7FC:;
    /* $F7FC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F7FA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F7FA");
#endif
    func_F7FA_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F7FC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F7FC");
#endif
    func_F7FA_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F7AE_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F7B0;
    }
label_F7AE:;
    /* $F7AE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x9D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F7B0:;
    /* $F7B0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_F7B2:;
    /* $F7B2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x03C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F7B5:;
    /* $F7B5: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0460 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F7B8:;
    /* $F7B8: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F7BB:;
    /* $F7BB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_F7BD:;
    /* $F7BD: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_F7C7; }
label_F7BF:;
    /* $F7BF: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x0F + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x0F); g_cpu.A=r&0xFF; }
label_F7C1:;
    /* $F7C1: 9D */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F7C4:;
    /* $F7C4: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x03E0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_F7C7:;
    /* $F7C7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F7AE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F7AE");
#endif
    func_F7AE_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F7B0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F7B0");
#endif
    func_F7AE_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F3FA_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F401;
        case 2: goto label_F403;
        case 3: goto label_F405;
        case 4: goto label_F409;
    }
label_F3FA:;
    /* $F3FA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_F3FB:;
    /* $F3FB: 99 */ maybe_trigger_vblank(5); nes_write((0x7FA2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_F3FE:;
    /* $F3FE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xB9; FLAG_NZ(g_cpu.X);
label_F400:;
    /* $F400: 7A */ maybe_trigger_vblank(2); /* NOP */
label_F401:;
    /* $F401: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xFC); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F403:;
    /* $F403: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F405:;
    /* $F405: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x3B); FLAG_NZ(g_cpu.A);
label_F407:;
    /* $F407: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x9B); FLAG_NZ(g_cpu.A);
label_F409:;
    /* $F409: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xF409; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F3FA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F3FA");
#endif
    func_F3FA_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F401(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F401");
#endif
    func_F3FA_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F403(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F403");
#endif
    func_F3FA_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F405(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F405");
#endif
    func_F3FA_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F409(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F409");
#endif
    func_F3FA_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_FF1F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FF1F");
#endif
label_FF1F:;
    /* $FF1F: FA */ maybe_trigger_vblank(2); /* NOP */
label_FF20:;
    /* $FF20: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FBDD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FBDD");
#endif
label_FBDD:;
    /* $FBDD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DA95_body(int _entry) {
    switch (_entry) {
        case 1: goto label_DAA6;
    }
label_DA95:;
    /* $DA95: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xD0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA97:;
    /* $DA97: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x37A9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA9A:;
    /* $DA9A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DA9C:;
    /* $DA9C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAB4; }
label_DA9E:;
    /* $DA9E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DAA0:;
    /* $DAA0: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_DAA2:;
    /* $DAA2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x37; FLAG_NZ(g_cpu.A);
label_DAA4:;
    /* $DAA4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAAC; }
label_DAA6:;
    /* $DAA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_DAA8:;
    /* $DAA8: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAAA:;
    /* $DAAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAB4; }
label_DAAC:;
    /* $DAAC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AAE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDAAC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAAF:;
    /* $DAAF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_DAB1:;
    /* $DAB1: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_DAB4:;
    /* $DAB4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_DAB7:;
    /* $DAB7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DAB9:;
    /* $DAB9: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DABC:;
    /* $DABC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DB2B; }
label_DABE:;
    /* $DABE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DAC0:;
    /* $DAC0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_DAC2:;
    /* $DAC2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DAC4:;
    /* $DAC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DAC6:;
    /* $DAC6: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_DAC8:;
    /* $DAC8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DACA:;
    /* $DACA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_DACC:;
    /* $DACC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAD1; }
label_DACE:;
    /* $DACE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xDB89, -1); return;
label_DAD1:;
    /* $DAD1: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_DAD3:;
    /* $DAD3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_DAD6:;
    /* $DAD6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DAD8:;
    /* $DAD8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_DB00; }
label_DADA:;
    /* $DADA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DAEF; }
label_DADC:;
    /* $DADC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DADE:;
    /* $DADE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AE0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDADE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAE1:;
    /* $DAE1: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DAE3:;
    /* $DAE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DAE5:;
    /* $DAE5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAE8:;
    /* $DAE8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAEA:;
    /* $DAEA: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_DAED:;
    /* $DAED: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAEF:;
    /* $DAEF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_DAF1:;
    /* $DAF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AF3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDAF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAF4:;
    /* $DAF4: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DAF6:;
    /* $DAF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DAF8:;
    /* $DAF8: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAFB:;
    /* $DAFB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAFD:;
    /* $DAFD: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_DB00:;
    /* $DB00: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DB02:;
    /* $DB02: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DB04:;
    /* $DB04: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DB07; }
label_DB06:;
    /* $DB06: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB07:;
    /* $DB07: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB0A:;
    /* $DB0A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DB0D:;
    /* $DB0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB12; }
label_DB0F:;
    /* $DB0F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B11); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB0F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB12:;
    /* $DB12: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_DB14:;
    /* $DB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB88; }
label_DB16:;
    /* $DB16: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DB18:;
    /* $DB18: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DB88; }
label_DB1A:;
    /* $DB1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_DB1D:;
    /* $DB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DB1F:;
    /* $DB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB2C; }
label_DB21:;
    /* $DB21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_DB23:;
    /* $DB23: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DB26:;
    /* $DB26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_DB28:;
    /* $DB28: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DB2B:;
    /* $DB2B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DB2C:;
    /* $DB2C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB2E:;
    /* $DB2E: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DB31:;
    /* $DB31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_DB33:;
    /* $DB33: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DB36:;
    /* $DB36: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DB39:;
    /* $DB39: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DB3A:;
    /* $DB3A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0500); FLAG_NZ(g_cpu.Y);
label_DB3D:;
    /* $DB3D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xDD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_DB40:;
    /* $DB40: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_DB42:;
    /* $DB42: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5B; FLAG_NZ(g_cpu.A);
label_DB44:;
    /* $DB44: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B46); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB44, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB47:;
    /* $DB47: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB49:;
    /* $DB49: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB4C:;
    /* $DB4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_DB4E:;
    /* $DB4E: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB51:;
    /* $DB51: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCE1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB54:;
    /* $DB54: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB57:;
    /* $DB57: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_DB5A:;
    /* $DB5A: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB5D:;
    /* $DB5D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCD1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB60:;
    /* $DB60: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB63:;
    /* $DB63: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC71 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB66:;
    /* $DB66: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB69:;
    /* $DB69: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC89 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB6C:;
    /* $DB6C: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB6F:;
    /* $DB6F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB72:;
    /* $DB72: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB75:;
    /* $DB75: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB78:;
    /* $DB78: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB7B:;
    /* $DB7B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_DB7C:;
    /* $DB7C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB7D:;
    /* $DB7D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_DB7F:;
    /* $DB7F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DB42;
    }
label_DB81:;
    /* $DB81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_DB83:;
    /* $DB83: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B85); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB83, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB86:;
    /* $DB86: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_DB88:;
    /* $DB88: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_DA95(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA95");
#endif
    func_DA95_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DAA6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DAA6");
#endif
    func_DA95_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F8AF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8AF");
#endif
label_F8AF:;
    /* $F8AF: DA */ maybe_trigger_vblank(2); /* NOP */
label_F8B0:;
    /* $F8B0: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_F8B2:;
    /* $F8B2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D613_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D621;
        case 2: goto label_D618;
    }
label_D613:;
    /* $D613: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x34); FLAG_NZ(g_cpu.Y);
label_D615:;
    /* $D615: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0300 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D618:;
    /* $D618: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x160C), -1); return; }
label_D61A:;
    /* $D61A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x05C0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D61D:;
    /* $D61D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x62; g_cpu.C=(g_cpu.A>=0x62)?1:0; FLAG_NZ(r&0xFF); }
label_D61F:;
    /* $D61F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x160C), -1); return; }
label_D621:;
    /* $D621: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_D623:;
    /* $D623: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_D625:;
    /* $D625: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D656; }
label_D627:;
    /* $D627: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_D629:;
    /* $D629: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0440); FLAG_NZ(g_cpu.A);
label_D62C:;
    /* $D62C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D62D:;
    /* $D62D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_D630:;
    /* $D630: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D631:;
    /* $D631: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_D633:;
    /* $D633: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D636:;
    /* $D636: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D638:;
    /* $D638: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D63B:;
    /* $D63B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_D63D:;
    /* $D63D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A);
label_D63F:;
    /* $D63F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D649; }
label_D641:;
    /* $D641: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D643:;
    /* $D643: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1645); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F642(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD643, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D646:;
    /* $D646: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD64E, -1); return;
label_D649:;
    /* $D649: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D64B:;
    /* $D64B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x164D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F606(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD64B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D64E:;
    /* $D64E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D64F:;
    /* $D64F: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D652:;
    /* $D652: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D653:;
    /* $D653: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D656:;
    /* $D656: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0440); FLAG_NZ(g_cpu.A);
label_D659:;
    /* $D659: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_D65C:;
    /* $D65C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D67E; }
label_D65E:;
    /* $D65E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D660:;
    /* $D660: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D662:;
    /* $D662: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D667; }
label_D664:;
    /* $D664: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCEAD, -1); return;
label_D667:;
    /* $D667: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D669:;
    /* $D669: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D66C:;
    /* $D66C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D66E:;
    /* $D66E: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D671:;
    /* $D671: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_D674:;
    /* $D674: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D675:;
    /* $D675: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x35); FLAG_NZ(g_cpu.A);
label_D677:;
    /* $D677: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1679); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xCF3D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD677, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D67A:;
    /* $D67A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D67B:;
    /* $D67B: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_D67E:;
    /* $D67E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D680:;
    /* $D680: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1682); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F642(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD680, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D683:;
    /* $D683: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0440); FLAG_NZ(g_cpu.A);
label_D686:;
    /* $D686: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D687:;
    /* $D687: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_D689:;
    /* $D689: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D68C:;
    /* $D68C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_D68F:;
    /* $D68F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_D691:;
    /* $D691: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D694:;
    /* $D694: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_D696:;
    /* $D696: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D69D; }
label_D698:;
    /* $D698: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D69A:;
    /* $D69A: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D69D:;
    /* $D69D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_D69F:;
    /* $D69F: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D6A2:;
    /* $D6A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D6A4:;
    /* $D6A4: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D6A7:;
    /* $D6A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16A9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD0C1, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD6A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D6AA:;
    /* $D6AA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D613(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D613");
#endif
    func_D613_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D621(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D621");
#endif
    func_D613_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D618(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D618");
#endif
    func_D613_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D6AB_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D6AE;
        case 2: goto label_D6B9;
        case 3: goto label_D6C1;
    }
label_D6AB:;
    /* $D6AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_D6AE:;
    /* $D6AE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_D6B0:;
    /* $D6B0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D701; }
label_D6B2:;
    /* $D6B2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB1; g_cpu.C=(g_cpu.A>=0xB1)?1:0; FLAG_NZ(r&0xFF); }
label_D6B4:;
    /* $D6B4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D701; }
label_D6B6:;
    /* $D6B6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_D6B9:;
    /* $D6B9: 85 */ maybe_trigger_vblank(3); nes_write(0x3E, g_cpu.A);
label_D6BB:;
    /* $D6BB: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD9; g_cpu.C=(g_cpu.A>=0xD9)?1:0; FLAG_NZ(r&0xFF); }
label_D6BD:;
    /* $D6BD: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D6C3; }
label_D6BF:;
    /* $D6BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_D6C1:;
    /* $D6C1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D6C5; }
label_D6C3:;
    /* $D6C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB1; FLAG_NZ(g_cpu.A);
label_D6C5:;
    /* $D6C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD6C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D6C8:;
    /* $D6C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D6CA:;
    /* $D6CA: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_D6CC:;
    /* $D6CC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16CE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F81B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD6CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D6CF:;
    /* $D6CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_D6D1:;
    /* $D6D1: 8D */ maybe_trigger_vblank(4); nes_write(0x0304, g_cpu.A);
label_D6D4:;
    /* $D6D4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_D6D7:;
    /* $D6D7: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_D6DA:;
    /* $D6DA: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_D6DC:;
    /* $D6DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_D6DE:;
    /* $D6DE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16E0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD6DE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D6E1:;
    /* $D6E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_D6E4:;
    /* $D6E4: 8D */ maybe_trigger_vblank(4); nes_write(0x0364, g_cpu.A);
label_D6E7:;
    /* $D6E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_D6EA:;
    /* $D6EA: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_D6ED:;
    /* $D6ED: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_D6F0:;
    /* $D6F0: 8D */ maybe_trigger_vblank(4); nes_write(0x03C4, g_cpu.A);
label_D6F3:;
    /* $D6F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_D6F6:;
    /* $D6F6: 8D */ maybe_trigger_vblank(4); nes_write(0x03E4, g_cpu.A);
label_D6F9:;
    /* $D6F9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D6FB:;
    /* $D6FB: 8E */ maybe_trigger_vblank(4); nes_write(0x0484, g_cpu.X);
label_D6FE:;
    /* $D6FE: 8E */ maybe_trigger_vblank(4); nes_write(0x0324, g_cpu.X);
label_D701:;
    /* $D701: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3E); FLAG_NZ(g_cpu.A);
label_D703:;
    /* $D703: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_D705:;
    /* $D705: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D742; }
label_D707:;
    /* $D707: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x79; g_cpu.C=(g_cpu.A>=0x79)?1:0; FLAG_NZ(r&0xFF); }
label_D709:;
    /* $D709: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D742; }
label_D70B:;
    /* $D70B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D70D:;
    /* $D70D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x170F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD70D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D710:;
    /* $D710: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_D712:;
    /* $D712: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D715:;
    /* $D715: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D717:;
    /* $D717: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D71A:;
    /* $D71A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_D71D:;
    /* $D71D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D71E:;
    /* $D71E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_D721:;
    /* $D721: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_D723:;
    /* $D723: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D72D; }
label_D725:;
    /* $D725: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D727:;
    /* $D727: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1729); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD727, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D72A:;
    /* $D72A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD732, -1); return;
label_D72D:;
    /* $D72D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D72F:;
    /* $D72F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1731); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD72F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D732:;
    /* $D732: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_D735:;
    /* $D735: 8D */ maybe_trigger_vblank(4); nes_write(0x0364, g_cpu.A);
label_D738:;
    /* $D738: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_D73B:;
    /* $D73B: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_D73E:;
    /* $D73E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D73F:;
    /* $D73F: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_D742:;
    /* $D742: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05A0); FLAG_NZ(g_cpu.A);
label_D745:;
    /* $D745: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_D747:;
    /* $D747: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D778; }
label_D749:;
    /* $D749: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3E); FLAG_NZ(g_cpu.A);
label_D74B:;
    /* $D74B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D74C:;
    /* $D74C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_D74E:;
    /* $D74E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D754; }
label_D750:;
    /* $D750: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD9; g_cpu.C=(g_cpu.A>=0xD9)?1:0; FLAG_NZ(r&0xFF); }
label_D752:;
    /* $D752: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D757; }
label_D754:;
    /* $D754: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1756); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD754, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D757:;
    /* $D757: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D758:;
    /* $D758: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_D75A:;
    /* $D75A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D764; }
label_D75C:;
    /* $D75C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD9; g_cpu.C=(g_cpu.A>=0xD9)?1:0; FLAG_NZ(r&0xFF); }
label_D75E:;
    /* $D75E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D768; }
label_D760:;
    /* $D760: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_D762:;
    /* $D762: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D76A; }
label_D764:;
    /* $D764: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_D766:;
    /* $D766: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D76A; }
label_D768:;
    /* $D768: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D76A:;
    /* $D76A: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D76C:;
    /* $D76C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_D76E:;
    /* $D76E: 85 */ maybe_trigger_vblank(3); nes_write(0x39, g_cpu.A);
label_D770:;
    /* $D770: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05E0); FLAG_NZ(g_cpu.A);
label_D773:;
    /* $D773: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_D775:;
    /* $D775: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_D778:;
    /* $D778: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D6AB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D6AB");
#endif
    func_D6AB_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D6AE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D6AE");
#endif
    func_D6AB_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D6B9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D6B9");
#endif
    func_D6AB_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D6C1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D6C1");
#endif
    func_D6AB_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D831(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D831");
#endif
label_D831:;
    /* $D831: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D833:;
    /* $D833: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_D836:;
    /* $D836: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D839:;
    /* $D839: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D857; }
label_D83B:;
    /* $D83B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_D83D:;
    /* $D83D: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_D840:;
    /* $D840: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x68; FLAG_NZ(g_cpu.Y);
label_D842:;
    /* $D842: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0201 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D845:;
    /* $D845: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D846:;
    /* $D846: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_D848:;
    /* $D848: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFA; g_cpu.C=(g_cpu.A>=0xFA)?1:0; FLAG_NZ(r&0xFF); }
label_D84A:;
    /* $D84A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D84E; }
label_D84C:;
    /* $D84C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF7; FLAG_NZ(g_cpu.A);
label_D84E:;
    /* $D84E: 99 */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D851:;
    /* $D851: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D852:;
    /* $D852: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D853:;
    /* $D853: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D854:;
    /* $D854: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D855:;
    /* $D855: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D842;
    }
label_D857:;
    /* $D857: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D858_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D860;
    }
label_D858:;
    /* $D858: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x185A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xDED8, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD858, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D85B:;
    /* $D85B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_D85E:;
    /* $D85E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xDA; g_cpu.C=(g_cpu.A>=0xDA)?1:0; FLAG_NZ(r&0xFF); }
label_D860:;
    /* $D860: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D86E; }
label_D862:;
    /* $D862: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05A0); FLAG_NZ(g_cpu.A);
label_D865:;
    /* $D865: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_D867:;
    /* $D867: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x1857), -1); return; }
label_D869:;
    /* $D869: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDB; FLAG_NZ(g_cpu.A);
label_D86B:;
    /* $D86B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x186D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD86B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D86E:;
    /* $D86E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_D870:;
    /* $D870: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1872); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD870, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D873:;
    /* $D873: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D875:;
    /* $D875: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_D877:;
    /* $D877: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D886; }
label_D879:;
    /* $D879: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDB; FLAG_NZ(g_cpu.A);
label_D87B:;
    /* $D87B: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D87E:;
    /* $D87E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D893; }
label_D880:;
    /* $D880: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1882); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD880, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D883:;
    /* $D883: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD893, -1); return;
label_D886:;
    /* $D886: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xDC; FLAG_NZ(g_cpu.A);
label_D888:;
    /* $D888: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D88B:;
    /* $D88B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D8BD; }
label_D88D:;
    /* $D88D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x188F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD88D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D890:;
    /* $D890: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD8BD, -1); return;
label_D893:;
    /* $D893: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D895:;
    /* $D895: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1897); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD895, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D898:;
    /* $D898: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D8AF; }
label_D89A:;
    /* $D89A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D89C:;
    /* $D89C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D89E:;
    /* $D89E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D910; }
label_D8A0:;
    /* $D8A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_D8A2:;
    /* $D8A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D8A5:;
    /* $D8A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D8A7:;
    /* $D8A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D8AA:;
    /* $D8AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D8AC:;
    /* $D8AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD8AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D8AF:;
    /* $D8AF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_D8B1:;
    /* $D8B1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D8B3:;
    /* $D8B3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D910; }
label_D8B5:;
    /* $D8B5: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_D8B7:;
    /* $D8B7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18B9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xCF3D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD8B7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D8BA:;
    /* $D8BA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD910, -1); return;
label_D8BD:;
    /* $D8BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D8BF:;
    /* $D8BF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D8C1:;
    /* $D8C1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D8CE; }
label_D8C3:;
    /* $D8C3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D8C5:;
    /* $D8C5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18C7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD8C5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D8C8:;
    /* $D8C8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D8CA:;
    /* $D8CA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_D8CC:;
    /* $D8CC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D8A0;
    }
label_D8CE:;
    /* $D8CE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_D8D0:;
    /* $D8D0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D8D2:;
    /* $D8D2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D8D9; }
label_D8D4:;
    /* $D8D4: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_D8D6:;
    /* $D8D6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18D8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xCF3D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD8D6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D8D9:;
    /* $D8D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_D8DB:;
    /* $D8DB: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D8DE:;
    /* $D8DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D8E0:;
    /* $D8E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D8E3:;
    /* $D8E3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_D8E5:;
    /* $D8E5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A);
label_D8E7:;
    /* $D8E7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D910; }
label_D8E9:;
    /* $D8E9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_D8EB:;
    /* $D8EB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_D90B; }
label_D8ED:;
    /* $D8ED: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D8EF:;
    /* $D8EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18F1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F642(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD8EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D8F2:;
    /* $D8F2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_D8F4:;
    /* $D8F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x18F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD8F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D8F7:;
    /* $D8F7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D8F9:;
    /* $D8F9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_D8FB:;
    /* $D8FB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D908; }
label_D8FD:;
    /* $D8FD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_D900:;
    /* $D900: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_D902:;
    /* $D902: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D903:;
    /* $D903: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_D905:;
    /* $D905: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_D908:;
    /* $D908: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD910, -1); return;
label_D90B:;
    /* $D90B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D90D:;
    /* $D90D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F606(); g_code_window_base = _swb; } return;
label_D910:;
    /* $D910: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_D913:;
    /* $D913: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D914:;
    /* $D914: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1916); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD355, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD914, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D917:;
    /* $D917: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D919:;
    /* $D919: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_D91B:;
    /* $D91B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D920; }
label_D91D:;
    /* $D91D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x191F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD0DA, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD91D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D920:;
    /* $D920: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D922:;
    /* $D922: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_D924:;
    /* $D924: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D925:;
    /* $D925: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_D928:;
    /* $D928: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D858(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D858");
#endif
    func_D858_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D860(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D860");
#endif
    func_D858_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D929_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D942;
        case 2: goto label_D95D;
        case 3: goto label_D970;
        case 4: goto label_D944;
        case 5: goto label_D985;
        case 6: goto label_D97B;
        case 7: goto label_D983;
        case 8: goto label_D94C;
    }
label_D929:;
    /* $D929: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D92B:;
    /* $D92B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x192D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD92B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D92E:;
    /* $D92E: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D990; }
label_D930:;
    /* $D930: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D932:;
    /* $D932: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D935:;
    /* $D935: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D942; }
label_D937:;
    /* $D937: 8D */ maybe_trigger_vblank(4); nes_write(0x05C0, g_cpu.A);
label_D93A:;
    /* $D93A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D93C:;
    /* $D93C: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_D93F:;
    /* $D93F: 8D */ maybe_trigger_vblank(4); nes_write(0x05A0, g_cpu.A);
label_D942:;
    /* $D942: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_D944:;
    /* $D944: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_D946:;
    /* $D946: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D973; }
label_D948:;
    /* $D948: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x26; FLAG_NZ(g_cpu.Y);
label_D94A:;
    /* $D94A: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x52); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D94C:;
    /* $D94C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D95B; }
label_D94E:;
    /* $D94E: 84 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.Y);
label_D950:;
    /* $D950: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D952:;
    /* $D952: 8C */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.Y);
label_D955:;
    /* $D955: 84 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.Y);
label_D957:;
    /* $D957: 84 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.Y);
label_D959:;
    /* $D959: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D95F; }
label_D95B:;
    /* $D95B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x70); FLAG_NZ(g_cpu.Y);
label_D95D:;
    /* $D95D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D973; }
label_D95F:;
    /* $D95F: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_D961:;
    /* $D961: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1963); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD961, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D964:;
    /* $D964: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_D966:;
    /* $D966: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1968); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD966, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D969:;
    /* $D969: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D96B:;
    /* $D96B: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_D96D:;
    /* $D96D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x196F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD96D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D970:;
    /* $D970: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D972:;
    /* $D972: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D973:;
    /* $D973: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_D975:;
    /* $D975: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x9C; g_cpu.C=(g_cpu.A>=0x9C)?1:0; FLAG_NZ(r&0xFF); }
label_D977:;
    /* $D977: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D98C; }
label_D979:;
    /* $D979: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_D97B:;
    /* $D97B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D97D:;
    /* $D97D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D990; }
label_D97F:;
    /* $D97F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xB0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D981:;
    /* $D981: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB0); FLAG_NZ(g_cpu.A);
label_D983:;
    /* $D983: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x81; g_cpu.C=(g_cpu.A>=0x81)?1:0; FLAG_NZ(r&0xFF); }
label_D985:;
    /* $D985: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D990; }
label_D987:;
    /* $D987: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1C; FLAG_NZ(g_cpu.A);
label_D989:;
    /* $D989: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; } return;
label_D98C:;
    /* $D98C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D98E:;
    /* $D98E: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D990:;
    /* $D990: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D929(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D929");
#endif
    func_D929_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D942(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D942");
#endif
    func_D929_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D95D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D95D");
#endif
    func_D929_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D970(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D970");
#endif
    func_D929_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D944(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D944");
#endif
    func_D929_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D985(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D985");
#endif
    func_D929_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D97B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D97B");
#endif
    func_D929_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D983(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D983");
#endif
    func_D929_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D94C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D94C");
#endif
    func_D929_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D991_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D9AD;
        case 2: goto label_D9B6;
        case 3: goto label_D9BD;
        case 4: goto label_D9A8;
        case 5: goto label_D9AE;
        case 6: goto label_D9B1;
        case 7: goto label_D9AA;
    }
label_D991:;
    /* $D991: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D993:;
    /* $D993: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1995); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD993, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D996:;
    /* $D996: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D9B6; }
label_D998:;
    /* $D998: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_D99B:;
    /* $D99B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D99C:;
    /* $D99C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_D99E:;
    /* $D99E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D9A8; }
label_D9A0:;
    /* $D9A0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D9A2:;
    /* $D9A2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19A4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD9A2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D9A5:;
    /* $D9A5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD9AD, -1); return;
label_D9A8:;
    /* $D9A8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D9AA:;
    /* $D9AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD9AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D9AD:;
    /* $D9AD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D9AE:;
    /* $D9AE: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_D9B1:;
    /* $D9B1: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D9B4:;
    /* $D9B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D9BD; }
label_D9B6:;
    /* $D9B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D9B8:;
    /* $D9B8: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_D9BB:;
    /* $D9BB: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D9BD:;
    /* $D9BD: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D991(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D991");
#endif
    func_D991_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9AD");
#endif
    func_D991_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9B6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9B6");
#endif
    func_D991_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9BD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9BD");
#endif
    func_D991_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9A8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9A8");
#endif
    func_D991_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9AE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9AE");
#endif
    func_D991_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9B1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9B1");
#endif
    func_D991_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9AA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9AA");
#endif
    func_D991_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9D3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D9F0;
        case 2: goto label_D9ED;
        case 3: goto label_D9EB;
        case 4: goto label_DA31;
        case 5: goto label_DA21;
        case 6: goto label_DA51;
        case 7: goto label_DA57;
        case 8: goto label_DA4E;
        case 9: goto label_DA0A;
        case 10: goto label_D9DD;
        case 11: goto label_D9F8;
        case 12: goto label_D9D8;
        case 13: goto label_DA18;
        case 14: goto label_D9DA;
        case 15: goto label_D9FF;
    }
label_D9D3:;
    /* $D9D3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_D9D6:;
    /* $D9D6: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_D9D8:;
    /* $D9D8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_DA31; }
label_D9DA:;
    /* $D9DA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_D9DD:;
    /* $D9DD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_DA31; }
label_D9DF:;
    /* $D9DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_D9E1:;
    /* $D9E1: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x03C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D9E4:;
    /* $D9E4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D9EB; }
label_D9E6:;
    /* $D9E6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_DA31; }
label_D9E8:;
    /* $D9E8: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_D9EB:;
    /* $D9EB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_D9ED:;
    /* $D9ED: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0310 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D9F0:;
    /* $D9F0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(2); goto label_DA02; }
label_D9F2:;
    /* $D9F2: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D9F3:;
    /* $D9F3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D9ED;
    }
label_D9F5:;
    /* $D9F5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_D9F8:;
    /* $D9F8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_D9FA:;
    /* $D9FA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_DA03; }
label_D9FC:;
    /* $D9FC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x19FE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xDB3A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD9FC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D9FF:;
    /* $D9FF: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA02:;
    /* $DA02: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DA03:;
    /* $DA03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x31; FLAG_NZ(g_cpu.A);
label_DA05:;
    /* $DA05: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A07); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDA05, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DA08:;
    /* $DA08: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x22); FLAG_NZ(g_cpu.Y);
label_DA0A:;
    /* $DA0A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDD04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA0D:;
    /* $DA0D: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_DA0F:;
    /* $DA0F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDD0C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA12:;
    /* $DA12: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_DA14:;
    /* $DA14: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_DA15:;
    /* $DA15: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA1); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DA17:;
    /* $DA17: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_DA18:;
    /* $DA18: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DA1A:;
    /* $DA1A: 99 */ maybe_trigger_vblank(5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DA1D:;
    /* $DA1D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_DA1F:;
    /* $DA1F: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_DA21:;
    /* $DA21: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A23); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDA21, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DA24:;
    /* $DA24: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A26); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDA24, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DA27:;
    /* $DA27: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_DA29:;
    /* $DA29: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_DA2B:;
    /* $DA2B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DA2D:;
    /* $DA2D: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_DA30:;
    /* $DA30: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DA31:;
    /* $DA31: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DA33:;
    /* $DA33: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_DA35:;
    /* $DA35: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DA55; }
label_DA37:;
    /* $DA37: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_DA39:;
    /* $DA39: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_DA3B:;
    /* $DA3B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA55; }
label_DA3D:;
    /* $DA3D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_DA40:;
    /* $DA40: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA49; }
label_DA42:;
    /* $DA42: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_DA45:;
    /* $DA45: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_DA47:;
    /* $DA47: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA55; }
label_DA49:;
    /* $DA49: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0610); FLAG_NZ(g_cpu.A);
label_DA4C:;
    /* $DA4C: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x2F; FLAG_NZ(g_cpu.A);
label_DA4E:;
    /* $DA4E: 8D */ maybe_trigger_vblank(4); nes_write(0x0610, g_cpu.A);
label_DA51:;
    /* $DA51: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_DA53:;
    /* $DA53: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_DA55:;
    /* $DA55: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DA57:;
    /* $DA57: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A59); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDA57, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DA5A:;
    /* $DA5A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DA6C; }
label_DA5C:;
    /* $DA5C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_DA5F:;
    /* $DA5F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA6C; }
label_DA61:;
    /* $DA61: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_DA63:;
    /* $DA63: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DA66:;
    /* $DA66: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA6C; }
label_DA68:;
    /* $DA68: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1A6A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDA68, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DA6B:;
    /* $DA6B: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DA6C:;
    /* $DA6C: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DA6E:;
    /* $DA6E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_DA70:;
    /* $DA70: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DA72:;
    /* $DA72: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_DA74:;
    /* $DA74: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA7A; }
label_DA76:;
    /* $DA76: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_DA78:;
    /* $DA78: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DA82; }
label_DA7A:;
    /* $DA7A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0310 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DA7D:;
    /* $DA7D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA02;
    }
label_DA7F:;
    /* $DA7F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DA80:;
    /* $DA80: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DA70;
    }
label_DA82:;
    /* $DA82: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DA84:;
    /* $DA84: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_DA86:;
    /* $DA86: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DA92; }
label_DA88:;
    /* $DA88: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_DA8A:;
    /* $DA8A: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DA92; }
label_DA8C:;
    /* $DA8C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_DA8E:;
    /* $DA8E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x18; g_cpu.C=(g_cpu.A>=0x18)?1:0; FLAG_NZ(r&0xFF); }
label_DA90:;
    /* $DA90: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DA92:;
    /* $DA92: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DA94:;
    /* $DA94: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x11; g_cpu.C=(g_cpu.A>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_DA96:;
    /* $DA96: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAA6; }
label_DA98:;
    /* $DA98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x37; FLAG_NZ(g_cpu.A);
label_DA9A:;
    /* $DA9A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DA9C:;
    /* $DA9C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAB4; }
label_DA9E:;
    /* $DA9E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DAA0:;
    /* $DAA0: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_DAA2:;
    /* $DAA2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x37; FLAG_NZ(g_cpu.A);
label_DAA4:;
    /* $DAA4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAAC; }
label_DAA6:;
    /* $DAA6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_DAA8:;
    /* $DAA8: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xD9); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAAA:;
    /* $DAAA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAB4; }
label_DAAC:;
    /* $DAAC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AAE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDAAC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAAF:;
    /* $DAAF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_DAB1:;
    /* $DAB1: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_DAB4:;
    /* $DAB4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_DAB7:;
    /* $DAB7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DAB9:;
    /* $DAB9: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DABC:;
    /* $DABC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_DB2B; }
label_DABE:;
    /* $DABE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DAC0:;
    /* $DAC0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_DAC2:;
    /* $DAC2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAC8; }
label_DAC4:;
    /* $DAC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DAC6:;
    /* $DAC6: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_DAC8:;
    /* $DAC8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_DACA:;
    /* $DACA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_DACC:;
    /* $DACC: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DAD1; }
label_DACE:;
    /* $DACE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xDB89, -1); return;
label_DAD1:;
    /* $DAD1: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_DAD3:;
    /* $DAD3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_DAD6:;
    /* $DAD6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DAD8:;
    /* $DAD8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_DB00; }
label_DADA:;
    /* $DADA: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DAEF; }
label_DADC:;
    /* $DADC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DADE:;
    /* $DADE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AE0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDADE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAE1:;
    /* $DAE1: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DAE3:;
    /* $DAE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DAE5:;
    /* $DAE5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAE8:;
    /* $DAE8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAEA:;
    /* $DAEA: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_DAED:;
    /* $DAED: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAEF:;
    /* $DAEF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_DAF1:;
    /* $DAF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AF3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDAF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DAF4:;
    /* $DAF4: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DAF6:;
    /* $DAF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_DAF8:;
    /* $DAF8: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DAFB:;
    /* $DAFB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_DB00; }
label_DAFD:;
    /* $DAFD: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_DB00:;
    /* $DB00: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DB02:;
    /* $DB02: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DB04:;
    /* $DB04: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DB07; }
label_DB06:;
    /* $DB06: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB07:;
    /* $DB07: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB0A:;
    /* $DB0A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DB0D:;
    /* $DB0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB12; }
label_DB0F:;
    /* $DB0F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B11); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB0F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB12:;
    /* $DB12: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_DB14:;
    /* $DB14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB88; }
label_DB16:;
    /* $DB16: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_DB18:;
    /* $DB18: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DB88; }
label_DB1A:;
    /* $DB1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_DB1D:;
    /* $DB1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_DB1F:;
    /* $DB1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DB2C; }
label_DB21:;
    /* $DB21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_DB23:;
    /* $DB23: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DB26:;
    /* $DB26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_DB28:;
    /* $DB28: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DB2B:;
    /* $DB2B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DB2C:;
    /* $DB2C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB2E:;
    /* $DB2E: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_DB31:;
    /* $DB31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_DB33:;
    /* $DB33: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_DB36:;
    /* $DB36: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_DB39:;
    /* $DB39: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DB3A:;
    /* $DB3A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0500); FLAG_NZ(g_cpu.Y);
label_DB3D:;
    /* $DB3D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xDD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_DB40:;
    /* $DB40: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_DB42:;
    /* $DB42: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5B; FLAG_NZ(g_cpu.A);
label_DB44:;
    /* $DB44: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B46); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB44, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB47:;
    /* $DB47: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DB49:;
    /* $DB49: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB4C:;
    /* $DB4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_DB4E:;
    /* $DB4E: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB51:;
    /* $DB51: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCE1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB54:;
    /* $DB54: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB57:;
    /* $DB57: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_DB5A:;
    /* $DB5A: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB5D:;
    /* $DB5D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCD1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB60:;
    /* $DB60: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB63:;
    /* $DB63: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC71 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB66:;
    /* $DB66: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB69:;
    /* $DB69: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC89 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB6C:;
    /* $DB6C: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB6F:;
    /* $DB6F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB72:;
    /* $DB72: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB75:;
    /* $DB75: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DB78:;
    /* $DB78: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DB7B:;
    /* $DB7B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_DB7C:;
    /* $DB7C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DB7D:;
    /* $DB7D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_DB7F:;
    /* $DB7F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DB42;
    }
label_DB81:;
    /* $DB81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_DB83:;
    /* $DB83: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B85); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDB83, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DB86:;
    /* $DB86: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_DB88:;
    /* $DB88: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D9D3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9D3");
#endif
    func_D9D3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9F0");
#endif
    func_D9D3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9ED(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9ED");
#endif
    func_D9D3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9EB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9EB");
#endif
    func_D9D3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA31(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA31");
#endif
    func_D9D3_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA21(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA21");
#endif
    func_D9D3_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA51(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA51");
#endif
    func_D9D3_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA57(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA57");
#endif
    func_D9D3_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA4E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA4E");
#endif
    func_D9D3_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA0A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA0A");
#endif
    func_D9D3_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9DD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9DD");
#endif
    func_D9D3_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9F8");
#endif
    func_D9D3_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9D8");
#endif
    func_D9D3_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DA18(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DA18");
#endif
    func_D9D3_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9DA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9DA");
#endif
    func_D9D3_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D9FF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D9FF");
#endif
    func_D9D3_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D779_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D789;
        case 2: goto label_D784;
    }
label_D779:;
    /* $D779: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D77B:;
    /* $D77B: 85 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.A);
label_D77D:;
    /* $D77D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x05C0); FLAG_NZ(g_cpu.A);
label_D780:;
    /* $D780: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x7A; g_cpu.C=(g_cpu.A>=0x7A)?1:0; FLAG_NZ(r&0xFF); }
label_D782:;
    /* $D782: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D7E7; }
label_D784:;
    /* $D784: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_D787:;
    /* $D787: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D7EA; }
label_D789:;
    /* $D789: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_D78B:;
    /* $D78B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_D78D:;
    /* $D78D: 99 */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D790:;
    /* $D790: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D792:;
    /* $D792: 99 */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D795:;
    /* $D795: 99 */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D798:;
    /* $D798: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D79B:;
    /* $D79B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_D79E:;
    /* $D79E: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7A1:;
    /* $D7A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_D7A4:;
    /* $D7A4: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7A7:;
    /* $D7A7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_D7AA:;
    /* $D7AA: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7AD:;
    /* $D7AD: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_D7B0:;
    /* $D7B0: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7B3:;
    /* $D7B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_D7B5:;
    /* $D7B5: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7B8:;
    /* $D7B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_D7BA:;
    /* $D7BA: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7BD:;
    /* $D7BD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_D7BF:;
    /* $D7BF: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7C2:;
    /* $D7C2: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD7F1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D7C5:;
    /* $D7C5: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7C8:;
    /* $D7C8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD801 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D7CB:;
    /* $D7CB: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7CE:;
    /* $D7CE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD811 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D7D1:;
    /* $D7D1: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7D4:;
    /* $D7D4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD821 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_D7D7:;
    /* $D7D7: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D7DA:;
    /* $D7DA: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_D7DB:;
    /* $D7DB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_D78B;
    }
label_D7DD:;
    /* $D7DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D7DF:;
    /* $D7DF: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D7E2:;
    /* $D7E2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_D7E4:;
    /* $D7E4: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D7E7:;
    /* $D7E7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x17E9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F779(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD7E7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D7EA:;
    /* $D7EA: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x3F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D7EC:;
    /* $D7EC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D7F0; }
label_D7EE:;
    /* $D7EE: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x3C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D7F0:;
    /* $D7F0: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D779(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D779");
#endif
    func_D779_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D789(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D789");
#endif
    func_D779_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D784(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D784");
#endif
    func_D779_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CDCC_body(int _entry) {
    switch (_entry) {
        case 1: goto label_CDE6;
        case 2: goto label_CDDC;
    }
label_CDCC:;
    /* $CDCC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5A); FLAG_NZ(g_cpu.A);
label_CDCE:;
    /* $CDCE: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_CDE6; }
label_CDD0:;
    /* $CDD0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_CDD2:;
    /* $CDD2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0DD4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCDD2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CDD5:;
    /* $CDD5: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CDE5; }
label_CDD7:;
    /* $CDD7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CDD9:;
    /* $CDD9: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_CDDC:;
    /* $CDDC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CDE5; }
label_CDDE:;
    /* $CDDE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0DE0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCDDE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CDE1:;
    /* $CDE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CDE3:;
    /* $CDE3: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_CDE5:;
    /* $CDE5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_CDE6:;
    /* $CDE6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CDE8:;
    /* $CDE8: 8D */ maybe_trigger_vblank(4); nes_write(0x05E0, g_cpu.A);
label_CDEB:;
    /* $CDEB: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CDCC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CDCC");
#endif
    func_CDCC_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CDE6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CDE6");
#endif
    func_CDCC_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CDDC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CDDC");
#endif
    func_CDCC_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_DD14(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_DD14");
#endif
label_DD14:;
    /* $DD14: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD16:;
    /* $DD16: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D18); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD16, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD19:;
    /* $DD19: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DD25; }
label_DD1B:;
    /* $DD1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_DD1D:;
    /* $DD1D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD20:;
    /* $DD20: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD25; }
label_DD22:;
    /* $DD22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D24); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD25:;
    /* $DD25: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x26; FLAG_NZ(g_cpu.Y);
label_DD27:;
    /* $DD27: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x52); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD29:;
    /* $DD29: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD38; }
label_DD2B:;
    /* $DD2B: 84 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.Y);
label_DD2D:;
    /* $DD2D: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_DD2F:;
    /* $DD2F: 8C */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.Y);
label_DD32:;
    /* $DD32: 84 */ maybe_trigger_vblank(3); nes_write(0x70, g_cpu.Y);
label_DD34:;
    /* $DD34: 84 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.Y);
label_DD36:;
    /* $DD36: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD3C; }
label_DD38:;
    /* $DD38: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x70); FLAG_NZ(g_cpu.Y);
label_DD3A:;
    /* $DD3A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD52; }
label_DD3C:;
    /* $DD3C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_DD3E:;
    /* $DD3E: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_DD40:;
    /* $DD40: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D42); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD40, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD43:;
    /* $DD43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_DD45:;
    /* $DD45: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D47); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD45, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD48:;
    /* $DD48: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_DD4A:;
    /* $DD4A: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_DD4C:;
    /* $DD4C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1D4E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EF8C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xDD4C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_DD4F:;
    /* $DD4F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_DD51:;
    /* $DD51: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_DD52:;
    /* $DD52: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_DD54:;
    /* $DD54: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0308 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD57:;
    /* $DD57: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_DDA5; }
label_DD59:;
    /* $DD59: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD5A:;
    /* $DD5A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD54;
    }
label_DD5C:;
    /* $DD5C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_DD5E:;
    /* $DD5E: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF8); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_DD60:;
    /* $DD60: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DD72; }
label_DD62:;
    /* $DD62: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_DD64:;
    /* $DD64: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_DD66:;
    /* $DD66: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x01; FLAG_NZ(g_cpu.A);
label_DD68:;
    /* $DD68: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_DD6A:;
    /* $DD6A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x50; FLAG_NZ(g_cpu.A);
label_DD6C:;
    /* $DD6C: 85 */ maybe_trigger_vblank(3); nes_write(0xFA, g_cpu.A);
label_DD6E:;
    /* $DD6E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x52; FLAG_NZ(g_cpu.A);
label_DD70:;
    /* $DD70: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_DD72:;
    /* $DD72: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFA); FLAG_NZ(g_cpu.A);
label_DD74:;
    /* $DD74: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DD75:;
    /* $DD75: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x03; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DD77:;
    /* $DD77: 85 */ maybe_trigger_vblank(3); nes_write(0xFA, g_cpu.A);
label_DD79:;
    /* $DD79: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_DD81; }
label_DD7B:;
    /* $DD7B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_DD7D:;
    /* $DD7D: 85 */ maybe_trigger_vblank(3); nes_write(0xFA, g_cpu.A);
label_DD7F:;
    /* $DD7F: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_DD81:;
    /* $DD81: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_DD83:;
    /* $DD83: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDDA6 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD86:;
    /* $DD86: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_DD87:;
    /* $DD87: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xFA); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_DD89:;
    /* $DD89: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_DD96; }
label_DD8B:;
    /* $DD8B: 99 */ maybe_trigger_vblank(5); nes_write((0x03DC + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD8E:;
    /* $DD8E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x059C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_DD91:;
    /* $DD91: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFB; FLAG_NZ(g_cpu.A);
label_DD93:;
    /* $DD93: 99 */ maybe_trigger_vblank(5); nes_write((0x059C + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_DD96:;
    /* $DD96: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_DD97:;
    /* $DD97: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_DD83;
    }
label_DD99:;
    /* $DD99: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_DD9B:;
    /* $DD9B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_DDA5; }
label_DD9D:;
    /* $DD9D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x059E); FLAG_NZ(g_cpu.A);
label_DDA0:;
    /* $DDA0: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_DDA2:;
    /* $DDA2: 8D */ maybe_trigger_vblank(4); nes_write(0x059E, g_cpu.A);
label_DDA5:;
    /* $DDA5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CFD4_body(int _entry) {
    switch (_entry) {
        case 1: goto label_CFDF;
    }
label_CFD4:;
    /* $CFD4: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CFD6:;
    /* $CFD6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_CFD8:;
    /* $CFD8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_CFDA:;
    /* $CFDA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CFDF; }
label_CFDC:;
    /* $CFDC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0FDE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD0DA, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCFDC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CFDF:;
    /* $CFDF: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CFD4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CFD4");
#endif
    func_CFD4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CFDF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CFDF");
#endif
    func_CFD4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F6D7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F6D7");
#endif
label_F6D7:;
    /* $F6D7: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0F90 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_F6DA:;
    /* $F6DA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16DC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FABF(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF6DA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F6DD:;
    /* $F6DD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16DF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F6E3(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF6DD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F6E0:;
    /* $F6E0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F6FB(); g_code_window_base = _swb; } return;
}

void func_90CD_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_90CD_b15");
#endif
label_90CD:;
    /* $90CD: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_90CF:;
    /* $90CF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_90D1:;
    /* $90D1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_90D3:;
    /* $90D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90D8; }
label_90D5:;
    /* $90D5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10D7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD0DA, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90D5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90D8:;
    /* $90D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_90D9:;
    /* $90D9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CDDF_body(int _entry) {
    switch (_entry) {
        case 1: goto label_CDE5;
    }
label_CDDF:;
    /* $CDDF: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF8 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_CDE1:;
    /* $CDE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CDE3:;
    /* $CDE3: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_CDE5:;
    /* $CDE5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CDDF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CDDF");
#endif
    func_CDDF_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_CDE5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CDE5");
#endif
    func_CDDF_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F8CE_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F8D8;
    }
label_F8CE:;
    /* $F8CE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_F8D0:;
    /* $F8D0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_F8D1:;
    /* $F8D1: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_F8D8; }
label_F8D3:;
    /* $F8D3: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_F8D5:;
    /* $F8D5: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_F8D7:;
    /* $F8D7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_F8D8:;
    /* $F8D8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F8CE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8CE");
#endif
    func_F8CE_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F8D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F8D8");
#endif
    func_F8CE_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9CF_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9CF_b15");
#endif
label_A9CF:;
    /* $A9CF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0971), -1); return; }
label_A9D1:;
    /* $A9D1: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA5; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D3:;
    /* $A9D3: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xC9 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A9D5:;
    /* $A9D5: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09C7), -1); return; }
label_A9D7:;
    /* $A9D7: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xA0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D9:;
    /* $A9D9: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x50C9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9DC:;
    /* $A9DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9DE:;
    /* $A9DE: 84 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.Y);
label_A9E0:;
    /* $A9E0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB24(); g_code_window_base = _swb; } return;
}

void func_80A9_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A9_b15");
#endif
label_80A9:;
    /* $80A9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00AB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FEA5(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80A9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80AC:;
    /* $80AC: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_80AF:;
    /* $80AF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_80B1:;
    /* $80B1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_80B3:;
    /* $80B3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_80B5:;
    /* $80B5: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_80B8:;
    /* $80B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00BA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF41(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80BB:;
    /* $80BB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_80BD:;
    /* $80BD: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_80C0:;
    /* $80C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_80C2:;
    /* $80C2: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_80C5:;
    /* $80C5: 8D */ maybe_trigger_vblank(4); nes_write(0xC001, g_cpu.A);
label_80C8:;
    /* $80C8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x9B); FLAG_NZ(g_cpu.X);
label_80CA:;
    /* $80CA: 9D */ maybe_trigger_vblank(5); nes_write((0xE000 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80CD:;
    /* $80CD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80E7; }
label_80CF:;
    /* $80CF: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x78); FLAG_NZ(g_cpu.X);
label_80D1:;
    /* $80D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_80D3:;
    /* $80D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80DD; }
label_80D5:;
    /* $80D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_80D7:;
    /* $80D7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x51); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_80D9:;
    /* $80D9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_80DD; }
label_80DB:;
    /* $80DB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_80DD:;
    /* $80DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80E0:;
    /* $80E0: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_80E2:;
    /* $80E2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4DA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80E5:;
    /* $80E5: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_80E7:;
    /* $80E7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80E9:;
    /* $80E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_80EB:;
    /* $80EB: 86 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.X);
label_80ED:;
    /* $80ED: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80EE:;
    /* $80EE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_80F0:;
    /* $80F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_80F2:;
    /* $80F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_80F4:;
    /* $80F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80F6:;
    /* $80F6: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80F8:;
    /* $80F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80FA:;
    /* $80FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_80FC:;
    /* $80FC: 95 */ maybe_trigger_vblank(4); nes_write((0x80 + g_cpu.X) & 0xFF, g_cpu.A);
label_80FE:;
    /* $80FE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80FF:;
    /* $80FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8100:;
    /* $8100: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8101:;
    /* $8101: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8102:; /* check_weapon_hit */
    /* $8102: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8103:;
    /* $8103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80F0;
    }
label_8105:;
    /* $8105: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8106:; /* play_sound_ID */
    /* $8106: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0107 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8109:;
    /* $8109: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_810B:;
    /* $810B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_810E:;
    /* $810E: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8110:;
    /* $8110: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: 9D */ maybe_trigger_vblank(5); nes_write((0x0107 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8115:;
    /* $8115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8117:;
    /* $8117: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_811A:;
    /* $811A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811B:;
    /* $811B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_811C:;
    /* $811C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811D:;
    /* $811D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_811E:;
    /* $811E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811F:;
    /* $811F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8120:;
    /* $8120: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x8120; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A500_b15_body(int _entry) { /* enemy_speed_ID_g */
    switch (_entry) {
        case 1: goto label_A50F;
        case 2: goto label_A529;
    }
label_A500:; /* enemy_speed_ID_g */
    /* $A500: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA5); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A502:;
    /* $A502: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A504:;
    /* $A504: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE5C3 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A507:;
    /* $A507: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_A509:;
    /* $A509: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_A50B:;
    /* $A50B: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_A50D:;
    /* $A50D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A517; }
label_A50F:;
    /* $A50F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x29); FLAG_NZ(g_cpu.A);
label_A511:;
    /* $A511: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A512:;
    /* $A512: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE5C3 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A515:;
    /* $A515: 85 */ maybe_trigger_vblank(3); nes_write(0x29, g_cpu.A);
label_A517:;
    /* $A517: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A51B:;
    /* $A51B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x051D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA51B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A51E:;
    /* $A51E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A520:;
    /* $A520: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A521:;
    /* $A521: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A522:;
    /* $A522: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A524:;
    /* $A524: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x29); FLAG_NZ(g_cpu.Y);
label_A526:;
    /* $A526: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0528); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA526, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A529:;
    /* $A529: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A52B:;
    /* $A52B: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A52D:;
    /* $A52D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x052F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E7F1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA52D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A530:;
    /* $A530: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x28); FLAG_NZ(g_cpu.Y);
label_A532:;
    /* $A532: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0640 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A535:;
    /* $A535: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_A537:;
    /* $A537: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A539:;
    /* $A539: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A53B:;
    /* $A53B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A53C:;
    /* $A53C: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x03); FLAG_NZ(g_cpu.X);
label_A53E:;
    /* $A53E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A541:;
    /* $A541: 9D */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A544:;
    /* $A544: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A547:;
    /* $A547: 9D */ maybe_trigger_vblank(5); nes_write((0x0784 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A54A:;
    /* $A54A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A54C:;
    /* $A54C: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x38; g_cpu.C=(g_cpu.A>=0x38)?1:0; FLAG_NZ(r&0xFF); }
label_A54E:;
    /* $A54E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A55C; }
label_A550:;
    /* $A550: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 9D */ maybe_trigger_vblank(5); nes_write((0x0785 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A556:;
    /* $A556: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06CC + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 9D */ maybe_trigger_vblank(5); nes_write((0x0786 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A55C:;
    /* $A55C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A55E:;
    /* $A55E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A560:;
    /* $A560: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A588; }
label_A562:;
    /* $A562: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A564:;
    /* $A564: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xE5C5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A567:;
    /* $A567: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A569:;
    /* $A569: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A56B:;
    /* $A56B: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xE5C9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A56E:;
    /* $A56E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 9D */ maybe_trigger_vblank(5); nes_write((0x07A4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A573:;
    /* $A573: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x28); FLAG_NZ(g_cpu.Y);
label_A575:;
    /* $A575: 99 */ maybe_trigger_vblank(5); nes_write((0x0640 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A578:;
    /* $A578: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_A57A:;
    /* $A57A: 9D */ maybe_trigger_vblank(5); nes_write((0x07A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A57D:;
    /* $A57D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A57E:;
    /* $A57E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xC0; FLAG_NZ(g_cpu.A);
label_A580:;
    /* $A580: 9D */ maybe_trigger_vblank(5); nes_write((0x07A2 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A583:;
    /* $A583: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 9D */ maybe_trigger_vblank(5); nes_write((0x07A3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A588:;
    /* $A588: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58A:;
    /* $A58A: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58C:;
    /* $A58C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A58E:;
    /* $A58E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A590:;
    /* $A590: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A592:;
    /* $A592: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A593:;
    /* $A593: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x08 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x08); g_cpu.A=r&0xFF; }
label_A595:;
    /* $A595: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A597:;
    /* $A597: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x40; g_cpu.C=(g_cpu.A>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_A599:;
    /* $A599: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A52D;
    }
label_A59B:;
    /* $A59B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A59D:;
    /* $A59D: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_A5A0:;
    /* $A5A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_A5A5:;
    /* $A5A5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1D; FLAG_NZ(g_cpu.A);
label_A5A7:;
    /* $A5A7: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_A5AA:;
    /* $A5AA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A5AC:;
    /* $A5AC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_A5AE:;
    /* $A5AE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A5B0:;
    /* $A5B0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5B4; }
label_A5B2:;
    /* $A5B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_A5B4:;
    /* $A5B4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A5B6:;
    /* $A5B6: 99 */ maybe_trigger_vblank(5); nes_write((0x07A1 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A5B9:;
    /* $A5B9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xF8); FLAG_NZ(g_cpu.Y);
label_A5BB:;
    /* $A5BB: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A5BD:;
    /* $A5BD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A5C1; }
label_A5BF:;
    /* $A5BF: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_A5C1:;
    /* $A5C1: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5C2:;
    /* $A5C2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A500_b15(void) { /* enemy_speed_ID_g */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A500_b15");
#endif
    func_A500_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A50F_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A50F_b15");
#endif
    func_A500_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A529_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A529_b15");
#endif
    func_A500_b15_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8DE0_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DE0_b15");
#endif
label_8DE0:;
    /* $8DE0: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8DE1:;
    /* $8DE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8DE3:;
    /* $8DE3: 85 */ maybe_trigger_vblank(3); nes_write(0x32, g_cpu.A);
label_8DE5:;
    /* $8DE5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4AD_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4AD_b15");
#endif
label_A4AD:;
    /* $A4AD: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A4AE:;
    /* $A4AE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_F0AD_body(int _entry) {
    switch (_entry) {
        case 1: goto label_F0AF;
    }
label_F0AD:;
    /* $F0AD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x60); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_F0AF:;
    /* $F0AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0580 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_F0B2:;
    /* $F0B2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_F0B4:;
    /* $F0B4: 9D */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_F0B7:;
    /* $F0B7: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_F0B9:;
    /* $F0B9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0EE; }
label_F0BB:;
    /* $F0BB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_F0BD:;
    /* $F0BD: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_F0BF:;
    /* $F0BF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0D9; }
label_F0C1:;
    /* $F0C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_F0C4:;
    /* $F0C4: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_F0EE; }
label_F0C6:;
    /* $F0C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_F0C8:;
    /* $F0C8: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x30); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_F0CA:;
    /* $F0CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0D8; }
label_F0CC:;
    /* $F0CC: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_F0CE:;
    /* $F0CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF2; FLAG_NZ(g_cpu.A);
label_F0D0:;
    /* $F0D0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10D2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0D0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0D3:;
    /* $F0D3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_F0D5:;
    /* $F0D5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10D7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xF0D5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_F0D8:;
    /* $F0D8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_F0D9:;
    /* $F0D9: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_F0DC:;
    /* $F0DC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_F0DE:;
    /* $F0DE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_F0EE; }
label_F0E0:;
    /* $F0E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_F0E2:;
    /* $F0E2: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_F0E4:;
    /* $F0E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_F0E6:;
    /* $F0E6: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_F0E9:;
    /* $F0E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_F0EB:;
    /* $F0EB: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_F0EE:;
    /* $F0EE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F108(); g_code_window_base = _swb; } return;
}

void func_F0AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F0AD");
#endif
    func_F0AD_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_F0AF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_F0AF");
#endif
    func_F0AD_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A004_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A004_b15");
#endif
label_A004:;
    /* $A004: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAD); FLAG_NZ(g_cpu.A);
label_A006:; /* main_doc_quick_j */
    /* $A006: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A008:;
    /* $A008: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_A00A:;
    /* $A00A: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A00D:;
    /* $A00D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_A00F:; /* main_wily_machine_B */
    /* $A00F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A012:; /* main_gemini_man_j */
    /* $A012: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A015:; /* main_gamma_B */
    /* $A015: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_A018:;
    /* $A018: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A023; }
label_A01A:;
    /* $A01A: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A01D:;
    /* $A01D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A01F:;
    /* $A01F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0021); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA01F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A022:;
    /* $A022: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A023:;
    /* $A023: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A026:;
    /* $A026: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A028:;
    /* $A028: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A02A:;
    /* $A02A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A068; }
label_A02C:;
    /* $A02C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_A031:;
    /* $A031: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05A; }
label_A033:;
    /* $A033: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A038:;
    /* $A038: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A03D; }
label_A03A:;
    /* $A03A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x003C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA03A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A03D:;
    /* $A03D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A040:;
    /* $A040: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_A045:;
    /* $A045: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A08B; }
label_A047:;
    /* $A047: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_A049:;
    /* $A049: 8D */ maybe_trigger_vblank(4); nes_write(0x05DF, g_cpu.A);
label_A04C:;
    /* $A04C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A04E:;
    /* $A04E: 8D */ maybe_trigger_vblank(4); nes_write(0x05FF, g_cpu.A);
label_A051:;
    /* $A051: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_A054:; /* main_giant_met */
    /* $A054: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A056:;
    /* $A056: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A059:;
    /* $A059: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05A:;
    /* $A05A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_A05C:;
    /* $A05C: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_A05F:;
    /* $A05F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A061:;
    /* $A061: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_A064:;
    /* $A064: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A067:;
    /* $A067: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A068:; /* needle_man_throw */
    /* $A068: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A06A:;
    /* $A06A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A079; }
label_A06C:;
    /* $A06C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_A06F:;
    /* $A06F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A07D; }
label_A071:;
    /* $A071: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A074:;
    /* $A074: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_A076:;
    /* $A076: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A079:;
    /* $A079: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A07C:;
    /* $A07C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A07D:;
    /* $A07D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A082:;
    /* $A082: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A084:;
    /* $A084: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A087:;
    /* $A087: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_A089:;
    /* $A089: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A08B:;
    /* $A08B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b15_body(int _entry) { /* process_sprites_j */
    switch (_entry) {
        case 1: goto label_8005;
        case 2: goto label_8010;
        case 3: goto label_8040;
        case 4: goto label_8042;
    }
label_8000:; /* process_sprites_j */
    /* $8000: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8001:;
    /* $8001: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8002:;
    /* $8002: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8003:;
    /* $8003: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8004:;
    /* $8004: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8005:;
    /* $8005: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8006:;
    /* $8006: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_8009:;
    /* $8009: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_800D:;
    /* $800D: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_8010:;
    /* $8010: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8012:;
    /* $8012: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_8015:;
    /* $8015: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xEE); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8088; }
label_801B:;
    /* $801B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_801D:;
    /* $801D: 85 */ maybe_trigger_vblank(3); nes_write(0x79, g_cpu.A);
label_801F:;
    /* $801F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFD); FLAG_NZ(g_cpu.A);
label_8021:;
    /* $8021: 85 */ maybe_trigger_vblank(3); nes_write(0x7A, g_cpu.A);
label_8023:; /* jump_local_ptr */
    /* $8023: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF8); FLAG_NZ(g_cpu.A);
label_8025:;
    /* $8025: 85 */ maybe_trigger_vblank(3); nes_write(0x78, g_cpu.A);
label_8027:;
    /* $8027: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_8029:;
    /* $8029: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_802F; }
label_802B:;
    /* $802B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5E); FLAG_NZ(g_cpu.A);
label_802D:;
    /* $802D: 85 */ maybe_trigger_vblank(3); nes_write(0x7B, g_cpu.A);
label_802F:;
    /* $802F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8031:;
    /* $8031: 8D */ maybe_trigger_vblank(4); nes_write(0x2003, g_cpu.A);
label_8034:;
    /* $8034: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8036:;
    /* $8036: 8D */ maybe_trigger_vblank(4); nes_write(0x4014, g_cpu.A);
label_8039:;
    /* $8039: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x19); FLAG_NZ(g_cpu.A);
label_803B:;
    /* $803B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8040; }
label_803D:;
    /* $803D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x003F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC4F8, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x803D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8040:;
    /* $8040: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_8042:;
    /* $8042: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_805B; }
label_8044:;
    /* $8044: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8046:;
    /* $8046: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8048:;
    /* $8048: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_804A:;
    /* $804A: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_804D:;
    /* $804D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_804F:;
    /* $804F: 86 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.X);
label_8051:;
    /* $8051: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0053); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC4FC, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8051, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8054:;
    /* $8054: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8056:;
    /* $8056: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8058:;
    /* $8058: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_805B:;
    /* $805B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x18); FLAG_NZ(g_cpu.A);
label_805D:;
    /* $805D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8088; }
label_805F:;
    /* $805F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8061:;
    /* $8061: 86 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.X);
label_8063:;
    /* $8063: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_8066:;
    /* $8066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_8068:;
    /* $8068: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_806B:;
    /* $806B: 8E */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.X);
label_806E:;
    /* $806E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_8070:;
    /* $8070: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8073:;
    /* $8073: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_8076:;
    /* $8076: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8077:;
    /* $8077: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8078:;
    /* $8078: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8070;
    }
label_807A:;
    /* $807A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_807C:;
    /* $807C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_807F:;
    /* $807F: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_8082:;
    /* $8082: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_8085:;
    /* $8085: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_8088:;
    /* $8088: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x78); FLAG_NZ(g_cpu.A);
label_808A:;
    /* $808A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_808C:;
    /* $808C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_809D; }
label_808E:;
    /* $808E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_8091:;
    /* $8091: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5F); FLAG_NZ(g_cpu.A);
label_8093:;
    /* $8093: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_8096:;
    /* $8096: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8098:;
    /* $8098: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_809B:;
    /* $809B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80AA; }
label_809D:;
    /* $809D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_80A0:;
    /* $80A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_80A2:;
    /* $80A2: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_80A5:;
    /* $80A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFA); FLAG_NZ(g_cpu.A);
label_80A7:;
    /* $80A7: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_80AA:;
    /* $80AA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_80AC:;
    /* $80AC: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_80AF:;
    /* $80AF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_80B1:;
    /* $80B1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_80B3:;
    /* $80B3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_80B5:;
    /* $80B5: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_80B8:;
    /* $80B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00BA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF41(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80BB:;
    /* $80BB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_80BD:;
    /* $80BD: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_80C0:;
    /* $80C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_80C2:;
    /* $80C2: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_80C5:;
    /* $80C5: 8D */ maybe_trigger_vblank(4); nes_write(0xC001, g_cpu.A);
label_80C8:;
    /* $80C8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x9B); FLAG_NZ(g_cpu.X);
label_80CA:;
    /* $80CA: 9D */ maybe_trigger_vblank(5); nes_write((0xE000 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80CD:;
    /* $80CD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80E7; }
label_80CF:;
    /* $80CF: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x78); FLAG_NZ(g_cpu.X);
label_80D1:;
    /* $80D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_80D3:;
    /* $80D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80DD; }
label_80D5:;
    /* $80D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_80D7:;
    /* $80D7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x51); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_80D9:;
    /* $80D9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_80DD; }
label_80DB:;
    /* $80DB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_80DD:;
    /* $80DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80E0:;
    /* $80E0: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_80E2:;
    /* $80E2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4DA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80E5:;
    /* $80E5: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_80E7:;
    /* $80E7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80E9:;
    /* $80E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_80EB:;
    /* $80EB: 86 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.X);
label_80ED:;
    /* $80ED: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80EE:;
    /* $80EE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_80F0:;
    /* $80F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_80F2:;
    /* $80F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_80F4:;
    /* $80F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80F6:;
    /* $80F6: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80F8:;
    /* $80F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80FA:;
    /* $80FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_80FC:;
    /* $80FC: 95 */ maybe_trigger_vblank(4); nes_write((0x80 + g_cpu.X) & 0xFF, g_cpu.A);
label_80FE:;
    /* $80FE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80FF:;
    /* $80FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8100:;
    /* $8100: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8101:;
    /* $8101: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8102:; /* check_weapon_hit */
    /* $8102: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8103:;
    /* $8103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80F0;
    }
label_8105:;
    /* $8105: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8106:; /* play_sound_ID */
    /* $8106: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0107 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8109:;
    /* $8109: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_810B:;
    /* $810B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_810E:;
    /* $810E: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8110:;
    /* $8110: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: 9D */ maybe_trigger_vblank(5); nes_write((0x0107 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8115:;
    /* $8115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8117:;
    /* $8117: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_811A:;
    /* $811A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811B:;
    /* $811B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_811C:;
    /* $811C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811D:;
    /* $811D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_811E:;
    /* $811E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811F:;
    /* $811F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8120:;
    /* $8120: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x8120; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8000_b15(void) { /* process_sprites_j */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b15");
#endif
    func_8000_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8005_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8005_b15");
#endif
    func_8000_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8010_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8010_b15");
#endif
    func_8000_b15_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8040_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8040_b15");
#endif
    func_8000_b15_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8042_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8042_b15");
#endif
    func_8000_b15_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8D00_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D00_b15");
#endif
label_8D00:;
    /* $8D00: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8D02:;
    /* $8D02: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D02); return;
}

void func_80F5_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F5_b15");
#endif
label_80F5:;
    /* $80F5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_80F6:;
    /* $80F6: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80F8:;
    /* $80F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80FA:;
    /* $80FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_80FC:;
    /* $80FC: 95 */ maybe_trigger_vblank(4); nes_write((0x80 + g_cpu.X) & 0xFF, g_cpu.A);
label_80FE:;
    /* $80FE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80FF:;
    /* $80FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8100:;
    /* $8100: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8101:;
    /* $8101: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8102:; /* check_weapon_hit */
    /* $8102: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8103:;
    /* $8103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x00F0), -1); return; }
label_8105:;
    /* $8105: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8106:; /* play_sound_ID */
    /* $8106: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0107 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8109:;
    /* $8109: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_810B:;
    /* $810B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_810E:;
    /* $810E: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8110:;
    /* $8110: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: 9D */ maybe_trigger_vblank(5); nes_write((0x0107 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8115:;
    /* $8115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8117:;
    /* $8117: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_811A:;
    /* $811A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811B:;
    /* $811B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_811C:;
    /* $811C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811D:;
    /* $811D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_811E:;
    /* $811E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811F:;
    /* $811F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8120:;
    /* $8120: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x8120; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BFCE_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BFCE_b15");
#endif
label_BFCE:;
    /* $BFCE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A98D_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A98D_b15");
#endif
label_A98D:;
    /* $A98D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A98F:;
    /* $A98F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A990:;
    /* $A990: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEC12 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A993:;
    /* $A993: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_A995:;
    /* $A995: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0960), -1); return; }
label_A99B:;
    /* $A99B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A9A1:;
    /* $A9A1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0960), -1); return; }
label_A9A5:;
    /* $A9A5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A7:;
    /* $A9A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x095D), -1); return; }
label_A9AD:;
    /* $A9AD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AF:;
    /* $A9AF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B1:;
    /* $A9B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9B3:;
    /* $A9B3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A9B7:;
    /* $A9B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E94D(); g_code_window_base = _swb; } return;
}

void func_9029_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_905D;
    }
label_9029:;
    /* $9029: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x08F6 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_902C:;
    /* $902C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_902E:;
    /* $902E: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_9030:;
    /* $9030: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_907E; }
label_9032:;
    /* $9032: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xB9); FLAG_NZ(g_cpu.A);
label_9034:;
    /* $9034: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9084; }
label_9036:;
    /* $9036: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_9038:;
    /* $9038: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_903A:;
    /* $903A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xBA); FLAG_NZ(g_cpu.A);
label_903C:;
    /* $903C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9084; }
label_903E:;
    /* $903E: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xBA; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9040:;
    /* $9040: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_9042:;
    /* $9042: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1044); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9042, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9045:;
    /* $9045: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9047:;
    /* $9047: 8D */ maybe_trigger_vblank(4); nes_write(0x0304, g_cpu.A);
label_904A:;
    /* $904A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_904D:;
    /* $904D: 8D */ maybe_trigger_vblank(4); nes_write(0x0584, g_cpu.A);
label_9050:;
    /* $9050: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_9052:;
    /* $9052: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x68; FLAG_NZ(g_cpu.A);
label_9054:;
    /* $9054: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1056); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9054, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9057:;
    /* $9057: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_905A:;
    /* $905A: 8D */ maybe_trigger_vblank(4); nes_write(0x0364, g_cpu.A);
label_905D:;
    /* $905D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_9060:;
    /* $9060: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_9063:;
    /* $9063: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_9066:;
    /* $9066: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_9068:;
    /* $9068: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9069:;
    /* $9069: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x08; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_906B:;
    /* $906B: 8D */ maybe_trigger_vblank(4); nes_write(0x03C4, g_cpu.A);
label_906E:;
    /* $906E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_9071:;
    /* $9071: 8D */ maybe_trigger_vblank(4); nes_write(0x03E4, g_cpu.A);
label_9074:;
    /* $9074: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9076:;
    /* $9076: 8E */ maybe_trigger_vblank(4); nes_write(0x0484, g_cpu.X);
label_9079:;
    /* $9079: 8E */ maybe_trigger_vblank(4); nes_write(0x0324, g_cpu.X);
label_907C:;
    /* $907C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9084; }
label_907E:;
    /* $907E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9080:;
    /* $9080: 85 */ maybe_trigger_vblank(3); nes_write(0xBA, g_cpu.A);
label_9082:;
    /* $9082: 85 */ maybe_trigger_vblank(3); nes_write(0xB9, g_cpu.A);
label_9084:;
    /* $9084: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9085:;
    /* $9085: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1087); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD47E, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9085, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9088:;
    /* $9088: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_90A7; }
label_908A:;
    /* $908A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_908C:;
    /* $908C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90A6; }
label_908E:;
    /* $908E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_9090:;
    /* $9090: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1092); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9090, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9093:;
    /* $9093: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9095:;
    /* $9095: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_9097:;
    /* $9097: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_9099:;
    /* $9099: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x109B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9099, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_909C:;
    /* $909C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x05A0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_909F:;
    /* $909F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x32); FLAG_NZ(g_cpu.A);
label_90A1:;
    /* $90A1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90A6; }
label_90A3:;
    /* $90A3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10A5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD370, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90A3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90A6:;
    /* $90A6: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_90A7:;
    /* $90A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_90A9:;
    /* $90A9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_90AB:;
    /* $90AB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90D8; }
label_90AD:;
    /* $90AD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_90AF:;
    /* $90AF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90C1; }
label_90B1:;
    /* $90B1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_90B3:;
    /* $90B3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10B5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90B3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90B6:;
    /* $90B6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_90B8:;
    /* $90B8: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_90BA:;
    /* $90BA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x32); FLAG_NZ(g_cpu.A);
label_90BC:;
    /* $90BC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90C1; }
label_90BE:;
    /* $90BE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10C0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD370, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90BE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90C1:;
    /* $90C1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_90C3:;
    /* $90C3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_90C5:;
    /* $90C5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90CC; }
label_90C7:;
    /* $90C7: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_90C9:;
    /* $90C9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10CB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xCF3D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90C9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90CC:;
    /* $90CC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10CE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD355, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90CC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90CF:;
    /* $90CF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_90D1:;
    /* $90D1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_90D3:;
    /* $90D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_90D8; }
label_90D5:;
    /* $90D5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x10D7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD0DA, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x90D5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_90D8:;
    /* $90D8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_90D9:;
    /* $90D9: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9029_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9029_b15");
#endif
    func_9029_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_905D_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_905D_b15");
#endif
    func_9029_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_FA40_body(int _entry) {
    switch (_entry) {
        case 1: goto label_FA43;
    }
label_FA40:;
    /* $FA40: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_FA41:;
    /* $FA41: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_FA43:;
    /* $FA43: 84 */ maybe_trigger_vblank(3); nes_write(0x5D, g_cpu.Y);
label_FA45:;
    /* $FA45: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_FA47:;
    /* $FA47: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_FA48:;
    /* $FA48: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_FA40(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FA40");
#endif
    func_FA40_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_FA43(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_FA43");
#endif
    func_FA40_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A485_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A485_b15");
#endif
label_A485:;
    /* $A485: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A487:;
    /* $A487: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A489:;
    /* $A489: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0797 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A48C:;
    /* $A48C: 99 */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A48F:;
    /* $A48F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A490:;
    /* $A490: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0A; g_cpu.C=(g_cpu.Y>=0x0A)?1:0; FLAG_NZ(r&0xFF); }
label_A492:;
    /* $A492: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A489;
    }
label_A494:;
    /* $A494: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x07A1); FLAG_NZ(g_cpu.A);
label_A497:;
    /* $A497: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A49F; }
label_A499:;
    /* $A499: 8D */ maybe_trigger_vblank(4); nes_write(0x078D, g_cpu.A);
label_A49C:;
    /* $A49C: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_A49E:;
    /* $A49E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A49F:;
    /* $A49F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A4A1:;
    /* $A4A1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x07B5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A4:;
    /* $A4A4: 99 */ maybe_trigger_vblank(5); nes_write((0x078D + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A4A7:;
    /* $A4A7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A4A8:;
    /* $A4A8: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0D; g_cpu.C=(g_cpu.Y>=0x0D)?1:0; FLAG_NZ(r&0xFF); }
label_A4AA:;
    /* $A4AA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A4A1;
    }
label_A4AC:;
    /* $A4AC: 85 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.A);
label_A4AE:;
    /* $A4AE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A900_b15(void) { /* shadow_damage_table */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A900_b15");
#endif
label_A900:; /* shadow_damage_table */
    /* $A900: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A90F; }
label_A902:;
    /* $A902: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A904:;
    /* $A904: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A906:;
    /* $A906: 99 */ maybe_trigger_vblank(5); nes_write((0x0042 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A909:;
    /* $A909: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A90A:;
    /* $A90A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A906;
    }
label_A90C:;
    /* $A90C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB24(); g_code_window_base = _swb; } return;
label_A90F:;
    /* $A90F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A902;
    }
label_A913:;
    /* $A913: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A916:;
    /* $A916: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A917:;
    /* $A917: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A918:;
    /* $A918: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A91C:;
    /* $A91C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A91D:;
    /* $A91D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A91E:;
    /* $A91E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A920:;
    /* $A920: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A922:;
    /* $A922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A924:;
    /* $A924: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A926:;
    /* $A926: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xEC12 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A929:;
    /* $A929: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A92D; }
label_A92B:;
    /* $A92B: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A92D:;
    /* $A92D: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A92E:;
    /* $A92E: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0360 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A931:;
    /* $A931: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_A933:;
    /* $A933: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0380 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A936:;
    /* $A936: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A938:;
    /* $A938: 85 */ maybe_trigger_vblank(3); nes_write(0x13, g_cpu.A);
label_A93A:;
    /* $A93A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_A93C:;
    /* $A93C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A93D:;
    /* $A93D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A93E:;
    /* $A93E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A93F:;
    /* $A93F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A940:;
    /* $A940: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A941:;
    /* $A941: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A943:;
    /* $A943: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A945:;
    /* $A945: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A947:;
    /* $A947: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A948:;
    /* $A948: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A94B:;
    /* $A94B: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A94D:;
    /* $A94D: 86 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.X);
label_A94F:;
    /* $A94F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A951:;
    /* $A951: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A953:;
    /* $A953: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0955); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA953, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A956:;
    /* $A956: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x04); FLAG_NZ(g_cpu.X);
label_A958:;
    /* $A958: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x13); FLAG_NZ(g_cpu.Y);
label_A95A:;
    /* $A95A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x095C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA95A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A95D:;
    /* $A95D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x095F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E882(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA95D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A960:;
    /* $A960: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x03); FLAG_NZ(g_cpu.Y);
label_A962:;
    /* $A962: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A964:;
    /* $A964: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A965:;
    /* $A965: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_A96A:;
    /* $A96A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB30(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA96A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A96D:;
    /* $A96D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB8A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA96D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A970:;
    /* $A970: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A972:;
    /* $A972: 99 */ maybe_trigger_vblank(5); nes_write((0x0042 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A975:;
    /* $A975: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x41); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A977:;
    /* $A977: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A97B; }
label_A979:;
    /* $A979: 85 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.A);
label_A97B:;
    /* $A97B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A97D:;
    /* $A97D: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A97F:;
    /* $A97F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A981:;
    /* $A981: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A9BA; }
label_A983:;
    /* $A983: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x40; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A985:;
    /* $A985: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x40); FLAG_NZ(g_cpu.Y);
label_A987:;
    /* $A987: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_A989:;
    /* $A989: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A98A:;
    /* $A98A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A98C:;
    /* $A98C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A98E:;
    /* $A98E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A98F:;
    /* $A98F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A990:;
    /* $A990: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEC12 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A993:;
    /* $A993: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_A995:;
    /* $A995: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A960;
    }
label_A99B:;
    /* $A99B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A9A1:;
    /* $A9A1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A960;
    }
label_A9A5:;
    /* $A9A5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A7:;
    /* $A9A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A95D;
    }
label_A9AD:;
    /* $A9AD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AF:;
    /* $A9AF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B1:;
    /* $A9B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9B3:;
    /* $A9B3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A9B7:;
    /* $A9B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E94D(); g_code_window_base = _swb; } return;
label_A9BA:;
    /* $A9BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A9BC:;
    /* $A9BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9BE:;
    /* $A9BE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x39); FLAG_NZ(g_cpu.A);
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C2:;
    /* $A9C2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C6:;
    /* $A9C6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A9CA:;
    /* $A9CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9CC:;
    /* $A9CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A9CE:;
    /* $A9CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D0:;
    /* $A9D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_A9D2:;
    /* $A9D2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A9D4:;
    /* $A9D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A9D6:;
    /* $A9D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9DE; }
label_A9D8:;
    /* $A9D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_A9DA:;
    /* $A9DA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_A9DC:;
    /* $A9DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9DE:;
    /* $A9DE: 84 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.Y);
label_A9E0:;
    /* $A9E0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB24(); g_code_window_base = _swb; } return;
}

void func_B901_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_B905;
    }
label_B901:;
    /* $B901: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_B903:;
    /* $B903: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B904:;
    /* $B904: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B905:;
    /* $B905: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_B907:;
    /* $B907: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B909:;
    /* $B909: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B914; }
label_B90B:;
    /* $B90B: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_B90C:;
    /* $B90C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_B90E:;
    /* $B90E: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_B910:;
    /* $B910: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B911:;
    /* $B911: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_B913:;
    /* $B913: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B914:;
    /* $B914: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_B916:;
    /* $B916: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_B918:;
    /* $B918: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_B91A:;
    /* $B91A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B91B:;
    /* $B91B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B91C:;
    /* $B91C: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B91E:;
    /* $B91E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B929; }
label_B920:;
    /* $B920: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B922:;
    /* $B922: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B923:;
    /* $B923: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B925:;
    /* $B925: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_B929; }
label_B927:;
    /* $B927: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B929:;
    /* $B929: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_B92A:;
    /* $B92A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B92B:;
    /* $B92B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B92C:;
    /* $B92C: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_B92D:;
    /* $B92D: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B92F:;
    /* $B92F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B930:;
    /* $B930: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xF934 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B933:;
    /* $B933: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B901_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B901_b15");
#endif
    func_B901_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_B905_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B905_b15");
#endif
    func_B901_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85AD_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AD_b15");
#endif
label_85AD:;
    /* $85AD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_85AF:;
    /* $85AF: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_85B2:;
    /* $85B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_85B4:;
    /* $85B4: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_85B7:;
    /* $85B7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_85B9:;
    /* $85B9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_85BB:;
    /* $85BB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_85BF; }
label_85BD:;
    /* $85BD: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_85BF:;
    /* $85BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_85C1:;
    /* $85C1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_85C3:;
    /* $85C3: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_85C6:;
    /* $85C6: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85C7:; /* main_ret_A */
    /* $85C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_85C3;
    }
label_85C9:; /* main_unknown_1B */
    /* $85C9: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_85CA:;
    /* $85CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_85C3;
    }
label_85CC:;
    /* $85CC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_85CE:;
    /* $85CE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_85D0:;
    /* $85D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_85D2:;
    /* $85D2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E6; }
label_85D4:;
    /* $85D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85D6:;
    /* $85D6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_85DE:;
    /* $85DE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_85E0:;
    /* $85E0: 8C */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.Y);
label_85E3:;
    /* $85E3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_85E4:;
    /* $85E4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_85E0;
    }
label_85E6:;
    /* $85E6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_85E8:;
    /* $85E8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_CC11(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_CC11");
#endif
label_CC11:;
    /* $CC11: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_CC12:;
    /* $CC12: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C14); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC12, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC15:;
    /* $CC15: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8FF, -1); return;
}

void func_A1F8_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A2A9;
        case 2: goto label_A2D2;
    }
label_A1F8:;
    /* $A1F8: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A1F9:;
    /* $A1F9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A1FB:;
    /* $A1FB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A1FF; }
label_A1FD:;
    /* $A1FD: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A1FF:;
    /* $A1FF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_A201:;
    /* $A201: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A228; }
label_A203:;
    /* $A203: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_A205:;
    /* $A205: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A206:;
    /* $A206: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A208:;
    /* $A208: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_A20A:;
    /* $A20A: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A224; }
label_A20C:;
    /* $A20C: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x2D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A20E:;
    /* $A20E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2D); FLAG_NZ(g_cpu.A);
label_A210:;
    /* $A210: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x2C); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A212:;
    /* $A212: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A222; }
label_A214:;
    /* $A214: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A216:;
    /* $A216: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_A218:;
    /* $A218: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A21A:;
    /* $A21A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A21D:;
    /* $A21D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A222; }
label_A21F:;
    /* $A21F: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A222:;
    /* $A222: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xF9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A224:;
    /* $A224: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E467(); g_code_window_base = _swb; } return;
label_A228:;
    /* $A228: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_A22A:;
    /* $A22A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0227), -1); return; }
label_A22C:;
    /* $A22C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A22F:;
    /* $A22F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x10; g_cpu.C=(g_cpu.A>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_A231:;
    /* $A231: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A23D; }
label_A233:;
    /* $A233: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A235:;
    /* $A235: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A238:;
    /* $A238: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A23D; }
label_A23A:;
    /* $A23A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E33C(); g_code_window_base = _swb; } return;
label_A23D:;
    /* $A23D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xE5; g_cpu.C=(g_cpu.A>=0xE5)?1:0; FLAG_NZ(r&0xFF); }
label_A23F:;
    /* $A23F: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A241:;
    /* $A241: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A243:;
    /* $A243: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A24A; }
label_A245:;
    /* $A245: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF0; FLAG_NZ(g_cpu.A);
label_A247:;
    /* $A247: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A24A:;
    /* $A24A: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x2B); FLAG_NZ(g_cpu.Y);
label_A24C:;
    /* $A24C: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA40 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A24F:;
    /* $A24F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A251:;
    /* $A251: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A253:;
    /* $A253: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A256:;
    /* $A256: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A25A:;
    /* $A25A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A25D:;
    /* $A25D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A25F:;
    /* $A25F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A261:;
    /* $A261: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A263:;
    /* $A263: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A265:;
    /* $A265: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A267:;
    /* $A267: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A27A; }
label_A269:;
    /* $A269: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A26B:;
    /* $A26B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x15; g_cpu.C=(g_cpu.A>=0x15)?1:0; FLAG_NZ(r&0xFF); }
label_A26D:;
    /* $A26D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A273; }
label_A26F:;
    /* $A26F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1A; g_cpu.C=(g_cpu.A>=0x1A)?1:0; FLAG_NZ(r&0xFF); }
label_A271:;
    /* $A271: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A27A; }
label_A273:;
    /* $A273: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x033F); FLAG_NZ(g_cpu.A);
label_A276:;
    /* $A276: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFC; g_cpu.C=(g_cpu.A>=0xFC)?1:0; FLAG_NZ(r&0xFF); }
label_A278:;
    /* $A278: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A27A:;
    /* $A27A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A27C:;
    /* $A27C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A27D:;
    /* $A27D: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xAA30); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A280:;
    /* $A280: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A282:;
    /* $A282: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A28F; }
label_A284:;
    /* $A284: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x031F); FLAG_NZ(g_cpu.A);
label_A287:;
    /* $A287: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A289:;
    /* $A289: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A28B:;
    /* $A28B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_A28D:;
    /* $A28D: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A28F:;
    /* $A28F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A291:;
    /* $A291: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_A293:;
    /* $A293: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2A5; }
label_A295:;
    /* $A295: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A297:;
    /* $A297: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x08; g_cpu.C=(g_cpu.A>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A299:;
    /* $A299: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2A5; }
label_A29B:;
    /* $A29B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0F; FLAG_NZ(g_cpu.X);
label_A29D:;
    /* $A29D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0310 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2A0:;
    /* $A2A0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A23A;
    }
label_A2A2:;
    /* $A2A2: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A2A3:;
    /* $A2A3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A29D;
    }
label_A2A5:;
    /* $A2A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A2A7:;
    /* $A2A7: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_A2A9:;
    /* $A2A9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAA41 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2AC:;
    /* $A2AC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_A2AE:;
    /* $A2AE: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_A2B0:;
    /* $A2B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A2B2:;
    /* $A2B2: 85 */ maybe_trigger_vblank(3); nes_write(0x2D, g_cpu.A);
label_A2B4:;
    /* $A2B4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x2B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2B6:;
    /* $A2B6: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xF8); FLAG_NZ(g_cpu.Y);
label_A2B8:;
    /* $A2B8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A2BA:;
    /* $A2BA: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_A2BC:;
    /* $A2BC: 85 */ maybe_trigger_vblank(3); nes_write(0x76, g_cpu.A);
label_A2BE:;
    /* $A2BE: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_A2C0:;
    /* $A2C0: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_A2C2:;
    /* $A2C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_A2C4:;
    /* $A2C4: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_A2C6:;
    /* $A2C6: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A2C8:;
    /* $A2C8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A2D5; }
label_A2CA:;
    /* $A2CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x42; FLAG_NZ(g_cpu.A);
label_A2CC:;
    /* $A2CC: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_A2CE:;
    /* $A2CE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_A2D0:;
    /* $A2D0: 85 */ maybe_trigger_vblank(3); nes_write(0x29, g_cpu.A);
label_A2D2:;
    /* $A2D2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02D4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC83D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA2D2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A2D5:;
    /* $A2D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A2D7:;
    /* $A2D7: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A2D8:;
    /* $A2D8: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xAA30); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A2DB:;
    /* $A2DB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A2F7; }
label_A2DD:;
    /* $A2DD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A2DF:;
    /* $A2DF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A2E8; }
label_A2E1:;
    /* $A2E1: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A2E2:;
    /* $A2E2: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xAA31 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A2E5:;
    /* $A2E5: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E2F4(); g_code_window_base = _swb; } return;
label_A2E8:;
    /* $A2E8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A2EA:;
    /* $A2EA: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A2EB:;
    /* $A2EB: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xAA38); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A2EE:;
    /* $A2EE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A2F7; }
label_A2F0:;
    /* $A2F0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A2F1:;
    /* $A2F1: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xAA39 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A2F4:;
    /* $A2F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x02F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE31(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA2F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A2F7:;
    /* $A2F7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A2F9:;
    /* $A2F9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A308; }
label_A2FB:;
    /* $A2FB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_A2FD:;
    /* $A2FD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xAAA2 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A300:; /* enemy_OAM_ID_g */
    /* $A300: 9D */ maybe_trigger_vblank(5); nes_write((0x060C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A303:;
    /* $A303: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A304:;
    /* $A304: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2FD;
    }
label_A306:;
    /* $A306: 86 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.X);
label_A308:;
    /* $A308: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE4; FLAG_NZ(g_cpu.A);
label_A30A:;
    /* $A30A: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A30D:;
    /* $A30D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x030F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5D1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA30D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A310:;
    /* $A310: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A312:;
    /* $A312: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A314:;
    /* $A314: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0316); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA314, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A317:;
    /* $A317: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A319:;
    /* $A319: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A31A:;
    /* $A31A: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xAA30); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A31D:;
    /* $A31D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A33B; }
label_A31F:;
    /* $A31F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x05; g_cpu.C=(g_cpu.A>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A321:;
    /* $A321: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A32A; }
label_A323:;
    /* $A323: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A324:;
    /* $A324: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xAA30 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A327:;
    /* $A327: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E338(); g_code_window_base = _swb; } return;
label_A32A:;
    /* $A32A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A32C:;
    /* $A32C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A32D:;
    /* $A32D: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xAA38); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A330:;
    /* $A330: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A33B; }
label_A332:;
    /* $A332: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A33B; }
label_A334:;
    /* $A334: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xAA38 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A338:;
    /* $A338: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x033A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EE44(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA338, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A33B:;
    /* $A33B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1F8_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1F8_b15");
#endif
    func_A1F8_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2A9_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2A9_b15");
#endif
    func_A1F8_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2D2_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2D2_b15");
#endif
    func_A1F8_b15_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E6C0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_E6C2;
    }
label_E6C0:;
    /* $E6C0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_E6C2:;
    /* $E6C2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x23); FLAG_NZ(g_cpu.A);
label_E6C4:;
    /* $E6C4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_E6C6:;
    /* $E6C6: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E6C7:;
    /* $E6C7: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E6C8:;
    /* $E6C8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E6C9:;
    /* $E6C9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_E6CB:;
    /* $E6CB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_E6CC:;
    /* $E6CC: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE7E9 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_E6CF:;
    /* $E6CF: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_E6D1:;
    /* $E6D1: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x1E; g_cpu.C=(g_cpu.A>=0x1E)?1:0; FLAG_NZ(r&0xFF); }
label_E6D3:;
    /* $E6D3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_E6DA; }
label_E6D5:;
    /* $E6D5: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE7E7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E6D8:;
    /* $E6D8: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_E6DA:;
    /* $E6DA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_E6DC:;
    /* $E6DC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_E6DE:;
    /* $E6DE: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE7E5 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_E6E1:;
    /* $E6E1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_E6E6; }
label_E6E3:;
    /* $E6E3: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E79F(); g_code_window_base = _swb; } return;
label_E6E6:;
    /* $E6E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_E6E8:;
    /* $E6E8: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_E6EA:;
    /* $E6EA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06EC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE6EA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E6ED:;
    /* $E6ED: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x29); FLAG_NZ(g_cpu.Y);
label_E6EF:;
    /* $E6EF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x06F1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8B1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE6EF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E6F2:;
    /* $E6F2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_E6F4:;
    /* $E6F4: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1C; FLAG_NZ(g_cpu.A);
label_E6F6:;
    /* $E6F6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_E6F7:;
    /* $E6F7: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_E6F9:;
    /* $E6F9: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xC0; FLAG_NZ(g_cpu.A);
label_E6FB:;
    /* $E6FB: 8D */ maybe_trigger_vblank(4); nes_write(0x07A4, g_cpu.A);
label_E6FE:;
    /* $E6FE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_E700:;
    /* $E700: 8D */ maybe_trigger_vblank(4); nes_write(0x07A3, g_cpu.A);
label_E703:;
    /* $E703: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x07; FLAG_NZ(g_cpu.A);
label_E705:;
    /* $E705: 8D */ maybe_trigger_vblank(4); nes_write(0x07A5, g_cpu.A);
label_E708:;
    /* $E708: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_E70A:;
    /* $E70A: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_E70C:;
    /* $E70C: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x28); FLAG_NZ(g_cpu.Y);
label_E70E:;
    /* $E70E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0640 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E711:;
    /* $E711: 85 */ maybe_trigger_vblank(3); nes_write(0x11, g_cpu.A);
label_E713:;
    /* $E713: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0715); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E7F1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xE713, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_E716:;
    /* $E716: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x03); FLAG_NZ(g_cpu.Y);
label_E718:;
    /* $E718: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_E71A:;
    /* $E71A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_E71C:;
    /* $E71C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E71D:;
    /* $E71D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE7D9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E720:;
    /* $E720: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_E722:;
    /* $E722: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE7DD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E725:;
    /* $E725: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_E727:;
    /* $E727: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_E729:;
    /* $E729: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_E72B:;
    /* $E72B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x04); FLAG_NZ(g_cpu.X);
label_E72D:;
    /* $E72D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E730:;
    /* $E730: 99 */ maybe_trigger_vblank(5); nes_write((0x0783 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E733:;
    /* $E733: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x05); FLAG_NZ(g_cpu.X);
label_E735:;
    /* $E735: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x06C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E738:;
    /* $E738: 99 */ maybe_trigger_vblank(5); nes_write((0x07AF + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_E73B:;
    /* $E73B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E73D:;
    /* $E73D: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E73F:;
    /* $E73F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_E740:;
    /* $E740: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x06; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E742:;
    /* $E742: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E72B;
    }
label_E744:;
    /* $E744: 84 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.Y);
label_E746:;
    /* $E746: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_E748:;
    /* $E748: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_E74A:;
    /* $E74A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E74B:;
    /* $E74B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_E74D:;
    /* $E74D: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xE7D1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E750:;
    /* $E750: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_E752:;
    /* $E752: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x11); FLAG_NZ(g_cpu.A);
label_E754:;
    /* $E754: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xE7D5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E757:;
    /* $E757: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_E759:;
    /* $E759: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_E75B:;
    /* $E75B: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x28); FLAG_NZ(g_cpu.X);
label_E75D:;
    /* $E75D: 9D */ maybe_trigger_vblank(5); nes_write((0x0640 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E760:;
    /* $E760: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_E761:;
    /* $E761: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_E763:;
    /* $E763: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E764:;
    /* $E764: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_E766:;
    /* $E766: 9D */ maybe_trigger_vblank(5); nes_write((0x07A6 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E769:;
    /* $E769: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_E76B:;
    /* $E76B: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x07; g_cpu.C=(g_cpu.X>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_E76D:;
    /* $E76D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_E70C;
    }
label_E76F:;
    /* $E76F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x24); FLAG_NZ(g_cpu.A);
label_E771:;
    /* $E771: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_E772:;
    /* $E772: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_E774:;
    /* $E774: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E775:;
    /* $E775: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_E776:;
    /* $E776: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E777:;
    /* $E777: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E778:;
    /* $E778: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_E779:;
    /* $E779: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE8A9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E77C:;
    /* $E77C: 8D */ maybe_trigger_vblank(4); nes_write(0x0780, g_cpu.A);
label_E77F:;
    /* $E77F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE8A1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E782:;
    /* $E782: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xE7E1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_E785:;
    /* $E785: 8D */ maybe_trigger_vblank(4); nes_write(0x0781, g_cpu.A);
label_E788:;
    /* $E788: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_E78A:;
    /* $E78A: 8D */ maybe_trigger_vblank(4); nes_write(0x0782, g_cpu.A);
label_E78D:;
    /* $E78D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x23); FLAG_NZ(g_cpu.A);
label_E78F:;
    /* $E78F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_E791:;
    /* $E791: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E792:;
    /* $E792: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_E793:;
    /* $E793: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_E794:;
    /* $E794: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xE7ED + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_E797:;
    /* $E797: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_E799:;
    /* $E799: 9D */ maybe_trigger_vblank(5); nes_write((0x0780 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_E79C:;
    /* $E79C: 85 */ maybe_trigger_vblank(3); nes_write(0x19, g_cpu.A);
label_E79E:;
    /* $E79E: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_E6C0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E6C0");
#endif
    func_E6C0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E6C2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E6C2");
#endif
    func_E6C0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A101_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A101_b15");
#endif
label_A101:;
    /* $A101: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xAD); FLAG_NZ(g_cpu.A);
label_A103:;
    /* $A103: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0105); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9905, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA103, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A106:;
    /* $A106: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA106); return;
}

void func_8122_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8122_b15");
#endif
label_8122:;
    /* $8122: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8123:;
    /* $8123: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8124:;
    /* $8124: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8125:;
    /* $8125: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8126:;
    /* $8126: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8127:;
    /* $8127: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_8128:;
    /* $8128: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8129:;
    /* $8129: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_812A:;
    /* $812A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_812B:;
    /* $812B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7C); FLAG_NZ(g_cpu.A);
label_812D:;
    /* $812D: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_812F:;
    /* $812F: 9D */ maybe_trigger_vblank(5); nes_write((0x0105 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8132:;
    /* $8132: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7D); FLAG_NZ(g_cpu.A);
label_8134:;
    /* $8134: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x00; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8136:;
    /* $8136: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8139:;
    /* $8139: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x013B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF90(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8139, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_813C:;
    /* $813C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_813D:;
    /* $813D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_813E:;
    /* $813E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_813F:;
    /* $813F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8140:;
    /* $8140: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8141:;
    /* $8141: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8142:;
    /* $8142: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8DEE_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DEE_b15");
#endif
label_8DEE:;
    /* $8DEE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x48); FLAG_NZ(g_cpu.A);
label_8DF0:;
    /* $8DF0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0400); FLAG_NZ(g_cpu.A);
label_8DF3:;
    /* $8DF3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8DF4:;
    /* $8DF4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0420); FLAG_NZ(g_cpu.A);
label_8DF7:;
    /* $8DF7: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8DF8:;
    /* $8DF8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x37); FLAG_NZ(g_cpu.A);
label_8DFA:;
    /* $8DFA: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_8DFD:;
    /* $8DFD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x38); FLAG_NZ(g_cpu.A);
label_8DFF:;
    /* $8DFF: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_8E02:;
    /* $8E02: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x30); FLAG_NZ(g_cpu.Y);
label_8E04:;
    /* $8E04: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x02; g_cpu.C=(g_cpu.Y>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8E06:;
    /* $8E06: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E0A; }
label_8E08:;
    /* $8E08: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_8E0A:;
    /* $8E0A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x36); FLAG_NZ(g_cpu.A);
label_8E0C:;
    /* $8E0C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8E0E:;
    /* $8E0E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8E16; }
label_8E10:;
    /* $8E10: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E12); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E10, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E13:;
    /* $8E13: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCE1A, -1); return;
label_8E16:;
    /* $8E16: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8E17:;
    /* $8E17: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E19); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8E17, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8E1A:;
    /* $8E1A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8E1B:;
    /* $8E1B: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_8E1E:;
    /* $8E1E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8E1F:;
    /* $8E1F: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_8E22:;
    /* $8E22: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8E23:;
    /* $8E23: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_8E25:;
    /* $8E25: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8E27:;
    /* $8E27: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_8E2A:;
    /* $8E2A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xBF; FLAG_NZ(g_cpu.A);
label_8E2C:;
    /* $8E2C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8E2E:;
    /* $8E2E: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_8E31:;
    /* $8E31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8E33:;
    /* $8E33: 85 */ maybe_trigger_vblank(3); nes_write(0x36, g_cpu.A);
label_8E35:;
    /* $8E35: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_818D_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_818D_b15");
#endif
label_818D:;
    /* $818D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_818F:;
    /* $818F: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_8192:;
    /* $8192: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_8195:;
    /* $8195: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
}

void func_ADEE_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADEE_b15");
#endif
label_ADEE:;
    /* $ADEE: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0FE_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0FE_b15");
#endif
label_A0FE:;
    /* $A0FE: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x99); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A100:; /* buster_damage_table */
    /* $A100: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0102); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xAD05, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA100, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A103:;
    /* $A103: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0105); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9905, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA103, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A106:;
    /* $A106: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA106); return;
}

void func_9ADE_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9ADE_b15");
#endif
label_9ADE:;
    /* $9ADE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AE0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9ADE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AE1:;
    /* $9AE1: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AE3:;
    /* $9AE3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9AE5:;
    /* $9AE5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9AE8:;
    /* $9AE8: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_9B00; }
label_9AEA:;
    /* $9AEA: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_9AED:;
    /* $9AED: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_9B00; }
label_9AEF:;
    /* $9AEF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_9AF1:;
    /* $9AF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1AF3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9AF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9AF4:;
    /* $9AF4: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9AF6:;
    /* $9AF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9AF8:;
    /* $9AF8: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0360); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9AFB:;
    /* $9AFB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); goto label_9B00; }
label_9AFD:;
    /* $9AFD: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_9B00:;
    /* $9B00: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_9B02:;
    /* $9B02: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9B04:;
    /* $9B04: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9B07; }
label_9B06:;
    /* $9B06: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B07:;
    /* $9B07: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC7F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B0A:;
    /* $9B0A: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9B0D:;
    /* $9B0D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B12; }
label_9B0F:;
    /* $9B0F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B11); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B0F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B12:;
    /* $9B12: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x01; g_cpu.C=(g_cpu.Y>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_9B14:;
    /* $9B14: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B88; }
label_9B16:;
    /* $9B16: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9B18:;
    /* $9B18: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_9B88; }
label_9B1A:;
    /* $9B1A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_9B1D:;
    /* $9B1D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_9B1F:;
    /* $9B1F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9B2C; }
label_9B21:;
    /* $9B21: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_9B23:;
    /* $9B23: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B26:;
    /* $9B26: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_9B28:;
    /* $9B28: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B2B:;
    /* $9B2B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B2C:;
    /* $9B2C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B2E:;
    /* $9B2E: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_9B31:;
    /* $9B31: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_9B33:;
    /* $9B33: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_9B36:;
    /* $9B36: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9B39:;
    /* $9B39: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9B3A:;
    /* $9B3A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0500); FLAG_NZ(g_cpu.Y);
label_9B3D:;
    /* $9B3D: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xDD00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9B40:;
    /* $9B40: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_9B42:;
    /* $9B42: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5B; FLAG_NZ(g_cpu.A);
label_9B44:; /* main_junk_golem */
    /* $9B44: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B46); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F846(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B44, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B47:;
    /* $9B47: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9B49:;
    /* $9B49: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B4C:;
    /* $9B4C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_9B4E:;
    /* $9B4E: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B51:;
    /* $9B51: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCE1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B54:;
    /* $9B54: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B57:;
    /* $9B57: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_9B5A:;
    /* $9B5A: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B5D:;
    /* $9B5D: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCD1 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B60:;
    /* $9B60: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B63:;
    /* $9B63: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC71 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B66:;
    /* $9B66: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B69:;
    /* $9B69: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDC89 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B6C:;
    /* $9B6C: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B6F:;
    /* $9B6F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCA1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B72:;
    /* $9B72: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B75:;
    /* $9B75: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDCB9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9B78:;
    /* $9B78: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9B7B:;
    /* $9B7B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_9B7C:;
    /* $9B7C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_9B7D:;
    /* $9B7D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0F; g_cpu.C=(g_cpu.Y>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_9B7F:;
    /* $9B7F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_9B42;
    }
label_9B81:;
    /* $9B81: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x32; FLAG_NZ(g_cpu.A);
label_9B83:;
    /* $9B83: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1B85); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9B83, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9B86:;
    /* $9B86: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9B88:;
    /* $9B88: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D3D0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_D3D2;
    }
label_D3D0:;
    /* $D3D0: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x8D); FLAG_NZ(g_cpu.A);
label_D3D2:;
    /* $D3D2: 84 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.Y);
label_D3D4:;
    /* $D3D4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_D3D6:;
    /* $D3D6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_D3D8:;
    /* $D3D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x13DA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD3D8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D3DB:;
    /* $D3DB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_D3DE:;
    /* $D3DE: 8D */ maybe_trigger_vblank(4); nes_write(0x0364, g_cpu.A);
label_D3E1:;
    /* $D3E1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_D3E4:;
    /* $D3E4: 8D */ maybe_trigger_vblank(4); nes_write(0x0384, g_cpu.A);
label_D3E7:;
    /* $D3E7: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03C0); FLAG_NZ(g_cpu.A);
label_D3EA:;
    /* $D3EA: 8D */ maybe_trigger_vblank(4); nes_write(0x03C4, g_cpu.A);
label_D3ED:;
    /* $D3ED: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x03E0); FLAG_NZ(g_cpu.A);
label_D3F0:;
    /* $D3F0: 8D */ maybe_trigger_vblank(4); nes_write(0x03E4, g_cpu.A);
label_D3F3:;
    /* $D3F3: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_D3F5:;
    /* $D3F5: 8E */ maybe_trigger_vblank(4); nes_write(0x0484, g_cpu.X);
label_D3F8:;
    /* $D3F8: 8E */ maybe_trigger_vblank(4); nes_write(0x0324, g_cpu.X);
label_D3FB:;
    /* $D3FB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_D412; }
label_D3FD:;
    /* $D3FD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_D3FF:;
    /* $D3FF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1401); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F67C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD3FF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D402:;
    /* $D402: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D455; }
label_D404:;
    /* $D404: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_D406:;
    /* $D406: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_D408:;
    /* $D408: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D412; }
label_D40A:;
    /* $D40A: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x31); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_D40C:;
    /* $D40C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D412; }
label_D40E:;
    /* $D40E: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_D410:;
    /* $D410: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D412:;
    /* $D412: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x31); FLAG_NZ(g_cpu.A);
label_D414:;
    /* $D414: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_D416:;
    /* $D416: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D420; }
label_D418:;
    /* $D418: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x02; FLAG_NZ(g_cpu.Y);
label_D41A:;
    /* $D41A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x141C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F580(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD41A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D41D:;
    /* $D41D: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xD425, -1); return;
label_D420:;
    /* $D420: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_D422:;
    /* $D422: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1424); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F5C4(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD422, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D425:;
    /* $D425: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D427:;
    /* $D427: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_D429:;
    /* $D429: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D42B:;
    /* $D42B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_D42D:;
    /* $D42D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D42F:;
    /* $D42F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x33; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_D431:;
    /* $D431: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_D433:;
    /* $D433: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0C; g_cpu.C=(g_cpu.A>=0x0C)?1:0; FLAG_NZ(r&0xFF); }
label_D435:;
    /* $D435: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_D43D; }
label_D437:;
    /* $D437: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D439:;
    /* $D439: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D43B:;
    /* $D43B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D43E; }
label_D43D:;
    /* $D43D: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D43E:;
    /* $D43E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D440:;
    /* $D440: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1442); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E8D6(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD440, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D443:;
    /* $D443: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x10); FLAG_NZ(g_cpu.A);
label_D445:;
    /* $D445: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_D447:;
    /* $D447: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D470; }
label_D449:;
    /* $D449: 85 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.A);
label_D44B:;
    /* $D44B: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D44D:;
    /* $D44D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D44F:;
    /* $D44F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D451:;
    /* $D451: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D471; }
label_D453:;
    /* $D453: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D45D; }
label_D455:;
    /* $D455: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D457:;
    /* $D457: 85 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.A);
label_D459:;
    /* $D459: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D45B:;
    /* $D45B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D45F; }
label_D45D:;
    /* $D45D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_D45F:;
    /* $D45F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1461); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD45F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D462:;
    /* $D462: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_D464:;
    /* $D464: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D467:;
    /* $D467: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D469:;
    /* $D469: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D46C:;
    /* $D46C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D46E:;
    /* $D46E: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_D470:;
    /* $D470: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_D471:;
    /* $D471: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_D473:;
    /* $D473: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D476:;
    /* $D476: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D478:;
    /* $D478: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D47B:;
    /* $D47B: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCEAD, -1); return;
}

void func_D3D0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D3D0");
#endif
    func_D3D0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D3D2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D3D2");
#endif
    func_D3D0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8041_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8041_b15");
#endif
label_8041:;
    /* $8041: 1A */ maybe_trigger_vblank(2); /* NOP */
label_8042:;
    /* $8042: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_805B; }
label_8044:;
    /* $8044: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8046:;
    /* $8046: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8048:;
    /* $8048: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x04; FLAG_NZ(g_cpu.A);
label_804A:;
    /* $804A: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_804D:;
    /* $804D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_804F:;
    /* $804F: 86 */ maybe_trigger_vblank(3); nes_write(0x1A, g_cpu.X);
label_8051:;
    /* $8051: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0053); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC4FC, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8051, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8054:;
    /* $8054: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_8056:;
    /* $8056: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8058:;
    /* $8058: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_805B:;
    /* $805B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x18); FLAG_NZ(g_cpu.A);
label_805D:;
    /* $805D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8088; }
label_805F:;
    /* $805F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8061:;
    /* $8061: 86 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.X);
label_8063:;
    /* $8063: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_8066:;
    /* $8066: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_8068:;
    /* $8068: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_806B:;
    /* $806B: 8E */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.X);
label_806E:;
    /* $806E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_8070:;
    /* $8070: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8073:;
    /* $8073: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_8076:;
    /* $8076: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8077:;
    /* $8077: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8078:;
    /* $8078: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8070;
    }
label_807A:;
    /* $807A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_807C:;
    /* $807C: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_807F:;
    /* $807F: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_8082:;
    /* $8082: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_8085:;
    /* $8085: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_8088:;
    /* $8088: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x78); FLAG_NZ(g_cpu.A);
label_808A:;
    /* $808A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_808C:;
    /* $808C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_809D; }
label_808E:;
    /* $808E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_8091:;
    /* $8091: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x5F); FLAG_NZ(g_cpu.A);
label_8093:;
    /* $8093: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_8096:;
    /* $8096: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8098:;
    /* $8098: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_809B:;
    /* $809B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80AA; }
label_809D:;
    /* $809D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_80A0:;
    /* $80A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_80A2:;
    /* $80A2: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_80A5:;
    /* $80A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFA); FLAG_NZ(g_cpu.A);
label_80A7:;
    /* $80A7: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_80AA:;
    /* $80AA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFE); FLAG_NZ(g_cpu.A);
label_80AC:;
    /* $80AC: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_80AF:;
    /* $80AF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_80B1:;
    /* $80B1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_80B3:;
    /* $80B3: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_80B5:;
    /* $80B5: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_80B8:;
    /* $80B8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00BA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF41(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x80B8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_80BB:;
    /* $80BB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_80BD:;
    /* $80BD: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_80C0:;
    /* $80C0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_80C2:;
    /* $80C2: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_80C5:;
    /* $80C5: 8D */ maybe_trigger_vblank(4); nes_write(0xC001, g_cpu.A);
label_80C8:;
    /* $80C8: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x9B); FLAG_NZ(g_cpu.X);
label_80CA:;
    /* $80CA: 9D */ maybe_trigger_vblank(5); nes_write((0xE000 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_80CD:;
    /* $80CD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80E7; }
label_80CF:;
    /* $80CF: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x78); FLAG_NZ(g_cpu.X);
label_80D1:;
    /* $80D1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_80D3:;
    /* $80D3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_80DD; }
label_80D5:;
    /* $80D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_80D7:;
    /* $80D7: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x51); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_80D9:;
    /* $80D9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_80DD; }
label_80DB:;
    /* $80DB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_80DD:;
    /* $80DD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4C8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80E0:;
    /* $80E0: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_80E2:;
    /* $80E2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4DA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80E5:;
    /* $80E5: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_80E7:;
    /* $80E7: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x92; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80E9:;
    /* $80E9: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xFF; FLAG_NZ(g_cpu.X);
label_80EB:;
    /* $80EB: 86 */ maybe_trigger_vblank(3); nes_write(0x90, g_cpu.X);
label_80ED:;
    /* $80ED: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80EE:;
    /* $80EE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_80F0:;
    /* $80F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_80F2:;
    /* $80F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_80F4:;
    /* $80F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80F6:;
    /* $80F6: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80F8:;
    /* $80F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80FA:;
    /* $80FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_80FC:;
    /* $80FC: 95 */ maybe_trigger_vblank(4); nes_write((0x80 + g_cpu.X) & 0xFF, g_cpu.A);
label_80FE:;
    /* $80FE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80FF:;
    /* $80FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8100:;
    /* $8100: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8101:;
    /* $8101: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8102:; /* check_weapon_hit */
    /* $8102: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8103:;
    /* $8103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80F0;
    }
label_8105:;
    /* $8105: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8106:; /* play_sound_ID */
    /* $8106: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0107 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8109:;
    /* $8109: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_810B:;
    /* $810B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_810E:;
    /* $810E: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8110:;
    /* $8110: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: 9D */ maybe_trigger_vblank(5); nes_write((0x0107 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8115:;
    /* $8115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8117:;
    /* $8117: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_811A:;
    /* $811A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811B:;
    /* $811B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_811C:;
    /* $811C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811D:;
    /* $811D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_811E:;
    /* $811E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811F:;
    /* $811F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8120:;
    /* $8120: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x8120; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8480_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8480_b15");
#endif
label_8480:;
    /* $8480: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x85; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8482:;
    /* $8482: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8483:;
    /* $8483: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x72; FLAG_NZ(g_cpu.A);
label_8485:;
    /* $8485: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_8487:;
    /* $8487: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0489); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8487, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_848A:;
    /* $848A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_848C:;
    /* $848C: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_848F:;
    /* $848F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_8491:;
    /* $8491: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_8493:;
    /* $8493: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_8495:;
    /* $8495: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_8497:;
    /* $8497: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8499:;
    /* $8499: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BA, -1); return;
}

void func_8C80_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C80_b15");
#endif
label_8C80:;
    /* $8C80: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8C82:;
    /* $8C82: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8C84:;
    /* $8C84: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_8C86:;
    /* $8C86: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C8E; }
label_8C88:;
    /* $8C88: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8C8A:;
    /* $8C8A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_8C8C:;
    /* $8C8C: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_8C8E:;
    /* $8C8E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_8C90:;
    /* $8C90: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2A; FLAG_NZ(g_cpu.Y);
label_8C92:;
    /* $8C92: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_8C94:;
    /* $8C94: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8C99; }
label_8C96:;
    /* $8C96: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8C97:;
    /* $8C97: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x26; FLAG_NZ(g_cpu.Y);
label_8C99:;
    /* $8C99: 8E */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.X);
label_8C9C:;
    /* $8C9C: 84 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.Y);
label_8C9E:;
    /* $8C9E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8C9F:;
    /* $8C9F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_8CA1:;
    /* $8CA1: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_8CA3:;
    /* $8CA3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CA5:;
    /* $8CA5: 85 */ maybe_trigger_vblank(3); nes_write(0x2D, g_cpu.A);
label_8CA7:;
    /* $8CA7: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x22); FLAG_NZ(g_cpu.Y);
label_8CA9:;
    /* $8CA9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCD0C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8CAC:;
    /* $8CAC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CAE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CAC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CAF:;
    /* $8CAF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CB1:;
    /* $8CB1: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_8CB3:;
    /* $8CB3: 85 */ maybe_trigger_vblank(3); nes_write(0x23, g_cpu.A);
label_8CB5:;
    /* $8CB5: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_8CB7:;
    /* $8CB7: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x29; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CB9:;
    /* $8CB9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8CBB:;
    /* $8CBB: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_8CBD:;
    /* $8CBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8CBF:;
    /* $8CBF: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8CC0:;
    /* $8CC0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8CC2:;
    /* $8CC2: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_8CC4:;
    /* $8CC4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CC6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4F1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CC4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CC7:;
    /* $8CC7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CC9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_8CCA:;
    /* $8CCA: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8CCB:;
    /* $8CCB: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8CCC:;
    /* $8CCC: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8CCE:;
    /* $8CCE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8CBF;
    }
label_8CD0:;
    /* $8CD0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CD2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC816, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CD0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CD3:; /* main_bubukan */
    /* $8CD3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8CD5:;
    /* $8CD5: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_8CD7:;
    /* $8CD7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CD9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_8CDA:;
    /* $8CDA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0CDC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8CDA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8CDD:;
    /* $8CDD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8CDF:;
    /* $8CDF: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_8CE2:;
    /* $8CE2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC9B3, -1); return;
}

void func_D2B4_body(int _entry) { /* init_search_snake */
    switch (_entry) {
        case 1: goto label_D2B9;
    }
label_D2B4:; /* init_search_snake */
    /* $D2B4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x12B6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD103, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD2B4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D2B7:;
    /* $D2B7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D2D2; }
label_D2B9:;
    /* $D2B9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x44; FLAG_NZ(g_cpu.A);
label_D2BB:;
    /* $D2BB: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D2BE:;
    /* $D2BE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x03; FLAG_NZ(g_cpu.A);
label_D2C0:;
    /* $D2C0: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D2C3:;
    /* $D2C3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D2C5:;
    /* $D2C5: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D2C8:;
    /* $D2C8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D2CA:;
    /* $D2CA: 99 */ maybe_trigger_vblank(5); nes_write((0x0420 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D2CD:;
    /* $D2CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_D2CF:;
    /* $D2CF: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_D2D2:;
    /* $D2D2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_D2B4(void) { /* init_search_snake */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2B4");
#endif
    func_D2B4_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D2B9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D2B9");
#endif
    func_D2B4_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_E8D2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_E8D2");
#endif
label_E8D2:;
    /* $E8D2: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x2185); FLAG_NZ(g_cpu.A);
label_E8D5:;
    /* $E8D5: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9FD1_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9FD1_b15");
#endif
label_9FD1:;
    /* $9FD1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_9FD3:;
    /* $9FD3: 8D */ maybe_trigger_vblank(4); nes_write(0x031F, g_cpu.A);
label_9FD6:;
    /* $9FD6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_9FD8:;
    /* $9FD8: 8D */ maybe_trigger_vblank(4); nes_write(0x059F, g_cpu.A);
label_9FDB:;
    /* $9FDB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6D; FLAG_NZ(g_cpu.A);
label_9FDD:;
    /* $9FDD: 8D */ maybe_trigger_vblank(4); nes_write(0x05DF, g_cpu.A);
label_9FE0:;
    /* $9FE0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9FE2:;
    /* $9FE2: 8D */ maybe_trigger_vblank(4); nes_write(0x05FF, g_cpu.A);
label_9FE5:;
    /* $9FE5: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_9FE8:;
    /* $9FE8: 8D */ maybe_trigger_vblank(4); nes_write(0x03FF, g_cpu.A);
label_9FEB:;
    /* $9FEB: 8D */ maybe_trigger_vblank(4); nes_write(0x03DF, g_cpu.A);
label_9FEE:;
    /* $9FEE: 8D */ maybe_trigger_vblank(4); nes_write(0x0520, g_cpu.A);
label_9FF1:;
    /* $9FF1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_9FF3:;
    /* $9FF3: 8D */ maybe_trigger_vblank(4); nes_write(0x039F, g_cpu.A);
label_9FF6:;
    /* $9FF6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_9FF8:;
    /* $9FF8: 8D */ maybe_trigger_vblank(4); nes_write(0x037F, g_cpu.A);
label_9FFB:;
    /* $9FFB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xEE; FLAG_NZ(g_cpu.A);
label_9FFD:;
    /* $9FFD: 8D */ maybe_trigger_vblank(4); nes_write(0x033F, g_cpu.A);
label_A000:; /* main_needle_man_j */
    /* $A000: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5A; FLAG_NZ(g_cpu.A);
label_A002:;
    /* $A002: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A005:;
    /* $A005: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_A008:;
    /* $A008: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x40; FLAG_NZ(g_cpu.A);
label_A00A:;
    /* $A00A: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_A00D:;
    /* $A00D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_A00F:; /* main_wily_machine_B */
    /* $A00F: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A012:; /* main_gemini_man_j */
    /* $A012: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A015:; /* main_gamma_B */
    /* $A015: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0500); FLAG_NZ(g_cpu.A);
label_A018:;
    /* $A018: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A023; }
label_A01A:;
    /* $A01A: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0500; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A01D:;
    /* $A01D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A01F:;
    /* $A01F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0021); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA01F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A022:;
    /* $A022: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A023:;
    /* $A023: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0300); FLAG_NZ(g_cpu.A);
label_A026:;
    /* $A026: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A028:;
    /* $A028: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_A02A:;
    /* $A02A: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A068; }
label_A02C:;
    /* $A02C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A02F:; /* needle_man_state_ptr_lo */
    /* $A02F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_A031:;
    /* $A031: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A05A; }
label_A033:;
    /* $A033: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A035:;
    /* $A035: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x05C0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A038:;
    /* $A038: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A03D; }
label_A03A:;
    /* $A03A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x003C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA03A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A03D:;
    /* $A03D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A040:;
    /* $A040: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_A045:;
    /* $A045: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A08B; }
label_A047:;
    /* $A047: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x6E; FLAG_NZ(g_cpu.A);
label_A049:;
    /* $A049: 8D */ maybe_trigger_vblank(4); nes_write(0x05DF, g_cpu.A);
label_A04C:;
    /* $A04C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A04E:;
    /* $A04E: 8D */ maybe_trigger_vblank(4); nes_write(0x05FF, g_cpu.A);
label_A051:;
    /* $A051: 8D */ maybe_trigger_vblank(4); nes_write(0x05BF, g_cpu.A);
label_A054:; /* main_giant_met */
    /* $A054: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_A056:;
    /* $A056: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A059:;
    /* $A059: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A05A:;
    /* $A05A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE5; FLAG_NZ(g_cpu.A);
label_A05C:;
    /* $A05C: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_A05F:;
    /* $A05F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A061:;
    /* $A061: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_A064:;
    /* $A064: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0300; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A067:;
    /* $A067: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A068:; /* needle_man_throw */
    /* $A068: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0F); FLAG_NZ(g_cpu.A);
label_A06A:;
    /* $A06A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A079; }
label_A06C:;
    /* $A06C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_A06F:;
    /* $A06F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A07D; }
label_A071:;
    /* $A071: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A074:;
    /* $A074: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_A076:;
    /* $A076: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A079:;
    /* $A079: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0360; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A07C:;
    /* $A07C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A07D:;
    /* $A07D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x81; FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_A082:;
    /* $A082: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A084:;
    /* $A084: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A087:;
    /* $A087: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0D; FLAG_NZ(g_cpu.A);
label_A089:;
    /* $A089: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A08B:;
    /* $A08B: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_970F_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_970F_b15");
#endif
label_970F:;
    /* $970F: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xA9 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9711:;
    /* $9711: 80 */ maybe_trigger_vblank(2); /* NOP */
label_9713:;
    /* $9713: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9713); return;
}

void func_9C17_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9C17_b15");
#endif
label_9C17:;
    /* $9C17: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_9EE8_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9EE8_b15");
#endif
label_9EE8:;
    /* $9EE8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_9EEA:;
    /* $9EEA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_9EEC:;
    /* $9EEC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_9EED:;
    /* $9EED: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDF1B + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9EF0:;
    /* $9EF0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_9EF4; }
label_9EF2:;
    /* $9EF2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9EF4:;
    /* $9EF4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x80; FLAG_NZ(g_cpu.A);
label_9EF6:;
    /* $9EF6: 99 */ maybe_trigger_vblank(5); nes_write((0x00A2 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_9EF9:;
    /* $9EF9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_9EFB:;
    /* $9EFB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_9F1A; }
label_9EFD:;
    /* $9EFD: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0B; g_cpu.C=(g_cpu.Y>=0x0B)?1:0; FLAG_NZ(r&0xFF); }
label_9EFF:;
    /* $9EFF: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F15; }
label_9F01:;
    /* $9F01: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x09; g_cpu.C=(g_cpu.Y>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_9F03:;
    /* $9F03: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_9F1A; }
label_9F05:;
    /* $9F05: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_9F07:;
    /* $9F07: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_9F09:;
    /* $9F09: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1F0B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9F09, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9F0C:;
    /* $9F0C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_9F0E:;
    /* $9F0E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1F10); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9F0E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9F11:;
    /* $9F11: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F13:;
    /* $9F13: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_9F15:;
    /* $9F15: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_9F17:;
    /* $9F17: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_9F1A:;
    /* $9F1A: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_849F_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_849F_b15");
#endif
label_849F:;
    /* $849F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE9); FLAG_NZ(g_cpu.A);
label_84A1:;
    /* $84A1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_84A2:;
    /* $84A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x66; FLAG_NZ(g_cpu.A);
label_84A4:;
    /* $84A4: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_84A6:;
    /* $84A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x72; FLAG_NZ(g_cpu.A);
label_84A8:;
    /* $84A8: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_84AA:;
    /* $84AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x84AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_84AD:;
    /* $84AD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_84AF:;
    /* $84AF: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_84B2:;
    /* $84B2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84B3:;
    /* $84B3: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_84B5:;
    /* $84B5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84B6:;
    /* $84B6: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_84B8:;
    /* $84B8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_84BA:;
    /* $84BA: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_84BD:;
    /* $84BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84BE:;
    /* $84BE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_84BF:;
    /* $84BF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84C0:;
    /* $84C0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_84C1:;
    /* $84C1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_84C2:;
    /* $84C2: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_84C3:;
    /* $84C3: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x84C3; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AC_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_85D0;
    }
label_85AC:;
    /* $85AC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x05AE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x00A5, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x85AC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_85AF:;
    /* $85AF: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_85B2:;
    /* $85B2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_85B4:;
    /* $85B4: 8C */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.Y);
label_85B7:;
    /* $85B7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_85B9:;
    /* $85B9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_85BB:;
    /* $85BB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_85BF; }
label_85BD:;
    /* $85BD: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x02); FLAG_NZ(g_cpu.X);
label_85BF:;
    /* $85BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_85C1:;
    /* $85C1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x01); FLAG_NZ(g_cpu.A);
label_85C3:;
    /* $85C3: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_85C6:;
    /* $85C6: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_85C7:; /* main_ret_A */
    /* $85C7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_85C3;
    }
label_85C9:; /* main_unknown_1B */
    /* $85C9: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_85CA:;
    /* $85CA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_85C3;
    }
label_85CC:;
    /* $85CC: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_85CE:;
    /* $85CE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_85D0:;
    /* $85D0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_85D2:;
    /* $85D2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_85E6; }
label_85D4:;
    /* $85D4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_85D6:;
    /* $85D6: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_85D9:;
    /* $85D9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_85DB:;
    /* $85DB: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_85DE:;
    /* $85DE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x40; FLAG_NZ(g_cpu.X);
label_85E0:;
    /* $85E0: 8C */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.Y);
label_85E3:;
    /* $85E3: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_85E4:;
    /* $85E4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_85E0;
    }
label_85E6:;
    /* $85E6: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_85E8:;
    /* $85E8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_85AC_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85AC_b15");
#endif
    func_85AC_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_85D0_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_85D0_b15");
#endif
    func_85AC_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8397_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8397_b15");
#endif
label_8397:;
    /* $8397: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xC4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8399:;
    /* $8399: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_839B:;
    /* $839B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4E6); FLAG_NZ(g_cpu.A);
label_839E:;
    /* $839E: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_83A0:;
    /* $83A0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
}

void func_86A5_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_86A5_b15");
#endif
label_86A5:;
    /* $86A5: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_86A7:;
    /* $86A7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_86A8:;
    /* $86A8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_86A9:;
    /* $86A9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_86AA:;
    /* $86AA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_86AB:;
    /* $86AB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_86AC:;
    /* $86AC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_86AE:;
    /* $86AE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC708 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86B1:;
    /* $86B1: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86B4:;
    /* $86B4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC709 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86B7:;
    /* $86B7: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86BA:;
    /* $86BA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC70A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86BD:;
    /* $86BD: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86C0:;
    /* $86C0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC70B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86C3:;
    /* $86C3: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_86C4:;
    /* $86C4: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_86C6:;
    /* $86C6: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_86C9:;
    /* $86C9: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_86CA:;
    /* $86CA: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_86CB:;
    /* $86CB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_86CC:;
    /* $86CC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_86CD:;
    /* $86CD: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_86CE:;
    /* $86CE: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_86CF:;
    /* $86CF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_86D0:;
    /* $86D0: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_86D1:;
    /* $86D1: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_86AE;
    }
label_86D3:;
    /* $86D3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_86D5:;
    /* $86D5: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_86D7:;
    /* $86D7: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_879C_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_879C_b15");
#endif
label_879C:;
    /* $879C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_879E:;
    /* $879E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_87A0:;
    /* $87A0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_87DC; }
label_87A2:;
    /* $87A2: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_87A4:;
    /* $87A4: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0620 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87A7:;
    /* $87A7: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_87AA:;
    /* $87AA: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_87AB:;
    /* $87AB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_87A4;
    }
label_87AD:;
    /* $87AD: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0F; FLAG_NZ(g_cpu.Y);
label_87AF:;
    /* $87AF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0600 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_87B2:;
    /* $87B2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_87B3:;
    /* $87B3: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87B5:;
    /* $87B5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_87B9; }
label_87B7:;
    /* $87B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_87B9:;
    /* $87B9: 99 */ maybe_trigger_vblank(5); nes_write((0x0600 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_87BC:;
    /* $87BC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_87BD:;
    /* $87BD: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_87AF;
    }
label_87BF:;
    /* $87BF: 84 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.Y);
label_87C1:;
    /* $87C1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1D); FLAG_NZ(g_cpu.A);
label_87C3:;
    /* $87C3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_87C4:;
    /* $87C4: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_87C6:;
    /* $87C6: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_87C8:;
    /* $87C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_87CA:;
    /* $87CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_87D4; }
label_87CC:;
    /* $87CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_87CE:;
    /* $87CE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_87DC; }
label_87D0:;
    /* $87D0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x71; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_87D2:;
    /* $87D2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_87D8; }
label_87D4:;
    /* $87D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_87D6:;
    /* $87D6: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_87D8:;
    /* $87D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_87DA:;
    /* $87DA: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_87DC:;
    /* $87DC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_889E_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_889E_b15");
#endif
label_889E:;
    /* $889E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_88D7; }
label_88A0:;
    /* $88A0: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_88A1:;
    /* $88A1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_88A2:;
    /* $88A2: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_88A3:;
    /* $88A3: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_88A4:;
    /* $88A4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF5); FLAG_NZ(g_cpu.A);
label_88A6:;
    /* $88A6: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x13; g_cpu.C=(g_cpu.A>=0x13)?1:0; FLAG_NZ(r&0xFF); }
label_88A8:;
    /* $88A8: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_88B4; }
label_88AA:;
    /* $88AA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x22); FLAG_NZ(g_cpu.Y);
label_88AC:;
    /* $88AC: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC8B9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88AF:;
    /* $88AF: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_88B1:;
    /* $88B1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08B3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88B1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88B4:;
    /* $88B4: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_88B5:;
    /* $88B5: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_88B6:;
    /* $88B6: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_88B7:;
    /* $88B7: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_88B8:;
    /* $88B8: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_88B9:;
    /* $88B9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x88B9); return;
label_88BA:;
    /* $88BA: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_88BC:;
    /* $88BC: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88BE:;
    /* $88BE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_88C0:;
    /* $88C0: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88C2:;
    /* $88C2: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_88C4:;
    /* $88C4: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_88C6:;
    /* $88C6: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F0D); FLAG_NZ(g_cpu.A);
label_88C9:;
    /* $88C9: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1211); FLAG_NZ(g_cpu.A);
label_88CC:;
    /* $88CC: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x10) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_88CE:;
    /* $88CE: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0xA20E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_88D1:;
    /* $88D1: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xA59A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_88D4:;
    /* $88D4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x008D + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88D7:;
    /* $88D7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08D9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2120, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88D7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88DA:;
    /* $88DA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x88A9 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_88DD:;
    /* $88DD: 85 */ maybe_trigger_vblank(3); nes_write(0xE4, g_cpu.A);
label_88DF:;
    /* $88DF: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_88E0:;
    /* $88E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_88E2:;
    /* $88E2: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_88E4:;
    /* $88E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_88E6:;
    /* $88E6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08E8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88E6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88E9:;
    /* $88E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_88EB:;
    /* $88EB: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_88ED:;
    /* $88ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_88EF:;
    /* $88EF: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_88F1:;
    /* $88F1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08F3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88F4:;
    /* $88F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9009, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x88F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_88F7:;
    /* $88F7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_88F9:;
    /* $88F9: 85 */ maybe_trigger_vblank(3); nes_write(0xA9, g_cpu.A);
label_88FB:;
    /* $88FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_88FD:;
    /* $88FD: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_88FF:;
    /* $88FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8901:;
    /* $8901: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_8903:;
    /* $8903: 99 */ maybe_trigger_vblank(5); nes_write((0x0150 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8906:;
    /* $8906: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8907:;
    /* $8907: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8903;
    }
label_8909:;
    /* $8909: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_890B:;
    /* $890B: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_890D:;
    /* $890D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x090F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x890D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8910:;
    /* $8910: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8912:;
    /* $8912: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_8914:;
    /* $8914: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0916); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8914, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8917:;
    /* $8917: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0919); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_891A:;
    /* $891A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x091C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x891A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_891D:;
    /* $891D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_891F:;
    /* $891F: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_8922:;
    /* $8922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8924:;
    /* $8924: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_8926:;
    /* $8926: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_8929:;
    /* $8929: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_892B:;
    /* $892B: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_892D:;
    /* $892D: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_892F:;
    /* $892F: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_8931:;
    /* $8931: 85 */ maybe_trigger_vblank(3); nes_write(0xFA, g_cpu.A);
label_8933:;
    /* $8933: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_8935:;
    /* $8935: 85 */ maybe_trigger_vblank(3); nes_write(0x25, g_cpu.A);
label_8937:;
    /* $8937: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_893A:;
    /* $893A: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_893D:;
    /* $893D: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_893F:;
    /* $893F: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_8941:;
    /* $8941: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_8943:;
    /* $8943: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_8945:;
    /* $8945: 85 */ maybe_trigger_vblank(3); nes_write(0x9F, g_cpu.A);
label_8947:; /* main_hard_knuckle */
    /* $8947: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_8949:;
    /* $8949: 85 */ maybe_trigger_vblank(3); nes_write(0xA0, g_cpu.A);
label_894B:;
    /* $894B: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_894D:;
    /* $894D: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_894F:;
    /* $894F: 85 */ maybe_trigger_vblank(3); nes_write(0x6F, g_cpu.A);
label_8951:;
    /* $8951: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x22); FLAG_NZ(g_cpu.Y);
label_8953:;
    /* $8953: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCD0C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8956:;
    /* $8956: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0958); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8956, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8959:;
    /* $8959: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_895B:;
    /* $895B: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_895D:;
    /* $895D: 85 */ maybe_trigger_vblank(3); nes_write(0x23, g_cpu.A);
label_895F:;
    /* $895F: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_8961:;
    /* $8961: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_8963:;
    /* $8963: 85 */ maybe_trigger_vblank(3); nes_write(0x29, g_cpu.A);
label_8965:;
    /* $8965: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_8967:;
    /* $8967: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_8969:;
    /* $8969: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_896B:;
    /* $896B: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_896D:;
    /* $896D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4F1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x896D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8970:;
    /* $8970: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0972); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_8973:;
    /* $8973: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x29); FLAG_NZ(g_cpu.A);
label_8975:;
    /* $8975: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8969;
    }
label_8977:;
    /* $8977: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_8979:;
    /* $8979: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_897B:;
    /* $897B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x097D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x897B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_897E:;
    /* $897E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAA40); FLAG_NZ(g_cpu.A);
label_8981:;
    /* $8981: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8982:;
    /* $8982: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xE0; FLAG_NZ(g_cpu.A);
label_8984:;
    /* $8984: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_8986:;
    /* $8986: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_8988:;
    /* $8988: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2A; FLAG_NZ(g_cpu.Y);
label_898A:;
    /* $898A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_898C:;
    /* $898C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8991; }
label_898E:;
    /* $898E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_898F:;
    /* $898F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x26; FLAG_NZ(g_cpu.Y);
label_8991:;
    /* $8991: 8E */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.X);
label_8994:;
    /* $8994: 84 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.Y);
label_8996:;
    /* $8996: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8997:;
    /* $8997: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_8999:;
    /* $8999: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_899B:;
    /* $899B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_899D:;
    /* $899D: 85 */ maybe_trigger_vblank(3); nes_write(0x2B, g_cpu.A);
label_899F:;
    /* $899F: 85 */ maybe_trigger_vblank(3); nes_write(0x2D, g_cpu.A);
label_89A1:;
    /* $89A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09A3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC816, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x89A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_89A4:;
    /* $89A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_89A6:;
    /* $89A6: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_89A8:;
    /* $89A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09AA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_89AB:;
    /* $89AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09AD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x89AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_89AE:;
    /* $89AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_89B0:;
    /* $89B0: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_89B3:;
    /* $89B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_89B5:;
    /* $89B5: 85 */ maybe_trigger_vblank(3); nes_write(0xA2, g_cpu.A);
label_89B7:;
    /* $89B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_89B9:;
    /* $89B9: 85 */ maybe_trigger_vblank(3); nes_write(0x51, g_cpu.A);
label_89BB:;
    /* $89BB: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_89BD:;
    /* $89BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_89BF:;
    /* $89BF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_89D3; }
label_89C1:;
    /* $89C1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_89C3:;
    /* $89C3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_89C5:;
    /* $89C5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_89CB; }
label_89C7:;
    /* $89C7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_89C9:;
    /* $89C9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_89D3; }
label_89CB:;
    /* $89CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9F; FLAG_NZ(g_cpu.A);
label_89CD:;
    /* $89CD: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_89CF:;
    /* $89CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_89D1:;
    /* $89D1: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_89D3:;
    /* $89D3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x74; FLAG_NZ(g_cpu.A);
label_89D5:;
    /* $89D5: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_89D7:;
    /* $89D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x75; FLAG_NZ(g_cpu.A);
label_89D9:;
    /* $89D9: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_89DB:;
    /* $89DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09DD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x89DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_89DE:;
    /* $89DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_89E0:;
    /* $89E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_89E3:;
    /* $89E3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_89E5:;
    /* $89E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_89E7:;
    /* $89E7: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_89E8:;
    /* $89E8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_89EA:;
    /* $89EA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_89EC:;
    /* $89EC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8A10; }
label_89EE:;
    /* $89EE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_89F0:;
    /* $89F0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89F3:;
    /* $89F3: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89F6:;
    /* $89F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCF9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89F9:;
    /* $89F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_89FC:;
    /* $89FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCFA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_89FF:;
    /* $89FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A02:;
    /* $8A02: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A05:;
    /* $8A05: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A08:;
    /* $8A08: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A09:;
    /* $8A09: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A0A:;
    /* $8A0A: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A0B:;
    /* $8A0B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A0C:;
    /* $8A0C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_89F0;
    }
label_8A0E:;
    /* $8A0E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_8A10:;
    /* $8A10: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_8A12:;
    /* $8A12: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8A13:;
    /* $8A13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_8A15:;
    /* $8A15: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A18:;
    /* $8A18: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A19:;
    /* $8A19: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A1A:;
    /* $8A1A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A1B:;
    /* $8A1B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A1C:;
    /* $8A1C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8A15;
    }
label_8A1E:;
    /* $8A1E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A20:;
    /* $8A20: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8A22:;
    /* $8A22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A24); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_8A25:;
    /* $8A25: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A27:;
    /* $8A27: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A29:;
    /* $8A29: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8A2A:;
    /* $8A2A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8A2B:;
    /* $8A2B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A2D:;
    /* $8A2D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_89E7;
    }
label_8A2F:;
    /* $8A2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_8A31:;
    /* $8A31: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_8A34:;
    /* $8A34: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A36:;
    /* $8A36: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A38:;
    /* $8A38: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_8A3A:;
    /* $8A3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A3C:;
    /* $8A3C: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_8A3E:;
    /* $8A3E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A40); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A3E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A41:;
    /* $8A41: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8A43:;
    /* $8A43: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_8A46:;
    /* $8A46: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A48:;
    /* $8A48: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_8A4B:;
    /* $8A4B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_8A4D:;
    /* $8A4D: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_8A50:;
    /* $8A50: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_8A52:;
    /* $8A52: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_8A55:;
    /* $8A55: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8A57:;
    /* $8A57: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_8A5A:;
    /* $8A5A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A5C:;
    /* $8A5C: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_8A5F:;
    /* $8A5F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_8A61:;
    /* $8A61: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_8A64:;
    /* $8A64: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_8A66:;
    /* $8A66: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_8A68:;
    /* $8A68: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A6A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8A68, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8A6B:;
    /* $8A6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_8A6D:;
    /* $8A6D: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_8A6F:;
    /* $8A6F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_8A71:;
    /* $8A71: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_8A73:;
    /* $8A73: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_8A75:;
    /* $8A75: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_8A77:;
    /* $8A77: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AB5; }
label_8A79:; /* main_spark_shock */
    /* $8A79: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_8A7B:;
    /* $8A7B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_8A7D:;
    /* $8A7D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AB5; }
label_8A7F:;
    /* $8A7F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_8A81:;
    /* $8A81: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AB5; }
label_8A83:;
    /* $8A83: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_8A85:;
    /* $8A85: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_8AB5; }
label_8A87:;
    /* $8A87: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_8A89:;
    /* $8A89: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8A8A:;
    /* $8A8A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x06; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A8C:;
    /* $8A8C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8A99; }
label_8A8E:;
    /* $8A8E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_8A90:;
    /* $8A90: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8A99; }
label_8A92:;
    /* $8A92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8A94:;
    /* $8A94: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_8A97:;
    /* $8A97: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AA4; }
label_8A99:;
    /* $8A99: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0301); FLAG_NZ(g_cpu.A);
label_8A9C:;
    /* $8A9C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0302); FLAG_NZ(g_cpu.A);
label_8A9F:;
    /* $8A9F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_8AA2:;
    /* $8AA2: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8AB5; }
label_8AA4:;
    /* $8AA4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x30); FLAG_NZ(g_cpu.Y);
label_8AA6:;
    /* $8AA6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCD1E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8AA9:;
    /* $8AA9: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_8AB5; }
label_8AAB:;
    /* $8AAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_8AAD:;
    /* $8AAD: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8AAF:;
    /* $8AAF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AB1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AAF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AB2:;
    /* $8AB2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AB4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AB2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AB5:;
    /* $8AB5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_8AB7:;
    /* $8AB7: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8AB9:;
    /* $8AB9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ABB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AB9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ABC:;
    /* $8ABC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ABE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xCD34, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ABC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ABF:;
    /* $8ABF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_8AC1:;
    /* $8AC1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD7; }
label_8AC3:;
    /* $8AC3: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_8AC5:;
    /* $8AC5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_8AC7:;
    /* $8AC7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AD3; }
label_8AC9:;
    /* $8AC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF2; FLAG_NZ(g_cpu.A);
label_8ACB:;
    /* $8ACB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ACD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8ACB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ACE:;
    /* $8ACE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_8AD0:;
    /* $8AD0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AD2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AD0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8AD3:;
    /* $8AD3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8AD5:;
    /* $8AD5: 85 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.A);
label_8AD7:;
    /* $8AD7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AD9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E16A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8AD7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8ADA:;
    /* $8ADA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_8ADC:;
    /* $8ADC: 85 */ maybe_trigger_vblank(3); nes_write(0x25, g_cpu.A);
label_8ADE:;
    /* $8ADE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_8AE0:;
    /* $8AE0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF8); FLAG_NZ(g_cpu.A);
label_8AE2:;
    /* $8AE2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_8AE4:;
    /* $8AE4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8AF2; }
label_8AE6:;
    /* $8AE6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_8AE8:;
    /* $8AE8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8AE9:;
    /* $8AE9: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AEB:;
    /* $8AEB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8AEC:;
    /* $8AEC: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8AEE:;
    /* $8AEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_8AF0:;
    /* $8AF0: 85 */ maybe_trigger_vblank(3); nes_write(0x5F, g_cpu.A);
label_8AF2:;
    /* $8AF2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_8AF5:;
    /* $8AF5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8AF7:;
    /* $8AF7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8AFB; }
label_8AF9:;
    /* $8AF9: 85 */ maybe_trigger_vblank(3); nes_write(0x6F, g_cpu.A);
label_8AFB:; /* main_dada */
    /* $8AFB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_8AFE:;
    /* $8AFE: 85 */ maybe_trigger_vblank(3); nes_write(0x27, g_cpu.A);
label_8B00:;
    /* $8B00: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_8B02:;
    /* $8B02: 86 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.X);
label_8B04:;
    /* $8B04: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8B05:;
    /* $8B05: 86 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.X);
label_8B07:;
    /* $8B07: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B09); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B0A:;
    /* $8B0A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B0C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B0A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B0D:;
    /* $8B0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_8B0F:;
    /* $8B0F: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_8B11:;
    /* $8B11: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_8B13:;
    /* $8B13: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8B15:;
    /* $8B15: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B17); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B15, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B18:;
    /* $8B18: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B1A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9C00, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B18, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B1B:;
    /* $8B1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_8B1D:;
    /* $8B1D: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_8B1F:;
    /* $8B1F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B21); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B22:;
    /* $8B22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B24); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B25:;
    /* $8B25: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B27); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B25, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B28:;
    /* $8B28: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B2A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x800F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B28, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B2B:;
    /* $8B2B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B2D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8009, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B2B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B2E:;
    /* $8B2E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B30); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x800C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B2E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B31:;
    /* $8B31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B33); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B34:;
    /* $8B34: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B36); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8012, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B34, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B37:;
    /* $8B37: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B39); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC798, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B37, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B3A:;
    /* $8B3A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B3C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF57(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B3A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B3D:;
    /* $8B3D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_8B3F:;
    /* $8B3F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_8B41:;
    /* $8B41: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B49; }
label_8B43:;
    /* $8B43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_8B45:;
    /* $8B45: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x17); FLAG_NZ(g_cpu.A);
label_8B47:;
    /* $8B47: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_8B49:;
    /* $8B49: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B4B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC7FB, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B49, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B4C:;
    /* $8B4C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x59); FLAG_NZ(g_cpu.A);
label_8B4E:;
    /* $8B4E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B5B; }
label_8B50:;
    /* $8B50: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3C); FLAG_NZ(g_cpu.A);
label_8B52:;
    /* $8B52: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B78; }
label_8B54:;
    /* $8B54: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_8B56:;
    /* $8B56: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BCE; }
label_8B58:; /* main_potton */
    /* $8B58: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCA73, -1); return;
label_8B5B:;
    /* $8B5B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B5D:;
    /* $8B5D: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8B5F:;
    /* $8B5F: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_8B61:;
    /* $8B61: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_8B63:;
    /* $8B63: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_8B65:;
    /* $8B65: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_8B67:;
    /* $8B67: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8B69:;
    /* $8B69: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_8B6B:;
    /* $8B6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_8B6D:;
    /* $8B6D: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8B6F:;
    /* $8B6F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B71); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B6F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B72:;
    /* $8B72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B74); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8B72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8B75:;
    /* $8B75: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8FF, -1); return;
label_8B78:;
    /* $8B78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B7A:;
    /* $8B7A: 85 */ maybe_trigger_vblank(3); nes_write(0x3C, g_cpu.A);
label_8B7C:;
    /* $8B7C: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_8B7E:;
    /* $8B7E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAE); FLAG_NZ(g_cpu.A);
label_8B80:;
    /* $8B80: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8B81:;
    /* $8B81: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B83:;
    /* $8B83: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_8BB1; }
label_8B85:;
    /* $8B85: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_8B87:;
    /* $8B87: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_8B89:;
    /* $8B89: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_8B8B:;
    /* $8B8B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8B94; }
label_8B8D:;
    /* $8B8D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAE); FLAG_NZ(g_cpu.A);
label_8B8F:;
    /* $8B8F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8B90:;
    /* $8B90: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x06; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8B92:;
    /* $8B92: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_8B94:;
    /* $8B94: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8B96:;
    /* $8B96: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8B98:;
    /* $8B98: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_8B9A:;
    /* $8B9A: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_8B9C:;
    /* $8B9C: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_8B9E:;
    /* $8B9E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_8BA0:;
    /* $8BA0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_8BA2:;
    /* $8BA2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BA7; }
label_8BA4:;
    /* $8BA4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCC18, -1); return;
label_8BA7:;
    /* $8BA7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8BA9:;
    /* $8BA9: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_8BAB:;
    /* $8BAB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BAD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BAB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BAE:;
    /* $8BAE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9006, -1); return;
label_8BB1:;
    /* $8BB1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BB3:;
    /* $8BB3: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_8BB5:;
    /* $8BB5: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_8BB7:;
    /* $8BB7: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_8BB9:;
    /* $8BB9: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_8BBB:;
    /* $8BBB: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_8BBD:;
    /* $8BBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_8BBF:;
    /* $8BBF: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_8BC1:;
    /* $8BC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_8BC3:;
    /* $8BC3: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8BC5:;
    /* $8BC5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BC7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BC5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BC8:;
    /* $8BC8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BCA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BC8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BCB:;
    /* $8BCB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8FF, -1); return;
label_8BCE:;
    /* $8BCE: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_8BCF:;
    /* $8BCF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_8BD1:;
    /* $8BD1: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_8BD3:;
    /* $8BD3: 85 */ maybe_trigger_vblank(3); nes_write(0x74, g_cpu.A);
label_8BD5:;
    /* $8BD5: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_8BD7:;
    /* $8BD7: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_8BD9:;
    /* $8BD9: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_8BDB:;
    /* $8BDB: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_8BDD:;
    /* $8BDD: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_8BDF:;
    /* $8BDF: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_8BE1:;
    /* $8BE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_8BE3:;
    /* $8BE3: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_8BE5:;
    /* $8BE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_8BE7:;
    /* $8BE7: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8BE9:;
    /* $8BE9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BEB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BE9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BEC:;
    /* $8BEC: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_8BED:;
    /* $8BED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_8BEF:;
    /* $8BEF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_8BF7; }
label_8BF1:;
    /* $8BF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BF3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8BF4:;
    /* $8BF4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8FF, -1); return;
label_8BF7:;
    /* $8BF7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_8BF9:;
    /* $8BF9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_8BFB:;
    /* $8BFB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_8C03; }
label_8BFD:; /* main_hammer_joe */
    /* $8BFD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BFF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8BFD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C00:;
    /* $8C00: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8FF, -1); return;
label_8C03:;
    /* $8C03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_8C05:;
    /* $8C05: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_8C07:;
    /* $8C07: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_8C09:;
    /* $8C09: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_8C0B:;
    /* $8C0B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C0D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C0B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C0E:;
    /* $8C0E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_8C10:;
    /* $8C10: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_8C12:;
    /* $8C12: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C14); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x8C12, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_8C15:;
    /* $8C15: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC8FF, -1); return;
}

void func_A5D4_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A5D6;
        case 2: goto label_A5F0;
    }
label_A5D4:;
    /* $A5D4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_A5D6:;
    /* $A5D6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5D7:;
    /* $A5D7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x04 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x04); g_cpu.A=r&0xFF; }
label_A5D9:;
    /* $A5D9: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_A5DB:;
    /* $A5DB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A5DF; }
label_A5DD:;
    /* $A5DD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xF9; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5DF:;
    /* $A5DF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A5E1:;
    /* $A5E1: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A5E3:;
    /* $A5E3: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x05E5); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E467(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA5E3, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A5E6:;
    /* $A5E6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_A5E8:;
    /* $A5E8: 85 */ maybe_trigger_vblank(3); nes_write(0x25, g_cpu.A);
label_A5EA:;
    /* $A5EA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0340); FLAG_NZ(g_cpu.A);
label_A5ED:;
    /* $A5ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5EE:;
    /* $A5EE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xD0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xD0); g_cpu.A=r&0xFF; }
label_A5F0:;
    /* $A5F0: 8D */ maybe_trigger_vblank(4); nes_write(0x0340, g_cpu.A);
label_A5F3:;
    /* $A5F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_A5F6:;
    /* $A5F6: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A5F8:;
    /* $A5F8: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_A5FB:;
    /* $A5FB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_A5FE:;
    /* $A5FE: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A600:; /* top_spin_damage_table */
    /* $A600: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_A603:;
    /* $A603: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0605); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF57(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA603, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A606:;
    /* $A606: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_A608:;
    /* $A608: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A5D4;
    }
label_A60A:;
    /* $A60A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_A60C:;
    /* $A60C: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_A60E:;
    /* $A60E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0610); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA60E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A611:;
    /* $A611: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC83D, -1); return;
}

void func_A5D4_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5D4_b15");
#endif
    func_A5D4_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A5D6_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5D6_b15");
#endif
    func_A5D4_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A5F0_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5F0_b15");
#endif
    func_A5D4_b15_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A971_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A971_b15");
#endif
label_A971:;
    /* $A971: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A972:;
    /* $A972: 99 */ maybe_trigger_vblank(5); nes_write((0x0042 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A975:;
    /* $A975: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x41); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A977:;
    /* $A977: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A97B; }
label_A979:;
    /* $A979: 85 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.A);
label_A97B:;
    /* $A97B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A97D:;
    /* $A97D: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A97F:;
    /* $A97F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A981:;
    /* $A981: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A9BA; }
label_A983:;
    /* $A983: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x40; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A985:;
    /* $A985: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x40); FLAG_NZ(g_cpu.Y);
label_A987:;
    /* $A987: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_A989:;
    /* $A989: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A98A:;
    /* $A98A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A98C:;
    /* $A98C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A98E:;
    /* $A98E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A98F:;
    /* $A98F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A990:;
    /* $A990: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEC12 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A993:;
    /* $A993: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_A995:;
    /* $A995: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0960), -1); return; }
label_A99B:;
    /* $A99B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A9A1:;
    /* $A9A1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0960), -1); return; }
label_A9A5:;
    /* $A9A5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A7:;
    /* $A9A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x095D), -1); return; }
label_A9AD:;
    /* $A9AD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AF:;
    /* $A9AF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B1:;
    /* $A9B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9B3:;
    /* $A9B3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A9B7:;
    /* $A9B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E94D(); g_code_window_base = _swb; } return;
label_A9BA:;
    /* $A9BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A9BC:;
    /* $A9BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9BE:;
    /* $A9BE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x39); FLAG_NZ(g_cpu.A);
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C2:;
    /* $A9C2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C6:;
    /* $A9C6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A9CA:;
    /* $A9CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9CC:;
    /* $A9CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A9CE:;
    /* $A9CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D0:;
    /* $A9D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_A9D2:;
    /* $A9D2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A9D4:;
    /* $A9D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A9D6:;
    /* $A9D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9DE; }
label_A9D8:;
    /* $A9D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_A9DA:;
    /* $A9DA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_A9DC:;
    /* $A9DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9DE:;
    /* $A9DE: 84 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.Y);
label_A9E0:;
    /* $A9E0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB24(); g_code_window_base = _swb; } return;
}

void func_A9C7_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9C7_b15");
#endif
label_A9C7:;
    /* $A9C7: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0992), -1); return; }
label_A9C9:;
    /* $A9C9: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9CB:;
    /* $A9CB: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xC9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9CD:;
    /* $A9CD: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x10F0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9D0:;
    /* $A9D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_A9D2:;
    /* $A9D2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A9D4:;
    /* $A9D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A9D6:;
    /* $A9D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9DE; }
label_A9D8:;
    /* $A9D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_A9DA:;
    /* $A9DA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_A9DC:;
    /* $A9DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9DE:;
    /* $A9DE: 84 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.Y);
label_A9E0:;
    /* $A9E0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB24(); g_code_window_base = _swb; } return;
}

void func_80F0_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80F0_b15");
#endif
label_80F0:;
    /* $80F0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x80 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_80F2:;
    /* $80F2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x01; g_cpu.C=(g_cpu.A>=0x01)?1:0; FLAG_NZ(r&0xFF); }
label_80F4:;
    /* $80F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80F6:;
    /* $80F6: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x81 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80F8:;
    /* $80F8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_80FE; }
label_80FA:;
    /* $80FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_80FC:;
    /* $80FC: 95 */ maybe_trigger_vblank(4); nes_write((0x80 + g_cpu.X) & 0xFF, g_cpu.A);
label_80FE:;
    /* $80FE: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_80FF:;
    /* $80FF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8100:;
    /* $8100: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8101:;
    /* $8101: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8102:; /* check_weapon_hit */
    /* $8102: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8103:;
    /* $8103: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_80F0;
    }
label_8105:;
    /* $8105: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8106:; /* play_sound_ID */
    /* $8106: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0107 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8109:;
    /* $8109: 85 */ maybe_trigger_vblank(3); nes_write(0x7D, g_cpu.A);
label_810B:;
    /* $810B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_810E:;
    /* $810E: 85 */ maybe_trigger_vblank(3); nes_write(0x7C, g_cpu.A);
label_8110:;
    /* $8110: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC1; FLAG_NZ(g_cpu.A);
label_8112:;
    /* $8112: 9D */ maybe_trigger_vblank(5); nes_write((0x0107 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8115:;
    /* $8115: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_8117:;
    /* $8117: 9D */ maybe_trigger_vblank(5); nes_write((0x0106 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_811A:;
    /* $811A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811B:;
    /* $811B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_811C:;
    /* $811C: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811D:;
    /* $811D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_811E:;
    /* $811E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_811F:;
    /* $811F: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8120:;
    /* $8120: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x8120; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A960_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A960_b15");
#endif
label_A960:;
    /* $A960: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x03); FLAG_NZ(g_cpu.Y);
label_A962:;
    /* $A962: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A964:;
    /* $A964: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A965:;
    /* $A965: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_A96A:;
    /* $A96A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB30(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA96A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A96D:;
    /* $A96D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB8A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA96D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A970:;
    /* $A970: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A972:;
    /* $A972: 99 */ maybe_trigger_vblank(5); nes_write((0x0042 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A975:;
    /* $A975: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x41); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A977:;
    /* $A977: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A97B; }
label_A979:;
    /* $A979: 85 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.A);
label_A97B:;
    /* $A97B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A97D:;
    /* $A97D: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A97F:;
    /* $A97F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A981:;
    /* $A981: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A9BA; }
label_A983:;
    /* $A983: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x40; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A985:;
    /* $A985: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x40); FLAG_NZ(g_cpu.Y);
label_A987:;
    /* $A987: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_A989:;
    /* $A989: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A98A:;
    /* $A98A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A98C:;
    /* $A98C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A98E:;
    /* $A98E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A98F:;
    /* $A98F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A990:;
    /* $A990: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEC12 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A993:;
    /* $A993: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_A995:;
    /* $A995: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A960;
    }
label_A99B:;
    /* $A99B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A9A1:;
    /* $A9A1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A960;
    }
label_A9A5:;
    /* $A9A5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A7:;
    /* $A9A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x095D), -1); return; }
label_A9AD:;
    /* $A9AD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AF:;
    /* $A9AF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B1:;
    /* $A9B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9B3:;
    /* $A9B3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A9B7:;
    /* $A9B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E94D(); g_code_window_base = _swb; } return;
label_A9BA:;
    /* $A9BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A9BC:;
    /* $A9BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9BE:;
    /* $A9BE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x39); FLAG_NZ(g_cpu.A);
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C2:;
    /* $A9C2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C6:;
    /* $A9C6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A9CA:;
    /* $A9CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9CC:;
    /* $A9CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A9CE:;
    /* $A9CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D0:;
    /* $A9D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_A9D2:;
    /* $A9D2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A9D4:;
    /* $A9D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A9D6:;
    /* $A9D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9DE; }
label_A9D8:;
    /* $A9D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_A9DA:;
    /* $A9DA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_A9DC:;
    /* $A9DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9DE:;
    /* $A9DE: 84 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.Y);
label_A9E0:;
    /* $A9E0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB24(); g_code_window_base = _swb; } return;
}

void func_A95D_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A990;
        case 2: goto label_A985;
    }
label_A95D:;
    /* $A95D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x095F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E882(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA95D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A960:;
    /* $A960: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x03); FLAG_NZ(g_cpu.Y);
label_A962:;
    /* $A962: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A964:;
    /* $A964: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A965:;
    /* $A965: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBF00 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A968:;
    /* $A968: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_A96A:;
    /* $A96A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB30(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA96A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A96D:;
    /* $A96D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB8A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA96D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A970:;
    /* $A970: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A972:;
    /* $A972: 99 */ maybe_trigger_vblank(5); nes_write((0x0042 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A975:;
    /* $A975: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x41); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A977:;
    /* $A977: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A97B; }
label_A979:;
    /* $A979: 85 */ maybe_trigger_vblank(3); nes_write(0x41, g_cpu.A);
label_A97B:;
    /* $A97B: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x10); FLAG_NZ(g_cpu.A);
label_A97D:;
    /* $A97D: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_A97F:;
    /* $A97F: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A981:;
    /* $A981: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_A9BA; }
label_A983:;
    /* $A983: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x40; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A985:;
    /* $A985: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x40); FLAG_NZ(g_cpu.Y);
label_A987:;
    /* $A987: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x12); FLAG_NZ(g_cpu.A);
label_A989:;
    /* $A989: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A98A:;
    /* $A98A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A98C:;
    /* $A98C: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A98E:;
    /* $A98E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A98F:;
    /* $A98F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A990:;
    /* $A990: 79 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEC12 + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A993:;
    /* $A993: 85 */ maybe_trigger_vblank(3); nes_write(0x12, g_cpu.A);
label_A995:;
    /* $A995: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A960;
    }
label_A99B:;
    /* $A99B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A9A1:;
    /* $A9A1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A960;
    }
label_A9A5:;
    /* $A9A5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A7:;
    /* $A9A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A95D;
    }
label_A9AD:;
    /* $A9AD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AF:;
    /* $A9AF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B1:;
    /* $A9B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9B3:;
    /* $A9B3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A9B7:;
    /* $A9B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E94D(); g_code_window_base = _swb; } return;
label_A9BA:;
    /* $A9BA: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A9BC:;
    /* $A9BC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9BE:;
    /* $A9BE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x39); FLAG_NZ(g_cpu.A);
label_A9C0:;
    /* $A9C0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C2:;
    /* $A9C2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9C6:;
    /* $A9C6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A9CA:;
    /* $A9CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9CC:;
    /* $A9CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A9CE:;
    /* $A9CE: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9D0:;
    /* $A9D0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x06; FLAG_NZ(g_cpu.Y);
label_A9D2:;
    /* $A9D2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x41); FLAG_NZ(g_cpu.A);
label_A9D4:;
    /* $A9D4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x30; g_cpu.C=(g_cpu.A>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_A9D6:;
    /* $A9D6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9DE; }
label_A9D8:;
    /* $A9D8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x0E; FLAG_NZ(g_cpu.Y);
label_A9DA:;
    /* $A9DA: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_A9DC:;
    /* $A9DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_A9E0; }
label_A9DE:;
    /* $A9DE: 84 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.Y);
label_A9E0:;
    /* $A9E0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_EB24(); g_code_window_base = _swb; } return;
}

void func_A95D_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A95D_b15");
#endif
    func_A95D_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A990_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A990_b15");
#endif
    func_A95D_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A985_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A985_b15");
#endif
    func_A95D_b15_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_84FC_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_8504;
    }
label_84FC:;
    /* $84FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0780 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_84FF:;
    /* $84FF: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_851C; }
label_8501:;
    /* $8501: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_8504:;
    /* $8504: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0781 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8507:;
    /* $8507: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_850A:;
    /* $850A: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0782 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_850D:;
    /* $850D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0783 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8510:;
    /* $8510: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_8513:;
    /* $8513: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8514:;
    /* $8514: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8515:;
    /* $8515: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_850D;
    }
label_8517:;
    /* $8517: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8518:;
    /* $8518: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_8519:;
    /* $8519: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_851A:;
    /* $851A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_84FC;
    }
label_851C:;
    /* $851C: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_84FC_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_84FC_b15");
#endif
    func_84FC_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_8504_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8504_b15");
#endif
    func_84FC_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A992_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A992_b15");
#endif
label_A992:;
    /* $A992: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1285); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A995:;
    /* $A995: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_A997:;
    /* $A997: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A999:;
    /* $A999: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0960), -1); return; }
label_A99B:;
    /* $A99B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A99D:;
    /* $A99D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A99F:;
    /* $A99F: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A9A1:;
    /* $A9A1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A9A3:;
    /* $A9A3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0960), -1); return; }
label_A9A5:;
    /* $A9A5: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A7:;
    /* $A9A7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9A9:;
    /* $A9A9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A9AB:;
    /* $A9AB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x095D), -1); return; }
label_A9AD:;
    /* $A9AD: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x13; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9AF:;
    /* $A9AF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9B1:;
    /* $A9B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x28); FLAG_NZ(g_cpu.A);
label_A9B3:;
    /* $A9B3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x38; FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_A9B7:;
    /* $A9B7: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E94D(); g_code_window_base = _swb; } return;
}

void func_C198_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C1A9;
        case 2: goto label_C1AC;
        case 3: goto label_C1AE;
        case 4: goto label_C19D;
        case 5: goto label_C1B9;
        case 6: goto label_C1A5;
        case 7: goto label_C1B1;
        case 8: goto label_C1BB;
        case 9: goto label_C1B4;
    }
label_C198:;
    /* $C198: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C19B:;
    /* $C19B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C19D:;
    /* $C19D: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C1A0:;
    /* $C1A0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C1A2:;
    /* $C1A2: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C1A5:;
    /* $C1A5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_C1A7:;
    /* $C1A7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C1BE; }
label_C1A9:;
    /* $C1A9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x51); FLAG_NZ(g_cpu.A);
label_C1AB:;
    /* $C1AB: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C1AC:;
    /* $C1AC: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x9F; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C1AE:;
    /* $C1AE: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C1B1:;
    /* $C1B1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4C9); FLAG_NZ(g_cpu.A);
label_C1B4:;
    /* $C1B4: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C1B6:;
    /* $C1B6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4DB); FLAG_NZ(g_cpu.A);
label_C1B9:;
    /* $C1B9: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C1BB:;
    /* $C1BB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
label_C1BE:;
    /* $C1BE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BA, -1); return;
}

void func_C198(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C198");
#endif
    func_C198_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1A9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1A9");
#endif
    func_C198_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1AC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1AC");
#endif
    func_C198_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1AE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1AE");
#endif
    func_C198_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C19D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C19D");
#endif
    func_C198_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1B9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1B9");
#endif
    func_C198_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1A5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1A5");
#endif
    func_C198_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1B1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1B1");
#endif
    func_C198_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1BB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1BB");
#endif
    func_C198_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C1B4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C1B4");
#endif
    func_C198_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C235_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C240;
        case 2: goto label_C241;
        case 3: goto label_C244;
        case 4: goto label_C265;
    }
label_C235:;
    /* $C235: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C238:;
    /* $C238: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_C23A:;
    /* $C23A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C23D:;
    /* $C23D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C23F:;
    /* $C23F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C240:;
    /* $C240: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C241:;
    /* $C241: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C242:;
    /* $C242: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_C244:;
    /* $C244: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x00; FLAG_NZ(g_cpu.A);
label_C246:;
    /* $C246: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C249:;
    /* $C249: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C24B:;
    /* $C24B: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_C24D:;
    /* $C24D: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C250:;
    /* $C250: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C252:;
    /* $C252: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C255:;
    /* $C255: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C257:;
    /* $C257: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C25A:;
    /* $C25A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_C25C:;
    /* $C25C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C25D:;
    /* $C25D: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x7B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C25F:;
    /* $C25F: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C262:;
    /* $C262: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4CE); FLAG_NZ(g_cpu.A);
label_C265:;
    /* $C265: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C267:;
    /* $C267: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4E0); FLAG_NZ(g_cpu.A);
label_C26A:;
    /* $C26A: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C26C:;
    /* $C26C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
}

void func_C235(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C235");
#endif
    func_C235_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C240(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C240");
#endif
    func_C235_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C241(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C241");
#endif
    func_C235_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C244(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C244");
#endif
    func_C235_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C265(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C265");
#endif
    func_C235_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C26F_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C28F;
        case 2: goto label_C285;
        case 3: goto label_C279;
    }
label_C26F:;
    /* $C26F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C272:;
    /* $C272: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x23; FLAG_NZ(g_cpu.A);
label_C274:;
    /* $C274: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C277:;
    /* $C277: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C279:;
    /* $C279: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C27A:;
    /* $C27A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C27B:;
    /* $C27B: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C27C:;
    /* $C27C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_C27E:;
    /* $C27E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x00; FLAG_NZ(g_cpu.A);
label_C280:;
    /* $C280: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C283:;
    /* $C283: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C285:;
    /* $C285: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_C287:;
    /* $C287: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C28A:;
    /* $C28A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C28C:;
    /* $C28C: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C28F:;
    /* $C28F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_C291:;
    /* $C291: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C294:;
    /* $C294: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BA, -1); return;
}

void func_C26F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C26F");
#endif
    func_C26F_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C28F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C28F");
#endif
    func_C26F_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C285(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C285");
#endif
    func_C26F_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C279(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C279");
#endif
    func_C26F_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C297_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C2C0;
        case 2: goto label_C2CA;
        case 3: goto label_C2C2;
        case 4: goto label_C2A9;
        case 5: goto label_C29F;
        case 6: goto label_C2BD;
        case 7: goto label_C2A5;
        case 8: goto label_C2B8;
        case 9: goto label_C2A1;
        case 10: goto label_C2B1;
    }
label_C297:;
    /* $C297: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C29A:;
    /* $C29A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C29C:;
    /* $C29C: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C29E:;
    /* $C29E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_C29F:;
    /* $C29F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_C2A1:;
    /* $C2A1: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C2A3:;
    /* $C2A3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_C2A5:;
    /* $C2A5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_C2A7:;
    /* $C2A7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_C2A9:;
    /* $C2A9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_C2AB:;
    /* $C2AB: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C2AD:;
    /* $C2AD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C2AF:;
    /* $C2AF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_C2B1:;
    /* $C2B1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x9D); FLAG_NZ(g_cpu.A);
label_C2B3:;
    /* $C2B3: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C2B6:;
    /* $C2B6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x9C); FLAG_NZ(g_cpu.A);
label_C2B8:;
    /* $C2B8: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C2BB:;
    /* $C2BB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x58; FLAG_NZ(g_cpu.A);
label_C2BD:;
    /* $C2BD: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C2C0:;
    /* $C2C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_C2C2:;
    /* $C2C2: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C2C5:;
    /* $C2C5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4D0); FLAG_NZ(g_cpu.A);
label_C2C8:;
    /* $C2C8: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C2CA:;
    /* $C2CA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4E2); FLAG_NZ(g_cpu.A);
label_C2CD:;
    /* $C2CD: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C2CF:;
    /* $C2CF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
}

void func_C297(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C297");
#endif
    func_C297_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C0");
#endif
    func_C297_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2CA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2CA");
#endif
    func_C297_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2C2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2C2");
#endif
    func_C297_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2A9(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2A9");
#endif
    func_C297_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C29F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C29F");
#endif
    func_C297_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2BD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2BD");
#endif
    func_C297_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2A5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2A5");
#endif
    func_C297_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2B8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2B8");
#endif
    func_C297_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2A1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2A1");
#endif
    func_C297_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2B1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2B1");
#endif
    func_C297_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2D2_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C2FF;
        case 2: goto label_C2EE;
        case 3: goto label_C2E5;
        case 4: goto label_C2FA;
        case 5: goto label_C2F5;
        case 6: goto label_C2F7;
        case 7: goto label_C2F2;
        case 8: goto label_C2F0;
    }
label_C2D2:;
    /* $C2D2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C2D5:;
    /* $C2D5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_C2D7:;
    /* $C2D7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_C2D9:;
    /* $C2D9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2DA:;
    /* $C2DA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C2DB:;
    /* $C2DB: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x22; FLAG_NZ(g_cpu.A);
label_C2DD:;
    /* $C2DD: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C2E0:;
    /* $C2E0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C2E2:;
    /* $C2E2: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2E3:;
    /* $C2E3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2E4:;
    /* $C2E4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C2E5:;
    /* $C2E5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_C2E7:;
    /* $C2E7: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x60; FLAG_NZ(g_cpu.A);
label_C2E9:;
    /* $C2E9: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C2EC:;
    /* $C2EC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7A); FLAG_NZ(g_cpu.A);
label_C2EE:;
    /* $C2EE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_C2F0:;
    /* $C2F0: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C2F2:;
    /* $C2F2: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C2F5:;
    /* $C2F5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x79); FLAG_NZ(g_cpu.A);
label_C2F7:;
    /* $C2F7: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C2FA:;
    /* $C2FA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x98; FLAG_NZ(g_cpu.A);
label_C2FC:;
    /* $C2FC: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C2FF:;
    /* $C2FF: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BA, -1); return;
}

void func_C2D2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2D2");
#endif
    func_C2D2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2FF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2FF");
#endif
    func_C2D2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2EE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2EE");
#endif
    func_C2D2_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2E5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2E5");
#endif
    func_C2D2_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2FA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2FA");
#endif
    func_C2D2_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2F5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2F5");
#endif
    func_C2D2_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2F7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2F7");
#endif
    func_C2D2_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2F2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2F2");
#endif
    func_C2D2_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C2F0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C2F0");
#endif
    func_C2D2_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C32B_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C372;
        case 2: goto label_C355;
        case 3: goto label_C341;
        case 4: goto label_C35F;
        case 5: goto label_C362;
        case 6: goto label_C365;
        case 7: goto label_C343;
    }
label_C32B:;
    /* $C32B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C32E:;
    /* $C32E: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x73); FLAG_NZ(g_cpu.Y);
label_C330:;
    /* $C330: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C332:;
    /* $C332: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C335:;
    /* $C335: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4F5 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C338:;
    /* $C338: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C33B:;
    /* $C33B: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x73; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C33D:;
    /* $C33D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x73); FLAG_NZ(g_cpu.A);
label_C33F:;
    /* $C33F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x03; g_cpu.C=(g_cpu.A>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_C341:;
    /* $C341: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C355; }
label_C343:;
    /* $C343: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_C345:;
    /* $C345: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C348:;
    /* $C348: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4D1); FLAG_NZ(g_cpu.A);
label_C34B:;
    /* $C34B: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C34D:;
    /* $C34D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4E3); FLAG_NZ(g_cpu.A);
label_C350:;
    /* $C350: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C352:;
    /* $C352: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
label_C355:;
    /* $C355: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C357:;
    /* $C357: 85 */ maybe_trigger_vblank(3); nes_write(0x73, g_cpu.A);
label_C359:;
    /* $C359: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_C35B:;
    /* $C35B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C372; }
label_C35D:;
    /* $C35D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x51); FLAG_NZ(g_cpu.A);
label_C35F:;
    /* $C35F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C360:;
    /* $C360: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xA0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C362:;
    /* $C362: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C365:;
    /* $C365: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4C9); FLAG_NZ(g_cpu.A);
label_C368:;
    /* $C368: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C36A:;
    /* $C36A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4DB); FLAG_NZ(g_cpu.A);
label_C36D:;
    /* $C36D: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C36F:;
    /* $C36F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
label_C372:;
    /* $C372: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BA, -1); return;
}

void func_C32B(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C32B");
#endif
    func_C32B_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C372(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C372");
#endif
    func_C32B_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C355(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C355");
#endif
    func_C32B_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C341(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C341");
#endif
    func_C32B_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C35F(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C35F");
#endif
    func_C32B_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C362(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C362");
#endif
    func_C32B_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C365(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C365");
#endif
    func_C32B_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C343(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C343");
#endif
    func_C32B_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C375_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C37D;
        case 2: goto label_C396;
        case 3: goto label_C384;
    }
label_C375:;
    /* $C375: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C378:;
    /* $C378: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x21; FLAG_NZ(g_cpu.A);
label_C37A:;
    /* $C37A: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C37D:;
    /* $C37D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_C37F:;
    /* $C37F: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C382:;
    /* $C382: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C384:;
    /* $C384: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_C386:;
    /* $C386: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C389:;
    /* $C389: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C38B:;
    /* $C38B: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C38E:;
    /* $C38E: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C391:;
    /* $C391: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_C393:;
    /* $C393: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C396:;
    /* $C396: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4D4); FLAG_NZ(g_cpu.A);
label_C399:;
    /* $C399: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C39B:;
    /* $C39B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4E6); FLAG_NZ(g_cpu.A);
label_C39E:;
    /* $C39E: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C3A0:;
    /* $C3A0: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
}

void func_C375(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C375");
#endif
    func_C375_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C37D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C37D");
#endif
    func_C375_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C396(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C396");
#endif
    func_C375_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C384(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C384");
#endif
    func_C375_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3A3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C3BF;
        case 2: goto label_C3A8;
        case 3: goto label_C3C1;
        case 4: goto label_C3AD;
        case 5: goto label_C3BC;
        case 6: goto label_C3B6;
    }
label_C3A3:;
    /* $C3A3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C3A6:;
    /* $C3A6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6A); FLAG_NZ(g_cpu.A);
label_C3A8:;
    /* $C3A8: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C3AB:;
    /* $C3AB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C3AD:;
    /* $C3AD: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C3B0:;
    /* $C3B0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x50); FLAG_NZ(g_cpu.A);
label_C3B2:;
    /* $C3B2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C3C9; }
label_C3B4:;
    /* $C3B4: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x51); FLAG_NZ(g_cpu.A);
label_C3B6:;
    /* $C3B6: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C3B7:;
    /* $C3B7: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xA0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C3B9:;
    /* $C3B9: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C3BC:;
    /* $C3BC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4C9); FLAG_NZ(g_cpu.A);
label_C3BF:;
    /* $C3BF: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C3C1:;
    /* $C3C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4DB); FLAG_NZ(g_cpu.A);
label_C3C4:;
    /* $C3C4: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C3C6:;
    /* $C3C6: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
label_C3C9:;
    /* $C3C9: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BA, -1); return;
}

void func_C3A3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3A3");
#endif
    func_C3A3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3BF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3BF");
#endif
    func_C3A3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3A8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3A8");
#endif
    func_C3A3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3C1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3C1");
#endif
    func_C3A3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3AD(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3AD");
#endif
    func_C3A3_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3BC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3BC");
#endif
    func_C3A3_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3B6(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3B6");
#endif
    func_C3A3_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3CC_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C405;
        case 2: goto label_C3FB;
        case 3: goto label_C400;
        case 4: goto label_C403;
        case 5: goto label_C3F8;
        case 6: goto label_C3FE;
        case 7: goto label_C3D5;
        case 8: goto label_C3D2;
    }
label_C3CC:;
    /* $C3CC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C3CF:;
    /* $C3CF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_C3D1:;
    /* $C3D1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C3D2:;
    /* $C3D2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_C3D3:;
    /* $C3D3: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_C3D5:;
    /* $C3D5: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C3D8:;
    /* $C3D8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6A); FLAG_NZ(g_cpu.A);
label_C3DA:;
    /* $C3DA: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C3DB:;
    /* $C3DB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C3DC:;
    /* $C3DC: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_C3DD:;
    /* $C3DD: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xE0; FLAG_NZ(g_cpu.A);
label_C3DF:;
    /* $C3DF: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_C3E2:;
    /* $C3E2: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6A); FLAG_NZ(g_cpu.A);
label_C3E4:;
    /* $C3E4: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C3E7:;
    /* $C3E7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x7B); FLAG_NZ(g_cpu.A);
label_C3E9:;
    /* $C3E9: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C3EC:;
    /* $C3EC: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C3EE:;
    /* $C3EE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_C3F0:;
    /* $C3F0: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C3F3:;
    /* $C3F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAE; FLAG_NZ(g_cpu.A);
label_C3F5:;
    /* $C3F5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_C3F6:;
    /* $C3F6: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x7B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_C3F8:;
    /* $C3F8: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C3FB:;
    /* $C3FB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4D6); FLAG_NZ(g_cpu.A);
label_C3FE:;
    /* $C3FE: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C400:;
    /* $C400: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4E8); FLAG_NZ(g_cpu.A);
label_C403:;
    /* $C403: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C405:;
    /* $C405: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
}

void func_C3CC(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3CC");
#endif
    func_C3CC_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C405(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C405");
#endif
    func_C3CC_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3FB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3FB");
#endif
    func_C3CC_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C400(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C400");
#endif
    func_C3CC_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C403(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C403");
#endif
    func_C3CC_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3F8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3F8");
#endif
    func_C3CC_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3FE(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3FE");
#endif
    func_C3CC_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3D5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D5");
#endif
    func_C3CC_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C3D2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C3D2");
#endif
    func_C3CC_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C44A_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C44D;
        case 2: goto label_C457;
    }
label_C44A:;
    /* $C44A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C44D:;
    /* $C44D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x69); FLAG_NZ(g_cpu.A);
label_C44F:;
    /* $C44F: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C452:;
    /* $C452: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C454:;
    /* $C454: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C457:;
    /* $C457: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_C459:;
    /* $C459: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_C45C:;
    /* $C45C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4D8); FLAG_NZ(g_cpu.A);
label_C45F:;
    /* $C45F: 85 */ maybe_trigger_vblank(3); nes_write(0x9C, g_cpu.A);
label_C461:;
    /* $C461: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xC4EA); FLAG_NZ(g_cpu.A);
label_C464:;
    /* $C464: 85 */ maybe_trigger_vblank(3); nes_write(0x9D, g_cpu.A);
label_C466:;
    /* $C466: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BD, -1); return;
}

void func_C44A(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C44A");
#endif
    func_C44A_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C44D(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C44D");
#endif
    func_C44A_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C457(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C457");
#endif
    func_C44A_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C469_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C485;
        case 2: goto label_C478;
    }
label_C469:;
    /* $C469: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2002); FLAG_NZ(g_cpu.A);
label_C46C:;
    /* $C46C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x6A); FLAG_NZ(g_cpu.A);
label_C46E:;
    /* $C46E: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C471:;
    /* $C471: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C473:;
    /* $C473: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_C476:;
    /* $C476: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C478:;
    /* $C478: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_C47A:;
    /* $C47A: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x6B); FLAG_NZ(g_cpu.A);
label_C47C:;
    /* $C47C: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C47F:;
    /* $C47F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x66; FLAG_NZ(g_cpu.A);
label_C481:;
    /* $C481: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_C483:;
    /* $C483: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x72; FLAG_NZ(g_cpu.A);
label_C485:;
    /* $C485: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_C487:;
    /* $C487: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0489); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC487, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C48A:;
    /* $C48A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_C48C:;
    /* $C48C: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C48F:;
    /* $C48F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x78; FLAG_NZ(g_cpu.A);
label_C491:;
    /* $C491: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_C493:;
    /* $C493: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7A; FLAG_NZ(g_cpu.A);
label_C495:;
    /* $C495: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_C497:;
    /* $C497: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C499:;
    /* $C499: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xC4BA, -1); return;
}

void func_C469(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C469");
#endif
    func_C469_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C485(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C485");
#endif
    func_C469_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C478(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C478");
#endif
    func_C469_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C49C_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C4AA;
        case 2: goto label_C49E;
        case 3: goto label_C4A8;
        case 4: goto label_C4A2;
        case 5: goto label_C4A4;
    }
label_C49C:;
    /* $C49C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE8); FLAG_NZ(g_cpu.A);
label_C49E:;
    /* $C49E: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_C49F:;
    /* $C49F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xE9); FLAG_NZ(g_cpu.A);
label_C4A1:;
    /* $C4A1: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_C4A2:;
    /* $C4A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x66; FLAG_NZ(g_cpu.A);
label_C4A4:;
    /* $C4A4: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_C4A6:;
    /* $C4A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x72; FLAG_NZ(g_cpu.A);
label_C4A8:;
    /* $C4A8: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_C4AA:;
    /* $C4AA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x04AC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF45(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC4AA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C4AD:;
    /* $C4AD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF0); FLAG_NZ(g_cpu.A);
label_C4AF:;
    /* $C4AF: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_C4B2:;
    /* $C4B2: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C4B3:;
    /* $C4B3: 85 */ maybe_trigger_vblank(3); nes_write(0xE9, g_cpu.A);
label_C4B5:;
    /* $C4B5: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C4B6:;
    /* $C4B6: 85 */ maybe_trigger_vblank(3); nes_write(0xE8, g_cpu.A);
label_C4B8:;
    /* $C4B8: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x1B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C4BA:;
    /* $C4BA: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_C4BD:;
    /* $C4BD: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C4BE:;
    /* $C4BE: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_C4BF:;
    /* $C4BF: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C4C0:;
    /* $C4C0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_C4C1:;
    /* $C4C1: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C4C2:;
    /* $C4C2: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_C4C3:;
    /* $C4C3: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xC4C3; g_rti_bank = 15; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C49C(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C49C");
#endif
    func_C49C_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C4AA(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C4AA");
#endif
    func_C49C_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C49E(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C49E");
#endif
    func_C49C_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C4A8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C4A8");
#endif
    func_C49C_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C4A2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C4A2");
#endif
    func_C49C_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C4A4(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C4A4");
#endif
    func_C49C_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C8D0_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C8DB;
        case 2: goto label_C8D2;
        case 3: goto label_C8D8;
        case 4: goto label_C8EF;
    }
label_C8D0:;
    /* $C8D0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xBF; FLAG_NZ(g_cpu.X);
label_C8D2:;
    /* $C8D2: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_C8D3:;
    /* $C8D3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_C8D5:;
    /* $C8D5: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_C8D8:;
    /* $C8D8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08DA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_C8DB:;
    /* $C8DB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x88; FLAG_NZ(g_cpu.A);
label_C8DD:;
    /* $C8DD: 85 */ maybe_trigger_vblank(3); nes_write(0xE4, g_cpu.A);
label_C8DF:;
    /* $C8DF: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_C8E0:;
    /* $C8E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C8E2:;
    /* $C8E2: 85 */ maybe_trigger_vblank(3); nes_write(0x9B, g_cpu.A);
label_C8E4:;
    /* $C8E4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C8E6:;
    /* $C8E6: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08E8); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC8E6, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C8E9:;
    /* $C8E9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_C8EB:;
    /* $C8EB: 85 */ maybe_trigger_vblank(3); nes_write(0x99, g_cpu.A);
label_C8ED:;
    /* $C8ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_C8EF:;
    /* $C8EF: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_C8F1:;
    /* $C8F1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08F3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC8F1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C8F4:;
    /* $C8F4: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08F6); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9009, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC8F4, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C8F7:;
    /* $C8F7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_C8F9:;
    /* $C8F9: 85 */ maybe_trigger_vblank(3); nes_write(0xA9, g_cpu.A);
label_C8FB:;
    /* $C8FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C8FD:;
    /* $C8FD: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_C8FF:;
    /* $C8FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C901:;
    /* $C901: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_C903:;
    /* $C903: 99 */ maybe_trigger_vblank(5); nes_write((0x0150 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_C906:;
    /* $C906: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_C907:;
    /* $C907: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C903;
    }
label_C909:;
    /* $C909: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C90B:;
    /* $C90B: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_C90D:;
    /* $C90D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x090F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC752, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC90D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C910:;
    /* $C910: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_C912:;
    /* $C912: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_C914:;
    /* $C914: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0916); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC5E9, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC914, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C917:;
    /* $C917: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0919); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_C91A:;
    /* $C91A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x091C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC628, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC91A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C91D:;
    /* $C91D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C91F:;
    /* $C91F: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_C922:;
    /* $C922: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C924:;
    /* $C924: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_C926:;
    /* $C926: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_C929:;
    /* $C929: 85 */ maybe_trigger_vblank(3); nes_write(0xFD, g_cpu.A);
label_C92B:;
    /* $C92B: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_C92D:;
    /* $C92D: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_C92F:;
    /* $C92F: 85 */ maybe_trigger_vblank(3); nes_write(0xFC, g_cpu.A);
label_C931:;
    /* $C931: 85 */ maybe_trigger_vblank(3); nes_write(0xFA, g_cpu.A);
label_C933:;
    /* $C933: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_C935:;
    /* $C935: 85 */ maybe_trigger_vblank(3); nes_write(0x25, g_cpu.A);
label_C937:;
    /* $C937: 8D */ maybe_trigger_vblank(4); nes_write(0x0380, g_cpu.A);
label_C93A:;
    /* $C93A: 8D */ maybe_trigger_vblank(4); nes_write(0x03E0, g_cpu.A);
label_C93D:;
    /* $C93D: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_C93F:;
    /* $C93F: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_C941:;
    /* $C941: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_C943:;
    /* $C943: 85 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.A);
label_C945:;
    /* $C945: 85 */ maybe_trigger_vblank(3); nes_write(0x9F, g_cpu.A);
label_C947:;
    /* $C947: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_C949:;
    /* $C949: 85 */ maybe_trigger_vblank(3); nes_write(0xA0, g_cpu.A);
label_C94B:;
    /* $C94B: 85 */ maybe_trigger_vblank(3); nes_write(0xB4, g_cpu.A);
label_C94D:;
    /* $C94D: 85 */ maybe_trigger_vblank(3); nes_write(0xA1, g_cpu.A);
label_C94F:;
    /* $C94F: 85 */ maybe_trigger_vblank(3); nes_write(0x6F, g_cpu.A);
label_C951:;
    /* $C951: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x22); FLAG_NZ(g_cpu.Y);
label_C953:;
    /* $C953: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCD0C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C956:;
    /* $C956: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0958); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F898(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC956, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C959:;
    /* $C959: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C95B:;
    /* $C95B: 85 */ maybe_trigger_vblank(3); nes_write(0x31, g_cpu.A);
label_C95D:;
    /* $C95D: 85 */ maybe_trigger_vblank(3); nes_write(0x23, g_cpu.A);
label_C95F:;
    /* $C95F: 85 */ maybe_trigger_vblank(3); nes_write(0x2E, g_cpu.A);
label_C961:;
    /* $C961: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_C963:;
    /* $C963: 85 */ maybe_trigger_vblank(3); nes_write(0x29, g_cpu.A);
label_C965:;
    /* $C965: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1F; FLAG_NZ(g_cpu.A);
label_C967:;
    /* $C967: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_C969:;
    /* $C969: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_C96B:;
    /* $C96B: 85 */ maybe_trigger_vblank(3); nes_write(0x10, g_cpu.A);
label_C96D:;
    /* $C96D: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x096F); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E4F1(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC96D, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C970:;
    /* $C970: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0972); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_C973:;
    /* $C973: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x29); FLAG_NZ(g_cpu.A);
label_C975:;
    /* $C975: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C969;
    }
label_C977:;
    /* $C977: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_C979:;
    /* $C979: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_C97B:;
    /* $C97B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x097D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC97B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C97E:;
    /* $C97E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xAA40); FLAG_NZ(g_cpu.A);
label_C981:;
    /* $C981: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_C982:;
    /* $C982: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xE0; FLAG_NZ(g_cpu.A);
label_C984:;
    /* $C984: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_C986:;
    /* $C986: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_C988:;
    /* $C988: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2A; FLAG_NZ(g_cpu.Y);
label_C98A:;
    /* $C98A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_C98C:;
    /* $C98C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C991; }
label_C98E:;
    /* $C98E: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_C98F:;
    /* $C98F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x26; FLAG_NZ(g_cpu.Y);
label_C991:;
    /* $C991: 8E */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.X);
label_C994:;
    /* $C994: 84 */ maybe_trigger_vblank(3); nes_write(0x52, g_cpu.Y);
label_C996:;
    /* $C996: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_C997:;
    /* $C997: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_C999:;
    /* $C999: 85 */ maybe_trigger_vblank(3); nes_write(0x2C, g_cpu.A);
label_C99B:;
    /* $C99B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C99D:;
    /* $C99D: 85 */ maybe_trigger_vblank(3); nes_write(0x2B, g_cpu.A);
label_C99F:;
    /* $C99F: 85 */ maybe_trigger_vblank(3); nes_write(0x2D, g_cpu.A);
label_C9A1:;
    /* $C9A1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09A3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC816, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC9A1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C9A4:;
    /* $C9A4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C9A6:;
    /* $C9A6: 85 */ maybe_trigger_vblank(3); nes_write(0x18, g_cpu.A);
label_C9A8:;
    /* $C9A8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09AA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_C9AB:;
    /* $C9AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09AD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC74C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC9AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C9AE:;
    /* $C9AE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_C9B0:;
    /* $C9B0: 8D */ maybe_trigger_vblank(4); nes_write(0x0360, g_cpu.A);
label_C9B3:;
    /* $C9B3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9C; FLAG_NZ(g_cpu.A);
label_C9B5:;
    /* $C9B5: 85 */ maybe_trigger_vblank(3); nes_write(0xA2, g_cpu.A);
label_C9B7:;
    /* $C9B7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE8; FLAG_NZ(g_cpu.A);
label_C9B9:;
    /* $C9B9: 85 */ maybe_trigger_vblank(3); nes_write(0x51, g_cpu.A);
label_C9BB:;
    /* $C9BB: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_C9BD:;
    /* $C9BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_C9BF:;
    /* $C9BF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C9D3; }
label_C9C1:;
    /* $C9C1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_C9C3:;
    /* $C9C3: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_C9C5:;
    /* $C9C5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C9CB; }
label_C9C7:;
    /* $C9C7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_C9C9:;
    /* $C9C9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C9D3; }
label_C9CB:;
    /* $C9CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x9F; FLAG_NZ(g_cpu.A);
label_C9CD:;
    /* $C9CD: 85 */ maybe_trigger_vblank(3); nes_write(0x5E, g_cpu.A);
label_C9CF:;
    /* $C9CF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_C9D1:;
    /* $C9D1: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_C9D3:;
    /* $C9D3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x74; FLAG_NZ(g_cpu.A);
label_C9D5:;
    /* $C9D5: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_C9D7:;
    /* $C9D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x75; FLAG_NZ(g_cpu.A);
label_C9D9:;
    /* $C9D9: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_C9DB:;
    /* $C9DB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x09DD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xC9DB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_C9DE:;
    /* $C9DE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x30; FLAG_NZ(g_cpu.A);
label_C9E0:;
    /* $C9E0: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_C9E3:;
    /* $C9E3: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C9E5:;
    /* $C9E5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3C; FLAG_NZ(g_cpu.A);
label_C9E7:;
    /* $C9E7: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_C9E8:;
    /* $C9E8: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_C9EA:;
    /* $C9EA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_C9EC:;
    /* $C9EC: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_CA10; }
label_C9EE:;
    /* $C9EE: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_C9F0:;
    /* $C9F0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCF8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C9F3:;
    /* $C9F3: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C9F6:;
    /* $C9F6: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCF9 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C9F9:;
    /* $C9F9: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_C9FC:;
    /* $C9FC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCFA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C9FF:;
    /* $C9FF: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_CA02:;
    /* $CA02: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCCFB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CA05:;
    /* $CA05: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_CA08:;
    /* $CA08: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA09:;
    /* $CA09: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA0A:;
    /* $CA0A: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA0B:;
    /* $CA0B: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA0C:;
    /* $CA0C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C9F0;
    }
label_CA0E:;
    /* $CA0E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x14; FLAG_NZ(g_cpu.A);
label_CA10:;
    /* $CA10: 85 */ maybe_trigger_vblank(3); nes_write(0x97, g_cpu.A);
label_CA12:;
    /* $CA12: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_CA13:;
    /* $CA13: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_CA15:;
    /* $CA15: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_CA18:;
    /* $CA18: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA19:;
    /* $CA19: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA1A:;
    /* $CA1A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA1B:;
    /* $CA1B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CA1C:;
    /* $CA1C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_CA15;
    }
label_CA1E:;
    /* $CA1E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CA20:;
    /* $CA20: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CA22:;
    /* $CA22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A24); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF21(); g_code_window_base = _swb; }
}
label_CA25:;
    /* $CA25: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xEE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CA27:;
    /* $CA27: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x95; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CA29:;
    /* $CA29: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_CA2A:;
    /* $CA2A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_CA2B:;
    /* $CA2B: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CA2D:;
    /* $CA2D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_C9E7;
    }
label_CA2F:;
    /* $CA2F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_CA31:;
    /* $CA31: 8D */ maybe_trigger_vblank(4); nes_write(0x0611, g_cpu.A);
label_CA34:;
    /* $CA34: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x18; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CA36:;
    /* $CA36: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CA38:;
    /* $CA38: 85 */ maybe_trigger_vblank(3); nes_write(0xEA, g_cpu.A);
label_CA3A:;
    /* $CA3A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CA3C:;
    /* $CA3C: 85 */ maybe_trigger_vblank(3); nes_write(0xEB, g_cpu.A);
label_CA3E:;
    /* $CA3E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A40); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF3C(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCA3E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CA41:;
    /* $CA41: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CA43:;
    /* $CA43: 8D */ maybe_trigger_vblank(4); nes_write(0x0300, g_cpu.A);
label_CA46:;
    /* $CA46: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CA48:;
    /* $CA48: 8D */ maybe_trigger_vblank(4); nes_write(0x03C0, g_cpu.A);
label_CA4B:;
    /* $CA4B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xD0; FLAG_NZ(g_cpu.A);
label_CA4D:;
    /* $CA4D: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_CA50:;
    /* $CA50: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_CA52:;
    /* $CA52: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_CA55:;
    /* $CA55: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CA57:;
    /* $CA57: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_CA5A:;
    /* $CA5A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CA5C:;
    /* $CA5C: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_CA5F:;
    /* $CA5F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_CA61:;
    /* $CA61: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_CA64:;
    /* $CA64: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_CA66:;
    /* $CA66: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_CA68:;
    /* $CA68: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A6A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F835(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCA68, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CA6B:;
    /* $CA6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_CA6D:;
    /* $CA6D: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_CA6F:;
    /* $CA6F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_CA71:;
    /* $CA71: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_CA73:;
    /* $CA73: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_CA75:;
    /* $CA75: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_CA77:;
    /* $CA77: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAB5; }
label_CA79:;
    /* $CA79: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_CA7B:;
    /* $CA7B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_CA7D:;
    /* $CA7D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAB5; }
label_CA7F:;
    /* $CA7F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_CA81:;
    /* $CA81: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAB5; }
label_CA83:;
    /* $CA83: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x09; g_cpu.C=(g_cpu.A>=0x09)?1:0; FLAG_NZ(r&0xFF); }
label_CA85:;
    /* $CA85: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_CAB5; }
label_CA87:;
    /* $CA87: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_CA89:;
    /* $CA89: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_CA8A:;
    /* $CA8A: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x06; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CA8C:;
    /* $CA8C: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CA99; }
label_CA8E:;
    /* $CA8E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_CA90:;
    /* $CA90: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CA99; }
label_CA92:;
    /* $CA92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CA94:;
    /* $CA94: 8D */ maybe_trigger_vblank(4); nes_write(0x0301, g_cpu.A);
label_CA97:;
    /* $CA97: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAA4; }
label_CA99:;
    /* $CA99: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0301); FLAG_NZ(g_cpu.A);
label_CA9C:;
    /* $CA9C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0302); FLAG_NZ(g_cpu.A);
label_CA9F:;
    /* $CA9F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0303); FLAG_NZ(g_cpu.A);
label_CAA2:;
    /* $CAA2: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_CAB5; }
label_CAA4:;
    /* $CAA4: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x30); FLAG_NZ(g_cpu.Y);
label_CAA6:;
    /* $CAA6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xCD1E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_CAA9:;
    /* $CAA9: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_CAB5; }
label_CAAB:;
    /* $CAAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_CAAD:;
    /* $CAAD: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_CAAF:;
    /* $CAAF: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AB1); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCAAF, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CAB2:;
    /* $CAB2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AB4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xA003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCAB2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CAB5:;
    /* $CAB5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_CAB7:;
    /* $CAB7: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_CAB9:;
    /* $CAB9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ABB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCAB9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CABC:;
    /* $CABC: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ABE); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xCD34, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCABC, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CABF:;
    /* $CABF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_CAC1:;
    /* $CAC1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAD7; }
label_CAC3:;
    /* $CAC3: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_CAC5:;
    /* $CAC5: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0E; g_cpu.C=(g_cpu.A>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_CAC7:;
    /* $CAC7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAD3; }
label_CAC9:;
    /* $CAC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF2; FLAG_NZ(g_cpu.A);
label_CACB:;
    /* $CACB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0ACD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCACB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CACE:;
    /* $CACE: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x17; FLAG_NZ(g_cpu.A);
label_CAD0:;
    /* $CAD0: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AD2); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F89A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCAD0, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CAD3:;
    /* $CAD3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CAD5:;
    /* $CAD5: 85 */ maybe_trigger_vblank(3); nes_write(0x3D, g_cpu.A);
label_CAD7:;
    /* $CAD7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AD9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E16A(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCAD7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CADA:;
    /* $CADA: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xFC); FLAG_NZ(g_cpu.A);
label_CADC:;
    /* $CADC: 85 */ maybe_trigger_vblank(3); nes_write(0x25, g_cpu.A);
label_CADE:;
    /* $CADE: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_CAE0:;
    /* $CAE0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF8); FLAG_NZ(g_cpu.A);
label_CAE2:;
    /* $CAE2: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x02; g_cpu.C=(g_cpu.A>=0x02)?1:0; FLAG_NZ(r&0xFF); }
label_CAE4:;
    /* $CAE4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CAF2; }
label_CAE6:;
    /* $CAE6: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_CAE8:;
    /* $CAE8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CAE9:;
    /* $CAE9: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CAEB:;
    /* $CAEB: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_CAEC:;
    /* $CAEC: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_CAEE:;
    /* $CAEE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_CAF0:;
    /* $CAF0: 85 */ maybe_trigger_vblank(3); nes_write(0x5F, g_cpu.A);
label_CAF2:;
    /* $CAF2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0380); FLAG_NZ(g_cpu.A);
label_CAF5:;
    /* $CAF5: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x6F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_CAF7:;
    /* $CAF7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CAFB; }
label_CAF9:;
    /* $CAF9: 85 */ maybe_trigger_vblank(3); nes_write(0x6F, g_cpu.A);
label_CAFB:;
    /* $CAFB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0360); FLAG_NZ(g_cpu.A);
label_CAFE:;
    /* $CAFE: 85 */ maybe_trigger_vblank(3); nes_write(0x27, g_cpu.A);
label_CB00:;
    /* $CB00: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_CB02:;
    /* $CB02: 86 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.X);
label_CB04:;
    /* $CB04: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_CB05:;
    /* $CB05: 86 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.X);
label_CB07:;
    /* $CB07: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B09); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB07, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB0A:;
    /* $CB0A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B0C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB0A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB0D:;
    /* $CB0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1A; FLAG_NZ(g_cpu.A);
label_CB0F:;
    /* $CB0F: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_CB11:;
    /* $CB11: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x22); FLAG_NZ(g_cpu.A);
label_CB13:;
    /* $CB13: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_CB15:;
    /* $CB15: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B17); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB15, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB18:;
    /* $CB18: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B1A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9C00, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB18, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB1B:;
    /* $CB1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_CB1D:;
    /* $CB1D: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_CB1F:;
    /* $CB1F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B21); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB1F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB22:;
    /* $CB22: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B24); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB22, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB25:;
    /* $CB25: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B27); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8006, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB25, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB28:;
    /* $CB28: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B2A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x800F, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB28, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB2B:;
    /* $CB2B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B2D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8009, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB2B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB2E:;
    /* $CB2E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B30); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x800C, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB2E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB31:;
    /* $CB31: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B33); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB31, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB34:;
    /* $CB34: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B36); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8012, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB34, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB37:;
    /* $CB37: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B39); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC798, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB37, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB3A:;
    /* $CB3A: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B3C); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF57(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB3A, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB3D:;
    /* $CB3D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x98); FLAG_NZ(g_cpu.A);
label_CB3F:;
    /* $CB3F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_CB41:;
    /* $CB41: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB49; }
label_CB43:;
    /* $CB43: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_CB45:;
    /* $CB45: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x17); FLAG_NZ(g_cpu.A);
label_CB47:;
    /* $CB47: 85 */ maybe_trigger_vblank(3); nes_write(0x17, g_cpu.A);
label_CB49:;
    /* $CB49: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B4B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xC7FB, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB49, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB4C:;
    /* $CB4C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x59); FLAG_NZ(g_cpu.A);
label_CB4E:;
    /* $CB4E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB5B; }
label_CB50:;
    /* $CB50: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x3C); FLAG_NZ(g_cpu.A);
label_CB52:;
    /* $CB52: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB78; }
label_CB54:;
    /* $CB54: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x74); FLAG_NZ(g_cpu.A);
label_CB56:;
    /* $CB56: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBCE; }
label_CB58:;
    /* $CB58: 4C */ maybe_trigger_vblank(3); goto label_CA73;
label_CB5B:;
    /* $CB5B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB5D:;
    /* $CB5D: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CB5F:;
    /* $CB5F: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_CB61:;
    /* $CB61: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_CB63:;
    /* $CB63: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_CB65:;
    /* $CB65: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_CB67:;
    /* $CB67: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_CB69:;
    /* $CB69: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_CB6B:;
    /* $CB6B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_CB6D:;
    /* $CB6D: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_CB6F:;
    /* $CB6F: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B71); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB6F, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB72:;
    /* $CB72: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B74); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCB72, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CB75:;
    /* $CB75: 4C */ maybe_trigger_vblank(3); goto label_C8FF;
label_CB78:;
    /* $CB78: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB7A:;
    /* $CB7A: 85 */ maybe_trigger_vblank(3); nes_write(0x3C, g_cpu.A);
label_CB7C:;
    /* $CB7C: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_CB7E:;
    /* $CB7E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAE); FLAG_NZ(g_cpu.A);
label_CB80:;
    /* $CB80: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_CB81:;
    /* $CB81: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CB83:;
    /* $CB83: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_CBB1; }
label_CB85:;
    /* $CB85: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_CB87:;
    /* $CB87: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_CB89:;
    /* $CB89: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x0F; g_cpu.C=(g_cpu.A>=0x0F)?1:0; FLAG_NZ(r&0xFF); }
label_CB8B:;
    /* $CB8B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CB94; }
label_CB8D:;
    /* $CB8D: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xAE); FLAG_NZ(g_cpu.A);
label_CB8F:;
    /* $CB8F: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_CB90:;
    /* $CB90: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x06; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_CB92:;
    /* $CB92: 85 */ maybe_trigger_vblank(3); nes_write(0xAE, g_cpu.A);
label_CB94:;
    /* $CB94: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CB96:;
    /* $CB96: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CB98:;
    /* $CB98: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_CB9A:;
    /* $CB9A: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_CB9C:;
    /* $CB9C: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_CB9E:;
    /* $CB9E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x60); FLAG_NZ(g_cpu.A);
label_CBA0:;
    /* $CBA0: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x12; g_cpu.C=(g_cpu.A>=0x12)?1:0; FLAG_NZ(r&0xFF); }
label_CBA2:;
    /* $CBA2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBA7; }
label_CBA4:;
    /* $CBA4: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCC18, -1); return;
label_CBA7:;
    /* $CBA7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_CBA9:;
    /* $CBA9: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_CBAB:;
    /* $CBAB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BAD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCBAB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CBAE:;
    /* $CBAE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x9006, -1); return;
label_CBB1:;
    /* $CBB1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CBB3:;
    /* $CBB3: 85 */ maybe_trigger_vblank(3); nes_write(0xEE, g_cpu.A);
label_CBB5:;
    /* $CBB5: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_CBB7:;
    /* $CBB7: 85 */ maybe_trigger_vblank(3); nes_write(0x71, g_cpu.A);
label_CBB9:;
    /* $CBB9: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_CBBB:;
    /* $CBBB: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_CBBD:;
    /* $CBBD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x18; FLAG_NZ(g_cpu.A);
label_CBBF:;
    /* $CBBF: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_CBC1:;
    /* $CBC1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x13; FLAG_NZ(g_cpu.A);
label_CBC3:;
    /* $CBC3: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_CBC5:;
    /* $CBC5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BC7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCBC5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CBC8:;
    /* $CBC8: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BCA); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCBC8, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CBCB:;
    /* $CBCB: 4C */ maybe_trigger_vblank(3); goto label_C8FF;
label_CBCE:;
    /* $CBCE: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_CBCF:;
    /* $CBCF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_CBD1:;
    /* $CBD1: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_CBD3:;
    /* $CBD3: 85 */ maybe_trigger_vblank(3); nes_write(0x74, g_cpu.A);
label_CBD5:;
    /* $CBD5: 85 */ maybe_trigger_vblank(3); nes_write(0xB1, g_cpu.A);
label_CBD7:;
    /* $CBD7: 85 */ maybe_trigger_vblank(3); nes_write(0xB2, g_cpu.A);
label_CBD9:;
    /* $CBD9: 85 */ maybe_trigger_vblank(3); nes_write(0xB3, g_cpu.A);
label_CBDB:;
    /* $CBDB: 85 */ maybe_trigger_vblank(3); nes_write(0x5A, g_cpu.A);
label_CBDD:;
    /* $CBDD: 85 */ maybe_trigger_vblank(3); nes_write(0xF9, g_cpu.A);
label_CBDF:;
    /* $CBDF: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_CBE1:;
    /* $CBE1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0B; FLAG_NZ(g_cpu.A);
label_CBE3:;
    /* $CBE3: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_CBE5:;
    /* $CBE5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_CBE7:;
    /* $CBE7: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_CBE9:;
    /* $CBE9: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BEB); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCBE9, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CBEC:;
    /* $CBEC: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_CBED:;
    /* $CBED: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_CBEF:;
    /* $CBEF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_CBF7; }
label_CBF1:;
    /* $CBF1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BF3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCBF1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CBF4:;
    /* $CBF4: 4C */ maybe_trigger_vblank(3); goto label_C8FF;
label_CBF7:;
    /* $CBF7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x75); FLAG_NZ(g_cpu.A);
label_CBF9:;
    /* $CBF9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x06; g_cpu.C=(g_cpu.A>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_CBFB:;
    /* $CBFB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_CC03; }
label_CBFD:;
    /* $CBFD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BFF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCBFD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC00:;
    /* $CC00: 4C */ maybe_trigger_vblank(3); goto label_C8FF;
label_CC03:;
    /* $CC03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_CC05:;
    /* $CC05: 85 */ maybe_trigger_vblank(3); nes_write(0xF4, g_cpu.A);
label_CC07:;
    /* $CC07: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0E; FLAG_NZ(g_cpu.A);
label_CC09:;
    /* $CC09: 85 */ maybe_trigger_vblank(3); nes_write(0xF5, g_cpu.A);
label_CC0B:;
    /* $CC0B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C0D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF6B(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC0B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC0E:;
    /* $CC0E: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x11; FLAG_NZ(g_cpu.A);
label_CC10:;
    /* $CC10: 85 */ maybe_trigger_vblank(3); nes_write(0xF8, g_cpu.A);
label_CC12:;
    /* $CC12: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0C14); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xCC12, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_CC15:;
    /* $CC15: 4C */ maybe_trigger_vblank(3); goto label_C8FF;
}

void func_C8D0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8D0");
#endif
    func_C8D0_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C8DB(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8DB");
#endif
    func_C8D0_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C8D2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8D2");
#endif
    func_C8D0_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C8D8(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8D8");
#endif
    func_C8D0_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C8EF(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C8EF");
#endif
    func_C8D0_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_D649(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_D649");
#endif
label_D649:;
    /* $D649: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_D64B:;
    /* $D64B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x164D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F606(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD64B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D64E:;
    /* $D64E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D64F:;
    /* $D64F: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D652:;
    /* $D652: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D653:;
    /* $D653: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D656:;
    /* $D656: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0440); FLAG_NZ(g_cpu.A);
label_D659:;
    /* $D659: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_D65C:;
    /* $D65C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_D67E; }
label_D65E:;
    /* $D65E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x14); FLAG_NZ(g_cpu.A);
label_D660:;
    /* $D660: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_D662:;
    /* $D662: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_D667; }
label_D664:;
    /* $D664: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0xCEAD, -1); return;
label_D667:;
    /* $D667: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D669:;
    /* $D669: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D66C:;
    /* $D66C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D66E:;
    /* $D66E: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D671:;
    /* $D671: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0580); FLAG_NZ(g_cpu.A);
label_D674:;
    /* $D674: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_D675:;
    /* $D675: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x35); FLAG_NZ(g_cpu.A);
label_D677:;
    /* $D677: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1679); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xCF3D, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD677, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D67A:;
    /* $D67A: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_D67B:;
    /* $D67B: 8D */ maybe_trigger_vblank(4); nes_write(0x0580, g_cpu.A);
label_D67E:;
    /* $D67E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_D680:;
    /* $D680: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1682); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_F642(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD680, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D683:;
    /* $D683: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0440); FLAG_NZ(g_cpu.A);
label_D686:;
    /* $D686: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_D687:;
    /* $D687: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x40 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x40); g_cpu.A=r&0xFF; }
label_D689:;
    /* $D689: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D68C:;
    /* $D68C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0460); FLAG_NZ(g_cpu.A);
label_D68F:;
    /* $D68F: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_D691:;
    /* $D691: 8D */ maybe_trigger_vblank(4); nes_write(0x0460, g_cpu.A);
label_D694:;
    /* $D694: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x07; g_cpu.C=(g_cpu.A>=0x07)?1:0; FLAG_NZ(r&0xFF); }
label_D696:;
    /* $D696: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_D69D; }
label_D698:;
    /* $D698: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_D69A:;
    /* $D69A: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_D69D:;
    /* $D69D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x4C; FLAG_NZ(g_cpu.A);
label_D69F:;
    /* $D69F: 8D */ maybe_trigger_vblank(4); nes_write(0x0400, g_cpu.A);
label_D6A2:;
    /* $D6A2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_D6A4:;
    /* $D6A4: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_D6A7:;
    /* $D6A7: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x16A9); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0xD0C1, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xD6A7, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_D6AA:;
    /* $D6AA: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A01B_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A01B_b15");
#endif
label_A01B:;
    /* $A01B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA01B); return;
}

void func_A0C0_b15_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A0D9;
    }
label_A0C0:;
    /* $A0C0: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A0C1:;
    /* $A0C1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A0C3:;
    /* $A0C3: 8D */ maybe_trigger_vblank(4); nes_write(0x0500, g_cpu.A);
label_A0C6:;
    /* $A0C6: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_A0C9:;
    /* $A0C9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x04; g_cpu.C=(g_cpu.A>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A0CB:;
    /* $A0CB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(2); goto label_A119; }
label_A0CD:;
    /* $A0CD: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x00CF); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FC53(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA0CD, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A0D0:;
    /* $A0D0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(2); goto label_A119; }
label_A0D2:;
    /* $A0D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A0D4:;
    /* $A0D4: 99 */ maybe_trigger_vblank(5); nes_write((0x0300 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0D7:;
    /* $A0D7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x90; FLAG_NZ(g_cpu.A);
label_A0D9:;
    /* $A0D9: 99 */ maybe_trigger_vblank(5); nes_write((0x0580 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0DC:;
    /* $A0DC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A0DE:;
    /* $A0DE: 99 */ maybe_trigger_vblank(5); nes_write((0x03C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0E1:;
    /* $A0E1: 99 */ maybe_trigger_vblank(5); nes_write((0x03E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0E4:;
    /* $A0E4: 99 */ maybe_trigger_vblank(5); nes_write((0x05E0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0E7:;
    /* $A0E7: 99 */ maybe_trigger_vblank(5); nes_write((0x05A0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0EA:;
    /* $A0EA: 99 */ maybe_trigger_vblank(5); nes_write((0x0480 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0ED:;
    /* $A0ED: 99 */ maybe_trigger_vblank(5); nes_write((0x0440 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0F0:;
    /* $A0F0: 99 */ maybe_trigger_vblank(5); nes_write((0x0460 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0F3:;
    /* $A0F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x7C; FLAG_NZ(g_cpu.A);
label_A0F5:;
    /* $A0F5: 99 */ maybe_trigger_vblank(5); nes_write((0x05C0 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0F8:;
    /* $A0F8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF9; FLAG_NZ(g_cpu.A);
label_A0FA:;
    /* $A0FA: 99 */ maybe_trigger_vblank(5); nes_write((0x0320 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A0FD:;
    /* $A0FD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC4; FLAG_NZ(g_cpu.A);
label_A0FF:;
    /* $A0FF: 99 */ maybe_trigger_vblank(5); nes_write((0x0520 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A102:;
    /* $A102: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0520); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A108:;
    /* $A108: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A109:;
    /* $A109: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0520; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A10C:;
    /* $A10C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xE166 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10F:;
    /* $A10F: 99 */ maybe_trigger_vblank(5); nes_write((0x0360 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A112:;
    /* $A112: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xF9); FLAG_NZ(g_cpu.A);
label_A114:;
    /* $A114: 99 */ maybe_trigger_vblank(5); nes_write((0x0380 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A117:;
    /* $A117: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A119:;
    /* $A119: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A0C0_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0C0_b15");
#endif
    func_A0C0_b15_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0D9_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0D9_b15");
#endif
    func_A0C0_b15_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0EF_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0EF_b15");
#endif
label_A0EF:;
    /* $A0EF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x99); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A0F1:;
    /* $A0F1: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A137_b15(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A137_b15");
#endif
label_A137:;
    /* $A137: EE */ maybe_trigger_vblank(6); { uint16_t a=0x8503; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A13A:;
    /* $A13A: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xA5) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A13C:;
    /* $A13C: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8E8D + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A13F:;
    /* $A13F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA4 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A141:;
    /* $A141: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x72B9); nes_trace_indirect_jump(0xA141, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_C7C2_body(int _entry) {
    switch (_entry) {
        case 1: goto label_C7C5;
    }
label_C7C2:;
    /* $C7C2: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x6518 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_C7C5:;
    /* $C7C5: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1D85 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C7C8:;
    /* $C7C8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_C7CA:;
    /* $C7CA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7D4; }
label_C7CC:;
    /* $C7CC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x50; g_cpu.C=(g_cpu.A>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_C7CE:;
    /* $C7CE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7DC; }
label_C7D0:;
    /* $C7D0: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x71; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_C7D2:;
    /* $C7D2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); goto label_C7D8; }
label_C7D4:;
    /* $C7D4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C7D6:;
    /* $C7D6: 85 */ maybe_trigger_vblank(3); nes_write(0x72, g_cpu.A);
label_C7D8:;
    /* $C7D8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_C7DA:;
    /* $C7DA: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_C7DC:;
    /* $C7DC: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_C7C2(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C7C2");
#endif
    func_C7C2_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_C7C5(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_C7C5");
#endif
    func_C7C2_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}
