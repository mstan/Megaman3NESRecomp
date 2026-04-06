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

# Read IRQ dispatch vector ($9C/$9D) and related state
ram = tcp_cmd(4372, {'cmd': 'read_ram', 'addr': '0078', 'len': 32})
hex_str = ram.get('hex', '')
print("RAM $78-$97:")
for i in range(0, len(hex_str), 2):
    addr = 0x78 + i//2
    print(f"  ${addr:02X} = ${hex_str[i:i+2]}")

# Specifically $9C/$9D
r9c = int(hex_str[(0x9C-0x78)*2:(0x9C-0x78)*2+2], 16)
r9d = int(hex_str[(0x9D-0x78)*2:(0x9D-0x78)*2+2], 16)
target = r9c | (r9d << 8)
print(f"\nIRQ dispatch target: JMP (${target:04X})  [$9C=${r9c:02X}, $9D=${r9d:02X}]")

# Also check $9B (MMC3 IRQ enable flag)
r9b = int(hex_str[(0x9B-0x78)*2:(0x9B-0x78)*2+2], 16)
print(f"$9B (IRQ enable shadow) = ${r9b:02X}")
