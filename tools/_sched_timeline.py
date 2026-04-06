#!/usr/bin/env python3
"""Show scheduler + game state timeline across frames."""
import socket, json, time

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
                raise ConnectionError()
            self._buf += chunk

    def rfr(self, frame, addr, length):
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
nat.cmd("pause")
emu.cmd("pause")
time.sleep(0.3)

nh = nat.cmd("history")
eh = emu.cmd("history")
max_f = min(nh['newest'], eh['newest'])
print(f"Scanning 0-{max_f}\n")

# Key frames: every 100 frames, plus dense around transitions
frames = list(range(0, min(max_f, 2000), 100))
# Add dense scan around known transitions: 1001, 1204, 1222, 1453, 1694
for center in [1001, 1200, 1450, 1500, 1694]:
    for delta in range(-5, 6):
        f = center + delta
        if 0 <= f <= max_f and f not in frames:
            frames.append(f)
frames.sort()

print(f"{'Frame':>6} {'N_gm':>4} {'E_gm':>4} {'N_sm':>4} {'E_sm':>4} {'Sched':>8} {'N_sched':>36} {'E_sched':>36}")
print("-" * 140)

prev_n_gm = prev_e_gm = -1
for f in frames:
    n_s = nat.rfr(f, 0x80, 16)
    e_s = emu.rfr(f, 0x80, 16)
    n_gm = nat.rfr(f, 0x31, 1)
    e_gm = emu.rfr(f, 0x31, 1)
    n_sm = nat.rfr(f, 0x46, 1)
    e_sm = emu.rfr(f, 0x46, 1)

    if any(x is None for x in [n_s, e_s, n_gm, e_gm, n_sm, e_sm]):
        continue

    match = "MATCH" if n_s == e_s else "DIFF"
    ngm, egm = n_gm[0], e_gm[0]
    nsm, esm = n_sm[0], e_sm[0]

    # Only print if something changed or it's a milestone
    interesting = (match == "DIFF" or ngm != egm or nsm != esm or
                   ngm != prev_n_gm or egm != prev_e_gm or
                   f % 500 == 0 or f in [0, 1, 10])
    if interesting:
        print(f"{f:>6} {ngm:>4X} {egm:>4X} {nsm:>4X} {esm:>4X} {match:>8} {n_s.hex():>36} {e_s.hex():>36}")
    prev_n_gm = ngm
    prev_e_gm = egm

nat.cmd("continue")
emu.cmd("continue")
nat.close()
emu.close()
