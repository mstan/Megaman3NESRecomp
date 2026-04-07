import socket, json
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

for f in [2140, 2148, 2150, 2160, 2170, 2200, 2300]:
    r30 = s(4372, {"cmd": "read_frame_ram", "frame": f, "addr": "0030", "len": 1})
    r500 = s(4372, {"cmd": "read_frame_ram", "frame": f, "addr": "0500", "len": 1})
    print(f"frame {f:4d}:  $30={r30.get('hex','??')}  $0500={r500.get('hex','??')}")
print()
print("dispatch_miss_last:", s(4372, {"cmd": "dispatch_miss_last"}))
