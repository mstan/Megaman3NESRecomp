"""Check whether the FF90 probe actually mapped bank 11 and populated $C0-$CF."""
import socket, json
def s(p, o):
    sk = socket.socket(); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        b += sk.recv(1 << 16)
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

p = 4372
print("ping:", s(p, {"cmd": "ping"}))
print("\nKey bytes (after probe):")
for label, addr, n in [("$F4 prg_r6", "00F4", 1),
                         ("$F5 prg_r7", "00F5", 1),
                         ("$80-$8F",   "0080", 16),
                         ("$C0-$CF",   "00C0", 16),
                         ("$D0-$DF",   "00D0", 16),
                         ("$7C-$7F",   "007C", 4)]:
    r = s(p, {"cmd": "read_ram", "addr": addr, "len": n})
    print(f"  {label:>12}: {r.get('hex','??')}")

print("\nmm3_state:", s(p, {"cmd": "mm3_state"}))
print("mapper_state:", s(p, {"cmd": "mapper_state"}))
print("dispatch_miss_last:", s(p, {"cmd": "dispatch_miss_last"}))
