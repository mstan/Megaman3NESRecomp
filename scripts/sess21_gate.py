"""Find the cutscene-gating byte: bytes that differ between native/oracle
   AND change values across the A-press window."""
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
        if not r.get("ok"):
            return None
        h = r.get("hex", "")
        for i in range(64):
            out[off + i] = int(h[i*2:i*2+2], 16)
    return bytes(out)

# Frames around A-press (2150)
frames = [2140, 2145, 2148, 2150, 2152, 2155, 2158, 2160, 2165, 2170, 2180, 2200, 2250, 2300]

# Fetch each side
native = {}
oracle = {}
for f in frames:
    n = fetch_zp(4372, f)
    o = fetch_zp(4373, f)
    if n is None or o is None:
        print(f"frame {f}: missing")
        continue
    native[f] = n
    oracle[f] = o

# For each address, compute:
#  - is it different between N and O at any frame?
#  - does it CHANGE between frames (on either side)?
print(f"{'addr':>5} | " + " | ".join(f"N={f:4d}" for f in frames) + " ||")
print(" " * 6 + "  " + " | ".join(f"O={f:4d}" for f in frames))
print("-" * 200)

interesting = []
for addr in range(256):
    n_vals = [native[f][addr] for f in frames]
    o_vals = [oracle[f][addr] for f in frames]
    # Differs at any frame?
    differs = any(n != o for n, o in zip(n_vals, o_vals))
    # Changes within either timeline?
    n_changes = any(n_vals[i] != n_vals[i+1] for i in range(len(n_vals)-1))
    o_changes = any(o_vals[i] != o_vals[i+1] for i in range(len(o_vals)-1))
    if differs and (n_changes or o_changes):
        interesting.append(addr)

print(f"\n=== Bytes that DIFFER and CHANGE in window ({len(interesting)} bytes) ===")
for addr in interesting:
    n_vals = [native[f][addr] for f in frames]
    o_vals = [oracle[f][addr] for f in frames]
    n_str = " ".join(f"{v:02X}" for v in n_vals)
    o_str = " ".join(f"{v:02X}" for v in o_vals)
    print(f"  ${addr:02X}: N {n_str}")
    print(f"        O {o_str}")
