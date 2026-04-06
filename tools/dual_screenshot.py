#!/usr/bin/env python3
"""Take screenshots from both native and emulated instances."""
import socket
import json

def cmd(port, c):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(c) + "\n").encode())
    data = b""
    while True:
        chunk = s.recv(4096)
        if not chunk: break
        data += chunk
        if b"\n" in data: break
    s.close()
    return json.loads(data.decode().split("\n")[0])

r1 = cmd(4372, {"cmd": "screenshot", "path": "C:/temp/native_fresh.png"})
r2 = cmd(4373, {"cmd": "screenshot", "path": "C:/temp/emu_fresh.png"})
print("Native:", r1)
print("Emulated:", r2)
