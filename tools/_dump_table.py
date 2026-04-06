#!/usr/bin/env python3
"""Dump the pointer table around $8AA5 in bank 3 and bank 5."""
rom = open('Mega-Man 3 # NES.NES', 'rb').read()
prg_start = 16

for bank in [3, 5]:
    bank_offset = prg_start + bank * 16384
    print(f"\n=== Bank {bank}, $8A90-$8AC0 ===")
    for base in range(0x8A90, 0x8AC0, 16):
        offset = base - 0x8000
        data = rom[bank_offset + offset : bank_offset + offset + 16]
        hexs = ' '.join(f'{b:02X}' for b in data)
        # Try to interpret as 16-bit LE pointers
        ptrs = []
        for i in range(0, 16, 2):
            if i + 1 < len(data):
                ptr = data[i] | (data[i+1] << 8)
                ptrs.append(f'${ptr:04X}')
        print(f'  ${base:04X}: {hexs}')
        print(f'         ptrs: {" ".join(ptrs)}')

# Also check what $8AA0-$8AB0 looks like as code
print(f"\n=== Bank 3, disasm at $8A90 ===")
bank_offset = prg_start + 3 * 16384
for addr in range(0x8A90, 0x8AB0):
    b = rom[bank_offset + (addr - 0x8000)]
    print(f'  ${addr:04X}: {b:02X}', end='')
    if b == 0x20: print(' (JSR)', end='')
    elif b == 0x4C: print(' (JMP)', end='')
    elif b == 0x6C: print(' (JMP ind)', end='')
    elif b == 0x60: print(' (RTS)', end='')
    print()
