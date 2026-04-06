#!/usr/bin/env python3
"""Check TCP connectivity to both native and emulated debug servers."""
import socket
import json
import sys
import time

def tcp_query(port, cmd_obj, timeout=3):
    try:
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.settimeout(timeout)
        s.connect(('127.0.0.1', port))
        s.sendall((json.dumps(cmd_obj) + '\n').encode())
        data = b''
        while True:
            chunk = s.recv(4096)
            if not chunk:
                break
            data += chunk
            if b'\n' in data:
                break
        s.close()
        return json.loads(data.decode().strip())
    except Exception as e:
        return {"error": str(e)}

if __name__ == '__main__':
    for port in [4372, 4373]:
        name = "Native" if port == 4372 else "Emulated"
        result = tcp_query(port, {"id": 1, "cmd": "ping"})
        print(f"{name} ({port}): {json.dumps(result)}")
