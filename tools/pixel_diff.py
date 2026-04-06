#!/usr/bin/env python3
"""Pixel-level comparison of native vs emulated screenshots."""
from PIL import Image
import sys

nat = Image.open("C:/temp/native_fresh.png").convert("RGB")
emu = Image.open("C:/temp/emu_fresh.png").convert("RGB")

nat_px = nat.load()
emu_px = emu.load()

w, h = nat.size
print(f"Native: {nat.size}, Emulated: {emu.size}")

# Count differences per 8x8 tile region
diff_tiles = []
total_diff = 0
for ty in range(h // 8):
    for tx in range(w // 8):
        tile_diffs = 0
        for py in range(8):
            for px_x in range(8):
                x = tx * 8 + px_x
                y = ty * 8 + py
                if x >= w or y >= h:
                    continue
                nr, ng, nb = nat_px[x, y]
                er, eg, eb = emu_px[x, y]
                if (nr, ng, nb) != (er, eg, eb):
                    tile_diffs += 1
                    total_diff += 1
        if tile_diffs > 0:
            diff_tiles.append((tx, ty, tile_diffs))

print(f"\nTotal pixel differences: {total_diff}")
print(f"Tiles with differences: {len(diff_tiles)} / {(w//8) * (h//8)}")

# Show tile difference map
print("\nDifference map (tile grid, '*' = different):")
for ty in range(h // 8):
    row = ""
    for tx in range(w // 8):
        has_diff = any(t[0] == tx and t[1] == ty for t in diff_tiles)
        row += "*" if has_diff else "."
    print(f"  Row {ty:2d}: {row}")

# Show first 20 tile differences with pixel counts
print(f"\nFirst 20 tile differences:")
for tx, ty, count in diff_tiles[:20]:
    print(f"  Tile ({tx:2d},{ty:2d}) = pixel ({tx*8:3d},{ty*8:3d}): {count} pixel diffs")

# Create diff image
diff = Image.new("RGB", (w, h))
diff_px = diff.load()
for y in range(h):
    for x in range(w):
        nr, ng, nb = nat_px[x, y]
        er, eg, eb = emu_px[x, y]
        if (nr, ng, nb) != (er, eg, eb):
            diff_px[x, y] = (255, 0, 0)  # red for different
        else:
            # dim the matching pixels
            diff_px[x, y] = (nr // 4, ng // 4, nb // 4)
diff.save("C:/temp/pixel_diff.png")
print("\nDiff image saved to C:/temp/pixel_diff.png")
