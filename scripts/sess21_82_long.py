"""Sample $82 (channel-0 saved SP) at wide intervals to see long-term trend."""
import socket, json, sys

def s(p, o, t=30):
    sk = socket.socket(); sk.settimeout(t); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        c = sk.recv(1 << 20)
        if not c: break
        b += c
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

p = 4372
cur = s(p, {"cmd": "ping"})["frame"]
print(f"current: {cur}")

points = list(range(0, cur, 5000))
print(f"{'frame':>6}  {'$80':>5} {'$81':>5} {'$82':>5} {'$83':>5}   ORACLE same row")
for f in points:
    nat = s(p, {"cmd": "read_frame_ram", "frame": f, "addr": "0080", "len": 4})
    ora = s(4373, {"cmd": "read_frame_ram", "frame": f, "addr": "0080", "len": 4})
    nh = nat.get("hex", "????????")
    oh = ora.get("hex", "????????")
    print(f"{f:>6}  {nh[0:2]:>5} {nh[2:4]:>5} {nh[4:6]:>5} {nh[6:8]:>5}   {oh}")
