"""Set follower on $F4, capture EVERY unique value seen, with caller info."""
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
print("follow $F4:", s(p, {"cmd": "follow", "addr": "00F4"}))
time.sleep(2)
r = s(p, {"cmd": "follow_history", "addr": "00F4", "limit": 8000})
print(f"\ntotal $F4 writes: {r.get('total', 0)}")
ents = r.get("entries", [])
unique = {}
for e in ents:
    v = e["new"]
    if v not in unique:
        unique[v] = e

print(f"\nUnique values written ({len(unique)}):")
for v in sorted(unique.keys()):
    e = unique[v]
    st = "<".join(e["stack"].split("<")[:5])
    print(f"  {v} (first seen at f={e['f']}): {st}")
