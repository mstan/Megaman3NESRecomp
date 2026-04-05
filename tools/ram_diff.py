"""Full RAM diff between native and emulated at a specific frame."""
import socket, json, sys

def cmd(port, c, **kw):
    s = socket.socket()
    s.settimeout(10)
    s.connect(('127.0.0.1', port))
    msg = json.dumps({'cmd': c, 'id': 1, **kw})
    s.sendall((msg + '\n').encode())
    d = b''
    while b'\n' not in d:
        chunk = s.recv(65536)
        if not chunk: break
        d += chunk
    s.close()
    return json.loads(d.decode().strip())

frame = int(sys.argv[1]) if len(sys.argv) > 1 else 100

NATIVE = 4372
EMU = 4373

# Read full RAM snapshot from ring buffer at the given frame
n = cmd(NATIVE, 'read_frame_ram', frame=frame, addr='0x0000', len=2048)
e = cmd(EMU, 'read_frame_ram', frame=frame, addr='0x0000', len=2048)

if not n.get('ok'):
    print(f"Native frame {frame} not available: {n.get('error','?')}")
    sys.exit(1)
if not e.get('ok'):
    print(f"Emulated frame {frame} not available: {e.get('error','?')}")
    sys.exit(1)

nram = bytes.fromhex(n['hex'])
eram = bytes.fromhex(e['hex'])

diffs = []
for i in range(min(len(nram), len(eram))):
    if nram[i] != eram[i]:
        diffs.append((i, nram[i], eram[i]))

print(f"Frame {frame}: {len(diffs)} bytes differ out of {min(len(nram), len(eram))}")
if diffs:
    print(f"\n{'Addr':>6}  {'Native':>8}  {'Emulated':>8}")
    print(f"{'----':>6}  {'------':>8}  {'--------':>8}")
    for addr, nv, ev in diffs[:80]:
        print(f"${addr:04X}    0x{nv:02X}      0x{ev:02X}")
    if len(diffs) > 80:
        print(f"... and {len(diffs)-80} more")
