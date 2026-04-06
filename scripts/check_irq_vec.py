"""Check IRQ dispatch vector $9C/$9D and follow its writes on native."""
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

# Current $9C/$9D on both
print("=== IRQ vector $9C/$9D comparison ===")
for name, port in [("NATIVE", 4372), ("EMULATED", 4373)]:
    try:
        r = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '009C', 'len': 2})
        frame = tcp_cmd(port, {'cmd': 'ping'})
        print(f"{name} @ frame {frame['frame']}: $9C/$9D = {r.get('hex','?')}")
    except Exception as e:
        print(f"{name}: {e}")

# Set up follow on $9C on native
print("\n=== Following $9C writes (native) ===")
try:
    tcp_cmd(4372, {'cmd': 'unfollow', 'addr': '9C'})
except:
    pass
tcp_cmd(4372, {'cmd': 'follow', 'addr': '9C'})
time.sleep(2)
r = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': '9C'})
print(f"Total writes to $9C: {r.get('total', '?')}")
for e in r.get('entries', [])[:20]:
    print(f"  f={e['f']} {e['old']}->{e['new']} stack={e['stack'][:100]}")

# Also follow $9D
print("\n=== Following $9D writes (native) ===")
try:
    tcp_cmd(4372, {'cmd': 'unfollow', 'addr': '9D'})
except:
    pass
tcp_cmd(4372, {'cmd': 'follow', 'addr': '9D'})
time.sleep(2)
r = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': '9D'})
print(f"Total writes to $9D: {r.get('total', '?')}")
for e in r.get('entries', [])[:20]:
    print(f"  f={e['f']} {e['old']}->{e['new']} stack={e['stack'][:100]}")

# Check all the key scroll-related RAM
print("\n=== Key scroll/IRQ RAM comparison ===")
for name, port in [("NATIVE", 4372), ("EMULATED", 4373)]:
    try:
        r1 = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '0073', 'len': 1})  # $73 IRQ split counter
        r2 = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '0079', 'len': 8})  # $79-$80 scroll state
        r3 = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '009C', 'len': 2})  # $9C/$9D IRQ vector
        r4 = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '00FD', 'len': 3})  # $FD/$FE/$FF
        frame = tcp_cmd(port, {'cmd': 'ping'})
        print(f"\n{name} @ frame {frame['frame']}:")
        print(f"  $73 (split ctr) = {r1.get('hex','?')}")
        print(f"  $79-$80 (scroll) = {r2.get('hex','?')}")
        print(f"  $9C/$9D (IRQ vec) = {r3.get('hex','?')}")
        print(f"  $FD/$FE/$FF = {r4.get('hex','?')}")
    except Exception as e:
        print(f"{name}: {e}")
