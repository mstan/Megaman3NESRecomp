#!/usr/bin/env python3
"""Quick side-by-side comparison of native vs oracle state."""
import socket, json, time, sys

def tcp(port, cmd):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    s.sendall(json.dumps(cmd).encode() + b'\n')
    buf = b''
    while b'\n' not in buf:
        chunk = s.recv(8192)
        if not chunk: break
        buf += chunk
    s.close()
    return json.loads(buf.split(b'\n')[0].decode())

def read_ram(port, addr, length):
    r = tcp(port, {"cmd": "read_ram", "addr": hex(addr), "len": length})
    if r and 'data' in r:
        return bytes.fromhex(r['data'])
    return None

N, E = 4372, 4373

# Zero page
nzp = read_ram(N, 0x00, 256)
ezp = read_ram(E, 0x00, 256)

if nzp and ezp:
    diffs = [(i, nzp[i], ezp[i]) for i in range(256) if nzp[i] != ezp[i]]
    print(f"Zero-page diffs: {len(diffs)} of 256")
    for addr, nv, ev in diffs:
        print(f"  ${addr:02X}: NAT=${nv:02X}  EMU=${ev:02X}")
else:
    print(f"ZP read failed: NAT={nzp is not None} EMU={ezp is not None}")

# Game-critical RAM ranges
for start, end, label in [(0x0300, 0x0400, "$0300-$03FF"), (0x0600, 0x0620, "shadow palette"), (0x0700, 0x0800, "$0700-$07FF")]:
    nr = read_ram(N, start, end-start)
    er = read_ram(E, start, end-start)
    if nr and er:
        diffs = [(i, nr[i], er[i]) for i in range(len(nr)) if nr[i] != er[i]]
        print(f"\n{label} diffs: {len(diffs)} of {end-start}")
        for addr, nv, ev in diffs[:30]:
            print(f"  ${start+addr:04X}: NAT=${nv:02X}  EMU=${ev:02X}")
        if len(diffs) > 30:
            print(f"  ... and {len(diffs)-30} more")

# Scheduler
print("\nScheduler:")
ns = tcp(N, {"cmd": "sched_state"})
es = tcp(E, {"cmd": "sched_state"})
for k in ['ch0','ch1','ch2','ch3']:
    nch = ns.get(k, {})
    ech = es.get(k, {})
    print(f"  {k}: NAT={nch}  EMU={ech}")

# Mapper
print("\nMapper:")
nm = tcp(N, {"cmd": "mapper_state"})
em = tcp(E, {"cmd": "mapper_state"})
for k in sorted(set(list(nm.keys()) + list(em.keys()))):
    if k == 'id': continue
    nv = nm.get(k, '?')
    ev = em.get(k, '?')
    marker = " <<<" if nv != ev else ""
    print(f"  {k}: NAT={nv}  EMU={ev}{marker}")

# PPU palette
print("\nPPU palette ($3F00):")
np = tcp(N, {"cmd": "read_ppu", "addr": "3F00", "len": 32})
ep = tcp(E, {"cmd": "read_ppu", "addr": "3F00", "len": 32})
if np and 'data' in np:
    print(f"  NAT: {np['data']}")
if ep and 'data' in ep:
    print(f"  EMU: {ep['data']}")

# Bail trace
print("\nBail trace:")
bt = tcp(N, {"cmd": "bail_trace"})
events = bt.get('events', [])
print(f"  {len(events)} events")
for e in events[:30]:
    print(f"  frame={e.get('frame','?')} pc=${e.get('pc','?')} exp_s={e.get('expected_s','?')} act_s={e.get('actual_s','?')} func={e.get('func','?')}")

# Coroutine
print("\nCoroutine:")
ci = tcp(N, {"cmd": "coroutine_info"})
print(f"  {json.dumps(ci, indent=2)}")
