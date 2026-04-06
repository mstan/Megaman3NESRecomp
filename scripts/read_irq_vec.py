import socket, json

def q(cmd):
    s = socket.socket()
    s.settimeout(3)
    s.connect(('127.0.0.1', 4372))
    s.sendall((json.dumps(cmd) + '\n').encode())
    buf = b''
    while True:
        d = s.recv(8192)
        if not d:
            break
        buf += d
        if b'\n' in buf:
            break
    s.close()
    return json.loads(buf.split(b'\n')[0].decode())

r = q({'cmd': 'read_ram', 'addr': '009A', 'len': 6})
h = r.get('hex', '')
print(f"RAM $9A-$9F: {h}")
r9c = int(h[4:6], 16)
r9d = int(h[6:8], 16)
target = r9c | (r9d << 8)
print(f"$9B={h[2:4]} $9C={h[4:6]} $9D={h[6:8]}")
print(f"IRQ dispatch target: ${target:04X}")
