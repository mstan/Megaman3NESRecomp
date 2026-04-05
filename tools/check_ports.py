import socket, json
for port in [4372, 4373]:
    try:
        s = socket.socket()
        s.settimeout(3)
        s.connect(('127.0.0.1', port))
        s.sendall(b'{"cmd":"ping"}\n')
        print(f'Port {port}: {s.recv(4096).decode().strip()}')
        s.close()
    except Exception as e:
        print(f'Port {port}: {e}')
