"""Sample mapper state across the A-press window on both sides."""
import socket, json
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

# Sample game_data 'bk' (current 16K bank) across many frames
# frame_timeseries returns 'bk' per frame
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

native_bk = hist(4372, 0, 3000)
oracle_bk = hist(4373, 0, 3000)

print(f"Native bank values seen (first 3000 frames): {sorted(set(native_bk))}")
print(f"Oracle bank values seen (first 3000 frames): {sorted(set(oracle_bk))}")

# Count frequency
from collections import Counter
print(f"\nNative bank frequency:")
for bk, cnt in sorted(Counter(native_bk).items()):
    print(f"  bank {bk:2d}: {cnt}")
print(f"\nOracle bank frequency:")
for bk, cnt in sorted(Counter(oracle_bk).items()):
    print(f"  bank {bk:2d}: {cnt}")
