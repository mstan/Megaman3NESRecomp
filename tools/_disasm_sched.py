#!/usr/bin/env python3
"""Disassemble MM3 scheduler functions from ROM."""

# 6502 opcode table (simplified — covers what we need)
OPCODES = {
    0x00: ("BRK", "impl", 1), 0x01: ("ORA", "indx", 2), 0x05: ("ORA", "zp", 2),
    0x06: ("ASL", "zp", 2), 0x08: ("PHP", "impl", 1), 0x09: ("ORA", "imm", 2),
    0x0A: ("ASL", "acc", 1), 0x10: ("BPL", "rel", 2), 0x18: ("CLC", "impl", 1),
    0x20: ("JSR", "abs", 3), 0x24: ("BIT", "zp", 2), 0x25: ("AND", "zp", 2),
    0x26: ("ROL", "zp", 2), 0x28: ("PLP", "impl", 1), 0x29: ("AND", "imm", 2),
    0x2A: ("ROL", "acc", 1), 0x2C: ("BIT", "abs", 3), 0x30: ("BMI", "rel", 2),
    0x38: ("SEC", "impl", 1), 0x40: ("RTI", "impl", 1), 0x45: ("EOR", "zp", 2),
    0x46: ("LSR", "zp", 2), 0x48: ("PHA", "impl", 1), 0x49: ("EOR", "imm", 2),
    0x4A: ("LSR", "acc", 1), 0x4C: ("JMP", "abs", 3), 0x4E: ("LSR", "abs", 3),
    0x50: ("BVC", "rel", 2), 0x60: ("RTS", "impl", 1), 0x65: ("ADC", "zp", 2),
    0x66: ("ROR", "zp", 2), 0x68: ("PLA", "impl", 1), 0x69: ("ADC", "imm", 2),
    0x6A: ("ROR", "acc", 1), 0x6C: ("JMP", "ind", 3), 0x78: ("SEI", "impl", 1),
    0x84: ("STY", "zp", 2), 0x85: ("STA", "zp", 2), 0x86: ("STX", "zp", 2),
    0x88: ("DEY", "impl", 1), 0x8A: ("TXA", "impl", 1), 0x8C: ("STY", "abs", 3),
    0x8D: ("STA", "abs", 3), 0x8E: ("STX", "abs", 3), 0x90: ("BCC", "rel", 2),
    0x91: ("STA", "indy", 2), 0x94: ("STY", "zpx", 2), 0x95: ("STA", "zpx", 2),
    0x96: ("STX", "zpy", 2), 0x98: ("TYA", "impl", 1), 0x99: ("STA", "absy", 3),
    0x9A: ("TXS", "impl", 1), 0x9D: ("STA", "absx", 3),
    0xA0: ("LDY", "imm", 2), 0xA2: ("LDX", "imm", 2), 0xA4: ("LDY", "zp", 2),
    0xA5: ("LDA", "zp", 2), 0xA6: ("LDX", "zp", 2), 0xA8: ("TAY", "impl", 1),
    0xA9: ("LDA", "imm", 2), 0xAA: ("TAX", "impl", 1), 0xAC: ("LDY", "abs", 3),
    0xAD: ("LDA", "abs", 3), 0xAE: ("LDX", "abs", 3), 0xB0: ("BCS", "rel", 2),
    0xB1: ("LDA", "indy", 2), 0xB4: ("LDY", "zpx", 2), 0xB5: ("LDA", "zpx", 2),
    0xB6: ("LDX", "zpy", 2), 0xB8: ("CLV", "impl", 1), 0xB9: ("LDA", "absy", 3),
    0xBA: ("TSX", "impl", 1), 0xBD: ("LDA", "absx", 3),
    0xC0: ("CPY", "imm", 2), 0xC4: ("CPY", "zp", 2), 0xC5: ("CMP", "zp", 2),
    0xC6: ("DEC", "zp", 2), 0xC8: ("INY", "impl", 1), 0xC9: ("CMP", "imm", 2),
    0xCA: ("DEX", "impl", 1), 0xCC: ("CPY", "abs", 3), 0xD0: ("BNE", "rel", 2),
    0xD5: ("CMP", "zpx", 2), 0xD8: ("CLD", "impl", 1),
    0xE0: ("CPX", "imm", 2), 0xE4: ("CPX", "zp", 2), 0xE5: ("SBC", "zp", 2),
    0xE6: ("INC", "zp", 2), 0xE8: ("INX", "impl", 1), 0xE9: ("SBC", "imm", 2),
    0xEA: ("NOP", "impl", 1), 0xEC: ("CPX", "abs", 3), 0xF0: ("BEQ", "rel", 2),
    0xF5: ("SBC", "zpx", 2), 0xF6: ("INC", "zpx", 2), 0xF8: ("SED", "impl", 1),
}

