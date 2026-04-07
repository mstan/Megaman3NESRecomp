"""On oracle, sample full RAM ($0000-$07FF) at frames around the cutscene
   window to find which bytes change as the cutscene PROGRESSES."""
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

def fetch_ram(p, frame):
    out = bytearray(0x800)
    chunk = 256
    for off in range(0, 0x800, chunk):
        # read_frame_ram supports addr in CPU space
        r = s(p, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{off:04X}", "len": chunk})
        if not r.get("ok"): return None
        h = r.get("hex", "")
        for i in range(chunk):
            out[off + i] = int(h[i*2:i*2+2], 16)
    return bytes(out)

# Sample oracle across cutscene span
frames = [2100, 2150, 2200, 2300, 2500, 2700, 2900]
print("Fetching oracle RAM at:", frames)
ram = {}
for f in frames:
    r = fetch_ram(4373, f)
    if r is None:
        print(f"  frame {f}: FAILED")
        continue
    ram[f] = r
    print(f"  frame {f}: ok")

if not ram:
    import sys; sys.exit(1)

# Find bytes that CHANGE between frames in oracle cutscene window
# (these are bytes the cutscene state machine actively uses)
changing = []
fs = sorted(ram.keys())
for addr in range(0x800):
    vals = [ram[f][addr] for f in fs]
    if any(vals[i] != vals[i+1] for i in range(len(vals)-1)):
        changing.append((addr, vals))

print(f"\n=== Oracle bytes that CHANGE during cutscene window: {len(changing)} ===")
# Group by region
zp = [c for c in changing if c[0] < 0x100]
stk = [c for c in changing if 0x100 <= c[0] < 0x200]
oam = [c for c in changing if 0x200 <= c[0] < 0x300]
game1 = [c for c in changing if 0x300 <= c[0] < 0x500]
spr = [c for c in changing if 0x500 <= c[0] < 0x700]
game2 = [c for c in changing if 0x700 <= c[0] < 0x800]

print(f"  zero page ($00-$FF): {len(zp)}")
print(f"  stack ($100-$1FF): {len(stk)}")
print(f"  OAM ($200-$2FF): {len(oam)}")
print(f"  $300-$4FF: {len(game1)}")
print(f"  $500-$6FF: {len(spr)}")
print(f"  $700-$7FF: {len(game2)}")

# Show interesting non-OAM regions: $300-$4FF and $500-$6FF
print(f"\n=== $300-$4FF changes (likely game state) ===")
for addr, vals in game1[:30]:
    s_str = " ".join(f"{v:02X}" for v in vals)
    print(f"  ${addr:04X}: {s_str}")
print(f"\n=== $500-$6FF changes ===")
for addr, vals in spr[:30]:
    s_str = " ".join(f"{v:02X}" for v in vals)
    print(f"  ${addr:04X}: {s_str}")
