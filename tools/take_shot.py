#!/usr/bin/env python3
import socket, json, sys
port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
path = sys.argv[2] if len(sys.argv) > 2 else "C:/temp/fixed_native.png"
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.settimeout(5)
s.connect(("127.0.0.1", port))
s.sendall((json.dumps({"cmd": "screenshot", "path": path}) + "\n").encode())
data = b""
while True:
    chunk = s.recv(4096)
    if not chunk: break
    data += chunk
    if b"\n" in data: break
s.close()
print(data.decode().strip())
