/* mega-man-3_full_bank00_part08.c — PRG bank 0 function bodies (sub-part 8).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_925B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_925B_b0");
#endif
label_925B:;
    /* $925B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_925D:;
    /* $925D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_925F:;
    /* $925F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x9A); FLAG_NZ(g_cpu.A);
label_9261:;
    /* $9261: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9262:;
    /* $9262: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9263:;
    /* $9263: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9264:;
    /* $9264: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0404 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9267:;
    /* $9267: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_9269:;
    /* $9269: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDBF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_926C:;
    /* $926C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x30; g_cpu.C=(g_cpu.Y>=0x30)?1:0; FLAG_NZ(r&0xFF); }
label_926E:;
    /* $926E: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xAB + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9270:;
    /* $9270: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9271:;
    /* $9271: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9272:;
    /* $9272: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9274:;
    /* $9274: C2 */ maybe_trigger_vblank(2); /* NOP */
label_9276:;
    /* $9276: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xAE + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9278:;
    /* $9278: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_927A:;
    /* $927A: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x43 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_927C:;
    /* $927C: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_927E:;
    /* $927E: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xA7 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9280:;
    /* $9280: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9281:;
    /* $9281: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x4704 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9284:;
    /* $9284: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x46; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9286:;
    /* $9286: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_9287:;
    /* $9287: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x48); FLAG_NZ(g_cpu.A);
label_9289:;
    /* $9289: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_928B:;
    /* $928B: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_9291; }
label_928D:;
    /* $928D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x50; FLAG_NZ(g_cpu.A);
label_928F:;
    /* $928F: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x48; FLAG_NZ(g_cpu.A);
label_9291:;
    /* $9291: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_92C3; }
label_9293:;
    /* $9293: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_92C5; }
label_9295:;
    /* $9295: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_925B;
    }
label_9297:;
    /* $9297: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x4748); FLAG_NZ(g_cpu.X);
label_929A:;
    /* $929A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_929B:;
    /* $929B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x04; FLAG_NZ(g_cpu.A);
label_929D:;
    /* $929D: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_929F:;
    /* $929F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x48); FLAG_NZ(g_cpu.A);
label_92A1:;
    /* $92A1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x50); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92A3:;
    /* $92A3: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x04; FLAG_NZ(g_cpu.A);
label_92A5:;
    /* $92A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92A7:;
    /* $92A7: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x48); FLAG_NZ(g_cpu.A);
label_92A9:;
    /* $92A9: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92AB:;
    /* $92AB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92AC:;
    /* $92AC: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_92AE:;
    /* $92AE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92AF:;
    /* $92AF: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x48; FLAG_NZ(g_cpu.A);
label_92B1:;
    /* $92B1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x474A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92B4:;
    /* $92B4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_92B5:;
    /* $92B5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x47; FLAG_NZ(g_cpu.A);
label_92B7:;
    /* $92B7: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xB948); FLAG_NZ(g_cpu.X);
label_92BA:;
    /* $92BA: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x4A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_92BC:;
    /* $92BC: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x4A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_92BE:;
    /* $92BE: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_92BF:;
    /* $92BF: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x48); FLAG_NZ(g_cpu.A);
label_92C1:;
    /* $92C1: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_92C3:;
    /* $92C3: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_92C4:;
    /* $92C4: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_92C5:;
    /* $92C5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_92C7:;
    /* $92C7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x48); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92C9:;
    /* $92C9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92CB:;
    /* $92CB: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_92CD:;
    /* $92CD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92CF:;
    /* $92CF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x48); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92D1:;
    /* $92D1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92D3:;
    /* $92D3: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0404); FLAG_NZ(g_cpu.A);
label_92D6:;
    /* $92D6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92D8:;
    /* $92D8: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_92D9:;
    /* $92D9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92DB:;
    /* $92DB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92DD:;
    /* $92DD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92DF:;
    /* $92DF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x48); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92E1:;
    /* $92E1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92E3:;
    /* $92E3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92E5:;
    /* $92E5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_92E7:;
    /* $92E7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x48; g_cpu.C=(g_cpu.A>=0x48)?1:0; FLAG_NZ(r&0xFF); }
label_92E9:;
    /* $92E9: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_92EB:;
    /* $92EB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92EC:;
    /* $92EC: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_92EE:;
    /* $92EE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_92EF:;
    /* $92EF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_92F0:;
    /* $92F0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_92F1:;
    /* $92F1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x474A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92F4:;
    /* $92F4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_92F5:;
    /* $92F5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4A; FLAG_NZ(g_cpu.A);
label_92F7:;
    /* $92F7: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x48); FLAG_NZ(g_cpu.A);
label_92F9:;
    /* $92F9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x4A47 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_92FC:;
    /* $92FC: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x4A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_92FE:;
    /* $92FE: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xAB; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9300:;
    /* $9300: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA7); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9302:;
    /* $9302: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9303:;
    /* $9303: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9305:;
    /* $9305: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9306:;
    /* $9306: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9307:;
    /* $9307: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9309:;
    /* $9309: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x85)?1:0; g_cpu.X=(t-0x85)&0xFF; FLAG_NZ(g_cpu.X); }
label_930B:;
    /* $930B: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_930D:;
    /* $930D: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4242); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_9310:;
    /* $9310: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9312:;
    /* $9312: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9314:;
    /* $9314: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9316:;
    /* $9316: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9318:;
    /* $9318: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_931A:;
    /* $931A: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_931C:;
    /* $931C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_931E:;
    /* $931E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9320:;
    /* $9320: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9321:;
    /* $9321: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9322:;
    /* $9322: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9323:;
    /* $9323: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0404 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9326:;
    /* $9326: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9328:;
    /* $9328: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBE9B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_932B:;
    /* $932B: CE */ maybe_trigger_vblank(6); { uint16_t a=0x9ACF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_932E:;
    /* $932E: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_932F:;
    /* $932F: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9330:;
    /* $9330: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9331:;
    /* $9331: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9333:;
    /* $9333: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9334:;
    /* $9334: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_92F4;
    }
label_9336:;
    /* $9336: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x44BD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9339:;
    /* $9339: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_933B:;
    /* $933B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_933C:;
    /* $933C: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_933D:;
    /* $933D: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_933E:;
    /* $933E: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_933F:;
    /* $933F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9340:;
    /* $9340: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9342:;
    /* $9342: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9344:;
    /* $9344: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9345:;
    /* $9345: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9347:;
    /* $9347: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9348:;
    /* $9348: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_934A:;
    /* $934A: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_934B:;
    /* $934B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_934D:;
    /* $934D: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_934E:;
    /* $934E: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9350:;
    /* $9350: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9352:;
    /* $9352: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9354:;
    /* $9354: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9356:;
    /* $9356: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9358:;
    /* $9358: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_935A:;
    /* $935A: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_935C:;
    /* $935C: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_935D:;
    /* $935D: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_935F:;
    /* $935F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD5 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9361:;
    /* $9361: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9363:;
    /* $9363: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9365:;
    /* $9365: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9367:;
    /* $9367: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_9368:;
    /* $9368: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9369:;
    /* $9369: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_936A:;
    /* $936A: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_936B:;
    /* $936B: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_936C:;
    /* $936C: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_936D:;
    /* $936D: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_936E:;
    /* $936E: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_936F:;
    /* $936F: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9370:;
    /* $9370: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD9BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9373:;
    /* $9373: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDD9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9376:;
    /* $9376: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x42DA; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9379:;
    /* $9379: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_937B:;
    /* $937B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_937C:;
    /* $937C: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_937D:;
    /* $937D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_937F:;
    /* $937F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9380:;
    /* $9380: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x8585 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9383:;
    /* $9383: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9385:;
    /* $9385: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9387:;
    /* $9387: 85 */ maybe_trigger_vblank(3); nes_write(0xDC, g_cpu.A);
label_9389:;
    /* $9389: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_938B:;
    /* $938B: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_938D:;
    /* $938D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_938E:;
    /* $938E: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xDD) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9390:;
    /* $9390: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xD6DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9393:;
    /* $9393: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD6DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9396:;
    /* $9396: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xE0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9398:;
    /* $9398: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_939A:;
    /* $939A: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_939C:;
    /* $939C: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFD6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_939F:;
    /* $939F: E2 */ maybe_trigger_vblank(2); /* NOP */
label_93A1:;
    /* $93A1: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93A3:;
    /* $93A3: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93A5:;
    /* $93A5: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_93A7:;
    /* $93A7: E2 */ maybe_trigger_vblank(2); /* NOP */
label_93A9:;
    /* $93A9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFD6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93AC:;
    /* $93AC: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7D6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93AF:;
    /* $93AF: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE4; g_cpu.C=(g_cpu.X>=0xE4)?1:0; FLAG_NZ(r&0xFF); }
label_93B1:;
    /* $93B1: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7D6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93B4:;
    /* $93B4: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93B6:;
    /* $93B6: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE5E2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93B9:;
    /* $93B9: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_93BA:;
    /* $93BA: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_93BB:;
    /* $93BB: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_93BC:;
    /* $93BC: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_93BD:;
    /* $93BD: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_93BE:;
    /* $93BE: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_93BF:;
    /* $93BF: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB8B8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_93C2:;
    /* $93C2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93C3:;
    /* $93C3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93C4:;
    /* $93C4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93C5:;
    /* $93C5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93C6:;
    /* $93C6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93C7:;
    /* $93C7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93C8:;
    /* $93C8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93C9:;
    /* $93C9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93CA:;
    /* $93CA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93CB:;
    /* $93CB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93CC:;
    /* $93CC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93CD:;
    /* $93CD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93CE:;
    /* $93CE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93CF:;
    /* $93CF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D0:;
    /* $93D0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D1:;
    /* $93D1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D2:;
    /* $93D2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D3:;
    /* $93D3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D4:;
    /* $93D4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D5:;
    /* $93D5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D6:;
    /* $93D6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D7:;
    /* $93D7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D8:;
    /* $93D8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93D9:;
    /* $93D9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93DA:;
    /* $93DA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93DB:;
    /* $93DB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93DC:;
    /* $93DC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93DD:;
    /* $93DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93DE:;
    /* $93DE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93DF:;
    /* $93DF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E0:;
    /* $93E0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E1:;
    /* $93E1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E2:;
    /* $93E2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E3:;
    /* $93E3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E4:;
    /* $93E4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E5:;
    /* $93E5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E6:;
    /* $93E6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E7:;
    /* $93E7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E8:;
    /* $93E8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93E9:;
    /* $93E9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93EA:;
    /* $93EA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93EB:;
    /* $93EB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93EC:;
    /* $93EC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93ED:;
    /* $93ED: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93EE:;
    /* $93EE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93EF:;
    /* $93EF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F0:;
    /* $93F0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F1:;
    /* $93F1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F2:;
    /* $93F2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F3:;
    /* $93F3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F4:;
    /* $93F4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F5:;
    /* $93F5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F6:;
    /* $93F6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F7:;
    /* $93F7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F8:;
    /* $93F8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93F9:;
    /* $93F9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93FA:;
    /* $93FA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93FB:;
    /* $93FB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93FC:;
    /* $93FC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93FD:;
    /* $93FD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93FE:;
    /* $93FE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_93FF:;
    /* $93FF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9400:;
    /* $9400: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9401:;
    /* $9401: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9402:;
    /* $9402: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9403:;
    /* $9403: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9404:;
    /* $9404: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9405:;
    /* $9405: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9406:;
    /* $9406: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9407:;
    /* $9407: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9408:;
    /* $9408: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9409:;
    /* $9409: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_940A:;
    /* $940A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_940B:;
    /* $940B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_940C:;
    /* $940C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_940D:;
    /* $940D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_940E:;
    /* $940E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_940F:;
    /* $940F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9410:;
    /* $9410: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9411:;
    /* $9411: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9412:;
    /* $9412: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9413:;
    /* $9413: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9414:;
    /* $9414: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9415:;
    /* $9415: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9416:;
    /* $9416: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9417:;
    /* $9417: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9418:;
    /* $9418: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9419:;
    /* $9419: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_941A:;
    /* $941A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_941B:;
    /* $941B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_941C:;
    /* $941C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_941D:;
    /* $941D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_941E:;
    /* $941E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_941F:;
    /* $941F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9420:;
    /* $9420: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9421:;
    /* $9421: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9422:;
    /* $9422: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9423:;
    /* $9423: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9424:;
    /* $9424: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9425:;
    /* $9425: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9426:;
    /* $9426: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9427:;
    /* $9427: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9428:;
    /* $9428: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9429:;
    /* $9429: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_942A:;
    /* $942A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_942B:;
    /* $942B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_942C:;
    /* $942C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_942D:;
    /* $942D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_942E:;
    /* $942E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_942F:;
    /* $942F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9430:;
    /* $9430: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9431:;
    /* $9431: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9432:;
    /* $9432: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9433:;
    /* $9433: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9434:;
    /* $9434: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9435:;
    /* $9435: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9436:;
    /* $9436: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9437:;
    /* $9437: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9438:;
    /* $9438: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9439:;
    /* $9439: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_943A:;
    /* $943A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_943B:;
    /* $943B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_943C:;
    /* $943C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_943D:;
    /* $943D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_943E:;
    /* $943E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_943F:;
    /* $943F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9440:;
    /* $9440: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9441:;
    /* $9441: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9442:;
    /* $9442: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9443:;
    /* $9443: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9444:;
    /* $9444: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9445:;
    /* $9445: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9446:;
    /* $9446: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9447:;
    /* $9447: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9448:;
    /* $9448: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9449:;
    /* $9449: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_944A:;
    /* $944A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_944B:;
    /* $944B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_944C:;
    /* $944C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_944D:;
    /* $944D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_944E:;
    /* $944E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_944F:;
    /* $944F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9450:;
    /* $9450: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9451:;
    /* $9451: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9452:;
    /* $9452: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9453:;
    /* $9453: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9454:;
    /* $9454: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9455:;
    /* $9455: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9456:;
    /* $9456: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9457:;
    /* $9457: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9458:;
    /* $9458: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9459:;
    /* $9459: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_945A:;
    /* $945A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_945B:;
    /* $945B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_945C:;
    /* $945C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_945D:;
    /* $945D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_945E:;
    /* $945E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_945F:; /* main_electric_gabyoall */
    /* $945F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9460:;
    /* $9460: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9461:;
    /* $9461: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9462:;
    /* $9462: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9463:;
    /* $9463: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9464:;
    /* $9464: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9465:;
    /* $9465: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9466:;
    /* $9466: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9467:;
    /* $9467: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9468:;
    /* $9468: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9469:;
    /* $9469: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_946A:;
    /* $946A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_946B:;
    /* $946B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_946C:;
    /* $946C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_946D:;
    /* $946D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_946E:;
    /* $946E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_946F:;
    /* $946F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9470:;
    /* $9470: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9471:;
    /* $9471: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9472:;
    /* $9472: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9473:;
    /* $9473: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9474:;
    /* $9474: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9475:;
    /* $9475: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9476:;
    /* $9476: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9477:;
    /* $9477: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9478:;
    /* $9478: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9479:;
    /* $9479: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_947A:;
    /* $947A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_947B:;
    /* $947B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_947C:;
    /* $947C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_947D:;
    /* $947D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_947E:;
    /* $947E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_947F:;
    /* $947F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9480:;
    /* $9480: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9481:;
    /* $9481: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9482:;
    /* $9482: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9483:;
    /* $9483: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9484:;
    /* $9484: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9485:;
    /* $9485: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9486:;
    /* $9486: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9487:;
    /* $9487: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9488:;
    /* $9488: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9489:;
    /* $9489: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_948A:;
    /* $948A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_948B:;
    /* $948B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_948C:;
    /* $948C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_948D:;
    /* $948D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_948E:;
    /* $948E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_948F:;
    /* $948F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9490:;
    /* $9490: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9491:;
    /* $9491: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9492:;
    /* $9492: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9493:;
    /* $9493: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9494:;
    /* $9494: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9495:;
    /* $9495: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9496:;
    /* $9496: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9497:;
    /* $9497: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9498:;
    /* $9498: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9499:;
    /* $9499: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_949A:;
    /* $949A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_949B:;
    /* $949B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_949C:;
    /* $949C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_949D:;
    /* $949D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_949E:;
    /* $949E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_949F:;
    /* $949F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A0:;
    /* $94A0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A1:;
    /* $94A1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A2:;
    /* $94A2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A3:;
    /* $94A3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A4:;
    /* $94A4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A5:;
    /* $94A5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A6:;
    /* $94A6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A7:;
    /* $94A7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A8:;
    /* $94A8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94A9:;
    /* $94A9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94AA:;
    /* $94AA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94AB:;
    /* $94AB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94AC:;
    /* $94AC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94AD:;
    /* $94AD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94AE:;
    /* $94AE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94AF:;
    /* $94AF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B0:;
    /* $94B0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B1:;
    /* $94B1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B2:;
    /* $94B2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B3:;
    /* $94B3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B4:;
    /* $94B4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B5:;
    /* $94B5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B6:;
    /* $94B6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B7:;
    /* $94B7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B8:;
    /* $94B8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94B9:;
    /* $94B9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94BA:;
    /* $94BA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94BB:;
    /* $94BB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94BC:;
    /* $94BC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94BD:;
    /* $94BD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94BE:;
    /* $94BE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94BF:;
    /* $94BF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C0:;
    /* $94C0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C1:;
    /* $94C1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C2:;
    /* $94C2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C3:;
    /* $94C3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C4:;
    /* $94C4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C5:;
    /* $94C5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C6:;
    /* $94C6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C7:;
    /* $94C7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C8:;
    /* $94C8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94C9:;
    /* $94C9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94CA:;
    /* $94CA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94CB:;
    /* $94CB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94CC:;
    /* $94CC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94CD:;
    /* $94CD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94CE:;
    /* $94CE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94CF:;
    /* $94CF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D0:;
    /* $94D0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D1:;
    /* $94D1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D2:;
    /* $94D2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D3:;
    /* $94D3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D4:;
    /* $94D4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D5:;
    /* $94D5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D6:;
    /* $94D6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D7:;
    /* $94D7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D8:;
    /* $94D8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94D9:;
    /* $94D9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94DA:;
    /* $94DA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94DB:;
    /* $94DB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94DC:;
    /* $94DC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94DD:;
    /* $94DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94DE:;
    /* $94DE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94DF:;
    /* $94DF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E0:;
    /* $94E0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E1:;
    /* $94E1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E2:;
    /* $94E2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E3:;
    /* $94E3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E4:;
    /* $94E4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E5:;
    /* $94E5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E6:;
    /* $94E6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E7:;
    /* $94E7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E8:;
    /* $94E8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94E9:;
    /* $94E9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94EA:;
    /* $94EA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94EB:;
    /* $94EB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94EC:;
    /* $94EC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94ED:;
    /* $94ED: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94EE:;
    /* $94EE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94EF:;
    /* $94EF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F0:;
    /* $94F0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F1:;
    /* $94F1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F2:;
    /* $94F2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F3:;
    /* $94F3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F4:;
    /* $94F4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F5:;
    /* $94F5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F6:;
    /* $94F6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F7:;
    /* $94F7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F8:;
    /* $94F8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94F9:;
    /* $94F9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94FA:;
    /* $94FA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94FB:;
    /* $94FB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94FC:;
    /* $94FC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94FD:;
    /* $94FD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94FE:;
    /* $94FE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_94FF:;
    /* $94FF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9500:;
    /* $9500: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9501:;
    /* $9501: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9502:;
    /* $9502: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9503:;
    /* $9503: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9504:;
    /* $9504: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9505:;
    /* $9505: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9506:;
    /* $9506: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9507:;
    /* $9507: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9508:;
    /* $9508: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9509:;
    /* $9509: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_950A:;
    /* $950A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_950B:;
    /* $950B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_950C:;
    /* $950C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_950D:;
    /* $950D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_950E:;
    /* $950E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_950F:;
    /* $950F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9510:;
    /* $9510: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9511:;
    /* $9511: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9512:;
    /* $9512: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9513:;
    /* $9513: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9514:;
    /* $9514: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9515:;
    /* $9515: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9516:;
    /* $9516: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9517:;
    /* $9517: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9518:;
    /* $9518: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9519:;
    /* $9519: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_951A:;
    /* $951A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_951B:;
    /* $951B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_951C:;
    /* $951C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_951D:;
    /* $951D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_951E:;
    /* $951E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_951F:;
    /* $951F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9520:;
    /* $9520: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9521:;
    /* $9521: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9522:;
    /* $9522: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9523:;
    /* $9523: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9524:;
    /* $9524: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9525:;
    /* $9525: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9526:;
    /* $9526: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9527:;
    /* $9527: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9528:;
    /* $9528: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9529:;
    /* $9529: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_952A:;
    /* $952A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_952B:;
    /* $952B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_952C:;
    /* $952C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_952D:;
    /* $952D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_952E:;
    /* $952E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_952F:; /* main_junk_block */
    /* $952F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9530:;
    /* $9530: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9531:;
    /* $9531: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9532:;
    /* $9532: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9533:;
    /* $9533: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9534:;
    /* $9534: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9535:;
    /* $9535: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9536:;
    /* $9536: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9537:;
    /* $9537: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9538:;
    /* $9538: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9539:;
    /* $9539: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_953A:;
    /* $953A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_953B:;
    /* $953B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_953C:;
    /* $953C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_953D:;
    /* $953D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_953E:;
    /* $953E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_953F:;
    /* $953F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9540:;
    /* $9540: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9541:;
    /* $9541: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9542:;
    /* $9542: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9543:;
    /* $9543: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9544:;
    /* $9544: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9545:;
    /* $9545: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9546:;
    /* $9546: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9547:;
    /* $9547: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9548:;
    /* $9548: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9549:;
    /* $9549: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_954A:;
    /* $954A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_954B:;
    /* $954B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_954C:;
    /* $954C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_954D:;
    /* $954D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_954E:;
    /* $954E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_954F:;
    /* $954F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9550:;
    /* $9550: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9551:;
    /* $9551: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9552:;
    /* $9552: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9553:;
    /* $9553: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9554:;
    /* $9554: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9555:;
    /* $9555: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9556:;
    /* $9556: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9557:;
    /* $9557: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9558:;
    /* $9558: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9559:;
    /* $9559: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_955A:;
    /* $955A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_955B:;
    /* $955B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_955C:;
    /* $955C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_955D:;
    /* $955D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_955E:;
    /* $955E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_955F:;
    /* $955F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9560:;
    /* $9560: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9561:;
    /* $9561: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9562:;
    /* $9562: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9563:;
    /* $9563: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9564:;
    /* $9564: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9565:;
    /* $9565: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9566:;
    /* $9566: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9567:;
    /* $9567: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9568:;
    /* $9568: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9569:;
    /* $9569: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_956A:;
    /* $956A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_956B:;
    /* $956B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_956C:;
    /* $956C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_956D:;
    /* $956D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_956E:;
    /* $956E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_956F:;
    /* $956F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9570:;
    /* $9570: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9571:;
    /* $9571: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9572:;
    /* $9572: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9573:;
    /* $9573: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9574:;
    /* $9574: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9575:;
    /* $9575: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9576:;
    /* $9576: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9577:;
    /* $9577: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9578:;
    /* $9578: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9579:;
    /* $9579: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_957A:;
    /* $957A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_957B:;
    /* $957B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_957C:;
    /* $957C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_957D:;
    /* $957D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_957E:;
    /* $957E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_957F:;
    /* $957F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9580:;
    /* $9580: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9581:;
    /* $9581: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_9583:;
    /* $9583: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9584:;
    /* $9584: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_9585:;
    /* $9585: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9587:;
    /* $9587: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x48); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9589:;
    /* $9589: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_958B:;
    /* $958B: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_958D:;
    /* $958D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_958F:;
    /* $958F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x48); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9591:;
    /* $9591: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9593:;
    /* $9593: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0404); FLAG_NZ(g_cpu.A);
label_9596:;
    /* $9596: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9598:;
    /* $9598: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_9599:;
    /* $9599: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_959B:;
    /* $959B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_959D:;
    /* $959D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_959F:;
    /* $959F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x48); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95A1:;
    /* $95A1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95A3:;
    /* $95A3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95A5:;
    /* $95A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95A7:;
    /* $95A7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x48; g_cpu.C=(g_cpu.A>=0x48)?1:0; FLAG_NZ(r&0xFF); }
label_95A9:;
    /* $95A9: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xC7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95AB:;
    /* $95AB: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_95AC:;
    /* $95AC: C7 */ maybe_trigger_vblank(5); { uint16_t a=0xC7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_95AE:;
    /* $95AE: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_95AF:;
    /* $95AF: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_95B0:;
    /* $95B0: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_95B1:;
    /* $95B1: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x474A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95B4:;
    /* $95B4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_95B5:;
    /* $95B5: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4A; FLAG_NZ(g_cpu.A);
label_95B7:;
    /* $95B7: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x48); FLAG_NZ(g_cpu.A);
label_95B9:;
    /* $95B9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x4A47 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95BC:;
    /* $95BC: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x4A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_95BE:;
    /* $95BE: 47 */ maybe_trigger_vblank(5); { uint16_t a=0xAB; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_95C0:;
    /* $95C0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xA7); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95C2:;
    /* $95C2: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95C3:;
    /* $95C3: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_95C5:;
    /* $95C5: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95C6:;
    /* $95C6: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95C7:;
    /* $95C7: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_95C9:;
    /* $95C9: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x85)?1:0; g_cpu.X=(t-0x85)&0xFF; FLAG_NZ(g_cpu.X); }
label_95CB:;
    /* $95CB: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_95CD:;
    /* $95CD: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4242); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_95D0:;
    /* $95D0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95D2:;
    /* $95D2: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95D4:;
    /* $95D4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCB); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95D6:;
    /* $95D6: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_95D8:;
    /* $95D8: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95DA:;
    /* $95DA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95DC:;
    /* $95DC: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95DE:;
    /* $95DE: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95E0:;
    /* $95E0: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_95E1:;
    /* $95E1: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_95E2:;
    /* $95E2: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_95E3:;
    /* $95E3: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0404 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_95E6:;
    /* $95E6: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xCD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_95E8:;
    /* $95E8: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBE9B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_95EB:;
    /* $95EB: CE */ maybe_trigger_vblank(6); { uint16_t a=0x9ACF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_95EE:;
    /* $95EE: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_95EF:;
    /* $95EF: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_95F0:;
    /* $95F0: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95F1:;
    /* $95F1: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x42 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_95F3:;
    /* $95F3: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95F4:;
    /* $95F4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_95B4;
    }
label_95F6:;
    /* $95F6: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x44BD + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_95F9:;
    /* $95F9: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_95FB:;
    /* $95FB: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95FC:;
    /* $95FC: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95FD:;
    /* $95FD: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95FE:;
    /* $95FE: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_95FF:;
    /* $95FF: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9600:;
    /* $9600: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x42); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9602:;
    /* $9602: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9604:;
    /* $9604: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9605:;
    /* $9605: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9607:;
    /* $9607: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9608:;
    /* $9608: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_960A:;
    /* $960A: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_960B:;
    /* $960B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_960D:;
    /* $960D: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_960E:;
    /* $960E: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9610:;
    /* $9610: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9612:;
    /* $9612: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9614:;
    /* $9614: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9616:;
    /* $9616: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9618:;
    /* $9618: D1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_961A:;
    /* $961A: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_961C:;
    /* $961C: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_961D:;
    /* $961D: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_961F:;
    /* $961F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xD5 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9621:;
    /* $9621: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9623:;
    /* $9623: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9625:;
    /* $9625: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9627:;
    /* $9627: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_9628:;
    /* $9628: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9629:;
    /* $9629: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_962A:;
    /* $962A: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_962B:;
    /* $962B: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_962C:;
    /* $962C: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_962D:;
    /* $962D: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_962E:;
    /* $962E: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_962F:;
    /* $962F: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_9630:;
    /* $9630: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xD9BE + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9633:;
    /* $9633: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xBDD9 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_9636:;
    /* $9636: 4E */ maybe_trigger_vblank(6); { uint16_t a=0x42DA; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9639:;
    /* $9639: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_963B:;
    /* $963B: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_963C:;
    /* $963C: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_963D:;
    /* $963D: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x44 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_963F:;
    /* $963F: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_9640:;
    /* $9640: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x8585 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9643:;
    /* $9643: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9645:;
    /* $9645: 85 */ maybe_trigger_vblank(3); nes_write(0x85, g_cpu.A);
label_9647:;
    /* $9647: 85 */ maybe_trigger_vblank(3); nes_write(0xDC, g_cpu.A);
label_9649:;
    /* $9649: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD2) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_964B:;
    /* $964B: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_964D:;
    /* $964D: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_964E:;
    /* $964E: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xDD) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9650:;
    /* $9650: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xD6DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9653:;
    /* $9653: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD6DF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9656:;
    /* $9656: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xE0 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9658:;
    /* $9658: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xD7 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_965A:;
    /* $965A: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_965C:;
    /* $965C: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFD6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_965F:;
    /* $965F: E2 */ maybe_trigger_vblank(2); /* NOP */
label_9661:;
    /* $9661: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9663:;
    /* $9663: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9665:;
    /* $9665: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9667:;
    /* $9667: E2 */ maybe_trigger_vblank(2); /* NOP */
label_9669:;
    /* $9669: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xDFD6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_966C:;
    /* $966C: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7D6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_966F:;
    /* $966F: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xE4; g_cpu.C=(g_cpu.X>=0xE4)?1:0; FLAG_NZ(r&0xFF); }
label_9671:;
    /* $9671: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7D6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9674:;
    /* $9674: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0xD6 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9676:;
    /* $9676: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xE5E2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_9679:;
    /* $9679: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_967A:;
    /* $967A: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_967B:;
    /* $967B: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_967C:;
    /* $967C: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_967D:;
    /* $967D: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_967E:;
    /* $967E: 9A */ maybe_trigger_vblank(2); g_cpu.S = g_cpu.X;
label_967F:;
    /* $967F: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xB8B8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_9682:;
    /* $9682: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9683:;
    /* $9683: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9684:;
    /* $9684: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9685:;
    /* $9685: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9686:;
    /* $9686: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9687:;
    /* $9687: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9688:;
    /* $9688: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9689:;
    /* $9689: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_968A:;
    /* $968A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_968B:;
    /* $968B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_968C:;
    /* $968C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_968D:;
    /* $968D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_968E:;
    /* $968E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_968F:;
    /* $968F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9690:;
    /* $9690: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9691:;
    /* $9691: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9692:;
    /* $9692: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9693:;
    /* $9693: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9694:;
    /* $9694: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9695:;
    /* $9695: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9696:;
    /* $9696: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9697:;
    /* $9697: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9698:;
    /* $9698: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9699:;
    /* $9699: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_969A:;
    /* $969A: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_969B:;
    /* $969B: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_969C:;
    /* $969C: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_969D:;
    /* $969D: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_969E:;
    /* $969E: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_969F:;
    /* $969F: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A0:;
    /* $96A0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A1:;
    /* $96A1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A2:;
    /* $96A2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A3:;
    /* $96A3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A4:;
    /* $96A4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A5:;
    /* $96A5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A6:;
    /* $96A6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A7:;
    /* $96A7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A8:;
    /* $96A8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96A9:;
    /* $96A9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96AA:;
    /* $96AA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96AB:;
    /* $96AB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96AC:;
    /* $96AC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96AD:;
    /* $96AD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96AE:;
    /* $96AE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96AF:;
    /* $96AF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B0:;
    /* $96B0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B1:;
    /* $96B1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B2:;
    /* $96B2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B3:;
    /* $96B3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B4:;
    /* $96B4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B5:;
    /* $96B5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B6:;
    /* $96B6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B7:;
    /* $96B7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B8:;
    /* $96B8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96B9:;
    /* $96B9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96BA:;
    /* $96BA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96BB:;
    /* $96BB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96BC:;
    /* $96BC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96BD:;
    /* $96BD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96BE:;
    /* $96BE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96BF:;
    /* $96BF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C0:;
    /* $96C0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C1:;
    /* $96C1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C2:;
    /* $96C2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C3:;
    /* $96C3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C4:;
    /* $96C4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C5:; /* main_yambow */
    /* $96C5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C6:;
    /* $96C6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C7:;
    /* $96C7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C8:;
    /* $96C8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96C9:;
    /* $96C9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96CA:;
    /* $96CA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96CB:;
    /* $96CB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96CC:;
    /* $96CC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96CD:;
    /* $96CD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96CE:;
    /* $96CE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96CF:;
    /* $96CF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D0:;
    /* $96D0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D1:;
    /* $96D1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D2:;
    /* $96D2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D3:;
    /* $96D3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D4:;
    /* $96D4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D5:;
    /* $96D5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D6:;
    /* $96D6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D7:;
    /* $96D7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D8:;
    /* $96D8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96D9:;
    /* $96D9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96DA:;
    /* $96DA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96DB:;
    /* $96DB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96DC:;
    /* $96DC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96DD:;
    /* $96DD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96DE:;
    /* $96DE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96DF:;
    /* $96DF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E0:;
    /* $96E0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E1:;
    /* $96E1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E2:;
    /* $96E2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E3:;
    /* $96E3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E4:;
    /* $96E4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E5:;
    /* $96E5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E6:;
    /* $96E6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E7:;
    /* $96E7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E8:;
    /* $96E8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96E9:;
    /* $96E9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96EA:;
    /* $96EA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96EB:;
    /* $96EB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96EC:;
    /* $96EC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96ED:;
    /* $96ED: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96EE:;
    /* $96EE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96EF:;
    /* $96EF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F0:;
    /* $96F0: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F1:;
    /* $96F1: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F2:;
    /* $96F2: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F3:;
    /* $96F3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F4:;
    /* $96F4: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F5:;
    /* $96F5: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F6:;
    /* $96F6: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F7:;
    /* $96F7: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F8:;
    /* $96F8: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96F9:;
    /* $96F9: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96FA:;
    /* $96FA: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96FB:;
    /* $96FB: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96FC:;
    /* $96FC: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96FD:;
    /* $96FD: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96FE:;
    /* $96FE: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_96FF:;
    /* $96FF: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_9700:;
    /* $9700: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9702:;
    /* $9702: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_9703:;
    /* $9703: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_9704:;
    /* $9704: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x1706); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2029, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9704, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_9707:;
    /* $9707: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x5C; FLAG_NZ(g_cpu.A);
label_9709:;
    /* $9709: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5C5C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_970C:;
    /* $970C: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5050 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_970F:;
    /* $970F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9710:;
    /* $9710: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9711:;
    /* $9711: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9712:;
    /* $9712: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9713:;
    /* $9713: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9714:;
    /* $9714: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_9715:;
    /* $9715: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5208 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9718:;
    /* $9718: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_9719:;
    /* $9719: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x171B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x202A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0x9719, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_971C:;
    /* $971C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0D0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_971F:;
    /* $971F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9720:;
    /* $9720: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9721:;
    /* $9721: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9723:;
    /* $9723: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x5C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9725:;
    /* $9725: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_9726:;
    /* $9726: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9728:;
    /* $9728: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0853 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_972B:;
    /* $972B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_972C:;
    /* $972C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_972D:;
    /* $972D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_972E:;
    /* $972E: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_9730:;
    /* $9730: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_9732:;
    /* $9732: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9733:;
    /* $9733: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9734:;
    /* $9734: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9735:;
    /* $9735: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9736:;
    /* $9736: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x4D); FLAG_NZ(g_cpu.A);
label_9738:;
    /* $9738: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_973A:;
    /* $973A: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x69 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_973C:;
    /* $973C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_973D:;
    /* $973D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_973E:;
    /* $973E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_973F:;
    /* $973F: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9741:;
    /* $9741: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9743:;
    /* $9743: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9744:;
    /* $9744: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_9746:;
    /* $9746: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9747:;
    /* $9747: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9748:;
    /* $9748: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9749:;
    /* $9749: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_974A:;
    /* $974A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_974B:;
    /* $974B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_974C:;
    /* $974C: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x1D16 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_974F:;
    /* $974F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1722 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9752:;
    /* $9752: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x22 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9754:;
    /* $9754: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2216 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9757:;
    /* $9757: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0808 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_975A:;
    /* $975A: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1608 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_975D:;
    /* $975D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_975E:;
    /* $975E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x051D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9761:;
    /* $9761: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x0E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9763:;
    /* $9763: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9765:;
    /* $9765: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x27); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9767:;
    /* $9767: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0C27); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_976A:;
    /* $976A: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0E26; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_976D:;
    /* $976D: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x27; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_976F:;
    /* $976F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9772:;
    /* $9772: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9773:;
    /* $9773: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_9774:;
    /* $9774: 5A */ maybe_trigger_vblank(2); /* NOP */
label_9775:;
    /* $9775: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0x0808 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9778:;
    /* $9778: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_977A:;
    /* $977A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_977C:;
    /* $977C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0D0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_977F:;
    /* $977F: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0A0A); FLAG_NZ(g_cpu.A);
label_9782:;
    /* $9782: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_9784:;
    /* $9784: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9785:;
    /* $9785: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9786:;
    /* $9786: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_9788:;
    /* $9788: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x26) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_978A:;
    /* $978A: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x0C; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_978C:;
    /* $978C: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x90; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_978E:;
    /* $978E: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x5226; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9791:;
    /* $9791: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x45 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9793:;
    /* $9793: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9795:;
    /* $9795: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9797:;
    /* $9797: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9799:;
    /* $9799: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x05; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_979B:;
    /* $979B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x1F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_979D:;
    /* $979D: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_979F:;
    /* $979F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x27); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_97A1:;
    /* $97A1: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2691); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_97A4:;
    /* $97A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2726; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_97A7:;
    /* $97A7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_97FF; }
label_97A9:;
    /* $97A9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x3D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97AB:;
    /* $97AB: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x3D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97AD:;
    /* $97AD: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x3D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97AF:;
    /* $97AF: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x4F + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97B1:;
    /* $97B1: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x4E4E; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_97B4:;
    /* $97B4: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_97B5:;
    /* $97B5: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x47) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_97B7:;
    /* $97B7: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x5701 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_97BA:;
    /* $97BA: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x57) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97BC:;
    /* $97BC: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_97BD:;
    /* $97BD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_97BE:;
    /* $97BE: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_97BF:;
    /* $97BF: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0808 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97C2:;
    /* $97C2: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0819 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97C5:;
    /* $97C5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_97C6:;
    /* $97C6: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7019 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97C9:;
    /* $97C9: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x78; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_97CB:;
    /* $97CB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x6D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_97CD:;
    /* $97CD: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x0201); nes_trace_indirect_jump(0x97CD, _jt); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
label_97FF:;
    /* $97FF: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x63; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_9801:;
    /* $9801: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x6C6D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9804:;
    /* $9804: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9805:;
    /* $9805: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_9806:;
    /* $9806: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9807:;
    /* $9807: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_9808:;
    /* $9808: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_980A:;
    /* $980A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_980C:;
    /* $980C: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x64) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_980E:;
    /* $980E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9810:;
    /* $9810: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x03 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9812:;
    /* $9812: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_9814:;
    /* $9814: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9815:;
    /* $9815: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9817:;
    /* $9817: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x3C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9819:;
    /* $9819: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_981A:;
    /* $981A: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x393A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_981D:;
    /* $981D: 3A */ maybe_trigger_vblank(2); /* NOP */
label_981E:;
    /* $981E: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0308 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9821:;
    /* $9821: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9823:;
    /* $9823: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x3C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9825:;
    /* $9825: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9826:;
    /* $9826: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3908 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9829:;
    /* $9829: 3A */ maybe_trigger_vblank(2); /* NOP */
label_982A:;
    /* $982A: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x013A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_982D:;
    /* $982D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_982E:;
    /* $982E: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0119 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9831:;
    /* $9831: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x1919 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_9834:;
    /* $9834: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9835:;
    /* $9835: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9836:;
    /* $9836: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x661A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9839:;
    /* $9839: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x61; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_983B:;
    /* $983B: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_983C:;
    /* $983C: 66 */ maybe_trigger_vblank(5); { uint16_t a=0x71; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_983E:;
    /* $983E: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x79) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9840:;
    /* $9840: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0808 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9843:;
    /* $9843: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9844:;
    /* $9844: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x661A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9847:;
    /* $9847: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x24) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_9849:;
    /* $9849: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_984B:;
    /* $984B: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x7911); FLAG_NZ(g_cpu.A);
label_984E:;
    /* $984E: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x341B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9851:;
    /* $9851: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x19 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9853:;
    /* $9853: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x6261 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9856:;
    /* $9856: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9858:;
    /* $9858: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_985A:;
    /* $985A: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x52; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_985C:;
    /* $985C: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_985E:;
    /* $985E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9860:;
    /* $9860: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9861:;
    /* $9861: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9862:;
    /* $9862: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9895; }
label_9864:;
    /* $9864: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x35 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_9866:;
    /* $9866: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_9867:;
    /* $9867: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9869:;
    /* $9869: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_986A:;
    /* $986A: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_986B:;
    /* $986B: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_986D:;
    /* $986D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_986E:;
    /* $986E: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x381B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9871:;
    /* $9871: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x19; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_9873:;
    /* $9873: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x4647 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_9876:;
    /* $9876: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x471B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9879:;
    /* $9879: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x1B19 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_987C:;
    /* $987C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_987D:;
    /* $987D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_987E:;
    /* $987E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_987F:;
    /* $987F: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_9889; }
label_9881:;
    /* $9881: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9882:;
    /* $9882: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x4F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9884:;
    /* $9884: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_9886:;
    /* $9886: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x084F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_9889:;
    /* $9889: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_988A:;
    /* $988A: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x3F4F; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_988D:;
    /* $988D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_988E:;
    /* $988E: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_988F:;
    /* $988F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_9890:;
    /* $9890: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9890); return;
label_9891:;
    /* $9891: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9891); return;
label_9892:;
    /* $9892: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9892); return;
label_9893:;
    /* $9893: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0x9893; g_rti_bank = 0; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_9894:;
    /* $9894: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9894); return;
label_9895:;
    /* $9895: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9895); return;
}

void func_8A01_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A01_b0");
#endif
label_8A01:;
    /* $8A01: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8A03:;
    /* $8A03: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A05:;
    /* $8A05: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_8A07:;
    /* $8A07: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8A09:;
    /* $8A09: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_8A0B:;
    /* $8A0B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_8A0D:;
    /* $8A0D: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0F0E); FLAG_NZ(g_cpu.A);
label_8A10:;
    /* $8A10: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_8A23; }
label_8A12:;
    /* $8A12: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_8A13:;
    /* $8A13: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x20; FLAG_NZ(g_cpu.Y);
label_8A15:;
    /* $8A15: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8A16:;
    /* $8A16: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A17:;
    /* $8A17: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8A19:;
    /* $8A19: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x8080); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A1C:;
    /* $8A1C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8A1C); return;
label_8A1D:;
    /* $8A1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8A1D); return;
label_8A1E:;
    /* $8A1E: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8A1F:;
    /* $8A1F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8A20:;
    /* $8A20: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8A20); return;
label_8A21:;
    /* $8A21: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8A22:;
    /* $8A22: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8A22); return;
label_8A23:;
    /* $8A23: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8A24:;
    /* $8A24: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8A24); return;
}
