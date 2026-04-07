import socket, json, sys
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])
for L, p in [("native", 4372), ("oracle", 4373)]:
    print(L, s(p, {"cmd": "screenshot", "path": f"C:/temp/sess21_post_{L}.png"}))
