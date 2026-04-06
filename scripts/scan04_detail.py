"""Detailed scan around frame 18-19 divergence."""
import socket
import json

def query(port, cmd):
    s = socket.socket()
    s.settimeout(3)
    s.connect(('localhost', port))
    s.sendall((json.dumps(cmd) + "\n").encode())
    data = b''
    while True:
        try:
            chunk = s.recv(8192)
            if not chunk:
                break
            data += chunk
            if b'\n' in data:
                break
        except:
            break
    s.close()
    return json.loads(data.split(b'\n')[0])

# Scan key ZP addresses around the divergence
addrs = ["00", "01", "02", "03", "04", "05", "06", "07", "09", "31", "46", "F4", "F5"]
print("Frame  " + "  ".join(f"${a}" for a in addrs))
print("-" * 120)

for port_label, port in [("EMU", 4373), ("NAT", 4372)]:
    print(f"\n=== {port_label} ===")
    for f in range(15, 30):
        vals = []
        for a in addrs:
            r = query(port, {"id":1, "cmd":"read_frame_ram", "frame":f, "addr":a, "len":1})
            vals.append(r.get("hex", "??"))
        print(f"  {f:3d}  " + "   ".join(f" {v}" for v in vals))