def disasm(data, base_addr, length=64):
    pc = 0
    lines = []
    while pc < length and pc < len(data):
        op = data[pc]
        entry = OPCODES.get(op)
        if not entry:
            lines.append(f"  ${base_addr+pc:04X}: {op:02X}          ???")
            pc += 1
            continue
        mnemonic, mode, size = entry
        raw = ' '.join(f'{data[pc+i]:02X}' for i in range(min(size, len(data)-pc)))
        operand = ""
        if size >= 2 and pc+1 < len(data):
            b1 = data[pc+1]
        if size >= 3 and pc+2 < len(data):
            b2 = data[pc+2]

        if mode == "impl" or mode == "acc":
            operand = ""
        elif mode == "imm":
            operand = f"#${b1:02X}"
        elif mode == "zp":
            operand = f"${b1:02X}"
        elif mode == "zpx":
            operand = f"${b1:02X},X"
        elif mode == "zpy":
            operand = f"${b1:02X},Y"
        elif mode == "abs":
            addr = b1 | (b2 << 8)
            operand = f"${addr:04X}"
        elif mode == "absx":
            addr = b1 | (b2 << 8)
            operand = f"${addr:04X},X"
        elif mode == "absy":
            addr = b1 | (b2 << 8)
            operand = f"${addr:04X},Y"
        elif mode == "ind":
            addr = b1 | (b2 << 8)
            operand = f"(${addr:04X})"
        elif mode == "indx":
            operand = f"(${b1:02X},X)"
        elif mode == "indy":
            operand = f"(${b1:02X}),Y"
        elif mode == "rel":
            target = base_addr + pc + 2 + (b1 if b1 < 128 else b1 - 256)
            operand = f"${target:04X}"

        lines.append(f"  ${base_addr+pc:04X}: {raw:<12s} {mnemonic} {operand}")
        pc += size
    return lines

# Read ROM
rom = open('Mega-Man 3 # NES.NES', 'rb').read()
prg_size = rom[4] * 16384
fixed_start = 16 + prg_size - 8192  # last 8KB = $E000-$FFFF

def get_rom(nes_addr, length):
    offset = fixed_start + (nes_addr - 0xE000)
    return rom[offset:offset+length]

# Disassemble key scheduler functions
for name, addr, length in [
    ("func_FE00 (RESET / scheduler boot)", 0xFE00, 128),
    ("func_FEAA (scheduler main loop)", 0xFEAA, 86),
    ("func_FF00", 0xFF00, 20),
    ("func_FF14 (channel index calc)", 0xFF14, 10),
    ("func_FF1E (yield countdown)", 0xFF1E, 3),
    ("func_FF21 (coroutine yield)", 0xFF21, 30),
    ("func_FF3F (timer set)", 0xFF3F, 10),
    ("func_FF90 (bank-switch dispatch)", 0xFF90, 64),
]:
    data = get_rom(addr, length)
    print(f"\n{'='*60}")
    print(f"{name}")
    print(f"{'='*60}")
    for line in disasm(data, addr, length):
        print(line)
