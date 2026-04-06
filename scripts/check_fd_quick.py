import socket, json, time

def tcp_cmd(port, cmd):
    s = socket.socket()
    s.settimeout(3)
    s.connect(('127.0.0.1', port))
    s.sendall((json.dumps(cmd) + '\n').encode())
    buf = b''
    while True:
        data = s.recv(8192)
        if not data:
            break
        buf += data
        if b'\n' in buf:
            break
    s.close()
    return json.loads(buf.split(b'\n')[0].decode())

time.sleep(12)
st = tcp_cmd(4372, {'cmd': 'mm3_state'})
print(f"Frame={st.get('frame')} mode={st.get('game_mode')}")

# Set follower on $FD
tcp_cmd(4372, {'cmd': 'follow', 'addr': 'FD'})
time.sleep(2)

# Check $FD value
ram = tcp_cmd(4372, {'cmd': 'read_ram', 'addr': '00FD', 'len': 1})
print(f"$FD = {ram.get('hex','?')}")

# Get follower count
fh = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': 'FD'})
print(f"$FD writes: {fh.get('total', '?')}")
entries = fh.get('entries', [])
if entries:
    print(f"Last write: {json.dumps(entries[0])}")
