#!/usr/bin/env python3
"""Single-query TCP client. Usage: q.py <port> <json_cmd>"""
import socket, json, sys, time
port = int(sys.argv[1])
cmd = ' '.join(sys.argv[2:])
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.settimeout(3)
s.connect(('127.0.0.1', port))
s.sendall(cmd.encode() + b'\n')
time.sleep(0.15)
data = b''
while True:
    try:
        chunk = s.recv(8192)
        if not chunk: break
        data += chunk
        if b'\n' in data: break
    except: break
s.close()
line = data.split(b'\n')[0]
r = json.loads(line)
# Pretty print based on command type
if 'data' in r:
    bs = bytes.fromhex(r['data'])
    print(' '.join(f'{b:02X}' for b in bs))
elif 'game_mode' in r:
    for k, v in r.items():
        if k != 'id': print(f'{k}={v}', end=' ')
    print()
else:
    print(json.dumps(r, indent=2))
