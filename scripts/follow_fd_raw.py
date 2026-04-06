"""Get raw follower history for $FD to understand response format."""
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

# Query follow history (follower should still be active from previous run)
r = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': 'FD'})
print("Raw follow_history response:")
# Pretty print but truncate long values
resp_str = json.dumps(r, indent=2)
if len(resp_str) > 5000:
    print(resp_str[:5000] + "\n... (truncated)")
else:
    print(resp_str)
