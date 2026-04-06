#!/usr/bin/env python3
"""Compare nametable content between native and emulated via read_ppu."""
import socket
import json
import sys

def query(port, cmd_dict, timeout=10):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(cmd_dict) + "\n").encode())
    data = b""
    while True:
        chunk = s.recv(65536)
        if not chunk:
            break
        data += chunk
        if b"\n" in data:
            break
    s.close()
    return json.loads(data.decode().split("\n")[0])

def read_nt(port, base_addr, total=1024):
    """Read nametable data in 256-byte chunks."""
    result = []
    for offset in range(0, total, 256):
        addr = base_addr + offset
        resp = query(port, {"cmd": "read_ppu", "addr": f"{addr:04X}", "len": 256})
        hexstr = resp.get("hex", "")
        for i in range(0, len(hexstr), 2):
            result.append(int(hexstr[i:i+2], 16))
    return result

# Read all 4 physical nametable pages from both sides
for nt_idx, base in enumerate([0x2000, 0x2400, 0x2800, 0x2C00]):
    print(f"\n=== NT{nt_idx} (${base:04X}) ===")
    nat_data = read_nt(4372, base)
    emu_data = read_nt(4373, base)

    diffs = 0
    first_diffs = []
    for i in range(min(len(nat_data), len(emu_data))):
        if nat_data[i] != emu_data[i]:
            if diffs < 10:
                first_diffs.append((base + i, nat_data[i], emu_data[i]))
            diffs += 1

    if diffs == 0:
        print(f"  IDENTICAL ({len(nat_data)} bytes)")
    else:
        print(f"  {diffs} differences:")
        for addr, n, e in first_diffs:
            print(f"    ${addr:04X}: NAT={n:02X} EMU={e:02X}")
        if diffs > 10:
            print(f"    ... and {diffs - 10} more")

    # Show first 2 rows of tile indices for context
    print(f"  NAT first 32 tiles: {' '.join(f'{b:02X}' for b in nat_data[:32])}")
    print(f"  EMU first 32 tiles: {' '.join(f'{b:02X}' for b in emu_data[:32])}")

# Also compare mirroring
nat_ms = query(4372, {"cmd": "mapper_state"})
emu_ms = query(4373, {"cmd": "mapper_state"})
print(f"\nMirroring: NAT={nat_ms.get('mirror')} EMU={emu_ms.get('mirror')}")
print(f"MMC3 regs: NAT={nat_ms.get('mmc3_regs')} EMU={emu_ms.get('mmc3_regs')}")
