"""Find frame where btn=0x80 (A) appeared, and dump zero page evolution around it."""
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

def find_btn(port, btn_val, start=0, end=10000):
    """Walk through frame_timeseries finding first frame where btn==btn_val."""
    f = start
    while f <= end:
        last = min(f + 199, end)
        r = send(port, {"cmd": "frame_timeseries", "start": f, "end": last})
        if not r.get("ok"): return None
        for rec in r["ts"]:
            if rec is None: continue
            if rec["btn"] == btn_val:
                return rec["f"]
        f = last + 1
    return None

def dump_around(port, label, center, span=300, step=20):
    print(f"\n== {label} centered at frame {center} ==")
    print("frame  bk  ctrl  btn  $14 $16 $31 $46 $F4 $F5 $22 $A0 ...mapper(mr0..7)")
    f = max(0, center - span)
    end = center + span
    while f <= end:
        last = min(f + 199, end)
        r = send(port, {"cmd": "frame_timeseries", "start": f, "end": last})
        if not r.get("ok"): break
        for rec in r["ts"]:
            if rec is None: continue
            if (rec["f"] - max(0, center - span)) % step != 0: continue
            gd = rec["gd"]
            print(f"{rec['f']:5d}  {rec['bk']:2d}  {rec['ctrl']:3d}  {rec['btn']:02x}   "
                  f"{gd[0:2]} {gd[2:4]} {gd[4:6]} {gd[6:8]} {gd[8:10]} {gd[10:12]} {gd[12:14]} {gd[14:16]}")
        f = last + 1

if __name__ == "__main__":
    for L, p in [("NATIVE", 4372), ("ORACLE", 4373)]:
        end = send(p, {"cmd": "ping"})["frame"] - 5
        a_frame = find_btn(p, 0x80, 0, end)
        print(f"{L}: btn=0x80 first at frame {a_frame}")
        if a_frame is not None:
            dump_around(p, L, a_frame, span=600, step=10)
