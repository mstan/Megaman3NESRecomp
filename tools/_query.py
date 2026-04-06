import socket, json, sys

def cmd(c, **kw):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', 4372))
    msg = json.dumps({'cmd': c, 'id': 1, **kw})
    s.sendall((msg + '\n').encode())
    d = b''
    while b'\n' not in d:
        d += s.recv(4096)
    s.close()
    return json.loads(d.decode().strip())

print("=== mm3_state ===")
print(json.dumps(cmd('mm3_state'), indent=2))
print("\n=== sched_state ===")
print(json.dumps(cmd('sched_state'), indent=2))
print("\n=== Key RAM ===")
r = cmd('read_ram', addr='0x31', len=1)
print(f"$31 game_mode: {r}")
r = cmd('read_ram', addr='0x46', len=1)
print(f"$46 sub_mode: {r}")
r = cmd('read_ram', addr='0x14', len=1)
print(f"$14: {r}")
r = cmd('read_ram', addr='0x16', len=1)
print(f"$16: {r}")
