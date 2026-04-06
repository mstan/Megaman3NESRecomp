#!/usr/bin/env python3
"""Send input via TCP and check state after."""
import socket, json, time, sys

PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
BUTTONS = sys.argv[2] if len(sys.argv) > 2 else "80"  # default = A

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

print(f"Setting input buttons=0x{BUTTONS}...")
r = tcp_cmd({"cmd": "set_input", "buttons": BUTTONS})
print(r)
time.sleep(0.3)
r = tcp_cmd({"cmd": "clear_input"})
print("Cleared:", r)
time.sleep(3)
r = tcp_cmd({"cmd": "mm3_state"})
print("State:", json.dumps(r, indent=2))
r = tcp_cmd({"cmd": "screenshot", "path": "C:/temp/after_input.png"})
print("Screenshot:", r)
