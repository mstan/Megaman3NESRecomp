#!/usr/bin/env python3
"""Find what dispatches to $8716. Search for indirect references in all banks."""
rom = open('Mega-Man 3 # NES.NES', 'rb').read()
prg_start = 16
prg_banks = rom[4]  # 16KB banks

print(f"Searching {prg_banks} banks for references to $8716...\n")

# The dispatch to $8716 comes from call_by_address.
# This is called from:
# 1. JMP (ind) — reads a pointer from RAM/ROM
# 2. RTS-as-goto — pops address from 6502 stack
# 3. Cross-bank dispatch table lookups

# Search for $16/$87 byte pair (little-endian $8716) in all banks
for b in range(prg_banks):
    bank_offset = prg_start + b * 16384
    bank_data = rom[bank_offset:bank_offset + 16384]
    for i in range(len(bank_data) - 1):
        if bank_data[i] == 0x16 and bank_data[i+1] == 0x87:
            # Check context — what's around it?
            ctx_start = max(0, i - 4)
            ctx = bank_data[ctx_start:i+6]
            nes_addr = 0x8000 + i if b < prg_banks - 1 else 0xC000 + i
            hexs = ' '.join(f'{x:02X}' for x in ctx)
            # Is this a pointer table entry? Check if preceded by another pointer-like pair
            prev_lo = bank_data[i-2] if i >= 2 else 0
            prev_hi = bank_data[i-1] if i >= 1 else 0
            prev_addr = prev_lo | (prev_hi << 8)
            print(f"  Bank {b:>2}, ${nes_addr:04X}: {hexs}  (prev pair = ${prev_addr:04X})")

# Also check: $8715 ($16-1 for RTS addr-1 convention)
print(f"\nSearching for $8715 (RTS addr-1 convention)...")
for b in range(prg_banks):
    bank_offset = prg_start + b * 16384
    bank_data = rom[bank_offset:bank_offset + 16384]
    for i in range(len(bank_data) - 1):
        if bank_data[i] == 0x15 and bank_data[i+1] == 0x87:
            nes_addr = 0x8000 + i if b < prg_banks - 1 else 0xC000 + i
            ctx_start = max(0, i - 4)
            ctx = bank_data[ctx_start:i+6]
            hexs = ' '.join(f'{x:02X}' for x in ctx)
            print(f"  Bank {b:>2}, ${nes_addr:04X}: {hexs}")
