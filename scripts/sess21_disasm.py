"""Tiny 6502 disassembler — enough to walk a function until RTI/RTS/JMP."""
import sys

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
last = d[16 + prg - 0x4000 : 16 + prg]  # last 16K = fixed bank @ $C000

def b(addr):
    off = addr - 0xC000
    return last[off]

# Minimal opcode table: mnemonic, length, type ('end' if terminator)
OPS = {}
def add(op, mn, ln, ty=""):
    OPS[op] = (mn, ln, ty)

# implied / accumulator
for op, mn in [(0x00,"BRK"),(0x40,"RTI"),(0x60,"RTS"),(0xEA,"NOP"),
               (0x18,"CLC"),(0x38,"SEC"),(0x58,"CLI"),(0x78,"SEI"),
               (0xB8,"CLV"),(0xD8,"CLD"),(0xF8,"SED"),
               (0x08,"PHP"),(0x28,"PLP"),(0x48,"PHA"),(0x68,"PLA"),
               (0x88,"DEY"),(0xC8,"INY"),(0xCA,"DEX"),(0xE8,"INX"),
               (0xAA,"TAX"),(0xA8,"TAY"),(0xBA,"TSX"),(0x8A,"TXA"),(0x9A,"TXS"),(0x98,"TYA"),
               (0x0A,"ASL A"),(0x2A,"ROL A"),(0x4A,"LSR A"),(0x6A,"ROR A")]:
    add(op, mn, 1, "end" if mn in ("RTI","RTS","BRK") else "")

# imm
for op, mn in [(0x09,"ORA"),(0x29,"AND"),(0x49,"EOR"),(0x69,"ADC"),
               (0xA0,"LDY"),(0xA2,"LDX"),(0xA9,"LDA"),(0xC0,"CPY"),
               (0xC9,"CMP"),(0xE0,"CPX"),(0xE9,"SBC")]:
    add(op, mn+" #", 2)

# zp
for op, mn in [(0x05,"ORA"),(0x06,"ASL"),(0x24,"BIT"),(0x25,"AND"),(0x26,"ROL"),
               (0x45,"EOR"),(0x46,"LSR"),(0x65,"ADC"),(0x66,"ROR"),
               (0x84,"STY"),(0x85,"STA"),(0x86,"STX"),
               (0xA4,"LDY"),(0xA5,"LDA"),(0xA6,"LDX"),
               (0xC4,"CPY"),(0xC5,"CMP"),(0xC6,"DEC"),
               (0xE4,"CPX"),(0xE5,"SBC"),(0xE6,"INC")]:
    add(op, mn+" zp", 2)

# zp,X
for op, mn in [(0x15,"ORA"),(0x16,"ASL"),(0x35,"AND"),(0x36,"ROL"),(0x55,"EOR"),
               (0x56,"LSR"),(0x75,"ADC"),(0x76,"ROR"),(0x94,"STY"),(0x95,"STA"),
               (0xB4,"LDY"),(0xB5,"LDA"),(0xD5,"CMP"),(0xD6,"DEC"),
               (0xF5,"SBC"),(0xF6,"INC")]:
    add(op, mn+" zp,X", 2)
# zp,Y
for op, mn in [(0x96,"STX"),(0xB6,"LDX")]:
    add(op, mn+" zp,Y", 2)
# (zp,X)
for op, mn in [(0x01,"ORA"),(0x21,"AND"),(0x41,"EOR"),(0x61,"ADC"),
               (0x81,"STA"),(0xA1,"LDA"),(0xC1,"CMP"),(0xE1,"SBC")]:
    add(op, mn+" (zp,X)", 2)
# (zp),Y
for op, mn in [(0x11,"ORA"),(0x31,"AND"),(0x51,"EOR"),(0x71,"ADC"),
               (0x91,"STA"),(0xB1,"LDA"),(0xD1,"CMP"),(0xF1,"SBC")]:
    add(op, mn+" (zp),Y", 2)
# branches
for op, mn in [(0x10,"BPL"),(0x30,"BMI"),(0x50,"BVC"),(0x70,"BVS"),
               (0x90,"BCC"),(0xB0,"BCS"),(0xD0,"BNE"),(0xF0,"BEQ")]:
    add(op, mn, 2)
# abs
for op, mn in [(0x0D,"ORA"),(0x0E,"ASL"),(0x2C,"BIT"),(0x2D,"AND"),(0x2E,"ROL"),
               (0x4D,"EOR"),(0x4E,"LSR"),(0x6D,"ADC"),(0x6E,"ROR"),
               (0x8C,"STY"),(0x8D,"STA"),(0x8E,"STX"),
               (0xAC,"LDY"),(0xAD,"LDA"),(0xAE,"LDX"),
               (0xCC,"CPY"),(0xCD,"CMP"),(0xCE,"DEC"),
               (0xEC,"CPX"),(0xED,"SBC"),(0xEE,"INC")]:
    add(op, mn+" abs", 3)
# abs,X / abs,Y
for op, mn in [(0x1D,"ORA"),(0x1E,"ASL"),(0x3D,"AND"),(0x3E,"ROL"),
               (0x5D,"EOR"),(0x5E,"LSR"),(0x7D,"ADC"),(0x7E,"ROR"),
               (0x9D,"STA"),(0xBC,"LDY"),(0xBD,"LDA"),(0xDD,"CMP"),
               (0xDE,"DEC"),(0xFD,"SBC"),(0xFE,"INC")]:
    add(op, mn+" abs,X", 3)
for op, mn in [(0x19,"ORA"),(0x39,"AND"),(0x59,"EOR"),(0x79,"ADC"),
               (0x99,"STA"),(0xB9,"LDA"),(0xBE,"LDX"),(0xD9,"CMP"),(0xF9,"SBC")]:
    add(op, mn+" abs,Y", 3)
add(0x4C, "JMP abs", 3, "end")
add(0x6C, "JMP (abs)", 3, "end")
add(0x20, "JSR abs", 3)

def disasm(start, end_addr=None, max_inst=80):
    pc = start
    out = []
    seen = set()
    n = 0
    while n < max_inst:
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
        if ty == "end" and end_addr is None:
            break
        pc += ln
        if end_addr and pc >= end_addr:
            break
    return "\n".join(out)

def disasm_linear(start, length):
    """Linear disassembly that doesn't stop at terminators."""
    pc = start
    out = []
    end = start + length
    while pc < end:
        op = b(pc)
        rec = OPS.get(op)
        if not rec:
            out.append(f"{pc:04X}: {op:02X}            ???")
            pc += 1
            continue
        mn, ln, _ = rec
        bs = bytes([b(pc + i) for i in range(ln)])
        bs_str = " ".join(f"{x:02X}" for x in bs).ljust(10)
        if ln == 1: asm = mn
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
        out.append(f"{pc:04X}: {bs_str}  {asm}")
        pc += ln
    return "\n".join(out)

if __name__ == "__main__":
    addr = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0xC4BA
    n = int(sys.argv[2]) if len(sys.argv) > 2 else 60
    if len(sys.argv) > 3 and sys.argv[3] == "linear":
        print(disasm_linear(addr, n))
    else:
        print(disasm(addr, max_inst=n))
