"""Find ALL bytes that DIFFER between native and oracle in the cutscene window
   (whether changing or constant)."""
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

def fetch_zp(port, frame):
    out = bytearray(256)
    for off in range(0, 256, 64):
        r = s(port, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{off:04X}", "len": 64})
        if not r.get("ok"): return None
        h = r.get("hex", "")
        for i in range(64):
            out[off + i] = int(h[i*2:i*2+2], 16)
    return bytes(out)

# Need frames in BOTH ring buffers. Native ring oldest=5588, oracle covers all.
# Use frames in overlap range. The cutscene happens at ~2150, which is gone from native.
# Use later frames where both have data and where cutscene logic might still differ.
frames = [20000, 21000, 22000, 25000, 28000, 30000, 32000]

native = {f: fetch_zp(4372, f) for f in frames}
oracle = {f: fetch_zp(4373, f) for f in frames}

# Categories of difference
constant_diff = []  # same value in N at all frames, same value in O at all frames, but N != O
changing_diff = []  # differs and at least one side changes

for addr in range(256):
    n_vals = [native[f][addr] for f in frames]
    o_vals = [oracle[f][addr] for f in frames]
    differs = any(n != o for n, o in zip(n_vals, o_vals))
    if not differs: continue
    n_const = all(v == n_vals[0] for v in n_vals)
    o_const = all(v == o_vals[0] for v in o_vals)
    if n_const and o_const:
        constant_diff.append((addr, n_vals[0], o_vals[0]))
    else:
        changing_diff.append((addr, n_vals, o_vals))

print(f"=== CONSTANT diffs: {len(constant_diff)} bytes (steady-state difference) ===")
for addr, n, o in constant_diff:
    print(f"  ${addr:02X}: N={n:02X}  O={o:02X}")

print(f"\n=== CHANGING diffs: {len(changing_diff)} bytes ===")
for addr, n_vals, o_vals in changing_diff[:30]:
    n_str = " ".join(f"{v:02X}" for v in n_vals)
    o_str = " ".join(f"{v:02X}" for v in o_vals)
    print(f"  ${addr:02X}: N {n_str}")
    print(f"        O {o_str}")
