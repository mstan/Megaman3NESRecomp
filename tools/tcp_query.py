#!/usr/bin/env python3
"""Quick TCP query tool for the debug server."""
import socket
import sys
import json

def query(port, cmd_dict, timeout=3):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(timeout)
    try:
        s.connect(("127.0.0.1", port))
        s.sendall((json.dumps(cmd_dict) + "\n").encode())
        data = b""
        while True:
            chunk = s.recv(4096)
            if not chunk:
                break
            data += chunk
            if b"\n" in data:
                break
        return data.decode().strip()
    finally:
        s.close()

if __name__ == "__main__":
    port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
    cmd = sys.argv[2] if len(sys.argv) > 2 else "a000_trace"
    result = query(port, {"cmd": cmd})
    # Pretty print JSON
    try:
        obj = json.loads(result)
        print(json.dumps(obj, indent=2))
    except:
        print(result)
