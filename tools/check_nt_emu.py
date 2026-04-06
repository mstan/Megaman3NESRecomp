#!/usr/bin/env python3
"""Read nametable data from emulated build."""
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

port = 4373  # emulated
print(f"Reading nametables from emulated build (port {port})...")

nt_data = {}
for nt_idx, nt_addr in enumerate([0x2000, 0x2400, 0x2800, 0x2C00]):
    full = ""
    for offset in range(0, 1024, 256):
        r = query(port, {"cmd": "read_ppu", "addr": f"{nt_addr + offset:04X}", "len": 256})
        if "hex" in r:
            full += r["hex"]
        else:
            print(f"  Error reading NT{nt_idx}+{offset}: {r}")
            full = None
            break
    nt_data[nt_idx] = full

if all(v is not None for v in nt_data.values()):
    # Compare
    mismatches = {}
    for pair in [(0,1), (0,2), (1,3), (2,3)]:
        a, b = pair
        cnt = sum(1 for i in range(0, len(nt_data[a]), 2) if nt_data[a][i:i+2] != nt_data[b][i:i+2])
        mismatches[pair] = cnt
        print(f"NT{a} vs NT{b}: {cnt} mismatched bytes out of {len(nt_data[a])//2}")

    # Determine mirroring
    if mismatches[(0,1)] == 0 and mismatches[(2,3)] == 0 and mismatches[(0,2)] > 0:
        print("\n=> HORIZONTAL mirroring (NT0==NT1, NT2==NT3, NT0!=NT2)")
    elif mismatches[(0,2)] == 0 and mismatches[(1,3)] == 0 and mismatches[(0,1)] > 0:
        print("\n=> VERTICAL mirroring (NT0==NT2, NT1==NT3, NT0!=NT1)")
    elif all(v == 0 for v in mismatches.values()):
        print("\n=> SINGLE-SCREEN (all same)")
    else:
        print(f"\n=> UNKNOWN mirroring pattern")

    # Show attrs
    for nt_idx in range(4):
        attr = nt_data[nt_idx][960*2:]
        print(f"NT{nt_idx} attrs: {attr[:32]}...")

    # Show row 8
    for nt_idx in range(2):
        row8 = nt_data[nt_idx][8*32*2 : 9*32*2]
        print(f"NT{nt_idx} row 8: {row8}")
