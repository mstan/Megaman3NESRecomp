"""Scan $04 across frames in both native and emulated builds."""
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

print("Frame  EMU_$04  NAT_$04  EMU_$F6  NAT_$F6  EMU_$F7  NAT_$F7")
print("-" * 70)
for f in range(0, 60):
    emu04 = query(4373, {"id":1, "cmd":"read_frame_ram", "frame":f, "addr":"04", "len":1})
    nat04 = query(4372, {"id":1, "cmd":"read_frame_ram", "frame":f, "addr":"04", "len":1})
    emuF6 = query(4373, {"id":1, "cmd":"read_frame_ram", "frame":f, "addr":"F6", "len":2})
    natF6 = query(4372, {"id":1, "cmd":"read_frame_ram", "frame":f, "addr":"F6", "len":2})
    e04 = emu04.get("hex", "??")
    n04 = nat04.get("hex", "??")
    ef67 = emuF6.get("hex", "????")
    nf67 = natF6.get("hex", "????")
    marker = " <== DIVERGE" if e04 != n04 else ""
    print(f"  {f:3d}    0x{e04}     0x{n04}     0x{ef67[:2]}     0x{nf67[:2]}     0x{ef67[2:]}     0x{nf67[2:]}{marker}")
