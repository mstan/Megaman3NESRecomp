#!/usr/bin/env python3
"""Find all references to $BB34 across all banks."""
import os
BANK_DIR = 'F:/Projects/nesrecomp-release/megaman3/banks'
for bank in range(16):
    path = f'{BANK_DIR}/bank{bank:02d}.bin'
    if not os.path.exists(path): continue
    with open(path, 'rb') as f:
        data = f.read()
    base = 0xC000 if bank == 15 else 0x8000
    # Raw $34 $BB byte sequence (little-endian BB34)
    offs = []
    i = 0
    while True:
        j = data.find(b'\x34\xbb', i)
        if j < 0: break
        offs.append(j)
        i = j + 1
    if offs:
        for o in offs:
            addr = base + o
            # Show context: 3 bytes before and 8 after
            start = max(0, o - 3)
            end = min(len(data), o + 8)
            ctx = data[start:end]
            # Determine opcode at addr-1 (JSR $BB34 would be 20 34 BB, JMP $BB34 would be 4C 34 BB)
            if o >= 1:
                op = data[o-1]
                op_name = {0x20:'JSR',0x4C:'JMP',0xBC:'LDY$x,X',0xBD:'LDA$x,X',0xB9:'LDA$x,Y'}.get(op, f'${op:02X}')
                print(f'bank{bank:02d} ${addr:04X} op=${op:02X}({op_name}) ctx={ctx.hex(" ")}')
            else:
                print(f'bank{bank:02d} ${addr:04X} ctx={ctx.hex(" ")}')
