"""Disassemble $A009/$A00C in both 16KB bank 4 and 8KB banks 8/9."""
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()

def disasm_at(buf, base, addr, max_inst=20):
    pc = addr - base
    out = []
    n = 0
    while n < max_inst:
        if pc >= len(buf): break
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

# 16KB bank 4 (recompiler's "bank 4" = file offset 16+4*0x4000)
b16_4 = d[16 + 4*0x4000 : 16 + 5*0x4000]
print("=== 16KB bank 4 @ $A009 (= 8KB bank 9, mapped at $A000) ===")
# 16KB bank maps to $8000-$BFFF when used as switchable.
# When "bank 4" in dispatch table means 16KB bank 4, $A009 is offset $2009
print(disasm_at(b16_4, 0x8000, 0xA009, 20))
print()

# 8KB bank 9 alone
b8_9 = d[16 + 9*0x2000 : 16 + 10*0x2000]
print("=== 8KB bank 9 @ $A009 (= file offset 0x12009) ===")
print(disasm_at(b8_9, 0xA000, 0xA009, 20))
print()

# 8KB bank 8 (the other half of 16KB bank 4)
b8_8 = d[16 + 8*0x2000 : 16 + 9*0x2000]
print("=== 8KB bank 8 @ $8009 (= file offset 0x10009) ===")
print(disasm_at(b8_8, 0x8000, 0x8009, 20))
