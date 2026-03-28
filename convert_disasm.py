#!/usr/bin/env python3
"""Convert mm3_functions.txt into game.cfg extra_func entries."""

fixed_funcs = []
bank_funcs = {}

with open('mm3_functions.txt') as f:
    for line in f:
        line = line.strip()
        if not line:
            continue
        parts = line.split()
        bank_8k = int(parts[0], 16)
        addr = int(parts[1], 16)

        recomp_bank = bank_8k // 2

        if addr >= 0xC000:
            fixed_funcs.append(addr)
        else:
            if recomp_bank not in bank_funcs:
                bank_funcs[recomp_bank] = []
            bank_funcs[recomp_bank].append(addr)

fixed_funcs.sort()

with open('game.cfg', 'w') as out:
    out.write('output_prefix mega-man-3\n\n')
    out.write('# Fixed bank functions ($C000-$FFFF) from MM3 disassembly\n')
    for addr in fixed_funcs:
        out.write('extra_func -1 %04X\n' % addr)
    out.write('\n# Total fixed bank: %d functions\n\n' % len(fixed_funcs))

    for bank in sorted(bank_funcs.keys()):
        addrs = sorted(bank_funcs[bank])
        out.write('# Switchable bank %d (%d functions)\n' % (bank, len(addrs)))
        for addr in addrs:
            out.write('extra_func %d %04X\n' % (bank, addr))
        out.write('\n')

    total = len(fixed_funcs) + sum(len(v) for v in bank_funcs.values())
    out.write('# Grand total: %d extra_func entries from disassembly\n' % total)

print('Fixed bank: %d functions' % len(fixed_funcs))
for bank in sorted(bank_funcs.keys()):
    print('Bank %2d: %4d functions' % (bank, len(bank_funcs[bank])))
total = len(fixed_funcs) + sum(len(v) for v in bank_funcs.values())
print('Total:  %d entries' % total)
