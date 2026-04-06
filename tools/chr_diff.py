#!/usr/bin/env python3
"""Compare CHR pattern data between native and emulated."""
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

def read_chr(port, addr, length):
    full = ""
    for off in range(0, length, 256):
        r = query(port, {"cmd": "read_ppu", "addr": f"{addr+off:04X}", "len": min(256, length-off)})
        full += r.get("hex", "")
    return bytes.fromhex(full)

# Read full CHR from both
print("Reading CHR pattern tables...")
chr_native = read_chr(4372, 0x0000, 0x2000)
chr_emu = read_chr(4373, 0x0000, 0x2000)
print(f"Native CHR: {len(chr_native)} bytes, Emulated CHR: {len(chr_emu)} bytes")

# Count total differences
diffs = sum(1 for i in range(min(len(chr_native), len(chr_emu))) if chr_native[i] != chr_emu[i])
print(f"\nTotal CHR byte differences: {diffs} / {min(len(chr_native), len(chr_emu))}")

# Find which tiles differ
tile_diffs = []
for tile in range(512):  # 512 tiles in 8KB
    start = tile * 16
    if chr_native[start:start+16] != chr_emu[start:start+16]:
        tile_diffs.append(tile)

print(f"Different tiles: {len(tile_diffs)} / 512")
if tile_diffs:
    # Show first 20 different tiles
    for t in tile_diffs[:30]:
        tbl = "PT0" if t < 256 else "PT1"
        tidx = t if t < 256 else t - 256
        print(f"  Tile ${t:03X} ({tbl} #{tidx:02X}/${ tidx:02X}): N={chr_native[t*16:t*16+16].hex()} E={chr_emu[t*16:t*16+16].hex()}")

# Check specific portrait tiles from nametable
# Row 4 left portrait: tile $CC,$CD,$CE,$CF (top row, first boss top tiles)
print("\nPortrait tile check (from nametable row 4):")
for tile_id in [0xCC, 0xCD, 0xCE, 0xCF, 0xC0, 0xC1, 0x88, 0x89, 0x8C, 0x8D, 0x4C, 0x4D, 0xC8, 0xC9]:
    n = chr_native[tile_id*16:tile_id*16+16]
    e = chr_emu[tile_id*16:tile_id*16+16]
    match = "=" if n == e else "DIFF"
    print(f"  Tile ${tile_id:02X}: {match}")
