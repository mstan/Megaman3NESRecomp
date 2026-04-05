"""Time-travel debugger: compare key RAM between native and emulated
at every frame in a range, using the read_frame_ram command."""
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

def read_frame_byte(port, frame, addr_hex):
    r = send_cmd(port, 'read_frame_ram', frame=frame, addr=addr_hex, len=1)
    if r.get('ok'):
        return int(r['hex'], 16)
    return None

def read_frame_bytes(port, frame, addr_hex, length):
    r = send_cmd(port, 'read_frame_ram', frame=frame, addr=addr_hex, len=length)
    if r.get('ok'):
        return bytes.fromhex(r['hex'])
    return None

NATIVE_PORT = 4372
EMU_PORT = 4373

# Wait for both instances to be past frame 220
for port in [NATIVE_PORT, EMU_PORT]:
    label = "Native" if port == NATIVE_PORT else "Emulated"
    for _ in range(30):
        try:
            r = send_cmd(port, 'ping')
            if r['frame'] > 220:
                print(f"{label}: ready at frame {r['frame']}")
                break
        except:
            pass
        time.sleep(1)
    else:
        print(f"{label}: not ready, aborting")
        sys.exit(1)

# Key MM3 addresses to compare
addrs = [
    ('$31', '0x31'),   # game_mode
    ('$46', '0x46'),   # sub_mode
    ('$F4', '0xF4'),   # prg_r6
    ('$F5', '0xF5'),   # prg_r7
    ('$FF', '0xFF'),   # ppuctrl shadow
    ('$F8', '0xF8'),   # screen mode
]

# Compare key addresses frame-by-frame
start_frame = int(sys.argv[1]) if len(sys.argv) > 1 else 1
end_frame = int(sys.argv[2]) if len(sys.argv) > 2 else 200

addr_names = [a[0] for a in addrs]
print("\n" + "=" * 120)
print(f"{'Frame':>5} | {'--- NATIVE ---':^50} | {'--- EMULATED ---':^50}")
hdr = ' '.join(f'{n:>5}' for n in addr_names)
print(f"{'':>5} | {hdr} | {hdr}")
print("-" * 120)

for f in range(start_frame, end_frame + 1):
    row = f"{f:>5} |"
    for port in [NATIVE_PORT, EMU_PORT]:
        vals = []
        for name, hex_addr in addrs:
            v = read_frame_byte(port, f, hex_addr)
            vals.append(v)

        if vals[0] is not None:
            row += ' ' + ' '.join(f' 0x{v:02X}' if v is not None else '  ???' for v in vals) + ' |'
        else:
            row += f" {'--- frame not available ---':^50} |"
    print(row)

# Also dump follower histories for key addresses
for addr_name, addr_hex in [('$31', '0x31'), ('$F8', '0xF8'), ('$FF', '0xFF')]:
    for port in [NATIVE_PORT, EMU_PORT]:
        label = "NATIVE" if port == NATIVE_PORT else "EMULATED"
        print(f"\n=== {label} {addr_name} writes (frames {start_frame}-{end_frame}) ===")
        r = send_cmd(port, 'follow_history', addr=addr_hex, limit=200)
        for e in r.get('entries', []):
            if start_frame <= e['f'] <= end_frame:
                print(f"  F{e['f']:>4}: {e['old']} -> {e['new']}  stack: {e['stack'][:80]}")
