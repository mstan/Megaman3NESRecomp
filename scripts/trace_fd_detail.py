"""Detailed trace of RAM $FD writes on native build."""
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

# Clear any existing followers, set up fresh
print("Setting up follower on $FD...")
try:
    tcp_cmd(4372, {'cmd': 'unfollow', 'addr': 'FD'})
except:
    pass

r = tcp_cmd(4372, {'cmd': 'follow', 'addr': 'FD'})
print(f"Follow response: {json.dumps(r, indent=2)}")

# Wait for writes
print("Waiting 2 seconds...")
time.sleep(2)

# Get the raw history response
r = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': 'FD'})
print(f"\nRaw follow_history response:")
print(json.dumps(r, indent=2))
