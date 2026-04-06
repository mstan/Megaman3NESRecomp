"""Trace RAM $FD on both native and emulated - no wait, builds already running."""
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

# Check state on both
for name, port in [("NATIVE", 4372), ("EMULATED", 4373)]:
    try:
        st = tcp_cmd(port, {'cmd': 'mm3_state'})
        ram = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '00F8', 'len': 8})
        print(f"{name}: frame={st.get('frame')} mode={st.get('game_mode')} "
              f"RAM[$F8-$FF]={ram.get('hex','?')}")
    except Exception as e:
        print(f"{name}: {e}")

# Set up follower on $FD (native only)
print("\nSetting up follower on $FD (native)...")
r = tcp_cmd(4372, {'cmd': 'follow', 'addr': 'FD'})
print(f"Follow response: {json.dumps(r)}")

# Let it run for 3 seconds to collect writes
print("Running for 3 seconds...")
time.sleep(3)

# Read follower history
r = tcp_cmd(4372, {'cmd': 'follow_history', 'addr': 'FD'})
print(f"\nFollower history for $FD ({r.get('count', '?')} writes):")
entries = r.get('entries', r.get('log', []))
for e in entries[:30]:
    print(f"  frame={e.get('frame','?')} {e.get('old_val','?'):>3}->{e.get('new_val','?'):>3} "
          f"stack={e.get('call_stack','?')}")
if len(entries) > 30:
    print(f"  ... {len(entries)} total entries")

# Compare $FC-$FF on both builds now
print("\nCurrent $F8-$FF comparison:")
for name, port in [("NATIVE", 4372), ("EMULATED", 4373)]:
    try:
        ram = tcp_cmd(port, {'cmd': 'read_ram', 'addr': '00F8', 'len': 8})
        hex_str = ram.get('hex', '')
        bytes_list = [hex_str[i:i+2] for i in range(0, len(hex_str), 2)]
        labels = ['$F8','$F9','$FA','$FB','$FC','$FD','$FE','$FF']
        print(f"  {name}: " + " ".join(f"{l}={b}" for l, b in zip(labels, bytes_list)))
    except Exception as e:
        print(f"  {name}: {e}")

# Step through a few frames comparing $FD
print("\n$FD comparison frame-by-frame:")
tcp_cmd(4372, {'cmd': 'pause'})
tcp_cmd(4373, {'cmd': 'pause'})

for i in range(10):
    n_ram = tcp_cmd(4372, {'cmd': 'read_ram', 'addr': '00FD', 'len': 1})
    e_ram = tcp_cmd(4373, {'cmd': 'read_ram', 'addr': '00FD', 'len': 1})
    n_mm3 = tcp_cmd(4372, {'cmd': 'mm3_state'})
    e_mm3 = tcp_cmd(4373, {'cmd': 'mm3_state'})
    n_fd = n_ram.get('hex', '??')
    e_fd = e_ram.get('hex', '??')
    match = "OK" if n_fd == e_fd else "MISMATCH"
    print(f"  Native f={n_mm3.get('frame','?')} $FD={n_fd}  |  "
          f"Emu f={e_mm3.get('frame','?')} $FD={e_fd}  [{match}]")
    tcp_cmd(4372, {'cmd': 'step'})
    tcp_cmd(4373, {'cmd': 'step'})
    time.sleep(0.05)

tcp_cmd(4372, {'cmd': 'continue'})
tcp_cmd(4373, {'cmd': 'continue'})
print("Done.")
