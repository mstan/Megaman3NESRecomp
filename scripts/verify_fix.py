"""Verify the nested VBlank fix: check $FD and follower after fresh launch."""
import socket, json, time

def tcp_cmd(port, cmd):
    s = socket.socket()
    s.settimeout(3)
    s.connect(('127.0.0.1', port))
    s.sendall((json.dumps(cmd) + '\n').encode())
    buf = b''
    while True:
        data = s.recv(16384)
        if not data:
            break
        buf += data
        if b'\n' in buf:
            break
    s.close()
    return json.loads(buf.split(b'\n')[0].decode())

print("Waiting 12s for stage...")
time.sleep(12)

st = tcp_cmd(4372, {'cmd': 'mm3_state'})
print(f"Game: frame={st.get('frame')} mode={st.get('game_mode')}")

# Check $FD now
ram = tcp_cmd(4372, {'cmd': 'read_ram', 'addr': '00FD', 'len': 1})
print(f"$FD = {ram.get('hex', '?')}")

# Set follower on $FD
tcp_cmd(4372, {'cmd': 'follow', 'addr': 'FD'})
print("Follower set on $FD, waiting 3s...")
time.sleep(3)

# Check follower
fh = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': 'FD'})
total = fh.get('total', 0)
print(f"$FD writes in 3s: {total}")

entries = fh.get('entries', [])
if entries:
    # Show first few
    for e in entries[:5]:
        print(f"  f={e.get('f','?')} {e.get('old','?')}->{e.get('new','?')} stack={e.get('stack','?')[:80]}")

# Check $FD again
ram2 = tcp_cmd(4372, {'cmd': 'read_ram', 'addr': '00FD', 'len': 1})
print(f"$FD now = {ram2.get('hex', '?')}")

# PPUCTRL check
ppu = tcp_cmd(4372, {'cmd': 'ppu_state'})
print(f"PPUCTRL = {ppu.get('ppuctrl', '?')}")
