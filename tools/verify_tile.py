#!/usr/bin/env python3
"""Verify specific tile CHR data between native and emulated."""
import socket
import json

def query(port, cmd_dict, timeout=5):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(cmd_dict) + "\n").encode())
    data = b""
    while True:
        chunk = s.recv(4096)
        if not chunk: break
        data += chunk
        if b"\n" in data: break
    s.close()
    return json.loads(data.decode().split("\n")[0])

def read_chr_bytes(port, addr, length):
    resp = query(port, {"cmd": "read_ppu", "addr": f"{addr:04X}", "len": length})
    hexstr = resp.get("hex", "")
    return [int(hexstr[i:i+2], 16) for i in range(0, len(hexstr), 2)]

# Tile IDs from row 2 of stage select nametable:
# Position 0: tiles 8C, 8D, 8E, 8F (should be Hard Man on emulated)
# Position 1: tiles 4C, 4D, 4E, 4F (center/Mega Man)
# Position 2: tiles C8, C9, CA, CB
test_tiles = [0x8C, 0x8D, 0xCC, 0xCD, 0x80, 0x81, 0xC4, 0xC5]

for tile_id in test_tiles:
    chr_addr = tile_id * 16  # background pattern table at $0000
    nat_data = read_chr_bytes(4372, chr_addr, 16)
    emu_data = read_chr_bytes(4373, chr_addr, 16)
    match = "MATCH" if nat_data == emu_data else "DIFFER"
    print(f"Tile ${tile_id:02X} @ CHR ${chr_addr:04X}: {match}")
    if nat_data != emu_data:
        print(f"  NAT: {' '.join(f'{b:02X}' for b in nat_data)}")
        print(f"  EMU: {' '.join(f'{b:02X}' for b in emu_data)}")
    else:
        print(f"  Data: {' '.join(f'{b:02X}' for b in nat_data)}")

# Also check current PPUCTRL and scroll
for port, label in [(4372, "NAT"), (4373, "EMU")]:
    ps = query(port, {"cmd": "ppu_state"})
    ms = query(port, {"cmd": "mm3_state"})
    print(f"\n{label}: ppuctrl={ps['ppuctrl']} scroll=({ps['scroll_x']},{ps['scroll_y']}) frame={ms['frame']}")
