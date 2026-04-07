"""Sample $700-$7FF on oracle across cutscene window. Find non-trivial state bytes.
   Then compare to native at the same frame range."""
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

def fetch_range(p, frame, start, length):
    out = bytearray(length)
    chunk = 256
    off = 0
    while off < length:
        n = min(chunk, length - off)
        r = s(p, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{start+off:04X}", "len": n})
        if not r.get("ok"): return None
        h = r.get("hex", "")
        for i in range(n):
            out[off + i] = int(h[i*2:i*2+2], 16)
        off += n
    return bytes(out)

# Cutscene window frames
frames = [2100, 2150, 2160, 2200, 2300, 2500, 2700, 2900]

# Sample $700-$7FF on BOTH sides
print("Fetching $700-$7FF on oracle and native at cutscene window frames...")
oracle = {}
native = {}
for f in frames:
    o = fetch_range(4373, f, 0x700, 0x100)
    n = fetch_range(4372, f, 0x700, 0x100)
    if o: oracle[f] = o
    if n: native[f] = n
    print(f"  frame {f}: oracle={'ok' if o else 'X'}  native={'ok' if n else 'X'}")

if not oracle:
    print("oracle missing all frames"); exit(1)

# Find oracle bytes that change in this window AND differ from native
print("\n=== $700-$7FF: bytes that change on oracle in window ===")
print("addr | NATIVE values across frames | ORACLE values across frames | NOTES")
print("-" * 130)
for off in range(0x100):
    addr = 0x700 + off
    o_vals = [oracle[f][off] if f in oracle else None for f in frames]
    n_vals = [native[f][off] if f in native else None for f in frames]
    o_clean = [v for v in o_vals if v is not None]
    if not o_clean: continue
    o_changes = any(o_clean[i] != o_clean[i+1] for i in range(len(o_clean)-1))
    if not o_changes: continue
    # Check if native differs
    differs = False
    for of, nf in zip(o_vals, n_vals):
        if of is not None and nf is not None and of != nf:
            differs = True
            break
    o_str = " ".join(f"{v:02X}" if v is not None else "??" for v in o_vals)
    n_str = " ".join(f"{v:02X}" if v is not None else "??" for v in n_vals)
    n_const = len(set(v for v in n_vals if v is not None)) <= 1
    note = ""
    if differs and n_const:
        note = "<-- STATIC on N, ACTIVE on O"
    elif differs:
        note = "<-- differs"
    print(f"${addr:04X}: N {n_str}")
    print(f"        O {o_str}  {note}")
