"""Find writers of $0728 specifically (one of the first bytes oracle writes at frame 9)."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
header = 16

# Direct STA $0728
WRITE_OPS = {0x8D: "STA", 0x9D: "STA,X", 0x99: "STA,Y",
             0x8C: "STY", 0x8E: "STX"}

print("=== Direct STA $0728 (literal address) ===")
hits = []
for off in range(prg - 2):
    op = d[header + off]
    if op not in WRITE_OPS: continue
    addr = d[header + off + 1] | (d[header + off + 2] << 8)
    if addr == 0x0728:
        bk = off // 0x4000
        cpu = (0xC000 if bk == d[4] - 1 else 0x8000) + (off % 0x4000)
        hits.append((bk, cpu, WRITE_OPS[op]))
print(f"  {len(hits)} hits")
for bk, ca, mn in hits:
    print(f"    bank={bk:2d}  ${ca:04X}  {mn} $0728")

# More common: STA $0700,X with X=$28 — find STA $0700,X sites
print("\n=== STA $0700,X (any X) — touches $0700-$07FF ===")
hits = []
for off in range(prg - 2):
    op = d[header + off]
    if op != 0x9D: continue  # STA abs,X
    addr = d[header + off + 1] | (d[header + off + 2] << 8)
    if addr == 0x0700:
        bk = off // 0x4000
        cpu = (0xC000 if bk == d[4] - 1 else 0x8000) + (off % 0x4000)
        hits.append((bk, cpu))
for bk, ca in hits[:30]:
    print(f"    bank={bk:2d}  ${ca:04X}  STA $0700,X")
print(f"  total: {len(hits)}")

# Same for STA $0700,Y
print("\n=== STA $0700,Y (any Y) ===")
hits = []
for off in range(prg - 2):
    op = d[header + off]
    if op != 0x99: continue  # STA abs,Y
    addr = d[header + off + 1] | (d[header + off + 2] << 8)
    if addr == 0x0700:
        bk = off // 0x4000
        cpu = (0xC000 if bk == d[4] - 1 else 0x8000) + (off % 0x4000)
        hits.append((bk, cpu))
for bk, ca in hits[:30]:
    print(f"    bank={bk:2d}  ${ca:04X}  STA $0700,Y")
print(f"  total: {len(hits)}")

# Range in $0700-$077F (just direct STA)
print("\n=== Direct STA $07XX where XX in 00..7F (literal absolute store) ===")
by_bank = {}
for off in range(prg - 2):
    op = d[header + off]
    if op != 0x8D: continue
    addr = d[header + off + 1] | (d[header + off + 2] << 8)
    if 0x0700 <= addr <= 0x077F:
        bk = off // 0x4000
        cpu = (0xC000 if bk == d[4] - 1 else 0x8000) + (off % 0x4000)
        by_bank.setdefault(bk, []).append((cpu, addr))
for bk in sorted(by_bank.keys()):
    print(f"  bank {bk}: {len(by_bank[bk])} hits")
    for cpu, addr in by_bank[bk][:8]:
        print(f"    ${cpu:04X}  STA ${addr:04X}")
    if len(by_bank[bk]) > 8:
        print(f"    ... +{len(by_bank[bk])-8} more")
