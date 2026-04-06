#!/usr/bin/env python3
"""Dump bytes around $8716 in bank 4 and disassemble."""
rom = open('Mega-Man 3 # NES.NES', 'rb').read()
prg_start = 16

# 16KB "bank 4" starts at PRG offset 4*16384
bank4_offset = prg_start + 4 * 16384

# $8716 = offset $0716 within the bank
for base in [0x8700, 0x8710, 0x8720, 0x8730]:
    offset = base - 0x8000
    data = rom[bank4_offset + offset : bank4_offset + offset + 16]
    hexs = ' '.join(f'{b:02X}' for b in data)
    # Also show as ASCII where printable
    ascii_str = ''.join(chr(b) if 32 <= b < 127 else '.' for b in data)
    print(f'  ${base:04X}: {hexs}  |{ascii_str}|')

# Also check if this looks like code or data
# Count illegal/rare opcodes in the region $8700-$8800
print('\nOpcode analysis $8700-$8800:')
illegal_count = 0
jsr_count = 0
rts_count = 0
for i in range(0x700, 0x800):
    b = rom[bank4_offset + i]
    if b in (0x02, 0x12, 0x22, 0x32, 0x42, 0x52, 0x62, 0x72, 0x92, 0xB2, 0xD2, 0xF2):
        illegal_count += 1  # JAM opcodes
    if b == 0x20: jsr_count += 1
    if b == 0x60: rts_count += 1
print(f'  JAM opcodes: {illegal_count}')
print(f'  JSR ($20): {jsr_count}')
print(f'  RTS ($60): {rts_count}')

# Also check the upper half ($A000-$BFFF) for comparison
print('\nOpcode analysis $A000-$A100 (upper 8KB):')
illegal_count = 0
jsr_count = 0
rts_count = 0
for i in range(0x2000, 0x2100):
    b = rom[bank4_offset + i]
    if b in (0x02, 0x12, 0x22, 0x32, 0x42, 0x52, 0x62, 0x72, 0x92, 0xB2, 0xD2, 0xF2):
        illegal_count += 1
    if b == 0x20: jsr_count += 1
    if b == 0x60: rts_count += 1
print(f'  JAM opcodes: {illegal_count}')
print(f'  JSR ($20): {jsr_count}')
print(f'  RTS ($60): {rts_count}')

# Check what the caller looks like — who dispatches to $8716?
# Search the fixed bank for references to bank 4 + $8716
print('\nSearching fixed bank for $8716 references...')
fixed_offset = prg_start + 15 * 16384  # bank 15 = last 16KB
for i in range(0, 16384 - 2):
    lo = rom[fixed_offset + i]
    hi = rom[fixed_offset + i + 1]
    addr = lo | (hi << 8)
    if addr == 0x8716:
        ctx_start = max(0, i - 3)
        ctx = rom[fixed_offset + ctx_start : fixed_offset + i + 4]
        hexs = ' '.join(f'{b:02X}' for b in ctx)
        nes_addr = 0xC000 + ctx_start
        print(f'  Found at ${nes_addr:04X}: {hexs}')
