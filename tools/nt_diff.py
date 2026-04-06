#!/usr/bin/env python3
"""Compare physical nametable pages between native and emulated."""
import socket, json, sys

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

def read_nt_page(port, base_addr, size=1024):
    """Read a full nametable page (1024 bytes)."""
    full_hex = ""
    for offset in range(0, size, 256):
        r = query(port, {"cmd": "read_ppu", "addr": f"{base_addr + offset:04X}", "len": 256})
        full_hex += r.get("hex", "")
    return bytes.fromhex(full_hex)

ports = {"NATIVE": 4372, "EMULATED": 4373}
nt_pages = {}

for name, port in ports.items():
    try:
        # Read physical page 0 ($2000) and page 1 ($2400)
        nt_pages[(name, 0)] = read_nt_page(port, 0x2000)
        nt_pages[(name, 1)] = read_nt_page(port, 0x2400)
        print(f"{name}: read 2 nametable pages OK")
    except Exception as e:
        print(f"{name}: {e}")
        sys.exit(1)

# Compare page 0 across builds
print("\n=== Page 0 ($2000) comparison ===")
diffs = []
for i in range(1024):
    n = nt_pages[("NATIVE", 0)][i]
    e = nt_pages[("EMULATED", 0)][i]
    if n != e:
        diffs.append((i, n, e))
print(f"Total differences: {len(diffs)} / 1024")
for off, nv, ev in diffs[:20]:
    row, col = off // 32, off % 32
    print(f"  offset {off:3d} (row {row:2d}, col {col:2d}): native=${nv:02X} emu=${ev:02X}")
if len(diffs) > 20:
    print(f"  ... and {len(diffs)-20} more")

# Compare page 1 across builds
print("\n=== Page 1 ($2400) comparison ===")
diffs1 = []
for i in range(1024):
    n = nt_pages[("NATIVE", 1)][i]
    e = nt_pages[("EMULATED", 1)][i]
    if n != e:
        diffs1.append((i, n, e))
print(f"Total differences: {len(diffs1)} / 1024")
for off, nv, ev in diffs1[:20]:
    row, col = off // 32, off % 32
    print(f"  offset {off:3d} (row {row:2d}, col {col:2d}): native=${nv:02X} emu=${ev:02X}")

# Also compare PPU state
for name, port in ports.items():
    r = query(port, {"cmd": "read_ppu", "addr": "3F00", "len": 32})
    print(f"\n{name} palette: {r.get('hex','?')}")

# Show a visual map of page 0 rows 4-20 (portrait area)
print("\n=== Page 0 portrait area (rows 4-20) ===")
for row in range(4, 20):
    n_row = nt_pages[("NATIVE", 0)][row*32:(row+1)*32]
    e_row = nt_pages[("EMULATED", 0)][row*32:(row+1)*32]
    match = "=" if n_row == e_row else "!"
    print(f"Row {row:2d} {match}: N={n_row.hex()}")
    if n_row != e_row:
        print(f"         E={e_row.hex()}")
