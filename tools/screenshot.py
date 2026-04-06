"""Take screenshots from native and/or emulated instances via TCP."""
import socket, json, sys

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

for port, label in [(4372, "NATIVE"), (4373, "EMULATED")]:
    try:
        r = cmd(port, 'screenshot')
        if r.get('ok'):
            print(f"[{label}] Saved: {r['path']}")
        else:
            print(f"[{label}] Error: {r}")
    except Exception as e:
        print(f"[{label}] Not connected: {e}")
