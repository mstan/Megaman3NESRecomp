#!/usr/bin/env python3
"""Trace $7A and PPUCTRL over a range of frames to confirm alternation."""
import socket, json, sys

PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 4372

def tcp_cmd(cmd):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect(("127.0.0.1", PORT))
    s.sendall((json.dumps(cmd) + "\n").encode())
    buf = b""
    while b"\n" not in buf:
        chunk = s.recv(4096)
        if not chunk: break
        buf += chunk
    s.close()
    return json.loads(buf.decode().strip())

def read_frame_byte(frame, addr):
    r = tcp_cmd({"cmd": "read_frame_ram", "frame": frame, "addr": hex(addr), "len": 1})
    return int(r["hex"], 16)

# Get current frame
ping = tcp_cmd({"cmd": "ping"})
cur = ping["frame"]
print(f"Current frame: {cur}")

# Look at last 20 frames
start = cur - 20
print(f"\nFrame  PPUCTRL  $7A    $FD    $FF    $80(ch0st) last_func")
print("-" * 80)

for f in range(start, cur):
    fr = tcp_cmd({"cmd": "get_frame", "frame": f})
    if not fr.get("ok"):
        print(f"{f}: NOT IN BUFFER")
        continue
    ctrl = fr["ppu"]["ctrl"]
    zp = fr.get("ram_zp", "")
    v7a = int(zp[0x7A*2:0x7A*2+2], 16) if len(zp) > 0x7A*2+1 else -1
    vfd = int(zp[0xFD*2:0xFD*2+2], 16) if len(zp) > 0xFD*2+1 else -1
    vff = int(zp[0xFF*2:0xFF*2+2], 16) if len(zp) > 0xFF*2+1 else -1
    v80 = int(zp[0x80*2:0x80*2+2], 16) if len(zp) > 0x80*2+1 else -1
    nt_bits = int(ctrl.replace("0x",""), 16) & 3
    print(f"{f:5d}  {ctrl}(nt={nt_bits})  ${v7a:02X}     ${vfd:02X}     ${vff:02X}     ${v80:02X}        {fr.get('last_func','')}")
