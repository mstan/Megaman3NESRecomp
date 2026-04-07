import socket, json
from collections import Counter

def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

def hist(p, start, end):
    out = []
    f = start
    while f <= end:
        last = min(f + 199, end)
        r = s(p, {"cmd": "frame_timeseries", "start": f, "end": last})
        if not r.get("ok"): break
        for rec in r["ts"]:
            if rec is None: continue
            out.append(rec["bk"])
        f = last + 1
    return out

# Native window: 5588-41587 (full available)
# Oracle window: 0-19993
# Sample a representative slice

# Check oracle's full range (covers cutscene window 2000-3000 + stage gameplay)
print("Oracle bank distribution (frames 0-19993):")
o = hist(4373, 0, 19993)
c = Counter(o)
for bk, cnt in sorted(c.items()):
    print(f"  bank {bk:2d}: {cnt:6d}  ({cnt*100//len(o):3d}%)")
print(f"  total: {len(o)}")

print("\nNative bank distribution (frames 5588-19993):")
n = hist(4372, 5588, 19993)
c2 = Counter(n)
for bk, cnt in sorted(c2.items()):
    print(f"  bank {bk:2d}: {cnt:6d}  ({cnt*100//len(n):3d}%)")
print(f"  total: {len(n)}")

# In oracle's cutscene window only
print("\nOracle bank distribution (frames 2000-3000 = cutscene window):")
oc = hist(4373, 2000, 3000)
c3 = Counter(oc)
for bk, cnt in sorted(c3.items()):
    print(f"  bank {bk:2d}: {cnt:6d}  ({cnt*100//len(oc):3d}%)")
