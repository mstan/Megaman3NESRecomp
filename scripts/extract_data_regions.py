"""Extract data regions from MM3 disassembly bank files.
Identifies ALL non-code regions by looking for lines that are NOT valid
6502 instructions (db, dw, raw hex bytes, comments-only, etc.)."""
import re, os

DISASM_DIR = r"C:\Users\Matthew\AppData\Local\Temp\megaman3-disassembly"

# Valid 6502 mnemonics
MNEMONICS = {
    "ADC","AND","ASL","BCC","BCS","BEQ","BIT","BMI","BNE","BPL","BRK","BVC",
    "BVS","CLC","CLD","CLI","CLV","CMP","CPX","CPY","DEC","DEX","DEY","EOR",
    "INC","INX","INY","JMP","JSR","LDA","LDX","LDY","LSR","NOP","ORA","PHA",
    "PHP","PLA","PLP","ROL","ROR","RTI","RTS","SBC","SEC","SED","SEI","STA",
    "STX","STY","TAX","TAY","TSX","TXA","TXS","TYA"
}

def extract_regions(asm_file, bank_16k, hex_prefix):
    in_data = False
    data_start = data_end = 0
    regions = []
    pattern = re.compile(rf'\${hex_prefix}([0-9A-Fa-f]{{4}})')

    for line in open(asm_file):
        m = pattern.search(line)
        if not m:
            continue
        addr = int(m.group(1), 16)
        stripped = line.strip()

        # Check if this line is CODE: starts with a known mnemonic
        first_word = stripped.split()[0] if stripped.split() else ""
        # Strip leading label (label:)
        if first_word.endswith(":"):
            parts = stripped.split(None, 1)
            first_word = parts[1].split()[0] if len(parts) > 1 and parts[1].strip() else ""
        is_code = first_word.upper() in MNEMONICS

        if not is_code and not in_data:
            data_start = addr
            data_end = addr
            in_data = True
        elif not is_code and in_data:
            data_end = addr
        elif is_code and in_data:
            size = data_end - data_start + 8
            if size >= 8:  # even small data tables matter
                regions.append((bank_16k, data_start, min(data_end + 8, 0xFFFF)))
            in_data = False

    if in_data and data_end - data_start >= 8:
        regions.append((bank_16k, data_start, min(data_end + 8, 0xFFFF)))

    return regions

all_regions = []
for fname in sorted(os.listdir(DISASM_DIR)):
    if not fname.endswith(".asm") or fname in ("assemble.asm", "chr_banks.asm"):
        continue
    path = os.path.join(DISASM_DIR, fname)
    m = re.match(r"bank([0-9A-Fa-f]{2})", fname)
    if not m:
        continue
    hex_prefix = m.group(1).upper()
    bank_8k = int(hex_prefix, 16)
    bank_16k = bank_8k // 2

    regions = extract_regions(path, bank_16k, hex_prefix)
    all_regions.extend(regions)

print(f"# Data regions extracted from MM3 community disassembly")
print(f"# {len(all_regions)} regions found across all banks (code vs non-code analysis)")
for bank, start, end in all_regions:
    print(f"data_region {bank} 0x{start:04X} 0x{end:04X}")
