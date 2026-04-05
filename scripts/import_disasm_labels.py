#!/usr/bin/env python3
"""Import function labels from the Mega Man 3 community disassembly into game.toml.

Only imports addresses that are likely function entry points:
1. Named labels (not code_XXYYYY) - these are human-identified subroutines
2. JSR targets - any label that appears as a JSR operand
3. JMP targets from indirect jumps or cross-bank calls

Does NOT import generic code_XXYYYY branch targets (BEQ/BNE/etc).
"""

import re
import urllib.request
import sys

BASE_URL = "https://raw.githubusercontent.com/refreshing-lemonade/megaman3-disassembly/master/"

BANK_FILES = []
for i in range(0x1A):
    BANK_FILES.append(f"bank{i:02X}.asm")
BANK_FILES.append("bank1A_1B.asm")
BANK_FILES.append("bank1C_1D.asm")
BANK_FILES.append("bank1E_1F.asm")


def fetch_file(filename):
    url = BASE_URL + filename
    print(f"Fetching {url} ...", flush=True)
    try:
        req = urllib.request.Request(url)
        with urllib.request.urlopen(req, timeout=30) as resp:
            return resp.read().decode("utf-8", errors="replace")
    except Exception as e:
        print(f"  ERROR: {e}", flush=True)
        return None


def parse_file(text):
    """Parse a bank .asm file.

    Returns:
        named_labels: dict {bank: set of CPU addresses} - human-named labels
        jsr_targets: set of label names that are JSR targets
        all_labels: dict {label_name: (bank, addr)} - all label definitions
    """
    named_labels = {}  # bank -> set of addrs
    jsr_target_names = set()  # label names used as JSR operands
    jmp_target_names = set()  # label names used as JMP operands
    all_label_defs = {}  # label_name -> (bank, addr)

    current_bank = None

    lines = text.split("\n")

    for i, line in enumerate(lines):
        stripped = line.strip()

        # Track bank directive
        m = re.match(r'^bank\s+\$([0-9A-Fa-f]{1,2})\s*$', stripped)
        if m:
            current_bank = int(m.group(1), 16)
            continue

        # Find JSR targets: "JSR label_name" or "JSR code_XXYYYY"
        m = re.search(r'\bJSR\s+(\w+)', stripped)
        if m:
            target = m.group(1)
            # Skip absolute address JSRs like "JSR $XXXX"
            if not target.startswith('$'):
                jsr_target_names.add(target)

        # Find JMP targets: "JMP label_name" or "JMP code_XXYYYY"
        m = re.search(r'\bJMP\s+(\w+)', stripped)
        if m:
            target = m.group(1)
            if not target.startswith('$'):
                jmp_target_names.add(target)

        # Match label definition at start of line
        m = re.match(r'^(\w+):', line)
        if not m:
            continue

        label = m.group(1)

        # Skip data labels
        is_data = False
        for j in range(i + 1, min(i + 5, len(lines))):
            next_stripped = lines[j].strip()
            if not next_stripped or next_stripped.startswith(';'):
                continue
            if re.match(r'^d[bw]\s', next_stripped):
                is_data = True
            break

        if is_data:
            continue

        # Get address from code_XXYYYY format
        m2 = re.match(r'^code_([0-9A-Fa-f]{2})([0-9A-Fa-f]{4})$', label)
        if m2:
            bank = int(m2.group(1), 16)
            addr = int(m2.group(2), 16)
            all_label_defs[label] = (bank, addr)
            continue

        # Named label - get address from comment on next instruction line
        for j in range(i, min(i + 3, len(lines))):
            cm = re.search(r';\s*\$([0-9A-Fa-f]{2})([0-9A-Fa-f]{4})\s*\|', lines[j])
            if cm:
                bank = int(cm.group(1), 16)
                addr = int(cm.group(2), 16)
                all_label_defs[label] = (bank, addr)
                # Named labels are always included
                if bank not in named_labels:
                    named_labels[bank] = set()
                named_labels[bank].add(addr)
                break

    return named_labels, jsr_target_names, jmp_target_names, all_label_defs


def parse_existing_toml(path):
    """Parse existing [functions] section from game.toml."""
    results = {}
    current_key = None
    in_functions = False

    with open(path, 'r') as f:
        for line in f:
            stripped = line.strip()

            if stripped == '[functions]':
                in_functions = True
                continue

            if in_functions:
                if stripped.startswith('[') and not stripped.startswith('[['):
                    break

                m = re.match(r'^(\w+)\s*=\s*\[', stripped)
                if m:
                    current_key = m.group(1)
                    if current_key not in results:
                        results[current_key] = set()
                    vals = re.findall(r'0x([0-9A-Fa-f]+)', stripped)
                    for v in vals:
                        results[current_key].add(int(v, 16))
                    if ']' in stripped:
                        current_key = None
                    continue

                if current_key:
                    vals = re.findall(r'0x([0-9A-Fa-f]+)', stripped)
                    for v in vals:
                        results[current_key].add(int(v, 16))
                    if ']' in stripped:
                        current_key = None

    return results


