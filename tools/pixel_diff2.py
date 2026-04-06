#!/usr/bin/env python3
"""Pixel diff with scroll offset compensation."""
from PIL import Image

nat = Image.open("C:/temp/native_fresh.png").convert("RGB")
emu = Image.open("C:/temp/emu_fresh.png").convert("RGB")

nat_px = nat.load()
emu_px = emu.load()

# The emulated side has scroll (16,1) while native has (0,0).
# This means emulated renders NT starting at pixel (16,1),
# so emulated screen pixel (x,y) corresponds to native pixel (x+16, y+1) in NT space.
# To compare: native pixel at (x,y) should match emulated pixel at (x-16, y-1)
# Or: shift emulated by (-16, -1) to align with native.

# Actually, with scroll_x=16 on emulated:
# emulated screen pixel 0 = nametable pixel 16
# native screen pixel 0 = nametable pixel 0
# So emulated pixel (x,y) shows same NT content as native pixel (x+16, y+1)
# Therefore: compare nat_px[x,y] with emu_px[(x-16)%256, (y-1)%240]

print("=== Comparing with shift compensation (dx=16, dy=1) ===")
total_match = 0
total_diff = 0
for y in range(240):
    for x in range(256):
        # Native pixel at (x,y) should match emulated at (x-16, y-1) mod screen
        ex = (x - 16) % 256
        ey = (y - 1) % 240
        nr, ng, nb = nat_px[x, y]
        er, eg, eb = emu_px[ex, ey]
        if (nr, ng, nb) == (er, eg, eb):
            total_match += 1
        else:
            total_diff += 1

print(f"Matching pixels: {total_match}")
print(f"Different pixels: {total_diff}")
print(f"Match rate: {total_match / (256*240) * 100:.1f}%")

# Also try no shift - maybe the scroll values are misleading
print("\n=== No shift comparison ===")
no_shift_diff = sum(1 for y in range(240) for x in range(256)
                    if nat_px[x,y] != emu_px[x,y])
print(f"Different pixels (no shift): {no_shift_diff}")

# Try various shifts to find best alignment
print("\n=== Searching for best alignment ===")
best_match = 0
best_dx = 0
best_dy = 0
for dy in range(-3, 4):
    for dx in range(-20, 20):
        matches = 0
        # Sample every 4th pixel for speed
        for y in range(0, 240, 4):
            for x in range(0, 256, 4):
                ex = (x - dx) % 256
                ey = (y - dy) % 240
                if nat_px[x,y] == emu_px[ex,ey]:
                    matches += 1
        if matches > best_match:
            best_match = matches
            best_dx = dx
            best_dy = dy

sampled_total = (256 // 4) * (240 // 4)
print(f"Best alignment: dx={best_dx}, dy={best_dy}")
print(f"Match rate at best alignment: {best_match}/{sampled_total} = {best_match/sampled_total*100:.1f}%")

# Show pixel values at specific known positions
print("\n=== Sample pixels at portrait positions ===")
# Top-left portrait starts at approximately tile (3,4) = pixel (24,32)
for y in [32, 96, 160]:
    for x in [24, 120, 216]:
        nr, ng, nb = nat_px[x, y]
        er, eg, eb = emu_px[x, y]
        print(f"  ({x:3d},{y:3d}): NAT=({nr:3d},{ng:3d},{nb:3d}) EMU=({er:3d},{eg:3d},{eb:3d}) {'MATCH' if (nr,ng,nb)==(er,eg,eb) else 'DIFF'}")
