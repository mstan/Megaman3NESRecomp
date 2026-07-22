/* mega-man-3_full_bank07_part05.c — PRG bank 7 function bodies (sub-part 5).
 * STANDALONE translation unit — compiled independently (in
 * parallel with every other bank part/sub-part and the
 * umbrella mega-man-3_full.c). Do not compile as part of another TU or
 * edit directly; the source of truth is the recompiler's
 * code_generator.c. Renamed to drop the _partNN suffix if
 * this bank turned out to fit in a single sub-part. */

#include "mega-man-3_full_decls.h"

void func_A34A_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A34A_b7");
#endif
label_A34A:;
    /* $A34A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A34B:;
    /* $A34B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA34B); return;
}

void func_A35D_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A35D_b7");
#endif
label_A35D:;
    /* $A35D: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A35E:;
    /* $A35E: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0618 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A361:;
    /* $A361: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_A363:;
    /* $A363: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0B1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A366:;
    /* $A366: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x19); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A368:;
    /* $A368: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A36A:;
    /* $A36A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A36C:;
    /* $A36C: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A36D:;
    /* $A36D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A36F:;
    /* $A36F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_A371:;
    /* $A371: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A372:;
    /* $A372: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A374:;
    /* $A374: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x141E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A378:;
    /* $A378: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A379:;
    /* $A379: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A11); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A37C:;
    /* $A37C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A37E:;
    /* $A37E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0B05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A381:;
    /* $A381: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A382:;
    /* $A382: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A384:;
    /* $A384: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A385:;
    /* $A385: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A386:;
    /* $A386: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x070B); FLAG_NZ(g_cpu.A);
label_A389:;
    /* $A389: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A38A:;
    /* $A38A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A38C:;
    /* $A38C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1214; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A38F:;
    /* $A38F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A391:;
    /* $A391: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x039B), 7); return; }
label_A393:;
    /* $A393: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x191C); FLAG_NZ(g_cpu.A);
label_A396:;
    /* $A396: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x120C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A399:;
    /* $A399: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x24 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A39C:;
    /* $A39C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0A11 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A39F:;
    /* $A39F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3A1:;
    /* $A3A1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0913 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3A4:;
    /* $A3A4: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1E16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3A7:;
    /* $A3A7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3AA:;
    /* $A3AA: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3AB:;
    /* $A3AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A3AD:;
    /* $A3AD: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3AF:;
    /* $A3AF: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3B1:;
    /* $A3B1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3B3:;
    /* $A3B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x150A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3B6:;
    /* $A3B6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A3B7:;
    /* $A3B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0A1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3BA:;
    /* $A3BA: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3BC:;
    /* $A3BC: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3BF:;
    /* $A3BF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A3C1:;
    /* $A3C1: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1213 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3C4:;
    /* $A3C4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3C5:;
    /* $A3C5: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3C7:;
    /* $A3C7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3C9:;
    /* $A3C9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A3CA:;
    /* $A3CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A3CB:;
    /* $A3CB: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3CD:;
    /* $A3CD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3CE:;
    /* $A3CE: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A3D0:;
    /* $A3D0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A3D1:;
    /* $A3D1: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A3D3:;
    /* $A3D3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3D5:;
    /* $A3D5: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0E07 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3D8:;
    /* $A3D8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3DB:;
    /* $A3DB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3DE:;
    /* $A3DE: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3E1:;
    /* $A3E1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x231E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3E4:;
    /* $A3E4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1214 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3E7:;
    /* $A3E7: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0E07 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3EA:;
    /* $A3EA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F0:;
    /* $A3F0: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F3:;
    /* $A3F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3F5:;
    /* $A3F5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3F7:;
    /* $A3F7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F9:;
    /* $A3F9: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FC:;
    /* $A3FC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A3FD:;
    /* $A3FD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3FE:;
    /* $A3FE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A401:;
    /* $A401: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A404:;
    /* $A404: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A405:;
    /* $A405: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A407:;
    /* $A407: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A409:;
    /* $A409: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A40A:;
    /* $A40A: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A40C:;
    /* $A40C: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A40E:;
    /* $A40E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A410:;
    /* $A410: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0A16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A413:;
    /* $A413: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x220A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A416:;
    /* $A416: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A417:;
    /* $A417: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A41A:;
    /* $A41A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A41C:;
    /* $A41C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x23 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A41E:;
    /* $A41E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A41F:;
    /* $A41F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A421:;
    /* $A421: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A423:;
    /* $A423: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1E13); FLAG_NZ(g_cpu.A);
label_A426:;
    /* $A426: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x13 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A428:;
    /* $A428: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A429:;
    /* $A429: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A42C:;
    /* $A42C: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A42E:;
    /* $A42E: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A430:;
    /* $A430: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x050A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A433:;
    /* $A433: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A435:;
    /* $A435: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A437:;
    /* $A437: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43A:;
    /* $A43A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43C:;
    /* $A43C: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A43F:;
    /* $A43F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A441:;
    /* $A441: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A443:;
    /* $A443: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A445:;
    /* $A445: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A448:;
    /* $A448: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A449:;
    /* $A449: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1D0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A44C:;
    /* $A44C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A44F:;
    /* $A44F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A451:;
    /* $A451: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A453:;
    /* $A453: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A454:;
    /* $A454: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A457:;
    /* $A457: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A458:;
    /* $A458: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A45A:;
    /* $A45A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A45C:;
    /* $A45C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1E22); FLAG_NZ(g_cpu.A);
label_A45F:;
    /* $A45F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A461:;
    /* $A461: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A464:;
    /* $A464: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A466:;
    /* $A466: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A469:;
    /* $A469: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A46C:;
    /* $A46C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A46D:;
    /* $A46D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0A1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A470:;
    /* $A470: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A472:;
    /* $A472: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A475:;
    /* $A475: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A477:;
    /* $A477: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A479:;
    /* $A479: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A47B:;
    /* $A47B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x047D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0D0A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA47B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A47E:;
    /* $A47E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A480:;
    /* $A480: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A483:;
    /* $A483: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A484:;
    /* $A484: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A486:;
    /* $A486: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A489:;
    /* $A489: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A48C:;
    /* $A48C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0F12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A48F:;
    /* $A48F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A491:;
    /* $A491: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A494:;
    /* $A494: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A495:;
    /* $A495: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A497:;
    /* $A497: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x240E); FLAG_NZ(g_cpu.A);
label_A49A:;
    /* $A49A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A49E:;
    /* $A49E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4A1:;
    /* $A4A1: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A3:;
    /* $A4A3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x04C2), 7); return; }
label_A4A5:;
    /* $A4A5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4A6:;
    /* $A4A6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4A8:;
    /* $A4A8: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4AB:;
    /* $A4AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4AD:;
    /* $A4AD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4AE:;
    /* $A4AE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4B1:;
    /* $A4B1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B3:;
    /* $A4B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x130A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4B6:;
    /* $A4B6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B8:;
    /* $A4B8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4B9:;
    /* $A4B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4BA:;
    /* $A4BA: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4BD:;
    /* $A4BD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1824; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C3:;
    /* $A4C3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4C5:;
    /* $A4C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C7:;
    /* $A4C7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1518 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CA:;
    /* $A4CA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_A4CC:;
    /* $A4CC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4CD:;
    /* $A4CD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D1:;
    /* $A4D1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4D4:;
    /* $A4D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E23 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4D7:;
    /* $A4D7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4D9:;
    /* $A4D9: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4DB:;
    /* $A4DB: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E14); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4DE:;
    /* $A4DE: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4DF:;
    /* $A4DF: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x141E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E2:;
    /* $A4E2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1124; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E5:;
    /* $A4E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4E6:;
    /* $A4E6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E8:;
    /* $A4E8: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0B19 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4EB:;
    /* $A4EB: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4ED:;
    /* $A4ED: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F0:;
    /* $A4F0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4F2:;
    /* $A4F2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4F3:;
    /* $A4F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F5:;
    /* $A4F5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F8:;
    /* $A4F8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B08 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FB:;
    /* $A4FB: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4FE:;
    /* $A4FE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A501:;
    /* $A501: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1424 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A504:;
    /* $A504: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A505:;
    /* $A505: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A507:;
    /* $A507: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A508:;
    /* $A508: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B09 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50B:;
    /* $A50B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50D:;
    /* $A50D: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A510:;
    /* $A510: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A511:;
    /* $A511: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A513:;
    /* $A513: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A515:;
    /* $A515: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A517:;
    /* $A517: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51C:;
    /* $A51C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51F:;
    /* $A51F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A520:;
    /* $A520: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A524:;
    /* $A524: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A527:;
    /* $A527: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A529:;
    /* $A529: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52B:;
    /* $A52B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52F:;
    /* $A52F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x240A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A533:;
    /* $A533: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A535:;
    /* $A535: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A539:;
    /* $A539: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_A53B:;
    /* $A53B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1017 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A53E:;
    /* $A53E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53F:;
    /* $A53F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A541:;
    /* $A541: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0543); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x120A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA541, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A544:;
    /* $A544: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A546:;
    /* $A546: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x111C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A549:;
    /* $A549: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A54A:;
    /* $A54A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54C:;
    /* $A54C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2412; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54F:;
    /* $A54F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A551:;
    /* $A551: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A554:;
    /* $A554: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_A556:;
    /* $A556: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x056C), 7); return; }
label_A558:;
    /* $A558: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A55B:;
    /* $A55B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A55E:;
    /* $A55E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A561:;
    /* $A561: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A562:;
    /* $A562: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1612 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A565:;
    /* $A565: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A566:;
    /* $A566: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B18 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A569:;
    /* $A569: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A56A:;
    /* $A56A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A56D:;
    /* $A56D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A572:;
    /* $A572: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A574:;
    /* $A574: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A575:;
    /* $A575: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A578:;
    /* $A578: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D08); FLAG_NZ(g_cpu.A);
label_A57B:;
    /* $A57B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57D:;
    /* $A57D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A580:;
    /* $A580: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A584:;
    /* $A584: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x141E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A588:;
    /* $A588: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A589:;
    /* $A589: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1305; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A58C:;
    /* $A58C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1811 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C12 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A594:;
    /* $A594: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A597:;
    /* $A597: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A598:;
    /* $A598: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A599:;
    /* $A599: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05BB), 7); return; }
label_A59D:;
    /* $A59D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5A0:;
    /* $A5A0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5AC:;
    /* $A5AC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5AD:;
    /* $A5AD: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AF:;
    /* $A5AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B0:;
    /* $A5B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B1:;
    /* $A5B1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5B4:;
    /* $A5B4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B5:;
    /* $A5B5: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5B7:;
    /* $A5B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1E0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BA:;
    /* $A5BA: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BC:;
    /* $A5BC: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BF:;
    /* $A5BF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5C0:;
    /* $A5C0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5C2:;
    /* $A5C2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CF), 7); return; }
label_A5C5:;
    /* $A5C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5C7:;
    /* $A5C7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C9:;
    /* $A5C9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x16; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CB:;
    /* $A5CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5CE:;
    /* $A5CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2418 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D1:;
    /* $A5D1: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5D2:;
    /* $A5D2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D4:;
    /* $A5D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x170E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5D7:;
    /* $A5D7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1609); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5DA:;
    /* $A5DA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x261C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DD:;
    /* $A5DD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E0:;
    /* $A5E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1216 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E6:;
    /* $A5E6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E8:;
    /* $A5E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A609; }
label_A5EB:;
    /* $A5EB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5EF:;
    /* $A5EF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1819; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5F5:;
    /* $A5F5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x070B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5FA:;
    /* $A5FA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5FB:;
    /* $A5FB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0E11 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FE:;
    /* $A5FE: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A600:; /* top_spin_damage_table */
    /* $A600: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0117; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A603:;
    /* $A603: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A605:;
    /* $A605: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A607:;
    /* $A607: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A609:;
    /* $A609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A60B:;
    /* $A60B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A60C:;
    /* $A60C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A611:;
    /* $A611: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A614:;
    /* $A614: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:; return;
label_A6AC:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6CF:; return;
label_A6D1:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A701:; return;
label_A703:; return;
label_A706:; return;
label_A709:; return;
label_A70B:; return;
label_A70D:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A727:; return;
label_A729:; return;
label_A72B:; return;
label_A72D:; return;
label_A72F:; return;
label_A731:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75E:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76D:; return;
label_A76F:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A779:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A794:; return;
label_A797:; return;
label_A799:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B2:; return;
label_A7B3:; return;
label_A7B5:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C3:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D6:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E6:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7EF:; return;
label_A7F1:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7F9:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A810:; return;
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
label_A81B:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A83F:; return;
label_A840:; return;
label_A842:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A852:; return;
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
label_A864:; return;
label_A865:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86E:; return;
label_A86F:; return;
label_A871:; return;
label_A874:; return;
label_A875:; return;
label_A877:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87D:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A883:; return;
label_A886:; return;
label_A887:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8AA:; return;
label_A8AB:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B2:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D4:; return;
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
label_A8E3:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90E:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92B:; return;
label_A92D:; return;
label_A92E:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A940:; return;
label_A941:; return;
label_A944:; return;
label_A947:; return;
label_A949:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97B:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A989:; return;
label_A98B:; return;
label_A98D:; return;
label_A98E:; return;
label_A98F:; return;
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
label_A99A:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C9:; return;
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
label_A9E3:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA24:; return;
label_AA25:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA38:; return;
label_AA39:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA44:; return;
label_AA45:; return;
label_AA46:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA82:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE9:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB07:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB23:; return;
label_AB26:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB90:; return;
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
label_ABA3:; return;
label_ABA5:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB1:; return;
label_ABB3:; return;
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
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
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
label_ABE3:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABF0:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC22:; return;
label_AC24:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
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
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
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
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
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
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD16:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD37:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD46:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
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
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8B:; return;
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
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
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
label_ADC1:; return;
label_ADC3:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE24:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4C:; return;
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
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE87:; return;
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
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA2:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCE:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEB:; return;
label_AFED:; return;
label_AFF0:; return;
label_AFF3:; return;
label_AFF6:; return;
label_AFF9:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B002:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00C:; return;
label_B00D:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B019:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B021:; return;
label_B023:; return;
label_B025:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03C:; return;
label_B03F:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B051:; return;
label_B053:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B061:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06E:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B07A:; return;
label_B07D:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B089:; return;
label_B08C:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10E:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12B:; return;
label_B12D:; return;
}

void func_A3D6_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A3E7;
    }
label_A3D6:;
    /* $A3D6: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3D8:;
    /* $A3D8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3DB:;
    /* $A3DB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3DE:;
    /* $A3DE: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3E1:;
    /* $A3E1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x231E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3E4:;
    /* $A3E4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1214 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3E7:;
    /* $A3E7: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0E07 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3EA:;
    /* $A3EA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F0:;
    /* $A3F0: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F3:;
    /* $A3F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3F5:;
    /* $A3F5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3F7:;
    /* $A3F7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F9:;
    /* $A3F9: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FC:;
    /* $A3FC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A3FD:;
    /* $A3FD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3FE:;
    /* $A3FE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A401:;
    /* $A401: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A404:;
    /* $A404: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A405:;
    /* $A405: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A407:;
    /* $A407: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A409:;
    /* $A409: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A40A:;
    /* $A40A: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A40C:;
    /* $A40C: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A40E:;
    /* $A40E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A410:;
    /* $A410: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0A16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A413:;
    /* $A413: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x220A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A416:;
    /* $A416: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A417:;
    /* $A417: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A41A:;
    /* $A41A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A41C:;
    /* $A41C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x23 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A41E:;
    /* $A41E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A41F:;
    /* $A41F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A421:;
    /* $A421: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A423:;
    /* $A423: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1E13); FLAG_NZ(g_cpu.A);
label_A426:;
    /* $A426: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x13 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A428:;
    /* $A428: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A429:;
    /* $A429: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A42C:;
    /* $A42C: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A42E:;
    /* $A42E: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A430:;
    /* $A430: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x050A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A433:;
    /* $A433: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A435:;
    /* $A435: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A437:;
    /* $A437: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43A:;
    /* $A43A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43C:;
    /* $A43C: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A43F:;
    /* $A43F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A441:;
    /* $A441: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A443:;
    /* $A443: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A445:;
    /* $A445: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A448:;
    /* $A448: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A449:;
    /* $A449: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1D0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A44C:;
    /* $A44C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A44F:;
    /* $A44F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A451:;
    /* $A451: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A453:;
    /* $A453: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A454:;
    /* $A454: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A457:;
    /* $A457: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A458:;
    /* $A458: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A45A:;
    /* $A45A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A45C:;
    /* $A45C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1E22); FLAG_NZ(g_cpu.A);
label_A45F:;
    /* $A45F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A461:;
    /* $A461: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A464:;
    /* $A464: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A466:;
    /* $A466: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A469:;
    /* $A469: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A46C:;
    /* $A46C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A46D:;
    /* $A46D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0A1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A470:;
    /* $A470: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A472:;
    /* $A472: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A475:;
    /* $A475: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A477:;
    /* $A477: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A479:;
    /* $A479: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A47B:;
    /* $A47B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x047D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0D0A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA47B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A47E:;
    /* $A47E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A480:;
    /* $A480: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A483:;
    /* $A483: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A484:;
    /* $A484: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A486:;
    /* $A486: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A489:;
    /* $A489: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A48C:;
    /* $A48C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0F12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A48F:;
    /* $A48F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A491:;
    /* $A491: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A494:;
    /* $A494: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A495:;
    /* $A495: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A497:;
    /* $A497: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x240E); FLAG_NZ(g_cpu.A);
label_A49A:;
    /* $A49A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A49E:;
    /* $A49E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4A1:;
    /* $A4A1: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A3:;
    /* $A4A3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x04C2), 7); return; }
label_A4A5:;
    /* $A4A5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4A6:;
    /* $A4A6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4A8:;
    /* $A4A8: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4AB:;
    /* $A4AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4AD:;
    /* $A4AD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4AE:;
    /* $A4AE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4B1:;
    /* $A4B1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B3:;
    /* $A4B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x130A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4B6:;
    /* $A4B6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B8:;
    /* $A4B8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4B9:;
    /* $A4B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4BA:;
    /* $A4BA: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4BD:;
    /* $A4BD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1824; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C3:;
    /* $A4C3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4C5:;
    /* $A4C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C7:;
    /* $A4C7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1518 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CA:;
    /* $A4CA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_A4CC:;
    /* $A4CC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4CD:;
    /* $A4CD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D1:;
    /* $A4D1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4D4:;
    /* $A4D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E23 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4D7:;
    /* $A4D7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4D9:;
    /* $A4D9: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4DB:;
    /* $A4DB: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E14); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4DE:;
    /* $A4DE: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4DF:;
    /* $A4DF: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x141E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E2:;
    /* $A4E2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1124; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E5:;
    /* $A4E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4E6:;
    /* $A4E6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E8:;
    /* $A4E8: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0B19 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4EB:;
    /* $A4EB: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4ED:;
    /* $A4ED: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F0:;
    /* $A4F0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4F2:;
    /* $A4F2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4F3:;
    /* $A4F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F5:;
    /* $A4F5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F8:;
    /* $A4F8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B08 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FB:;
    /* $A4FB: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4FE:;
    /* $A4FE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A501:;
    /* $A501: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1424 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A504:;
    /* $A504: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A505:;
    /* $A505: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A507:;
    /* $A507: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A508:;
    /* $A508: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B09 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50B:;
    /* $A50B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50D:;
    /* $A50D: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A510:;
    /* $A510: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A511:;
    /* $A511: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A513:;
    /* $A513: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A515:;
    /* $A515: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A517:;
    /* $A517: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51C:;
    /* $A51C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51F:;
    /* $A51F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A520:;
    /* $A520: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A524:;
    /* $A524: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A527:;
    /* $A527: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A529:;
    /* $A529: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52B:;
    /* $A52B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52F:;
    /* $A52F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x240A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A533:;
    /* $A533: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A535:;
    /* $A535: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A539:;
    /* $A539: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_A53B:;
    /* $A53B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1017 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A53E:;
    /* $A53E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53F:;
    /* $A53F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A541:;
    /* $A541: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0543); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x120A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA541, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A544:;
    /* $A544: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A546:;
    /* $A546: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x111C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A549:;
    /* $A549: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A54A:;
    /* $A54A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54C:;
    /* $A54C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2412; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54F:;
    /* $A54F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A551:;
    /* $A551: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A554:;
    /* $A554: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_A556:;
    /* $A556: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x056C), 7); return; }
label_A558:;
    /* $A558: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A55B:;
    /* $A55B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A55E:;
    /* $A55E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A561:;
    /* $A561: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A562:;
    /* $A562: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1612 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A565:;
    /* $A565: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A566:;
    /* $A566: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B18 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A569:;
    /* $A569: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A56A:;
    /* $A56A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A56D:;
    /* $A56D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A572:;
    /* $A572: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A574:;
    /* $A574: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A575:;
    /* $A575: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A578:;
    /* $A578: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D08); FLAG_NZ(g_cpu.A);
label_A57B:;
    /* $A57B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57D:;
    /* $A57D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A580:;
    /* $A580: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A584:;
    /* $A584: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x141E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A588:;
    /* $A588: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A589:;
    /* $A589: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1305; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A58C:;
    /* $A58C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1811 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C12 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A594:;
    /* $A594: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A597:;
    /* $A597: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A598:;
    /* $A598: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A599:;
    /* $A599: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05BB), 7); return; }
label_A59D:;
    /* $A59D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5A0:;
    /* $A5A0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5AC:;
    /* $A5AC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5AD:;
    /* $A5AD: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AF:;
    /* $A5AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B0:;
    /* $A5B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B1:;
    /* $A5B1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5B4:;
    /* $A5B4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B5:;
    /* $A5B5: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5B7:;
    /* $A5B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1E0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BA:;
    /* $A5BA: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BC:;
    /* $A5BC: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BF:;
    /* $A5BF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5C0:;
    /* $A5C0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5C2:;
    /* $A5C2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CF), 7); return; }
label_A5C5:;
    /* $A5C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5C7:;
    /* $A5C7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C9:;
    /* $A5C9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x16; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CB:;
    /* $A5CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5CE:;
    /* $A5CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2418 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D1:;
    /* $A5D1: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5D2:;
    /* $A5D2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D4:;
    /* $A5D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x170E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5D7:;
    /* $A5D7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1609); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5DA:;
    /* $A5DA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x261C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DD:;
    /* $A5DD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E0:;
    /* $A5E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1216 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E6:;
    /* $A5E6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E8:;
    /* $A5E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A609; }
label_A5EB:;
    /* $A5EB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5EF:;
    /* $A5EF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1819; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5F5:;
    /* $A5F5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x070B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5FA:;
    /* $A5FA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5FB:;
    /* $A5FB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0E11 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FE:;
    /* $A5FE: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A600:; /* top_spin_damage_table */
    /* $A600: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0117; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A603:;
    /* $A603: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A605:;
    /* $A605: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A607:;
    /* $A607: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A609:;
    /* $A609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A60B:;
    /* $A60B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A60C:;
    /* $A60C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A611:;
    /* $A611: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A614:;
    /* $A614: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:; return;
label_A6AC:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6CF:; return;
label_A6D1:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A701:; return;
label_A703:; return;
label_A706:; return;
label_A709:; return;
label_A70B:; return;
label_A70D:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A727:; return;
label_A729:; return;
label_A72B:; return;
label_A72D:; return;
label_A72F:; return;
label_A731:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75E:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76D:; return;
label_A76F:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A779:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A794:; return;
label_A797:; return;
label_A799:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B2:; return;
label_A7B3:; return;
label_A7B5:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C3:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D6:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E6:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7EF:; return;
label_A7F1:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7F9:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A810:; return;
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
label_A81B:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A83F:; return;
label_A840:; return;
label_A842:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A852:; return;
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
label_A864:; return;
label_A865:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86E:; return;
label_A86F:; return;
label_A871:; return;
label_A874:; return;
label_A875:; return;
label_A877:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87D:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A883:; return;
label_A886:; return;
label_A887:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8AA:; return;
label_A8AB:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B2:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D4:; return;
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
label_A8E3:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90E:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92B:; return;
label_A92D:; return;
label_A92E:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A940:; return;
label_A941:; return;
label_A944:; return;
label_A947:; return;
label_A949:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97B:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A989:; return;
label_A98B:; return;
label_A98D:; return;
label_A98E:; return;
label_A98F:; return;
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
label_A99A:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C9:; return;
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
label_A9E3:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA24:; return;
label_AA25:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA38:; return;
label_AA39:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA44:; return;
label_AA45:; return;
label_AA46:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA82:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE9:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB07:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB23:; return;
label_AB26:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB90:; return;
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
label_ABA3:; return;
label_ABA5:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB1:; return;
label_ABB3:; return;
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
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
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
label_ABE3:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABF0:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC22:; return;
label_AC24:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
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
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
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
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
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
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD16:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD37:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD46:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
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
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8B:; return;
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
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
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
label_ADC1:; return;
label_ADC3:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE24:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4C:; return;
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
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE87:; return;
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
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA2:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCE:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEB:; return;
label_AFED:; return;
label_AFF0:; return;
label_AFF3:; return;
label_AFF6:; return;
label_AFF9:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B002:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00C:; return;
label_B00D:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B019:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B021:; return;
label_B023:; return;
label_B025:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03C:; return;
label_B03F:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B051:; return;
label_B053:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B061:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06E:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B07A:; return;
label_B07D:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B089:; return;
label_B08C:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10E:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12B:; return;
label_B12D:; return;
label_B130:; return;
label_B133:; return;
label_B136:; return;
label_B139:; return;
label_B13C:; return;
label_B13F:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B158:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B16A:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B182:; return;
label_B184:; return;
label_B186:; return;
label_B188:; return;
label_B18A:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
}

void func_A3D6_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3D6_b7");
#endif
    func_A3D6_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3E7_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3E7_b7");
#endif
    func_A3D6_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A42D_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A42D_b7");
#endif
label_A42D:;
    /* $A42D: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A42E:;
    /* $A42E: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A430:;
    /* $A430: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x050A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A433:;
    /* $A433: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A435:;
    /* $A435: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A437:;
    /* $A437: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43A:;
    /* $A43A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43C:;
    /* $A43C: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A43F:;
    /* $A43F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A441:;
    /* $A441: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A443:;
    /* $A443: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A445:;
    /* $A445: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A448:;
    /* $A448: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A449:;
    /* $A449: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1D0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A44C:;
    /* $A44C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A44F:;
    /* $A44F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A451:;
    /* $A451: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A453:;
    /* $A453: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A454:;
    /* $A454: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A457:;
    /* $A457: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A458:;
    /* $A458: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A45A:;
    /* $A45A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A45C:;
    /* $A45C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1E22); FLAG_NZ(g_cpu.A);
label_A45F:;
    /* $A45F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A461:;
    /* $A461: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A464:;
    /* $A464: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A466:;
    /* $A466: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A469:;
    /* $A469: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A46C:;
    /* $A46C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A46D:;
    /* $A46D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0A1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A470:;
    /* $A470: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A472:;
    /* $A472: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A475:;
    /* $A475: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A477:;
    /* $A477: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A479:;
    /* $A479: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A47B:;
    /* $A47B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x047D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0D0A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA47B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A47E:;
    /* $A47E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A480:;
    /* $A480: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A483:;
    /* $A483: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A484:;
    /* $A484: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A486:;
    /* $A486: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A489:;
    /* $A489: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A48C:;
    /* $A48C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0F12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A48F:;
    /* $A48F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A491:;
    /* $A491: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A494:;
    /* $A494: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A495:;
    /* $A495: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A497:;
    /* $A497: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x240E); FLAG_NZ(g_cpu.A);
label_A49A:;
    /* $A49A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A49E:;
    /* $A49E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4A1:;
    /* $A4A1: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A3:;
    /* $A4A3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x04C2), 7); return; }
label_A4A5:;
    /* $A4A5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4A6:;
    /* $A4A6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4A8:;
    /* $A4A8: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4AB:;
    /* $A4AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4AD:;
    /* $A4AD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4AE:;
    /* $A4AE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4B1:;
    /* $A4B1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B3:;
    /* $A4B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x130A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4B6:;
    /* $A4B6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B8:;
    /* $A4B8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4B9:;
    /* $A4B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4BA:;
    /* $A4BA: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4BD:;
    /* $A4BD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1824; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C3:;
    /* $A4C3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4C5:;
    /* $A4C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C7:;
    /* $A4C7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1518 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CA:;
    /* $A4CA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_A4CC:;
    /* $A4CC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4CD:;
    /* $A4CD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D1:;
    /* $A4D1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4D4:;
    /* $A4D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E23 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4D7:;
    /* $A4D7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4D9:;
    /* $A4D9: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4DB:;
    /* $A4DB: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E14); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4DE:;
    /* $A4DE: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4DF:;
    /* $A4DF: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x141E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E2:;
    /* $A4E2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1124; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E5:;
    /* $A4E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4E6:;
    /* $A4E6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E8:;
    /* $A4E8: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0B19 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4EB:;
    /* $A4EB: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4ED:;
    /* $A4ED: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F0:;
    /* $A4F0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4F2:;
    /* $A4F2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4F3:;
    /* $A4F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F5:;
    /* $A4F5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F8:;
    /* $A4F8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B08 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FB:;
    /* $A4FB: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4FE:;
    /* $A4FE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A501:;
    /* $A501: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1424 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A504:;
    /* $A504: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A505:;
    /* $A505: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A507:;
    /* $A507: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A508:;
    /* $A508: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B09 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50B:;
    /* $A50B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50D:;
    /* $A50D: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A510:;
    /* $A510: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A511:;
    /* $A511: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A513:;
    /* $A513: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A515:;
    /* $A515: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A517:;
    /* $A517: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51C:;
    /* $A51C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51F:;
    /* $A51F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A520:;
    /* $A520: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A524:;
    /* $A524: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A527:;
    /* $A527: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A529:;
    /* $A529: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52B:;
    /* $A52B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52F:;
    /* $A52F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x240A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A533:;
    /* $A533: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A535:;
    /* $A535: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A539:;
    /* $A539: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_A53B:;
    /* $A53B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1017 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A53E:;
    /* $A53E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53F:;
    /* $A53F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A541:;
    /* $A541: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0543); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x120A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA541, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A544:;
    /* $A544: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A546:;
    /* $A546: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x111C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A549:;
    /* $A549: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A54A:;
    /* $A54A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54C:;
    /* $A54C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2412; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54F:;
    /* $A54F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A551:;
    /* $A551: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A554:;
    /* $A554: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_A556:;
    /* $A556: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x056C), 7); return; }
label_A558:;
    /* $A558: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A55B:;
    /* $A55B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A55E:;
    /* $A55E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A561:;
    /* $A561: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A562:;
    /* $A562: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1612 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A565:;
    /* $A565: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A566:;
    /* $A566: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B18 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A569:;
    /* $A569: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A56A:;
    /* $A56A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A56D:;
    /* $A56D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A572:;
    /* $A572: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A574:;
    /* $A574: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A575:;
    /* $A575: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A578:;
    /* $A578: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D08); FLAG_NZ(g_cpu.A);
label_A57B:;
    /* $A57B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57D:;
    /* $A57D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A580:;
    /* $A580: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A584:;
    /* $A584: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x141E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A588:;
    /* $A588: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A589:;
    /* $A589: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1305; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A58C:;
    /* $A58C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1811 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C12 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A594:;
    /* $A594: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A597:;
    /* $A597: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A598:;
    /* $A598: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A599:;
    /* $A599: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05BB), 7); return; }
label_A59D:;
    /* $A59D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5A0:;
    /* $A5A0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5AC:;
    /* $A5AC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5AD:;
    /* $A5AD: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AF:;
    /* $A5AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B0:;
    /* $A5B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B1:;
    /* $A5B1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5B4:;
    /* $A5B4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B5:;
    /* $A5B5: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5B7:;
    /* $A5B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1E0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BA:;
    /* $A5BA: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BC:;
    /* $A5BC: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BF:;
    /* $A5BF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5C0:;
    /* $A5C0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5C2:;
    /* $A5C2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CF), 7); return; }
label_A5C5:;
    /* $A5C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5C7:;
    /* $A5C7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C9:;
    /* $A5C9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x16; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CB:;
    /* $A5CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5CE:;
    /* $A5CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2418 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D1:;
    /* $A5D1: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5D2:;
    /* $A5D2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D4:;
    /* $A5D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x170E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5D7:;
    /* $A5D7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1609); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5DA:;
    /* $A5DA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x261C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DD:;
    /* $A5DD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E0:;
    /* $A5E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1216 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E6:;
    /* $A5E6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E8:;
    /* $A5E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A609; }
label_A5EB:;
    /* $A5EB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5EF:;
    /* $A5EF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1819; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5F5:;
    /* $A5F5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x070B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5FA:;
    /* $A5FA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5FB:;
    /* $A5FB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0E11 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FE:;
    /* $A5FE: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A600:; /* top_spin_damage_table */
    /* $A600: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0117; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A603:;
    /* $A603: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A605:;
    /* $A605: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A607:;
    /* $A607: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A609:;
    /* $A609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A60B:;
    /* $A60B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A60C:;
    /* $A60C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A611:;
    /* $A611: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A614:;
    /* $A614: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:; return;
label_A6AC:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6CF:; return;
label_A6D1:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A701:; return;
label_A703:; return;
label_A706:; return;
label_A709:; return;
label_A70B:; return;
label_A70D:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A727:; return;
label_A729:; return;
label_A72B:; return;
label_A72D:; return;
label_A72F:; return;
label_A731:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75E:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76D:; return;
label_A76F:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A779:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A794:; return;
label_A797:; return;
label_A799:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B2:; return;
label_A7B3:; return;
label_A7B5:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C3:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D6:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E6:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7EF:; return;
label_A7F1:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7F9:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A810:; return;
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
label_A81B:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A83F:; return;
label_A840:; return;
label_A842:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A852:; return;
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
label_A864:; return;
label_A865:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86E:; return;
label_A86F:; return;
label_A871:; return;
label_A874:; return;
label_A875:; return;
label_A877:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87D:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A883:; return;
label_A886:; return;
label_A887:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8AA:; return;
label_A8AB:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B2:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D4:; return;
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
label_A8E3:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90E:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92B:; return;
label_A92D:; return;
label_A92E:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A940:; return;
label_A941:; return;
label_A944:; return;
label_A947:; return;
label_A949:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97B:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A989:; return;
label_A98B:; return;
label_A98D:; return;
label_A98E:; return;
label_A98F:; return;
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
label_A99A:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C9:; return;
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
label_A9E3:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA24:; return;
label_AA25:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA38:; return;
label_AA39:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA44:; return;
label_AA45:; return;
label_AA46:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA82:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE9:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB07:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB23:; return;
label_AB26:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB90:; return;
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
label_ABA3:; return;
label_ABA5:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB1:; return;
label_ABB3:; return;
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
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
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
label_ABE3:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABF0:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC22:; return;
label_AC24:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
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
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
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
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
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
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD16:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD37:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD46:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
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
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8B:; return;
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
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
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
label_ADC1:; return;
label_ADC3:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE24:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4C:; return;
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
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE87:; return;
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
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA2:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCE:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEB:; return;
label_AFED:; return;
label_AFF0:; return;
label_AFF3:; return;
label_AFF6:; return;
label_AFF9:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B002:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00C:; return;
label_B00D:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B019:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B021:; return;
label_B023:; return;
label_B025:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03C:; return;
label_B03F:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B051:; return;
label_B053:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B061:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06E:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B07A:; return;
label_B07D:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B089:; return;
label_B08C:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10E:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12B:; return;
label_B12D:; return;
label_B130:; return;
label_B133:; return;
label_B136:; return;
label_B139:; return;
label_B13C:; return;
label_B13F:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B158:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B16A:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B182:; return;
label_B184:; return;
label_B186:; return;
label_B188:; return;
label_B18A:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BB:; return;
label_B1BE:; return;
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
label_B1DA:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FE:; return;
label_B201:; return;
label_B203:; return;
label_B205:; return;
}

void func_A485_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A485_b7");
#endif
label_A485:;
    /* $A485: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A486:;
    /* $A486: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A489:;
    /* $A489: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A48C:;
    /* $A48C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0F12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A48F:;
    /* $A48F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A491:;
    /* $A491: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A494:;
    /* $A494: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A495:;
    /* $A495: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A497:;
    /* $A497: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x240E); FLAG_NZ(g_cpu.A);
label_A49A:;
    /* $A49A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A49E:;
    /* $A49E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4A1:;
    /* $A4A1: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A3:;
    /* $A4A3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x04C2), 7); return; }
label_A4A5:;
    /* $A4A5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4A6:;
    /* $A4A6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4A8:;
    /* $A4A8: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4AB:;
    /* $A4AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4AD:;
    /* $A4AD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4AE:;
    /* $A4AE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4B1:;
    /* $A4B1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B3:;
    /* $A4B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x130A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4B6:;
    /* $A4B6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B8:;
    /* $A4B8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4B9:;
    /* $A4B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4BA:;
    /* $A4BA: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4BD:;
    /* $A4BD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1824; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C3:;
    /* $A4C3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4C5:;
    /* $A4C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C7:;
    /* $A4C7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1518 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CA:;
    /* $A4CA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_A4CC:;
    /* $A4CC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4CD:;
    /* $A4CD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D1:;
    /* $A4D1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4D4:;
    /* $A4D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E23 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4D7:;
    /* $A4D7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4D9:;
    /* $A4D9: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4DB:;
    /* $A4DB: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E14); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4DE:;
    /* $A4DE: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4DF:;
    /* $A4DF: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x141E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E2:;
    /* $A4E2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1124; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E5:;
    /* $A4E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4E6:;
    /* $A4E6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E8:;
    /* $A4E8: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0B19 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4EB:;
    /* $A4EB: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4ED:;
    /* $A4ED: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F0:;
    /* $A4F0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4F2:;
    /* $A4F2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4F3:;
    /* $A4F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F5:;
    /* $A4F5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F8:;
    /* $A4F8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B08 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FB:;
    /* $A4FB: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4FE:;
    /* $A4FE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A501:;
    /* $A501: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1424 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A504:;
    /* $A504: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A505:;
    /* $A505: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A507:;
    /* $A507: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A508:;
    /* $A508: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B09 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50B:;
    /* $A50B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50D:;
    /* $A50D: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A510:;
    /* $A510: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A511:;
    /* $A511: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A513:;
    /* $A513: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A515:;
    /* $A515: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A517:;
    /* $A517: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51C:;
    /* $A51C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51F:;
    /* $A51F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A520:;
    /* $A520: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A524:;
    /* $A524: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A527:;
    /* $A527: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A529:;
    /* $A529: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52B:;
    /* $A52B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52F:;
    /* $A52F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x240A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A533:;
    /* $A533: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A535:;
    /* $A535: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A539:;
    /* $A539: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_A53B:;
    /* $A53B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1017 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A53E:;
    /* $A53E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53F:;
    /* $A53F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A541:;
    /* $A541: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0543); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x120A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA541, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A544:;
    /* $A544: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A546:;
    /* $A546: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x111C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A549:;
    /* $A549: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A54A:;
    /* $A54A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54C:;
    /* $A54C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2412; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54F:;
    /* $A54F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A551:;
    /* $A551: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A554:;
    /* $A554: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_A556:;
    /* $A556: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x056C), 7); return; }
label_A558:;
    /* $A558: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A55B:;
    /* $A55B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A55E:;
    /* $A55E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A561:;
    /* $A561: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A562:;
    /* $A562: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1612 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A565:;
    /* $A565: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A566:;
    /* $A566: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B18 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A569:;
    /* $A569: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A56A:;
    /* $A56A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A56D:;
    /* $A56D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A572:;
    /* $A572: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A574:;
    /* $A574: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A575:;
    /* $A575: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A578:;
    /* $A578: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D08); FLAG_NZ(g_cpu.A);
label_A57B:;
    /* $A57B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57D:;
    /* $A57D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A580:;
    /* $A580: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A584:;
    /* $A584: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x141E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A588:;
    /* $A588: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A589:;
    /* $A589: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1305; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A58C:;
    /* $A58C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1811 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C12 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A594:;
    /* $A594: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A597:;
    /* $A597: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A598:;
    /* $A598: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A599:;
    /* $A599: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05BB), 7); return; }
label_A59D:;
    /* $A59D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5A0:;
    /* $A5A0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5AC:;
    /* $A5AC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5AD:;
    /* $A5AD: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AF:;
    /* $A5AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B0:;
    /* $A5B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B1:;
    /* $A5B1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5B4:;
    /* $A5B4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B5:;
    /* $A5B5: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5B7:;
    /* $A5B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1E0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BA:;
    /* $A5BA: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BC:;
    /* $A5BC: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BF:;
    /* $A5BF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5C0:;
    /* $A5C0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5C2:;
    /* $A5C2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CF), 7); return; }
label_A5C5:;
    /* $A5C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5C7:;
    /* $A5C7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C9:;
    /* $A5C9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x16; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CB:;
    /* $A5CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5CE:;
    /* $A5CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2418 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D1:;
    /* $A5D1: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5D2:;
    /* $A5D2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D4:;
    /* $A5D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x170E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5D7:;
    /* $A5D7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1609); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5DA:;
    /* $A5DA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x261C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DD:;
    /* $A5DD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E0:;
    /* $A5E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1216 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E6:;
    /* $A5E6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E8:;
    /* $A5E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A609; }
label_A5EB:;
    /* $A5EB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5EF:;
    /* $A5EF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1819; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5F5:;
    /* $A5F5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x070B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5FA:;
    /* $A5FA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5FB:;
    /* $A5FB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0E11 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FE:;
    /* $A5FE: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A600:; /* top_spin_damage_table */
    /* $A600: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0117; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A603:;
    /* $A603: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A605:;
    /* $A605: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A607:;
    /* $A607: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A609:;
    /* $A609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A60B:;
    /* $A60B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A60C:;
    /* $A60C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A611:;
    /* $A611: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A614:;
    /* $A614: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:; return;
label_A6AC:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6CF:; return;
label_A6D1:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A701:; return;
label_A703:; return;
label_A706:; return;
label_A709:; return;
label_A70B:; return;
label_A70D:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A727:; return;
label_A729:; return;
label_A72B:; return;
label_A72D:; return;
label_A72F:; return;
label_A731:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75E:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76D:; return;
label_A76F:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A779:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A794:; return;
label_A797:; return;
label_A799:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B2:; return;
label_A7B3:; return;
label_A7B5:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C3:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D6:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E6:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7EF:; return;
label_A7F1:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7F9:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A810:; return;
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
label_A81B:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A83F:; return;
label_A840:; return;
label_A842:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A852:; return;
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
label_A864:; return;
label_A865:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86E:; return;
label_A86F:; return;
label_A871:; return;
label_A874:; return;
label_A875:; return;
label_A877:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87D:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A883:; return;
label_A886:; return;
label_A887:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8AA:; return;
label_A8AB:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B2:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D4:; return;
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
label_A8E3:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90E:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92B:; return;
label_A92D:; return;
label_A92E:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A940:; return;
label_A941:; return;
label_A944:; return;
label_A947:; return;
label_A949:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97B:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A989:; return;
label_A98B:; return;
label_A98D:; return;
label_A98E:; return;
label_A98F:; return;
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
label_A99A:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C9:; return;
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
label_A9E3:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA24:; return;
label_AA25:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA38:; return;
label_AA39:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA44:; return;
label_AA45:; return;
label_AA46:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA82:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE9:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB07:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB23:; return;
label_AB26:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB90:; return;
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
label_ABA3:; return;
label_ABA5:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB1:; return;
label_ABB3:; return;
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
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
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
label_ABE3:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABF0:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC22:; return;
label_AC24:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
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
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
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
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
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
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD16:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD37:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD46:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
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
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8B:; return;
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
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
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
label_ADC1:; return;
label_ADC3:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE24:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4C:; return;
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
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE87:; return;
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
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA2:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCE:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEB:; return;
label_AFED:; return;
label_AFF0:; return;
label_AFF3:; return;
label_AFF6:; return;
label_AFF9:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B002:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00C:; return;
label_B00D:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B019:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B021:; return;
label_B023:; return;
label_B025:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03C:; return;
label_B03F:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B051:; return;
label_B053:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B061:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06E:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B07A:; return;
label_B07D:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B089:; return;
label_B08C:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10E:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12B:; return;
label_B12D:; return;
label_B130:; return;
label_B133:; return;
label_B136:; return;
label_B139:; return;
label_B13C:; return;
label_B13F:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B158:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B16A:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B182:; return;
label_B184:; return;
label_B186:; return;
label_B188:; return;
label_B18A:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BB:; return;
label_B1BE:; return;
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
label_B1DA:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FE:; return;
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
label_B217:; return;
label_B21A:; return;
label_B21C:; return;
label_B21E:; return;
label_B220:; return;
label_B221:; return;
label_B224:; return;
label_B226:; return;
label_B228:; return;
label_B229:; return;
label_B22B:; return;
label_B22D:; return;
label_B22F:; return;
label_B232:; return;
label_B234:; return;
label_B236:; return;
label_B238:; return;
label_B23B:; return;
label_B23E:; return;
label_B241:; return;
label_B243:; return;
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
}

void func_A51B_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A52C;
    }
label_A51B:;
    /* $A51B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A51C:;
    /* $A51C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51F:;
    /* $A51F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A520:;
    /* $A520: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A524:;
    /* $A524: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A527:;
    /* $A527: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A529:;
    /* $A529: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52B:;
    /* $A52B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52F:;
    /* $A52F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x240A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A533:;
    /* $A533: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A535:;
    /* $A535: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A539:;
    /* $A539: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_A53B:;
    /* $A53B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1017 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A53E:;
    /* $A53E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53F:;
    /* $A53F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A541:;
    /* $A541: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0543); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x120A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA541, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A544:;
    /* $A544: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A546:;
    /* $A546: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x111C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A549:;
    /* $A549: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A54A:;
    /* $A54A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54C:;
    /* $A54C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2412; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54F:;
    /* $A54F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A551:;
    /* $A551: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A554:;
    /* $A554: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_A556:;
    /* $A556: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x056C), 7); return; }
label_A558:;
    /* $A558: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A55B:;
    /* $A55B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A55E:;
    /* $A55E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A561:;
    /* $A561: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A562:;
    /* $A562: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1612 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A565:;
    /* $A565: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A566:;
    /* $A566: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B18 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A569:;
    /* $A569: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A56A:;
    /* $A56A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A56D:;
    /* $A56D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A572:;
    /* $A572: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A574:;
    /* $A574: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A575:;
    /* $A575: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A578:;
    /* $A578: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D08); FLAG_NZ(g_cpu.A);
label_A57B:;
    /* $A57B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57D:;
    /* $A57D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A580:;
    /* $A580: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A584:;
    /* $A584: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x141E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A588:;
    /* $A588: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A589:;
    /* $A589: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1305; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A58C:;
    /* $A58C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1811 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C12 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A594:;
    /* $A594: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A597:;
    /* $A597: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A598:;
    /* $A598: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A599:;
    /* $A599: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05BB), 7); return; }
label_A59D:;
    /* $A59D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5A0:;
    /* $A5A0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5AC:;
    /* $A5AC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5AD:;
    /* $A5AD: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AF:;
    /* $A5AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B0:;
    /* $A5B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B1:;
    /* $A5B1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5B4:;
    /* $A5B4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B5:;
    /* $A5B5: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5B7:;
    /* $A5B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1E0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BA:;
    /* $A5BA: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BC:;
    /* $A5BC: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BF:;
    /* $A5BF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5C0:;
    /* $A5C0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5C2:;
    /* $A5C2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CF), 7); return; }
label_A5C5:;
    /* $A5C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5C7:;
    /* $A5C7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C9:;
    /* $A5C9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x16; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CB:;
    /* $A5CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5CE:;
    /* $A5CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2418 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D1:;
    /* $A5D1: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5D2:;
    /* $A5D2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D4:;
    /* $A5D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x170E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5D7:;
    /* $A5D7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1609); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5DA:;
    /* $A5DA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x261C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DD:;
    /* $A5DD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E0:;
    /* $A5E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1216 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E6:;
    /* $A5E6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E8:;
    /* $A5E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A609; }
label_A5EB:;
    /* $A5EB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5EF:;
    /* $A5EF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1819; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5F5:;
    /* $A5F5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x070B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5FA:;
    /* $A5FA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5FB:;
    /* $A5FB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0E11 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FE:;
    /* $A5FE: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A600:; /* top_spin_damage_table */
    /* $A600: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0117; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A603:;
    /* $A603: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A605:;
    /* $A605: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A607:;
    /* $A607: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A609:;
    /* $A609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A60B:;
    /* $A60B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A60C:;
    /* $A60C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A611:;
    /* $A611: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A614:;
    /* $A614: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:; return;
label_A6AC:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6CF:; return;
label_A6D1:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A701:; return;
label_A703:; return;
label_A706:; return;
label_A709:; return;
label_A70B:; return;
label_A70D:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A727:; return;
label_A729:; return;
label_A72B:; return;
label_A72D:; return;
label_A72F:; return;
label_A731:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75E:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76D:; return;
label_A76F:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A779:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A794:; return;
label_A797:; return;
label_A799:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B2:; return;
label_A7B3:; return;
label_A7B5:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C3:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D6:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E6:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7EF:; return;
label_A7F1:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7F9:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A810:; return;
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
label_A81B:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A83F:; return;
label_A840:; return;
label_A842:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A852:; return;
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
label_A864:; return;
label_A865:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86E:; return;
label_A86F:; return;
label_A871:; return;
label_A874:; return;
label_A875:; return;
label_A877:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87D:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A883:; return;
label_A886:; return;
label_A887:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8AA:; return;
label_A8AB:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B2:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D4:; return;
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
label_A8E3:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90E:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92B:; return;
label_A92D:; return;
label_A92E:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A940:; return;
label_A941:; return;
label_A944:; return;
label_A947:; return;
label_A949:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97B:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A989:; return;
label_A98B:; return;
label_A98D:; return;
label_A98E:; return;
label_A98F:; return;
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
label_A99A:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C9:; return;
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
label_A9E3:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA24:; return;
label_AA25:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA38:; return;
label_AA39:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA44:; return;
label_AA45:; return;
label_AA46:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA82:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE9:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB07:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB23:; return;
label_AB26:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB90:; return;
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
label_ABA3:; return;
label_ABA5:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB1:; return;
label_ABB3:; return;
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
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
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
label_ABE3:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABF0:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC22:; return;
label_AC24:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
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
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
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
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
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
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD16:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD37:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD46:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
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
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8B:; return;
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
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
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
label_ADC1:; return;
label_ADC3:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE24:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4C:; return;
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
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE87:; return;
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
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA2:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCE:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEB:; return;
label_AFED:; return;
label_AFF0:; return;
label_AFF3:; return;
label_AFF6:; return;
label_AFF9:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B002:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00C:; return;
label_B00D:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B019:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B021:; return;
label_B023:; return;
label_B025:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03C:; return;
label_B03F:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B051:; return;
label_B053:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B061:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06E:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B07A:; return;
label_B07D:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B089:; return;
label_B08C:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10E:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12B:; return;
label_B12D:; return;
label_B130:; return;
label_B133:; return;
label_B136:; return;
label_B139:; return;
label_B13C:; return;
label_B13F:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B158:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B16A:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B182:; return;
label_B184:; return;
label_B186:; return;
label_B188:; return;
label_B18A:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BB:; return;
label_B1BE:; return;
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
label_B1DA:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FE:; return;
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
label_B217:; return;
label_B21A:; return;
label_B21C:; return;
label_B21E:; return;
label_B220:; return;
label_B221:; return;
label_B224:; return;
label_B226:; return;
label_B228:; return;
label_B229:; return;
label_B22B:; return;
label_B22D:; return;
label_B22F:; return;
label_B232:; return;
label_B234:; return;
label_B236:; return;
label_B238:; return;
label_B23B:; return;
label_B23E:; return;
label_B241:; return;
label_B243:; return;
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
label_B25A:; return;
label_B25C:; return;
label_B25E:; return;
label_B260:; return;
label_B262:; return;
label_B264:; return;
label_B265:; return;
label_B267:; return;
label_B26A:; return;
label_B26D:; return;
label_B26E:; return;
label_B270:; return;
label_B273:; return;
label_B276:; return;
label_B278:; return;
label_B27B:; return;
label_B27E:; return;
label_B281:; return;
label_B284:; return;
label_B287:; return;
label_B28A:; return;
label_B28D:; return;
label_B290:; return;
label_B293:; return;
label_B296:; return;
label_B299:; return;
label_B29C:; return;
label_B29F:; return;
label_B2A2:; return;
label_B2A5:; return;
label_B2A8:; return;
label_B2AB:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B4:; return;
label_B2B7:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2C0:; return;
label_B2C3:; return;
label_B2C6:; return;
label_B2C9:; return;
label_B2CC:; return;
label_B2CF:; return;
label_B2D2:; return;
label_B2D5:; return;
label_B2D8:; return;
label_B2DB:; return;
label_B2DE:; return;
label_B2E1:; return;
label_B2E4:; return;
label_B2E7:; return;
label_B2EA:; return;
label_B2ED:; return;
label_B2F0:; return;
label_B2F3:; return;
label_B2F6:; return;
label_B2F9:; return;
label_B2FC:; return;
label_B2FF:; return;
label_B302:; return;
label_B305:; return;
label_B308:; return;
label_B30B:; return;
label_B30E:; return;
label_B311:; return;
label_B314:; return;
label_B317:; return;
label_B31A:; return;
}

void func_A51B_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A51B_b7");
#endif
    func_A51B_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A52C_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A52C_b7");
#endif
    func_A51B_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A5D8_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5D8_b7");
#endif
label_A5D8:;
    /* $A5D8: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x16; FLAG_NZ(g_cpu.A);
label_A5DA:;
    /* $A5DA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x261C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DD:;
    /* $A5DD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E0:;
    /* $A5E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1216 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E6:;
    /* $A5E6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E8:;
    /* $A5E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A609; }
label_A5EB:;
    /* $A5EB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5EF:;
    /* $A5EF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1819; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5F5:;
    /* $A5F5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x070B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5FA:;
    /* $A5FA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5FB:;
    /* $A5FB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0E11 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FE:;
    /* $A5FE: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A600:; /* top_spin_damage_table */
    /* $A600: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0117; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A603:;
    /* $A603: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A605:;
    /* $A605: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A607:;
    /* $A607: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A609:;
    /* $A609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A60B:;
    /* $A60B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A60C:;
    /* $A60C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A611:;
    /* $A611: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A614:;
    /* $A614: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:; return;
label_A6AC:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6CF:; return;
label_A6D1:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A701:; return;
label_A703:; return;
label_A706:; return;
label_A709:; return;
label_A70B:; return;
label_A70D:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A727:; return;
label_A729:; return;
label_A72B:; return;
label_A72D:; return;
label_A72F:; return;
label_A731:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75E:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76D:; return;
label_A76F:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A779:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A794:; return;
label_A797:; return;
label_A799:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B2:; return;
label_A7B3:; return;
label_A7B5:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C3:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D6:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E6:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7EF:; return;
label_A7F1:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7F9:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A810:; return;
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
label_A81B:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A83F:; return;
label_A840:; return;
label_A842:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A852:; return;
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
label_A864:; return;
label_A865:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86E:; return;
label_A86F:; return;
label_A871:; return;
label_A874:; return;
label_A875:; return;
label_A877:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87D:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A883:; return;
label_A886:; return;
label_A887:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8AA:; return;
label_A8AB:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B2:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D4:; return;
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
label_A8E3:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90E:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92B:; return;
label_A92D:; return;
label_A92E:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A940:; return;
label_A941:; return;
label_A944:; return;
label_A947:; return;
label_A949:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97B:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A989:; return;
label_A98B:; return;
label_A98D:; return;
label_A98E:; return;
label_A98F:; return;
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
label_A99A:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C9:; return;
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
label_A9E3:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA24:; return;
label_AA25:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA38:; return;
label_AA39:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA44:; return;
label_AA45:; return;
label_AA46:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA82:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE9:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB07:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB23:; return;
label_AB26:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB90:; return;
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
label_ABA3:; return;
label_ABA5:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB1:; return;
label_ABB3:; return;
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
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
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
label_ABE3:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABF0:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC22:; return;
label_AC24:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
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
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
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
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
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
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD16:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD37:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD46:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
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
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8B:; return;
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
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
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
label_ADC1:; return;
label_ADC3:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE24:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4C:; return;
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
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE87:; return;
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
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA2:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCE:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEB:; return;
label_AFED:; return;
label_AFF0:; return;
label_AFF3:; return;
label_AFF6:; return;
label_AFF9:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B002:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00C:; return;
label_B00D:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B019:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B021:; return;
label_B023:; return;
label_B025:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03C:; return;
label_B03F:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B051:; return;
label_B053:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B061:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06E:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B07A:; return;
label_B07D:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B089:; return;
label_B08C:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10E:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12B:; return;
label_B12D:; return;
label_B130:; return;
label_B133:; return;
label_B136:; return;
label_B139:; return;
label_B13C:; return;
label_B13F:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B158:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B16A:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B182:; return;
label_B184:; return;
label_B186:; return;
label_B188:; return;
label_B18A:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BB:; return;
label_B1BE:; return;
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
label_B1DA:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FE:; return;
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
label_B217:; return;
label_B21A:; return;
label_B21C:; return;
label_B21E:; return;
label_B220:; return;
label_B221:; return;
label_B224:; return;
label_B226:; return;
label_B228:; return;
label_B229:; return;
label_B22B:; return;
label_B22D:; return;
label_B22F:; return;
label_B232:; return;
label_B234:; return;
label_B236:; return;
label_B238:; return;
label_B23B:; return;
label_B23E:; return;
label_B241:; return;
label_B243:; return;
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
label_B25A:; return;
label_B25C:; return;
label_B25E:; return;
label_B260:; return;
label_B262:; return;
label_B264:; return;
label_B265:; return;
label_B267:; return;
label_B26A:; return;
label_B26D:; return;
label_B26E:; return;
label_B270:; return;
label_B273:; return;
label_B276:; return;
label_B278:; return;
label_B27B:; return;
label_B27E:; return;
label_B281:; return;
label_B284:; return;
label_B287:; return;
label_B28A:; return;
label_B28D:; return;
label_B290:; return;
label_B293:; return;
label_B296:; return;
label_B299:; return;
label_B29C:; return;
label_B29F:; return;
label_B2A2:; return;
label_B2A5:; return;
label_B2A8:; return;
label_B2AB:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B4:; return;
label_B2B7:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2C0:; return;
label_B2C3:; return;
label_B2C6:; return;
label_B2C9:; return;
label_B2CC:; return;
label_B2CF:; return;
label_B2D2:; return;
label_B2D5:; return;
label_B2D8:; return;
label_B2DB:; return;
label_B2DE:; return;
label_B2E1:; return;
label_B2E4:; return;
label_B2E7:; return;
label_B2EA:; return;
label_B2ED:; return;
label_B2F0:; return;
label_B2F3:; return;
label_B2F6:; return;
label_B2F9:; return;
label_B2FC:; return;
label_B2FF:; return;
label_B302:; return;
label_B305:; return;
label_B308:; return;
label_B30B:; return;
label_B30E:; return;
label_B311:; return;
label_B314:; return;
label_B317:; return;
label_B31A:; return;
label_B31D:; return;
label_B320:; return;
label_B323:; return;
label_B326:; return;
label_B329:; return;
label_B32C:; return;
label_B32F:; return;
label_B332:; return;
label_B335:; return;
label_B338:; return;
label_B33B:; return;
label_B33E:; return;
label_B341:; return;
label_B344:; return;
label_B347:; return;
label_B34A:; return;
label_B34D:; return;
label_B350:; return;
label_B353:; return;
label_B356:; return;
label_B359:; return;
label_B35C:; return;
label_B35F:; return;
label_B362:; return;
label_B365:; return;
label_B368:; return;
label_B36B:; return;
label_B36E:; return;
label_B371:; return;
label_B374:; return;
label_B377:; return;
label_B37A:; return;
label_B37D:; return;
label_B380:; return;
label_B383:; return;
label_B386:; return;
label_B389:; return;
label_B38C:; return;
label_B38F:; return;
label_B392:; return;
label_B395:; return;
label_B398:; return;
label_B39B:; return;
label_B39E:; return;
label_B3A1:; return;
label_B3A4:; return;
label_B3A7:; return;
label_B3AA:; return;
label_B3AD:; return;
label_B3B0:; return;
label_B3B3:; return;
label_B3B6:; return;
label_B3B9:; return;
label_B3BC:; return;
label_B3BF:; return;
label_B3C2:; return;
label_B3C5:; return;
label_B3C8:; return;
label_B3CB:; return;
label_B3CE:; return;
label_B3D1:; return;
label_B3D4:; return;
label_B3D7:; return;
label_B3DA:; return;
label_B3DD:; return;
label_B3E0:; return;
label_B3E3:; return;
label_B3E6:; return;
label_B3E9:; return;
label_B3EC:; return;
label_B3EF:; return;
label_B3F2:; return;
label_B3F5:; return;
label_B3F8:; return;
label_B3FB:; return;
label_B3FE:; return;
label_B401:; return;
label_B404:; return;
label_B407:; return;
label_B40A:; return;
label_B40D:; return;
label_B410:; return;
label_B413:; return;
label_B416:; return;
label_B419:; return;
label_B41C:; return;
label_B41F:; return;
label_B422:; return;
label_B425:; return;
label_B428:; return;
label_B42B:; return;
label_B42E:; return;
label_B431:; return;
label_B434:; return;
label_B437:; return;
}

void func_A612_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A612_b7");
#endif
label_A612:;
    /* $A612: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A613:;
    /* $A613: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x18; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:; return;
label_A6AC:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6BF:; return;
label_A6C2:; return;
label_A6C3:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6C9:; return;
label_A6CB:; return;
label_A6CD:; return;
label_A6CF:; return;
label_A6D1:; return;
label_A6D3:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DB:; return;
label_A6DE:; return;
label_A6E1:; return;
label_A6E3:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6EC:; return;
label_A6EE:; return;
label_A6F1:; return;
label_A6F3:; return;
label_A6F4:; return;
label_A6F5:; return;
label_A6F7:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FD:; return;
label_A6FF:; return;
label_A701:; return;
label_A703:; return;
label_A706:; return;
label_A709:; return;
label_A70B:; return;
label_A70D:; return;
label_A710:; return;
label_A713:; return;
label_A715:; return;
label_A717:; return;
label_A719:; return;
label_A71B:; return;
label_A71E:; return;
label_A721:; return;
label_A723:; return;
label_A725:; return;
label_A727:; return;
label_A729:; return;
label_A72B:; return;
label_A72D:; return;
label_A72F:; return;
label_A731:; return;
label_A733:; return;
label_A735:; return;
label_A738:; return;
label_A73B:; return;
label_A73D:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A746:; return;
label_A748:; return;
label_A749:; return;
label_A74B:; return;
label_A74D:; return;
label_A74F:; return;
label_A751:; return;
label_A753:; return;
label_A756:; return;
label_A759:; return;
label_A75B:; return;
label_A75E:; return;
label_A761:; return;
label_A763:; return;
label_A765:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76D:; return;
label_A76F:; return;
label_A771:; return;
label_A773:; return;
label_A775:; return;
label_A777:; return;
label_A779:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A784:; return;
label_A786:; return;
label_A788:; return;
label_A78B:; return;
label_A78D:; return;
label_A78F:; return;
label_A791:; return;
label_A794:; return;
label_A797:; return;
label_A799:; return;
label_A79B:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A5:; return;
label_A7A7:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AE:; return;
label_A7B0:; return;
label_A7B2:; return;
label_A7B3:; return;
label_A7B5:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BB:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C3:; return;
label_A7C5:; return;
label_A7C7:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CD:; return;
label_A7CF:; return;
label_A7D1:; return;
label_A7D3:; return;
label_A7D6:; return;
label_A7D9:; return;
label_A7DB:; return;
label_A7DD:; return;
label_A7DF:; return;
label_A7E1:; return;
label_A7E2:; return;
label_A7E3:; return;
label_A7E5:; return;
label_A7E6:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EA:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7EF:; return;
label_A7F1:; return;
label_A7F2:; return;
label_A7F5:; return;
label_A7F7:; return;
label_A7F9:; return;
label_A7FA:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A801:; return;
label_A804:; return;
label_A807:; return;
label_A808:; return;
label_A809:; return;
label_A80A:; return;
label_A80B:; return;
label_A80C:; return;
label_A80D:; return;
label_A80F:; return;
label_A810:; return;
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
label_A81B:; return;
label_A81C:; return;
label_A81D:; return;
label_A81E:; return;
label_A81F:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A827:; return;
label_A828:; return;
label_A82A:; return;
label_A82B:; return;
label_A82C:; return;
label_A82E:; return;
label_A82F:; return;
label_A830:; return;
label_A831:; return;
label_A833:; return;
label_A835:; return;
label_A836:; return;
label_A837:; return;
label_A838:; return;
label_A839:; return;
label_A83A:; return;
label_A83B:; return;
label_A83C:; return;
label_A83D:; return;
label_A83E:; return;
label_A83F:; return;
label_A840:; return;
label_A842:; return;
label_A843:; return;
label_A845:; return;
label_A847:; return;
label_A849:; return;
label_A84B:; return;
label_A84D:; return;
label_A84F:; return;
label_A851:; return;
label_A852:; return;
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
label_A864:; return;
label_A865:; return;
label_A868:; return;
label_A869:; return;
label_A86B:; return;
label_A86E:; return;
label_A86F:; return;
label_A871:; return;
label_A874:; return;
label_A875:; return;
label_A877:; return;
label_A879:; return;
label_A87A:; return;
label_A87B:; return;
label_A87D:; return;
label_A87F:; return;
label_A880:; return;
label_A881:; return;
label_A883:; return;
label_A886:; return;
label_A887:; return;
label_A889:; return;
label_A88A:; return;
label_A88B:; return;
label_A88C:; return;
label_A88D:; return;
label_A88F:; return;
label_A891:; return;
label_A892:; return;
label_A893:; return;
label_A894:; return;
label_A895:; return;
label_A896:; return;
label_A897:; return;
label_A898:; return;
label_A899:; return;
label_A89A:; return;
label_A89B:; return;
label_A89C:; return;
label_A89D:; return;
label_A89E:; return;
label_A89F:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A5:; return;
label_A8A6:; return;
label_A8A7:; return;
label_A8AA:; return;
label_A8AB:; return;
label_A8AE:; return;
label_A8AF:; return;
label_A8B2:; return;
label_A8B5:; return;
label_A8B7:; return;
label_A8B9:; return;
label_A8BB:; return;
label_A8BC:; return;
label_A8BD:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C1:; return;
label_A8C3:; return;
label_A8C4:; return;
label_A8C6:; return;
label_A8C7:; return;
label_A8C9:; return;
label_A8CA:; return;
label_A8CC:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D1:; return;
label_A8D4:; return;
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
label_A8E3:; return;
label_A8E6:; return;
label_A8E7:; return;
label_A8EA:; return;
label_A8EB:; return;
label_A8EE:; return;
label_A8EF:; return;
label_A8F2:; return;
label_A8F3:; return;
label_A8F6:; return;
label_A8F8:; return;
label_A8FA:; return;
label_A8FD:; return;
label_A8FE:; return;
label_A8FF:; return;
label_A900:; return;
label_A902:; return;
label_A904:; return;
label_A905:; return;
label_A906:; return;
label_A907:; return;
label_A908:; return;
label_A909:; return;
label_A90B:; return;
label_A90C:; return;
label_A90E:; return;
label_A90F:; return;
label_A911:; return;
label_A912:; return;
label_A913:; return;
label_A914:; return;
label_A915:; return;
label_A916:; return;
label_A917:; return;
label_A919:; return;
label_A91A:; return;
label_A91B:; return;
label_A91C:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A920:; return;
label_A921:; return;
label_A922:; return;
label_A923:; return;
label_A926:; return;
label_A927:; return;
label_A928:; return;
label_A92A:; return;
label_A92B:; return;
label_A92D:; return;
label_A92E:; return;
label_A930:; return;
label_A931:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A937:; return;
label_A939:; return;
label_A93A:; return;
label_A93B:; return;
label_A93D:; return;
label_A93E:; return;
label_A93F:; return;
label_A940:; return;
label_A941:; return;
label_A944:; return;
label_A947:; return;
label_A949:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A951:; return;
label_A952:; return;
label_A953:; return;
label_A954:; return;
label_A956:; return;
label_A957:; return;
label_A958:; return;
label_A959:; return;
label_A95B:; return;
label_A95C:; return;
label_A95D:; return;
label_A95E:; return;
label_A95F:; return;
label_A960:; return;
label_A962:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96B:; return;
label_A96D:; return;
label_A96F:; return;
label_A971:; return;
label_A972:; return;
label_A973:; return;
label_A975:; return;
label_A976:; return;
label_A977:; return;
label_A978:; return;
label_A979:; return;
label_A97B:; return;
label_A97D:; return;
label_A97E:; return;
label_A97F:; return;
label_A980:; return;
label_A981:; return;
label_A983:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A989:; return;
label_A98B:; return;
label_A98D:; return;
label_A98E:; return;
label_A98F:; return;
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
label_A99A:; return;
label_A99B:; return;
label_A99C:; return;
label_A99D:; return;
label_A99E:; return;
label_A99F:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A3:; return;
label_A9A6:; return;
label_A9A7:; return;
label_A9A9:; return;
label_A9AB:; return;
label_A9AD:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B2:; return;
label_A9B3:; return;
label_A9B4:; return;
label_A9B5:; return;
label_A9B7:; return;
label_A9B9:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BD:; return;
label_A9BE:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C1:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C7:; return;
label_A9C9:; return;
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
label_A9E3:; return;
label_A9E6:; return;
label_A9E8:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9ED:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F3:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FB:; return;
label_A9FD:; return;
label_A9FF:; return;
label_AA01:; return;
label_AA03:; return;
label_AA05:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0B:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA17:; return;
label_AA1A:; return;
label_AA1D:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA20:; return;
label_AA21:; return;
label_AA24:; return;
label_AA25:; return;
label_AA28:; return;
label_AA29:; return;
label_AA2C:; return;
label_AA2F:; return;
label_AA30:; return;
label_AA32:; return;
label_AA35:; return;
label_AA37:; return;
label_AA38:; return;
label_AA39:; return;
label_AA3C:; return;
label_AA3D:; return;
label_AA3E:; return;
label_AA3F:; return;
label_AA40:; return;
label_AA41:; return;
label_AA42:; return;
label_AA43:; return;
label_AA44:; return;
label_AA45:; return;
label_AA46:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA50:; return;
label_AA53:; return;
label_AA54:; return;
label_AA57:; return;
label_AA58:; return;
label_AA5B:; return;
label_AA5C:; return;
label_AA5D:; return;
label_AA5E:; return;
label_AA5F:; return;
label_AA60:; return;
label_AA61:; return;
label_AA62:; return;
label_AA63:; return;
label_AA64:; return;
label_AA67:; return;
label_AA68:; return;
label_AA69:; return;
label_AA6A:; return;
label_AA6B:; return;
label_AA6C:; return;
label_AA6D:; return;
label_AA6E:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7B:; return;
label_AA7D:; return;
label_AA7F:; return;
label_AA81:; return;
label_AA82:; return;
label_AA85:; return;
label_AA86:; return;
label_AA89:; return;
label_AA8A:; return;
label_AA8D:; return;
label_AA8F:; return;
label_AA90:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9D:; return;
label_AA9F:; return;
label_AAA1:; return;
label_AAA3:; return;
label_AAA4:; return;
label_AAA5:; return;
label_AAA7:; return;
label_AAA8:; return;
label_AAA9:; return;
label_AAAA:; return;
label_AAAB:; return;
label_AAAE:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB3:; return;
label_AAB4:; return;
label_AAB5:; return;
label_AAB6:; return;
label_AAB7:; return;
label_AAB8:; return;
label_AAB9:; return;
label_AABA:; return;
label_AABB:; return;
label_AABC:; return;
label_AABD:; return;
label_AABF:; return;
label_AAC0:; return;
label_AAC1:; return;
label_AAC2:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC8:; return;
label_AAC9:; return;
label_AACB:; return;
label_AACD:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD1:; return;
label_AAD2:; return;
label_AAD3:; return;
label_AAD4:; return;
label_AAD5:; return;
label_AAD8:; return;
label_AAD9:; return;
label_AADA:; return;
label_AADB:; return;
label_AADC:; return;
label_AADD:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE0:; return;
label_AAE2:; return;
label_AAE3:; return;
label_AAE4:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAE9:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF6:; return;
label_AAF7:; return;
label_AAFA:; return;
label_AAFD:; return;
label_AAFF:; return;
label_AB00:; return;
label_AB01:; return;
label_AB02:; return;
label_AB03:; return;
label_AB04:; return;
label_AB05:; return;
label_AB07:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0A:; return;
label_AB0B:; return;
label_AB0C:; return;
label_AB0E:; return;
label_AB10:; return;
label_AB12:; return;
label_AB14:; return;
label_AB16:; return;
label_AB18:; return;
label_AB1A:; return;
label_AB1C:; return;
label_AB1F:; return;
label_AB20:; return;
label_AB22:; return;
label_AB23:; return;
label_AB26:; return;
label_AB27:; return;
label_AB2A:; return;
label_AB2B:; return;
label_AB2C:; return;
label_AB2D:; return;
label_AB30:; return;
label_AB31:; return;
label_AB32:; return;
label_AB33:; return;
label_AB35:; return;
label_AB36:; return;
label_AB37:; return;
label_AB38:; return;
label_AB39:; return;
label_AB3A:; return;
label_AB3B:; return;
label_AB3D:; return;
label_AB3E:; return;
label_AB3F:; return;
label_AB40:; return;
label_AB41:; return;
label_AB43:; return;
label_AB45:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4B:; return;
label_AB4D:; return;
label_AB4F:; return;
label_AB50:; return;
label_AB51:; return;
label_AB54:; return;
label_AB55:; return;
label_AB56:; return;
label_AB57:; return;
label_AB58:; return;
label_AB59:; return;
label_AB5A:; return;
label_AB5B:; return;
label_AB5C:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB5F:; return;
label_AB60:; return;
label_AB62:; return;
label_AB63:; return;
label_AB64:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB70:; return;
label_AB71:; return;
label_AB73:; return;
label_AB75:; return;
label_AB77:; return;
label_AB7A:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB7F:; return;
label_AB80:; return;
label_AB81:; return;
label_AB82:; return;
label_AB83:; return;
label_AB86:; return;
label_AB87:; return;
label_AB89:; return;
label_AB8B:; return;
label_AB8C:; return;
label_AB8E:; return;
label_AB8F:; return;
label_AB90:; return;
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
label_ABA3:; return;
label_ABA5:; return;
label_ABA8:; return;
label_ABA9:; return;
label_ABAA:; return;
label_ABAB:; return;
label_ABAE:; return;
label_ABAF:; return;
label_ABB1:; return;
label_ABB3:; return;
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
label_ABC5:; return;
label_ABC7:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCD:; return;
label_ABCE:; return;
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
label_ABE3:; return;
label_ABE5:; return;
label_ABE7:; return;
label_ABE8:; return;
label_ABE9:; return;
label_ABEC:; return;
label_ABED:; return;
label_ABF0:; return;
label_ABF3:; return;
label_ABF5:; return;
label_ABF8:; return;
label_ABF9:; return;
label_ABFB:; return;
label_ABFD:; return;
label_ABFE:; return;
label_ABFF:; return;
label_AC01:; return;
label_AC02:; return;
label_AC03:; return;
label_AC04:; return;
label_AC06:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0C:; return;
label_AC0E:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC14:; return;
label_AC15:; return;
label_AC16:; return;
label_AC17:; return;
label_AC18:; return;
label_AC19:; return;
label_AC1A:; return;
label_AC1C:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC1F:; return;
label_AC21:; return;
label_AC22:; return;
label_AC24:; return;
label_AC27:; return;
label_AC29:; return;
label_AC2B:; return;
label_AC2D:; return;
label_AC2F:; return;
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
label_AC3C:; return;
label_AC3D:; return;
label_AC3E:; return;
label_AC3F:; return;
label_AC40:; return;
label_AC42:; return;
label_AC43:; return;
label_AC44:; return;
label_AC45:; return;
label_AC47:; return;
label_AC49:; return;
label_AC4B:; return;
label_AC4D:; return;
label_AC4F:; return;
label_AC50:; return;
label_AC51:; return;
label_AC52:; return;
label_AC54:; return;
label_AC55:; return;
label_AC57:; return;
label_AC58:; return;
label_AC59:; return;
label_AC5A:; return;
label_AC5B:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC5E:; return;
label_AC5F:; return;
label_AC60:; return;
label_AC63:; return;
label_AC64:; return;
label_AC66:; return;
label_AC68:; return;
label_AC69:; return;
label_AC6B:; return;
label_AC6D:; return;
label_AC6E:; return;
label_AC6F:; return;
label_AC70:; return;
label_AC72:; return;
label_AC73:; return;
label_AC74:; return;
label_AC75:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7B:; return;
label_AC7C:; return;
label_AC7D:; return;
label_AC7F:; return;
label_AC80:; return;
label_AC82:; return;
label_AC84:; return;
label_AC86:; return;
label_AC87:; return;
label_AC88:; return;
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
label_AC93:; return;
label_AC94:; return;
label_AC95:; return;
label_AC96:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9A:; return;
label_AC9B:; return;
label_AC9C:; return;
label_AC9D:; return;
label_AC9E:; return;
label_AC9F:; return;
label_ACA0:; return;
label_ACA1:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA5:; return;
label_ACA6:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAA:; return;
label_ACAC:; return;
label_ACAE:; return;
label_ACAF:; return;
label_ACB0:; return;
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
label_ACBE:; return;
label_ACBF:; return;
label_ACC0:; return;
label_ACC2:; return;
label_ACC3:; return;
label_ACC4:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACC9:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCD:; return;
label_ACCE:; return;
label_ACCF:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD3:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD6:; return;
label_ACD7:; return;
label_ACD8:; return;
label_ACD9:; return;
label_ACDB:; return;
label_ACDC:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACDF:; return;
label_ACE0:; return;
label_ACE1:; return;
label_ACE3:; return;
label_ACE4:; return;
label_ACE6:; return;
label_ACE8:; return;
label_ACEA:; return;
label_ACEB:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF1:; return;
label_ACF3:; return;
label_ACF4:; return;
label_ACF6:; return;
label_ACF7:; return;
label_ACF8:; return;
label_ACFA:; return;
label_ACFB:; return;
label_ACFC:; return;
label_ACFE:; return;
label_ACFF:; return;
label_AD01:; return;
label_AD04:; return;
label_AD05:; return;
label_AD06:; return;
label_AD09:; return;
label_AD0A:; return;
label_AD0D:; return;
label_AD0E:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD16:; return;
label_AD19:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD20:; return;
label_AD21:; return;
label_AD22:; return;
label_AD23:; return;
label_AD26:; return;
label_AD29:; return;
label_AD2B:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD34:; return;
label_AD35:; return;
label_AD37:; return;
label_AD38:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3C:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD41:; return;
label_AD42:; return;
label_AD43:; return;
label_AD44:; return;
label_AD46:; return;
label_AD47:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4C:; return;
label_AD4E:; return;
label_AD4F:; return;
label_AD51:; return;
label_AD52:; return;
label_AD53:; return;
label_AD54:; return;
label_AD55:; return;
label_AD56:; return;
label_AD57:; return;
label_AD59:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5C:; return;
label_AD5E:; return;
label_AD5F:; return;
label_AD60:; return;
label_AD62:; return;
label_AD64:; return;
label_AD66:; return;
label_AD68:; return;
label_AD69:; return;
label_AD6B:; return;
label_AD6D:; return;
label_AD6E:; return;
label_AD70:; return;
label_AD72:; return;
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
label_AD82:; return;
label_AD83:; return;
label_AD84:; return;
label_AD86:; return;
label_AD87:; return;
label_AD89:; return;
label_AD8A:; return;
label_AD8B:; return;
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
label_AD99:; return;
label_AD9A:; return;
label_AD9B:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_AD9F:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA3:; return;
label_ADA4:; return;
label_ADA6:; return;
label_ADA8:; return;
label_ADAA:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB0:; return;
label_ADB2:; return;
label_ADB3:; return;
label_ADB4:; return;
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
label_ADC1:; return;
label_ADC3:; return;
label_ADC4:; return;
label_ADC7:; return;
label_ADC8:; return;
label_ADC9:; return;
label_ADCA:; return;
label_ADCB:; return;
label_ADCC:; return;
label_ADCE:; return;
label_ADCF:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD2:; return;
label_ADD3:; return;
label_ADD4:; return;
label_ADD6:; return;
label_ADD8:; return;
label_ADD9:; return;
label_ADDA:; return;
label_ADDB:; return;
label_ADDC:; return;
label_ADDD:; return;
label_ADDE:; return;
label_ADDF:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE4:; return;
label_ADE6:; return;
label_ADE8:; return;
label_ADE9:; return;
label_ADEB:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF0:; return;
label_ADF2:; return;
label_ADF4:; return;
label_ADF6:; return;
label_ADF9:; return;
label_ADFB:; return;
label_ADFD:; return;
label_ADFE:; return;
label_ADFF:; return;
label_AE00:; return;
label_AE02:; return;
label_AE04:; return;
label_AE05:; return;
label_AE07:; return;
label_AE08:; return;
label_AE0A:; return;
label_AE0C:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE11:; return;
label_AE12:; return;
label_AE14:; return;
label_AE16:; return;
label_AE18:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1D:; return;
label_AE1F:; return;
label_AE21:; return;
label_AE24:; return;
label_AE25:; return;
label_AE27:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE2F:; return;
label_AE30:; return;
label_AE31:; return;
label_AE32:; return;
label_AE34:; return;
label_AE35:; return;
label_AE36:; return;
label_AE37:; return;
label_AE38:; return;
label_AE3A:; return;
label_AE3B:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE3E:; return;
label_AE3F:; return;
label_AE40:; return;
label_AE42:; return;
label_AE43:; return;
label_AE44:; return;
label_AE46:; return;
label_AE47:; return;
label_AE49:; return;
label_AE4A:; return;
label_AE4C:; return;
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
label_AE5B:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE61:; return;
label_AE62:; return;
label_AE64:; return;
label_AE65:; return;
label_AE67:; return;
label_AE68:; return;
label_AE6A:; return;
label_AE6B:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE6F:; return;
label_AE70:; return;
label_AE73:; return;
label_AE75:; return;
label_AE77:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7C:; return;
label_AE7D:; return;
label_AE7E:; return;
label_AE7F:; return;
label_AE81:; return;
label_AE82:; return;
label_AE83:; return;
label_AE84:; return;
label_AE87:; return;
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
label_AE95:; return;
label_AE96:; return;
label_AE97:; return;
label_AE98:; return;
label_AE99:; return;
label_AE9A:; return;
label_AE9B:; return;
label_AE9D:; return;
label_AE9E:; return;
label_AE9F:; return;
label_AEA1:; return;
label_AEA2:; return;
label_AEA3:; return;
label_AEA5:; return;
label_AEA7:; return;
label_AEA9:; return;
label_AEAA:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAF:; return;
label_AEB1:; return;
label_AEB2:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCE:; return;
label_AFD0:; return;
label_AFD3:; return;
label_AFD5:; return;
label_AFD7:; return;
label_AFD8:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE6:; return;
label_AFE8:; return;
label_AFEB:; return;
label_AFED:; return;
label_AFF0:; return;
label_AFF3:; return;
label_AFF6:; return;
label_AFF9:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B002:; return;
label_B005:; return;
label_B008:; return;
label_B009:; return;
label_B00C:; return;
label_B00D:; return;
label_B010:; return;
label_B011:; return;
label_B013:; return;
label_B015:; return;
label_B017:; return;
label_B019:; return;
label_B01B:; return;
label_B01D:; return;
label_B01F:; return;
label_B021:; return;
label_B023:; return;
label_B025:; return;
label_B027:; return;
label_B029:; return;
label_B02B:; return;
label_B02D:; return;
label_B030:; return;
label_B033:; return;
label_B036:; return;
label_B039:; return;
label_B03C:; return;
label_B03F:; return;
label_B041:; return;
label_B044:; return;
label_B047:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B051:; return;
label_B053:; return;
label_B056:; return;
label_B059:; return;
label_B05B:; return;
label_B05E:; return;
label_B061:; return;
label_B063:; return;
label_B066:; return;
label_B068:; return;
label_B06B:; return;
label_B06E:; return;
label_B071:; return;
label_B074:; return;
label_B077:; return;
label_B07A:; return;
label_B07D:; return;
label_B080:; return;
label_B083:; return;
label_B086:; return;
label_B089:; return;
label_B08C:; return;
label_B08F:; return;
label_B092:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B09F:; return;
label_B0A2:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AD:; return;
label_B0AF:; return;
label_B0B2:; return;
label_B0B5:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BD:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C6:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CF:; return;
label_B0D2:; return;
label_B0D5:; return;
label_B0D8:; return;
label_B0DB:; return;
label_B0DE:; return;
label_B0E1:; return;
label_B0E3:; return;
label_B0E6:; return;
label_B0E9:; return;
label_B0EB:; return;
label_B0EE:; return;
label_B0F1:; return;
label_B0F3:; return;
label_B0F5:; return;
label_B0F8:; return;
label_B0FB:; return;
label_B0FD:; return;
label_B100:; return;
label_B102:; return;
label_B103:; return;
label_B105:; return;
label_B106:; return;
label_B108:; return;
label_B10B:; return;
label_B10E:; return;
label_B110:; return;
label_B113:; return;
label_B116:; return;
label_B118:; return;
label_B11B:; return;
label_B11D:; return;
label_B11F:; return;
label_B120:; return;
label_B123:; return;
label_B126:; return;
label_B128:; return;
label_B12B:; return;
label_B12D:; return;
label_B130:; return;
label_B133:; return;
label_B136:; return;
label_B139:; return;
label_B13C:; return;
label_B13F:; return;
label_B142:; return;
label_B144:; return;
label_B146:; return;
label_B148:; return;
label_B14B:; return;
label_B14D:; return;
label_B14F:; return;
label_B150:; return;
label_B153:; return;
label_B155:; return;
label_B157:; return;
label_B158:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B160:; return;
label_B163:; return;
label_B165:; return;
label_B167:; return;
label_B16A:; return;
label_B16C:; return;
label_B16E:; return;
label_B16F:; return;
label_B172:; return;
label_B174:; return;
label_B176:; return;
label_B177:; return;
label_B17A:; return;
label_B17D:; return;
label_B180:; return;
label_B182:; return;
label_B184:; return;
label_B186:; return;
label_B188:; return;
label_B18A:; return;
label_B18C:; return;
label_B18E:; return;
label_B190:; return;
label_B191:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B19A:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A1:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A8:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AD:; return;
label_B1AF:; return;
label_B1B2:; return;
label_B1B4:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BB:; return;
label_B1BE:; return;
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
label_B1DA:; return;
label_B1DC:; return;
label_B1DE:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E3:; return;
label_B1E5:; return;
label_B1E7:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EE:; return;
label_B1F0:; return;
label_B1F2:; return;
label_B1F4:; return;
label_B1F6:; return;
label_B1F8:; return;
label_B1FB:; return;
label_B1FE:; return;
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
label_B217:; return;
label_B21A:; return;
label_B21C:; return;
label_B21E:; return;
label_B220:; return;
label_B221:; return;
label_B224:; return;
label_B226:; return;
label_B228:; return;
label_B229:; return;
label_B22B:; return;
label_B22D:; return;
label_B22F:; return;
label_B232:; return;
label_B234:; return;
label_B236:; return;
label_B238:; return;
label_B23B:; return;
label_B23E:; return;
label_B241:; return;
label_B243:; return;
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
label_B25A:; return;
label_B25C:; return;
label_B25E:; return;
label_B260:; return;
label_B262:; return;
label_B264:; return;
label_B265:; return;
label_B267:; return;
label_B26A:; return;
label_B26D:; return;
label_B26E:; return;
label_B270:; return;
label_B273:; return;
label_B276:; return;
label_B278:; return;
label_B27B:; return;
label_B27E:; return;
label_B281:; return;
label_B284:; return;
label_B287:; return;
label_B28A:; return;
label_B28D:; return;
label_B290:; return;
label_B293:; return;
label_B296:; return;
label_B299:; return;
label_B29C:; return;
label_B29F:; return;
label_B2A2:; return;
label_B2A5:; return;
label_B2A8:; return;
label_B2AB:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B4:; return;
label_B2B7:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2C0:; return;
label_B2C3:; return;
label_B2C6:; return;
label_B2C9:; return;
label_B2CC:; return;
label_B2CF:; return;
label_B2D2:; return;
label_B2D5:; return;
label_B2D8:; return;
label_B2DB:; return;
label_B2DE:; return;
label_B2E1:; return;
label_B2E4:; return;
label_B2E7:; return;
label_B2EA:; return;
label_B2ED:; return;
label_B2F0:; return;
label_B2F3:; return;
label_B2F6:; return;
label_B2F9:; return;
label_B2FC:; return;
label_B2FF:; return;
label_B302:; return;
label_B305:; return;
label_B308:; return;
label_B30B:; return;
label_B30E:; return;
label_B311:; return;
label_B314:; return;
label_B317:; return;
label_B31A:; return;
label_B31D:; return;
label_B320:; return;
label_B323:; return;
label_B326:; return;
label_B329:; return;
label_B32C:; return;
label_B32F:; return;
label_B332:; return;
label_B335:; return;
label_B338:; return;
label_B33B:; return;
label_B33E:; return;
label_B341:; return;
label_B344:; return;
label_B347:; return;
label_B34A:; return;
label_B34D:; return;
label_B350:; return;
label_B353:; return;
label_B356:; return;
label_B359:; return;
label_B35C:; return;
label_B35F:; return;
label_B362:; return;
label_B365:; return;
label_B368:; return;
label_B36B:; return;
label_B36E:; return;
label_B371:; return;
label_B374:; return;
label_B377:; return;
label_B37A:; return;
label_B37D:; return;
label_B380:; return;
label_B383:; return;
label_B386:; return;
label_B389:; return;
label_B38C:; return;
label_B38F:; return;
label_B392:; return;
label_B395:; return;
label_B398:; return;
label_B39B:; return;
label_B39E:; return;
label_B3A1:; return;
label_B3A4:; return;
label_B3A7:; return;
label_B3AA:; return;
label_B3AD:; return;
label_B3B0:; return;
label_B3B3:; return;
label_B3B6:; return;
label_B3B9:; return;
label_B3BC:; return;
label_B3BF:; return;
label_B3C2:; return;
label_B3C5:; return;
label_B3C8:; return;
label_B3CB:; return;
label_B3CE:; return;
label_B3D1:; return;
label_B3D4:; return;
label_B3D7:; return;
label_B3DA:; return;
label_B3DD:; return;
label_B3E0:; return;
label_B3E3:; return;
label_B3E6:; return;
label_B3E9:; return;
label_B3EC:; return;
label_B3EF:; return;
label_B3F2:; return;
label_B3F5:; return;
label_B3F8:; return;
label_B3FB:; return;
label_B3FE:; return;
label_B401:; return;
label_B404:; return;
label_B407:; return;
label_B40A:; return;
label_B40D:; return;
label_B410:; return;
label_B413:; return;
label_B416:; return;
label_B419:; return;
label_B41C:; return;
label_B41F:; return;
label_B422:; return;
label_B425:; return;
label_B428:; return;
label_B42B:; return;
label_B42E:; return;
label_B431:; return;
label_B434:; return;
label_B437:; return;
label_B43A:; return;
label_B43D:; return;
label_B440:; return;
label_B443:; return;
label_B446:; return;
label_B449:; return;
label_B44C:; return;
label_B44F:; return;
label_B452:; return;
label_B455:; return;
label_B458:; return;
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
label_B482:; return;
}

void func_A6B2_b7(void) { /* main_gemini_man */
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A6B2_b7");
#endif
label_A6B2:; /* main_gemini_man */
    /* $A6B2: EF */ maybe_trigger_vblank(6); { uint16_t a=0x5441; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6B5:;
    /* $A6B5: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5565 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6B8:;
    /* $A6B8: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF51 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6BB:;
    /* $A6BB: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6BD:;
    /* $A6BD: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6BF:;
    /* $A6BF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x1099 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C2:;
    /* $A6C2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A6C3:;
    /* $A6C3: 95 */ maybe_trigger_vblank(4); nes_write((0xCE + g_cpu.X) & 0xFF, g_cpu.A);
label_A6C5:;
    /* $A6C5: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0690), 7); return; }
label_A6C7:;
    /* $A6C7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xE1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6C9:;
    /* $A6C9: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_A6CB:;
    /* $A6CB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x72); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6CD:;
    /* $A6CD: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6CF:;
    /* $A6CF: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6D1:;
    /* $A6D1: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A6D3:;
    /* $A6D3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6D5:;
    /* $A6D5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57DD + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D8:;
    /* $A6D8: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6DB:;
    /* $A6DB: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x75FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6DE:;
    /* $A6DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6015 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E1:;
    /* $A6E1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6E3:;
    /* $A6E3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6E3); return;
}

void func_A745_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A745_b7");
#endif
label_A745:;
    /* $A745: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x07); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A747:;
    /* $A747: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x38) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A749:;
    /* $A749: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xDB) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74B:;
    /* $A74B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x6F + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A74D:;
    /* $A74D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xBD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A74F:;
    /* $A74F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A751:;
    /* $A751: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x3FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A756:;
    /* $A756: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF54 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A759:;
    /* $A759: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A75B:;
    /* $A75B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57F7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A75E:;
    /* $A75E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6275 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A761:;
    /* $A761: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x49 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A763:;
    /* $A763: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x9C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A765:;
    /* $A765: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xD0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A767:;
    /* $A767: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x28 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A769:;
    /* $A769: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A76B:;
    /* $A76B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x20 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A76D:;
    /* $A76D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x5A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A76F:;
    /* $A76F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x95); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A771:;
    /* $A771: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xD5); FLAG_NZ(g_cpu.A);
label_A773:;
    /* $A773: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xCA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A775:;
    /* $A775: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A777:;
    /* $A777: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xEF); FLAG_NZ(g_cpu.A);
label_A779:;
    /* $A779: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A77C:;
    /* $A77C: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x7775 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A77F:;
    /* $A77F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x51A8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A782:;
    /* $A782: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A786:;
    /* $A786: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x90 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A788:;
    /* $A788: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEF44 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A78B:;
    /* $A78B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x76); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78D:;
    /* $A78D: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78F:;
    /* $A78F: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A791:;
    /* $A791: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A794:;
    /* $A794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFD77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A797:;
    /* $A797: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A799:;
    /* $A799: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A79F:;
    /* $A79F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1B + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A1:;
    /* $A7A1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7A3:;
    /* $A7A3: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x073D), 7); return; }
label_A7A5:;
    /* $A7A5: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x21) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A7:;
    /* $A7A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x82 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7A9:;
    /* $A7A9: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x3B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AB:;
    /* $A7AB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AD:;
    /* $A7AD: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA7AD; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A774_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A774_b7");
#endif
label_A774:;
    /* $A774: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A775:;
    /* $A775: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A777:;
    /* $A777: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xEF); FLAG_NZ(g_cpu.A);
label_A779:;
    /* $A779: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A77C:;
    /* $A77C: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x7775 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A77F:;
    /* $A77F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x51A8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A782:;
    /* $A782: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A786:;
    /* $A786: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x90 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A788:;
    /* $A788: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEF44 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A78B:;
    /* $A78B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x76); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78D:;
    /* $A78D: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78F:;
    /* $A78F: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A791:;
    /* $A791: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A794:;
    /* $A794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFD77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A797:;
    /* $A797: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A799:;
    /* $A799: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A79F:;
    /* $A79F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1B + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A1:;
    /* $A7A1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7A3:;
    /* $A7A3: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x073D), 7); return; }
label_A7A5:;
    /* $A7A5: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x21) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A7:;
    /* $A7A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x82 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7A9:;
    /* $A7A9: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x3B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AB:;
    /* $A7AB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AD:;
    /* $A7AD: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA7AD; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A787_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A787_b7");
#endif
label_A787:;
    /* $A787: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0745), 7); return; }
label_A789:;
    /* $A789: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xEF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78B:;
    /* $A78B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x76); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78D:;
    /* $A78D: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78F:;
    /* $A78F: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A791:;
    /* $A791: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A794:;
    /* $A794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFD77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A797:;
    /* $A797: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A799:;
    /* $A799: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A79F:;
    /* $A79F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1B + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A1:;
    /* $A7A1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7A3:;
    /* $A7A3: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x073D), 7); return; }
label_A7A5:;
    /* $A7A5: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x21) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A7:;
    /* $A7A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x82 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7A9:;
    /* $A7A9: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x3B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AB:;
    /* $A7AB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AD:;
    /* $A7AD: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA7AD; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8D3_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8D3_b7");
#endif
label_A8D3:;
    /* $A8D3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D3); return;
}

void func_A222_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A222_b7");
#endif
label_A222:;
    /* $A222: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA222; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A234_b7_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A5E9;
        case 2: goto label_A59D;
        case 3: goto label_A4F8;
        case 4: goto label_A510;
        case 5: goto label_ABCE;
        case 6: goto label_A4BD;
        case 7: goto label_A4BA;
        case 8: goto label_ACCF;
        case 9: goto label_A53B;
        case 10: goto label_AA28;
        case 11: goto label_AC29;
        case 12: goto label_A8FF;
        case 13: goto label_A86F;
        case 14: goto label_A816;
        case 15: goto label_AD34;
        case 16: goto label_A7FB;
        case 17: goto label_AA73;
        case 18: goto label_AC18;
        case 19: goto label_A909;
        case 20: goto label_A9B3;
        case 21: goto label_AE1A;
        case 22: goto label_A811;
        case 23: goto label_A83D;
        case 24: goto label_AEAD;
        case 25: goto label_AD05;
        case 26: goto label_ABDC;
        case 27: goto label_A905;
        case 28: goto label_A504;
        case 29: goto label_A904;
        case 30: goto label_A2C7;
    }
label_A234:;
    /* $A234: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x82 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A236:;
    /* $A236: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A237:;
    /* $A237: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x24; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A239:;
    /* $A239: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1D0E); FLAG_NZ(g_cpu.A);
label_A23C:;
    /* $A23C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A23E:;
    /* $A23E: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1B0E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A241:;
    /* $A241: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2424 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A244:;
    /* $A244: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A246:;
    /* $A246: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A247:;
    /* $A247: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A19); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A24A:;
    /* $A24A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x2424); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A24D:;
    /* $A24D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC4); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A24F:;
    /* $A24F: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF0E4 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A252:;
    /* $A252: FC */ maybe_trigger_vblank(4); (void)nes_read((0x0D03 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A255:;
    /* $A255: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x3326 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A258:;
    /* $A258: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x4B3F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A25B:;
    /* $A25B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x60 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A25D:;
    /* $A25D: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x867D; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A260:;
    /* $A260: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xA2) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A262:;
    /* $A262: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A264:;
    /* $A264: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xE7 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A266:;
    /* $A266: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x210E + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A269:;
    /* $A269: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_A26A:;
    /* $A26A: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x5A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A26C:;
    /* $A26C: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0x7D; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A26E:;
    /* $A26E: 8E */ maybe_trigger_vblank(4); nes_write(0xB5A1, g_cpu.X);
label_A271:;
    /* $A271: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xD9; g_cpu.C=(g_cpu.A>=0xD9)?1:0; FLAG_NZ(r&0xFF); }
label_A273:;
    /* $A273: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF8; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A275:;
    /* $A275: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A276:;
    /* $A276: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x29 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A278:;
    /* $A278: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x44 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A27A:;
    /* $A27A: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x68 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A27C:;
    /* $A27C: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A27D:;
    /* $A27D: 89 */ maybe_trigger_vblank(2); /* NOP */
label_A27F:;
    /* $A27F: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A281:;
    /* $A281: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xE3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A283:;
    /* $A283: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x02F7); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A286:;
    /* $A286: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x2216); FLAG_NZ(g_cpu.A);
label_A289:;
    /* $A289: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA2; FLAG_NZ(g_cpu.X);
label_A28B:;
    /* $A28B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA2; FLAG_NZ(g_cpu.X);
label_A28D:;
    /* $A28D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xA3; FLAG_NZ(g_cpu.X);
label_A28F:;
    /* $A28F: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A291:;
    /* $A291: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A293:;
    /* $A293: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A295:;
    /* $A295: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A297:;
    /* $A297: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A299:;
    /* $A299: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A29B:;
    /* $A29B: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A29D:;
    /* $A29D: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A29F:;
    /* $A29F: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A1:;
    /* $A2A1: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0xA4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A2A3:;
    /* $A2A3: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA4); FLAG_NZ(g_cpu.Y);
label_A2A5:;
    /* $A2A5: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA4); FLAG_NZ(g_cpu.Y);
label_A2A7:;
    /* $A2A7: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA4); FLAG_NZ(g_cpu.Y);
label_A2A9:;
    /* $A2A9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA4); FLAG_NZ(g_cpu.Y);
label_A2AB:;
    /* $A2AB: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA4); FLAG_NZ(g_cpu.Y);
label_A2AD:;
    /* $A2AD: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA4); FLAG_NZ(g_cpu.Y);
label_A2AF:;
    /* $A2AF: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xA5); FLAG_NZ(g_cpu.Y);
label_A2B1:;
    /* $A2B1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_A2B3:;
    /* $A2B3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_A2B5:;
    /* $A2B5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_A2B7:;
    /* $A2B7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_A2B9:;
    /* $A2B9: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_A2BB:;
    /* $A2BB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_A2BD:;
    /* $A2BD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_A2BF:;
    /* $A2BF: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0xA6); FLAG_NZ(g_cpu.A);
label_A2C1:;
    /* $A2C1: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA6); FLAG_NZ(g_cpu.X);
label_A2C3:;
    /* $A2C3: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x00); FLAG_NZ(g_cpu.X);
label_A2C5:;
    /* $A2C5: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2C7:;
    /* $A2C7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A11); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2CA:;
    /* $A2CA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0C0A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2CD:;
    /* $A2CD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2D0:;
    /* $A2D0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A2D2:;
    /* $A2D2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x121C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2D5:;
    /* $A2D5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x02EE), 7); return; }
label_A2D7:;
    /* $A2D7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x031B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2DA:;
    /* $A2DA: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A2DC:;
    /* $A2DC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A2DD:;
    /* $A2DD: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2DF:;
    /* $A2DF: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1214; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2E2:;
    /* $A2E2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2E4:;
    /* $A2E4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_A2E6:;
    /* $A2E6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A2E7:;
    /* $A2E7: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A2E8:;
    /* $A2E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A2E9:;
    /* $A2E9: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x141E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2EC:; /* main_hari_harry */
    /* $A2EC: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A2ED:;
    /* $A2ED: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A2F0:;
    /* $A2F0: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A2F2:;
    /* $A2F2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A2F3:;
    /* $A2F3: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1418 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2F6:;
    /* $A2F6: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A2F7:;
    /* $A2F7: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2F9:;
    /* $A2F9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A2FA:;
    /* $A2FA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A2FC:;
    /* $A2FC: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0D; FLAG_NZ(g_cpu.A);
label_A2FE:;
    /* $A2FE: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x23 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A300:; /* enemy_OAM_ID_g */
    /* $A300: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A301:;
    /* $A301: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x12 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A303:;
    /* $A303: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A305:;
    /* $A305: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A307:;
    /* $A307: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A308:;
    /* $A308: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A30A:;
    /* $A30A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A30C:;
    /* $A30C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A30E:;
    /* $A30E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A30F:;
    /* $A30F: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x181C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A312:;
    /* $A312: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0D17 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A315:;
    /* $A315: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A317:;
    /* $A317: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A318:;
    /* $A318: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A31A:;
    /* $A31A: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A31B:;
    /* $A31B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x110E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A31E:;
    /* $A31E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0B05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A321:;
    /* $A321: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0B17 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A324:;
    /* $A324: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1417 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A327:;
    /* $A327: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A328:;
    /* $A328: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x19; FLAG_NZ(g_cpu.A);
label_A32A:;
    /* $A32A: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1018 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A32D:;
    /* $A32D: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x160A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A330:;
    /* $A330: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A332:;
    /* $A332: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0D17 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A335:;
    /* $A335: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A336:;
    /* $A336: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1426 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A339:;
    /* $A339: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x020D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A33C:;
    /* $A33C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A33D:;
    /* $A33D: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x16; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A33F:;
    /* $A33F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x080A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A342:;
    /* $A342: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A344:;
    /* $A344: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A347:;
    /* $A347: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A349:;
    /* $A349: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0018 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A34C:;
    /* $A34C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1906); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A34F:;
    /* $A34F: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0A + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A351:;
    /* $A351: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A353:;
    /* $A353: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x031B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A356:;
    /* $A356: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A358:;
    /* $A358: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1D0A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A35B:;
    /* $A35B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A35C:;
    /* $A35C: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A35F:;
    /* $A35F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A360:;
    /* $A360: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A362:;
    /* $A362: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1C; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A364:;
    /* $A364: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x240B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A367:;
    /* $A367: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0A15 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A36A:;
    /* $A36A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x17 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A36C:;
    /* $A36C: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A36D:;
    /* $A36D: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A36F:;
    /* $A36F: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_A371:;
    /* $A371: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A372:;
    /* $A372: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A374:;
    /* $A374: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x141E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A377:;
    /* $A377: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A378:;
    /* $A378: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A379:;
    /* $A379: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A11); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A37C:;
    /* $A37C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A37E:;
    /* $A37E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0B05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A381:;
    /* $A381: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A382:;
    /* $A382: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A384:;
    /* $A384: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A385:;
    /* $A385: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A386:;
    /* $A386: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x070B); FLAG_NZ(g_cpu.A);
label_A389:;
    /* $A389: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A38A:;
    /* $A38A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A38C:;
    /* $A38C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1214; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A38F:;
    /* $A38F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A391:;
    /* $A391: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x039B), 7); return; }
label_A393:;
    /* $A393: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x191C); FLAG_NZ(g_cpu.A);
label_A396:;
    /* $A396: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x120C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A399:;
    /* $A399: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x24 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A39C:;
    /* $A39C: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0A11 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A39F:;
    /* $A39F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x14 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3A1:;
    /* $A3A1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0913 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3A4:;
    /* $A3A4: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1E16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3A7:;
    /* $A3A7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3AA:;
    /* $A3AA: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3AB:;
    /* $A3AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A3AD:;
    /* $A3AD: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3AF:;
    /* $A3AF: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3B1:;
    /* $A3B1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3B3:;
    /* $A3B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x150A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3B6:;
    /* $A3B6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A3B7:;
    /* $A3B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0A1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3BA:;
    /* $A3BA: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3BC:;
    /* $A3BC: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3BF:;
    /* $A3BF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0F); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A3C1:;
    /* $A3C1: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1213 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3C4:;
    /* $A3C4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3C5:;
    /* $A3C5: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3C7:;
    /* $A3C7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0B + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3C9:;
    /* $A3C9: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A3CA:;
    /* $A3CA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A3CB:;
    /* $A3CB: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3CD:;
    /* $A3CD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3CE:;
    /* $A3CE: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A3D0:;
    /* $A3D0: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A3D1:;
    /* $A3D1: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A3D3:;
    /* $A3D3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3D5:;
    /* $A3D5: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0E07 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3D8:;
    /* $A3D8: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3DB:;
    /* $A3DB: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3DE:;
    /* $A3DE: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3E1:;
    /* $A3E1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x231E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3E4:;
    /* $A3E4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1214 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3E7:;
    /* $A3E7: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0E07 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3EA:;
    /* $A3EA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3ED:;
    /* $A3ED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3EE:;
    /* $A3EE: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3F0:;
    /* $A3F0: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F3:;
    /* $A3F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A3F5:;
    /* $A3F5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A3F7:;
    /* $A3F7: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A3F9:;
    /* $A3F9: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1106 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3FC:;
    /* $A3FC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A3FD:;
    /* $A3FD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A3FE:;
    /* $A3FE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A401:;
    /* $A401: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A404:;
    /* $A404: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A405:;
    /* $A405: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A407:;
    /* $A407: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A409:;
    /* $A409: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A40A:;
    /* $A40A: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A40C:;
    /* $A40C: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A40E:;
    /* $A40E: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x06 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A410:;
    /* $A410: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0A16; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A413:;
    /* $A413: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x220A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A416:;
    /* $A416: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A417:;
    /* $A417: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A41A:;
    /* $A41A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A41C:;
    /* $A41C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x23 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A41E:;
    /* $A41E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A41F:;
    /* $A41F: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A421:;
    /* $A421: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A423:;
    /* $A423: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1E13); FLAG_NZ(g_cpu.A);
label_A426:;
    /* $A426: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x13 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A428:;
    /* $A428: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A429:;
    /* $A429: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A42C:;
    /* $A42C: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A42E:;
    /* $A42E: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A430:;
    /* $A430: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x050A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A433:;
    /* $A433: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x11; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A435:;
    /* $A435: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A437:;
    /* $A437: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43A:;
    /* $A43A: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A43C:;
    /* $A43C: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A43F:;
    /* $A43F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A441:;
    /* $A441: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A443:;
    /* $A443: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A445:;
    /* $A445: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A448:;
    /* $A448: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A449:;
    /* $A449: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1D0A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A44C:;
    /* $A44C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C1E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A44F:;
    /* $A44F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A451:;
    /* $A451: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A453:;
    /* $A453: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A454:;
    /* $A454: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A457:;
    /* $A457: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A458:;
    /* $A458: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A45A:;
    /* $A45A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A45C:;
    /* $A45C: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1E22); FLAG_NZ(g_cpu.A);
label_A45F:;
    /* $A45F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A461:;
    /* $A461: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A464:;
    /* $A464: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x16); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A466:;
    /* $A466: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A469:;
    /* $A469: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A46C:;
    /* $A46C: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A46D:;
    /* $A46D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0A1D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A470:;
    /* $A470: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A472:;
    /* $A472: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A475:;
    /* $A475: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A477:;
    /* $A477: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A479:;
    /* $A479: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A47B:;
    /* $A47B: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x047D); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0D0A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA47B, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A47E:;
    /* $A47E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A480:;
    /* $A480: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A483:;
    /* $A483: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A484:;
    /* $A484: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A486:;
    /* $A486: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A489:;
    /* $A489: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A48C:;
    /* $A48C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0F12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A48F:;
    /* $A48F: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A491:;
    /* $A491: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A494:;
    /* $A494: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A495:;
    /* $A495: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A497:;
    /* $A497: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x240E); FLAG_NZ(g_cpu.A);
label_A49A:;
    /* $A49A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49B:;
    /* $A49B: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A49E:;
    /* $A49E: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0A1B + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4A1:;
    /* $A4A1: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4A3:;
    /* $A4A3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x04C2), 7); return; }
label_A4A5:;
    /* $A4A5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4A6:;
    /* $A4A6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4A8:;
    /* $A4A8: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4AB:;
    /* $A4AB: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4AD:;
    /* $A4AD: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4AE:;
    /* $A4AE: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4B1:;
    /* $A4B1: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x1E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B3:;
    /* $A4B3: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x130A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4B6:;
    /* $A4B6: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4B8:;
    /* $A4B8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4B9:;
    /* $A4B9: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4BA:;
    /* $A4BA: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1211 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4BD:;
    /* $A4BD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x170A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1824; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C3:;
    /* $A4C3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4C5:;
    /* $A4C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4C7:;
    /* $A4C7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1518 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4CA:;
    /* $A4CA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0C; FLAG_NZ(g_cpu.A);
label_A4CC:;
    /* $A4CC: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A4CD:;
    /* $A4CD: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4CE:;
    /* $A4CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4D1:;
    /* $A4D1: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4D2:;
    /* $A4D2: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4D4:;
    /* $A4D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1E23 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4D7:;
    /* $A4D7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4D9:;
    /* $A4D9: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4DB:;
    /* $A4DB: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E14); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4DE:;
    /* $A4DE: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4DF:;
    /* $A4DF: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x141E + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E2:;
    /* $A4E2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1124; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E5:;
    /* $A4E5: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A4E6:;
    /* $A4E6: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4E8:;
    /* $A4E8: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0B19 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4EB:;
    /* $A4EB: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1D; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A4ED:;
    /* $A4ED: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4EE:;
    /* $A4EE: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x1E + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F0:;
    /* $A4F0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A4F2:;
    /* $A4F2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A4F3:;
    /* $A4F3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F5:;
    /* $A4F5: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A4F8:;
    /* $A4F8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B08 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A4FB:;
    /* $A4FB: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4FE:;
    /* $A4FE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A501:;
    /* $A501: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1424 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A504:;
    /* $A504: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A505:;
    /* $A505: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A507:;
    /* $A507: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A508:;
    /* $A508: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B09 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50B:;
    /* $A50B: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A50D:;
    /* $A50D: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A510:;
    /* $A510: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A511:;
    /* $A511: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x18); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A513:;
    /* $A513: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A515:;
    /* $A515: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A517:;
    /* $A517: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x07 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A519:;
    /* $A519: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1211; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51C:;
    /* $A51C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1D0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A51F:;
    /* $A51F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A520:;
    /* $A520: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x1D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A524:;
    /* $A524: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A525:;
    /* $A525: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A527:;
    /* $A527: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x0A + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A529:;
    /* $A529: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A52B:;
    /* $A52B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52C:;
    /* $A52C: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A52D:;
    /* $A52D: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A52F:;
    /* $A52F: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x240A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A532:;
    /* $A532: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A533:;
    /* $A533: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A535:;
    /* $A535: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A538:;
    /* $A538: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A539:;
    /* $A539: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_A53B:;
    /* $A53B: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1017 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A53E:;
    /* $A53E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A53F:;
    /* $A53F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x12); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A541:;
    /* $A541: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0543); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x120A, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA541, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A544:;
    /* $A544: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A546:;
    /* $A546: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x111C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A549:;
    /* $A549: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A54A:;
    /* $A54A: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x19 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A54C:;
    /* $A54C: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x2412; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A54F:;
    /* $A54F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x18) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A551:;
    /* $A551: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x17) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A553:;
    /* $A553: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A554:;
    /* $A554: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x07; FLAG_NZ(g_cpu.A);
label_A556:;
    /* $A556: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x056C), 7); return; }
label_A558:;
    /* $A558: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A559:;
    /* $A559: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A55B:;
    /* $A55B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A55E:;
    /* $A55E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A55F:;
    /* $A55F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A561:;
    /* $A561: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A562:;
    /* $A562: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1612 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A565:;
    /* $A565: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A566:;
    /* $A566: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0B18 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A569:;
    /* $A569: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A56A:;
    /* $A56A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0E1D); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A56D:;
    /* $A56D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1E1C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A570:;
    /* $A570: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A572:;
    /* $A572: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x12 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A574:;
    /* $A574: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A575:;
    /* $A575: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A576:;
    /* $A576: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A578:;
    /* $A578: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0D08); FLAG_NZ(g_cpu.A);
label_A57B:;
    /* $A57B: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A57D:;
    /* $A57D: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1C0A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A580:;
    /* $A580: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A582:;
    /* $A582: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A584:;
    /* $A584: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A585:;
    /* $A585: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x141E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A588:;
    /* $A588: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A589:;
    /* $A589: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1305; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A58C:;
    /* $A58C: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x1811 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A58F:;
    /* $A58F: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0C12 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A592:;
    /* $A592: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A594:;
    /* $A594: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x2418 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A597:;
    /* $A597: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A598:;
    /* $A598: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A599:;
    /* $A599: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05BB), 7); return; }
label_A59D:;
    /* $A59D: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1211); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5A0:;
    /* $A5A0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x14) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A4:;
    /* $A5A4: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C12; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5A7:;
    /* $A5A7: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x0E14 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AA:;
    /* $A5AA: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5AC:;
    /* $A5AC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5AD:;
    /* $A5AD: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5AF:;
    /* $A5AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B0:;
    /* $A5B0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B1:;
    /* $A5B1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x140A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5B4:;
    /* $A5B4: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5B5:;
    /* $A5B5: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5B7:;
    /* $A5B7: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1E0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BA:;
    /* $A5BA: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5BC:;
    /* $A5BC: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1618 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BF:;
    /* $A5BF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A5C0:;
    /* $A5C0: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x14); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A5C2:;
    /* $A5C2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5C3:;
    /* $A5C3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x05CF), 7); return; }
label_A5C5:;
    /* $A5C5: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5C7:;
    /* $A5C7: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x09 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A5C9:;
    /* $A5C9: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x16; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A5CB:;
    /* $A5CB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5CC:;
    /* $A5CC: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5CE:;
    /* $A5CE: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2418 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D1:;
    /* $A5D1: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A5D2:;
    /* $A5D2: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x18 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5D4:;
    /* $A5D4: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x170E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5D7:;
    /* $A5D7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1609); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5DA:;
    /* $A5DA: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x261C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5DD:;
    /* $A5DD: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1B0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E0:;
    /* $A5E0: 1E */ maybe_trigger_vblank(7); { uint16_t a=(0x1216 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5E3:;
    /* $A5E3: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x050C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5E6:;
    /* $A5E6: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5E8:;
    /* $A5E8: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(2); goto label_A609; }
label_A5EB:;
    /* $A5EB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5EC:;
    /* $A5EC: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x070B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5EF:;
    /* $A5EF: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x140A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5F2:;
    /* $A5F2: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1819; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A5F5:;
    /* $A5F5: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x10 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5F7:;
    /* $A5F7: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x070B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5FA:;
    /* $A5FA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5FB:;
    /* $A5FB: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x0E11 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A5FE:;
    /* $A5FE: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x0D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A600:; /* top_spin_damage_table */
    /* $A600: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0117; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A603:;
    /* $A603: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A605:;
    /* $A605: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A607:;
    /* $A607: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A609:;
    /* $A609: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A60B:;
    /* $A60B: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A60C:;
    /* $A60C: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x03 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A60E:;
    /* $A60E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0A05); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A611:;
    /* $A611: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x0B12 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A614:;
    /* $A614: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A615:;
    /* $A615: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A617:;
    /* $A617: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A619:;
    /* $A619: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A61A:;
    /* $A61A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61B:;
    /* $A61B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x110C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A61E:;
    /* $A61E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A61F:;
    /* $A61F: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x24 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A621:;
    /* $A621: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x07 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A623:;
    /* $A623: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x1412 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A629:;
    /* $A629: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A62A:;
    /* $A62A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A62B:;
    /* $A62B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x2F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A67D; }
label_A62F:;
    /* $A62F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A631:;
    /* $A631: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A633:;
    /* $A633: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A635:;
    /* $A635: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A637:;
    /* $A637: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A639:;
    /* $A639: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFB + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A63B:;
    /* $A63B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A63D:;
    /* $A63D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A640:;
    /* $A640: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0692), 7); return; }
label_A642:;
    /* $A642: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x40) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x0351 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A647:;
    /* $A647: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x7F) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A649:;
    /* $A649: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A64B:;
    /* $A64B: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xA6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64D:;
    /* $A64D: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A64F:;
    /* $A64F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A651:;
    /* $A651: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xF5FD + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A654:;
    /* $A654: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF75 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A657:;
    /* $A657: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x9B + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A659:;
    /* $A659: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xDDFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65C:;
    /* $A65C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A662:;
    /* $A662: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A663:;
    /* $A663: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A665:;
    /* $A665: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA665); return;
label_A666:;
    /* $A666: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A668:;
    /* $A668: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A66A:;
    /* $A66A: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x10 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A66C:;
    /* $A66C: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A66E:;
    /* $A66E: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x8100); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A671:;
    /* $A671: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x32); FLAG_NZ(g_cpu.A);
label_A673:;
    /* $A673: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A675:;
    /* $A675: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xCA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A677:;
    /* $A677: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBD); FLAG_NZ(g_cpu.A);
label_A679:;
    /* $A679: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBB) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A67B:;
    /* $A67B: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_A67D:;
    /* $A67D: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xBF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A67F:;
    /* $A67F: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4127 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A682:;
    /* $A682: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x9B04 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A685:;
    /* $A685: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF9 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A687:;
    /* $A687: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x66) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A689:;
    /* $A689: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xDB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68B:;
    /* $A68B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68D:;
    /* $A68D: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A68F:;
    /* $A68F: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xFD) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A691:;
    /* $A691: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
label_A6AA:;
    /* $A6AA: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x14; FLAG_NZ(g_cpu.A);
label_A6AC:;
    /* $A6AC: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x1254 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6AF:;
    /* $A6AF: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xAF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6B1:;
    /* $A6B1: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xEF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6B3:;
    /* $A6B3: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x54 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6B5:;
    /* $A6B5: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x5565 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6B8:;
    /* $A6B8: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF51 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A6BB:;
    /* $A6BB: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6BD:;
    /* $A6BD: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6BF:;
    /* $A6BF: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x1099 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A6C2:;
    /* $A6C2: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A6C3:;
    /* $A6C3: 95 */ maybe_trigger_vblank(4); nes_write((0xCE + g_cpu.X) & 0xFF, g_cpu.A);
label_A6C5:;
    /* $A6C5: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0690), 7); return; }
label_A6C7:;
    /* $A6C7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xE1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6C9:;
    /* $A6C9: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xBB); FLAG_NZ(g_cpu.A);
label_A6CB:;
    /* $A6CB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x72); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6CD:;
    /* $A6CD: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x83 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6CF:;
    /* $A6CF: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0xDF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A6D1:;
    /* $A6D1: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7B + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A6D3:;
    /* $A6D3: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6D5:;
    /* $A6D5: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x57DD + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6D8:;
    /* $A6D8: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFDD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6DB:;
    /* $A6DB: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x75FF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A6DE:;
    /* $A6DE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6015 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E1:;
    /* $A6E1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x17 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6E3:;
    /* $A6E3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6E3); return;
label_A6E4:;
    /* $A6E4: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x44; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A6E6:;
    /* $A6E6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(2); goto label_A729; }
label_A6E8:;
    /* $A6E8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x54 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6EA:;
    /* $A6EA: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_A6EC:;
    /* $A6EC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x00; g_cpu.C=(g_cpu.X>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_A6EE:;
    /* $A6EE: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0251; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6F1:;
    /* $A6F1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x11 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6F3:;
    /* $A6F3: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA6F3; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A6F4:;
    /* $A6F4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_A6F5:;
    /* $A6F5: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xB4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6F7:;
    /* $A6F7: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A6F9:;
    /* $A6F9: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x90 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6FB:;
    /* $A6FB: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x29) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A6FD:;
    /* $A6FD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xF7 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6FF:;
    /* $A6FF: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x93) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A701:;
    /* $A701: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A703:;
    /* $A703: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x16DB); FLAG_NZ(g_cpu.A);
label_A706:;
    /* $A706: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFA1C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A709:;
    /* $A709: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xEF); FLAG_NZ(g_cpu.A);
label_A70B:;
    /* $A70B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xEF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A70D:;
    /* $A70D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55F6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A710:;
    /* $A710: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A713:;
    /* $A713: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A715:;
    /* $A715: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A717:;
    /* $A717: E7 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A719:;
    /* $A719: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A71B:;
    /* $A71B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD5FF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A71E:;
    /* $A71E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x08FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A721:;
    /* $A721: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x4C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A723:;
    /* $A723: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x5D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A725:;
    /* $A725: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xB4) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A727:;
    /* $A727: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A777; }
label_A729:;
    /* $A729: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x4E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A72B:;
    /* $A72B: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xAE) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A72D:;
    /* $A72D: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x4F); FLAG_NZ(g_cpu.A);
label_A72F:;
    /* $A72F: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x69) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A731:;
    /* $A731: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A731;
    }
label_A733:;
    /* $A733: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x77 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A735:;
    /* $A735: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5DFB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A738:;
    /* $A738: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xFF44 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A73B:;
    /* $A73B: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A73D:;
    /* $A73D: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A73F:;
    /* $A73F: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1040 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A742:;
    /* $A742: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x50; FLAG_NZ(g_cpu.A);
label_A744:;
    /* $A744: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x44) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A746:;
    /* $A746: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x51; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A748:;
    /* $A748: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A749:;
    /* $A749: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xDB) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74B:;
    /* $A74B: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x6F + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A74D:;
    /* $A74D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xBD + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A74F:;
    /* $A74F: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A751:;
    /* $A751: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A753:;
    /* $A753: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x3FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A756:;
    /* $A756: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF54 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A759:;
    /* $A759: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A75B:;
    /* $A75B: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x57F7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A75E:;
    /* $A75E: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6275 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A761:;
    /* $A761: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x49 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A763:;
    /* $A763: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x9C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A765:;
    /* $A765: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xD0 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A767:;
    /* $A767: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x28 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A769:;
    /* $A769: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x12) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A76B:;
    /* $A76B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x20 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A76D:;
    /* $A76D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x5A + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A76F:;
    /* $A76F: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x95); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A771:;
    /* $A771: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xD5); FLAG_NZ(g_cpu.A);
label_A773:;
    /* $A773: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xCA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A775:;
    /* $A775: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A777:;
    /* $A777: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xEF); FLAG_NZ(g_cpu.A);
label_A779:;
    /* $A779: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x557F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A77C:;
    /* $A77C: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x7775 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A77F:;
    /* $A77F: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x51A8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A782:;
    /* $A782: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A784:;
    /* $A784: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A786:;
    /* $A786: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x90 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A788:;
    /* $A788: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEF44 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_A78B:;
    /* $A78B: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x76); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78D:;
    /* $A78D: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xFF + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A78F:;
    /* $A78F: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A791:;
    /* $A791: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xF5FF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A794:;
    /* $A794: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFD77 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A797:;
    /* $A797: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xBF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A799:;
    /* $A799: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A79B:;
    /* $A79B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A79D:;
    /* $A79D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFD + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A79F:;
    /* $A79F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1B + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7A1:;
    /* $A7A1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7A3:;
    /* $A7A3: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A73D;
    }
label_A7A5:;
    /* $A7A5: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x21) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7A7:;
    /* $A7A7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x82 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7A9:;
    /* $A7A9: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x3B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AB:;
    /* $A7AB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x03) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7AD:;
    /* $A7AD: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA7AD; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A7AE:;
    /* $A7AE: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x35 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7B0:;
    /* $A7B0: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(2); call_by_address_tail((uint16_t)(g_code_window_base + 0x0806), 7); return; }
label_A7B2:;
    /* $A7B2: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A7B3:;
    /* $A7B3: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xBD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7B5:;
    /* $A7B5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0796), 7); return; }
label_A7B7:;
    /* $A7B7: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x7F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7B9:;
    /* $A7B9: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFE + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A7BB:;
    /* $A7BB: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x7DFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7BE:;
    /* $A7BE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x5A57 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7C1:;
    /* $A7C1: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x63 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A7C3:;
    /* $A7C3: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x07E4), 7); return; }
label_A7C5:;
    /* $A7C5: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A7CD; }
label_A7C7:;
    /* $A7C7: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x7F); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7C9:;
    /* $A7C9: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x3F + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7CB:; /* main_penpen_maker */
    /* $A7CB: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xFB); FLAG_NZ(g_cpu.A);
label_A7CD:;
    /* $A7CD: 54 */ maybe_trigger_vblank(4); (void)nes_read((0xFE + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7CF:;
    /* $A7CF: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFB) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D1:;
    /* $A7D1: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xDF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7D3:;
    /* $A7D3: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD6FF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7D6:;
    /* $A7D6: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFDD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A7D9:;
    /* $A7D9: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xFF + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A7DB:;
    /* $A7DB: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7DD:;
    /* $A7DD: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7DF:;
    /* $A7DF: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD0 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7E1:;
    /* $A7E1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E1); return;
label_A7E2:;
    /* $A7E2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E2); return;
label_A7E3:;
    /* $A7E3: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A7E5:;
    /* $A7E5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E5); return;
label_A7E6:;
    /* $A7E6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A7E7:;
    /* $A7E7: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x54); FLAG_NZ(g_cpu.A);
label_A7E9:;
    /* $A7E9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7E9); return;
label_A7EA:;
    /* $A7EA: 86 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.X);
label_A7EC:;
    /* $A7EC: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7EE:;
    /* $A7EE: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA7EE; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A7EF:;
    /* $A7EF: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x23); FLAG_NZ(g_cpu.A);
label_A7F1:;
    /* $A7F1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7F1); return;
label_A7F2:;
    /* $A7F2: 6E */ maybe_trigger_vblank(6); { uint16_t a=0x1811; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7F5:;
    /* $A7F5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x06); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A7F7:;
    /* $A7F7: 16 */ maybe_trigger_vblank(6); { uint16_t a=(0x8D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7F9:;
    /* $A7F9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA7F9); return;
label_A7FA:;
    /* $A7FA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7FB:;
    /* $A7FB: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0xFE) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7FD:;
    /* $A7FD: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A7FF:;
    /* $A7FF: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x28 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A801:;
    /* $A801: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x850A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A804:;
    /* $A804: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0806); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2003, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA804, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A807:;
    /* $A807: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A808:;
    /* $A808: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA808); return;
label_A809:;
    /* $A809: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A80A:;
    /* $A80A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80A); return;
label_A80B:;
    /* $A80B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80B); return;
label_A80C:;
    /* $A80C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80C); return;
label_A80D:;
    /* $A80D: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A80F:;
    /* $A80F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA80F); return;
label_A810:;
    /* $A810: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA810); return;
label_A811:;
    /* $A811: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA811); return;
label_A812:;
    /* $A812: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA812); return;
label_A813:;
    /* $A813: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA813); return;
label_A814:;
    /* $A814: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA814); return;
label_A815:;
    /* $A815: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA815); return;
label_A816:;
    /* $A816: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA816); return;
label_A817:;
    /* $A817: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA817); return;
label_A818:;
    /* $A818: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA818); return;
label_A819:;
    /* $A819: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA819); return;
label_A81A:;
    /* $A81A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81A); return;
label_A81B:;
    /* $A81B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A81C:;
    /* $A81C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81C); return;
label_A81D:;
    /* $A81D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81D); return;
label_A81E:;
    /* $A81E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81E); return;
label_A81F:;
    /* $A81F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA81F); return;
label_A820:;
    /* $A820: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x103A + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A823:;
    /* $A823: 99 */ maybe_trigger_vblank(5); nes_write((0x4F28 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A826:;
    /* $A826: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A827:;
    /* $A827: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A828:;
    /* $A828: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A82A:;
    /* $A82A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A82B:;
    /* $A82B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A82C:;
    /* $A82C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A82E:;
    /* $A82E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82E); return;
label_A82F:;
    /* $A82F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA82F); return;
label_A830:;
    /* $A830: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA830); return;
label_A831:;
    /* $A831: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A833:;
    /* $A833: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A835:;
    /* $A835: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA835); return;
label_A836:; /* test_facing_change */
    /* $A836: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA836); return;
label_A837:;
    /* $A837: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA837; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A838:;
    /* $A838: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA838); return;
label_A839:;
    /* $A839: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA839); return;
label_A83A:;
    /* $A83A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83A); return;
label_A83B:;
    /* $A83B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83B); return;
label_A83C:;
    /* $A83C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83C); return;
label_A83D:;
    /* $A83D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83D); return;
label_A83E:;
    /* $A83E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83E); return;
label_A83F:;
    /* $A83F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA83F); return;
label_A840:;
    /* $A840: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A842:;
    /* $A842: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A843:;
    /* $A843: 17 */ maybe_trigger_vblank(6); { uint16_t a=(0x62 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A845:;
    /* $A845: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A847:;
    /* $A847: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x40 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A849:;
    /* $A849: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A84B:;
    /* $A84B: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_A84D:;
    /* $A84D: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A84F:;
    /* $A84F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A851:;
    /* $A851: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA851); return;
label_A852:;
    /* $A852: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A854:;
    /* $A854: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA854); return;
label_A855:;
    /* $A855: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA855); return;
label_A856:;
    /* $A856: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA856); return;
label_A857:;
    /* $A857: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA857); return;
label_A858:;
    /* $A858: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA858); return;
label_A859:;
    /* $A859: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA859); return;
label_A85A:;
    /* $A85A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85A); return;
label_A85B:;
    /* $A85B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85B); return;
label_A85C:;
    /* $A85C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85C); return;
label_A85D:;
    /* $A85D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85D); return;
label_A85E:;
    /* $A85E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85E); return;
label_A85F:;
    /* $A85F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA85F); return;
label_A860:;
    /* $A860: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A861:;
    /* $A861: EF */ maybe_trigger_vblank(6); { uint16_t a=0xAA8A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A864:;
    /* $A864: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_A865:;
    /* $A865: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xBDB0); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A868:;
    /* $A868: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A869:;
    /* $A869: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xA2 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_A86B:;
    /* $A86B: DC */ maybe_trigger_vblank(4); (void)nes_read((0xC202 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A86E:;
    /* $A86E: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A86F:;
    /* $A86F: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x80); FLAG_NZ(g_cpu.A);
label_A871:;
    /* $A871: CE */ maybe_trigger_vblank(6); { uint16_t a=0x8C20; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A874:;
    /* $A874: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A875:;
    /* $A875: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x08; FLAG_NZ(g_cpu.A);
label_A877:;
    /* $A877: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x20 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A879:;
    /* $A879: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA879; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A87A:;
    /* $A87A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A87B:;
    /* $A87B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A87D; }
label_A87D:;
    /* $A87D: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A87F:;
    /* $A87F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA87F); return;
label_A880:;
    /* $A880: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A881:;
    /* $A881: E6 */ maybe_trigger_vblank(5); { uint16_t a=0xB0; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A883:;
    /* $A883: 8C */ maybe_trigger_vblank(4); nes_write(0x6A08, g_cpu.Y);
label_A886:;
    /* $A886: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA886); return;
label_A887:;
    /* $A887: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_A893; }
label_A889:;
    /* $A889: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A88A:;
    /* $A88A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88A); return;
label_A88B:;
    /* $A88B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88B); return;
label_A88C:;
    /* $A88C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88C); return;
label_A88D:;
    /* $A88D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A891; }
label_A88F:;
    /* $A88F: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A891; }
label_A891:;
    /* $A891: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA891); return;
label_A892:;
    /* $A892: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA892); return;
label_A893:;
    /* $A893: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA893); return;
label_A894:;
    /* $A894: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA894); return;
label_A895:;
    /* $A895: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA895); return;
label_A896:;
    /* $A896: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA896); return;
label_A897:;
    /* $A897: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA897); return;
label_A898:;
    /* $A898: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA898); return;
label_A899:;
    /* $A899: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA899); return;
label_A89A:;
    /* $A89A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A89B:;
    /* $A89B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89B); return;
label_A89C:;
    /* $A89C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89C); return;
label_A89D:;
    /* $A89D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89D); return;
label_A89E:;
    /* $A89E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA89E); return;
label_A89F:;
    /* $A89F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A8A1:;
    /* $A8A1: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0xA9); FLAG_NZ(g_cpu.X);
label_A8A3:;
    /* $A8A3: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { maybe_trigger_vblank(1); goto label_A8CF; }
label_A8A5:;
    /* $A8A5: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A8A6:;
    /* $A8A6: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A8A7:;
    /* $A8A7: 8E */ maybe_trigger_vblank(4); nes_write(0xA420, g_cpu.X);
label_A8AA:;
    /* $A8AA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8AB:;
    /* $A8AB: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08AD); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2F80, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8AB, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8AE:;
    /* $A8AE: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8AF:;
    /* $A8AF: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0x4800 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8B2:;
    /* $A8B2: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08B4); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0044, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8B2, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8B5:;
    /* $A8B5: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A8B7:;
    /* $A8B7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A8B9; }
label_A8B9:;
    /* $A8B9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A8BB; }
label_A8BB:;
    /* $A8BB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BB); return;
label_A8BC:;
    /* $A8BC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BC); return;
label_A8BD:;
    /* $A8BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8BD); return;
label_A8BE:;
    /* $A8BE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8BF:;
    /* $A8BF: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A8C1:;
    /* $A8C1: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xA8 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8C3:;
    /* $A8C3: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A8C4:;
    /* $A8C4: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A8C6:;
    /* $A8C6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8C7:;
    /* $A8C7: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xCA; FLAG_NZ(g_cpu.Y);
label_A8C9:;
    /* $A8C9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xA8C9; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A8CA:;
    /* $A8CA: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A8CC:;
    /* $A8CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8CC); return;
label_A8CD:;
    /* $A8CD: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A8CF:;
    /* $A8CF: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x20); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8D1:;
    /* $A8D1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08D3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8D1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8D4:;
    /* $A8D4: 80 */ maybe_trigger_vblank(2); /* NOP */
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
    /* $A8E0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8E1:;
    /* $A8E1: 56 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A8E3:;
    /* $A8E3: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFEA0); FLAG_NZ(g_cpu.X);
label_A8E6:;
    /* $A8E6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8E7:;
    /* $A8E7: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7E8A); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A8EA:;
    /* $A8EA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8EB:;
    /* $A8EB: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xD780 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A8EE:;
    /* $A8EE: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_A8EF:;
    /* $A8EF: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF1AA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8F2:;
    /* $A8F2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8F3:;
    /* $A8F3: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xCA22; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8F6:;
    /* $A8F6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x2D; FLAG_NZ(g_cpu.Y);
label_A8F8:;
    /* $A8F8: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A8FA:;
    /* $A8FA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x08FC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8040, 7)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA8FA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A8FD:;
    /* $A8FD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A8FE:;
    /* $A8FE: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A8FF:;
    /* $A8FF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8FF); return;
label_A900:; /* shadow_damage_table */
    /* $A900: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x92 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A902:;
    /* $A902: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A904:;
    /* $A904: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA904); return;
label_A905:;
    /* $A905: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A906:;
    /* $A906: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA906); return;
label_A907:;
    /* $A907: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A908:;
    /* $A908: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA908); return;
label_A909:;
    /* $A909: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A90B:;
    /* $A90B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA90B); return;
label_A90C:;
    /* $A90C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A90E:;
    /* $A90E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA90E); return;
label_A90F:;
    /* $A90F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A911:;
    /* $A911: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA911); return;
label_A912:;
    /* $A912: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA912); return;
label_A913:;
    /* $A913: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA913); return;
label_A914:;
    /* $A914: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA914); return;
label_A915:;
    /* $A915: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA915); return;
label_A916:;
    /* $A916: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA916); return;
label_A917:;
    /* $A917: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_A919; }
label_A919:;
    /* $A919: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA919); return;
label_A91A:;
    /* $A91A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91A); return;
label_A91B:;
    /* $A91B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91B); return;
label_A91C:;
    /* $A91C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91C); return;
label_A91D:;
    /* $A91D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91D); return;
label_A91E:;
    /* $A91E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91E); return;
label_A91F:;
    /* $A91F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA91F); return;
label_A920:;
    /* $A920: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A921:;
    /* $A921: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A922:;
    /* $A922: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A923:;
    /* $A923: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x2A20 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A926:;
    /* $A926: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A927:;
    /* $A927: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A928:;
    /* $A928: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x83; FLAG_NZ(g_cpu.X);
label_A92A:;
    /* $A92A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A92B:;
    /* $A92B: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xA2 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A92D:;
    /* $A92D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA92D); return;
label_A92E:;
    /* $A92E: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A930:;
    /* $A930: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA930); return;
label_A931:;
    /* $A931: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A933:;
    /* $A933: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x80); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A935:;
    /* $A935: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A936:;
    /* $A936: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA936); return;
label_A937:;
    /* $A937: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A939:;
    /* $A939: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA939); return;
label_A93A:;
    /* $A93A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93A); return;
label_A93B:;
    /* $A93B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A93D:;
    /* $A93D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93D); return;
label_A93E:;
    /* $A93E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93E); return;
label_A93F:;
    /* $A93F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA93F); return;
label_A940:;
    /* $A940: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A941:;
    /* $A941: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0300 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A944:;
    /* $A944: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0946); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0256, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA944, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A947:;
    /* $A947: 87 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A & g_cpu.X); /* SAX */
label_A949:;
    /* $A949: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x88 + g_cpu.X) & 0xFF), g_cpu.A);
label_A94B:;
    /* $A94B: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_A94D:;
    /* $A94D: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A94E:;
    /* $A94E: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0950); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2010, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xA94E, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_A951:;
    /* $A951: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA951); return;
label_A952:;
    /* $A952: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA952); return;
label_A953:;
    /* $A953: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA953); return;
label_A954:;
    /* $A954: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A956:;
    /* $A956: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA956); return;
label_A957:;
    /* $A957: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA957); return;
label_A958:;
    /* $A958: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA958); return;
label_A959:;
    /* $A959: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A95B:;
    /* $A95B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95B); return;
label_A95C:;
    /* $A95C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95C); return;
label_A95D:;
    /* $A95D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95D); return;
label_A95E:;
    /* $A95E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95E); return;
label_A95F:;
    /* $A95F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA95F); return;
label_A960:;
    /* $A960: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xD0; FLAG_NZ(g_cpu.X);
label_A962:;
    /* $A962: 82 */ maybe_trigger_vblank(2); /* NOP */
label_A964:;
    /* $A964: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A965:;
    /* $A965: 85 */ maybe_trigger_vblank(3); nes_write(0xA2, g_cpu.A);
label_A967:;
    /* $A967: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A968:;
    /* $A968: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A969:;
    /* $A969: 6B */ maybe_trigger_vblank(2); { g_cpu.A &= 0xAA; uint8_t c=g_cpu.C; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>6)&1; g_cpu.V=(((g_cpu.A>>6)&1)^((g_cpu.A>>5)&1)); }
label_A96B:;
    /* $A96B: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xA8); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A96D:;
    /* $A96D: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_A98F; }
label_A96F:;
    /* $A96F: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_A999; }
label_A971:;
    /* $A971: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A972:;
    /* $A972: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A973:;
    /* $A973: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A975:;
    /* $A975: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A976:;
    /* $A976: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A977:;
    /* $A977: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_A978:;
    /* $A978: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA978); return;
label_A979:;
    /* $A979: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A97B:;
    /* $A97B: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A97D:;
    /* $A97D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97D); return;
label_A97E:;
    /* $A97E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA97E); return;
label_A97F:;
    /* $A97F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A980:;
    /* $A980: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A981:;
    /* $A981: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A983:;
    /* $A983: 1A */ maybe_trigger_vblank(2); /* NOP */
label_A984:;
    /* $A984: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC3 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A986:;
    /* $A986: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A987:;
    /* $A987: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A989:;
    /* $A989: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A98B:;
    /* $A98B: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x22); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A98D:;
    /* $A98D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98D); return;
label_A98E:;
    /* $A98E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98E); return;
label_A98F:;
    /* $A98F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA98F); return;
label_A990:;
    /* $A990: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA990); return;
label_A991:;
    /* $A991: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA991); return;
label_A992:;
    /* $A992: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA992); return;
label_A993:;
    /* $A993: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A994:;
    /* $A994: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA994); return;
label_A995:;
    /* $A995: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA995); return;
label_A996:;
    /* $A996: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA996); return;
label_A997:;
    /* $A997: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA997); return;
label_A998:;
    /* $A998: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA998); return;
label_A999:;
    /* $A999: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA999); return;
label_A99A:;
    /* $A99A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99A); return;
label_A99B:;
    /* $A99B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99B); return;
label_A99C:;
    /* $A99C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99C); return;
label_A99D:;
    /* $A99D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99D); return;
label_A99E:;
    /* $A99E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99E); return;
label_A99F:;
    /* $A99F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA99F); return;
label_A9A0:;
    /* $A9A0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x39; FLAG_NZ(g_cpu.X);
label_A9A2:;
    /* $A9A2: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A9A3:;
    /* $A9A3: DE */ maybe_trigger_vblank(7); { uint16_t a=(0xF42A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A6:;
    /* $A9A6: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9A7:;
    /* $A9A7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0943), 7); return; }
label_A9A9:;
    /* $A9A9: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x20) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A9AB:;
    /* $A9AB: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x88 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x88); g_cpu.A=r&0xFF; }
label_A9AD:;
    /* $A9AD: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x2A + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_A9AF:;
    /* $A9AF: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x22) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9B1:;
    /* $A9B1: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A9B2:;
    /* $A9B2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9B3:;
    /* $A9B3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9B3); return;
label_A9B4:;
    /* $A9B4: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A9B5:;
    /* $A9B5: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x02); FLAG_NZ(g_cpu.Y);
label_A9B7:;
    /* $A9B7: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A9B9:;
    /* $A9B9: 95 */ maybe_trigger_vblank(4); nes_write((0x00 + g_cpu.X) & 0xFF, g_cpu.A);
label_A9BB:;
    /* $A9BB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BB); return;
label_A9BC:;
    /* $A9BC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BC); return;
label_A9BD:;
    /* $A9BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BD); return;
label_A9BE:;
    /* $A9BE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BE); return;
label_A9BF:;
    /* $A9BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9BF); return;
label_A9C0:;
    /* $A9C0: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_A9C1:;
    /* $A9C1: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC7AA); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9C4:;
    /* $A9C4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0xDF; FLAG_NZ(g_cpu.X);
label_A9C6:;
    /* $A9C6: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A9C7:;
    /* $A9C7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A949;
    }
label_A9C9:;
    /* $A9C9: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xE300 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9CC:;
    /* $A9CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9CC); return;
label_A9CD:;
    /* $A9CD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9CE:;
    /* $A9CE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A9CF:;
    /* $A9CF: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x09F1), 7); return; }
label_A9D1:;
    /* $A9D1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D1); return;
label_A9D2:;
    /* $A9D2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9D3:;
    /* $A9D3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D3); return;
label_A9D4:;
    /* $A9D4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D4); return;
label_A9D5:;
    /* $A9D5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A9D6:;
    /* $A9D6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D6); return;
label_A9D7:;
    /* $A9D7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D7); return;
label_A9D8:;
    /* $A9D8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA9D8); return;
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
    /* $A9E0: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A9E1:;
    /* $A9E1: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xA0 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A9E3:;
    /* $A9E3: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD308 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9E6:;
    /* $A9E6: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A9E8:;
    /* $A9E8: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A9E9:;
    /* $A9E9: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x9A2A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9EC:;
    /* $A9EC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A9ED:;
    /* $A9ED: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xB11A + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A9F0:;
    /* $A9F0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x75; FLAG_NZ(g_cpu.A);
label_A9F2:;
    /* $A9F2: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A9F3:;
    /* $A9F3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x0A + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A9F5:;
    /* $A9F5: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x95AA + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9F8:;
    /* $A9F8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xD5; FLAG_NZ(g_cpu.Y);
label_A9FA:;
    /* $A9FA: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A9FB:;
    /* $A9FB: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_A9FD:;
    /* $A9FD: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9FF:;
    /* $A9FF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AA01; }
label_AA01:;
    /* $AA01: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA03:;
    /* $AA03: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA05:;
    /* $AA05: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AA07:;
    /* $AA07: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA09:;
    /* $AA09: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0B; FLAG_NZ(g_cpu.A);
label_AA0B:;
    /* $AA0B: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x0A; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_AA0D:;
    /* $AA0D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA0E:;
    /* $AA0E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA0F:;
    /* $AA0F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA10:;
    /* $AA10: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA11:;
    /* $AA11: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA12:;
    /* $AA12: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA13:;
    /* $AA13: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA14:;
    /* $AA14: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0D0C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AA17:;
    /* $AA17: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0A0A); FLAG_NZ(g_cpu.A);
label_AA1A:;
    /* $AA1A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0000 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AA1D:;
    /* $AA1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA1D); return;
label_AA1E:;
    /* $AA1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA1E); return;
label_AA1F:;
    /* $AA1F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA1F); return;
label_AA20:;
    /* $AA20: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA21:;
    /* $AA21: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xD19A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AA24:;
    /* $AA24: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AA25:;
    /* $AA25: BE */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x19A8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.X);
label_AA28:;
    /* $AA28: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AA29:;
    /* $AA29: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3100 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA2C:;
    /* $AA2C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A2E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x80CA, 7)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA2C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA2F:;
    /* $AA2F: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA30:;
    /* $AA30: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x7E); FLAG_NZ(g_cpu.A);
label_AA32:;
    /* $AA32: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7E7E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA35:;
    /* $AA35: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_AA37:;
    /* $AA37: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA38:;
    /* $AA38: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA39:;
    /* $AA39: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x0002 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA3C:;
    /* $AA3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3C); return;
label_AA3D:;
    /* $AA3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3D); return;
label_AA3E:;
    /* $AA3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3E); return;
label_AA3F:;
    /* $AA3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA3F); return;
label_AA40:;
    /* $AA40: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA40; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA41:;
    /* $AA41: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA41; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA42:;
    /* $AA42: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA42; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA43:;
    /* $AA43: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA43; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA44:;
    /* $AA44: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA44; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA45:;
    /* $AA45: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA46:;
    /* $AA46: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A48); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x6020, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA46, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA49:;
    /* $AA49: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A4B); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x4040, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA49, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA4C:;
    /* $AA4C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A4E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2040, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA4C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA4F:;
    /* $AA4F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA4F; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA50:;
    /* $AA50: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A52); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2040, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA50, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA53:;
    /* $AA53: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA53; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA54:;
    /* $AA54: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A56); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x2040, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA54, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA57:;
    /* $AA57: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAA57; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA58:;
    /* $AA58: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0A5A); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; { uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_FF40(); g_code_window_base = _swb; }
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAA58, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AA5B:;
    /* $AA5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5B); return;
label_AA5C:;
    /* $AA5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5C); return;
label_AA5D:;
    /* $AA5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5D); return;
label_AA5E:;
    /* $AA5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5E); return;
label_AA5F:;
    /* $AA5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA5F); return;
label_AA60:;
    /* $AA60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA60); return;
label_AA61:;
    /* $AA61: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA61); return;
label_AA62:;
    /* $AA62: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AA63:;
    /* $AA63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA63); return;
label_AA64:;
    /* $AA64: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x3200 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA67:;
    /* $AA67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA67); return;
label_AA68:;
    /* $AA68: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_AA69:;
    /* $AA69: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA69); return;
label_AA6A:;
    /* $AA6A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA6A); return;
label_AA6B:;
    /* $AA6B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA6B); return;
label_AA6C:;
    /* $AA6C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA6D:;
    /* $AA6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA6D); return;
label_AA6E:;
    /* $AA6E: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AA6F:;
    /* $AA6F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA71:;
    /* $AA71: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA73:;
    /* $AA73: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA75:;
    /* $AA75: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA77:;
    /* $AA77: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA79:;
    /* $AA79: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA7B:;
    /* $AA7B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA7D:;
    /* $AA7D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA7F:;
    /* $AA7F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AA81:;
    /* $AA81: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_AA82:;
    /* $AA82: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2220; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA85:;
    /* $AA85: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA85); return;
label_AA86:;
    /* $AA86: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1020; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA89:;
    /* $AA89: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AA8A:;
    /* $AA8A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x1727; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA8D:;
    /* $AA8D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA8F:;
    /* $AA8F: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AA90:;
    /* $AA90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA90); return;
label_AA91:;
    /* $AA91: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA93:;
    /* $AA93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA93); return;
label_AA94:;
    /* $AA94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA94); return;
label_AA95:;
    /* $AA95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA95); return;
label_AA96:;
    /* $AA96: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2220; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA99:;
    /* $AA99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAA99); return;
label_AA9A:;
    /* $AA9A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0314; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA9D:;
    /* $AA9D: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AA9F:;
    /* $AA9F: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x17; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_AAA1:;
    /* $AAA1: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x0F; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAA3:;
    /* $AAA3: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AAA4:;
    /* $AAA4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA4); return;
label_AAA5:;
    /* $AAA5: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x8D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AAA7:;
    /* $AAA7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA7); return;
label_AAA8:;
    /* $AAA8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA8); return;
label_AAA9:;
    /* $AAA9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAA9); return;
label_AAAA:;
    /* $AAAA: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAAB:;
    /* $AAAB: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x330A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AAAE:;
    /* $AAAE: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAAF:;
    /* $AAAF: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xBEAA + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAB2:;
    /* $AAB2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAB3:;
    /* $AAB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB3); return;
label_AAB4:;
    /* $AAB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB4); return;
label_AAB5:;
    /* $AAB5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAB6:;
    /* $AAB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB6); return;
label_AAB7:;
    /* $AAB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAB7); return;
label_AAB8:;
    /* $AAB8: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAB9:;
    /* $AAB9: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AABA:;
    /* $AABA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABA); return;
label_AABB:;
    /* $AABB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABB); return;
label_AABC:;
    /* $AABC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABC); return;
label_AABD:;
    /* $AABD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AABF:;
    /* $AABF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAABF); return;
label_AAC0:;
    /* $AAC0: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AAC1:;
    /* $AAC1: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AAC2:;
    /* $AAC2: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AAC3:;
    /* $AAC3: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0A + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AAC5:;
    /* $AAC5: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0x8202 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAC8:;
    /* $AAC8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AAC9:;
    /* $AAC9: 81 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x00 + g_cpu.X) & 0xFF), g_cpu.A);
label_AACB:;
    /* $AACB: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x08; FLAG_NZ(g_cpu.Y);
label_AACD:;
    /* $AACD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAACD); return;
label_AACE:;
    /* $AACE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AAD0:;
    /* $AAD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD0); return;
label_AAD1:;
    /* $AAD1: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAD2:;
    /* $AAD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD2); return;
label_AAD3:;
    /* $AAD3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AAD4:;
    /* $AAD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD4); return;
label_AAD5:;
    /* $AAD5: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0AD7); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAAD5, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AAD8:;
    /* $AAD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAD8); return;
label_AAD9:;
    /* $AAD9: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
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
    /* $AAE0: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x3A; FLAG_NZ(g_cpu.Y);
label_AAE2:;
    /* $AAE2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AAE3:;
    /* $AAE3: B8 */ maybe_trigger_vblank(2); g_cpu.V = 0;
label_AAE4:;
    /* $AAE4: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAAE4; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAE5:;
    /* $AAE5: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xBA + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AAE7:;
    /* $AAE7: E2 */ maybe_trigger_vblank(2); /* NOP */
label_AAE9:;
    /* $AAE9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBA2 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_AAEC:;
    /* $AAEC: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x69; FLAG_NZ(g_cpu.A);
label_AAEE:;
    /* $AAEE: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AAEF:;
    /* $AAEF: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x1A08 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AAF2:;
    /* $AAF2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x9B; FLAG_NZ(g_cpu.X);
label_AAF4:;
    /* $AAF4: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AAF6:;
    /* $AAF6: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AAF7:;
    /* $AAF7: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF08 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAFA:;
    /* $AAFA: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x000C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AAFD:;
    /* $AAFD: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_AAFF:;
    /* $AAFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAAFF); return;
label_AB00:;
    /* $AB00: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB00); return;
label_AB01:;
    /* $AB01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB01); return;
label_AB02:;
    /* $AB02: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB02); return;
label_AB03:;
    /* $AB03: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB03); return;
label_AB04:;
    /* $AB04: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB04); return;
label_AB05:;
    /* $AB05: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB07:;
    /* $AB07: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB08:;
    /* $AB08: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB09:;
    /* $AB09: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB0A:;
    /* $AB0A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB0B:;
    /* $AB0B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB0C:;
    /* $AB0C: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x04 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB0E:;
    /* $AB0E: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x06); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB10:;
    /* $AB10: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB12:;
    /* $AB12: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AB14:;
    /* $AB14: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AB16:;
    /* $AB16: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AB18:;
    /* $AB18: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x09; FLAG_NZ(g_cpu.A);
label_AB1A:;
    /* $AB1A: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x0A; FLAG_NZ(g_cpu.A);
label_AB1C:;
    /* $AB1C: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x100E); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB1F:;
    /* $AB1F: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_AB20:;
    /* $AB20: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x16 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB22:;
    /* $AB22: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AB23:;
    /* $AB23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x8E01 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AB26:;
    /* $AB26: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB27:;
    /* $AB27: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_AB2A:;
    /* $AB2A: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB2B:;
    /* $AB2B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB2B); return;
label_AB2C:;
    /* $AB2C: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB2D:;
    /* $AB2D: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x4100; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_AB30:;
    /* $AB30: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AB31:;
    /* $AB31: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AB32:;
    /* $AB32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB32); return;
label_AB33:;
    /* $AB33: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB35:;
    /* $AB35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB35); return;
label_AB36:;
    /* $AB36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB36); return;
label_AB37:;
    /* $AB37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB37); return;
label_AB38:;
    /* $AB38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB38); return;
label_AB39:;
    /* $AB39: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB3A:;
    /* $AB3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3A); return;
label_AB3B:;
    /* $AB3B: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB3D:;
    /* $AB3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3D); return;
label_AB3E:;
    /* $AB3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3E); return;
label_AB3F:;
    /* $AB3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB3F); return;
label_AB40:;
    /* $AB40: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AB41:;
    /* $AB41: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x82; FLAG_NZ(g_cpu.X);
label_AB43:;
    /* $AB43: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB45:;
    /* $AB45: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0402; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB48:;
    /* $AB48: 82 */ maybe_trigger_vblank(2); /* NOP */
label_AB4A:;
    /* $AB4A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB4B:;
    /* $AB4B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x80; FLAG_NZ(g_cpu.Y);
label_AB4D:;
    /* $AB4D: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_AB4F:;
    /* $AB4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB4F); return;
label_AB50:;
    /* $AB50: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB51:;
    /* $AB51: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0B53); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x9000, 7)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAB51, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AB54:;
    /* $AB54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB54); return;
label_AB55:;
    /* $AB55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB55); return;
label_AB56:;
    /* $AB56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB56); return;
label_AB57:;
    /* $AB57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB57); return;
label_AB58:;
    /* $AB58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB58); return;
label_AB59:;
    /* $AB59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB59); return;
label_AB5A:;
    /* $AB5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5A); return;
label_AB5B:; /* main_bolton_and_nutton */
    /* $AB5B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB5C:;
    /* $AB5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5C); return;
label_AB5D:;
    /* $AB5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5D); return;
label_AB5E:;
    /* $AB5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5E); return;
label_AB5F:;
    /* $AB5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB5F); return;
label_AB60:;
    /* $AB60: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x22; FLAG_NZ(g_cpu.A);
label_AB62:;
    /* $AB62: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AB63:;
    /* $AB63: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AB64:;
    /* $AB64: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AB65:;
    /* $AB65: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xAA + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB67:;
    /* $AB67: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x20 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AB69:;
    /* $AB69: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0482 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB6C:;
    /* $AB6C: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AB6D:;
    /* $AB6D: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x6FA2); FLAG_NZ(g_cpu.A);
label_AB70:;
    /* $AB70: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AB71:;
    /* $AB71: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_AB9D; }
label_AB73:;
    /* $AB73: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x2A; g_cpu.C=(g_cpu.Y>=0x2A)?1:0; FLAG_NZ(r&0xFF); }
label_AB75:;
    /* $AB75: 85 */ maybe_trigger_vblank(3); nes_write(0x28, g_cpu.A);
label_AB77:;
    /* $AB77: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x0D08 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB7A:;
    /* $AB7A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB7A); return;
label_AB7B:;
    /* $AB7B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB7D:;
    /* $AB7D: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AB7F:;
    /* $AB7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB7F); return;
label_AB80:;
    /* $AB80: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB81:;
    /* $AB81: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_AB82:;
    /* $AB82: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AB83:;
    /* $AB83: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x00AA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB86:;
    /* $AB86: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AB87:;
    /* $AB87: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB89:;
    /* $AB89: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AB8B:;
    /* $AB8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB8B); return;
label_AB8C:;
    /* $AB8C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AB8E:;
    /* $AB8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB8E); return;
label_AB8F:;
    /* $AB8F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAB8F; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB90:;
    /* $AB90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB90); return;
label_AB91:;
    /* $AB91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB91); return;
label_AB92:;
    /* $AB92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB92); return;
label_AB93:;
    /* $AB93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB93); return;
label_AB94:;
    /* $AB94: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB94); return;
label_AB95:;
    /* $AB95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB95); return;
label_AB96:;
    /* $AB96: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB96); return;
label_AB97:;
    /* $AB97: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB97); return;
label_AB98:;
    /* $AB98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB98); return;
label_AB99:;
    /* $AB99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB99); return;
label_AB9A:;
    /* $AB9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9A); return;
label_AB9B:;
    /* $AB9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9B); return;
label_AB9C:;
    /* $AB9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9C); return;
label_AB9D:;
    /* $AB9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9D); return;
label_AB9E:;
    /* $AB9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9E); return;
label_AB9F:;
    /* $AB9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAB9F); return;
label_ABA0:;
    /* $ABA0: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_ABA1:;
    /* $ABA1: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x82 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_ABA3:;
    /* $ABA3: 26 */ maybe_trigger_vblank(5); { uint16_t a=0xA8; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABA5:;
    /* $ABA5: CE */ maybe_trigger_vblank(6); { uint16_t a=0x083A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ABA8:;
    /* $ABA8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_ABA9:;
    /* $ABA9: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_ABAA:;
    /* $ABAA: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_ABAB:;
    /* $ABAB: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0CA0 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABAE:;
    /* $ABAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABAE); return;
label_ABAF:;
    /* $ABAF: 86 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.X);
label_ABB1:;
    /* $ABB1: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ABB3:;
    /* $ABB3: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_ABB5:;
    /* $ABB5: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABB6:;
    /* $ABB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB6); return;
label_ABB7:;
    /* $ABB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABB7); return;
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
    /* $ABBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBE); return;
label_ABBF:;
    /* $ABBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABBF); return;
label_ABC0:;
    /* $ABC0: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x23) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABC2:;
    /* $ABC2: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_ABC3:;
    /* $ABC3: A3 */ maybe_trigger_vblank(6); g_cpu.A = g_cpu.X = nes_read(nes_read16zp((0x21 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ABC5:;
    /* $ABC5: 84 */ maybe_trigger_vblank(3); nes_write(0xAA, g_cpu.Y);
label_ABC7:;
    /* $ABC7: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ABC8:;
    /* $ABC8: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_ABC9:;
    /* $ABC9: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x20); FLAG_NZ(g_cpu.A);
label_ABCB:;
    /* $ABCB: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xABCB; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ABCC:;
    /* $ABCC: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_ABCD:;
    /* $ABCD: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ABCE:;
    /* $ABCE: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BD0); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x202B, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xABCE, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ABD1:;
    /* $ABD1: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0BD3); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0800, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xABD1, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ABD4:;
    /* $ABD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABD4); return;
label_ABD5:;
    /* $ABD5: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xABD5; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
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
    /* $ABDB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDB); return;
label_ABDC:;
    /* $ABDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDC); return;
label_ABDD:;
    /* $ABDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDD); return;
label_ABDE:;
    /* $ABDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDE); return;
label_ABDF:;
    /* $ABDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABDF); return;
label_ABE0:;
    /* $ABE0: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_ABE1:;
    /* $ABE1: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0xE6 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABE3:;
    /* $ABE3: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ABE5:;
    /* $ABE5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB89;
    }
label_ABE7:;
    /* $ABE7: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_ABE8:;
    /* $ABE8: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_ABE9:;
    /* $ABE9: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x762A + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ABEC:;
    /* $ABEC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ABED:;
    /* $ABED: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_ABF0:;
    /* $ABF0: 8E */ maybe_trigger_vblank(4); nes_write(0xD8EA, g_cpu.X);
label_ABF3:;
    /* $ABF3: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x02 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABF5:;
    /* $ABF5: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x9220; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_ABF8:;
    /* $ABF8: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_ABF9:;
    /* $ABF9: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_ABFB:;
    /* $ABFB: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x82) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABFD:;
    /* $ABFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFD); return;
label_ABFE:;
    /* $ABFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xABFE); return;
label_ABFF:;
    /* $ABFF: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC01:;
    /* $AC01: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AC02:;
    /* $AC02: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AC03:;
    /* $AC03: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_AC04:;
    /* $AC04: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x50; g_cpu.C=(g_cpu.Y>=0x50)?1:0; FLAG_NZ(r&0xFF); }
label_AC06:;
    /* $AC06: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x68); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC08:;
    /* $AC08: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x80 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC0A:;
    /* $AC0A: 84 */ maybe_trigger_vblank(3); nes_write(0x94, g_cpu.Y);
label_AC0C:;
    /* $AC0C: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C7E), 7); return; }
label_AC0E:;
    /* $AC0E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ABC0;
    }
label_AC10:;
    /* $AC10: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_AC42; }
label_AC12:;
    /* $AC12: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AC13:;
    /* $AC13: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_AC14:;
    /* $AC14: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC15:;
    /* $AC15: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_AC16:;
    /* $AC16: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC17:;
    /* $AC17: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_AC18:;
    /* $AC18: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC19:;
    /* $AC19: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_AC1A:;
    /* $AC1A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ABDC;
    }
label_AC1C:;
    /* $AC1C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC1D:;
    /* $AC1D: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AC1E:;
    /* $AC1E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC1F:;
    /* $AC1F: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xD0; g_cpu.C=(g_cpu.Y>=0xD0)?1:0; FLAG_NZ(r&0xFF); }
label_AC21:;
    /* $AC21: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_AC22:;
    /* $AC22: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xFF; g_cpu.C=(g_cpu.Y>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_AC24:;
    /* $AC24: 59 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x2401 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC27:;
    /* $AC27: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC29:;
    /* $AC29: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC2B:;
    /* $AC2B: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x02 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AC2D:;
    /* $AC2D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC73; }
label_AC2F:;
    /* $AC2F: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_AC31; }
label_AC31:;
    /* $AC31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC31); return;
label_AC32:;
    /* $AC32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC32); return;
label_AC33:;
    /* $AC33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC33); return;
label_AC34:;
    /* $AC34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC34); return;
label_AC35:;
    /* $AC35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC35); return;
label_AC36:;
    /* $AC36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC36); return;
label_AC37:;
    /* $AC37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC37); return;
label_AC38:;
    /* $AC38: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC38); return;
label_AC39:;
    /* $AC39: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC39); return;
label_AC3A:;
    /* $AC3A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC3C; }
label_AC3C:;
    /* $AC3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3C); return;
label_AC3D:;
    /* $AC3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3D); return;
label_AC3E:;
    /* $AC3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3E); return;
label_AC3F:;
    /* $AC3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC3F); return;
label_AC40:;
    /* $AC40: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC42:;
    /* $AC42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC42); return;
label_AC43:;
    /* $AC43: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC43); return;
label_AC44:;
    /* $AC44: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC44); return;
label_AC45:;
    /* $AC45: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0C0F), 7); return; }
label_AC47:;
    /* $AC47: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC49:;
    /* $AC49: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x00 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC4B:;
    /* $AC4B: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x08 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC4D:;
    /* $AC4D: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC4F:;
    /* $AC4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC4F); return;
label_AC50:;
    /* $AC50: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC50); return;
label_AC51:;
    /* $AC51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC51); return;
label_AC52:;
    /* $AC52: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC54:;
    /* $AC54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC54); return;
label_AC55:;
    /* $AC55: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC58; }
label_AC57:;
    /* $AC57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC57); return;
label_AC58:;
    /* $AC58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC58); return;
label_AC59:;
    /* $AC59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC59); return;
label_AC5A:;
    /* $AC5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5A); return;
label_AC5B:;
    /* $AC5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5B); return;
label_AC5C:;
    /* $AC5C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5C); return;
label_AC5D:;
    /* $AC5D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5D); return;
label_AC5E:;
    /* $AC5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5E); return;
label_AC5F:;
    /* $AC5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC5F); return;
label_AC60:;
    /* $AC60: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0000); FLAG_NZ(g_cpu.A);
label_AC63:;
    /* $AC63: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC63); return;
label_AC64:;
    /* $AC64: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC66:;
    /* $AC66: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { maybe_trigger_vblank(1); goto label_AC68; }
label_AC68:;
    /* $AC68: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AC69:;
    /* $AC69: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x21 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC6B:;
    /* $AC6B: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x11); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC6D:;
    /* $AC6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6D); return;
label_AC6E:;
    /* $AC6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6E); return;
label_AC6F:;
    /* $AC6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC6F); return;
label_AC70:;
    /* $AC70: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC72:;
    /* $AC72: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC72); return;
label_AC73:;
    /* $AC73: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC73); return;
label_AC74:;
    /* $AC74: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC74); return;
label_AC75:;
    /* $AC75: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x14 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC77:;
    /* $AC77: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AC79; }
label_AC79:;
    /* $AC79: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC79); return;
label_AC7A:;
    /* $AC7A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7A); return;
label_AC7B:;
    /* $AC7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7B); return;
label_AC7C:;
    /* $AC7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7C); return;
label_AC7D:;
    /* $AC7D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AC7F:;
    /* $AC7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC7F); return;
label_AC80:;
    /* $AC80: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC82:;
    /* $AC82: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AC84:;
    /* $AC84: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ACC6; }
label_AC86:;
    /* $AC86: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAC86; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AC87:;
    /* $AC87: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC87); return;
label_AC88:;
    /* $AC88: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AC89:;
    /* $AC89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC89); return;
label_AC8A:;
    /* $AC8A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
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
    /* $AC92: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC92); return;
label_AC93:;
    /* $AC93: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC93); return;
label_AC94:;
    /* $AC94: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AC95:;
    /* $AC95: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC95); return;
label_AC96:;
    /* $AC96: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AC98:;
    /* $AC98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC98); return;
label_AC99:;
    /* $AC99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC99); return;
label_AC9A:;
    /* $AC9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9A); return;
label_AC9B:;
    /* $AC9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9B); return;
label_AC9C:;
    /* $AC9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9C); return;
label_AC9D:;
    /* $AC9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9D); return;
label_AC9E:;
    /* $AC9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9E); return;
label_AC9F:;
    /* $AC9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAC9F); return;
label_ACA0:;
    /* $ACA0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA0); return;
label_ACA1:;
    /* $ACA1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA1); return;
label_ACA2:;
    /* $ACA2: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ACA4:;
    /* $ACA4: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_ACA5:;
    /* $ACA5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACA5); return;
label_ACA6:;
    /* $ACA6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACA7:;
    /* $ACA7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(1);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AC29;
    }
label_ACA9:;
    /* $ACA9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACA9; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACAA:;
    /* $ACAA: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x00; FLAG_NZ(g_cpu.A);
label_ACAC:;
    /* $ACAC: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ACAE:;
    /* $ACAE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAE); return;
label_ACAF:;
    /* $ACAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACAF); return;
label_ACB0:;
    /* $ACB0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACB2:;
    /* $ACB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB2); return;
label_ACB3:;
    /* $ACB3: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACB3; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACB4:;
    /* $ACB4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB4); return;
label_ACB5:;
    /* $ACB5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB5); return;
label_ACB6:;
    /* $ACB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACB6); return;
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
    /* $ACBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBD); return;
label_ACBE:;
    /* $ACBE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBE); return;
label_ACBF:;
    /* $ACBF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACBF); return;
label_ACC0:;
    /* $ACC0: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x01 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACC2:;
    /* $ACC2: 60 */ maybe_trigger_vblank(6); { g_cpu.S++; uint8_t _rts_lo = g_ram[0x100 + g_cpu.S]; g_cpu.S++; uint8_t _rts_hi = g_ram[0x100 + g_cpu.S]; g_rts_target = (uint16_t)(((uint16_t)_rts_hi << 8) | _rts_lo); } /* pop JSR return address */

#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACC3:;
    /* $ACC3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACC3); return;
label_ACC4:;
    /* $ACC4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x10 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ACC6:;
    /* $ACC6: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x41); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ACC8:;
    /* $ACC8: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACC8; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACC9:;
    /* $ACC9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACC9; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACCA:;
    /* $ACCA: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_ACCC:;
    /* $ACCC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCC); return;
label_ACCD:;
    /* $ACCD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCD); return;
label_ACCE:;
    /* $ACCE: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xACCE; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACCF:;
    /* $ACCF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACCF); return;
label_ACD0:;
    /* $ACD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD0); return;
label_ACD1:;
    /* $ACD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD1); return;
label_ACD2:;
    /* $ACD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD2); return;
label_ACD3:;
    /* $ACD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD3); return;
label_ACD4:;
    /* $ACD4: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD4); return;
label_ACD5:;
    /* $ACD5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD5); return;
label_ACD6:;
    /* $ACD6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD6); return;
label_ACD7:;
    /* $ACD7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD7); return;
label_ACD8:;
    /* $ACD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACD8); return;
label_ACD9:;
    /* $ACD9: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
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
    /* $ACE0: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACE1:;
    /* $ACE1: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x18 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACE3:;
    /* $ACE3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACE3); return;
label_ACE4:;
    /* $ACE4: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x00; g_cpu.C=(g_cpu.Y>=0x00)?1:0; FLAG_NZ(r&0xFF); }
label_ACE6:;
    /* $ACE6: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ACE8:;
    /* $ACE8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x01; FLAG_NZ(g_cpu.Y);
label_ACEA:;
    /* $ACEA: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACEB:;
    /* $ACEB: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACED:;
    /* $ACED: 44 */ maybe_trigger_vblank(3); (void)nes_read(0xFE); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACEF:;
    /* $ACEF: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x31); FLAG_NZ(g_cpu.A);
label_ACF1:;
    /* $ACF1: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACF3:;
    /* $ACF3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF3); return;
label_ACF4:;
    /* $ACF4: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ACF6:;
    /* $ACF6: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ACF7:;
    /* $ACF7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACF7); return;
label_ACF8:;
    /* $ACF8: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ACFA:;
    /* $ACFA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFA); return;
label_ACFB:;
    /* $ACFB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFB); return;
label_ACFC:;
    /* $ACFC: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_ACFE:;
    /* $ACFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xACFE); return;
label_ACFF:;
    /* $ACFF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); call_by_address_tail((uint16_t)(g_code_window_base + 0x0D3D), 7); return; }
label_AD01:;
    /* $AD01: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x3C3C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD04:;
    /* $AD04: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AD05:;
    /* $AD05: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AD06:;
    /* $AD06: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5CB8 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD09:; /* main_have_su_bee */
    /* $AD09: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD0A:;
    /* $AD0A: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x485C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD0D:;
    /* $AD0D: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AD0E:;
    /* $AD0E: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AD0F:;
    /* $AD0F: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { maybe_trigger_vblank(1); goto label_AD11; }
label_AD11:;
    /* $AD11: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ACCF;
    }
label_AD13:;
    /* $AD13: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBCBC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AD16:;
    /* $AD16: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x5C5C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD19:;
    /* $AD19: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x0088 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD1C:;
    /* $AD1C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1C); return;
label_AD1D:;
    /* $AD1D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1D); return;
label_AD1E:;
    /* $AD1E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1E); return;
label_AD1F:;
    /* $AD1F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD1F); return;
label_AD20:;
    /* $AD20: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD20); return;
label_AD21:;
    /* $AD21: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD21); return;
label_AD22:;
    /* $AD22: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD22); return;
label_AD23:;
    /* $AD23: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4002 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_AD26:;
    /* $AD26: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D28); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x1200, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD26, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD29:;
    /* $AD29: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x80 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD2B:;
    /* $AD2B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD2B); return;
label_AD2C:;
    /* $AD2C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AD2E:;
    /* $AD2E: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AD30:;
    /* $AD30: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD32:;
    /* $AD32: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD32); return;
label_AD33:;
    /* $AD33: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD33); return;
label_AD34:;
    /* $AD34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD34); return;
label_AD35:;
    /* $AD35: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD37; }
label_AD37:;
    /* $AD37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD37); return;
label_AD38:;
    /* $AD38: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD3A:;
    /* $AD3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3A); return;
label_AD3B:;
    /* $AD3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD3B); return;
label_AD3C:;
    /* $AD3C: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0D3E); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAD3C, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AD3F:;
    /* $AD3F: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAD3F; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD40:;
    /* $AD40: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD40); return;
label_AD41:;
    /* $AD41: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD41); return;
label_AD42:;
    /* $AD42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD42); return;
label_AD43:;
    /* $AD43: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAD43; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD44:;
    /* $AD44: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AD46:;
    /* $AD46: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD46); return;
label_AD47:;
    /* $AD47: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x20 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD49:;
    /* $AD49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD49); return;
label_AD4A:;
    /* $AD4A: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_AD4B:;
    /* $AD4B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4B); return;
label_AD4C:;
    /* $AD4C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD4E:;
    /* $AD4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD4E); return;
label_AD4F:;
    /* $AD4F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD51:;
    /* $AD51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD51); return;
label_AD52:;
    /* $AD52: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD53:;
    /* $AD53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD53); return;
label_AD54:;
    /* $AD54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD54); return;
label_AD55:;
    /* $AD55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD55); return;
label_AD56:;
    /* $AD56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD56); return;
label_AD57:;
    /* $AD57: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD59:;
    /* $AD59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD59); return;
label_AD5A:;
    /* $AD5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5A); return;
label_AD5B:;
    /* $AD5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5B); return;
label_AD5C:;
    /* $AD5C: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AD5E:;
    /* $AD5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5E); return;
label_AD5F:;
    /* $AD5F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD5F); return;
label_AD60:;
    /* $AD60: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x05; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_AD62:;
    /* $AD62: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AD64:;
    /* $AD64: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD76; }
label_AD66:;
    /* $AD66: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD68:;
    /* $AD68: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD69:;
    /* $AD69: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x94); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD6B:;
    /* $AD6B: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x42 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AD6D:;
    /* $AD6D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD6D); return;
label_AD6E:;
    /* $AD6E: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AD70:;
    /* $AD70: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x40); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD72:;
    /* $AD72: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0200); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD75:;
    /* $AD75: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD75); return;
label_AD76:;
    /* $AD76: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD76); return;
label_AD77:;
    /* $AD77: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD77); return;
label_AD78:;
    /* $AD78: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD78); return;
label_AD79:;
    /* $AD79: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AD7B; }
label_AD7B:;
    /* $AD7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7B); return;
label_AD7C:;
    /* $AD7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7C); return;
label_AD7D:;
    /* $AD7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7D); return;
label_AD7E:;
    /* $AD7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7E); return;
label_AD7F:;
    /* $AD7F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD7F); return;
label_AD80:;
    /* $AD80: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD82:;
    /* $AD82: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD82); return;
label_AD83:;
    /* $AD83: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD83); return;
label_AD84:;
    /* $AD84: 80 */ maybe_trigger_vblank(2); /* NOP */
label_AD86:;
    /* $AD86: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AD87:;
    /* $AD87: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_AD89:;
    /* $AD89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD89); return;
label_AD8A:;
    /* $AD8A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8A); return;
label_AD8B:;
    /* $AD8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8B); return;
label_AD8C:;
    /* $AD8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8C); return;
label_AD8D:;
    /* $AD8D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8D); return;
label_AD8E:;
    /* $AD8E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8E); return;
label_AD8F:;
    /* $AD8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD8F); return;
label_AD90:;
    /* $AD90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD90); return;
label_AD91:;
    /* $AD91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD91); return;
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
    /* $AD98: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD98); return;
label_AD99:;
    /* $AD99: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD99); return;
label_AD9A:;
    /* $AD9A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9A); return;
label_AD9B:;
    /* $AD9B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9B); return;
label_AD9C:;
    /* $AD9C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9C); return;
label_AD9D:;
    /* $AD9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9D); return;
label_AD9E:;
    /* $AD9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9E); return;
label_AD9F:;
    /* $AD9F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAD9F); return;
label_ADA0:;
    /* $ADA0: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { maybe_trigger_vblank(1); goto label_ADA6; }
label_ADA2:;
    /* $ADA2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ADA3:;
    /* $ADA3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADA3); return;
label_ADA4:;
    /* $ADA4: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x41); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADA6:;
    /* $ADA6: 54 */ maybe_trigger_vblank(4); (void)nes_read((0x54 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADA8:;
    /* $ADA8: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADAA:;
    /* $ADAA: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0DAC); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0404, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xADAA, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_ADAD:;
    /* $ADAD: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADAF:;
    /* $ADAF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADAF); return;
label_ADB0:;
    /* $ADB0: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x01 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADB2:;
    /* $ADB2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB2); return;
label_ADB3:;
    /* $ADB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB3); return;
label_ADB4:;
    /* $ADB4: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADB6:;
    /* $ADB6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB6); return;
label_ADB7:;
    /* $ADB7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB7); return;
label_ADB8:;
    /* $ADB8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB8); return;
label_ADB9:;
    /* $ADB9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADB9); return;
label_ADBA:;
    /* $ADBA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBA); return;
label_ADBB:;
    /* $ADBB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBB); return;
label_ADBC:;
    /* $ADBC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBC); return;
label_ADBD:;
    /* $ADBD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADBD); return;
label_ADBE:;
    /* $ADBE: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_ADBF:;
    /* $ADBF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADC1:;
    /* $ADC1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x02 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADC3:;
    /* $ADC3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC3); return;
label_ADC4:;
    /* $ADC4: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x8100 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ADC7:;
    /* $ADC7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC7); return;
label_ADC8:;
    /* $ADC8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC8); return;
label_ADC9:;
    /* $ADC9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADC9); return;
label_ADCA:;
    /* $ADCA: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_ADCB:;
    /* $ADCB: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xADCB; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ADCC:;
    /* $ADCC: 80 */ maybe_trigger_vblank(2); /* NOP */
label_ADCE:;
    /* $ADCE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADCE); return;
label_ADCF:;
    /* $ADCF: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xADCF; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ADD0:;
    /* $ADD0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD0); return;
label_ADD1:;
    /* $ADD1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD1); return;
label_ADD2:;
    /* $ADD2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD2); return;
label_ADD3:;
    /* $ADD3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD3); return;
label_ADD4:;
    /* $ADD4: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ADD6; }
label_ADD6:;
    /* $ADD6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_ADD8; }
label_ADD8:;
    /* $ADD8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD8); return;
label_ADD9:;
    /* $ADD9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADD9); return;
label_ADDA:;
    /* $ADDA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDA); return;
label_ADDB:;
    /* $ADDB: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDB); return;
label_ADDC:;
    /* $ADDC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDC); return;
label_ADDD:;
    /* $ADDD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDD); return;
label_ADDE:;
    /* $ADDE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDE); return;
label_ADDF:;
    /* $ADDF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADDF); return;
label_ADE0:;
    /* $ADE0: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x04); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADE2:;
    /* $ADE2: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_ADE8; }
label_ADE4:;
    /* $ADE4: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x05 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_ADE6:;
    /* $ADE6: C2 */ maybe_trigger_vblank(2); /* NOP */
label_ADE8:;
    /* $ADE8: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_ADE9:;
    /* $ADE9: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x50 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADEB:;
    /* $ADEB: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x04 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADED:;
    /* $ADED: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_ADEF:;
    /* $ADEF: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xADEF; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ADF0:;
    /* $ADF0: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x11); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ADF2:;
    /* $ADF2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A);
label_ADF4:;
    /* $ADF4: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_ADF6:;
    /* $ADF6: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0401 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADF9:;
    /* $ADF9: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADFB:;
    /* $ADFB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_ADFD:;
    /* $ADFD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFD); return;
label_ADFE:;
    /* $ADFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFE); return;
label_ADFF:;
    /* $ADFF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xADFF); return;
label_AE00:;
    /* $AE00: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE02:;
    /* $AE02: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE04:;
    /* $AE04: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_AE05:;
    /* $AE05: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x51) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE07:;
    /* $AE07: 52 */ maybe_trigger_vblank(2); /* ILLEGAL $52 — skip 1 */
label_AE08:;
    /* $AE08: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x56) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE0A:;
    /* $AE0A: 51 */ maybe_trigger_vblank(5); g_cpu.A ^= nes_read((nes_read16zp(0x51) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE0C:;
    /* $AE0C: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x11) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE0E:;
    /* $AE0E: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x8A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE10:;
    /* $AE10: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AE11:;
    /* $AE11: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AE12:;
    /* $AE12: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE14:;
    /* $AE14: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE16:;
    /* $AE16: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE18:;
    /* $AE18: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_AE1A:;
    /* $AE1A: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x47 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_AE1C:;
    /* $AE1C: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AE1D:;
    /* $AE1D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x4A; FLAG_NZ(g_cpu.A);
label_AE1F:;
    /* $AE1F: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x4C; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_AE21:;
    /* $AE21: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0xFF4E); FLAG_NZ(g_cpu.A);
label_AE24:;
    /* $AE24: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE24); return;
label_AE25:;
    /* $AE25: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE27:;
    /* $AE27: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE27); return;
label_AE28:; /* main_beehive */
    /* $AE28: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_AE2A:;
    /* $AE2A: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_AE2C:;
    /* $AE2C: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE2E:;
    /* $AE2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE2E); return;
label_AE2F:;
    /* $AE2F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE2F); return;
label_AE30:;
    /* $AE30: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE30); return;
label_AE31:;
    /* $AE31: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE31); return;
label_AE32:;
    /* $AE32: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AE34; }
label_AE34:;
    /* $AE34: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE34); return;
label_AE35:;
    /* $AE35: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE35); return;
label_AE36:;
    /* $AE36: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE36); return;
label_AE37:;
    /* $AE37: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE37); return;
label_AE38:;
    /* $AE38: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE3A:;
    /* $AE3A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3A); return;
label_AE3B:;
    /* $AE3B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3B); return;
label_AE3C:;
    /* $AE3C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3C); return;
label_AE3D:;
    /* $AE3D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3D); return;
label_AE3E:;
    /* $AE3E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3E); return;
label_AE3F:;
    /* $AE3F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE3F); return;
label_AE40:;
    /* $AE40: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE42:;
    /* $AE42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE42); return;
label_AE43:;
    /* $AE43: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE43); return;
label_AE44:;
    /* $AE44: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_AE46:;
    /* $AE46: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE47:;
    /* $AE47: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x80); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE49:;
    /* $AE49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE49); return;
label_AE4A:;
    /* $AE4A: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE4C:;
    /* $AE4C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4C); return;
label_AE4D:;
    /* $AE4D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4D); return;
label_AE4E:;
    /* $AE4E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4E); return;
label_AE4F:;
    /* $AE4F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE4F); return;
label_AE50:;
    /* $AE50: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AE51:;
    /* $AE51: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE51); return;
label_AE52:;
    /* $AE52: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE52); return;
label_AE53:;
    /* $AE53: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE53); return;
label_AE54:;
    /* $AE54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE54); return;
label_AE55:;
    /* $AE55: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE55); return;
label_AE56:;
    /* $AE56: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE56); return;
label_AE57:;
    /* $AE57: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE57); return;
label_AE58:;
    /* $AE58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE58); return;
label_AE59:;
    /* $AE59: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE59); return;
label_AE5A:;
    /* $AE5A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5A); return;
label_AE5B:;
    /* $AE5B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE5B); return;
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
    /* $AE62: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) { maybe_trigger_vblank(1); goto label_AE64; }
label_AE64:;
    /* $AE64: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE64); return;
label_AE65:;
    /* $AE65: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x92); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE67:;
    /* $AE67: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE67); return;
label_AE68:;
    /* $AE68: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x20 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE6A:;
    /* $AE6A: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE6B:;
    /* $AE6B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE6B); return;
label_AE6C:;
    /* $AE6C: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE6E:;
    /* $AE6E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE6E); return;
label_AE6F:;
    /* $AE6F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE6F); return;
label_AE70:;
    /* $AE70: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E72); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x8401, 7)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE70, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE73:;
    /* $AE73: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x04); FLAG_NZ(g_cpu.A);
label_AE75:;
    /* $AE75: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x21); FLAG_NZ(g_cpu.A);
label_AE77:;
    /* $AE77: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAE77; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AE78:;
    /* $AE78: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE7A:;
    /* $AE7A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7A); return;
label_AE7B:;
    /* $AE7B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7B); return;
label_AE7C:;
    /* $AE7C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7C); return;
label_AE7D:;
    /* $AE7D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7D); return;
label_AE7E:;
    /* $AE7E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE7E); return;
label_AE7F:;
    /* $AE7F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x0C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AE81:;
    /* $AE81: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE81); return;
label_AE82:;
    /* $AE82: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_AE83:;
    /* $AE83: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE83); return;
label_AE84:;
    /* $AE84: 20 */ maybe_trigger_vblank(6); { uint8_t _cbs = g_cpu.S; uint16_t _rp = (uint16_t)(g_code_window_base | 0x0E86); g_ram[0x100 + g_cpu.S] = (uint8_t)(_rp >> 8); g_cpu.S--; g_ram[0x100 + g_cpu.S] = (uint8_t)_rp; g_cpu.S--; if (!nes_dispatch_call(0x0000, -1)) g_cpu.S += 2;
if (g_cpu.S != _cbs) {
#ifdef RECOMP_STACK_TRACKING
    bail_trace(0xAE84, _cbs);
    recomp_stack_pop();
#endif
    return; } }
label_AE87:;
    /* $AE87: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x02 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE89:;
    /* $AE89: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE89); return;
label_AE8A:;
    /* $AE8A: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_AE8B:;
    /* $AE8B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8B); return;
label_AE8C:;
    /* $AE8C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8C); return;
label_AE8D:;
    /* $AE8D: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AE8F:;
    /* $AE8F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE8F); return;
label_AE90:;
    /* $AE90: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE90); return;
label_AE91:;
    /* $AE91: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE91); return;
label_AE92:;
    /* $AE92: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
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
    /* $AE9B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AE9D; }
label_AE9D:;
    /* $AE9D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE9D); return;
label_AE9E:;
    /* $AE9E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAE9E); return;
label_AE9F:;
    /* $AE9F: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x3C + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA1:;
    /* $AEA1: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAEA1; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEA2:;
    /* $AEA2: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAEA2; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEA3:;
    /* $AEA3: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x28 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA5:;
    /* $AEA5: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x80 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEA7:;
    /* $AEA7: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEA9:;
    /* $AEA9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_rti_source = 0xAEA9; g_rti_bank = 7; g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEAA:;
    /* $AEAA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEAA); return;
label_AEAB:;
    /* $AEAB: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x80); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AEAD:;
    /* $AEAD: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x40 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_AEAF:;
    /* $AEAF: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { maybe_trigger_vblank(1); goto label_AEB2; }
label_AEB1:;
    /* $AEB1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB1); return;
label_AEB2:;
    /* $AEB2: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_AEB3:;
    /* $AEB3: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xAEB3); return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB6:; return;
label_AEB7:; return;
label_AEB9:; return;
label_AEBA:; return;
label_AEBB:; return;
label_AEBC:; return;
label_AEBD:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC0:; return;
label_AEC2:; return;
label_AEC3:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED6:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE7:; return;
label_AEE8:; return;
label_AEE9:; return;
label_AEEA:; return;
label_AEEC:; return;
label_AEEF:; return;
label_AEF0:; return;
label_AEF3:; return;
label_AEF5:; return;
label_AEF7:; return;
label_AEF8:; return;
label_AEFA:; return;
label_AEFB:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AEFF:; return;
label_AF00:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0A:; return;
label_AF0C:; return;
label_AF0D:; return;
label_AF0F:; return;
label_AF11:; return;
label_AF14:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1B:; return;
label_AF1C:; return;
label_AF1E:; return;
label_AF20:; return;
label_AF21:; return;
label_AF23:; return;
label_AF24:; return;
label_AF27:; return;
label_AF29:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF30:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3B:; return;
label_AF3E:; return;
label_AF40:; return;
label_AF43:; return;
label_AF46:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4E:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF53:; return;
label_AF55:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5E:; return;
label_AF60:; return;
label_AF63:; return;
label_AF66:; return;
label_AF68:; return;
label_AF6B:; return;
label_AF6E:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF76:; return;
label_AF79:; return;
label_AF7C:; return;
label_AF7F:; return;
label_AF82:; return;
label_AF85:; return;
label_AF88:; return;
label_AF89:; return;
label_AF8C:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF95:; return;
label_AF97:; return;
label_AF99:; return;
label_AF9A:; return;
label_AF9C:; return;
label_AF9F:; return;
label_AFA1:; return;
label_AFA4:; return;
label_AFA6:; return;
label_AFA8:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAE:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB7:; return;
label_AFB9:; return;
label_AFBC:; return;
label_AFBF:; return;
label_AFC1:; return;
label_AFC4:; return;
label_AFC7:; return;
label_AFC8:; return;
label_AFCB:; return;
}

void func_A234_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A234_b7");
#endif
    func_A234_b7_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A5E9_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5E9_b7");
#endif
    func_A234_b7_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A59D_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A59D_b7");
#endif
    func_A234_b7_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4F8_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4F8_b7");
#endif
    func_A234_b7_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A510_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A510_b7");
#endif
    func_A234_b7_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABCE_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABCE_b7");
#endif
    func_A234_b7_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4BD_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4BD_b7");
#endif
    func_A234_b7_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A4BA_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4BA_b7");
#endif
    func_A234_b7_body(7);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ACCF_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACCF_b7");
#endif
    func_A234_b7_body(8);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A53B_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A53B_b7");
#endif
    func_A234_b7_body(9);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA28_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA28_b7");
#endif
    func_A234_b7_body(10);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC29_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC29_b7");
#endif
    func_A234_b7_body(11);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8FF_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8FF_b7");
#endif
    func_A234_b7_body(12);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A86F_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A86F_b7");
#endif
    func_A234_b7_body(13);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A816_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A816_b7");
#endif
    func_A234_b7_body(14);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD34_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD34_b7");
#endif
    func_A234_b7_body(15);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A7FB_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7FB_b7");
#endif
    func_A234_b7_body(16);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA73_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA73_b7");
#endif
    func_A234_b7_body(17);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AC18_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC18_b7");
#endif
    func_A234_b7_body(18);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A909_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A909_b7");
#endif
    func_A234_b7_body(19);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A9B3_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9B3_b7");
#endif
    func_A234_b7_body(20);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE1A_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE1A_b7");
#endif
    func_A234_b7_body(21);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A811_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A811_b7");
#endif
    func_A234_b7_body(22);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A83D_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A83D_b7");
#endif
    func_A234_b7_body(23);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AEAD_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEAD_b7");
#endif
    func_A234_b7_body(24);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD05_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD05_b7");
#endif
    func_A234_b7_body(25);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ABDC_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABDC_b7");
#endif
    func_A234_b7_body(26);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A905_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A905_b7");
#endif
    func_A234_b7_body(27);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A504_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A504_b7");
#endif
    func_A234_b7_body(28);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A904_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A904_b7");
#endif
    func_A234_b7_body(29);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A2C7_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2C7_b7");
#endif
    func_A234_b7_body(30);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A690_b7(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A690_b7");
#endif
label_A690:;
    /* $A690: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFD5 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A693:;
    /* $A693: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xFF) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A695:;
    /* $A695: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xFF + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A697:;
    /* $A697: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x55BF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A69A:;
    /* $A69A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A69D:;
    /* $A69D: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A69F:;
    /* $A69F: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x68 + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6A1:;
    /* $A6A1: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x90 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A6A3:;
    /* $A6A3: 44 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A5:;
    /* $A6A5: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x30); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A7:;
    /* $A6A7: 14 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A6A9:;
    /* $A6A9: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA6A9); return;
}
