"""Navigate to gameplay and check IRQ vector at $9C."""
import socket, json, time

def send(cmd):
    s = socket.socket()
    s.settimeout(5)
    s.connect(("127.0.0.1", 4372))
    s.send((json.dumps(cmd) + "\n").encode())
    r = json.loads(s.recv(8192).decode().strip())
    s.close()
    return r

def press(buttons, hold=0.1, wait=2):
    send({"id": 1, "cmd": "set_input", "buttons": buttons})
    time.sleep(hold)
    send({"id": 1, "cmd": "clear_input"})
    time.sleep(wait)

# Check initial IRQ vector
r = send({"id": 1, "cmd": "read_ram", "addr": "9C", "len": 2})
print(f"Title screen IRQ vector: {r['hex']}")

# Press START
print("Pressing START...")
press("10", wait=3)

r = send({"id": 1, "cmd": "read_ram", "addr": "9C", "len": 2})
state = send({"id": 1, "cmd": "mm3_state"})
print(f"After START - IRQ vec: {r['hex']}, mode={state['game_mode']}")

# Press START again
print("Pressing START again...")
press("10", wait=3)

r = send({"id": 1, "cmd": "read_ram", "addr": "9C", "len": 2})
state = send({"id": 1, "cmd": "mm3_state"})
print(f"After 2nd START - IRQ vec: {r['hex']}, mode={state['game_mode']}")

# Press A to select stage
print("Pressing A...")
press("80", wait=5)

r = send({"id": 1, "cmd": "read_ram", "addr": "9C", "len": 2})
state = send({"id": 1, "cmd": "mm3_state"})
print(f"In stage - IRQ vec: {r['hex']}, mode={state['game_mode']} stage={state['stage']}")

# Check a few more times as stage loads
for i in range(3):
    time.sleep(2)
    r = send({"id": 1, "cmd": "read_ram", "addr": "9C", "len": 2})
    state = send({"id": 1, "cmd": "mm3_state"})
    print(f"  +{(i+1)*2}s: IRQ vec: {r['hex']}, mode={state['game_mode']}")
