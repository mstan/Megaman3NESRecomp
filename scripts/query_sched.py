#!/usr/bin/env python3
"""Query scheduler state and stack from the TCP debug server."""
import socket, json, sys, time

def query(cmd, port=4372):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect(('127.0.0.1', port))
    time.sleep(0.1)
    s.sendall(json.dumps(cmd).encode() + b'\n')
    data = b''
    for _ in range(20):
        try:
            chunk = s.recv(16384)
            if not chunk: break
            data += chunk
            if b'\n' in data: break
        except socket.timeout: break
    s.close()
    return json.loads(data.decode().strip())

# Query all three commands
for cmd_name in ["sched_state", "sched_stack", "mm3_state"]:
    try:
        r = query({"cmd": cmd_name, "id": 1})
        print(f"\n=== {cmd_name} ===")
        if cmd_name == "sched_state":
            print(f"Frame: {r.get('frame')}")
            print("Channels:")
            for ch in r.get('channels', []):
                print(f"  ch{ch['ch']}: state={ch['state']} timer={ch['timer']} "
                      f"b82={ch['b82']} b83={ch['b83']}")
            print("Recent resumes:")
            for e in r.get('resume_log', [])[-8:]:
                print(f"  f={e['f']} ch{e['ch']} st={e['st']} sp={e['sp']} "
                      f"-> {e['addr']} X={e['X']} Y={e['Y']}")
        elif cmd_name == "sched_stack":
            print(f"SP: {r.get('sp')}")
            stack = r.get('stack', [])
            print(f"Stack (SP+1..+32): {' '.join(stack[:16])}")
        elif cmd_name == "mm3_state":
            for k, v in r.items():
                if k != 'id':
                    print(f"  {k}: {v}")
    except Exception as e:
        print(f"{cmd_name}: {e}")
