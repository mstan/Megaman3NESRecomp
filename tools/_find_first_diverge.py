#!/usr/bin/env python3
"""
Find the first frame where scheduler state ($0080-$008F) diverges
between native and emulated. Also tracks game_mode ($31) and sub_mode ($46).
"""
import socket, json, time, sys

class Client:
    def __init__(self, port, label):
        self.port = port
        self.label = label
        self._sock = None
        self._buf = b""
        self._id = 1

    def connect(self):
        self._sock = socket.socket()
        self._sock.settimeout(10)
        self._sock.connect(('127.0.0.1', self.port))
        self._buf = b""

    def cmd(self, c, **kw):
        msg = {"cmd": c, "id": self._id}
        msg.update(kw)
        self._id += 1
        self._sock.sendall((json.dumps(msg) + "\n").encode())
        while True:
            idx = self._buf.find(b"\n")
            if idx >= 0:
                line = self._buf[:idx]
                self._buf = self._buf[idx+1:]
                if not line.strip():
                    continue
                r = json.loads(line)
                if "event" in r:
                    continue
                if r.get("id") == self._id - 1:
                    return r
            self._sock.settimeout(10)
            chunk = self._sock.recv(65536)
            if not chunk:
                raise ConnectionError(f"[{self.label}] closed")
            self._buf += chunk

    def read_frame_ram(self, frame, addr, length):
        r = self.cmd("read_frame_ram", frame=frame,
                     addr=f"0x{addr:04X}", **{"len": length})
        if not r.get("ok"):
            return None
        return bytes.fromhex(r.get("hex", ""))

    def close(self):
        if self._sock:
            self._sock.close()

nat = Client(4372, "native")
emu = Client(4373, "emu")
nat.connect()
emu.connect()

# Pause both
nat.cmd("pause")
emu.cmd("pause")
time.sleep(0.3)

# Get history ranges
nh = nat.cmd("history")
eh = emu.cmd("history")
print(f"Native ring: {nh['oldest']}-{nh['newest']}")
print(f"Emu ring: {eh['oldest']}-{eh['newest']}")

# Scan frames 0 to min(newest) looking for first scheduler divergence
max_frame = min(nh['newest'], eh['newest'])
print(f"Scanning frames 0 to {max_frame}...\n")

# Key addresses to compare
SCHED_ADDR = 0x80   # Scheduler table $80-$8F (16 bytes)
SCHED_LEN = 16
GAME_MODE = 0x31    # 1 byte
SUB_MODE = 0x46     # 1 byte

first_diverge = None
prev_match = True

# Scan in steps of 1 for the first 200 frames, then by 10, then by 1 around divergence
step = 1
frame = 0
diverge_frames = []

while frame <= max_frame:
    n_sched = nat.read_frame_ram(frame, SCHED_ADDR, SCHED_LEN)
    e_sched = emu.read_frame_ram(frame, SCHED_ADDR, SCHED_LEN)
    n_gm = nat.read_frame_ram(frame, GAME_MODE, 1)
    e_gm = emu.read_frame_ram(frame, GAME_MODE, 1)
    n_sm = nat.read_frame_ram(frame, SUB_MODE, 1)
    e_sm = emu.read_frame_ram(frame, SUB_MODE, 1)

    if n_sched is None or e_sched is None:
        frame += step
        continue

    match = (n_sched == e_sched)
    gm_match = (n_gm == e_gm)

    # Report transitions
    if match != prev_match:
        if not match:
            print(f"Frame {frame}: DIVERGE  sched: nat={n_sched.hex()} emu={e_sched.hex()}")
            print(f"  game_mode: nat=0x{n_gm[0]:02X} emu=0x{e_gm[0]:02X}  sub_mode: nat=0x{n_sm[0]:02X} emu=0x{e_sm[0]:02X}")
            if first_diverge is None:
                first_diverge = frame
            diverge_frames.append(frame)
        else:
            print(f"Frame {frame}: MATCH AGAIN")

    # Also report game_mode changes
    if frame > 0:
        n_gm_prev = nat.read_frame_ram(frame - 1, GAME_MODE, 1)
        if n_gm_prev and n_gm_prev != n_gm:
            print(f"  Frame {frame}: Native game_mode change 0x{n_gm_prev[0]:02X} -> 0x{n_gm[0]:02X}")
        e_gm_prev = emu.read_frame_ram(frame - 1, GAME_MODE, 1)
        if e_gm_prev and e_gm_prev != e_gm:
            print(f"  Frame {frame}: Emu game_mode change 0x{e_gm_prev[0]:02X} -> 0x{e_gm[0]:02X}")

    prev_match = match

    # Adaptive step size
    if frame < 200:
        step = 10
    elif first_diverge and frame > first_diverge + 100:
        break
    elif frame < 1500:
        step = 50
    else:
        step = 30
    frame += step

# If we found a coarse divergence, do a fine-grained scan around it
if first_diverge:
    print(f"\n--- Fine scan around first divergence (frame {first_diverge}) ---")
    scan_start = max(0, first_diverge - 60)
    scan_end = min(max_frame, first_diverge + 20)
    for f in range(scan_start, scan_end + 1):
        n_s = nat.read_frame_ram(f, SCHED_ADDR, SCHED_LEN)
        e_s = emu.read_frame_ram(f, SCHED_ADDR, SCHED_LEN)
        n_gm = nat.read_frame_ram(f, GAME_MODE, 1)
        e_gm = emu.read_frame_ram(f, GAME_MODE, 1)
        if n_s is None or e_s is None:
            continue
        match = "MATCH" if n_s == e_s else "DIFF"
        gm_str = f"gm=0x{n_gm[0]:02X}/0x{e_gm[0]:02X}" if n_gm and e_gm else ""
        if n_s != e_s:
            # Show which bytes differ
            diffs = []
            for i in range(SCHED_LEN):
                if n_s[i] != e_s[i]:
                    diffs.append(f"${SCHED_ADDR+i:02X}:n={n_s[i]:02X}/e={e_s[i]:02X}")
            print(f"  Frame {f:>5}: {match}  {gm_str}  {' '.join(diffs)}")
        elif f >= first_diverge - 5:
            print(f"  Frame {f:>5}: {match}  {gm_str}")
else:
    print("No scheduler divergence found in scanned range!")

# Also dump full RAM diff at the first divergence frame
if first_diverge:
    print(f"\n--- Full zero-page diff at frame {first_diverge} ---")
    n_zp = nat.read_frame_ram(first_diverge, 0, 256)
    e_zp = emu.read_frame_ram(first_diverge, 0, 256)
    if n_zp and e_zp:
        diffs = [(i, n_zp[i], e_zp[i]) for i in range(256) if n_zp[i] != e_zp[i]]
        print(f"  {len(diffs)} bytes differ in zero page:")
        for addr, nv, ev in diffs[:30]:
            print(f"    ${addr:02X}: native=0x{nv:02X} emu=0x{ev:02X}")
        if len(diffs) > 30:
            print(f"    ... and {len(diffs)-30} more")

nat.cmd("continue")
emu.cmd("continue")
nat.close()
emu.close()
