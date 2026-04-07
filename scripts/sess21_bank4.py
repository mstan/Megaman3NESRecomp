"""Extract bank 4 from MM3 ROM and disassemble around $81B1."""
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
print(f"PRG total: {prg} bytes = {prg//8192} 8KB banks")

# In MMC3, banks are 8KB. Bank 4 is the 5th 8KB bank (0-indexed).
# It maps to $8000-$9FFF or $A000-$BFFF depending on R0/R1 mode.
# Bank index in g_ram[0xF4] / [0xF5] uses some game-specific encoding.
# Let's check ALL 8KB banks for the pattern at offset 0x01B1 (= $81B1 - $8000)
# to find which file-bank corresponds to "bank 4 $81B1"

offset = 0x1B1  # $81B1 in 8KB bank starting at $8000
print(f"\nLooking for sensible code at offset {offset:04X} of each 8KB bank:")
for bk in range(prg // 8192):
    start = 16 + bk * 8192
    bank = d[start:start + 8192]
    bytes_at = bank[offset:offset + 32]
    print(f"  bank {bk:2d}: {bytes_at.hex()}")
