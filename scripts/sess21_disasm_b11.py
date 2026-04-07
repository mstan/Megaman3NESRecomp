"""Disassemble bank 11 around $8181 to find the writer's containing function."""
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()

# 16KB bank 11
bank = d[16 + 11*0x4000 : 16 + 12*0x4000]

def b(addr): return bank[addr - 0x8000]

def disasm(start, end):
    pc = start
    out = []
    while pc < end:
        op = b(pc)
        rec = OPS.get(op)
        if rec is None:
            out.append(f"{pc:04X}: {op:02X}            ???")
            pc += 1; continue
        mn, ln, _ = rec
        bs = bytes([b(pc + i) for i in range(ln)])
        bs_str = " ".join(f"{x:02X}" for x in bs).ljust(10)
        if ln == 1: asm = mn
        elif ln == 2:
            arg = bs[1]
            if mn.startswith(("BPL","BMI","BVC","BVS","BCC","BCS","BNE","BEQ")):
                tgt = (pc + 2 + (arg if arg < 0x80 else arg - 256)) & 0xFFFF
                asm = f"{mn} ${tgt:04X}"
            else: asm = mn.replace("zp", f"${arg:02X}").replace("#", f"#${arg:02X}")
        else:
            arg = bs[1] | (bs[2] << 8)
            if mn == "JSR abs": asm = f"JSR ${arg:04X}"
            elif mn == "JMP abs": asm = f"JMP ${arg:04X}"
            elif mn == "JMP (abs)": asm = f"JMP (${arg:04X})"
            else: asm = mn.replace("abs", f"${arg:04X}")
        out.append(f"{pc:04X}: {bs_str}  {asm}")
        pc += ln
    return "\n".join(out)

# Look at $8160-$81C0 (the $8168 STY $0700,Y and $8181 STA $0728,X area)
print("=== bank 11 $8160-$81C0 ===")
print(disasm(0x8160, 0x81C0))

# Find JSR sites that call $8160-$8200 from anywhere in the ROM
print("\n=== Callers of any function in $8160-$81FF ===")
prg = d[4] * 16 * 1024
header = 16
callers_lo = []
callers_hi = []
# JSR abs = 20 lo hi
for off in range(prg - 2):
    if d[header + off] == 0x20:
        addr = d[header + off + 1] | (d[header + off + 2] << 8)
        if 0x8160 <= addr < 0x8200:
            bk = off // 0x4000
            cpu = (0xC000 if bk == d[4] - 1 else 0x8000) + (off % 0x4000)
            callers_lo.append((bk, cpu, addr))
print(f"  {len(callers_lo)} JSR sites:")
for bk, cpu, tgt in callers_lo[:30]:
    print(f"    bank={bk:2d}  ${cpu:04X}  JSR ${tgt:04X}")
