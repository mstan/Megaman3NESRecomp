"""Track g_cpu.S over a small number of frames; group by IRQ entry/exit visible via stack."""
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
hi = cur + 31  # ONE frame only
print(f"current={cur}, watching frame {lo}")
print(s(p, {"cmd": "watch_s", "frame_lo": lo, "frame_hi": hi}))
time.sleep(2)
print("now:", s(p, {"cmd": "ping"}))

# Paginate
all_entries = []
total = None
offset = 0
chunk = 100
while True:
    r = s(p, {"cmd": "watch_s_history", "limit": chunk, "offset": offset})
    if total is None: total = r.get("total", 0)
    ents = r.get("entries", [])
    if not ents: break
    all_entries.extend(ents)
    offset += len(ents)
    if offset >= total: break
    if len(ents) < chunk: break

print(f"total tracked: {total}, retrieved: {len(all_entries)}")
print(s(p, {"cmd": "unwatch_s"}))

if not all_entries: sys.exit(0)

# Find IRQ entries: stacks containing func_C143 in the TOP region
# IRQ entry: when stack[0] becomes "func_C143" (most recent push)
# IRQ exit: when stack[0] is no longer func_C143
# Better: track delta across full window

start_s = int(all_entries[0]["old"], 16)
end_s = int(all_entries[-1]["new"], 16)
delta = end_s - start_s
if delta < -128: delta += 256
elif delta > 128: delta -= 256

print(f"\nframe span: start_S={start_s:02X} end_S={end_s:02X} delta={delta:+d} ({len(all_entries)} entries)")

# Look for func_C143 entries
irq_entries = [e for e in all_entries if e["stack"].startswith("func_C143")]
print(f"func_C143-top entries: {len(irq_entries)}")

# Print the first 50 entries with SP and short stack
print("\nFirst 50 S changes this frame:")
for i, e in enumerate(all_entries[:50]):
    o = int(e["old"], 16); n = int(e["new"], 16)
    d = n - o
    if d < -128: d += 256
    elif d > 128: d -= 256
    top = e["stack"].split("<")[0]
    print(f"  {i:3d}  {o:02X}->{n:02X}  d={d:+3d}  {top}")
