"""Disassemble bank 4 around $81B1."""
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
bk = 4
bank = d[16 + bk * 8192 : 16 + (bk + 1) * 8192]

# Disassemble — use the same OPS table from sess21_disasm
def b(a):
    return bank[a - 0x8000]

def disasm_at(start, max_inst=80):
    pc = start
    out = []
    seen = set()
    n = 0
    end_addr = 0xA000
    while n < max_inst and pc < end_addr:
        if pc in seen: break
        seen.add(pc)
        op = b(pc)
        rec = OPS.get(op)
        if not rec:
            out.append(f"{pc:04X}: {op:02X}            ???")
            pc += 1; n += 1
            continue
        mn, ln, ty = rec
        bs = bytes([b(pc + i) for i in range(ln)])
        bytes_str = " ".join(f"{x:02X}" for x in bs).ljust(10)
        if ln == 1:
            asm = mn
        elif ln == 2:
            arg = bs[1]
            if mn.startswith(("BPL","BMI","BVC","BVS","BCC","BCS","BNE","BEQ")):
                tgt = (pc + 2 + (arg if arg < 0x80 else arg - 256)) & 0xFFFF
                asm = f"{mn} ${tgt:04X}"
            else:
                asm = mn.replace("zp", f"${arg:02X}").replace("#", f"#${arg:02X}")
        else:
            arg = bs[1] | (bs[2] << 8)
            if mn == "JSR abs":
                asm = f"JSR ${arg:04X}"
            elif mn == "JMP abs":
                asm = f"JMP ${arg:04X}"
            elif mn == "JMP (abs)":
                asm = f"JMP (${arg:04X})"
            else:
                asm = mn.replace("abs", f"${arg:04X}")
        out.append(f"{pc:04X}: {bytes_str}  {asm}")
        n += 1
        if ty == "end":
            break
        pc += ln
    return "\n".join(out)

# Look at $819F-$81C0 to see the function boundaries around $81B1
print("=== bank 4 raw around $81B1 ===")
for addr in range(0x8190, 0x81E0):
    print(f"  {addr:04X}: {b(addr):02X}")

print("\n=== disasm from $81A0 ===")
print(disasm_at(0x81A0, 60))
print("\n=== disasm from $81B1 ===")
print(disasm_at(0x81B1, 60))
