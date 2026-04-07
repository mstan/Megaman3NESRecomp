"""Find all JSR $FF6B sites in the ROM."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
header = 16
needle = bytes.fromhex("206bff")  # JSR $FF6B little-endian = 20 6B FF

hits = []
i = d.find(needle, header)
while i >= 0:
    off = i - header
    bk = off // 0x4000
    in_bk = off % 0x4000
    cpu = (0xC000 if bk == d[4] - 1 else 0x8000) + in_bk
    # Check what's preceding: LDA #imm $F4 setup pattern
    pre_bytes = d[i-8:i].hex() if i >= 8 else ""
    hits.append((bk, cpu, pre_bytes))
    i = d.find(needle, i + 1)

print(f"=== {len(hits)} sites of JSR $FF6B ===")
for bk, cpu, pre in hits[:60]:
    print(f"  16K bank={bk:2d}  ${cpu:04X}  preceding 8 bytes: {pre}")

# Now: how many of these set $F4 to value $16 (bank 11)?
# Pattern: A9 16 85 F4 (LDA #$16 / STA $F4)
print(f"\n=== Search ROM for 'A9 16 85 F4' (LDA #$16 / STA $F4 — bank 11 first half) ===")
needle2 = bytes.fromhex("a91685f4")
i = d.find(needle2, header)
n = 0
while i >= 0:
    off = i - header
    bk = off // 0x4000
    cpu = (0xC000 if bk == d[4] - 1 else 0x8000) + (off % 0x4000)
    print(f"  16K bank={bk:2d}  ${cpu:04X}")
    n += 1
    i = d.find(needle2, i + 1)
print(f"  total: {n}")

# Generic: any STA $F4 site, with any preceding LDA #imm
print(f"\n=== STA $F4 sites with preceding LDA #imm (bank cache writes) ===")
sta_f4 = bytes.fromhex("85f4")
counts = {}
i = d.find(sta_f4, header)
while i >= 0:
    if i >= 2 and d[i-2] == 0xA9:
        imm = d[i-1]
        counts[imm] = counts.get(imm, 0) + 1
    i = d.find(sta_f4, i + 1)
print("  LDA #imm values used as $F4:")
for imm, cnt in sorted(counts.items()):
    bk16 = imm // 2
    print(f"    #${imm:02X} ({imm:3d}) -> 16KB bank {bk16}: {cnt} sites")
