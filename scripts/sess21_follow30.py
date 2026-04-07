"""Set follower on $30 + $0500 on native, get write history."""
import socket, json, time
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

p = 4372
print("setup follow $30:", s(p, {"cmd": "follow", "addr": "0030"}))
print("setup follow $0500:", s(p, {"cmd": "follow", "addr": "0500"}))

# Wait for some writes
time.sleep(2)

for addr in ("0030", "0500"):
    r = s(p, {"cmd": "follow_history", "addr": addr, "limit": 30})
    print(f"\n=== ${addr} ({r.get('total', 0)} writes) ===")
    for e in r.get("entries", [])[:30]:
        # Truncate stack to first 6 functions
        st = "<".join(e["stack"].split("<")[:6])
        print(f"  f={e['f']:>5}  {e['old']}->{e['new']}  {st}")
