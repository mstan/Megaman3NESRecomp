import socket, json

def cmd(c, **kw):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', 4372))
    msg = json.dumps({'cmd': c, 'id': 1, **kw})
    s.sendall((msg + '\n').encode())
    d = b''
    while b'\n' not in d:
        d += s.recv(4096)
    s.close()
    return json.loads(d.decode().strip())

# Check $EE and $9A - these control the NMI branch at $C019
r = cmd('read_ram', addr='0xEE', len=1)
print(f"$EE = {r['hex']}")
r = cmd('read_ram', addr='0x9A', len=1)
print(f"$9A = {r['hex']}")
# $19 - controls call to $C4F8
r = cmd('read_ram', addr='0x19', len=1)
print(f"$19 = {r['hex']}")
# $1A - controls VRAM transfer
r = cmd('read_ram', addr='0x1A', len=1)
print(f"$1A = {r['hex']}")
# $18 - controls palette transfer
r = cmd('read_ram', addr='0x18', len=1)
print(f"$18 = {r['hex']}")

# Check call_stack to see where we are
r = cmd('call_stack')
print(f"\ncall_stack: {json.dumps(r, indent=2)}")

# Check get_registers
r = cmd('get_registers')
print(f"\nregisters: {json.dumps(r, indent=2)}")
