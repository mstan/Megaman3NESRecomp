#!/usr/bin/env python3
"""Pull $31/$46 transitions from native (4372) + oracle (4373) ring buffers."""
import socket, json, sys

def send(port, obj, timeout=30):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(obj) + "\n").encode())
    buf = b""
    while b"\n" not in buf:
        chunk = s.recv(1 << 20)
        if not chunk:
            break
        buf += chunk
    s.close()
    return json.loads(buf.split(b"\n", 1)[0].decode())

def collect(port, start, end):
    """Returns list of dicts: {f, m31, m46, bk, btn, ctrl}"""
    out = []
    f = start
    while f <= end:
        last = min(f + 199, end)
        r = send(port, {"cmd": "frame_timeseries", "start": f, "end": last})
        if not r.get("ok"):
            print(f"  err at {f}: {r}", file=sys.stderr)
            break
        for rec in r["ts"]:
            if rec is None:
                continue
            gd = rec["gd"]
            m31 = int(gd[4:6], 16)
            m46 = int(gd[6:8], 16)
            out.append({
                "f": rec["f"],
                "m31": m31,
                "m46": m46,
                "bk": rec["bk"],
                "btn": rec["btn"],
                "ctrl": rec["ctrl"],
            })
        f = last + 1
    return out

def transitions(records):
    """Emit (frame, m31, m46) when either changes."""
    out = []
    last = (None, None)
    for r in records:
        cur = (r["m31"], r["m46"])
        if cur != last:
            out.append((r["f"], r["m31"], r["m46"], r["btn"]))
            last = cur
    return out

if __name__ == "__main__":
    start = int(sys.argv[1]) if len(sys.argv) > 1 else 0
    end = int(sys.argv[2]) if len(sys.argv) > 2 else 2200
    for label, port in [("NATIVE", 4372), ("ORACLE", 4373)]:
        recs = collect(port, start, end)
        ts = transitions(recs)
        print(f"\n=== {label} (port {port}) — {len(recs)} frames, {len(ts)} transitions ===")
        for f, a, b, btn in ts:
            print(f"  f={f:5d}  $31={a:02X}  $46={b:02X}  btn={btn:02X}")
