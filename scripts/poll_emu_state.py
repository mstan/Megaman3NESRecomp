#!/usr/bin/env python3
"""Poll emulator state via one-shot TCP connections. One query per connection."""
import socket, json, time, sys

PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 4373

def query(cmd_dict):
    try:
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.settimeout(2.0)
        s.connect(('127.0.0.1', PORT))
        s.sendall(json.dumps(cmd_dict).encode() + b'\n')
        buf = b''
        while b'\n' not in buf:
            chunk = s.recv(8192)
            if not chunk: break
            buf += chunk
        s.close()
        idx = buf.index(b'\n')
        return json.loads(buf[:idx].decode())
    except:
        return None

def main():
    print(f"Polling port {PORT} every 1s. Ctrl+C to stop.\n")
    last_mode = -1
    while True:
        st = query({"id": 1, "cmd": "mm3_state"})
        ch = query({"id": 2, "cmd": "read_ram", "addr": "0x80", "len": 16})
        regs = query({"id": 3, "cmd": "get_registers"})
        stk = query({"id": 4, "cmd": "read_ram", "addr": "0x01F8", "len": 8})

        if not st:
            print("  [no connection]")
            time.sleep(1)
            continue

        frame = st.get('frame', '?')
        mode = st.get('game_mode', '?')
        sub = st.get('sub_mode', '?')
        sp = regs.get('S', '?') if regs else '?'

        ch_str = ""
        if ch and 'data' in ch:
            bs = bytes.fromhex(ch['data'])
            for c in range(4):
                o = c * 4
                ch_str += f" ch{c}={bs[o]}/{bs[o+1]}/${bs[o+2]:02X}/${bs[o+3]:02X}"

        stk_str = ""
        if stk and 'data' in stk:
            bs = bytes.fromhex(stk['data'])
            stk_str = " stk=" + ' '.join(f'{b:02X}' for b in bs)

        changed = " <<<" if mode != last_mode else ""
        last_mode = mode
        print(f"f={frame:>6} mode={mode} sub={sub:>3} S=${sp}{ch_str}{stk_str}{changed}")
        time.sleep(1)

if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        print("\nDone.")
