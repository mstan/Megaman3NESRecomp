#!/usr/bin/env python3
"""Dump bank14 split-table at $BDE6/$BDEC to see if $BB34 is there."""
with open('F:/Projects/nesrecomp-release/megaman3/banks/bank14.bin', 'rb') as f:
    d = f.read()
base = 0x8000  # bank14 is switchable at $8000-$BFFF
for i in range(24):
    lo = d[0xBDE6 - base + i]
    hi = d[0xBDEC - base + i]
    print(f'  {i:2d}: ${hi:02X}{lo:02X}')
