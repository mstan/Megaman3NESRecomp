#!/usr/bin/env python3
import socket, json
def send(p, o):
    s = socket.socket()
    s.connect(("127.0.0.1", p))
    s.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += s.recv(1 << 16)
    s.close()
    return json.loads(b.split(b"\n", 1)[0])

for label, p in [("NATIVE", 4372), ("ORACLE", 4373)]:
    print(label, "ping:", send(p, {"cmd": "ping"}))
    print(label, "mm3_state:", send(p, {"cmd": "mm3_state"}))
    print(label, "ram 31:", send(p, {"cmd": "read_ram", "addr": "0031", "len": 1}))
    print(label, "ram 46:", send(p, {"cmd": "read_ram", "addr": "0046", "len": 1}))
    print(label, "ram 14..1B:", send(p, {"cmd": "read_ram", "addr": "0014", "len": 8}))
    print(label, "ram 80..8F:", send(p, {"cmd": "read_ram", "addr": "0080", "len": 16}))
    print()
