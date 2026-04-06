"""Check current PRG bank mapping on native during gameplay."""
import socket, json, time

def tcp_cmd(port, cmd):
    s = socket.socket()
    s.settimeout(3)
    s.connect(('127.0.0.1', port))
    s.sendall((json.dumps(cmd) + '\n').encode())
    buf = b''
    while True:
        data = s.recv(8192)
        if not data:
            break
        buf += data
        if b'\n' in buf:
            break
    s.close()
    return json.loads(buf.split(b'\n')[0].decode())

print("=== PRG bank mapping comparison ===")
for name, port in [("NATIVE", 4372), ("EMULATED", 4373)]:
    try:
        mm3 = tcp_cmd(port, {'cmd': 'mm3_state'})
        r_f4 = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '00F4', 'len': 3})
        mapper = tcp_cmd(port, {'cmd': 'mapper_state'})
        frame = tcp_cmd(port, {'cmd': 'ping'})
        print(f"\n{name} @ frame {frame['frame']}:")
        print(f"  $F4/$F5/$F6 (PRG R6/R7/flag) = {r_f4.get('hex','?')}")
        print(f"  mapper_state = {json.dumps(mapper)}")
        print(f"  mm3_state = {json.dumps(mm3)}")
    except Exception as e:
        print(f"{name}: {e}")
