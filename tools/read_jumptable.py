#!/usr/bin/env python3
"""Read the player state jump table from bank15 ($CD9A lo / $CDB0 hi)."""
with open('F:/Projects/nesrecomp-release/megaman3/banks/bank15.bin','rb') as f:
    d = f.read()

# Look for the actual fixed bank. Bank15 is 16KB = $C000-$FFFF.
base = 0xC000
off_lo = 0xCD9A - base
off_hi = 0xCDB0 - base
N = 22
lo = d[off_lo:off_lo+N]
hi = d[off_hi:off_hi+N]
print(f'lo @CD9A: {" ".join(f"{b:02X}" for b in lo)}')
print(f'hi @CDB0: {" ".join(f"{b:02X}" for b in hi)}')
print('state -> handler:')
for i, (l, h) in enumerate(zip(lo, hi)):
    print(f'  {i:2d}: ${h:02X}{l:02X}')
