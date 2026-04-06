#!/usr/bin/env python3
"""Quick ring buffer diagnostic."""
import socket, json, sys, time

def query(port, cmd, timeout=10, **kwargs):
    s = socket.socket()
    s.settimeout(timeout)
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

for port, label in [(4372, "Native"), (4373, "Emu")]:
    try:
        ping = query(port, 'ping')
        hist = query(port, 'history')
        print(f"\n{label} (port {port}):")
        print(f"  Current frame: {ping.get('frame')}")
        print(f"  History: count={hist.get('count')}, oldest={hist.get('oldest')}, newest={hist.get('newest')}")

        # Pause
        query(port, 'pause')
        time.sleep(0.2)

        # Try get_frame for the newest frame
        newest = hist.get('newest', 0)
        gf = query(port, 'get_frame', frame=newest)
        if gf.get('ok'):
            print(f"  get_frame({newest}): OK, frame_number={gf.get('frame')}")
            print(f"    CPU: A={gf['cpu']['A']}, X={gf['cpu']['X']}")
            print(f"    PPU: ctrl={gf['ppu']['ctrl']}, mask={gf['ppu']['mask']}")
            if 'mapper' in gf:
                m = gf['mapper']
                print(f"    Mapper: type={m.get('type')}, mmc3_regs={m.get('mmc3_regs', 'N/A')}")
        else:
            print(f"  get_frame({newest}): ERROR: {gf.get('error')}")
            # Try a few other frames
            for try_f in [newest-1, newest-10, newest-100, 100, 50, 10]:
                if try_f >= hist.get('oldest', 0):
                    gf2 = query(port, 'get_frame', frame=try_f)
                    status = "OK" if gf2.get('ok') else gf2.get('error', '?')
                    print(f"    get_frame({try_f}): {status}")

        # Try timeseries for a small range
        start = max(hist.get('oldest', 0), newest - 10)
        ts = query(port, 'frame_timeseries', start=start, end=newest)
        if ts.get('ok'):
            entries = [e for e in ts.get('ts', []) if e is not None]
            print(f"  timeseries({start}-{newest}): {len(entries)} entries")
            for e in entries[:3]:
                print(f"    frame {e.get('f')}: a={e.get('a')}, ctrl={e.get('ctrl')}, gd={e.get('gd','')[:8]}...")
        else:
            print(f"  timeseries: ERROR: {ts.get('error')}")

        # Continue
        query(port, 'continue')
    except Exception as ex:
        print(f"\n{label}: FAILED - {ex}")
