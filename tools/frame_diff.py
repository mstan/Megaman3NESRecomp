#!/usr/bin/env python3
"""
frame_diff.py — Capture two consecutive frames from the ring buffer and diff all state.
Usage: python3 frame_diff.py [port] [frame_a] [frame_b]
  If frame_a/b not given, uses current frame - 2 and current frame - 1.
"""
import socket, json, sys, time

PORT = int(sys.argv[1]) if len(sys.argv) > 1 else 4372

def tcp_cmd(cmd_dict, port=PORT):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect(("127.0.0.1", port))
    s.sendall((json.dumps(cmd_dict) + "\n").encode())
    buf = b""
    while b"\n" not in buf:
        chunk = s.recv(4096)
        if not chunk:
            break
        buf += chunk
    s.close()
    return json.loads(buf.decode().strip())

def get_frame(f, port=PORT):
    return tcp_cmd({"cmd": "get_frame", "frame": f}, port)

def read_frame_mem(f, addr, length, port=PORT):
    return tcp_cmd({"cmd": "read_frame_ram", "frame": f, "addr": hex(addr), "len": length}, port)

# Get current frame
ping = tcp_cmd({"cmd": "ping"})
cur = ping.get("frame", 0)
print(f"Current frame: {cur}")

if len(sys.argv) >= 4:
    fa, fb = int(sys.argv[2]), int(sys.argv[3])
else:
    fa, fb = cur - 2, cur - 1

print(f"Comparing frame {fa} (A) vs frame {fb} (B)\n")

a = get_frame(fa)
b = get_frame(fb)

if not a.get("ok") or not b.get("ok"):
    print(f"ERROR: Frame A ok={a.get('ok')}, Frame B ok={b.get('ok')}")
    sys.exit(1)

# --- Diff PPU ---
print("=" * 60)
print("PPU STATE")
print("=" * 60)
ppu_fields = ["ctrl", "mask", "status", "oamaddr", "scroll_x", "scroll_y",
              "ppuaddr", "addr_latch", "scroll_latch", "data_buf",
              "hud_sx", "hud_sy", "hud_ctrl", "spr0_active", "spr0_reads"]
for f in ppu_fields:
    va, vb = a["ppu"][f], b["ppu"][f]
    tag = " <-- DIFF" if va != vb else ""
    print(f"  {f:20s}: A={va}  B={vb}{tag}")

# --- Diff Mapper ---
print("\n" + "=" * 60)
print("MAPPER STATE (MMC3)")
print("=" * 60)
mapper_fields = ["type", "mirror", "mmc3_bank_sel",
                 "mmc3_irq_latch", "mmc3_irq_counter",
                 "mmc3_irq_reload", "mmc3_irq_enabled"]
for f in mapper_fields:
    va, vb = a["mapper"][f], b["mapper"][f]
    tag = " <-- DIFF" if va != vb else ""
    print(f"  {f:20s}: A={va}  B={vb}{tag}")

# MMC3 regs individually
print("  MMC3 CHR/PRG registers:")
for i in range(8):
    va = a["mapper"]["mmc3_regs"][i]
    vb = b["mapper"]["mmc3_regs"][i]
    tag = " <-- DIFF" if va != vb else ""
    rname = f"R{i}"
    print(f"    {rname}: A={va}  B={vb}{tag}")

# --- Diff CPU ---
print("\n" + "=" * 60)
print("CPU STATE")
print("=" * 60)
cpu_fields = ["A", "X", "Y", "S", "P", "N", "V", "D", "I", "Z", "C"]
for f in cpu_fields:
    va, vb = a["cpu"][f], b["cpu"][f]
    tag = " <-- DIFF" if va != vb else ""
    print(f"  {f:5s}: A={va}  B={vb}{tag}")

# --- Diff Timing ---
print("\n" + "=" * 60)
print("TIMING")
print("=" * 60)
print(f"  ops_count:    A={a['timing']['ops_count']}  B={b['timing']['ops_count']}")
print(f"  vblank_depth: A={a['timing']['vblank_depth']}  B={b['timing']['vblank_depth']}")

# --- Diff game_data ---
print("\n" + "=" * 60)
print("GAME DATA (hex)")
print("=" * 60)
gda = a.get("game_data", "")
gdb = b.get("game_data", "")
print(f"  A: {gda}")
print(f"  B: {gdb}")
if gda != gdb:
    print("  DIFFERS at bytes:", end="")
    for i in range(0, min(len(gda), len(gdb)), 2):
        if gda[i:i+2] != gdb[i:i+2]:
            print(f" [{i//2}]={gda[i:i+2]}vs{gdb[i:i+2]}", end="")
    print()

# --- Diff last_func ---
print(f"\n  last_func: A={a.get('last_func','')}  B={b.get('last_func','')}")

