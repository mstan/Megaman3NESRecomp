"""Dump 6502 stack, RAM $60-$63, $80-$8F, and scheduler state at stage select."""
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

def read_bytes(port, addr_hex, length):
    r = send_cmd(port, 'dump_ram', addr=addr_hex, len=length)
    h = r.get('hex', '')
    return bytes.fromhex(h) if h else b''

GAME_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(GAME_DIR, "build", "Release", "MegaMan3Recomp.exe")
ROM = os.path.join(GAME_DIR, "Mega-Man 3 # NES.NES")

port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
mode = "NATIVE" if port == 4372 else "EMULATED"
extra_args = ["--emulated"] if port == 4373 else []

# Script: boot, turbo to stage select, then wait with turbo off
script = """\
TURBO ON
WAIT 2000
HOLD START
WAIT 2
RELEASE START
WAIT 1000
TURBO OFF
WAIT 6000
EXIT
"""

script_path = "C:/temp/dumpstack_input.txt"
os.makedirs("C:/temp", exist_ok=True)
with open(script_path, 'w') as f:
    f.write(script)

print(f"=== Launching {mode} (port {port}) ===")
proc = subprocess.Popen(
    [EXE, ROM] + extra_args + ["--script", script_path],
    stdout=open(f"C:/temp/{mode.lower()}_dumpstack.txt", "w"),
    stderr=subprocess.STDOUT,
    cwd=GAME_DIR
)

# Wait for TCP
time.sleep(3)
for i in range(30):
    try:
        r = send_cmd(port, 'ping')
        frame = r.get('frame', 0)
        print(f"[{mode}] Connected, frame={frame}")
        break
    except:
        time.sleep(1)

# Wait for stage select (frame > 800)
print("Waiting for stage select...")
for i in range(60):
    time.sleep(1)
    try:
        r = send_cmd(port, 'ping')
        frame = r.get('frame', 0)
        if frame > 800:
            print(f"At frame {frame}")
            break
    except:
        if proc.poll() is not None:
            print("Game exited!")
            sys.exit(1)

# Dump state
print(f"\n{'='*60}")
print(f"[{mode}] State Dump")
print(f"{'='*60}")

# CPU registers
r = send_cmd(port, 'get_registers')
print(f"\nCPU: A={r.get('A','?')} X={r.get('X','?')} Y={r.get('Y','?')} S={r.get('S','?')} P={r.get('P','?')}")
print(f"     bank={r.get('bank','?')}")

# Frame and mm3_state
r = send_cmd(port, 'mm3_state')
print(f"\nmm3_state: mode={r.get('game_mode','?')} sub={r.get('sub_mode','?')} frame={r.get('frame','?')}")
print(f"           R6={r.get('prg_r6','?')} R7={r.get('prg_r7','?')}")

# Scheduler state
r = send_cmd(port, 'sched_state')
print(f"\nsched_state: SP=${int(r.get('sp','$FF').replace('$',''),16):02X}")
for ch in r.get('channels', []):
    b82 = int(ch['b82'].replace('$',''), 16)
    b83 = int(ch['b83'].replace('$',''), 16)
    print(f"  ch{ch['ch']}: state={ch['state']} timer={ch['timer']} b82=${b82:02X} b83=${b83:02X} (addr=${b83:02X}{b82:02X})")

# Key RAM addresses
data = read_bytes(port, '0x60', 4)
if data:
    print(f"\nRAM $60-$63: {' '.join(f'{b:02X}' for b in data)}")

data = read_bytes(port, '0x80', 16)
if data:
    print(f"\nScheduler table $80-$8F:")
    for ch in range(4):
        off = ch * 4
        print(f"  ch{ch}: {' '.join(f'{data[off+i]:02X}' for i in range(4))}")

# 6502 stack ($100-$1FF)
data = read_bytes(port, '0x100', 256)
if data:
    sp_val = int(r.get('sp', '$FF').replace('$',''), 16)
    # Also get g_cpu.S
    regs = send_cmd(port, 'get_registers')
    cpu_s = int(regs.get('S', '0xFF'), 16)
    print(f"\n6502 Stack (SP={cpu_s:#04x}, top at ${0x100+cpu_s+1:04X}):")
    # Show stack from SP+1 to $1FF
    start = cpu_s + 1
    print(f"  Active stack ({0xFF - cpu_s} bytes from SP+1=${0x100+start:04X} to $01FF):")
    for i in range(start, min(start + 48, 256)):
        if (i - start) % 16 == 0:
            print(f"  ${0x100+i:04X}: ", end='')
        print(f"{data[i]:02X} ", end='')
        if (i - start) % 16 == 15:
            print()
    print()

# Coroutine info
try:
    r = send_cmd(port, 'coroutine_info')
    print(f"\nCoroutine info:")
    print(json.dumps(r, indent=2))
except:
    pass

# Mirror debug
try:
    r = send_cmd(port, 'mirror_debug')
    print(f"\nMirror debug:")
    print(json.dumps(r, indent=2))
except:
    pass

# Screenshot
try:
    send_cmd(port, 'screenshot', path=f'C:/temp/{mode.lower()}_stack.png')
    print(f"\nScreenshot saved")
except:
    pass

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
