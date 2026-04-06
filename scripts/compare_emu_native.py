#!/usr/bin/env python3
"""
Compare emulator (Nestopia) vs native (recomp) state side-by-side.
Uses persistent TCP connections with proper line-buffered JSON parsing.
"""
import socket
import json
import time
import sys

EMU_PORT = 4373
NAT_PORT = 4372

class DebugClient:
    """Persistent TCP connection with line-buffered JSON parsing."""
    def __init__(self, name, port):
        self.name = name
        self.port = port
        self.sock = None
        self.buf = b''
        self.cmd_id = 0

    def connect(self):
        try:
            self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            self.sock.settimeout(3.0)
            self.sock.connect(('127.0.0.1', self.port))
            self.sock.setblocking(False)
            time.sleep(0.1)
            # Drain any initial data
            try:
                self.sock.recv(4096)
            except BlockingIOError:
                pass
            self.sock.setblocking(True)
            self.sock.settimeout(3.0)
            return True
        except ConnectionRefusedError:
            self.sock = None
            return False

    def _recv_line(self):
        """Receive one newline-terminated JSON response."""
        while b'\n' not in self.buf:
            try:
                chunk = self.sock.recv(8192)
                if not chunk:
                    return None
                self.buf += chunk
            except socket.timeout:
                return None
        idx = self.buf.index(b'\n')
        line = self.buf[:idx]
        self.buf = self.buf[idx+1:]
        return line

    def cmd(self, cmd_dict):
        if not self.sock:
            return None
        self.cmd_id += 1
        cmd_dict['id'] = self.cmd_id
        try:
            self.sock.sendall(json.dumps(cmd_dict).encode() + b'\n')
            line = self._recv_line()
            if line:
                return json.loads(line.decode())
            return None
        except Exception as e:
            return None

    def set_input(self, buttons_hex):
        return self.cmd({"cmd": "set_input", "buttons": buttons_hex})

    def clear_input(self):
        return self.cmd({"cmd": "clear_input"})

    def get_state(self):
        return self.cmd({"cmd": "mm3_state"})

    def get_registers(self):
        return self.cmd({"cmd": "get_registers"})

    def read_ram(self, addr, length):
        return self.cmd({"cmd": "read_ram", "addr": hex(addr), "len": length})

    def get_frame(self):
        r = self.cmd({"cmd": "ping"})
        return r.get("frame", -1) if r else -1

    def close(self):
        if self.sock:
            self.sock.close()
            self.sock = None


def wait_frames(n):
    time.sleep(n / 60.0)

def press_button(clients, buttons_hex, hold_frames=8):
    for c in clients:
        c.set_input(buttons_hex)
    wait_frames(hold_frames)
    for c in clients:
        c.clear_input()
    wait_frames(5)

def snapshot(clients, label):
    print(f"\n{'='*60}")
    print(f"  SNAPSHOT: {label}")
    print(f"{'='*60}")

    for c in clients:
        st = c.get_state()
        regs = c.get_registers()
        ch_raw = c.read_ram(0x80, 16)
        stk_raw = c.read_ram(0x01F0, 16)

        if not st:
            print(f"  [{c.name}] no response")
            continue

        sp_val = regs.get('S', '?') if regs else '?'
        print(f"  [{c.name}] frame={st.get('frame','?')} "
              f"mode={st.get('game_mode','?')} sub={st.get('sub_mode','?')} "
              f"r6={st.get('prg_r6','?')} r7={st.get('prg_r7','?')} "
              f"bsw={st.get('bank_switching','?')} S={sp_val}")

        if ch_raw and 'data' in ch_raw:
            raw = ch_raw['data']
            if isinstance(raw, str):
                bs = bytes.fromhex(raw)
                for ch in range(min(4, len(bs)//4)):
                    off = ch * 4
                    print(f"    ch{ch}: state={bs[off]:3d} timer={bs[off+1]:3d} "
                          f"b82=${bs[off+2]:02X} b83=${bs[off+3]:02X}")

        if stk_raw and 'data' in stk_raw:
            raw = stk_raw['data']
            if isinstance(raw, str):
                bs = bytes.fromhex(raw)
                hex_str = ' '.join(f'{b:02X}' for b in bs)
                print(f"    stack[$1F0-$1FF]: {hex_str}")

def main():
    emu = DebugClient("EMU", EMU_PORT)
    nat = DebugClient("NAT", NAT_PORT)

    print("Connecting...")
    emu_ok = emu.connect()
    nat_ok = nat.connect()
    print(f"  EMU: {'OK' if emu_ok else 'FAILED'}")
    print(f"  NAT: {'OK' if nat_ok else 'FAILED'}")

    if not emu_ok:
        print("ERROR: Emulated mode not running")
        sys.exit(1)

    clients = [emu]
    if nat_ok:
        clients.append(nat)

    snapshot(clients, "Initial")

    # The MM3 intro animation runs for ~8 seconds before accepting START
    print("\n--- Waiting 10s for intro animation ---")
    wait_frames(600)
    snapshot(clients, "Pre-START")

    # Press START repeatedly until game mode changes
    for attempt in range(5):
        print(f"\n--- Pressing START (attempt {attempt+1}) ---")
        press_button(clients, "0x10", hold_frames=8)
        wait_frames(60)
        snapshot(clients, f"After START #{attempt+1}")
        # Check if EMU advanced
        st = emu.get_state()
        if st and st.get('game_mode', 0) != 0:
            print("  ** EMU game mode changed! **")
            break

    # Try pressing A to select boss
    print("\n--- Pressing A (select boss) ---")
    press_button(clients, "0x80", hold_frames=8)

    # Monitor transition
    for i in range(10):
        wait_frames(60)
        snapshot(clients, f"Post-A +{i+1}s")

    for c in clients:
        c.close()

if __name__ == '__main__':
    main()
