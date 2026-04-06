"""Compare PPU state across a range of frames between native and emulated builds.
Reads CHR hash, nametable hash, palette, and PPU regs from both ports.
Looks for frames where native diverges from itself (flicker pattern)."""

import socket, json, time, sys, hashlib

NATIVE_PORT = 4372
EMU_PORT = 4373

def tcp_cmd(port, cmd, timeout=3):
    s = socket.socket()
    s.settimeout(timeout)
    s.connect(('127.0.0.1', port))
    s.sendall((json.dumps(cmd) + '\n').encode())
    chunks = []
    while True:
        try:
            data = s.recv(16384)
            if not data:
                break
            chunks.append(data)
            # Check if we have a complete JSON line
            full = b''.join(chunks)
            if b'\n' in full or len(full) > 4096:
                break
        except socket.timeout:
            break
    s.close()
    return json.loads(b''.join(chunks).decode())

def read_ppu_region(port, addr, length):
    """Read PPU memory region and return hex string."""
    r = tcp_cmd(port, {'cmd': 'read_ppu', 'addr': format(addr, '04X'), 'len': length})
    return r.get('hex', '')

def get_state(port):
    """Get comprehensive PPU state snapshot."""
    state = {}
    # PPU registers
    ppu = tcp_cmd(port, {'cmd': 'ppu_state'})
    state['ppuctrl'] = ppu.get('ppuctrl', -1)
    state['ppumask'] = ppu.get('ppumask', -1)
    state['ppuscroll_x'] = ppu.get('ppuscroll_x', -1)
    state['ppuscroll_y'] = ppu.get('ppuscroll_y', -1)

    # CHR pattern tables (first 256 bytes as sample)
    chr0 = read_ppu_region(port, 0x0000, 256)
    chr1 = read_ppu_region(port, 0x1000, 256)
    state['chr0_hash'] = hashlib.md5(chr0.encode()).hexdigest()[:8]
    state['chr1_hash'] = hashlib.md5(chr1.encode()).hexdigest()[:8]

    # Nametable 0 (first 256 bytes as sample)
    nt0 = read_ppu_region(port, 0x2000, 256)
    state['nt0_hash'] = hashlib.md5(nt0.encode()).hexdigest()[:8]

    # Palette
    pal = read_ppu_region(port, 0x3F00, 32)
    state['palette'] = pal

    # Game state
    mm3 = tcp_cmd(port, {'cmd': 'mm3_state'})
    state['frame'] = mm3.get('frame', -1)
    state['game_mode'] = mm3.get('game_mode', -1)

    return state

def main():
    print("Waiting 12 seconds for both builds to reach stage...")
    time.sleep(12)

    # Verify both are running
    try:
        n = tcp_cmd(NATIVE_PORT, {'cmd': 'mm3_state'})
        e = tcp_cmd(EMU_PORT, {'cmd': 'mm3_state'})
        print(f"Native:   frame={n.get('frame')} game_mode={n.get('game_mode')}")
        print(f"Emulated: frame={e.get('frame')} game_mode={e.get('game_mode')}")
    except Exception as ex:
        print(f"Connection failed: {ex}")
        return

    # Pause both
    tcp_cmd(NATIVE_PORT, {'cmd': 'pause'})
    tcp_cmd(EMU_PORT, {'cmd': 'pause'})
    print("Both paused.")

    # Take snapshots across 20 frames, stepping one frame at a time
    print("\n--- Native PPU state across 20 frames ---")
    print(f"{'Frame':>8} {'CHR0':>10} {'CHR1':>10} {'NT0':>10} {'Palette':>20} {'Scroll':>10}")

    prev_chr0 = None
    prev_nt0 = None
    flicker_count = 0

    for i in range(20):
        state = get_state(NATIVE_PORT)
        chr0_changed = prev_chr0 is not None and state['chr0_hash'] != prev_chr0
        nt0_changed = prev_nt0 is not None and state['nt0_hash'] != prev_nt0
        marker = ""
        if chr0_changed:
            marker += " CHR!"
            flicker_count += 1
        if nt0_changed:
            marker += " NT!"

        print(f"{state['frame']:>8} {state['chr0_hash']:>10} {state['chr1_hash']:>10} "
              f"{state['nt0_hash']:>10} {state['palette'][:20]:>20} "
              f"({state['ppuscroll_x']},{state['ppuscroll_y']}){marker}")

        prev_chr0 = state['chr0_hash']
        prev_nt0 = state['nt0_hash']

        # Step one frame
        tcp_cmd(NATIVE_PORT, {'cmd': 'step'})
        time.sleep(0.05)

    print(f"\nFlicker detected on {flicker_count}/20 frames")

    # Now get emulated state for comparison
    print("\n--- Emulated PPU state (single frame) ---")
    e_state = get_state(EMU_PORT)
    print(f"Frame={e_state['frame']} CHR0={e_state['chr0_hash']} CHR1={e_state['chr1_hash']} "
          f"NT0={e_state['nt0_hash']} Palette={e_state['palette'][:20]}")

    # Resume both
    tcp_cmd(NATIVE_PORT, {'cmd': 'continue'})
    tcp_cmd(EMU_PORT, {'cmd': 'continue'})

if __name__ == '__main__':
    main()
