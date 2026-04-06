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

# Add follower on $81 (ch0 timer)
r = cmd('follow', addr='0x81')
print(f"follow $81: {r}")

# Add follower on $80 (ch0 state)
r = cmd('follow', addr='0x80')
print(f"follow $80: {r}")

# Wait a bit for writes to accumulate
time.sleep(2)

# Dump follower history for $81
r = cmd('follow_history', addr='0x81', limit=30)
entries = r.get('entries', [])
print(f"\n$81 (ch0 timer) writes: {r.get('total', 0)} total, showing last {len(entries)}")
for e in entries:
    print(f"  F{e['f']:>5}: {e['old']} -> {e['new']}  stack: {e.get('stack','')[:80]}")

# Dump follower history for $80
r = cmd('follow_history', addr='0x80', limit=30)
entries = r.get('entries', [])
print(f"\n$80 (ch0 state) writes: {r.get('total', 0)} total, showing last {len(entries)}")
for e in entries:
    print(f"  F{e['f']:>5}: {e['old']} -> {e['new']}  stack: {e.get('stack','')[:80]}")