def write_functions_section(existing_toml_path, merged):
    """Rewrite the [functions] section in game.toml with merged addresses."""
    with open(existing_toml_path, 'r') as f:
        lines = f.readlines()

    func_start = None
    for i, line in enumerate(lines):
        if line.strip() == '[functions]':
            func_start = i
            break

    if func_start is None:
        print("ERROR: [functions] section not found in game.toml")
        sys.exit(1)

    func_end = len(lines)
    for i in range(func_start + 1, len(lines)):
        if lines[i].strip().startswith('[') and not lines[i].strip().startswith('[['):
            func_end = i
            break

    new_lines = ['[functions]\n']

    if 'fixed' in merged and merged['fixed']:
        addrs = sorted(merged['fixed'])
        new_lines.append('fixed = [\n')
        for addr in addrs:
            new_lines.append(f'    0x{addr:04X},\n')
        new_lines.append(']\n')

    bank_keys = []
    for key in merged:
        if key.startswith('bank'):
            try:
                num = int(key[4:])
                bank_keys.append((num, key))
            except ValueError:
                pass
    bank_keys.sort()

    for num, key in bank_keys:
        if merged[key]:
            addrs = sorted(merged[key])
            new_lines.append(f'{key} = [\n')
            for addr in addrs:
                new_lines.append(f'    0x{addr:04X},\n')
            new_lines.append(']\n')

    result = lines[:func_start] + new_lines + lines[func_end:]

    with open(existing_toml_path, 'w') as f:
        f.writelines(result)


def main():
    toml_path = "game.toml"

    print("Parsing existing game.toml [functions]...", flush=True)
    existing = parse_existing_toml(toml_path)
    total_existing = sum(len(v) for v in existing.values())
    print(f"  Total existing: {total_existing}", flush=True)

    # Collect data from all bank files
    all_named = {}       # bank -> set of addrs
    all_jsr_targets = set()   # label names
    all_jmp_targets = set()   # label names
    all_label_defs = {}  # label_name -> (bank, addr)

    for filename in BANK_FILES:
        text = fetch_file(filename)
        if text is None:
            continue
        named, jsr_targets, jmp_targets, label_defs = parse_file(text)

        for bank, addrs in named.items():
            if bank not in all_named:
                all_named[bank] = set()
            all_named[bank].update(addrs)

        all_jsr_targets.update(jsr_targets)
        all_jmp_targets.update(jmp_targets)
        all_label_defs.update(label_defs)

    # Build the set of addresses to add: named labels + JSR-targeted code_ labels
    new_addrs = {}  # bank -> set of addrs

    # Add all named labels
    for bank, addrs in all_named.items():
        if bank not in new_addrs:
            new_addrs[bank] = set()
        new_addrs[bank].update(addrs)

    # Add code_ labels that are JSR targets (definite function entries)
    jsr_added = 0
    for label_name in all_jsr_targets:
        if label_name in all_label_defs:
            bank, addr = all_label_defs[label_name]
            if bank not in new_addrs:
                new_addrs[bank] = set()
            new_addrs[bank].add(addr)
            jsr_added += 1

    # Also add code_ labels that are JMP targets from cross-bank context
    # (JMP to a code_ label in a different bank = likely dispatch target)
    jmp_added = 0
    for label_name in all_jmp_targets:
        if label_name in all_label_defs:
            bank, addr = all_label_defs[label_name]
            if bank not in new_addrs:
                new_addrs[bank] = set()
            new_addrs[bank].add(addr)
            jmp_added += 1

    print(f"\nDisassembly function entries found:", flush=True)
    total_named = sum(len(v) for v in all_named.values())
    print(f"  Named labels: {total_named}", flush=True)
    print(f"  JSR-targeted code labels: {jsr_added}", flush=True)
    print(f"  JMP-targeted code labels: {jmp_added}", flush=True)
    total_disasm = sum(len(v) for v in new_addrs.values())
    print(f"  Total unique: {total_disasm}", flush=True)

    for bank in sorted(new_addrs.keys()):
        print(f"  Bank ${bank:02X}: {len(new_addrs[bank])} entries")

    # Merge with existing
    merged = {}
    for key, addrs in existing.items():
        merged[key] = set(addrs)

    for bank, addrs in new_addrs.items():
        if bank >= 0x1E:
            key = 'fixed'
        else:
            key = f'bank{bank}'

        if key not in merged:
            merged[key] = set()

        new_count = len(addrs - merged.get(key, set()))
        if new_count > 0:
            print(f"  Adding {new_count} new addresses to {key}")
        merged[key].update(addrs)

    total_merged = sum(len(v) for v in merged.values())
    print(f"\nTotal merged: {total_merged} (was {total_existing}, added {total_merged - total_existing})", flush=True)

    print(f"\nWriting updated [functions] to {toml_path}...", flush=True)
    write_functions_section(toml_path, merged)
    print("Done.", flush=True)


if __name__ == "__main__":
    main()
