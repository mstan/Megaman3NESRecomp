#!/usr/bin/env python3
import socket, json, time, sys
port = int(sys.argv[1]) if len(sys.argv) > 1 else 4373
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.settimeout(3)
s.connect(('127.0.0.1', port))
time.sleep(0.1)

# Query mm3_state
s.sendall(b'{"id":1,"cmd":"mm3_state"}\n')
time.sleep(0.15)
data = s.recv(4096)
print("state:", data.decode().strip())

# Query zero page $00-$FF for game state
s.sendall(b'{"id":2,"cmd":"read_ram","addr":"0x00","len":256}\n')
time.sleep(0.15)
data = s.recv(4096)
try:
    r = json.loads(data.decode().strip())
    if 'data' in r:
        bs = bytes.fromhex(r['data'])
        # Print interesting bytes
        print(f"\nZero page highlights:")
        print(f"  $14={bs[0x14]:02X} $16={bs[0x16]:02X} (ctrl)")
        print(f"  $22={bs[0x22]:02X} (stage) $31={bs[0x31]:02X} (mode) $46={bs[0x46]:02X} (sub)")
        print(f"  $F4={bs[0xF4]:02X} $F5={bs[0xF5]:02X} (banks)")
        print(f"  $F6={bs[0xF6]:02X} $F7={bs[0xF7]:02X} $FE={bs[0xFE]:02X} $FF={bs[0xFF]:02X}")
        # Channel table
        for c in range(4):
            o = 0x80 + c*4
            print(f"  ch{c} ($${o:02X}): state={bs[o]} timer={bs[o+1]} ${bs[o+2]:02X} ${bs[o+3]:02X}")
        # Dump $00-$4F to find game state
        print(f"\n$00-$4F:")
        for row in range(5):
            off = row * 16
            hex_str = ' '.join(f'{bs[off+i]:02X}' for i in range(16))
            print(f"  ${off:02X}: {hex_str}")
except Exception as e:
    print(f"parse error: {e}")
    print(f"raw: {data.decode().strip()[:200]}")

s.close()
