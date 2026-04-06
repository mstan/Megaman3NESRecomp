import socket, json, time

def cmd(port, c, **kw):
    s = socket.socket()
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    msg = json.dumps({'cmd': c, 'id': 1, **kw})
    s.sendall((msg + '\n').encode())
    d = b''
    while b'\n' not in d:
        d += s.recv(4096)
    s.close()
    return json.loads(d.decode().strip())

PORT = 4373

# The copyright screen should auto-advance after ~5 seconds (300 frames)
# If game_mode stays at 0 after 600+ frames, something is wrong

# Check if the game EVER gets past game_mode=0
# On real MM3, copyright -> title happens automatically
# Let's watch for a state change over 10 seconds
print("Watching emulated game state for 10 seconds...")
for i in range(20):
    r = cmd(PORT, 'mm3_state')
    gm = r.get('game_mode', -1)
    sm = r.get('sub_mode', -1)
    fr = r.get('frame', 0)
    r6 = r.get('prg_r6', 0)
    r7 = r.get('prg_r7', 0)
    print(f"  Frame {fr:>5}: game_mode={gm} sub_mode={sm} prg_r6={r6} prg_r7={r7}")
    if gm != 0:
        print("  >>> GAME MODE CHANGED!")
        break
    time.sleep(0.5)
else:
    print("  Game mode never changed — emulated is also stuck!")

# Check if this is an input issue — does copyright screen need START?
print("\nTrying to send START press...")
cmd(PORT, 'set_input', buttons='0x10')
time.sleep(1)
r = cmd(PORT, 'mm3_state')
print(f"After START: game_mode={r.get('game_mode')} sub_mode={r.get('sub_mode')}")
cmd(PORT, 'clear_input')
