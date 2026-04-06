"""Diff PPU state between native (4372) and emulated (4373).

Compares: CHR banks, nametable, palette, PPU regs, scroll, mapper state, game state.
Prints byte-level diffs with addresses.
"""
import socket, json, sys, time

NATIVE_PORT = 4372
EMU_PORT = 4373

def send(port, cmd):
    s = socket.socket()
    s.settimeout(5)
    s.connect(("127.0.0.1", port))
    s.send((json.dumps(cmd) + "\n").encode())
    chunks = []
    while True:
        try:
            d = s.recv(16384)
            if not d:
                break
            chunks.append(d)
            if b"\n" in d:
                break
        except socket.timeout:
            break
    s.close()
    raw = b"".join(chunks).decode().strip()
    return json.loads(raw) if raw else {}

def hex_to_bytes(h):
    return bytes.fromhex(h)

def diff_hex(label, addr_base, native_hex, emu_hex, max_show=10):
    """Diff two hex strings, print first N differences."""
    nb = hex_to_bytes(native_hex)
    eb = hex_to_bytes(emu_hex)
    diffs = []
    for i in range(min(len(nb), len(eb))):
        if nb[i] != eb[i]:
            diffs.append((addr_base + i, nb[i], eb[i]))
    if not diffs:
        print(f"  {label}: MATCH ({len(nb)} bytes)")
        return 0
    print(f"  {label}: {len(diffs)} bytes DIFFER out of {len(nb)}")
    for addr, nv, ev in diffs[:max_show]:
        print(f"    ${addr:04X}: native=0x{nv:02X} emu=0x{ev:02X}")
    if len(diffs) > max_show:
        print(f"    ... and {len(diffs) - max_show} more")
    return len(diffs)

def main():
    print("=" * 60)
    print("PPU STATE DIFF: native (4372) vs emulated (4373)")
    print("=" * 60)

    # Game state
    try:
        n_gs = send(NATIVE_PORT, {"id": 1, "cmd": "mm3_state"})
        e_gs = send(EMU_PORT, {"id": 1, "cmd": "mm3_state"})
        print(f"\n--- Game State ---")
        print(f"  Native:   mode={n_gs.get('game_mode')} sub={n_gs.get('sub_mode')} stage={n_gs.get('stage')} frame={n_gs.get('frame')}")
        print(f"  Emulated: mode={e_gs.get('game_mode')} sub={e_gs.get('sub_mode')} stage={e_gs.get('stage')} frame={e_gs.get('frame')}")
    except Exception as e:
        print(f"  Game state query failed: {e}")

    # PPU registers
    try:
        n_ppu = send(NATIVE_PORT, {"id": 1, "cmd": "ppu_state"})
        e_ppu = send(EMU_PORT, {"id": 1, "cmd": "ppu_state"})
        print(f"\n--- PPU Registers ---")
        for key in ["ppuctrl", "ppumask", "scroll_x", "scroll_y"]:
            nv = n_ppu.get(key, "?")
            ev = e_ppu.get(key, "?")
            tag = "MATCH" if nv == ev else "DIFFER"
            print(f"  {key}: native={nv} emu={ev} [{tag}]")
    except Exception as e:
        print(f"  PPU state query failed: {e}")

    # Mapper state
    try:
        n_map = send(NATIVE_PORT, {"id": 1, "cmd": "mapper_state"})
        e_map = send(EMU_PORT, {"id": 1, "cmd": "mapper_state"})
        print(f"\n--- Mapper State ---")
        print(f"  Native:   {n_map}")
        print(f"  Emulated: {e_map}")
    except Exception as e:
        print(f"  Mapper state query failed: {e}")

    # Palette ($3F00-$3F1F)
    print(f"\n--- Palette ---")
    try:
        n_pal = send(NATIVE_PORT, {"id": 1, "cmd": "read_ppu", "addr": "3F00", "len": 32})
        e_pal = send(EMU_PORT, {"id": 1, "cmd": "read_ppu", "addr": "3F00", "len": 32})
        diff_hex("Palette $3F00-$3F1F", 0x3F00, n_pal["hex"], e_pal["hex"])
    except Exception as e:
        print(f"  Palette query failed: {e}")

    # CHR pattern tables ($0000-$1FFF) in 1KB chunks
    print(f"\n--- CHR Pattern Tables ---")
    total_chr_diff = 0
    first_chr_diff_addr = None
    for base in range(0, 0x2000, 0x400):
        try:
            n = send(NATIVE_PORT, {"id": 1, "cmd": "read_ppu", "addr": f"{base:04X}", "len": 1024})
            e = send(EMU_PORT, {"id": 1, "cmd": "read_ppu", "addr": f"{base:04X}", "len": 1024})
            nb = hex_to_bytes(n["hex"])
            eb = hex_to_bytes(e["hex"])
            chunk_diff = sum(1 for i in range(len(nb)) if nb[i] != eb[i])
            total_chr_diff += chunk_diff
            if chunk_diff > 0:
                tag = f"{chunk_diff} diffs"
                if first_chr_diff_addr is None:
                    for i in range(len(nb)):
                        if nb[i] != eb[i]:
                            first_chr_diff_addr = base + i
                            break
            else:
                tag = "MATCH"
            print(f"  CHR ${base:04X}-${base+0x3FF:04X}: {tag}")
        except Exception as e:
            print(f"  CHR ${base:04X} query failed: {e}")
    print(f"  Total CHR diffs: {total_chr_diff}/8192 bytes")
    if first_chr_diff_addr is not None:
        print(f"  First CHR diff at: ${first_chr_diff_addr:04X}")

    # Nametables ($2000-$2FFF) in 256-byte chunks
    print(f"\n--- Nametables ---")
    total_nt_diff = 0
    for base in range(0x2000, 0x3000, 0x100):
        try:
            n = send(NATIVE_PORT, {"id": 1, "cmd": "read_ppu", "addr": f"{base:04X}", "len": 256})
            e = send(EMU_PORT, {"id": 1, "cmd": "read_ppu", "addr": f"{base:04X}", "len": 256})
            d = diff_hex(f"NT ${base:04X}-${base+0xFF:04X}", base, n["hex"], e["hex"], max_show=3)
            total_nt_diff += d
        except Exception as e:
            print(f"  NT ${base:04X} query failed: {e}")
    print(f"  Total nametable diffs: {total_nt_diff} bytes")

    # Key RAM (game state, scheduler, scroll shadow)
    print(f"\n--- Key RAM ---")
    for label, addr, length in [
        ("Sched $80-$8F", 0x80, 16),
        ("Scroll shadow $FC-$FF", 0xFC, 4),
        ("PRG banks $F4-$F6", 0xF4, 3),
        ("PPU shadow $FD-$FF", 0xFD, 3),
        ("Game mode $30-$47", 0x30, 24),
        ("Stack page", 0x100, 256),
    ]:
        try:
            n = send(NATIVE_PORT, {"id": 1, "cmd": "read_ram", "addr": f"{addr:04X}", "len": length})
            e = send(EMU_PORT, {"id": 1, "cmd": "read_ram", "addr": f"{addr:04X}", "len": length})
            diff_hex(label, addr, n["hex"], e["hex"], max_show=5)
        except Exception as e:
            print(f"  {label} query failed: {e}")

    print(f"\n{'=' * 60}")
    print("DIFF COMPLETE")

if __name__ == "__main__":
    main()
