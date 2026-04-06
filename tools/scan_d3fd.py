#!/usr/bin/env python3
"""Scan ROM banks for references to $D3FD."""
import os
BANK_DIR = 'F:/Projects/nesrecomp-release/megaman3/banks'
for bank in range(16):
    path = f'{BANK_DIR}/bank{bank:02d}.bin'
    if not os.path.exists(path): continue
    with open(path, 'rb') as f:
        data = f.read()
    for pat, name in [(b'\xfd\xd3', 'FD D3'), (b'\xfc\xd3', 'FC D3')]:
        offs = []
        i = 0
        while True:
            j = data.find(pat, i)
            if j < 0: break
            offs.append(j)
            i = j + 1
        if offs:
            # Convert offsets to $8000/A000/C000 addresses (assume R6 slot)
            hexs = [f'${0x8000+o:04X}/${0xA000+o:04X}/${0xC000+o-0x2000:04X}' if o < 0x2000 else f'${0x8000+o:04X}' for o in offs[:8]]
            print(f'bank{bank:02d}.bin {name}: {len(offs)} matches at offsets {[hex(o) for o in offs[:8]]}')
