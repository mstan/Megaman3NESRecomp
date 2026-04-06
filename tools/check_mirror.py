"""Check Nestopia's actual mirroring state at stage select."""
import socket, json, time, subprocess, os

def cmd(port, c, **kw):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(10)
    s.connect(('127.0.0.1', port))
    s.sendall((json.dumps({'cmd': c, **kw}) + '\n').encode())
    d = b''
    while True:
        ch = s.recv(65536)
        if not ch: break
        d += ch
        try:
            json.loads(d.decode())
            break
        except:
            continue
    s.close()
    return json.loads(d.decode())

GAME_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EXE = os.path.join(GAME_DIR, "build", "Release", "MegaMan3Recomp.exe")
ROM = os.path.join(GAME_DIR, "Mega-Man 3 # NES.NES")

port = int(__import__('sys').argv[1]) if len(__import__('sys').argv) > 1 else 4373
mode = "EMULATED" if port == 4373 else "NATIVE"
extra = ["--emulated"] if port == 4373 else []

proc = subprocess.Popen(
    [EXE, ROM] + extra + ["--script", "C:/temp/mirror_check.txt"],
    stdout=open(f"C:/temp/{mode.lower()}_mirror.txt", "w"),
    stderr=subprocess.STDOUT, cwd=GAME_DIR)

# Wait for stage select
for i in range(60):
    time.sleep(1)
    try:
        r = cmd(port, 'ping')
        f = r.get('frame', 0)
        if f > 3100:
            print(f"[{mode}] At frame {f}")
            break
    except:
        pass

# Query states
for c in ['mapper_state', 'mirror_debug', 'ppu_state', 'mm3_state']:
    try:
        r = cmd(port, c)
        print(f"\n{c}: {json.dumps(r, indent=2)}")
    except Exception as e:
        print(f"\n{c}: ERROR {e}")

# Nametable dump - check first 32 bytes of each nametable
for addr, name in [('0x2000', 'NT0'), ('0x2400', 'NT1'), ('0x2800', 'NT2'), ('0x2C00', 'NT3')]:
    try:
        r = cmd(port, 'read_ppu', addr=addr, len=32)
        print(f"\n{name} ({addr}): {r.get('hex', r.get('data', '??'))}")
    except Exception as e:
        print(f"\n{name}: ERROR {e}")

cmd(port, 'quit')
time.sleep(1)
try: proc.kill()
except: pass
print("\nDone.")
