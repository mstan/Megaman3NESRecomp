#!/usr/bin/env python3
import socket, json, time

def query(port, cmd, **kwargs):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    msg = {'cmd': cmd, 'id': 1}
    msg.update(kwargs)
    s.sendall((json.dumps(msg) + '\n').encode())
    data = b''
    while b'\n' not in data:
        data += s.recv(4096)
    r = json.loads(data.split(b'\n')[0])
    s.close()
    return r

# Pause native
query(4372, 'pause')
time.sleep(0.5)

h = query(4372, 'history')
print('History:', json.dumps(h))

# Try several frames
for f in [0, 1, 10, 100, h.get('newest', 0), h.get('newest', 0) - 1]:
    r = query(4372, 'get_frame', frame=f)
    ok = r.get('ok')
    err = r.get('error', '')
    fn = r.get('frame', '?')
    print(f'  get_frame({f}): ok={ok} err={err} frame_number={fn}')

# Try read_frame_ram
rfr = query(4372, 'read_frame_ram', frame=100, addr='0x0000', **{'len': 16})
print(f'read_frame_ram(100, $0000): ok={rfr.get("ok")} err={rfr.get("error","")} hex={rfr.get("hex","")}')

query(4372, 'continue')
