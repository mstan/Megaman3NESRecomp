"""Trace RAM $60 writes from boot.
Launch game paused, set follows, then run to stage select and dump."""
import socket, json, sys, time, subprocess, os

def send_cmd(port, cmd, timeout=10, **kwargs):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    s.connect(('127.0.0.1', port))
    msg = json.dumps({'cmd': cmd, **kwargs})
    s.sendall((msg + '\n').encode())
    data = b''
    while True:
        chunk = s.recv(65536)
        if not chunk:
            break
        data += chunk
        try:
            json.loads(data.decode())
            break
        except:
            continue
    s.close()
    return json.loads(data.decode())

def wait_for_port(port, label, timeout=20):
    for i in range(timeout):
        try:
            r = send_cmd(port, 'ping')
            print(f"[{label}] Connected, frame={r.get('frame', 0)}")
            return True
        except:
            time.sleep(1)
    print(f"[{label}] TIMEOUT")
    return False

GAME_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(GAME_DIR, "build", "Release", "MegaMan3Recomp.exe")
ROM = os.path.join(GAME_DIR, "Mega-Man 3 # NES.NES")

port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
mode = "NATIVE" if port == 4372 else "EMULATED"
extra_args = ["--emulated"] if port == 4373 else []

print(f"=== Launching {mode} (port {port}) ===")
proc = subprocess.Popen(
    [EXE, ROM] + extra_args,
    stdout=open(f"C:/temp/{mode.lower()}_trace60.txt", "w"),
    stderr=subprocess.STDOUT,
    cwd=GAME_DIR
)

time.sleep(1)
if not wait_for_port(port, mode):
    proc.kill()
    sys.exit(1)

# Pause immediately
print("Pausing...")
send_cmd(port, 'pause')

# Set follows on key addresses
print("Setting follows...")
for addr, name in [('0x60', '$60'), ('0x31', '$31'), ('0x46', '$46'), ('0x29', '$29')]:
    r = send_cmd(port, 'follow', addr=addr)
    print(f"  {name}: {r.get('ok', False)}")

# Read initial $60 value
r = send_cmd(port, 'read_ram', addr='0x0060', len=1)
print(f"Initial $60 = {r.get('data', '??')}")

# Resume and run to frame 600 (past Capcom logo, into opening)
print("\nRunning to frame 600 (opening cinematic)...")
send_cmd(port, 'continue')
send_cmd(port, 'run_to_frame', frame=600, timeout=30)
time.sleep(1)

r = send_cmd(port, 'read_ram', addr='0x0060', len=1)
f = send_cmd(port, 'ping').get('frame', 0)
print(f"Frame {f}: $60 = {r.get('data', '??')}")

# Run to frame 1500 (should be past title screen, into opening cinematic)
print("\nRunning to frame 1500...")
send_cmd(port, 'run_to_frame', frame=1500, timeout=30)
time.sleep(1)

r = send_cmd(port, 'read_ram', addr='0x0060', len=1)
f = send_cmd(port, 'ping').get('frame', 0)
print(f"Frame {f}: $60 = {r.get('data', '??')}")

# Press START to get past title screen
print("\nPressing START...")
send_cmd(port, 'set_input', buttons='0x10')
send_cmd(port, 'run_to_frame', frame=1510, timeout=30)
time.sleep(0.5)
send_cmd(port, 'clear_input')

# Run to frame 2500 (should be at stage select)
print("\nRunning to frame 2500...")
send_cmd(port, 'run_to_frame', frame=2500, timeout=30)
time.sleep(1)

r = send_cmd(port, 'read_ram', addr='0x0060', len=1)
f = send_cmd(port, 'ping').get('frame', 0)
print(f"Frame {f}: $60 = {r.get('data', '??')}")

# Dump follow histories
print(f"\n{'='*60}")
for addr, name in [('0x60', '$60'), ('0x31', '$31'), ('0x46', '$46'), ('0x29', '$29')]:
    r = send_cmd(port, 'follow_history', addr=addr, limit=200)
    entries = r.get('entries', [])
    total = r.get('total', 0)
    print(f"\n=== {name} writes ({total} total, showing {len(entries)}) ===")
    for e in entries:
        stack = e.get('stack', '')
        print(f"  F{e['f']:>5}: {e.get('old','?')} -> {e.get('new','?')}  stack: {stack}")

# Screenshot
print("\nTaking screenshot...")
send_cmd(port, 'screenshot', path=f'C:/temp/{mode.lower()}_trace60.png')

# Also dump mm3_state and sched_state for context
print("\n=== mm3_state ===")
r = send_cmd(port, 'mm3_state')
print(json.dumps(r, indent=2))

print("\n=== sched_state ===")
r = send_cmd(port, 'sched_state')
print(json.dumps(r, indent=2))

# Clean up
print("\nShutting down...")
try:
    send_cmd(port, 'quit')
except:
    pass
time.sleep(1)
try:
    proc.kill()
except:
    pass
print("Done.")
