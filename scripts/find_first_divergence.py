#!/usr/bin/env python3
"""
Find the FIRST frame where native and oracle game state diverge.
Compares zero-page RAM, game_data, and key addresses across a range of frames.
"""
import socket
import json
import time
import sys

NAT_PORT = 4372
EMU_PORT = 4373

class Client:
    def __init__(self, name, port):
        self.name = name
        self.port = port
        self.sock = None
        self.buf = b''

    def connect(self):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.settimeout(5)
        self.sock.connect(('127.0.0.1', self.port))
        time.sleep(0.1)
        # drain
        self.sock.setblocking(False)
        try: self.sock.recv(4096)
        except: pass
        self.sock.setblocking(True)
        self.sock.settimeout(5)

    def cmd(self, d):
        self.sock.sendall(json.dumps(d).encode() + b'\n')
        self.buf = b''
        while b'\n' not in self.buf:
            chunk = self.sock.recv(8192)
            if not chunk: return None
            self.buf += chunk
        idx = self.buf.index(b'\n')
        line = self.buf[:idx]
        self.buf = self.buf[idx+1:]
        return json.loads(line.decode())

    def close(self):
        if self.sock: self.sock.close()


def read_ram(c, addr, length):
    r = c.cmd({"cmd": "read_ram", "addr": hex(addr), "len": length})
    if r and 'data' in r:
        return bytes.fromhex(r['data'])
    return None

def get_mm3_state(c):
    return c.cmd({"cmd": "mm3_state"})

def get_frame(c):
    r = c.cmd({"cmd": "ping"})
    return r.get("frame", -1) if r else -1

def get_sched(c):
    return c.cmd({"cmd": "sched_state"})

def pause(c):
    return c.cmd({"cmd": "pause"})

def cont(c):
    return c.cmd({"cmd": "continue"})

def run_to(c, frame):
    return c.cmd({"cmd": "run_to_frame", "frame": frame})

def read_ppu(c, addr, length):
    return c.cmd({"cmd": "read_ppu", "addr": hex(addr), "len": length})

def get_mapper(c):
    return c.cmd({"cmd": "mapper_state"})


