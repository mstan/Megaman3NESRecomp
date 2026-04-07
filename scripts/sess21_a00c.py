"""Look at $A009-$A030 and $801B in BOTH 8KB bank 4 and 8KB bank 9."""
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()

def disasm(buf, base, addr, max_inst=20):
    pc = addr - base
    out = []
    n = 0
    while n < max_inst and pc < len(buf):
        op = buf[pc]
        rec = OPS.get(op)
        if rec is None:
            out.append(f"{base+pc:04X}: {op:02X}            ???")
            pc += 1; n += 1; continue
        mn, ln, ty = rec
        if pc + ln > len(buf): break
        bs = bytes([buf[pc + i] for i in range(ln)])
        bs_str = " ".join(f"{x:02X}" for x in bs).ljust(10)
        if ln == 1: asm = mn
        elif ln == 2:
            arg = bs[1]
            if mn.startswith(("BPL","BMI","BVC","BVS","BCC","BCS","BNE","BEQ")):
                tgt = (base + pc + 2 + (arg if arg < 0x80 else arg - 256)) & 0xFFFF
                asm = f"{mn} ${tgt:04X}"
            else:
                asm = mn.replace("zp", f"${arg:02X}").replace("#", f"#${arg:02X}")
        else:
            arg = bs[1] | (bs[2] << 8)
            if mn == "JSR abs": asm = f"JSR ${arg:04X}"
            elif mn == "JMP abs": asm = f"JMP ${arg:04X}"
            elif mn == "JMP (abs)": asm = f"JMP (${arg:04X})"
            else: asm = mn.replace("abs", f"${arg:04X}")
        out.append(f"{base+pc:04X}: {bs_str}  {asm}")
        n += 1
        if ty == "end": break
        pc += ln
    return "\n".join(out)

# 8KB bank 9 - the trampoline bank
b8_9 = d[16 + 9*0x2000 : 16 + 10*0x2000]
print("=== 8KB bank 9 @ $A000-$A040 ===")
print(disasm(b8_9, 0xA000, 0xA000, 30))
print()

# 8KB bank 4 — the cutscene code bank — at $801B onwards
b8_4 = d[16 + 4*0x2000 : 16 + 5*0x2000]
print("=== 8KB bank 4 @ $801B-$8060 ===")
print(disasm(b8_4, 0x8000, 0x801B, 40))
