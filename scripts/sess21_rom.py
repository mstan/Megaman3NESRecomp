f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
print("size", len(d))
print("header", d[:16].hex())
prg = d[4] * 16 * 1024
print("prg banks (16K)", d[4], "prg bytes", prg)
last = d[16 + prg - 0x4000 : 16 + prg]  # last 16K = fixed bank, mapped to $C000
def show(addr, n=32):
    off = addr - 0xC000
    print(f"@{addr:04x}:", last[off:off+n].hex())
show(0xC000)
show(0xC143, 24)
show(0xFF21)
show(0xFFEA, 22)
show(0xFEAA)
show(0xFECB, 48)
