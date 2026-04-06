#!/usr/bin/env python3
"""Set up a write follower on $FD, wait, then dump the history."""
import socket, json, time, sys

PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 4372

def tcp_cmd(cmd):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect(("127.0.0.1", PORT))
    s.sendall((json.dumps(cmd) + "\n").encode())
    buf = b""
    while b"\n" not in buf:
        chunk = s.recv(4096)
        if not chunk: break
        buf += chunk
    s.close()
    return json.loads(buf.decode().strip())

# Set up follow on $FD
print("Setting up follow on $FD...")
r = tcp_cmd({"cmd": "follow", "addr": "FD"})
print("Follow:", r)

# Wait a few frames
print("Waiting 3 seconds for writes...")
time.sleep(3)

# Dump follow history
print("\nFollow history for $FD:")
r = tcp_cmd({"cmd": "follow_history", "addr": "FD"})
print(json.dumps(r, indent=2))
