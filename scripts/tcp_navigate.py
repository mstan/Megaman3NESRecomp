"""Navigate MM3 step-by-step via TCP, learning game_mode values at each transition."""
import socket, json, time, sys

PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 4372

def send(cmd):
    s = socket.socket()
    s.settimeout(5)
    s.connect(("127.0.0.1", PORT))
    s.send((json.dumps(cmd) + "\n").encode())
    d = s.recv(8192).decode().strip()
    s.close()
    return json.loads(d) if d else {}

def state():
    st = send({"id": 1, "cmd": "mm3_state"})
    ppu = send({"id": 1, "cmd": "ppu_state"})
    print(f"  mode={st['game_mode']} sub={st['sub_mode']} stage={st['stage']} "
          f"frame={st['frame']} prg=({st['prg_r6']},{st['prg_r7']}) "
          f"ctrl=0x{ppu['ppuctrl']} mask=0x{ppu['ppumask']} "
          f"scroll=({ppu['scroll_x']},{ppu['scroll_y']})")
    return st

def press(buttons_hex, frames=3):
    send({"id": 1, "cmd": "set_input", "buttons": buttons_hex})
    send({"id": 1, "cmd": "continue"})
    time.sleep(frames / 60.0 + 0.1)
    send({"id": 1, "cmd": "pause"})
    send({"id": 1, "cmd": "clear_input"})
    time.sleep(0.05)

def wait_frames(n):
    send({"id": 1, "cmd": "continue"})
    time.sleep(n / 60.0 + 0.1)
    send({"id": 1, "cmd": "pause"})
    time.sleep(0.05)

def screenshot(name):
    send({"id": 1, "cmd": "screenshot", "path": f"C:/temp/{name}.png"})

print(f"=== TCP Navigate (port {PORT}) ===")
print("Current state:")
st = state()

# Step 1: Unpause and press START
print("\nPressing START on title screen...")
press("10", frames=3)
wait_frames(60)
print("After START + 60f wait:")
st = state()
screenshot("nav_after_start")

if st['game_mode'] == 0:
    # Maybe need more time
    print("Still mode 0, waiting more...")
    wait_frames(120)
    st = state()
    screenshot("nav_after_start_180")

# Step 2: Check if we're at stage select
print(f"\nCurrent mode: {st['game_mode']}")
if st['game_mode'] != 0:
    print("Game mode changed! Pressing UP to pick a boss...")
    press("08", frames=3)
    wait_frames(30)
    st = state()
    screenshot("nav_boss_picked")

    print("Pressing START to enter stage...")
    press("10", frames=3)
    wait_frames(30)
    st = state()
    screenshot("nav_stage_entry_30")

    # Wait for stage to load
    for i in range(10):
        wait_frames(60)
        st = state()
        screenshot(f"nav_stage_{i}")
        print(f"  Step {i}: mode={st['game_mode']} sub={st['sub_mode']}")
        if st['game_mode'] == 1:
            print("  IN STAGE!")
            break
else:
    print("Still at title. Trying again with longer wait...")
    wait_frames(300)
    st = state()
    print("After 300f:")
    state()
    press("10", frames=5)
    wait_frames(120)
    print("After START + 120f:")
    st = state()
    screenshot("nav_retry_after_start")
    if st['game_mode'] != 0:
        print("Game mode changed!")
        # Continue with stage select
        press("08", frames=3)
        wait_frames(30)
        press("10", frames=3)
        wait_frames(300)
        st = state()
        screenshot("nav_retry_stage")

print("\nFinal state:")
state()
print("Done.")
