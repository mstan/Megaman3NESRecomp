"""Compare PPU state between native (4372) and emulated (4373)."""
import socket, json

def send(port, cmd):
    s = socket.socket()
    s.settimeout(5)
    s.connect(("127.0.0.1", port))
    s.send((json.dumps(cmd) + "\n").encode())
    r = json.loads(s.recv(8192).decode().strip())
    s.close()
    return r

# PPU state
n_ppu = send(4372, {"id": 1, "cmd": "ppu_state"})
e_ppu = send(4373, {"id": 1, "cmd": "ppu_state"})
print(f"=== PPU State ===")
print(f"  Native:   ctrl={n_ppu['ppuctrl']} mask={n_ppu['ppumask']} scroll=({n_ppu['scroll_x']},{n_ppu['scroll_y']}) spr0={n_ppu['spr0_split']}")
print(f"  Emulated: ctrl={e_ppu['ppuctrl']} mask={e_ppu['ppumask']} scroll=({e_ppu['scroll_x']},{e_ppu['scroll_y']}) spr0={e_ppu['spr0_split']}")

# Palette
n_pal = send(4372, {"id": 1, "cmd": "read_ppu", "addr": "3F00", "len": 32})
e_pal = send(4373, {"id": 1, "cmd": "read_ppu", "addr": "3F00", "len": 32})
print(f"\n=== Palette ===")
print(f"  Native:   {n_pal['hex']}")
print(f"  Emulated: {e_pal['hex']}")
match = "MATCH" if n_pal['hex'] == e_pal['hex'] else "DIFFER"
print(f"  {match}")

# CHR at $0000 (first 256 bytes - sprites usually)
n_chr0 = send(4372, {"id": 1, "cmd": "read_ppu", "addr": "0000", "len": 256})
e_chr0 = send(4373, {"id": 1, "cmd": "read_ppu", "addr": "0000", "len": 256})
match0 = "MATCH" if n_chr0['hex'] == e_chr0['hex'] else "DIFFER"
print(f"\n=== CHR $0000-$00FF === {match0}")
if match0 == "DIFFER":
    # find first diff byte
    for i in range(256):
        nb = n_chr0['hex'][i*2:i*2+2]
        eb = e_chr0['hex'][i*2:i*2+2]
        if nb != eb:
            print(f"  First diff at offset {i}: native={nb} emu={eb}")
            break

# CHR at $1000 (first 256 bytes - BG usually)
n_chr1 = send(4372, {"id": 1, "cmd": "read_ppu", "addr": "1000", "len": 256})
e_chr1 = send(4373, {"id": 1, "cmd": "read_ppu", "addr": "1000", "len": 256})
match1 = "MATCH" if n_chr1['hex'] == e_chr1['hex'] else "DIFFER"
print(f"\n=== CHR $1000-$10FF === {match1}")
if match1 == "DIFFER":
    for i in range(256):
        nb = n_chr1['hex'][i*2:i*2+2]
        eb = e_chr1['hex'][i*2:i*2+2]
        if nb != eb:
            print(f"  First diff at offset {i}: native={nb} emu={eb}")
            break

# Nametable 0
n_nt0 = send(4372, {"id": 1, "cmd": "read_ppu", "addr": "2000", "len": 256})
e_nt0 = send(4373, {"id": 1, "cmd": "read_ppu", "addr": "2000", "len": 256})
matchnt = "MATCH" if n_nt0['hex'] == e_nt0['hex'] else "DIFFER"
print(f"\n=== Nametable $2000-$20FF === {matchnt}")
if matchnt == "DIFFER":
    diffs = 0
    for i in range(256):
        nb = n_nt0['hex'][i*2:i*2+2]
        eb = e_nt0['hex'][i*2:i*2+2]
        if nb != eb:
            if diffs < 5:
                print(f"  Diff at offset {i} ($20{i:02X}): native={nb} emu={eb}")
            diffs += 1
    print(f"  Total diffs: {diffs}/256")

# Compare full CHR space in chunks to find overall diff count
print(f"\n=== Full CHR $0000-$1FFF diff scan ===")
total_diff = 0
for base in range(0, 0x2000, 256):
    n = send(4372, {"id": 1, "cmd": "read_ppu", "addr": f"{base:04X}", "len": 256})
    e = send(4373, {"id": 1, "cmd": "read_ppu", "addr": f"{base:04X}", "len": 256})
    for i in range(256):
        if n['hex'][i*2:i*2+2] != e['hex'][i*2:i*2+2]:
            total_diff += 1
print(f"  CHR bytes differing: {total_diff}/8192")
