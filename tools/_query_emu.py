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

PORT = 4373  # emulated

# Wait for it to be past the copyright screen (~300 frames)
for i in range(30):
    try:
        r = cmd(PORT, 'ping')
        frame = r.get('frame', 0)
        if frame > 400:
            print(f"Emulated at frame {frame}")
            break
    except:
        pass
    time.sleep(1)

# Query game state
r = cmd(PORT, 'mm3_state')
print(f"\nmm3_state: {json.dumps(r, indent=2)}")

# Check scheduler RAM
r = cmd(PORT, 'read_ram', addr='0x80', len=32)
sched = bytes.fromhex(r['hex'])
print(f"\nScheduler table $80-$9F:")
for ch in range(4):
    base = ch * 4
    print(f"  Ch{ch}: state=${sched[base]:02X} timer=${sched[base+1]:02X} b82=${sched[base+2]:02X} b83=${sched[base+3]:02X}")
print(f"  $90=${sched[16]:02X} $91=${sched[17]:02X} $92=${sched[18]:02X} $93=${sched[19]:02X} $94=${sched[20]:02X}")

# Check key addresses
for addr, name in [('0x31', 'game_mode'), ('0x46', 'sub_mode'), ('0x14', '$14'), ('0xF8', '$F8 screen_mode')]:
    r = cmd(PORT, 'read_ram', addr=addr, len=1)
    print(f"  {name}: ${r['hex']}")

# Sample over a few frames
print(f"\nSampling scheduler over time:")
for i in range(5):
    r = cmd(PORT, 'read_ram', addr='0x80', len=5)
    sched = bytes.fromhex(r['hex'])
    ping = cmd(PORT, 'ping')
    print(f"  Frame {ping['frame']:>5}: ch0 state=${sched[0]:02X} timer=${sched[1]:02X} b82=${sched[2]:02X} b83=${sched[3]:02X} $90=${sched[4]:02X}")
    time.sleep(0.5)
