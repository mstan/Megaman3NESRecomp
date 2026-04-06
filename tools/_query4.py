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

# $92 is incremented at $C0E7 in the NMI — if it's stuck, NMI bails before that
# $90 is set to $FF at $C0EB right after
# $EE/$9A control the early branch at $C019 (if either non-zero, jumps to $C088)
for i in range(3):
    r92 = cmd('read_ram', addr='0x92', len=1)
    r90 = cmd('read_ram', addr='0x90', len=1)
    ree = cmd('read_ram', addr='0xEE', len=1)
    r9a = cmd('read_ram', addr='0x9A', len=1)
    r19 = cmd('read_ram', addr='0x19', len=1)
    r1a = cmd('read_ram', addr='0x1A', len=1)
    r18 = cmd('read_ram', addr='0x18', len=1)
    ping = cmd('ping')
    print(f"Frame {ping['frame']:>5}: $92={r92['hex']} $90={r90['hex']} $EE={ree['hex']} $9A={r9a['hex']} $19={r19['hex']} $1A={r1a['hex']} $18={r18['hex']}")
    time.sleep(0.3)

# Also check the call stack
r = cmd('call_stack')
print(f"\ncall_stack: depth={r.get('depth',0)}")
for fn in r.get('stack', []):
    print(f"  {fn}")

# Check S register
r = cmd('get_registers')
print(f"\nS={r.get('S','?')} A={r.get('A','?')} X={r.get('X','?')} Y={r.get('Y','?')}")
