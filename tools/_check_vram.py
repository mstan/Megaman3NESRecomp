#!/usr/bin/env python3
import socket, json

def query(port, cmd, **kwargs):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    msg = {'cmd': cmd, 'id': 1}
    msg.update(kwargs)
    s.sendall((json.dumps(msg) + '\n').encode())
    data = b''
    while b'\n' not in data:
        data += s.recv(4096)
    r = json.loads(data.split(b'\n')[0])
    s.close()
    return r

# Read palette from both
nat_pal = query(4372, 'read_ppu', addr='0x3F00', len=32)
emu_pal = query(4373, 'read_ppu', addr='0x3F00', len=32)
print(f"Native palette:  {nat_pal.get('hex', 'ERROR')}")
print(f"Emu palette:     {emu_pal.get('hex', 'ERROR')}")

# Read first 32 bytes of nametable
nat_nt = query(4372, 'read_ppu', addr='0x2000', len=32)
emu_nt = query(4373, 'read_ppu', addr='0x2000', len=32)
print(f"Native NT[0:32]: {nat_nt.get('hex', 'ERROR')}")
print(f"Emu NT[0:32]:    {emu_nt.get('hex', 'ERROR')}")

# Read first 32 bytes of CHR
nat_chr = query(4372, 'read_ppu', addr='0x0000', len=32)
emu_chr = query(4373, 'read_ppu', addr='0x0000', len=32)
print(f"Native CHR[0:32]: {nat_chr.get('hex', 'ERROR')}")
print(f"Emu CHR[0:32]:    {emu_chr.get('hex', 'ERROR')}")
