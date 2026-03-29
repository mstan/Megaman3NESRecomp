#!/usr/bin/env python3
"""Extract PRG and CHR banks from Mega Man 3 ROM for Ghidra import."""
import os

rom_path = 'Mega-Man 3 # NES.NES'
out_dir = 'banks'
os.makedirs(out_dir, exist_ok=True)

with open(rom_path, 'rb') as f:
    header = f.read(16)
    prg_count = header[4]  # 16KB banks
    chr_count = header[5]  # 8KB banks
    has_trainer = (header[6] & 0x04) != 0

    if has_trainer:
        f.read(512)

    prg_start = f.tell()

    # 16KB bank pairs for Ghidra (matches recompiler bank numbering)
    for i in range(prg_count):
        data = f.read(0x4000)
        path = os.path.join(out_dir, 'bank%02d.bin' % i)
        with open(path, 'wb') as out:
            out.write(data)

    # CHR banks (8KB each)
    for i in range(chr_count):
        data = f.read(0x2000)
        path = os.path.join(out_dir, 'chr%02d.bin' % i)
        with open(path, 'wb') as out:
            out.write(data)

print('Extracted: %d x 16KB PRG banks, %d x 8KB CHR banks' % (prg_count, chr_count))
for fn in sorted(os.listdir(out_dir)):
    fp = os.path.join(out_dir, fn)
    print('  %s  (%d bytes)' % (fn, os.path.getsize(fp)))
