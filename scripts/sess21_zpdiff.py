"""Dump full zero page at multiple frames from native + oracle, diff them."""
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

def read_frame(port, frame, addr, length):
    return send(port, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{addr:04X}", "len": length})

def fetch_zp(port, frame):
    """Read 256 bytes of zero page from a historical frame."""
    out = bytearray(256)
    chunk = 64
    for off in range(0, 256, chunk):
        r = read_frame(port, frame, off, chunk)
        if not r.get("ok"):
            return None, r
        h = r.get("hex", "")
        for i in range(chunk):
            out[off + i] = int(h[i*2:i*2+2], 16)
    return bytes(out), None

if __name__ == "__main__":
    frames = [int(x) for x in sys.argv[1:]] if len(sys.argv) > 1 else [2148, 2150, 2155, 2160, 2165, 2170, 2180]
    for f in frames:
        nat, ne = fetch_zp(4372, f)
        ora, oe = fetch_zp(4373, f)
        if nat is None or ora is None:
            print(f"frame {f}: error native={ne} oracle={oe}")
            continue
        diffs = [(i, nat[i], ora[i]) for i in range(256) if nat[i] != ora[i]]
        print(f"\n== frame {f}: {len(diffs)} differing bytes ==")
        for addr, n, o in diffs:
            print(f"  ${addr:02X}: nat={n:02X}  ora={o:02X}")