# --- Diff key zero-page bytes ---
print("\n" + "=" * 60)
print("KEY ZERO PAGE BYTES")
print("=" * 60)
zpa = a.get("ram_zp", "")
zpb = b.get("ram_zp", "")
key_addrs = {
    0xFD: "scroll_nt_src",
    0x7A: "scroll_nt_copy",
    0xFF: "PPUCTRL_shadow",
    0xFE: "PPUMASK_shadow",
    0xF4: "PRG_R6",
    0xF5: "PRG_R7",
    0xF6: "bank_switch_flag",
    0x31: "game_mode",
    0x46: "sub_mode",
    0x22: "stage_num",
    0x29: "stage_init",
    0x9C: "IRQ_vec_lo",
    0x9D: "IRQ_vec_hi",
}
for addr, name in sorted(key_addrs.items()):
    va = zpa[addr*2:addr*2+2] if len(zpa) > addr*2+1 else "??"
    vb = zpb[addr*2:addr*2+2] if len(zpb) > addr*2+1 else "??"
    tag = " <-- DIFF" if va != vb else ""
    print(f"  ${addr:02X} ({name:20s}): A=0x{va}  B=0x{vb}{tag}")

# --- Check full zero page diffs ---
diffs = []
for i in range(256):
    va = zpa[i*2:i*2+2]
    vb = zpb[i*2:i*2+2]
    if va != vb:
        diffs.append((i, va, vb))
print(f"\n  Total ZP diffs: {len(diffs)}")
if diffs:
    for addr, va, vb in diffs[:30]:
        print(f"    ${addr:02X}: A=0x{va} B=0x{vb}")
    if len(diffs) > 30:
        print(f"    ... and {len(diffs)-30} more")

# --- CHR RAM diff (sample first 256 bytes from each 1KB bank) ---
print("\n" + "=" * 60)
print("CHR RAM DIFF (via ring buffer)")
print("=" * 60)
chr_diffs_total = 0
for bank in range(8):
    base = 0x10000 + bank * 0x400
    ca = read_frame_mem(fa, base, 256)
    cb = read_frame_mem(fb, base, 256)
    ha = ca.get("hex", "")
    hb = cb.get("hex", "")
    ndiff = sum(1 for i in range(0, min(len(ha), len(hb)), 2) if ha[i:i+2] != hb[i:i+2])
    chr_diffs_total += ndiff
    tag = f" <-- {ndiff} byte diffs" if ndiff > 0 else ""
    print(f"  CHR bank {bank} ($0x{bank*0x400:04X}): first 256 bytes{tag}")

print(f"\n  Total CHR diffs (sampled): {chr_diffs_total}")

# --- Palette diff ---
print("\n" + "=" * 60)
print("PALETTE DIFF")
print("=" * 60)
pa = read_frame_mem(fa, 0x3F00, 32)
pb = read_frame_mem(fb, 0x3F00, 32)
pha = pa.get("hex", "")
phb = pb.get("hex", "")
pal_diffs = sum(1 for i in range(0, min(len(pha), len(phb)), 2) if pha[i:i+2] != phb[i:i+2])
print(f"  A: {pha}")
print(f"  B: {phb}")
print(f"  Diffs: {pal_diffs}")

# --- Summary ---
print("\n" + "=" * 60)
print("SUMMARY")
print("=" * 60)

any_diff = False
# Check PPU
for f in ppu_fields:
    if a["ppu"][f] != b["ppu"][f]:
        print(f"  PPU.{f} DIFFERS: {a['ppu'][f]} vs {b['ppu'][f]}")
        any_diff = True
# Check mapper
for f in mapper_fields:
    if a["mapper"][f] != b["mapper"][f]:
        print(f"  MAPPER.{f} DIFFERS: {a['mapper'][f]} vs {b['mapper'][f]}")
        any_diff = True
for i in range(8):
    if a["mapper"]["mmc3_regs"][i] != b["mapper"]["mmc3_regs"][i]:
        print(f"  MMC3 R{i} DIFFERS: {a['mapper']['mmc3_regs'][i]} vs {b['mapper']['mmc3_regs'][i]}")
        any_diff = True
if chr_diffs_total > 0:
    print(f"  CHR RAM DIFFERS: {chr_diffs_total} bytes (sampled)")
    any_diff = True
if pal_diffs > 0:
    print(f"  PALETTE DIFFERS: {pal_diffs} bytes")
    any_diff = True
if diffs:
    print(f"  ZERO PAGE: {len(diffs)} bytes differ")
    any_diff = True

if not any_diff:
    print("  NO DIFFERENCES FOUND in PPU/mapper/CHR/palette")
    print("  Bug may be in rendering pipeline, not captured state")
