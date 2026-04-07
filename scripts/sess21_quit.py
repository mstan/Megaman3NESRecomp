import socket, json
def send(p, o):
    s = socket.socket()
    try:
        s.connect(("127.0.0.1", p))
        s.sendall((json.dumps(o) + "\n").encode())
        b = b""
        while b"\n" not in b:
            b += s.recv(1 << 16)
        return json.loads(b.split(b"\n", 1)[0])
    except Exception as e:
        return {"err": str(e)}
    finally:
        s.close()
for p in (4372, 4373):
    print(p, send(p, {"cmd": "quit"}))
