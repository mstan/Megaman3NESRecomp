"""Set follower on $80, drive both runners through Snake-Man path, dump writes."""
import socket, json, sys, time

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

def setup(p):
    print(p, "follow $80:", s(p, {"cmd": "follow", "addr": "0080"}))
    print(p, "follow $81:", s(p, {"cmd": "follow", "addr": "0081"}))
    print(p, "follow $0F:", s(p, {"cmd": "follow", "addr": "000F"}))

def dump_history(p, addr):
    r = s(p, {"cmd": "follow_history", "addr": addr, "limit": 200})
    return r

if __name__ == "__main__":
    mode = sys.argv[1] if len(sys.argv) > 1 else "setup"
    if mode == "setup":
        for p in (4372, 4373):
            setup(p)
    elif mode == "dump":
        addr = sys.argv[2] if len(sys.argv) > 2 else "0080"
        for L, p in [("NATIVE", 4372), ("ORACLE", 4373)]:
            r = dump_history(p, addr)
            print(f"\n=== {L} ${addr} ({r.get('total', 0)} writes) ===")
            for e in r.get("entries", []):
                print(f"  f={e['f']:>5}  {e['old']}->{e['new']}  stack={e['stack']}")
