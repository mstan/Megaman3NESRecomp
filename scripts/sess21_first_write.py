"""Find the first frame on oracle where $0320-$033F or $0700-$07FF
   contains any non-zero byte. Then check the same on native."""
import socket, json, sys

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

def is_nonzero(b):
    return b is not None and any(x != 0 for x in b)

def first_nonzero(port, label):
    print(f"\n=== Scanning {label} (port {port}) ===")
    # Bisect to find first non-zero
    # Sample every 50 frames first for speed
    last_zero = -1
    first_nz = None
    for f in range(0, 2200, 25):
        a = fetch(port, f, 0x0320, 0x20)
        b = fetch(port, f, 0x0700, 0x100)
        nz_a = is_nonzero(a)
        nz_b = is_nonzero(b)
        nz = nz_a or nz_b
        marker = ""
        if nz:
            parts = []
            if nz_a: parts.append("$0320")
            if nz_b: parts.append("$0700")
            marker = " <-- " + ",".join(parts) + " NONZERO"
        if nz and first_nz is None:
            first_nz = f
            print(f"  f={f:5d} {marker}")
            break
        if not nz:
            last_zero = f
        if f % 200 == 0:
            print(f"  f={f:5d}  zero")
    if first_nz is None:
        print(f"  No non-zero found in scan up to 2200")
        return None
    # Now narrow between last_zero and first_nz
    lo = last_zero
    hi = first_nz
    while lo + 1 < hi:
        mid = (lo + hi) // 2
        a = fetch(port, mid, 0x0320, 0x20)
        b = fetch(port, mid, 0x0700, 0x100)
        if is_nonzero(a) or is_nonzero(b):
            hi = mid
        else:
            lo = mid
    print(f"  FIRST non-zero frame: {hi}  (last all-zero: {lo})")
    return hi, lo

oracle_first = first_nonzero(4373, "ORACLE")
native_first = first_nonzero(4372, "NATIVE")

print(f"\n=== Summary ===")
print(f"  Oracle first non-zero in $0320/$0700+ : {oracle_first}")
print(f"  Native first non-zero in $0320/$0700+ : {native_first}")