def main():
    nat = Client("NAT", NAT_PORT)
    emu = Client("EMU", EMU_PORT)
    nat.connect()
    emu.connect()
    print("Connected to both ports")

    # Check current state
    nat_st = get_mm3_state(nat)
    emu_st = get_mm3_state(emu)
    print(f"NAT: frame={nat_st.get('frame','?')} mode={nat_st.get('game_mode','?')} sub={nat_st.get('sub_mode','?')}")
    print(f"EMU: frame={emu_st.get('frame','?')} mode={emu_st.get('game_mode','?')} sub={emu_st.get('sub_mode','?')}")

    # Wait for both to be past the initial navigation (frame > 950)
    # The script waits 600+4+30+4+300+4+4+15+4+4 = ~969 frames before stage loads
    print("\nWaiting for both to reach post-stage-select...")
    for i in range(120):
        time.sleep(1)
        nf = get_frame(nat)
        ef = get_frame(emu)
        ns = get_mm3_state(nat)
        es = get_mm3_state(emu)
        nm = ns.get('game_mode', '?')
        em = es.get('game_mode', '?')
        print(f"  NAT frame={nf} mode={nm} sub={ns.get('sub_mode','?')} | EMU frame={ef} mode={em} sub={es.get('sub_mode','?')}", end='\r')
        # Once both are past frame 970, proceed
        if nf > 970 and ef > 970:
            print()
            break
    else:
        print("\nTimeout waiting for stage select")
        return

    # Pause both at similar states
    print("\nPausing both...")
    pause(nat)
    pause(emu)
    time.sleep(0.3)

    nf = get_frame(nat)
    ef = get_frame(emu)
    print(f"  NAT paused at frame {nf}")
    print(f"  EMU paused at frame {ef}")

    # Now do a comprehensive state comparison at current frame
    print("\n" + "="*70)
    print("COMPREHENSIVE STATE COMPARISON")
    print("="*70)

    # Zero page comparison (addresses 0x00-0xFF)
    nat_zp = read_ram(nat, 0x00, 256)
    emu_zp = read_ram(emu, 0x00, 256)

    if nat_zp and emu_zp:
        diffs = []
        for i in range(256):
            if nat_zp[i] != emu_zp[i]:
                diffs.append((i, nat_zp[i], emu_zp[i]))
        print(f"\nZero-page diffs ({len(diffs)} of 256):")
        for addr, nv, ev in diffs[:50]:
            print(f"  ${addr:02X}: NAT=${nv:02X} EMU=${ev:02X}")
        if len(diffs) > 50:
            print(f"  ... and {len(diffs)-50} more")

    # Key game state addresses
    KEY_ADDRS = {
        0x18: "palette_dma_flag",
        0x1A: "oam_dma_flag",
        0x1E: "scroll_ctrl",
        0x31: "game_mode",
        0x32: "sub_mode",
        0x4F: "frame_counter",
        0x80: "sched_ch0_state",
        0x81: "sched_ch0_timer",
        0x84: "sched_ch1_state",
        0xFF: "ppuctrl_shadow",
        0xFE: "ppumask_shadow",
        0xFD: "ppuscroll_y",
        0xFC: "ppuscroll_x",
    }

    print(f"\nKey addresses:")
    for addr, name in sorted(KEY_ADDRS.items()):
        if nat_zp and emu_zp:
            nv = nat_zp[addr]
            ev = emu_zp[addr]
            marker = " <<< DIFF" if nv != ev else ""
            print(f"  ${addr:02X} ({name:20s}): NAT=${nv:02X} EMU=${ev:02X}{marker}")
        else:
            print(f"  ${addr:02X} ({name:20s}): NAT={'?' if not nat_zp else f'${nat_zp[addr]:02X}'} EMU={'?' if not emu_zp else f'${emu_zp[addr]:02X}'}")

    # Scheduler state
    print(f"\nScheduler state:")
    nat_sched = get_sched(nat)
    emu_sched = get_sched(emu)
    print(f"  NAT: {json.dumps(nat_sched, indent=4)}")
    print(f"  EMU: {json.dumps(emu_sched, indent=4)}")

    # Mapper state
    print(f"\nMapper state:")
    nat_map = get_mapper(nat)
    emu_map = get_mapper(emu)
    print(f"  NAT: {json.dumps(nat_map, indent=4)}")
    print(f"  EMU: {json.dumps(emu_map, indent=4)}")

    # PPU palette
    nat_pal = read_ppu(nat, 0x3F00, 32)
    emu_pal = read_ppu(emu, 0x3F00, 32)
    if nat_pal and emu_pal and 'data' in nat_pal and 'data' in emu_pal:
        np = bytes.fromhex(nat_pal['data'])
        ep = bytes.fromhex(emu_pal['data'])
        print(f"\nPPU palette:")
        print(f"  NAT: {' '.join(f'{b:02X}' for b in np)}")
        print(f"  EMU: {' '.join(f'{b:02X}' for b in ep)}")

    # Shadow palette at $0600
    nat_sp = read_ram(nat, 0x0600, 32)
    emu_sp = read_ram(emu, 0x0600, 32)
    if nat_sp and emu_sp:
        print(f"\nShadow palette ($0600):")
        print(f"  NAT: {' '.join(f'{b:02X}' for b in nat_sp)}")
        print(f"  EMU: {' '.join(f'{b:02X}' for b in emu_sp)}")

    # RAM $0200-$02FF (OAM shadow)
    nat_oam = read_ram(nat, 0x0200, 256)
    emu_oam = read_ram(emu, 0x0200, 256)
    if nat_oam and emu_oam:
        nat_nonff = sum(1 for b in nat_oam if b != 0xFF)
        emu_nonff = sum(1 for b in emu_oam if b != 0xFF)
        print(f"\nOAM shadow ($0200-$02FF) non-FF bytes: NAT={nat_nonff} EMU={emu_nonff}")

    # Now let's step through frames and find first divergence
    # First, find the frame where game_mode goes to 1 (stage select entered) on both
    # Then compare frame by frame from there

    # Let's check more of RAM too - $0300-$07FF
    print(f"\nRAM $0300-$03FF diffs:")
    nat_r3 = read_ram(nat, 0x0300, 256)
    emu_r3 = read_ram(emu, 0x0300, 256)
    if nat_r3 and emu_r3:
        diffs_3 = [(i, nat_r3[i], emu_r3[i]) for i in range(256) if nat_r3[i] != emu_r3[i]]
        print(f"  {len(diffs_3)} diffs")
        for addr, nv, ev in diffs_3[:20]:
            print(f"    ${0x300+addr:04X}: NAT=${nv:02X} EMU=${ev:02X}")

    print(f"\nRAM $0700-$07FF diffs:")
    nat_r7 = read_ram(nat, 0x0700, 256)
    emu_r7 = read_ram(emu, 0x0700, 256)
    if nat_r7 and emu_r7:
        diffs_7 = [(i, nat_r7[i], emu_r7[i]) for i in range(256) if nat_r7[i] != emu_r7[i]]
        print(f"  {len(diffs_7)} diffs")
        for addr, nv, ev in diffs_7[:20]:
            print(f"    ${0x700+addr:04X}: NAT=${nv:02X} EMU=${ev:02X}")

    # Now do frame-by-frame stepping to find first divergence
    # We want to find the earliest divergence, so step from a common game state
    # Let's use frame_timeseries if available
    print("\n" + "="*70)
    print("FRAME-BY-FRAME DIVERGENCE SEARCH")
    print("="*70)

    # Try frame_timeseries to check historical data
    # Query the ring buffer for frame_data across a range
    nat_ts = nat.cmd({"cmd": "frame_timeseries", "start_frame": max(0, nf - 200), "count": 200,
                       "addrs": ["18", "31", "32", "4F", "80", "FF", "FE"]})
    emu_ts = emu.cmd({"cmd": "frame_timeseries", "start_frame": max(0, ef - 200), "count": 200,
                       "addrs": ["18", "31", "32", "4F", "80", "FF", "FE"]})

    if nat_ts and emu_ts:
        print(f"\nTimeseries data available:")
        print(f"  NAT: {len(nat_ts.get('frames', []))} frames")
        print(f"  EMU: {len(emu_ts.get('frames', []))} frames")

        # Find matching frames by game_mode transitions
        nat_frames = nat_ts.get('frames', [])
        emu_frames = emu_ts.get('frames', [])

        if nat_frames and emu_frames:
            print(f"\n  NAT last 20 frames (addr values):")
            for f in nat_frames[-20:]:
                vals = f.get('values', {})
                print(f"    frame {f.get('frame','?')}: " +
                      ' '.join(f"${k}={v}" for k, v in sorted(vals.items())))

            print(f"\n  EMU last 20 frames (addr values):")
            for f in emu_frames[-20:]:
                vals = f.get('values', {})
                print(f"    frame {f.get('frame','?')}: " +
                      ' '.join(f"${k}={v}" for k, v in sorted(vals.items())))
    else:
        print(f"\nTimeseries response:")
        print(f"  NAT: {json.dumps(nat_ts)[:200]}")
        print(f"  EMU: {json.dumps(emu_ts)[:200]}")

    # Check bail_trace for any events
    print("\n" + "="*70)
    print("BAIL TRACE")
    print("="*70)
    bail = nat.cmd({"cmd": "bail_trace"})
    if bail:
        events = bail.get('events', [])
        print(f"  {len(events)} bail events recorded")
        for e in events[:20]:
            print(f"    frame={e.get('frame','?')} pc=${e.get('pc','?')} expected_s={e.get('expected_s','?')} actual_s={e.get('actual_s','?')} func={e.get('func','?')}")
    else:
        print(f"  Response: {bail}")

    # Check coroutine info
    print("\n" + "="*70)
    print("COROUTINE INFO")
    print("="*70)
    coro = nat.cmd({"cmd": "coroutine_info"})
    print(f"  NAT: {json.dumps(coro, indent=4)}")

    # Follow history on key addresses
    print("\n" + "="*70)
    print("FOLLOW HISTORY ($18, $4F)")
    print("="*70)

    # Set up follows if not already
    nat.cmd({"cmd": "follow", "addr": "18"})
    nat.cmd({"cmd": "follow", "addr": "4F"})
    emu.cmd({"cmd": "follow", "addr": "18"})
    emu.cmd({"cmd": "follow", "addr": "4F"})

    # Let them run for a bit then check
    cont(nat)
    cont(emu)
    time.sleep(3)
    pause(nat)
    pause(emu)
    time.sleep(0.3)

    for port_name, c in [("NAT", nat), ("EMU", emu)]:
        h18 = c.cmd({"cmd": "follow_history", "addr": "18"})
        h4f = c.cmd({"cmd": "follow_history", "addr": "4F"})
        print(f"\n  [{port_name}] $18 writes: {len(h18.get('writes',[])) if h18 else '?'}")
        if h18 and h18.get('writes'):
            for w in h18['writes'][:10]:
                print(f"    frame={w.get('frame','?')} val={w.get('value','?')} func={w.get('func','?')}")
        print(f"  [{port_name}] $4F writes: {len(h4f.get('writes',[])) if h4f else '?'}")
        if h4f and h4f.get('writes'):
            for w in h4f['writes'][:10]:
                print(f"    frame={w.get('frame','?')} val={w.get('value','?')} func={w.get('func','?')}")

    nf2 = get_frame(nat)
    ef2 = get_frame(emu)
    print(f"\nFinal: NAT frame={nf2}, EMU frame={ef2}")

    # Final snapshot
    nat_st2 = get_mm3_state(nat)
    emu_st2 = get_mm3_state(emu)
    print(f"NAT final: {json.dumps({k:v for k,v in nat_st2.items() if k != 'id'})}")
    print(f"EMU final: {json.dumps({k:v for k,v in emu_st2.items() if k != 'id'})}")

    nat.close()
    emu.close()

if __name__ == '__main__':
    main()
