import socket, json, time

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

# Read scheduler RAM $80-$8F over a few frames
for i in range(5):
    r = cmd('read_ram', addr='0x80', len=16)
    f = cmd('ping')
    sched_hex = r.get('hex', '')
    sched_bytes = bytes.fromhex(sched_hex)
    print(f"Frame {f['frame']:>5}: $80-$8F = {' '.join(f'{b:02X}' for b in sched_bytes)}")

    # Also check $90-$94 (scheduler globals)
    r2 = cmd('read_ram', addr='0x90', len=5)
    glob_hex = r2.get('hex', '')
    glob_bytes = bytes.fromhex(glob_hex)
    print(f"              $90-$94 = {' '.join(f'{b:02X}' for b in glob_bytes)}")
    time.sleep(0.5)
