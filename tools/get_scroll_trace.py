#!/usr/bin/env python3
"""Query scroll_trace from TCP debug port."""
import socket
import json
import sys

port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.settimeout(10)
s.connect(("127.0.0.1", port))
s.sendall(b'{"cmd":"scroll_trace"}\n')

data = b""
depth = 0
started = False
while True:
    chunk = s.recv(65536)
    if not chunk: break
    data += chunk
    for b in chunk:
        c = chr(b)
        if c == '{': depth += 1; started = True
        elif c == '}': depth -= 1
        if started and depth == 0: break
    if started and depth == 0: break
s.close()

raw = data.decode().strip()
bd = 0
end = 0
for i, c in enumerate(raw):
    if c == '{': bd += 1
    elif c == '}':
        bd -= 1
        if bd == 0: end = i + 1; break

obj = json.loads(raw[:end])
print(f"Total entries: {obj['count']}")

# Group by frame
entries = obj["entries"]
current_frame = None
for e in entries:
    if e["f"] != current_frame:
        current_frame = e["f"]
        print(f"\n  Frame {current_frame}:")
    print(f"    $2005 {e['xy']} = {e['v']:3d} (${e['v']:02X})")

# Show current scroll state
print(f"\n\nLast entries:")
for e in entries[-6:]:
    print(f"  Frame {e['f']}: $2005 {e['xy']} = {e['v']} (${e['v']:02X})")
