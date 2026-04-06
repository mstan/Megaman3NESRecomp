#!/usr/bin/env python3
"""Verify the LDA/STA/LDA/STA/JMP(zp) split-table pattern across all banks,
and enumerate table entries for each match."""
import os
BANK_DIR = 'F:/Projects/nesrecomp-release/megaman3/banks'

def scan_bank(data, bank_num, base_addr):
    """Scan one bank for the split-table JMP(zp) pattern. Returns list of matches."""
    matches = []
    for i in range(len(data) - 12):
        # B9/BD lo hi   LDA abs,Y or LDA abs,X
        # 85 zp         STA zp
        # B9/BD lo hi   LDA abs,Y or LDA abs,X
        # 85 zp+1       STA zp+1
        # 6C zp 00      JMP (zp)
        if data[i] not in (0xB9, 0xBD): continue
        if data[i+3] != 0x85: continue
        if data[i+5] not in (0xB9, 0xBD): continue
        if data[i+8] != 0x85: continue
        if data[i+10] != 0x6C: continue
        z1 = data[i+4]
        z2 = data[i+9]
        zj_lo = data[i+11]
        zj_hi = data[i+12]
        if z2 != z1 + 1: continue
        if zj_hi != 0 or zj_lo != z1: continue
        lo_tbl = data[i+1] | (data[i+2] << 8)
        hi_tbl = data[i+6] | (data[i+7] << 8)
        site = base_addr + i
        matches.append((site, lo_tbl, hi_tbl, z1))
    return matches

total = 0
for bank in range(16):
    path = f'{BANK_DIR}/bank{bank:02d}.bin'
    if not os.path.exists(path): continue
    with open(path, 'rb') as f:
        data = f.read()
    # Banks 0-14 = switchable, mapped to $8000; bank 15 = fixed, at $C000
    base = 0xC000 if bank == 15 else 0x8000
    ms = scan_bank(data, bank, base)
    if ms:
        print(f'bank{bank:02d} (@${base:04X}): {len(ms)} match(es)')
        for site, lo_tbl, hi_tbl, zp in ms:
            print(f'  site ${site:04X}: lo_table=${lo_tbl:04X} hi_table=${hi_tbl:04X} zp=${zp:02X}')
            total += 1
print(f'TOTAL sites: {total}')
