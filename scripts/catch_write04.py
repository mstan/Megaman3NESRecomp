"""Launch native build, immediately set follow on $04, wait, dump history."""
import subprocess
import socket
import json
import time
import sys
import os

EXE = r"F:\Projects\nesrecomp-release\megaman3\build\Release\MegaMan3Recomp.exe"
ROM = r"F:\Projects\nesrecomp-release\megaman3\Mega-Man 3 # NES.NES"
PORT = 4372

def query(port, cmd, timeout=3):
    s = socket.socket()
    s.settimeout(timeout)
    s.connect(('localhost', port))
    s.sendall((json.dumps(cmd) + "\n").encode())
    data = b''
    while True:
        try:
            chunk = s.recv(8192)
            if not chunk:
                break
            data += chunk
            if b'\n' in data:
                break
        except:
            break
    s.close()
    return json.loads(data.split(b'\n')[0])

# Launch native build
print("Launching native build...")
proc = subprocess.Popen(
    [EXE, ROM],
    stdout=open("C:/temp/native_catch.txt", "w"),
    stderr=subprocess.STDOUT,
    cwd=os.path.dirname(EXE)
)

# Wait for TCP to be ready
print("Waiting for TCP...")
for attempt in range(30):
    time.sleep(0.2)
    try:
        r = query(PORT, {"id": 1, "cmd": "ping"})
        print(f"  Connected at frame {r.get('frame', '?')}")
        break
    except:
        pass
else:
    print("Failed to connect!")
    proc.kill()
    sys.exit(1)

# Set follow on $04 immediately
r = query(PORT, {"id": 1, "cmd": "follow", "addr": "04", "len": 1})
print(f"Follow set: {r}")

# Also follow $06 (func_FD11 writes $04=$06)
r2 = query(PORT, {"id": 2, "cmd": "follow", "addr": "06", "len": 1})
print(f"Follow $06 set: {r2}")

# Wait for frame 30+
print("Waiting for frames to pass...")
for i in range(50):
    time.sleep(0.2)
    r = query(PORT, {"id": 3, "cmd": "ping"})
    frame = r.get('frame', 0)
    if frame > 30:
        print(f"  At frame {frame}, checking history...")
        break

# Get follow history for $04
r = query(PORT, {"id": 4, "cmd": "follow_history", "addr": "0004"})
print(f"\n=== $04 FOLLOW HISTORY ===")
print(json.dumps(r, indent=2)[:5000])

# Get follow history for $06
r = query(PORT, {"id": 5, "cmd": "follow_history", "addr": "0006"})
print(f"\n=== $06 FOLLOW HISTORY ===")
print(json.dumps(r, indent=2)[:3000])

# Check current $04
r = query(PORT, {"id": 6, "cmd": "read_ram", "addr": "04", "len": 1})
print(f"\nCurrent $04: {r.get('hex', '??')}")

print("\nDone. Killing process...")
proc.kill()
