import socket, json
def s(p, o):
    sk = socket.socket()
    sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

for L, p in [("NATIVE", 4372), ("ORACLE", 4373)]:
    print("==", L, "==")
    print("ping:", s(p, {"cmd": "ping"}))
    print("screenshot:", s(p, {"cmd": "screenshot", "path": f"C:/temp/sess21_{L}.png"}))
    print("mapper:", s(p, {"cmd": "mapper_state"}))
    r = s(p, {"cmd": "read_ram", "addr": "0000", "len": 256})
    h = r.get("hex", "")
    # print zero page in 16-byte rows
    for row in range(0, 256, 16):
        print(f"  {row:02X}: {h[row*2:(row+16)*2]}")
    print()
