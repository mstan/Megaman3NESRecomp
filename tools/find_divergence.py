"""Find first frame where native and emulated game state diverge."""
import socket, json, sys, time

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

NATIVE = 4372
EMU = 4373

# Get history ranges
nh = cmd(NATIVE, 'history')
eh = cmd(EMU, 'history')
print(f"Native  ring: {nh.get('oldest',0)}-{nh.get('newest',0)}")
print(f"Emulated ring: {eh.get('oldest',0)}-{eh.get('newest',0)}")

# Find overlapping range
start = max(nh.get('oldest',0), eh.get('oldest',0))
end = min(nh.get('newest',0), eh.get('newest',0))
print(f"Overlap: {start}-{end}")

# Fetch timeseries in batches, compare game_data
print(f"\nSearching for first divergence in game_data...")
batch = 100
for bs in range(start, end+1, batch):
    be = min(bs + batch - 1, end)
    nr = cmd(NATIVE, 'frame_timeseries', start=bs, end=be)
    er = cmd(EMU, 'frame_timeseries', start=bs, end=be)

    nts = {e['f']: e for e in nr.get('ts', []) if e}
    ets = {e['f']: e for e in er.get('ts', []) if e}

    for f in sorted(set(nts.keys()) & set(ets.keys())):
        n = nts[f]
        e = ets[f]
        # Compare game_data (the 16 game-specific bytes)
        ngd = n.get('gd', '')
        egd = e.get('gd', '')
        if ngd != egd:
            print(f"\n>>> FIRST DIVERGENCE at frame {f}")
            print(f"  Native  gd: {ngd}")
            print(f"  Emulated gd: {egd}")
            # Decode
            nb = bytes.fromhex(ngd)
            eb = bytes.fromhex(egd)
            labels = ['$14','$16','$31 gm','$46 sm','$F4 r6','$F5 r7',
                       '$22 stg','$A0 wpn','oam0y','oam3y','oam0t','oam0a',
                       '$FF ctrl','$FE mask','$AE lives','$F6 bnk']
            for i in range(min(len(nb), len(eb))):
                if nb[i] != eb[i]:
                    print(f"    [{i}] {labels[i] if i<len(labels) else '?'}: N=0x{nb[i]:02X} E=0x{eb[i]:02X}")

            # Also compare CPU/PPU state
            for field in ['a','x','y','ctrl','mask','sx','sy']:
                nv = n.get(field, 0)
                ev = e.get(field, 0)
                if nv != ev:
                    print(f"    {field}: N=0x{nv:02X} E=0x{ev:02X}")
            sys.exit(0)

    # Progress
    if (bs - start) % 500 == 0:
        print(f"  Checked frames {bs}-{be}, no divergence yet...")

print("No divergence found in overlapping range!")
