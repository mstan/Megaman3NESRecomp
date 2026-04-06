#!/usr/bin/env python3
"""Compare PPU register state between native and emulated."""
import socket
import json

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

# Get frame record from both (has PPU regs)
for port, label in [(4372, "NATIVE"), (4373, "EMULATED")]:
    state = query(port, {"cmd": "state"})
    print(f"\n=== {label} (port {port}) ===")
    for k in ["frame", "ppuctrl", "ppumask", "ppustatus", "ppuscroll_x", "ppuscroll_y",
              "ppuaddr", "ppuaddr_latch", "spr0_split_active", "vblank_depth",
              "current_bank"]:
        v = state.get(k, "?")
        if isinstance(v, int) and k.startswith("ppu"):
            print(f"  {k}: {v} (${v:02X})")
        else:
            print(f"  {k}: {v}")

    # Also get mapper for mirroring
    ms = query(port, {"cmd": "mapper_state"})
    print(f"  mirror: {ms.get('mirror', '?')}")

    # Get palette
    pal_resp = query(port, {"cmd": "read_ppu", "addr": "3F00", "len": 32})
    print(f"  palette: {pal_resp.get('hex', '?')}")
