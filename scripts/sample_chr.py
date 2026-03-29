"""Sample CHR bank values over multiple frames."""
import socket, json, time

def send(cmd):
    s = socket.socket()
    s.settimeout(5)
    s.connect(("127.0.0.1", 4372))
    s.send((json.dumps(cmd) + "\n").encode())
    r = json.loads(s.recv(8192).decode().strip())
    s.close()
    return r

for i in range(20):
    r1b = send({"id": 1, "cmd": "read_ram", "addr": "1B", "len": 1})
    rbanks = send({"id": 1, "cmd": "read_ram", "addr": "E8", "len": 6})
    rf0 = send({"id": 1, "cmd": "read_ram", "addr": "F0", "len": 1})
    state = send({"id": 1, "cmd": "mm3_state"})
    print(f'f={state["frame"]} $1B={r1b["hex"]} CHR={rbanks["hex"]} $F0={rf0["hex"]}')
    time.sleep(0.05)
