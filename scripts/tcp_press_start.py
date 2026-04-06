import socket, time

s = socket.socket()
s.connect(('127.0.0.1', 4372))

# Press START (0x10)
s.sendall(b'{"cmd":"set_input","buttons":16}\n')
print("set_input START:", s.recv(4096).decode().strip())
time.sleep(0.2)

# Release
s.sendall(b'{"cmd":"set_input","buttons":0}\n')
print("set_input release:", s.recv(4096).decode().strip())
time.sleep(2)

# Check state
s.sendall(b'{"cmd":"mm3_state"}\n')
print("state:", s.recv(4096).decode().strip())
s.close()
