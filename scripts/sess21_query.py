#!/usr/bin/env python3
"""Session 21: helpers to query both native (4372) and oracle (4373)."""
import socket, json, sys, time

def send(port, cmd_obj, timeout=10):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(cmd_obj) + "\n").encode())
    buf = b""
    while True:
        try:
            chunk = s.recv(65536)
        except socket.timeout:
            break
        if not chunk:
            break
        buf += chunk
        if b"\n" in buf:
            break
    s.close()
    line = buf.split(b"\n", 1)[0]
    try:
        return json.loads(line.decode())
    except Exception as e:
        return {"raw": line.decode(errors="replace"), "err": str(e)}

def ping(port):
    return send(port, {"cmd": "ping"})

def hist(port):
    return send(port, {"cmd": "history"})

def frame_ram(port, frame, addr, length=1):
    return send(port, {"cmd": "read_frame_ram", "frame": frame, "addr": addr, "len": length})

def get_frame(port, frame):
    return send(port, {"cmd": "get_frame", "frame": frame})

def timeseries(port, addr, length, start, end):
    return send(port, {"cmd": "frame_timeseries", "addr": addr, "len": length, "start": start, "end": end})

if __name__ == "__main__":
    cmd = sys.argv[1] if len(sys.argv) > 1 else "ping"
    if cmd == "ping":
        print("native:", ping(4372))
        print("oracle:", ping(4373))
    elif cmd == "hist":
        print("native:", hist(4372))
        print("oracle:", hist(4373))
    elif cmd == "raw":
        port = int(sys.argv[2]); obj = json.loads(sys.argv[3])
        print(json.dumps(send(port, obj), indent=2))
