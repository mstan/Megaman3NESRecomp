"""Navigate MM3 from title screen to stage load via TCP debug server."""
import socket, json, time, sys

PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 4372

def send(cmd_dict):
    """Open a fresh connection for each command."""
    s = socket.socket()
    s.settimeout(5)
    s.connect(("127.0.0.1", PORT))
    s.send((json.dumps(cmd_dict) + "\n").encode())
    data = s.recv(8192).decode().strip()
    s.close()
    return json.loads(data) if data else {}

def press(buttons_hex, frames=2, wait=10):
    """Press buttons for N frames, then release and wait."""
    r = send({"id": 1, "cmd": "set_input", "buttons": buttons_hex})
    print(f"  set_input {buttons_hex}: {r}")
    time.sleep(frames / 60.0)
    r = send({"id": 1, "cmd": "clear_input"})
    time.sleep(wait / 60.0)

# Check current state
state = send({"id": 1, "cmd": "mm3_state"})
print(f"Initial state: mode={state['game_mode']} sub={state['sub_mode']} frame={state['frame']}")

# Press START to get past title screen
print("Pressing START...")
press("10", frames=2, wait=120)

state = send({"id": 1, "cmd": "mm3_state"})
print(f"After START: mode={state['game_mode']} sub={state['sub_mode']} frame={state['frame']}")

# If we're on stage select (mode should change), press START again to skip password
if state['game_mode'] != 0:
    print("Pressing START again (password screen skip)...")
    press("10", frames=2, wait=120)

    state = send({"id": 1, "cmd": "mm3_state"})
    print(f"After 2nd START: mode={state['game_mode']} sub={state['sub_mode']} stage={state['stage']} frame={state['frame']}")

# Press A to select stage
print("Pressing A to select stage...")
press("80", frames=2, wait=180)

state = send({"id": 1, "cmd": "mm3_state"})
print(f"After stage select: mode={state['game_mode']} sub={state['sub_mode']} stage={state['stage']} frame={state['frame']}")

# Check for divergences
failure = send({"id": 1, "cmd": "first_failure"})
print(f"First failure: {failure}")
