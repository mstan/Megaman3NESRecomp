"""Find ALL bank-switch sites in the fixed bank (16KB bank 15) — these are
   the central dispatchers that map switchable banks."""
import sys
sys.path.insert(0, "F:/Projects/nesrecomp-release/megaman3/scripts")
from sess21_disasm import OPS

f = open(r"F:/Projects/nesrecomp-release/megaman3/Mega-Man 3 # NES.NES", "rb")
d = f.read()
prg = d[4] * 16 * 1024
fixed_off = 16 + prg - 0x4000  # last 16KB
fixed = d[fixed_off : fixed_off + 0x4000]

# Search for: 8D 01 80 (STA $8001) in fixed bank
print("=== STA $8001 sites in fixed bank ===")
i = 0
hits = []
while i < len(fixed) - 2:
    if fixed[i] == 0x8D and fixed[i+1] == 0x01 and fixed[i+2] == 0x80:
        cpu = 0xC000 + i
        # What was loaded into A right before? (LDA #imm = A9 imm, 2 bytes back)
        prev_imm = None
        if i >= 2 and fixed[i-2] == 0xA9:
            prev_imm = fixed[i-1]
        prev2_imm = None
        if i >= 6:
            # Look back for any LDA #imm
            for j in range(2, 10):
                if i - j >= 0 and fixed[i-j] == 0xA9:
                    prev2_imm = (i-j, fixed[i-j+1])
                    break
        hits.append((cpu, prev_imm, prev2_imm))
    i += 1

for cpu, p1, p2 in hits:
    p1_str = f"#${p1:02X}" if p1 is not None else "??"
    print(f"  ${cpu:04X}: STA $8001  (immediately preceding LDA {p1_str})")

# Also search for: 8D 00 80 (STA $8000)
print(f"\n=== STA $8000 sites in fixed bank ===")
i = 0
while i < len(fixed) - 2:
    if fixed[i] == 0x8D and fixed[i+1] == 0x00 and fixed[i+2] == 0x80:
        cpu = 0xC000 + i
        prev_imm = None
        if i >= 2 and fixed[i-2] == 0xA9:
            prev_imm = fixed[i-1]
        p1_str = f"#${prev_imm:02X}" if prev_imm is not None else "??"
        print(f"  ${cpu:04X}: STA $8000  (LDA {p1_str})")
    i += 1
