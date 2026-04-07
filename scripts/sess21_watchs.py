"""Watch g_cpu.S over a small frame window on native; analyze pushes vs pops."""
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

p = 4372
cur = s(p, {"cmd": "ping"})["frame"]
lo = cur + 30
hi = cur + 35
print("current frame:", cur, "watching frames", lo, "..", hi)
print(s(p, {"cmd": "watch_s", "frame_lo": lo, "frame_hi": hi}))
# Wait for those frames to elapse
time.sleep(5)
print("now ping:", s(p, {"cmd": "ping"}))

r = s(p, {"cmd": "watch_s_history", "limit": 5000})
total = r.get("total", 0)
ents = r.get("entries", [])
print(f"\ntotal entries: {total}, returned: {len(ents)}")

# Group entries by frame
by_frame = {}
for e in ents:
    by_frame.setdefault(e["f"], []).append(e)

for f in sorted(by_frame.keys()):
    es = by_frame[f]
    if len(es) == 0: continue
    first_old = int(es[0]["old"], 16)
    last_new = int(es[-1]["new"], 16)
    delta = (last_new - first_old) & 0xFF
    if delta >= 0x80:
        delta = delta - 0x100  # signed
    print(f"\nframe {f}: {len(es)} S changes, start={first_old:02X} end={last_new:02X} delta={delta:+d}")
    # show first 10 and last 10
    show = es[:10] + ([{"...": "..."}] if len(es) > 20 else []) + (es[-10:] if len(es) > 10 else [])
    for e in show:
        if "..." in e:
            print("  ...")
            continue
        print(f"  {e['old']} -> {e['new']}  {e['stack'][:120]}")

print(s(p, {"cmd": "unwatch_s"}))
