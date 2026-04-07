"""Find ROM addresses that write to $072B (and nearby) — STA abs forms."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
header = 16

# 8D lo hi   = STA abs
# 9D lo hi   = STA abs,X
# 99 lo hi   = STA abs,Y

WRITE_OPS = {0x8D: "STA abs", 0x9D: "STA abs,X", 0x99: "STA abs,Y",
             0x8C: "STY abs", 0x8E: "STX abs"}

for target in (0x072B, 0x0700, 0x0760, 0x0768):
    print(f"\n=== Writers of ${target:04X} (literal) ===")
    hits = []
    for off in range(prg - 2):
        op = d[header + off]
        if op not in WRITE_OPS: continue
        lo = d[header + off + 1]
        hi = d[header + off + 2]
        addr = lo | (hi << 8)
        if addr == target:
            bk = off // 0x4000
            cpu = 0x8000 + (off % 0x4000)
            if bk == d[4] - 1:
                cpu = 0xC000 + (off % 0x4000)
            hits.append((bk, cpu, WRITE_OPS[op]))
    print(f"  {len(hits)} hits")
    for bk, ca, mn in hits[:20]:
        print(f"    16K-bank={bk:2d}  ${ca:04X}  {mn}")

# Also search for STA $0700,X / $0760,X etc which would cover the whole region
# These reference the BASE address ($0700, $0760) in the instruction
print("\n\n=== ANY STA abs/abs,X targeting $0700-$07FF region ===")
hits = {}
for off in range(prg - 2):
    op = d[header + off]
    if op not in WRITE_OPS: continue
    lo = d[header + off + 1]
    hi = d[header + off + 2]
    addr = lo | (hi << 8)
    if 0x0700 <= addr <= 0x07FF:
        bk = off // 0x4000
        cpu = 0x8000 + (off % 0x4000)
        if bk == d[4] - 1:
            cpu = 0xC000 + (off % 0x4000)
        hits.setdefault(bk, []).append((cpu, WRITE_OPS[op], addr))

for bk in sorted(hits.keys()):
    print(f"\n  16K bank {bk}: {len(hits[bk])} writers")
    for cpu, mn, addr in hits[bk][:15]:
        print(f"    ${cpu:04X}  {mn} ${addr:04X}")
    if len(hits[bk]) > 15:
        print(f"    ... +{len(hits[bk])-15} more")
