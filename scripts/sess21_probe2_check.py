import socket, json
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

p = 4372
print("ping:", s(p, {"cmd": "ping"}))
for label, addr, n in [
    ("$0700-$073F", "0700", 64),
    ("$0740-$077F", "0740", 64),
    ("$00C0-$00CF", "00C0", 16),
    ("$00D0-$00DF", "00D0", 16),
    ("$F4-$F5", "00F4", 2),
]:
    r = s(p, {"cmd": "read_ram", "addr": addr, "len": n})
    h = r.get("hex", "??")
    nz = sum(1 for i in range(len(h)//2) if h[i*2:i*2+2] != "00")
    print(f"{label} ({nz}/{n} non-zero): {h}")
