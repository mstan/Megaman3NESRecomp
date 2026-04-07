"""Find ROM code that loads R6 = 22 ($16) or 23 ($17) — would map bank 11."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
header = 16

# Pattern 1: LDA #$16 / STA $F4 (= A9 16 85 F4)
# Pattern 2: LDA #$17 / STA $F4
# Pattern 3: STA $8001 (= 8D 01 80) preceded by LDA #$16

# Generic: find LDA #imm where imm in {0x16, 0x17, 0x14, 0x15} (bank 11/10)
TARGETS = {0x14: "b10/lo", 0x15: "b10/hi", 0x16: "b11/lo", 0x17: "b11/hi"}

print("=== LDA #imm where imm = $14/$15/$16/$17 (bank 10/11 candidates) ===")
print("    Looking specifically for imm followed by STA $F4 or STA $8001")
hits = 0
for off in range(prg - 5):
    if d[header + off] == 0xA9 and d[header + off + 1] in TARGETS:
        # Look at next 1-2 instructions
        nxt = d[header + off + 2]
        n2 = d[header + off + 3] if off + 3 < prg else 0
        n3 = d[header + off + 4] if off + 4 < prg else 0
        # STA $F4 = 85 F4
        # STA $8001 = 8D 01 80
        if nxt == 0x85 and n2 == 0xF4:
            bk = off // 0x4000
            cpu = 0x8000 + (off % 0x4000)
            print(f"  16K bank={bk:2d}  ${cpu:04X}: A9 {d[header+off+1]:02X} 85 F4   LDA #${d[header+off+1]:02X} / STA $F4 ({TARGETS[d[header+off+1]]})")
            hits += 1
        elif nxt == 0x8D and n2 == 0x01 and n3 == 0x80:
            bk = off // 0x4000
            cpu = 0x8000 + (off % 0x4000)
            print(f"  16K bank={bk:2d}  ${cpu:04X}: A9 {d[header+off+1]:02X} 8D 01 80   LDA #${d[header+off+1]:02X} / STA $8001 ({TARGETS[d[header+off+1]]})")
            hits += 1
print(f"\n{hits} hits")
