"""Focused diff: $31 $46 $F4 $F5 + mapper state at frames around A-press."""
import socket, json, sys

def s(p, o, t=30):
    sk = socket.socket(); sk.settimeout(t); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        c = sk.recv(1 << 20)
        if not c: break
        b += c
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

def fr(p, frame, addr, n):
    return s(p, {"cmd": "read_frame_ram", "frame": frame, "addr": f"{addr:04X}", "len": n}).get("hex", "??")

# Look at frames around A-press (2150) at fine granularity
KEY_ADDRS = [
    ("$31 game_mode", 0x31, 1),
    ("$46 sub_mode", 0x46, 1),
    ("$22 stage", 0x22, 1),
    ("$F4 prg_r6", 0xF4, 1),
    ("$F5 prg_r7", 0xF5, 1),
    ("$F6 bksw", 0xF6, 1),
    ("$FE ppumask", 0xFE, 1),
    ("$FF nmi_en", 0xFF, 1),
    ("$80 ch0_st", 0x80, 4),
    ("$84 ch1_st", 0x84, 4),
    ("$88 ch2_st", 0x88, 4),
    ("$8C ch3_st", 0x8C, 4),
    ("$90 wr_idx", 0x90, 4),
    ("$93 dispatch", 0x93, 2),
    ("$9C IRQ", 0x9C, 2),
]

frames = [2148, 2149, 2150, 2152, 2155, 2160, 2165, 2168, 2170, 2175, 2180]

print(f"\n{'addr':<14}", end="")
for f in frames: print(f" {f:>6}", end="")
print()

for label, addr, n in KEY_ADDRS:
    for who, port in [("N", 4372), ("O", 4373)]:
        print(f"{label} {who:<3} ", end="")
        for f in frames:
            h = fr(port, f, addr, n)
            print(f" {h:>6}", end="")
        print()
    # Per-row diff marker line
    diffs = []
    for f in frames:
        nh = fr(4372, f, addr, n)
        oh = fr(4373, f, addr, n)
        diffs.append("  ----" if nh == oh else "  DIFF")
    print(f"{'':<14} ", end="")
    for d in diffs: print(f"{d:>6}", end="")
    print()
    print()
