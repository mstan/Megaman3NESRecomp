"""Trace RAM $60 and $61 on native build with follows from boot.
Uses WAIT_RAM8 script command to reliably reach stage select."""
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

def read_byte(port, addr_hex):
    r = send_cmd(port, 'read_ram', addr=addr_hex, len=1)
    h = r.get('hex', '')
    return int(h, 16) if h else -1

GAME_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(GAME_DIR, "build", "Release", "MegaMan3Recomp.exe")
ROM = os.path.join(GAME_DIR, "Mega-Man 3 # NES.NES")

port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
mode = "NATIVE" if port == 4372 else "EMULATED"
extra_args = ["--emulated"] if port == 4373 else []

# Script: 5 non-turbo frames for TCP connection, then turbo to stage select
# Use WAIT_RAM8 to wait for NMI enable (game is booted)
script = """\
WAIT 5
LOG boot_wait
TURBO ON
WAIT_RAM8 FF 88
LOG nmi_enabled
WAIT 200
LOG opening_phase
HOLD START
WAIT 2
RELEASE START
WAIT 500
LOG after_start
SCREENSHOT C:/temp/{mode}_trace61.png
TURBO OFF
WAIT 600
EXIT
""".replace("{mode}", mode.lower())

script_path = "C:/temp/trace61_input.txt"
os.makedirs("C:/temp", exist_ok=True)
with open(script_path, 'w') as f:
    f.write(script)

print(f"=== Launching {mode} (port {port}) ===")
proc = subprocess.Popen(
    [EXE, ROM] + extra_args + ["--script", script_path],
    stdout=open(f"C:/temp/{mode.lower()}_trace61_stdout.txt", "w"),
    stderr=subprocess.STDOUT,
    cwd=GAME_DIR
)

time.sleep(1)
if not wait_for_port(port, mode):
    proc.kill()
    sys.exit(1)

# Set follows immediately
print("Setting follows...")
for addr, name in [('0x60', '$60'), ('0x61', '$61'), ('0x31', '$31'), ('0xF8', '$F8')]:
    r = send_cmd(port, 'follow', addr=addr)
    print(f"  {name}: ok={r.get('ok')}")

# Read initial values
print(f"\nInitial state:")
for addr, name in [('0x60', '$60'), ('0x61', '$61'), ('0x31', '$31'), ('0xF8', '$F8')]:
    val = read_byte(port, addr)
    print(f"  {name} = 0x{val:02x}" if val >= 0 else f"  {name} = ??")

# Poll periodically
print(f"\n=== Polling {mode} ===")
last_60 = -1
last_61 = -1
for i in range(120):
    time.sleep(0.5)
    try:
        f = send_cmd(port, 'ping').get('frame', 0)
        v60 = read_byte(port, '0x60')
        v61 = read_byte(port, '0x61')
        v31 = read_byte(port, '0x31')
        if v60 != last_60 or v61 != last_61:
            print(f"  F{f:>5}: $60=0x{v60:02x} $61=0x{v61:02x} $31=0x{v31:02x} {'<-- CHANGED' if v60 != last_60 or v61 != last_61 else ''}")
            last_60, last_61 = v60, v61
    except:
        # Game may have exited
        if proc.poll() is not None:
            print("  Game exited")
            break

# Dump follow histories
print(f"\n{'='*60}")
for addr, name in [('0x60', '$60'), ('0x61', '$61'), ('0x31', '$31'), ('0xF8', '$F8')]:
    try:
        r = send_cmd(port, 'follow_history', addr=addr, limit=100)
        entries = r.get('entries', [])
        total = r.get('total', 0)
        print(f"\n=== {name} writes ({total} total, showing {len(entries)}) ===")
        for e in entries:
            stack = e.get('stack', '')
            print(f"  F{e['f']:>5}: 0x{int(e.get('old','0'),16):02x} -> 0x{int(e.get('new','0'),16):02x}  stack: {stack}")
    except Exception as ex:
        print(f"\n=== {name}: ERROR {ex} ===")

# Also get mm3_state and sched_state
try:
    print("\n=== mm3_state ===")
    r = send_cmd(port, 'mm3_state')
    for k in ['game_mode', 'sub_mode', 'stage', 'frame', 'prg_r6', 'prg_r7']:
        print(f"  {k}: {r.get(k, '?')}")
except:
    pass

try:
    print("\n=== sched_state ===")
    r = send_cmd(port, 'sched_state')
    for ch in r.get('channels', []):
        print(f"  ch{ch['ch']}: state={ch['state']} b82=${int(ch['b82'].replace('$',''),16):02X} b83=${int(ch['b83'].replace('$',''),16):02X}")
except:
    pass

# Clean up
print("\nDone.")
try:
    send_cmd(port, 'quit')
except:
    pass
time.sleep(1)
try:
    proc.kill()
except:
    pass
