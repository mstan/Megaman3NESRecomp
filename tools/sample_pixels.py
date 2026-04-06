#!/usr/bin/env python3
"""Sample specific pixels from both screenshots to verify correctness."""
from PIL import Image

for path, label in [("C:/temp/native_fresh.png", "NATIVE"),
                    ("C:/temp/emu_fresh.png", "EMULATED")]:
    img = Image.open(path)
    print(f"\n{label}: mode={img.mode}, size={img.size}")
    px = img.load()

    # Sample a grid of points across the image
    for y in [0, 32, 64, 96, 120, 160, 200, 239]:
        vals = []
        for x in [0, 32, 64, 96, 128, 160, 192, 224, 255]:
            p = px[x, y]
            if isinstance(p, tuple):
                vals.append(f"({p[0]:3d},{p[1]:3d},{p[2]:3d})")
            else:
                vals.append(f"{p:3d}")
        print(f"  y={y:3d}: {' '.join(vals)}")

# Check a few specific portrait pixels more carefully
print("\n=== Portrait center pixels (tile faces) ===")
# Center of portrait 1 (Spark Man) should be at approx (52, 48)
# Center of portrait 5 (center/Mega Man) should be at approx (128, 112)
for x, y, desc in [(52, 48, "portrait 1 face"),
                    (128, 112, "portrait 5 face"),
                    (52, 112, "portrait 4 face"),
                    (128, 48, "portrait 2 face"),
                    (52, 176, "portrait 7 face"),
                    (128, 176, "portrait 8 face")]:
    for path, label in [("C:/temp/native_fresh.png", "NAT"),
                        ("C:/temp/emu_fresh.png", "EMU")]:
        img = Image.open(path)
        p = img.load()[x, y]
        print(f"  ({x:3d},{y:3d}) {desc:20s} {label}: RGB=({p[0]:3d},{p[1]:3d},{p[2]:3d})")
