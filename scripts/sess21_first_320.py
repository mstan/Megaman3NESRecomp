"""Find the first frame where $0320-$033F has ANY non-zero byte on each side."""
import socket, json
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

def fetch(p, frame, addr, length):
    r = s(p, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{addr:04X}", "len": length})
    if not r.get("ok"): return None
    h = r.get("hex", "")
    return bytes(int(h[i*2:i*2+2], 16) for i in range(length))

def is_nz(b): return b is not None and any(x != 0 for x in b)

def scan(port, label, ranges):
    """ranges = list of (addr, length, label) — find first frame where ANY range has non-zero"""
    print(f"\n=== {label} ===")
    for addr, length, rlabel in ranges:
        # coarse scan
        first_nz = None
        last_zero = -1
        for f in range(0, 2400, 50):
            b = fetch(port, f, addr, length)
            if is_nz(b):
                first_nz = f
                break
            last_zero = f
        if first_nz is None:
            print(f"  {rlabel}: never non-zero in 0..2400")
            continue
        # bisect
        lo, hi = last_zero, first_nz
        while lo + 1 < hi:
            mid = (lo + hi) // 2
            b = fetch(port, mid, addr, length)
            if is_nz(b): hi = mid
            else: lo = mid
        print(f"  {rlabel}: first non-zero at frame {hi}")

ranges = [
    (0x0300, 0x20, "$0300-$031F"),
    (0x0320, 0x20, "$0320-$033F  <-- target"),
    (0x0340, 0x40, "$0340-$037F"),
    (0x0380, 0x40, "$0380-$03BF"),
    (0x03C0, 0x40, "$03C0-$03FF"),
    (0x0700, 0x40, "$0700-$073F"),
    (0x0740, 0x40, "$0740-$077F"),
    (0x0780, 0x40, "$0780-$07BF"),
    (0x07C0, 0x40, "$07C0-$07FF"),
]

scan(4373, "ORACLE", ranges)
scan(4372, "NATIVE", ranges)
