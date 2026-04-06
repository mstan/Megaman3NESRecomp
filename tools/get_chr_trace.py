#!/usr/bin/env python3
"""Query chr_trace from a TCP debug port and pretty-print."""
import socket
import json
import sys

port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.settimeout(10)
s.connect(("127.0.0.1", port))
s.sendall(b'{"cmd":"chr_trace"}\n')

# Read until we have a complete JSON object (brace-matched)
data = b""
depth = 0
started = False
while True:
    chunk = s.recv(65536)
    if not chunk:
        break
    data += chunk
    for b in chunk:
        c = chr(b)
        if c == '{':
            depth += 1
            started = True
        elif c == '}':
            depth -= 1
        if started and depth == 0:
            break
    if started and depth == 0:
        break
s.close()

raw = data.decode().strip()
# Find the complete JSON object
brace_depth = 0
end = 0
for i, c in enumerate(raw):
    if c == '{':
        brace_depth += 1
    elif c == '}':
        brace_depth -= 1
        if brace_depth == 0:
            end = i + 1
            break

obj = json.loads(raw[:end])
print(f"Total entries: {obj['count']}")
print(f"{'Frame':>8}  {'R0':>3} {'R1':>3} {'R2':>3} {'R3':>3} {'R4':>3} {'R5':>3} Mode  Caller")
print("-" * 90)
for e in obj["entries"]:
    r = e["r"]
    bs = e["bs"]
    inv = "INV" if (bs & 0x80) else "STD"
    print(f"{e['f']:8d}  {r[0]:3d} {r[1]:3d} {r[2]:3d} {r[3]:3d} {r[4]:3d} {r[5]:3d} {inv:>4}  {e['fn']}")
