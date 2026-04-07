"""Set followers on $C2, $7C, $C8 on native — find writers (or lack thereof)."""
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
for addr in ("00C2", "007C", "00C8", "00C0"):
    print(f"follow {addr}:", s(p, {"cmd": "follow", "addr": addr}))

time.sleep(2)

for addr in ("00C2", "007C", "00C8", "00C0"):
    r = s(p, {"cmd": "follow_history", "addr": addr, "limit": 10})
    print(f"\n=== ${addr} ({r.get('total', 0)} writes) ===")
    for e in r.get("entries", [])[:5]:
        st = "<".join(e["stack"].split("<")[:5])
        print(f"  f={e['f']:>5}  {e['old']}->{e['new']}  {st}")
