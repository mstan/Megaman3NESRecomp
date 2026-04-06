#!/usr/bin/env python3
"""Deep nametable comparison."""
import socket, json

def query(port, cmd_dict, timeout=3):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    try:
        s.connect(("127.0.0.1", port))
        s.sendall((json.dumps(cmd_dict) + "\n").encode())
        data = b""
        while True:
            chunk = s.recv(16384)
            if not chunk: break
            data += chunk
            if b"\n" in data: break
        return json.loads(data.decode().strip())
    finally:
        s.close()

port = 4372  # native
print("Reading full nametables from native build...")

# Read all 4 nametable pages (each 1024 bytes, but read_ppu may have limits)
nt_data = {}
for nt_idx, nt_addr in enumerate([0x2000, 0x2400, 0x2800, 0x2C00]):
    full = ""
    for offset in range(0, 1024, 256):
        r = query(port, {"cmd": "read_ppu", "addr": f"{nt_addr + offset:04X}", "len": 256})
        if "hex" in r:
            full += r["hex"]
    nt_data[nt_idx] = full

# Compare NT0 vs NT1
mismatches_01 = 0
for i in range(0, len(nt_data[0]), 2):
    if nt_data[0][i:i+2] != nt_data[1][i:i+2]:
        mismatches_01 += 1
        if mismatches_01 <= 5:
            print(f"  NT0 vs NT1 diff at byte {i//2}: NT0={nt_data[0][i:i+2]} NT1={nt_data[1][i:i+2]}")

# Compare NT0 vs NT2
mismatches_02 = 0
for i in range(0, len(nt_data[0]), 2):
    if nt_data[0][i:i+2] != nt_data[2][i:i+2]:
        mismatches_02 += 1

print(f"\nNT0 vs NT1: {mismatches_01} mismatched bytes out of {len(nt_data[0])//2}")
print(f"NT0 vs NT2: {mismatches_02} mismatched bytes out of {len(nt_data[0])//2}")

# Check attribute area specifically (offset 960-1023)
attr0 = nt_data[0][960*2:]
attr1 = nt_data[1][960*2:]
attr2 = nt_data[2][960*2:]
print(f"\nNT0 attrs: {attr0[:32]}...")
print(f"NT1 attrs: {attr1[:32]}...")
print(f"NT2 attrs: {attr2[:32]}...")

# Show a sample of tile data around rows 8-12 (where portraits are)
for nt_idx in range(2):
    row8 = nt_data[nt_idx][8*32*2 : 9*32*2]
    print(f"\nNT{nt_idx} row 8: {row8}")
