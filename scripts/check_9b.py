"""Check $9B (IRQ enable flag) and related state on both builds."""
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

print("=== $9B and IRQ-related RAM ===")
for name, port in [("NATIVE", 4372), ("EMULATED", 4373)]:
    try:
        r9b = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '009B', 'len': 1})
        r78 = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '0078', 'len': 1})
        r50 = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '0050', 'len': 2})
        r7b = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '007B', 'len': 1})
        ree = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '00EE', 'len': 1})
        r9a = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '009A', 'len': 1})
        r9c = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '009C', 'len': 2})
        rfd = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '00FD', 'len': 1})
        frame = tcp_cmd(port, {'cmd': 'ping'})
        print(f"\n{name} @ frame {frame['frame']}:")
        print(f"  $9B (IRQ enable) = {r9b.get('hex','?')}")
        print(f"  $78 (IRQ table idx) = {r78.get('hex','?')}")
        print(f"  $50/$51 = {r50.get('hex','?')}")
        print(f"  $7B (scanline latch) = {r7b.get('hex','?')}")
        print(f"  $EE (NMI skip flag) = {ree.get('hex','?')}")
        print(f"  $9A (NMI OR skip) = {r9a.get('hex','?')}")
        print(f"  $9C/$9D (IRQ vec) = {r9c.get('hex','?')}")
        print(f"  $FD (scroll NT) = {rfd.get('hex','?')}")
    except Exception as e:
        print(f"{name}: {e}")

# Also follow $9B writes on native
print("\n=== Following $9B writes (native) ===")
try:
    tcp_cmd(4372, {'cmd': 'unfollow', 'addr': '9B'})
except:
    pass
tcp_cmd(4372, {'cmd': 'follow', 'addr': '9B'})
time.sleep(2)
r = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': '9B'})
print(f"Total writes to $9B: {r.get('total', '?')}")
for e in r.get('entries', [])[:10]:
    print(f"  f={e['f']} {e['old']}->{e['new']} stack={e['stack'][:120]}")
