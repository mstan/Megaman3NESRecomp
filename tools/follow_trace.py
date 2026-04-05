"""Set up followers on key addresses, wait for boot, then dump history."""
import socket, json, sys, time

def send_cmd(port, cmd, **kwargs):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(10)
    s.connect(('127.0.0.1', port))
    msg = json.dumps({'cmd': cmd, **kwargs})
    s.sendall((msg + '\n').encode())
    data = b''
    while True:
        chunk = s.recv(65536)
        if not chunk:
            break
        data += chunk
        try:
            json.loads(data.decode())
            break
        except:
            continue
    s.close()
    return json.loads(data.decode())

port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
label = "NATIVE" if port == 4372 else "EMULATED"

# Wait for instance to be ready
for attempt in range(10):
    try:
        r = send_cmd(port, 'ping')
        frame = r.get('frame', 0)
        print(f"[{label}] Connected, frame={frame}")
        break
    except:
        print(f"[{label}] Waiting for connection...")
        time.sleep(1)

# Set up followers on key MM3 addresses
print(f"\n[{label}] Setting up followers...")
for addr, name in [('0x31', '$31 game_mode'), ('0x46', '$46 sub_mode'),
                    ('0xF4', '$F4 prg_r6'), ('0xF5', '$F5 prg_r7'),
                    ('0xFF', '$FF ppuctrl_shadow'), ('0xF8', '$F8 screen_mode')]:
    r = send_cmd(port, 'follow', addr=addr)
    print(f"  follow {name}: {json.dumps(r)}")

# Wait for game to progress past boot
target_frame = int(sys.argv[2]) if len(sys.argv) > 2 else 200
print(f"\n[{label}] Waiting for game to pass frame {target_frame}...")
while True:
    time.sleep(1)
    r = send_cmd(port, 'ping')
    frame = r.get('frame', 0)
    if frame > target_frame + 50:
        print(f"  Frame {frame}, dumping histories...")
        break

# Dump follow histories
for addr, name in [('0x31', '$31 game_mode'), ('0x46', '$46 sub_mode'),
                    ('0xF4', '$F4 prg_r6'), ('0xF5', '$F5 prg_r7'),
                    ('0xFF', '$FF ppuctrl_shadow'), ('0xF8', '$F8 screen_mode')]:
    r = send_cmd(port, 'follow_history', addr=addr, limit=100)
    entries = r.get('entries', [])
    total = r.get('total', 0)
    print(f"\n=== {label} {name} writes ({total} total, showing last {len(entries)}) ===")
    for e in entries:
        print(f"  F{e['f']:>4}: {e['old']} -> {e['new']}  stack: {e['stack']}")
