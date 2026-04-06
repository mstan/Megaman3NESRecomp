"""Trace PPUCTRL across frames to confirm oscillation pattern."""
import socket, json, time

PORT = 4372

def tcp_cmd(cmd):
    s = socket.socket()
    s.settimeout(3)
    s.connect(('127.0.0.1', PORT))
    s.sendall((json.dumps(cmd) + '\n').encode())
    buf = b''
    while True:
        data = s.recv(4096)
        if not data:
            break
        buf += data
        if b'\n' in buf:
            break
    s.close()
    return json.loads(buf.split(b'\n')[0].decode())

def parse_hex(val):
    if isinstance(val, str):
        return int(val, 16)
    return int(val)

print("Connecting...")
state = tcp_cmd({'cmd': 'mm3_state'})
print(f"Game: mode={state.get('game_mode')} frame={state.get('frame')}")

tcp_cmd({'cmd': 'pause'})

print(f"\n{'Frame':>7} {'PPUCTRL':>8} {'NT bits':>8} {'Nametable':>10} {'PPUMASK':>8} {'spr0':>5}")
for i in range(30):
    ppu = tcp_cmd({'cmd': 'ppu_state'})
    mm3 = tcp_cmd({'cmd': 'mm3_state'})
    frame = mm3.get('frame', '?')
    ctrl = parse_hex(ppu.get('ppuctrl', '0'))
    mask = parse_hex(ppu.get('ppumask', '0'))
    spr0 = ppu.get('spr0_split', 0)
    nt_bits = ctrl & 0x03
    nt_addr = 0x2000 + nt_bits * 0x400
    print(f"{frame:>7}   0x{ctrl:02X}       {nt_bits}      ${nt_addr:04X}     0x{mask:02X}    {spr0}")
    tcp_cmd({'cmd': 'step'})
    time.sleep(0.02)

# Read key RAM
ram = tcp_cmd({'cmd': 'read_ram', 'addr': '00F0', 'len': 16})
print(f"\nRAM $F0-$FF: {ram.get('hex', '?')}")

tcp_cmd({'cmd': 'continue'})
print("Done.")
