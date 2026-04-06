#!/usr/bin/env python3
import socket, json, time

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

# Press START for 10 frames
print("Setting START button...")
query(4372, 'set_input', buttons='0x10')
time.sleep(0.5)
query(4372, 'clear_input')
time.sleep(1)

# Check state
r = query(4372, 'mm3_state')
print(f"game_mode={r.get('game_mode')}, sub_mode={r.get('sub_mode')}, frame={r.get('frame')}")

# Try again — press START, wait longer
print("Pressing START again...")
query(4372, 'set_input', buttons='0x10')
time.sleep(1)
query(4372, 'clear_input')
time.sleep(2)

r = query(4372, 'mm3_state')
print(f"game_mode={r.get('game_mode')}, sub_mode={r.get('sub_mode')}, frame={r.get('frame')}")
