"""Find all occurrences of B1 81 (little-endian $81B1) in the ROM."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
PRG_BANK_SIZE = 0x4000
prg = d[4] * PRG_BANK_SIZE
needle = bytes.fromhex("b181")
locations = []
i = d.find(needle, 16)
while i >= 0:
    file_off = i - 16
    bank16 = file_off // PRG_BANK_SIZE
    off_in = file_off % PRG_BANK_SIZE
    cpu_addr = 0x8000 + off_in
    locations.append((file_off, bank16, cpu_addr))
    i = d.find(needle, i + 1)

print(f"Found {len(locations)} occurrences of B1 81 in PRG ROM:")
for fo, bk, ca in locations:
    print(f"  file_off=0x{fo:05X}  16K bank={bk}  ${ca:04X}")
