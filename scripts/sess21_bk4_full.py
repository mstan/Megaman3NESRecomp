"""Disassemble 8KB bank 4 from $8000 to $8400 to understand function boundaries."""
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
# 8KB bank 4 = file offset 4 * 8192 = 32K
b8k = d[16 + 4 * 8192 : 16 + 5 * 8192]

def db(addr): return b8k[addr - 0x8000]

def show(start, end):
    pc = start
    while pc < end:
        op = db(pc)
        rec = OPS.get(op)
        if rec is None:
            print(f"{pc:04X}: {op:02X}            ???")
            pc += 1
            continue
        mn, ln, ty = rec
        bs = bytes([db(pc + i) for i in range(ln)])
        bs_str = " ".join(f"{x:02X}" for x in bs).ljust(10)
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
            if mn == "JSR abs": asm = f"JSR ${arg:04X}"
            elif mn == "JMP abs": asm = f"JMP ${arg:04X}"
            elif mn == "JMP (abs)": asm = f"JMP (${arg:04X})"
            else: asm = mn.replace("abs", f"${arg:04X}")
        print(f"{pc:04X}: {bs_str}  {asm}")
        pc += ln

show(0x81A0, 0x81F0)
