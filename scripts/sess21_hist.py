import socket, json
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

print("native history:", s(4372, {"cmd": "history"}))
print("native ping:", s(4372, {"cmd": "ping"}))
print("oracle history:", s(4373, {"cmd": "history"}))
print("oracle ping:", s(4373, {"cmd": "ping"}))
