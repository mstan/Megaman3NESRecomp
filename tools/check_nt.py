#!/usr/bin/env python3
"""Read nametable bytes from both builds to check mirroring."""
import socket
import json
import sys

def query(port, cmd_dict, timeout=3):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    try:
        s.connect(("127.0.0.1", port))
        s.sendall((json.dumps(cmd_dict) + "\n").encode())
        data = b""
        while True:
            chunk = s.recv(4096)
            if not chunk:
                break
            data += chunk
            if b"\n" in data:
                break
        return json.loads(data.decode().strip())
    finally:
        s.close()

def read_nt(port, addr, length=32):
    """Read nametable bytes via read_ppu command."""
    result = query(port, {"cmd": "read_ppu", "addr": f"{addr:04X}", "len": length})
    return result

for port, name in [(4372, "NATIVE"), (4373, "EMULATED")]:
    print(f"\n=== {name} (port {port}) ===")
    try:
        # Read first 32 bytes of each nametable page
        for nt_idx, nt_addr in enumerate([0x2000, 0x2400, 0x2800, 0x2C00]):
            result = read_nt(port, nt_addr, 32)
            if "data" in result:
                data = result["data"]
                print(f"  NT{nt_idx} (${nt_addr:04X}): {data[:64]}...")
            else:
                print(f"  NT{nt_idx}: {result}")
    except Exception as e:
        print(f"  Error: {e}")
