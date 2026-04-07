"""Sample $80-$8F over time on both runners using game_data and read_frame_ram."""
import socket, json, sys

def send(p, o, t=30):
    s = socket.socket(); s.settimeout(t); s.connect(("127.0.0.1", p))
    s.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        c = s.recv(1 << 20)
        if not c: break
        b += c
    s.close()
    return json.loads(b.split(b"\n", 1)[0])

def read_frame(p, frame, addr, length=16):
    return send(p, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{addr:04X}", "len": length})

if __name__ == "__main__":
    start = int(sys.argv[1]) if len(sys.argv) > 1 else 100
    stop = int(sys.argv[2]) if len(sys.argv) > 2 else 200
    step = int(sys.argv[3]) if len(sys.argv) > 3 else 5
    print(f"frame   NATIVE $80..$8F                  ORACLE $80..$8F")
    for f in range(start, stop, step):
        nat = read_frame(4372, f, 0x80)
        ora = read_frame(4373, f, 0x80)
        nh = nat.get("hex", "??")
        oh = ora.get("hex", "??")
        print(f"{f:5d}  {nh}  {oh}")
