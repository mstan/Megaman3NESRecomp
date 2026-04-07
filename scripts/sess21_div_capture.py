"""Step 2: Capture exact state at the first non-zero frame on each side."""
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
    out = bytearray(length)
    chunk = 256
    off = 0
    while off < length:
        n = min(chunk, length - off)
        r = s(p, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{addr+off:04X}", "len": n})
        if not r.get("ok"): return None
        h = r.get("hex", "")
        for i in range(n):
            out[off + i] = int(h[i*2:i*2+2], 16)
        off += n
    return bytes(out)

def show_nonzero(label, frame, port, addr, length):
    b = fetch(port, frame, addr, length)
    if b is None:
        print(f"  {label} f={frame}: missing")
        return None
    nz = [(addr + i, b[i]) for i in range(length) if b[i] != 0]
    print(f"  {label} f={frame}: {len(nz)} non-zero bytes in ${addr:04X}-${addr+length-1:04X}")
    for a, v in nz[:30]:
        print(f"    ${a:04X}: {v:02X}")
    if len(nz) > 30:
        print(f"    ... +{len(nz)-30} more")
    return b

print("=== ORACLE divergence window ===")
# all-zero frame
show_nonzero("ORACLE $0320 zero", 8, 4373, 0x0320, 0x20)
show_nonzero("ORACLE $0700 zero", 8, 4373, 0x0700, 0x100)
print()
# first non-zero frame
ora_320_9 = show_nonzero("ORACLE $0320 NZ",   9, 4373, 0x0320, 0x20)
ora_700_9 = show_nonzero("ORACLE $0700 NZ",   9, 4373, 0x0700, 0x100)

print("\n=== NATIVE divergence window ===")
show_nonzero("NATIVE $0320 zero", 17, 4372, 0x0320, 0x20)
show_nonzero("NATIVE $0700 zero", 17, 4372, 0x0700, 0x100)
print()
nat_320_18 = show_nonzero("NATIVE $0320 NZ", 18, 4372, 0x0320, 0x20)
nat_700_18 = show_nonzero("NATIVE $0700 NZ", 18, 4372, 0x0700, 0x100)

# Compare oracle frame 9 vs native frame 18 — same logical "first frame"
print("\n=== Compare ORACLE f=9 vs NATIVE f=18 ($0320) ===")
if ora_320_9 and nat_320_18:
    diffs = [(0x320+i, ora_320_9[i], nat_320_18[i]) for i in range(0x20) if ora_320_9[i] != nat_320_18[i]]
    print(f"  {len(diffs)} differing bytes:")
    for a, o, n in diffs:
        print(f"    ${a:04X}: O={o:02X} N={n:02X}")

print("\n=== Compare ORACLE f=9 vs NATIVE f=18 ($0700-$07FF) ===")
if ora_700_9 and nat_700_18:
    diffs = [(0x700+i, ora_700_9[i], nat_700_18[i]) for i in range(0x100) if ora_700_9[i] != nat_700_18[i]]
    print(f"  {len(diffs)} differing bytes (first 30):")
    for a, o, n in diffs[:30]:
        print(f"    ${a:04X}: O={o:02X} N={n:02X}")
    if len(diffs) > 30:
        print(f"    ... +{len(diffs)-30} more")
