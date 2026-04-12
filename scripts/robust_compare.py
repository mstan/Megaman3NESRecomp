#!/usr/bin/env python3
"""Robust comparison using persistent connections."""
import socket, json, time

class TC:
    def __init__(self, port):
        self.port = port
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.settimeout(10)
        self.sock.connect(('127.0.0.1', port))
        time.sleep(0.1)
        self.sock.setblocking(False)
        try: self.sock.recv(4096)
        except: pass
        self.sock.setblocking(True)
        self.sock.settimeout(10)
        self.buf = b''

    def cmd(self, d):
        self.sock.sendall(json.dumps(d).encode() + b'\n')
        while b'\n' not in self.buf:
            chunk = self.sock.recv(65536)
            if not chunk: return None
            self.buf += chunk
        idx = self.buf.index(b'\n')
        line = self.buf[:idx]
        self.buf = self.buf[idx+1:]
        return json.loads(line.decode())

    def close(self):
        self.sock.close()

nat = TC(4372)
emu = TC(4373)

# Continue both (may be paused from earlier)
nat.cmd({"cmd": "continue"})
emu.cmd({"cmd": "continue"})
time.sleep(0.5)

# Check state
ns = nat.cmd({"cmd": "mm3_state"})
es = emu.cmd({"cmd": "mm3_state"})
print(f"NAT: frame={ns['frame']} mode={ns['game_mode']} sub={ns['sub_mode']} stage={ns['stage']}")
print(f"EMU: frame={es['frame']} mode={es['game_mode']} sub={es['sub_mode']} stage={es['stage']}")

# Pause for stable reads
nat.cmd({"cmd": "pause"})
emu.cmd({"cmd": "pause"})
time.sleep(0.3)

# Read zero page
nzp = nat.cmd({"cmd": "read_ram", "addr": "0", "len": 256})
ezp = emu.cmd({"cmd": "read_ram", "addr": "0", "len": 256})

if nzp and 'data' in nzp and ezp and 'data' in ezp:
    nb = bytes.fromhex(nzp['data'])
    eb = bytes.fromhex(ezp['data'])
    diffs = [(i, nb[i], eb[i]) for i in range(256) if nb[i] != eb[i]]
    print(f"\nZero-page diffs: {len(diffs)} of 256")
    for addr, nv, ev in diffs:
        print(f"  ${addr:02X}: NAT=${nv:02X}  EMU=${ev:02X}")
else:
    print(f"ZP read: NAT={nzp} EMU={ezp}")

# Shadow palette
nsp = nat.cmd({"cmd": "read_ram", "addr": "600", "len": 32})
esp = emu.cmd({"cmd": "read_ram", "addr": "600", "len": 32})
print(f"\nShadow palette ($0600):")
if nsp and 'data' in nsp:
    print(f"  NAT: {nsp['data']}")
if esp and 'data' in esp:
    print(f"  EMU: {esp['data']}")

# PPU palette
np = nat.cmd({"cmd": "read_ppu", "addr": "3F00", "len": 32})
ep = emu.cmd({"cmd": "read_ppu", "addr": "3F00", "len": 32})
print(f"\nPPU palette:")
if np and 'data' in np:
    print(f"  NAT: {np['data']}")
if ep and 'data' in ep:
    print(f"  EMU: {ep['data']}")

# Mapper
nm = nat.cmd({"cmd": "mapper_state"})
em = emu.cmd({"cmd": "mapper_state"})
print(f"\nMapper:")
for k in sorted(set(list(nm.keys()) + list(em.keys()))):
    if k == 'id': continue
    nv = nm.get(k, '?')
    ev = em.get(k, '?')
    marker = " <<<" if str(nv) != str(ev) else ""
    print(f"  {k}: NAT={nv}  EMU={ev}{marker}")

# Bail trace
bt = nat.cmd({"cmd": "bail_trace"})
events = bt.get('events', []) if bt else []
print(f"\nBail trace: {len(events)} events")
for e in events[:30]:
    print(f"  frame={e.get('frame','?')} pc={e.get('pc','?')} exp_s={e.get('expected_s','?')} act_s={e.get('actual_s','?')} func={e.get('func','?')}")

# Coroutine info
ci = nat.cmd({"cmd": "coroutine_info"})
print(f"\nCoroutine: {json.dumps(ci, indent=2)}")

# Scheduler
nsc = nat.cmd({"cmd": "sched_state"})
esc = emu.cmd({"cmd": "sched_state"})
print(f"\nScheduler NAT: {json.dumps(nsc, indent=2)}")
print(f"Scheduler EMU: {json.dumps(esc, indent=2)}")

# Key RAM: $0400-$04FF (game state buffer), $0500-$05FF
for start, label in [(0x0400, "$0400"), (0x0500, "$0500")]:
    nr = nat.cmd({"cmd": "read_ram", "addr": hex(start), "len": 256})
    er = emu.cmd({"cmd": "read_ram", "addr": hex(start), "len": 256})
    if nr and 'data' in nr and er and 'data' in er:
        nb = bytes.fromhex(nr['data'])
        eb = bytes.fromhex(er['data'])
        diffs = [(i, nb[i], eb[i]) for i in range(256) if nb[i] != eb[i]]
        print(f"\n{label} diffs: {len(diffs)}")
        for addr, nv, ev in diffs[:15]:
            print(f"  ${start+addr:04X}: NAT=${nv:02X}  EMU=${ev:02X}")

nat.close()
emu.close()
