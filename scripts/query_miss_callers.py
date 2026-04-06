#!/usr/bin/env python3
"""Query the miss_callers TCP debug command."""
import socket, json, sys, time

def query(cmd, port=4372):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    time.sleep(0.2)
    s.sendall(json.dumps(cmd).encode() + b'\n')
    data = b''
    for _ in range(20):
        try:
            chunk = s.recv(16384)
            if not chunk:
                break
            data += chunk
            if b'\n' in data:
                break
        except socket.timeout:
            break
    s.close()
    return data.decode('utf-8', errors='replace').strip()

resp = query({"cmd": "miss_callers", "id": 1})
try:
    obj = json.loads(resp)
    print(f"Total captured: {obj.get('count', '?')}")
    for e in obj.get('entries', []):
        print(f"\n  addr={e['addr']} bank={e['bank']} frame={e['frame']}")
        for i, fn in enumerate(e.get('stack', [])):
            print(f"    [{i}] {fn}")
except json.JSONDecodeError:
    print("Raw response:", resp)
