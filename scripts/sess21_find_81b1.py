"""Find which 8KB bank contains the $81B1 cutscene blitter pattern."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
sig = bytes.fromhex("f000e8a068b9e4a199000254")  # last byte may differ
sig_short = bytes.fromhex("f000e8a068b9e4a1990002")
i = d.find(sig_short, 16)
while i >= 0:
    file_off = i - 16
    bank8 = file_off // 8192
    off_in = file_off % 8192
    print(f"file_off=0x{file_off:05X}  8K bank={bank8}  in-bank=0x{off_in:04X} (= ${0x8000+off_in:04X})")
    i = d.find(sig_short, i + 1)
