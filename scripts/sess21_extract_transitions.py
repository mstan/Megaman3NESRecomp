#!/usr/bin/env python3
"""Extract $31/$46 transitions from both native and oracle ring buffers."""
import socket, json, sys

def send(port, obj, timeout=30):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(obj) + "\n").encode())
    buf = b""
    while b"\n" not in buf:
        chunk = s.recv(1 << 20)
        if not chunk:
            break
        buf += chunk
    s.close()
    return json.loads(buf.split(b"\n", 1)[0].decode())

def get_series(port, addr, start, end):
    """Pull byte at addr for frames [start, end] inclusive via per-frame read_frame_ram."""
    out = []
    # Try frame_timeseries first
    r = send(port, {"cmd": "frame_timeseries", "addr": addr, "len": 1, "start": start, "end": end})
    if r.get("ok") and "values" in r:
        return r["values"]
    if r.get("ok") and "data" in r:
        return r["data"]
    return r  # fallback: return raw for inspection

def transitions(values, start_frame):
    """Convert flat list of bytes into (frame, value) transitions."""
    out = []
    last = None
    for i, v in enumerate(values):
        if v != last:
            out.append((start_frame + i, v))
            last = v
    return out

if __name__ == "__main__":
    port = int(sys.argv[1])
    start = int(sys.argv[2]) if len(sys.argv) > 2 else 0
    end = int(sys.argv[3]) if len(sys.argv) > 3 else 2000
    print(f"# port={port} range={start}..{end}")
    for label, addr in [("$31_game_mode", "0031"), ("$46_sub_mode", "0046")]:
        r = get_series(port, addr, start, end)
        print(f"\n## {label} raw response sample:")
        print(json.dumps(r, indent=2)[:500])
