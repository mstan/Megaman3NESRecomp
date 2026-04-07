"""Track $30 (cutscene state) and other game state bytes around A-press."""
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

def fr(p, frame, addr, n):
    return s(p, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{addr:04X}", "len": n}).get("hex", "??")

# Sample $00-$3F (entire low zero page) at frames around A-press
frames = list(range(2140, 2200, 2))
print(f"frame   $30(N) (O)  diff   $0500(N) (O)   $00..$3F changed bytes")
prev_diffs = set()
for f in frames:
    nat30 = fr(4372, f, 0x30, 1)
    ora30 = fr(4373, f, 0x30, 1)
    nat500 = fr(4372, f, 0x500, 1)
    ora500 = fr(4373, f, 0x500, 1)
    nat_low = fr(4372, f, 0x00, 64)
    ora_low = fr(4373, f, 0x00, 64)
    diffs = []
    for i in range(64):
        if nat_low[i*2:i*2+2] != ora_low[i*2:i*2+2]:
            diffs.append(f"${i:02X}")
    diff_str = " ".join(diffs[:15])
    if len(diffs) > 15: diff_str += f" +{len(diffs)-15}"
    mark = " *" if nat30 != ora30 else "  "
    print(f"{f:5d}   {nat30}  {ora30}  {mark}   {nat500}  {ora500}     [{len(diffs)}] {diff_str}")
