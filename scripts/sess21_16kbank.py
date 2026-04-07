"""Find what's at $81B1 in 16KB bank 4 (the bank the dispatch miss reports)."""
f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
PRG_BANK_SIZE = 0x4000
header = 16
prg = d[4] * PRG_BANK_SIZE
print(f"prg banks (16K): {d[4]}")

# 16KB bank 4
bank = 4
start = header + bank * PRG_BANK_SIZE
b16 = d[start : start + PRG_BANK_SIZE]
print(f"\n16KB bank 4 at $81B1 (offset 0x1B1):")
print(f"  bytes: {b16[0x1B1:0x1B1+32].hex()}")

# Disassemble
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

def disasm(b16, addr, max_inst=40):
    pc = addr - 0x8000
    out = []
    n = 0
    end = pc + 100
    while n < max_inst and pc < end:
        op = b16[pc]
        rec = OPS.get(op)
        if not rec:
            out.append(f"{0x8000+pc:04X}: {op:02X}            ???")
            pc += 1; n += 1
            continue
        mn, ln, ty = rec
        bs = bytes([b16[pc + i] for i in range(ln)])
        bytes_str = " ".join(f"{x:02X}" for x in bs).ljust(10)
        if ln == 1: asm = mn
        elif ln == 2:
            arg = bs[1]
            if mn.startswith(("BPL","BMI","BVC","BVS","BCC","BCS","BNE","BEQ")):
                tgt = (0x8000 + pc + 2 + (arg if arg < 0x80 else arg - 256)) & 0xFFFF
                asm = f"{mn} ${tgt:04X}"
            else: asm = mn.replace("zp", f"${arg:02X}").replace("#", f"#${arg:02X}")
        else:
            arg = bs[1] | (bs[2] << 8)
            if mn == "JSR abs": asm = f"JSR ${arg:04X}"
            elif mn == "JMP abs": asm = f"JMP ${arg:04X}"
            elif mn == "JMP (abs)": asm = f"JMP (${arg:04X})"
            else: asm = mn.replace("abs", f"${arg:04X}")
        out.append(f"{0x8000+pc:04X}: {bytes_str}  {asm}")
        n += 1
        if ty == "end": break
        pc += ln
    return "\n".join(out)

print("\n=== disasm @ $81B1 in 16KB bank 4 ===")
print(disasm(b16, 0x81B1, 40))

# Also dump bytes around 81A0-81E5 raw
print("\n=== raw bytes $81A0-$81E5 in 16KB bank 4 ===")
for a in range(0x81A0, 0x81E6, 16):
    line = " ".join(f"{b16[a-0x8000+i]:02X}" for i in range(min(16, 0x81E6-a)))
    print(f"  {a:04X}: {line}")
