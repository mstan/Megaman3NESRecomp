"""Compare RAM $60 writes between native and emulated builds.
Launches both, sets follow on $60, waits for stage select, dumps history."""
import socket, json, sys, time, subprocess, os

def send_cmd(port, cmd, **kwargs):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(10)
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

def wait_for_port(port, label, timeout=30):
    for i in range(timeout):
        try:
            r = send_cmd(port, 'ping')
            print(f"[{label}] Connected, frame={r.get('frame', 0)}")
            return True
        except:
            time.sleep(1)
    print(f"[{label}] TIMEOUT waiting for connection")
    return False

def read_ram(port, addr):
    r = send_cmd(port, 'read_ram', addr=addr, len=1)
    data = r.get('data', '')
    return int(data, 16) if data else -1

GAME_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(GAME_DIR, "build", "Release", "MegaMan3Recomp.exe")
ROM = os.path.join(GAME_DIR, "Mega-Man 3 # NES.NES")

# Use the pre-written script at C:/temp/compare60_input.txt
SCRIPT_PATH = "C:/temp/compare60_input.txt"

print("=== Launching NATIVE (port 4372) ===")
native_proc = subprocess.Popen(
    [EXE, ROM, "--script", SCRIPT_PATH],
    stdout=open("C:/temp/native_60.txt", "w"),
    stderr=subprocess.STDOUT,
    cwd=GAME_DIR
)

time.sleep(1)
if not wait_for_port(4372, "NATIVE", timeout=15):
    print("Native failed to start, exiting")
    native_proc.kill()
    sys.exit(1)

# Set follow on $60 IMMEDIATELY before game progresses much
print("\n=== Setting follows (native) ===")
for addr, name in [('0x60', '$60'), ('0x31', '$31'), ('0x46', '$46'), ('0x29', '$29')]:
    r = send_cmd(4372, 'follow', addr=addr)
    print(f"  follow {name}: {json.dumps(r)}")

print("\n=== Launching EMULATED (port 4373) ===")
emu_proc = subprocess.Popen(
    [EXE, ROM, "--emulated", "--script", SCRIPT_PATH],
    stdout=open("C:/temp/emulated_60.txt", "w"),
    stderr=subprocess.STDOUT,
    cwd=GAME_DIR
)

time.sleep(1)
if not wait_for_port(4373, "EMULATED", timeout=15):
    print("Emulated failed to start, exiting")
    native_proc.kill()
    emu_proc.kill()
    sys.exit(1)

print("\n=== Setting follows (emulated) ===")
for addr, name in [('0x60', '$60'), ('0x31', '$31'), ('0x46', '$46'), ('0x29', '$29')]:
    r = send_cmd(4373, 'follow', addr=addr)
    print(f"  follow {name}: {json.dumps(r)}")

# Poll both until scripts complete or timeout
print("\n=== Polling state ===")
for i in range(90):
    time.sleep(1)
    try:
        nf = send_cmd(4372, 'ping').get('frame', 0)
    except:
        nf = -1
    try:
        ef = send_cmd(4373, 'ping').get('frame', 0)
    except:
        ef = -1

    if nf > 0 and ef > 0:
        try:
            n60 = read_ram(4372, '0x60')
            e60 = read_ram(4373, '0x60')
            print(f"  F{nf:>5}/{ef:>5}  $60: N=0x{n60:02x}/E=0x{e60:02x}")
        except:
            print(f"  F{nf:>5}/{ef:>5}  (read error)")

    # Check if native has exited
    if native_proc.poll() is not None and nf < 0:
        print("  Native exited early!")
        break

    # Both past frame 2500 = scripts should be near completion
    if nf > 2500 and ef > 2500:
        break

# Dump follow histories
print("\n" + "="*60)
for addr, name in [('0x60', '$60'), ('0x31', '$31'), ('0x46', '$46'), ('0x29', '$29')]:
    for port, label in [(4372, "NATIVE"), (4373, "EMULATED")]:
        try:
            r = send_cmd(port, 'follow_history', addr=addr, limit=200)
            entries = r.get('entries', [])
            total = r.get('total', 0)
            print(f"\n=== [{label}] {name} writes ({total} total, showing {len(entries)}) ===")
            for e in entries:
                stack = e.get('stack', '')
                print(f"  F{e['f']:>5}: {e.get('old','?')} -> {e.get('new','?')}  stack: {stack}")
        except Exception as ex:
            print(f"\n=== [{label}] {name}: ERROR {ex} ===")

# Take screenshots
print("\n=== Taking screenshots ===")
for port, label, path in [(4372, "NATIVE", "C:/temp/native_stagesel.png"),
                           (4373, "EMULATED", "C:/temp/emulated_stagesel.png")]:
    try:
        r = send_cmd(port, 'screenshot', path=path)
        print(f"  [{label}] screenshot: {json.dumps(r)}")
    except Exception as ex:
        print(f"  [{label}] screenshot error: {ex}")

# Clean up
print("\n=== Shutting down ===")
for port, label in [(4372, "NATIVE"), (4373, "EMULATED")]:
    try:
        send_cmd(port, 'quit')
    except:
        pass

time.sleep(2)
try: native_proc.kill()
except: pass
try: emu_proc.kill()
except: pass
print("Done.")
