#!/usr/bin/env python3
"""Dump the scheduler code from the ROM's fixed bank."""
rom = open('Mega-Man 3 # NES.NES', 'rb').read()
header = rom[:16]
prg_size = header[4] * 16384
print(f'PRG size: {prg_size} bytes ({header[4]} x 16KB)')

# Fixed bank ($E000-$FFFF) = last 8KB of PRG
fixed_start = 16 + prg_size - 8192
print(f'Fixed bank file offset: 0x{fixed_start:X}')

# Dump $FE00-$FFA0 (scheduler region)
for base in [0xFE00, 0xFEA0, 0xFF00, 0xFF14, 0xFF21, 0xFF90]:
    offset = fixed_start + (base - 0xE000)
    length = 48
    data = rom[offset:offset+length]
    print(f'\n--- ${base:04X} ---')
    for i in range(0, length, 16):
        addr = base + i
        hex_str = ' '.join(f'{data[j]:02X}' for j in range(i, min(i+16, length)))
        print(f'  ${addr:04X}: {hex_str}')
