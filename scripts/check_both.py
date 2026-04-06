import socket, json, sys, time

time.sleep(8)

def query(port, cmd):
    s = socket.socket()
    s.settimeout(3)
    try:
        s.connect(('127.0.0.1', port))
    except Exception as e:
        return {'error': str(e)}
    s.sendall((json.dumps(cmd) + '\n').encode())
    data = s.recv(8192)
    s.close()
    return json.loads(data.decode())

native = query(4372, {'cmd': 'mm3_state'})
print('NATIVE:', json.dumps(native))
emulated = query(4373, {'cmd': 'mm3_state'})
print('EMULATED:', json.dumps(emulated))
