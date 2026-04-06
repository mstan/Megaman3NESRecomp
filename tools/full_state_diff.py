#!/usr/bin/env python3
"""Full PPU state comparison between native and emulated."""
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

for name, port in [("NATIVE", 4372), ("EMULATED", 4373)]:
    print(f"\n=== {name} (port {port}) ===")
    # PPU registers
    r = query(port, {"cmd": "read_ppu_regs"})
    print(f"PPU regs: {r}")

    # OAM (first 32 bytes = first 8 sprites)
    r = query(port, {"cmd": "read_ppu", "addr": "FE00", "len": 64})
    print(f"OAM (first 16 sprites): {r.get('hex','?')[:128]}...")

    # Scroll state - check RAM addresses used for scroll
    r = query(port, {"cmd": "read_ram", "addr": "FC", "len": 4})
    print(f"RAM $FC-$FF (scroll/ctrl): {r.get('hex','?')}")

    r = query(port, {"cmd": "read_ram", "addr": "F8", "len": 4})
    print(f"RAM $F8-$FB (scroll/bank): {r.get('hex','?')}")

    # Game state
    r = query(port, {"cmd": "read_ram", "addr": "22", "len": 1})
    print(f"RAM $22 (stage): {r.get('hex','?')}")

    r = query(port, {"cmd": "read_ram", "addr": "29", "len": 1})
    print(f"RAM $29 (init counter): {r.get('hex','?')}")

    r = query(port, {"cmd": "read_ram", "addr": "2A", "len": 4})
    print(f"RAM $2A-$2D: {r.get('hex','?')}")

    # Full palette
    r = query(port, {"cmd": "read_ppu", "addr": "3F00", "len": 32})
    print(f"Full palette: {r.get('hex','?')}")
