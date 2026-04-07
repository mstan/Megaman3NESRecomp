import socket, json
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

print("native dispatch_miss_last:", s(4372, {"cmd": "dispatch_miss_last"}))
print()
print("native unique_misses:", s(4372, {"cmd": "dispatch_miss_unique"}))
