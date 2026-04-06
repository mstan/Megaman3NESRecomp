"""Capture mapper state (CHR bank registers) across frames to detect flicker.
Pauses the game, steps frame-by-frame, records CHR banks each frame."""

import socket, json, time

PORT = 4372

def tcp_cmd(cmd):
    s = socket.socket()
    s.settimeout(3)
    s.connect(('127.0.0.1', PORT))
    s.sendall((json.dumps(cmd) + '\n').encode())
    data = s.recv(16384)
    s.close()
    return json.loads(data.decode())

print("Waiting 12s for game to reach stage...")
time.sleep(12)

state = tcp_cmd({'cmd': 'mm3_state'})
print(f"Game state: mode={state.get('game_mode')} frame={state.get('frame')}")

# Pause
tcp_cmd({'cmd': 'pause'})
print("Paused. Stepping frame-by-frame...")

print(f"{'Frame':>7} {'PPUCTRL':>8} {'PPUMASK':>8} {'ScrollXY':>10} "
      f"{'CHR_R0':>6} {'CHR_R1':>6} {'CHR_R2':>6} {'CHR_R3':>6} {'CHR_R4':>6} {'CHR_R5':>6} "
      f"{'PRG_R6':>6} {'PRG_R7':>6} {'BankCmd':>8} Notes")

prev_mapper = None
changes = 0

for i in range(40):
    # Get mapper state
    mapper = tcp_cmd({'cmd': 'mapper_state'})
    ppu = tcp_cmd({'cmd': 'ppu_state'})
    mm3 = tcp_cmd({'cmd': 'mm3_state'})

    frame = mm3.get('frame', '?')
    ppuctrl = ppu.get('ppuctrl', -1)
    ppumask = ppu.get('ppumask', -1)
    sx = ppu.get('ppuscroll_x', -1)
    sy = ppu.get('ppuscroll_y', -1)

    # Extract mapper registers
    r0 = mapper.get('chr_r0', mapper.get('R0', '?'))
    r1 = mapper.get('chr_r1', mapper.get('R1', '?'))
    r2 = mapper.get('chr_r2', mapper.get('R2', '?'))
    r3 = mapper.get('chr_r3', mapper.get('R3', '?'))
    r4 = mapper.get('chr_r4', mapper.get('R4', '?'))
    r5 = mapper.get('chr_r5', mapper.get('R5', '?'))
    r6 = mapper.get('prg_r6', mapper.get('R6', mm3.get('prg_r6', '?')))
    r7 = mapper.get('prg_r7', mapper.get('R7', mm3.get('prg_r7', '?')))
    bank_cmd = mapper.get('bank_select', mapper.get('command', '?'))

    notes = ""
    if prev_mapper and prev_mapper != mapper:
        notes = " CHANGED"
        changes += 1
    prev_mapper = mapper

    print(f"{frame:>7} {ppuctrl:>8} {ppumask:>8} ({sx:>3},{sy:>3}) "
          f"{r0:>6} {r1:>6} {r2:>6} {r3:>6} {r4:>6} {r5:>6} "
          f"{r6:>6} {r7:>6} {bank_cmd:>8}{notes}")

    # Step one frame
    tcp_cmd({'cmd': 'step'})
    time.sleep(0.02)

print(f"\nMapper changed on {changes}/40 frames")

# Also dump raw mapper response for one frame to see field names
print("\nRaw mapper_state response:")
print(json.dumps(tcp_cmd({'cmd': 'mapper_state'}), indent=2))

# Resume
tcp_cmd({'cmd': 'continue'})
print("Resumed.")
