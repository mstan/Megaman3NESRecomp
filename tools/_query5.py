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

# Pause the game to get a consistent snapshot
cmd('pause')
time.sleep(0.2)

# Read the full scheduler table
r = cmd('read_ram', addr='0x80', len=32)
sched = bytes.fromhex(r['hex'])
print("Scheduler table $80-$9F:")
for ch in range(4):
    base = ch * 4
    print(f"  Ch{ch}: state=${sched[base]:02X} timer=${sched[base+1]:02X} b82=${sched[base+2]:02X} b83=${sched[base+3]:02X}")
print(f"  $90=${sched[16]:02X} $91=${sched[17]:02X} $92=${sched[18]:02X} $93=${sched[19]:02X} $94=${sched[20]:02X}")

# Step one frame and check again
cmd('step')
time.sleep(0.2)
r = cmd('read_ram', addr='0x80', len=32)
sched = bytes.fromhex(r['hex'])
print("\nAfter 1 step:")
for ch in range(4):
    base = ch * 4
    print(f"  Ch{ch}: state=${sched[base]:02X} timer=${sched[base+1]:02X} b82=${sched[base+2]:02X} b83=${sched[base+3]:02X}")
print(f"  $90=${sched[16]:02X} $91=${sched[17]:02X} $92=${sched[18]:02X} $93=${sched[19]:02X} $94=${sched[20]:02X}")

# Step again
cmd('step')
time.sleep(0.2)
r = cmd('read_ram', addr='0x80', len=32)
sched = bytes.fromhex(r['hex'])
print("\nAfter 2 steps:")
for ch in range(4):
    base = ch * 4
    print(f"  Ch{ch}: state=${sched[base]:02X} timer=${sched[base+1]:02X} b82=${sched[base+2]:02X} b83=${sched[base+3]:02X}")
print(f"  $90=${sched[16]:02X} $91=${sched[17]:02X} $92=${sched[18]:02X} $93=${sched[19]:02X} $94=${sched[20]:02X}")

cmd('continue')
