"""Find which ROM addresses write to $C2, $C8, $7C, $C0."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
header = 16

# 6502 instructions that write to a zero page address:
# 85 zp     STA zp
# 86 zp     STX zp
# 84 zp     STY zp
# 95 zp     STA zp,X
# 94 zp     STY zp,X
# 96 zp     STX zp,Y

WRITE_OPS = {0x85: "STA", 0x86: "STX", 0x84: "STY",
             0x95: "STA,X", 0x94: "STY,X", 0x96: "STX,Y"}

for target in (0x7C, 0xC0, 0xC2, 0xC8):
    print(f"\n=== Writers of ${target:02X} ===")
    hits = []
    for off in range(prg):
        op = d[header + off]
        if op not in WRITE_OPS: continue
        zp = d[header + off + 1] if off + 1 < prg else 0
        # For STA zp,X / etc, the actual ZP is zp + X (runtime). We can't
        # know X at scan time. Match the literal ZP byte for now.
        if zp == target:
            bk16 = off // 0x4000
            in_b = off % 0x4000
            cpu_addr = 0x8000 + in_b
            hits.append((bk16, cpu_addr, WRITE_OPS[op]))
    print(f"  {len(hits)} hits:")
    for bk, ca, mn in hits[:30]:
        print(f"    16K-bank={bk:2d}  ${ca:04X}  {mn} ${target:02X}")
    if len(hits) > 30:
        print(f"    ... +{len(hits)-30} more")
