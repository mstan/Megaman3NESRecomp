"""Drive both runners through Snake-Man path via set_input, watch $80 follower."""
import socket, json, sys, time

def s(p, o, t=30):
    sk = socket.socket(); sk.settimeout(t); sk.connect(("127.0.0.1", p))
    sk.sendall((json.dumps(o) + "\n").encode())
    b = b""
    while b"\n" not in b:
        c = sk.recv(1 << 20)
        if not c: break
        b += c
    sk.close()
    return json.loads(b.split(b"\n", 1)[0])

def both(o):
    return [s(p, o) for p in (4372, 4373)]

def status():
    return [s(p, {"cmd": "ping"}) for p in (4372, 4373)]

def wait_real(seconds):
    time.sleep(seconds)

def follow_count(p, addr):
    r = s(p, {"cmd": "follow_history", "addr": addr, "limit": 1})
    return r.get("total", 0)

if __name__ == "__main__":
    print("initial:", status())
    print("$80 writes so far:", [follow_count(p, "0080") for p in (4372, 4373)])
    print("$31 cur:", [s(p, {"cmd": "read_ram", "addr": "0031", "len": 1}) for p in (4372, 4373)])

    # Press START
    print("\n--- press START (3s) ---")
    both({"cmd": "set_input", "buttons": "10"})
    wait_real(0.3)
    both({"cmd": "set_input", "buttons": "00"})
    wait_real(2)
    print("after START:", status())
    print("$31 cur:", [s(p, {"cmd": "read_ram", "addr": "0031", "len": 1}) for p in (4372, 4373)])

    # Press RIGHT
    print("\n--- press RIGHT ---")
    both({"cmd": "set_input", "buttons": "01"})
    wait_real(0.3)
    both({"cmd": "set_input", "buttons": "00"})
    wait_real(1)

    # Press A
    print("\n--- press A ---")
    both({"cmd": "set_input", "buttons": "80"})
    wait_real(0.3)
    both({"cmd": "set_input", "buttons": "00"})
    wait_real(5)

    print("\nfinal:", status())
    print("$31 cur:", [s(p, {"cmd": "read_ram", "addr": "0031", "len": 1}) for p in (4372, 4373)])
    print("$80 writes total:", [follow_count(p, "0080") for p in (4372, 4373)])
