#!/usr/bin/env python3
import json, sys
with open('C:/temp/divergence_catalog.json') as f:
    data = json.load(f)
print(f"Offset: {data['offset']}, Samples: {data['samples']}")
print(f"Catalog entries: {len(data['catalog'])}")
print()

# Show non-nametable entries first (most actionable)
priority = [e for e in data['catalog'] if e['category'] not in ('Nametable', 'CHR_RAM')]
print(f"=== Priority divergences (non-Nametable/CHR, {len(priority)} entries) ===\n")
print(f"{'Category':<12} {'Field':<25} {'First':<6} {'Native':<15} {'Emulated':<15} {'Count':<6}")
print("-" * 80)
for e in priority[:60]:
    print(f"{e['category']:<12} {e['field']:<25} {e['first_emu_frame']:<6} {e['native_val']:<15} {e['emu_val']:<15} {e['occurrences']:<6}")

# Category summary
from collections import Counter
cats = Counter()
for e in data['catalog']:
    cats[e['category']] += e['occurrences']
print(f"\n=== By category ===")
for cat, count in cats.most_common():
    print(f"  {cat}: {count}")
