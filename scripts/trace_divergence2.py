#!/usr/bin/env python3
"""
Trace divergence using one-shot TCP queries (no persistent conn issues).
"""
import socket, json, time, sys

def tcp(port, cmd_dict, timeout=5):
    """One-shot TCP query with proper handling."""
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    try:
        s.connect(('127.0.0.1', port))
        s.sendall(json.dumps(cmd_dict).encode() + b'\n')
        buf = b''
        while True:
            chunk = s.recv(65536)
            if not chunk: break
            buf += chunk
            if b'\n' in buf:
                break
        s.close()
        line = buf.split(b'\n')[0]
        if not line:
            return None
        return json.loads(line.decode())
    except Exception as e:
        s.close()
        return {"error": str(e)}

N, E = 4372, 4373

def state(port):
    return tcp(port, {"cmd": "mm3_state"})

def ram(port, addr, length):
    r = tcp(port, {"cmd": "read_ram", "addr": hex(addr), "len": length})
    if r and 'data' in r:
        return bytes.fromhex(r['data'])
    return None

def pause(port):
    return tcp(port, {"cmd": "pause"})

def cont(port):
    return tcp(port, {"cmd": "continue"})

def step(port, n=1):
    return tcp(port, {"cmd": "step", "count": n})

def set_input(port, buttons):
    return tcp(port, {"cmd": "set_input", "buttons": buttons})

def clear_input(port):
    return tcp(port, {"cmd": "clear_input"})

def mapper(port):
    return tcp(port, {"cmd": "mapper_state"})

def ppu(port, addr, length):
    return tcp(port, {"cmd": "read_ppu", "addr": hex(addr), "len": length})

# ---- MAIN ----
print("Checking connections...")
ns = state(N)
es = state(E)
print(f"NAT: frame={ns.get('frame','?')} mode={ns.get('game_mode','?')}")
print(f"EMU: frame={es.get('frame','?')} mode={es.get('game_mode','?')}")

# Wait for stage select (frame > 930)
print("\nWaiting for stage select screen...")
while True:
    ns = state(N)
    es = state(E)
    nf = ns.get('frame', 0)
    ef = es.get('frame', 0)
    if nf > 930 and ef > 930:
        print(f"Both past frame 930: NAT={nf} EMU={ef}")
        break
    time.sleep(0.5)

# Pause both
print("Pausing both...")
pause(N)
pause(E)
time.sleep(0.3)

# Baseline comparison at stage select
print("\n=== BASELINE AT STAGE SELECT ===")
ns = state(N)
es = state(E)
print(f"NAT: {json.dumps({k:v for k,v in ns.items() if k!='id'})}")
print(f"EMU: {json.dumps({k:v for k,v in es.items() if k!='id'})}")

nzp = ram(N, 0, 256)
ezp = ram(E, 0, 256)
if nzp and ezp:
    diffs = [(i, nzp[i], ezp[i]) for i in range(256) if nzp[i] != ezp[i]]
    print(f"\nBaseline ZP diffs: {len(diffs)}")
    for addr, nv, ev in diffs:
        print(f"  ${addr:02X}: NAT=${nv:02X}  EMU=${ev:02X}")

# Resume, send UP input, wait, then START
print("\n=== SENDING STAGE SELECTION ===")
cont(N)
cont(E)
time.sleep(0.1)

# UP for 4 frames
set_input(N, "0x08")
set_input(E, "0x08")
time.sleep(8/60.0)  # ~4 frames at 60fps + margin
clear_input(N)
clear_input(E)
time.sleep(16/60.0)  # wait 15 frames

# START for 4 frames
set_input(N, "0x10")
set_input(E, "0x10")
time.sleep(8/60.0)
clear_input(N)
clear_input(E)

# Now monitor every second for 20 seconds
print("\n=== MONITORING AFTER STAGE SELECT ===")
for i in range(40):
    time.sleep(0.5)
    ns = state(N)
    es = state(E)
    if not ns or not es:
        print(f"  t={i*0.5:.1f}s: query failed")
        continue
    nf = ns.get('frame', '?')
    ef = es.get('frame', '?')
    nm = ns.get('game_mode', '?')
    em = es.get('game_mode', '?')
    nstg = ns.get('stage', '?')
    estg = es.get('stage', '?')
    nsub = ns.get('sub_mode', '?')
    esub = es.get('sub_mode', '?')
    diverged = "***" if nm != em or nstg != estg else ""
    print(f"  t={i*0.5:5.1f}s | NAT f={nf:>5} m={nm} sub={nsub} stg={nstg} | EMU f={ef:>5} m={em} sub={esub} stg={estg} {diverged}")

# Pause for detailed diff
print("\n=== DETAILED DIFF ===")
pause(N)
pause(E)
time.sleep(0.3)

# Zero page
nzp = ram(N, 0, 256)
ezp = ram(E, 0, 256)
if nzp and ezp:
    diffs = [(i, nzp[i], ezp[i]) for i in range(256) if nzp[i] != ezp[i]]
    print(f"\nZero-page diffs: {len(diffs)}")
    for addr, nv, ev in diffs:
        print(f"  ${addr:02X}: NAT=${nv:02X}  EMU=${ev:02X}")

# Mapper
print("\nMapper:")
nm = mapper(N)
em = mapper(E)
if nm and em:
    for k in sorted(set(list(nm.keys()) + list(em.keys()))):
        if k in ('id', 'ok'): continue
        nv = nm.get(k, '?')
        ev = em.get(k, '?')
        marker = " <<<" if str(nv) != str(ev) else ""
        print(f"  {k}: NAT={nv}  EMU={ev}{marker}")

# PPU palette
print("\nPPU palette ($3F00):")
np = ppu(N, 0x3F00, 32)
ep = ppu(E, 0x3F00, 32)
if np and 'data' in np: print(f"  NAT: {np['data']}")
if ep and 'data' in ep: print(f"  EMU: {ep['data']}")

# Shadow palette
print("\nShadow palette ($0600):")
nsp = ram(N, 0x600, 32)
esp = ram(E, 0x600, 32)
if nsp: print(f"  NAT: {' '.join(f'{b:02X}' for b in nsp)}")
if esp: print(f"  EMU: {' '.join(f'{b:02X}' for b in esp)}")

# Bail trace
print("\nBail trace:")
bt = tcp(N, {"cmd": "bail_trace"}, timeout=10)
if bt:
    events = bt.get('events', [])
    print(f"  {len(events)} bail events")
    for e in events[:30]:
        print(f"  frame={e.get('frame','?')} pc={e.get('pc','?')} exp_s={e.get('expected_s','?')} act_s={e.get('actual_s','?')} func={e.get('func','?')}")

# Coroutine
print("\nCoroutine:")
ci = tcp(N, {"cmd": "coroutine_info"})
print(f"  {json.dumps(ci, indent=2)}")

# Scheduler
print("\nScheduler:")
for name, port in [("NAT", N), ("EMU", E)]:
    sc = tcp(port, {"cmd": "sched_state"})
    print(f"  [{name}] {json.dumps(sc, indent=2)}")

print("\nDone.")
