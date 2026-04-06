import socket, json, time

def cmd(port, c, **kw):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    msg = json.dumps({'cmd': c, 'id': 1, **kw})
    s.sendall((msg + '\n').encode())
    d = b''
    while b'\n' not in d:
        d += s.recv(4096)
    s.close()
    return json.loads(d.decode().strip())

# Follow $80, $81, $82 to see the full scheduler cycle
cmd(4372, 'follow', addr='0x80')
cmd(4372, 'follow', addr='0x81')
cmd(4372, 'follow', addr='0x82')
cmd(4372, 'follow', addr='0x90')
time.sleep(3)

for addr, name in [('0x80', 'state'), ('0x81', 'timer'), ('0x82', 'b82'), ('0x90', '$90')]:
    r = cmd(4372, 'follow_history', addr=addr, limit=20)
    entries = r.get('entries', [])
    print(f"\n{name} ({addr}) writes: {r.get('total', 0)} total")
    for e in entries:
        print(f"  F{e['f']:>5}: {e['old']} -> {e['new']}  stack: {e.get('stack','')[:60]}")
