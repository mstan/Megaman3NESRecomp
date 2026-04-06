#!/usr/bin/env python3
"""Compare scroll-related RAM between native and emulated."""
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

def read_ram(port, addr, length):
    resp = query(port, {"cmd": "read_ram", "addr": f"{addr:04X}", "len": length})
    hexstr = resp.get("hex", "")
    return [int(hexstr[i:i+2], 16) for i in range(0, len(hexstr), 2)]

# Common MM3 scroll/state RAM locations
locations = [
    (0x00, 16, "Zero page $00-$0F"),
    (0x1A, 8, "VBlank/timing $1A-$21"),
    (0x30, 8, "Game mode area $30-$37"),
    (0x40, 16, "Sub-mode area $40-$4F"),
    (0xF0, 16, "Bank/scroll area $F0-$FF"),
    (0xFC, 4, "Scroll shadow $FC-$FF"),
]

for port, label in [(4372, "NATIVE"), (4373, "EMULATED")]:
    print(f"\n=== {label} ===")
    try:
        for addr, length, desc in locations:
            data = read_ram(port, addr, length)
            hex_str = " ".join(f"{b:02X}" for b in data)
            print(f"  ${addr:04X}-${addr+length-1:04X} ({desc}): {hex_str}")
    except Exception as e:
        print(f"  Error: {e}")

# Diff specific important locations
print("\n=== DIFF ===")
for addr, length, desc in locations:
    nat = read_ram(4372, addr, length)
    emu = read_ram(4373, addr, length)
    diffs = [(i, nat[i], emu[i]) for i in range(length) if nat[i] != emu[i]]
    if diffs:
        for i, n, e in diffs:
            print(f"  ${addr+i:04X}: NAT={n:02X} EMU={e:02X}  ({desc})")
    else:
        print(f"  ${addr:04X}-${addr+length-1:04X}: identical ({desc})")
