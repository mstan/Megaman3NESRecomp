"""Raw dump 8KB bank 9 $A000-$A040, manually decode each entry."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
b = d[16 + 9*0x2000 : 16 + 10*0x2000]

# Dump raw
print("=== bank 9 raw $A000-$A050 ===")
for a in range(0x0, 0x50, 16):
    line = " ".join(f"{b[a+i]:02X}" for i in range(16))
    print(f"  ${0xA000+a:04X}: {line}")

# Decode as a sequence of 3-byte JMPs
print("\n=== as 3-byte JMP entries ===")
for off in range(0, 0x40, 3):
    op = b[off]
    if op == 0x4C:  # JMP abs
        tgt = b[off+1] | (b[off+2] << 8)
        print(f"  ${0xA000+off:04X}: JMP ${tgt:04X}")
    else:
        print(f"  ${0xA000+off:04X}: {op:02X} {b[off+1]:02X} {b[off+2]:02X}  (not JMP)")
