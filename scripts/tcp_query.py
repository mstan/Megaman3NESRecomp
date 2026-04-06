import socket, json, sys

port = int(sys.argv[1]) if len(sys.argv) > 1 else 4372
cmd = sys.argv[2] if len(sys.argv) > 2 else 'mm3_state'

s = socket.socket()
s.settimeout(3)
s.connect(('127.0.0.1', port))
s.sendall((json.dumps({'cmd': cmd}) + '\n').encode())
data = s.recv(8192)
print(data.decode().strip())
s.close()
