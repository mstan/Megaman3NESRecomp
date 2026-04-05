"""Convert game.cfg (plaintext) to game.toml (structured TOML)."""
import re
import sys
from collections import defaultdict

cfg_path = sys.argv[1] if len(sys.argv) > 1 else "game.cfg"
toml_path = sys.argv[2] if len(sys.argv) > 2 else "game.toml"

output_prefix = ""
push_all_jsr = False
inline_dispatches = []
replace_funcs = []
data_regions = []
extra_funcs = defaultdict(list)  # bank -> [addr, ...]
nop_jsrs = []
push_jsrs = []

with open(cfg_path) as f:
    for line in f:
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        parts = line.split()
        key = parts[0]

        if key == "output_prefix":
            output_prefix = parts[1]
        elif key == "push_all_jsr":
            push_all_jsr = True
        elif key == "inline_dispatch":
            inline_dispatches.append(int(parts[1], 16))
        elif key == "replace_func":
            bank = int(parts[1])
            addr = int(parts[2], 16)
            replace_funcs.append((bank, addr))
        elif key == "data_region":
            bank = int(parts[1])
            start = int(parts[2], 16)
            end = int(parts[3], 16)
            data_regions.append((bank, start, end))
        elif key == "extra_func":
            bank = int(parts[1])
            addr = int(parts[2], 16)
            extra_funcs[bank].append(addr)
        elif key == "nop_jsr":
            nop_jsrs.append(int(parts[1], 16))
        elif key == "push_jsr":
            push_jsrs.append(int(parts[1], 16))

# Write TOML
with open(toml_path, "w") as f:
    f.write("# Mega Man 3 (NES) — NESRecomp configuration\n")
    f.write("# Auto-generated from game.cfg\n\n")

    f.write("[game]\n")
    f.write(f'output_prefix = "{output_prefix}"\n')
    if push_all_jsr:
        f.write("push_all_jsr = true\n")
    f.write("\n")

    for addr in inline_dispatches:
        f.write("[[inline_dispatch]]\n")
        f.write(f"addr = 0x{addr:04X}\n\n")

    for bank, addr in replace_funcs:
        f.write("[[replace_func]]\n")
        f.write(f"bank = {bank}\n")
        f.write(f"addr = 0x{addr:04X}\n\n")

    if nop_jsrs:
        for addr in nop_jsrs:
            f.write("[[nop_jsr]]\n")
            f.write(f"addr = 0x{addr:04X}\n\n")

    if push_jsrs:
        for addr in push_jsrs:
            f.write("[[push_jsr]]\n")
            f.write(f"addr = 0x{addr:04X}\n\n")

    for bank, start, end in data_regions:
        f.write("[[data_region]]\n")
        f.write(f"bank = {bank}\n")
        f.write(f"start = 0x{start:04X}\n")
        f.write(f"end = 0x{end:04X}\n\n")

    f.write("[functions]\n")
    # Fixed bank (bank -1) -> "fixed" key
    if -1 in extra_funcs:
        addrs = sorted(set(extra_funcs[-1]))
        f.write("fixed = [\n")
        for i, a in enumerate(addrs):
            comma = "," if i < len(addrs) - 1 else ""
            f.write(f"    0x{a:04X}{comma}\n")
        f.write("]\n")

    # Numbered banks
    for bank in sorted(k for k in extra_funcs if k >= 0):
        addrs = sorted(set(extra_funcs[bank]))
        f.write(f"bank{bank} = [\n")
        for i, a in enumerate(addrs):
            comma = "," if i < len(addrs) - 1 else ""
            f.write(f"    0x{a:04X}{comma}\n")
        f.write("]\n")

print(f"Converted {cfg_path} -> {toml_path}")
print(f"  {sum(len(v) for v in extra_funcs.values())} extra_func entries")
print(f"  {len(data_regions)} data_region entries")
print(f"  {len(replace_funcs)} replace_func entries")
print(f"  {len(inline_dispatches)} inline_dispatch entries")
print(f"  push_all_jsr = {push_all_jsr}")
