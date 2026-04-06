"""Dump follower histories from both builds."""
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

# Wait for instance
for _ in range(20):
    try:
        r = send_cmd(port, 'ping')
        print(f"[{label}] Connected, frame={r['frame']}")
        break
    except:
        time.sleep(1)
else:
    print(f"[{label}] Could not connect")
    sys.exit(1)

# Wait for frame > 200 (past boot)
while True:
    r = send_cmd(port, 'ping')
    if r['frame'] > 220:
        break
    time.sleep(0.5)

print(f"[{label}] Frame {r['frame']}, dumping followers...")

# Dump each follower
for addr, name in [('0x31', '$31 game_mode'), ('0x46', '$46 sub_mode'),
                    ('0xF4', '$F4 prg_r6'), ('0xF5', '$F5 prg_r7'),
                    ('0xFF', '$FF ppuctrl_shadow'), ('0xF8', '$F8 screen_mode')]:
    r = send_cmd(port, 'follow_history', addr=addr, limit=200)
    entries = r.get('entries', [])
    total = r.get('total', 0)
    print(f"\n=== {label} {name} ({total} total, showing last {len(entries)}) ===")
    for e in entries:
        print(f"  F{e['f']:>4}: {e['old']} -> {e['new']}  stack: {e['stack'][:80]}")
