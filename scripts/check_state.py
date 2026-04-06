"""Check game state on both ports, pause them, take screenshots."""
import socket, json, sys

def send(port, cmd):
    s = socket.socket()
    s.settimeout(5)
    s.connect(("127.0.0.1", port))
    s.send((json.dumps(cmd) + "\n").encode())
    d = s.recv(8192).decode().strip()
    s.close()
    return json.loads(d) if d else {}

for port, name in [(4372, "Native"), (4373, "Emulated")]:
    try:
        st = send(port, {"id": 1, "cmd": "mm3_state"})
        ppu = send(port, {"id": 1, "cmd": "ppu_state"})
        print(f"{name} (port {port}):")
        print(f"  game_mode={st.get('game_mode')} sub_mode={st.get('sub_mode')} stage={st.get('stage')}")
        print(f"  frame={st.get('frame')} lives={st.get('lives')}")
        print(f"  prg_r6={st.get('prg_r6')} prg_r7={st.get('prg_r7')}")
        print(f"  ppuctrl={ppu.get('ppuctrl')} ppumask={ppu.get('ppumask')}")
        print(f"  scroll=({ppu.get('scroll_x')},{ppu.get('scroll_y')})")
        # Pause
        send(port, {"id": 1, "cmd": "pause"})
        print(f"  PAUSED")
        # Screenshot
        send(port, {"id": 1, "cmd": "screenshot", "path": f"C:/temp/state_{name.lower()}.png"})
        print(f"  Screenshot saved")
    except Exception as e:
        print(f"{name}: ERROR - {e}")
