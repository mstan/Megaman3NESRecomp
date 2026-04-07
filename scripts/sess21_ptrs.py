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
    print(L)
    for addr, n in [("009C", 4), ("0093", 2), ("00FE", 2), ("0080", 16), ("0100", 64)]:
        r = s(p, {"cmd": "read_ram", "addr": addr, "len": n})
        print(f"  ${addr}({n}):", r.get("hex", r))
    print("  cur SP:", s(p, {"cmd": "get_registers"}))
    print()
