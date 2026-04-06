#!/usr/bin/env python3
"""Compare CHR RAM content between native and emulated."""
import socket
import json
import sys

def query(port, cmd_dict, timeout=5):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(cmd_dict) + "\n").encode())
    data = b""
    while True:
        chunk = s.recv(65536)
        if not chunk: break
        data += chunk
        if b"\n" in data: break
    s.close()
    return json.loads(data.decode().split("\n")[0])

def read_chr(port, start, length):
    """Read CHR RAM in 256-byte chunks via read_ppu."""
    result = []
    for offset in range(0, length, 256):
        addr = start + offset
        resp = query(port, {"cmd": "read_ppu", "addr": f"{addr:04X}", "len": 256})
        hexstr = resp.get("hex", "")
        for i in range(0, len(hexstr), 2):
            result.append(int(hexstr[i:i+2], 16))
    return result

# Compare CHR data ($0000-$1FFF = 8KB pattern tables)
nat_chr = read_chr(4372, 0x0000, 0x2000)
emu_chr = read_chr(4373, 0x0000, 0x2000)

# Summary per 1KB bank
for bank in range(8):
    start = bank * 0x400
    end = start + 0x400
    diffs = sum(1 for i in range(start, end) if nat_chr[i] != emu_chr[i])
    label = f"${start:04X}-${end-1:04X}"
    if diffs == 0:
        print(f"CHR bank {bank} ({label}): IDENTICAL")
    else:
        first_diff = next(i for i in range(start, end) if nat_chr[i] != emu_chr[i])
        print(f"CHR bank {bank} ({label}): {diffs} differences (first at ${first_diff:04X}: NAT={nat_chr[first_diff]:02X} EMU={emu_chr[first_diff]:02X})")

# Total diff count
total_diffs = sum(1 for i in range(min(len(nat_chr), len(emu_chr))) if nat_chr[i] != emu_chr[i])
print(f"\nTotal CHR differences: {total_diffs} / {len(nat_chr)} bytes")

# Also dump nametable content more thoroughly - show portrait region (rows 5-25)
print("\n=== NT0 portrait region (rows 4-28) ===")
for port, label in [(4372, "NAT"), (4373, "EMU")]:
    # Read full NT0
    nt = []
    for offset in range(0, 0x400, 256):
        resp = query(port, {"cmd": "read_ppu", "addr": f"{0x2000 + offset:04X}", "len": 256})
        hexstr = resp.get("hex", "")
        for i in range(0, len(hexstr), 2):
            nt.append(int(hexstr[i:i+2], 16))

    print(f"\n{label}:")
    for row in range(4, 28):
        tiles = nt[row*32:(row+1)*32]
        row_str = " ".join(f"{t:02X}" for t in tiles)
        print(f"  Row {row:2d}: {row_str}")
