#!/usr/bin/env python3
import socket, json, sys

def query(port, cmd):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    s.sendall((json.dumps({'cmd': cmd, 'id': 1}) + '\n').encode())
    data = b''
    while b'\n' not in data:
        data += s.recv(4096)
    r = json.loads(data.split(b'\n')[0])
    s.close()
    return r

print("Native mm3_state:", json.dumps(query(4372, 'mm3_state'), indent=2))
print("Native ppu_state:", json.dumps(query(4372, 'ppu_state'), indent=2))
print("Emu ppu_state:", json.dumps(query(4373, 'ppu_state'), indent=2))
print("Native mapper:", json.dumps(query(4372, 'mapper_state'), indent=2))
print("Emu mapper:", json.dumps(query(4373, 'mapper_state'), indent=2))
