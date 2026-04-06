#!/usr/bin/env python3
import socket, json

def query(port, cmd, **kw):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    msg = {'cmd': cmd, 'id': 1}
    msg.update(kw)
    s.sendall((json.dumps(msg) + '\n').encode())
    data = b''
    while b'\n' not in data:
        data += s.recv(4096)
    s.close()
    return json.loads(data.split(b'\n')[0])

r = query(4372, 'sched_state')
print(json.dumps(r, indent=2))

# Also check a few key RAM bytes
r2 = query(4372, 'read_ram', addr='0x0080', **{'len': 16})
print(f"Scheduler table ($80-$8F): {r2.get('hex','?')}")
r3 = query(4372, 'read_ram', addr='0x0031', **{'len': 1})
print(f"Game mode ($31): {r3.get('hex','?')}")
r4 = query(4372, 'ping')
print(f"Frame: {r4.get('frame','?')}")
