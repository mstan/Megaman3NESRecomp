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
# Clear stale followers
for addr in ("00C1", "00C4", "00D4", "00D0"):
    s(p, {"cmd": "unfollow", "addr": addr})

print("follow $F4:", s(p, {"cmd": "follow", "addr": "00F4"}))
print("follow $F5:", s(p, {"cmd": "follow", "addr": "00F5"}))

time.sleep(2)

for addr in ("00F4", "00F5"):
    r = s(p, {"cmd": "follow_history", "addr": addr, "limit": 30})
    print(f"\n=== ${addr} ({r.get('total', 0)} writes total) — last 30 ===")
    for e in r.get("entries", [])[:30]:
        st = "<".join(e["stack"].split("<")[:4])
        print(f"  f={e['f']:>5}  {e['old']}->{e['new']}  {st}")

# Show unique values written to F4
print("\n=== Unique $F4 values ever written ===")
r = s(p, {"cmd": "follow_history", "addr": "00F4", "limit": 1000})
vals = set()
for e in r.get("entries", []):
    vals.add(e["new"])
print(f"  {sorted(vals)}")
